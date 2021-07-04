/*
    Method_Stats.C
    
    Disclaimer: The word "submethod" merely indicates the variations of the 
                default methods outlined by the TMVA User Manual. They are
                created during TMVA Classification when choosing a name for
                a method to book. "Submethod" is only coined for the purpose
                of explaining this program
        
    Goal: To take in ROOT files output by TMVA Classification and to extract the
          minimum cut, signal efficiency, and background efficiency from the 
          testing and training trees given a booked machine learning submethod.
          This is done twice, with and without a Punzi-Term. Also conducts a 
          Kolmogorov-Smirnov test on the signal and background of each submethod 
          using the training tree of the root file. All values are saved to 
          respective files, known as "method_stats_ks.txt", 
          "method_stats_optimizeMin1.txt", and "method_stats_optimizeMin2.txt".
          
          All machine learning methods are outlined in the TMVA User Manual.
          
    Instructions: In order to run, please ensure that you have ROOT version 
                  6.12.06 or higher. Also, if you wish to run this program
                  on multiple output ROOT files, put them in the same directory
                  so as to be less tedious. Also, ensure that the output root 
                  files end in "_out.root". Start the ROOT interactive shell
                  in the same directory as this file, then type
                  ".L Method_Stats.C", hit enter, then type "main()". Doing 
                  this will prompt you, so just follow the directions. The 
                  files created from running this program will be created in
                  the same directory as this file.
    
    Warning: If you are running this program consecutively, if the output stats
             files of this program already exists in the directory of this file
             and this program does succeed in finding the directory entered by 
             the user, the existing stats files will be wiped to make space
             for the new output of this program. To avoid this, ensure that 
             you move the stats files that you wish to save to an alternate
             directory.
             
             Also, the name of the submethods in the stats files are determined by
             the name used when the submethod of the TMVA Classification was used.
             As such, if the output ROOT files have submethods of the same name 
             as some other output ROOT file in the same directory, they will have
             the same name in the stats files. You can still tell which submethod 
             belongs to which output root file in the stats files as submethods of
             the same output ROOT file are grouped together by row in the stats 
             files. To eliminate any ambiguity, change the names of all submethods
             in all of the output ROOT files such that they are distinct. I suggest
             changing the name to reflect the keyword arguments when the submethod
             was booked.
             
    Acknowledgments: Yury Kolomensky for providing the source code for the optimizeMin
                     functions used.
                     
                     StackOverflow user Peter Parker for providing the code to access
                     a directory and list the files. Their code can be found here:
                     
                     https://stackoverflow.com/questions/612097/how-can-i-get-the-
                     list-of-files-in-a-directory-using-c-or-c
                     
    Author: Borna Maghoul
*/

#include <iostream>
#include <dirent.h>
#include <sys/types.h>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip>
#include "TTree.h"
#include "TFile.h"
#include "TH1F.h"
#include "TString.h"
#include "TMVA/mvas.h"
#include "TMVA/Types.h"
#include "TLegend.h"
#include "TText.h"
#include "TH2.h"
#include "TMVA/TMVAGui.h"
#include "TMVA/Types.h"
#include <iostream>
#include <vector>
#include <TError.h> 
#include "TList.h"
#include "TROOT.h"
#include "TKey.h"
#include "TString.h"
#include "TControlBar.h"
#include "TObjString.h"
#include "TClass.h"

using namespace std;

// Scans histograms from method and finds the optimal cut and the
// associated signal and background efficiency from the cut
double* optimizeMin1(TTree* tree, const char* var, float scaleB = 1,
                     float xMin=-2, float xMax=2, int nBins=1000,
                     const char* outFile=0)
    {
        // Creates signal, background, and FOM histograms
        TString title;
        title = var;
        title += ": Signal";
        TH1F* hSig = new TH1F("hSig",title.Data(),nBins,xMin,xMax);

        title = var;
        title += ": Background";
        TH1F* hBkg = new TH1F("hBkg",title.Data(),nBins,xMin,xMax);

        title = var;
        title += ": FOM";
        TH1F* hOut = new TH1F("hOut",title.Data(),nBins,xMin,xMax);
        
        // Associates signal and background histograms with trees from output root file
        TCanvas *canv = new TCanvas("canv","canv");
        char expr[100];
        sprintf(expr,"%s>>hSig",var);
        tree->Draw(expr,"classID==0");
        sprintf(expr,"%s>>hBkg",var);
        tree->Draw(expr,"classID==1");
        canv->Close();

        /*
            Loop operates by determining the total number of signal and background
            events to the right of the current bin, which is indexed by the loop.
            The total number of events to the right of the bins is easily found
            by adding all the events in the bins to the right of the indexed bin.
            The number of the signal and background events in this iteration are
            then compared to one another to calculate the FOM, which can be thought
            of as fidelity of the signal. This FOM is then catalogued in the FOM
            histogram
        */
        for (int i=1;i<nBins;i++)
            {
                double nSig = hSig->Integral(i+1,nBins);
                double nBkg = hBkg->Integral(i+1,nBins)*scaleB;
                double Sig = 0;
            
                if (nBkg >= 0) 
                  Sig = nSig/(1.5+sqrt(nBkg));   
                
                hOut->SetBinContent(i,Sig);
            }
    
        // Minimum cut is determined by finding the bin where the FOM is reaches its
        // maximum, then taking the right edge of the bin as the minumum cut.
        int binMax = hOut->GetMaximumBin()+1;
        double min_cut = hOut->GetBinLowEdge(binMax);
    
        /*
            Signal efficiency is calculated by dividing the sum of signal events in all 
            bins to the right of the minimum cut set by the FOM by the total number of
            of signal events in all bins of the histogram. The background efficiency
            was calculated using the same method, but for the background histogram.
            Maximum signal efficiency and minimum background efficiency is being sought.
        */
        double sig_eff = hSig->Integral(binMax,nBins)/hSig->Integral(0,nBins);
        double bkg_eff = hBkg->Integral(binMax,nBins)/hBkg->Integral(0,nBins);
        
        // Deleting the histograms so as to not interfere with the optimization for 
        // other methods.
        delete gROOT->FindObject("hSig");
        delete gROOT->FindObject("hBkg");
        delete gROOT->FindObject("hOut");
    
        // Array containing the minimum cut, signal efficiency, and background
        // efficiency returned.
        double* arr = new double[3];
        arr[0] = min_cut;
        arr[1] = sig_eff;
        arr[2] = bkg_eff;
        return arr;
    }

/*
    Scans histograms from method and finds the optimal cut and the
    associated signal and background efficiency from the cut, this
    time utilizing a Punzi term
*/
double* optimizeMin2(TTree* tree, const char* var, float scaleB = 1,
                     float xMin=-2, float xMax=2, int nBins=1000,
                     const char* outFile=0)
    {
        // Creates signal, background, and FOM histograms
        TString title;
        title = var;
        title += ": Signal";
        TH1F* hSig = new TH1F("hSig",title.Data(),nBins,xMin,xMax);

        title = var;
        title += ": Background";
        TH1F* hBkg = new TH1F("hBkg",title.Data(),nBins,xMin,xMax);

        title = var;
        title += ": FOM";
        TH1F* hOut = new TH1F("hOut",title.Data(),nBins,xMin,xMax);

        // Associates signal and background histograms with trees from output root file
        TCanvas *canv = new TCanvas("canv","canv");
        char expr[100];
        sprintf(expr,"%s>>hSig",var);
        tree->Draw(expr,"classID==0");
        sprintf(expr,"%s>>hBkg",var);
        tree->Draw(expr,"classID==1");
        canv->Close();

        /*
            Loop operates by determining the total number of signal and background
            events to the right of the current bin, which is indexed by the loop.
            The total number of events to the right of the bins is easily found
            by adding all the events in the bins to the right of the indexed bin.
            The number of the signal and background events in this iteration are
            then compared to one another to calculate the FOM, which can be thought
            of as fidelity of the signal. This FOM is then catalogued in the FOM
            histogram
        */
        for (int i=1;i<nBins;i++)
            {
                float x0 = hSig->GetBinCenter(i);
                float xCut = hSig->GetBinLowEdge(i+1);
                double nSig = hSig->Integral(i+1,nBins);
                double nBkg = hBkg->Integral(i+1,nBins)*scaleB;
                double Sig = 0;
            
                if ( nBkg > 0 )
                    {   
                        // With Punzi Term
                        Sig = nSig/(nBkg+1.6*sqrt(nBkg));
                    }
            
                hOut->SetBinContent(i,Sig);
            }
            
            // Minimum cut is determined by finding the bin where the FOM is reaches its
            // maximum, then taking the right edge of the bin as the minumum cut.
            int binMax = hOut->GetMaximumBin()+1;
            double min_cut = hOut->GetBinLowEdge(binMax);
    
            /*
                Signal efficiency is calculated by dividing the sum of signal events in all 
                bins to the right of the minimum cut set by the FOM by the total number of
                of signal events in all bins of the histogram. The background efficiency
                was calculated using the same method, but for the background histogram.
                Maximum signal efficiency and minimum background efficiency is being sought.
            */
            double sig_eff = hSig->Integral(binMax,nBins)/hSig->Integral(0,nBins);
            double bkg_eff = hBkg->Integral(binMax,nBins)/hBkg->Integral(0,nBins);
            
            // Deleting the histograms so as to not interfere with the optimization for 
            // other methods.
            delete gROOT->FindObject("hSig");
            delete gROOT->FindObject("hBkg");
            delete gROOT->FindObject("hOut");
    
            // Array containing the minimum cut, signal efficiency, and background
            // efficiency returned.
            double* arr = new double[3];
            arr[0] = min_cut;
            arr[1] = sig_eff;
            arr[2] = bkg_eff;
            return arr;
    }

/*
    Executes the optimizeMin1 and optimizeMin2 functions on every output file in the 
    directory as well as conducting a KS test for each method. All values returned are
    saved in text files in the same directory.
*/
void list_dir(const char *path)
	{
        cout << "Searching for directory....."
             << endl;
    
        // Takes in path entered by user and checks is the directory exists
	   	struct dirent *entry;
	   	DIR *dir = opendir(path);
		if (dir == NULL)
			{ 
				cout << "Sorry, couldn't find the directory" << endl;
		      	return;
		   	}
    
        cout << "Directory Found!"
             << endl;       
        cout << "Creating method stats files"
             << endl;
        
        // Creates the files cataloging the minimum cuts, signal efficiency, background
        // efficiency, and KS test
    
        // Spacing for each element in the array in the textfile. Change if needed.
		int dent = 30;
        
        ofstream final_file1 ("method_stats_optimizeMin1.txt");
        final_file1 << left << setw(dent) << "Method_name" 
                    << left << setw(dent) << "Min_Cut" 
                    << left << setw(dent) << "Sig_Eff" 
                    << left << setw(dent) << "Bkg_Eff" 
                    << endl;
        final_file1.close();
        final_file1.clear();
        cout << "Optimize Min 1 file created!"
             << endl;

		ofstream final_file2 ("method_stats_optimizeMin2.txt");
		final_file2 << left << setw(dent) << "Method_name" 
                    << left << setw(dent) << "Min_Cut" 
                    << left << setw(dent) << "Sig_Eff" 
                    << left << setw(dent) << "Bkg_Eff" 
                    << endl;
        final_file2.close();
		final_file2.clear();
        cout << "Optimize Min 2 file created!"
             << endl;

		ofstream ks_file ("method_stats_ks.txt");
		ks_file << left << setw(dent) << "Method_name" 
                << left << setw(dent) << "Signal_KS"    
                << left << setw(dent) << "Bkgd_KS" 
                << endl;
		ks_file.close();
	    ks_file.clear();
        cout << "KS Test file created!"
             << endl;
        
        // Boolean to see if any "_out.root" files exist
        bool success = false;
        
        cout << "Searching directory for correct output ROOT files..."
             << endl << endl;
        
        // Loop goes through the directory and iterates through each file, checking
        // if any remaining existing files exist
		while ((entry = readdir(dir)) != NULL)
		    {
                // File name in the directory is taken
                string file_name(entry->d_name);
            
                string out_file_name("_out.root");
                
                // Conditional statement that checks the file name ends with "_out.root"
		        if(file_name.find(out_file_name) != string::npos)
                    {
                        success = true;
                        cout << "File " << file_name << " found!"
                             << endl;
                        
                        // Opens the file via ROOT
                        TFile *input(0);
                        TString fname = entry->d_name;
                        input = TFile::Open( fname );
                        cout << file_name << " opened!"
                             << endl;
                        
                        // Changes the direcotry to "dataset"
                        input->cd("dataset");
                        TIter next(gDirectory->GetListOfKeys());
                        TKey *key; 
                        cout << "Searching for the method keys..."
                             << endl;
                    
                        // Loop searches the "dataset" directory for any subdirectories
                        while ((key=(TKey*)next()))
                            {
                                // Data structure to save the method name, cut, and
                                // efficiencies for each optimization method
                                struct meth_info
                                    {
                                        string meth_name;
                                        double min_cut;
                                        double sig_eff;
                                        double bkg_eff;
                                    }
                                method_testtree1, method_traintree1, method_testtree2, method_traintree2;
                            
                                string key_name(key->GetName());
                            
                                // Conditional statement looks for any subdirecotries that
                                // are classified as methods, then changes to that directory
                                if (TString(key->GetName()).BeginsWith("Method_"))
                                    {
                                        cout << "Key " << key_name << " found!"
                                             << endl;
                                        gDirectory->cd(key->GetName());
                                        cout << "Searching for booked submethods in method type..."
                                             << endl;
                                        TIter next1(gDirectory->GetListOfKeys());
                                        TKey *key1;
                                        
                                        // Loop finds any submethods and performs operations
                                        while ((key1=(TKey*)next1())) 
                                            {
                                                string method_name(key1->GetName());
                                                cout << "Submethod " << method_name << " found!"
                                                     << endl;
                                                TString hname = "MVA_" + method_name;
                                                
                                                // Directory is changed to the submethod's
                                                gDirectory->cd(key1->GetName());
						
                                                cout << "Accessing submethod's MVA histograms..."
                                                     << endl;
                                            
                                                // K-S Test
                                                
                                                // Signal and background histograms taken from submethod
                                                // and KS test conducted and saved
                                                TH1* sig = dynamic_cast<TH1*>(gDirectory->Get(hname + "_S"));
                                                TH1* bgd = dynamic_cast<TH1*>(gDirectory->Get(hname + "_B"));
                                                TString ovname = hname += "_Train";
                                                TH1* sigOv = 0;
                                                TH1* bgdOv = 0;
                                                sigOv = dynamic_cast<TH1*>(gDirectory->Get( ovname + "_S" ));
                                                bgdOv = dynamic_cast<TH1*>(gDirectory->Get( ovname + "_B" ));
                                                cout << "Conducting Kolmogorov-Smirnov Test on submethod..."
                                                     << endl;
                                                TMVA::TMVAGlob::NormalizeHists( sigOv, bgdOv );
                                                Double_t kolS = sig->KolmogorovTest( sigOv, "X" );
                                                Double_t kolB = bgd->KolmogorovTest( bgdOv, "X" );
                                                cout << "K-S test done! Saving to K-S file..."
                                                     << endl;
                                                ks_file.open("method_stats_ks.txt",ios::app);
                                                ks_file << left << setw(dent) << method_name 
                                                        << left << setw(dent) << kolS 
                                                        << left << setw(dent) << kolB 
                                                        << endl;
                                                ks_file.close();
                                                ks_file.clear();
                                                cout << "Submethod's K-S Test saved!"
                                                     << endl;

                                                // OptimizeMin1
                                                cout << "Applying OptimizeMin1 on " << method_name << "..."
                                                     << endl;
                                                final_file1.open("method_stats_optimizeMin1.txt",ios::app);
                                                
                                                // Setting the 1st column of text file as the 
                                                // method name and the and the respective tree
                                                method_traintree1.meth_name = (method_name + "_TrainTree").c_str();
                                                method_testtree1.meth_name = (method_name + "_TestTree").c_str();
                                                
                                                // Getting the trees from the file
                                                TDirectory* dir1 = gFile->GetDirectory("dataset");
                                                TTree *treeA1 = (TTree*)dir1->Get("TrainTree");
                                                TTree *treeB1 = (TTree*)dir1->Get("TestTree");
                                                
                                                // Using both trees in optimizeMin1 and scaling by 20
                                                double* val_tr_1 = optimizeMin1(treeA1,(method_name).c_str(), 20,-2,2);
                                                double* val_te_1 = optimizeMin1(treeB1,(method_name).c_str(), 20,-2,2);
                                                method_traintree1.min_cut = val_tr_1[0];
                                                method_traintree1.sig_eff = val_tr_1[1];
                                                method_traintree1.bkg_eff = val_tr_1[2];
                                                method_testtree1.min_cut = val_te_1[0];
                                                method_testtree1.sig_eff = val_te_1[1];
                                                method_testtree1.bkg_eff = val_te_1[2];
                                                cout << "OptimizeMin1 on " << method_name 
                                                     << "'s training and testing trees completed! "
                                                     << "Saving to text file..."
                                                     << endl;
                                                final_file1 << left << setw(dent) << method_traintree1.meth_name 
                                                            << left << setw(dent) << method_traintree1.min_cut
                                                            << left << setw(dent) << method_traintree1.sig_eff 
                                                            << left << setw(dent) << method_traintree1.bkg_eff 
                                                            << left << setw(dent) << endl;
                                                final_file1 << left << setw(dent) << method_testtree1.meth_name 
                                                            << left << setw(dent) << method_testtree1.min_cut
                                                            << left << setw(dent) << method_testtree1.sig_eff
                                                            << left << setw(dent) << method_testtree1.bkg_eff 
                                                            << left << setw(dent) << endl;
                                                final_file1.close();
                                                final_file1.clear();
                                                cout << "OptimizeMin1 data for " << method_name << " saved!"
                                                     << endl;

                                                // OptimizeMin2
                                                cout << "Applying OptimizeMin2 on " << method_name << "..."
                                                     << endl;
                                                final_file2.open("method_stats_optimizeMin2.txt",ios::app);
                                                
                                                // Setting the 1st column of the text file as the 
                                                // method name and the and the respective tree
                                                method_traintree2.meth_name = (method_name + "_TrainTree").c_str();
                                                method_testtree2.meth_name = (method_name + "_TestTree").c_str();
                                                
                                                // Using both trees in optimizeMin2 and scaling by 20
                                                double* val_tr_2 = optimizeMin2(treeA1,(method_name).c_str(), 20,-2,2);
                                                double* val_te_2 = optimizeMin2(treeB1,(method_name).c_str(), 20,-2,2);
                                                method_traintree2.min_cut = val_tr_2[0];
                                                method_traintree2.sig_eff = val_tr_2[1];
                                                method_traintree2.bkg_eff = val_tr_2[2];
                                                method_testtree2.min_cut = val_te_2[0];
                                                method_testtree2.sig_eff = val_te_2[1];
                                                method_testtree2.bkg_eff = val_te_2[2];
                                                cout << "OptimizeMin2 on " << method_name 
                                                     << "'s training and testing trees completed! "
                                                     << "Saving to text file..."
                                                     << endl;
                                                final_file2 << left << setw(dent) << method_traintree2.meth_name 
                                                            << left << setw(dent) << method_traintree2.min_cut
                                                            << left << setw(dent) << method_traintree2.sig_eff
                                                            << left << setw(dent) << method_traintree2.bkg_eff
                                                            << left << setw(dent) << endl;
                                                final_file2 << left << setw(dent) << method_testtree2.meth_name 
                                                            << left << setw(dent) << method_testtree2.min_cut 
                                                            << left << setw(dent) << method_testtree2.sig_eff
                                                            << left << setw(dent) << method_testtree2.bkg_eff 
                                                            << left << setw(dent) << endl;
                                                final_file2.close();
                                                final_file2.clear();
                                                cout << "OptimizeMin2 data for " << method_name << " saved!"
                                                     << endl;
                                                
                                                // Changing directory to seach for methods booked as the
                                                // same type
                                                gDirectory->cd("..");
                                                cout << "Searching for other submethods in method type..."
                                                     << endl;
                                            }
                                    
                                        cout << "Other submethods in method type not found. "
                                             << "Searching for other method types..."
                                             << endl;
                                        gDirectory->cd("..");
                                    }
                                         
                            }
                        cout << endl;
                        
                    }
                
            }
        
        // Conditional checks the directory if any "_out.root" file were found
        if (success == false)
                cout << "Sorry, the files couldn't be found." 
                     << endl;
        else
                cout << "Done. Check the same directory as this file for the stats files." 
                     << endl;

        closedir(dir);
    }

int main()
    {
        // This was put in to circumvent certain errors that appeared when this program was
        // first developed. I haven't seen these errors arise again, so feel free to omit it
        gErrorIgnoreLevel = kFatal;
        
        cout << "Welcome to the Method Stats program! "
             << endl;
        string dir;
        cout << "Please enter the directory where you would like "
             << "to obtain the stats from your output root file." 
             << endl;
        cout << "Keep in mind that your ROOT file must end in \"_out.root\": " 
             << endl;
        
        // Get's user input for the desired directory
        getline(cin, dir);
        const char *directory = dir.c_str();
        list_dir(directory);
        
        cout << "Thank you for using Method_Stats.C"
             << endl;
        return 0;
    }
