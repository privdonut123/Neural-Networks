/*  
    ML_Methods.C

    Goal: To sort the data of the gamma dataset using
          a variety of machine learning techniques, including
          BDTs, MLPs and DNN. Outputs the result of the training
          and testing of the methods in a root file called
          "ML_Methods_C++_out.root". Also provides an option for
          the user to ouput the resulting ROC curves plot points
          into a text file called "ML_Methods_ROCdata_C++.txt".
          Both files are created in the same directory as the 
          one occupied by this program.
    
          All machine learning methods are outlined in the
          TMVA User Manual.
    
    Instructions: In order to run, please ensure that you have 
                  ROOT version 6.12.06 or higher. Also ensure
                  that you have the "gamma.root" and 
                  "gamma_back.root" files in the same directory 
                  as this file. Start the ROOT interactive shell
                  in the directory of this file and type 
                  ".x ML_Methods.C" and hit your "enter" key.
                  If you would like to execute the program again,
                  please restart the ROOT interactive shell and 
                  repeat the steps listed above. To see every part
                  of the TMVA output, manually change the 'Silent'
                  argument to '!Silent' where the factory is
                  declared.
                  
                  To select the methods you would
                  like to utilize for testing and training,
                  manually adjust the values for the MVA methods
                  in the 'Use' map from 0 to 1. If you would like
                  implement your own method that is a prexisting 
                  type in the TMVA User Manual, please include
                  it in the 'Use' map and book the method in the
                  method booking section, using the arguments found
                  in the User Manual. Also ensure that the name
                  used in the 'Use' map matches the name used when
                  booking the method if you want to also obtain
                  the ROC text file.
                  
    Warning: Pick the 'columns' option when obtaining the text file 
             can be a bit taxing on the processor due to the lack
             of a reliable text file transposer in C++. A solution 
             is to pick the 'rows' option. I have found that the file
             is written about 1000 times faster, but results may differ
             If the text file is not needed, please type "no" when prompted.
             
             Depending on your system's architecture, the DNN methods
             may not be booked due to Multi-core not being implemented.
             A solution is under investigation, but in the meantime,
             it would be best to execute this program on a separate
             system for the DNN methods.
             
             The function that converts the ROC curves to a text
             file will overwrite any file in the directory with
             the same name, so ensure that if the previous text
             file is desired, please save it elsewhere
             
    Credit: Andreas Hoecker, as much of his code was utilized in 
            this program for booking, training, and testing of the 
            dataset. His code can be found here:
            
            https://root.cern.ch/doc/v608/
            TMVAClassification_8C_source.html
            
            Also credit to GitHub user lmoneta for their tutorials
            with TMVA. They provided the training strategies for two
            of the DNNs. Their code on the methods have been removed,
            but can still be found here:
            
            https://github.com/privdonut123/TMVA-tutorial/
            blob/master/TMVA_Classification_py.ipynb
            
    Author: Borna Maghoul
*/

#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <typeinfo>
#include <array>
#include <chrono>
#include <stdio.h>

#include "TChain.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TROOT.h"

#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TMVA/Tools.h"
#include "TMVA/TMVAGui.h"

// Function that converts the ROC plots to the text file
void roc_to_text(TMVA::Factory *factory,
                 TMVA::DataLoader *dataloader,
                 std::map<std::string,int> Use,
                 string row_or_col)
    {
        // Spacing of each element in the text file. Ensure that the name of 
        // the method is at least 4 characters shorter than 'dent'
        int dent = 20;
        
        // Creates text file
        ofstream roc_data("ML_Methods_ROCdata_C++.txt");
        roc_data.precision(7);	
        roc_data.setf(ios::fixed);
        roc_data.setf(ios::showpoint);
        
        // Backup if no methods in the manual are booked
        bool Method_T_or_F = false;
        
        // Declares size of the x and y arrays in each curve
        int arr_size;
        
        // Iterator for while loop
        map<string,int>::const_iterator it = Use.begin();
        
        int num_of_meth = 0;
        while(it != Use.end())
            {
                if(it->second != 0)
                    num_of_meth = num_of_meth + 1;
                ++it;
            }
        
        // Loop finds array size of the ROC data if a valid method is booked
        it = Use.begin();
        while(it != Use.end())
              {
                  if(it->second != 0)
                      {
                          Method_T_or_F = true; 
                          TGraph *roc_graph = factory->GetROCCurve(dataloader, it->first);
                          arr_size = roc_graph->GetN();
                          break;
                      }
                  ++it;
               }
               
        cout << endl << "Writing data to text file. Please wait." << endl;
        
        // If 'columns' are chosen, array data of ROC curve is stored in a
        // column in the text file
        if(row_or_col.compare("columns") == 0)
            {
                // Loop writes the name of each method to the text file
                for(map<string,int>::const_iterator it = Use.begin();
                    it != Use.end(); ++it)
                    {
                        if (it->second != 0)
                            {
                                roc_data << left << setw(dent) << it->first + "_sig" 
                                << left << setw(dent) << it->first + "_bkg";
                             }
                    }

                 roc_data << endl;

                 // Clock for time elapsed and estimated completion time
                 auto start_roc = chrono::steady_clock::now();   
                 auto start_loop = chrono::steady_clock::now();
                 auto finish_loop = chrono::steady_clock::now();
                 
                 /* 
                    Loop finds the x and y values for each method at the index 'i' and
                    writes it to the text file. Also displays the elapsed time,
                    percent completed, and estimated completion time
                 */
                 for(int i = 0; i != arr_size; i++)
                     {
                         start_loop = chrono::steady_clock::now(); 
                         for(map<string,int>::const_iterator it = Use.begin();
                            it != Use.end(); ++it)
                            {
                                if (it->second != 0)
                                    {
                                        TString method_name (it->first);
                                        TGraph *roc_graph = factory->GetROCCurve(dataloader, 
                                                                                 method_name);
                                        Double_t xp, yp;
                                        roc_graph->GetPoint(i,xp,yp);
                                        roc_data << left << setw(dent) 
                                                 << xp << left << setw(dent)
                                                 << yp;
                                     }
                            }
                            roc_data << endl;
                            finish_loop = chrono::steady_clock::now(); 
                            printf("\rTime Elapsed: %i seconds; "
                                   "Percent Complete: %d%%; "
                                   "Estimated Time Remaining: %i seconds      ",
                                   int(chrono::duration_cast<chrono::seconds>
                                      (finish_loop - start_roc).count()),
                                   (i+1)*100/arr_size,
                                   int((chrono::duration_cast<chrono::milliseconds>
                                       (finish_loop - start_loop).count())*(arr_size-i)/1000)
                                   );             
                    }
            }
        
        // If 'rows' are chosen, array data of ROC curve is stored in a
        // row in the text file
        else if(row_or_col.compare("rows") == 0)
            {
                // Clock for time elapsed and estimated completion time
                auto start_roc = chrono::system_clock::now();   
                auto start_loop = chrono::system_clock::now();
                auto finish_loop = chrono::system_clock::now();
                
                // Keeps count of the number of methods written to text.
                // Used later to keep track of completeness and remaining time
                int meth_count = 0;
                
                // Loop sets up the row by setting the first column as the method name
                for(map<string,int>::const_iterator it = Use.begin();
                    it != Use.end(); ++it)
                    {
                        if (it->second != 0)
                            {
                                start_loop = chrono::system_clock::now();
                                TString method_name (it->first);
                                TGraph *roc_graph = factory->GetROCCurve(dataloader,method_name);
                                roc_data << left << setw(dent) << it->first + "_sig";
                                
                                // Loop goes through the method's x-values, or signal efficiency,
                                // in the ROC and saves them on the same row, but separate columns
                                for(int i = 0; i != arr_size; i++)
                                    {
                                        roc_data << left << setw(dent) 
                                                 << *((roc_graph->GetX()) + i);
                                    }
                                    
                                roc_data << endl;    
                                roc_data << left << setw(dent) << it->first + "_bkg";
                                
                                // Loop goes through the method's y-values, or background rejection,
                                // in the ROC and saves them on the same row, but separate columns
                                for(int i = 0; i != arr_size; i++)
                                    {
                                        roc_data << left << setw(dent) 
                                                 << *((roc_graph->GetY()) + i);
                                    }
                                    
                                // Writing for method to the textfile is complete, so 'meth_count'
                                // is iterated by one
                                ++meth_count;
                                
                                roc_data << endl;
                                
                                // Elapsed time, completeness, and remaining time now displayed
                                finish_loop = chrono::system_clock::now();
                                std::chrono::duration<double> tim_elapsed = 
                                finish_loop - start_roc;
                                std::chrono::duration<double> tim_loop =
                                finish_loop - start_loop;

                                auto tim_el = "\rTime Elapsed: " +
                                              std::to_string(tim_elapsed.count()) + 
                                              " seconds; " + "Percent Complete: " + 
                                              std::to_string(meth_count/num_of_meth*100) + "%; " +
                                              "Estimated Remaining Time: " + 
                                              std::to_string(tim_loop.count() * 
                                              (num_of_meth-meth_count)) +
                                              " seconds";
                                cout << tim_el;
                            }
                       
                    }
                    
             }
        cout << endl << "Complete!" << endl;
        roc_data.close();
        
        // Displays if no valid methods were booked
        if (Method_T_or_F == false)
            cout << "None of the methods have been selected! "
                 << "ML_Methods_ROCdata_C++.txt is empty."
                 << endl;
                 
    }
    
void exit_root()
    {
       string usr_exit;
       cout << "Please type 'exit' to exit the ROOT interactive shell." << endl 
            << "To continue in ROOT, please type 'continue'." << endl;
       while(true)
           {
               getline(cin, usr_exit);
               if(usr_exit.compare("exit") == 0)
                   {
                        cout << endl;
                        exit(1);
                        break;
                   }
               else if(usr_exit.compare("continue") == 0)
                   break;
               else
                   cout << "Error. Try again." << endl;
           }
    }

// Will book, train, and test machine learning methods
void ML_Methods(TString myMethodList = "")
    {
       // This loads the library
       TMVA::Tools::Instance();

       // Default MVA methods to be trained + tested
       // For additional information on each method, please see the TMVA User Guide
       std::map<std::string,int> Use;

       // Neural Networks (all are feed-forward Multilayer Perceptrons)
       Use["MLP_Def_Sigm"]    = 1; // Recommended ANN
       Use["MLP_Def_Tanh"]    = 1;
       Use["MLP_Tanh_17"]     = 1;
       Use["MLP_Sigm_17"]     = 1;
       Use["DNN_Tanh"]        = 0;
       Use["DNN_Sigm"]        = 0;
       Use["DNN_Sigm_Fast"]   = 0;
      
       // Boosted Decision Trees
       Use["BDT_350_K"]       = 1; // Uses Adaptive Boost
       Use["BDT_120_H"]       = 1;
       Use["BDTG_H"]          = 1; // Uses Gradient Boost
       Use["BDTB_H"]          = 1; // Uses Bagging
       Use["BDTD_H"]          = 1; // Decorrelation + Adaptive Boost
       Use["BDTF_H"]          = 1; // Allow usage of fisher discriminant for node splitting
       // ---------------------------------------------------------------

       cout << endl;
       cout << "==> Start Classification of Methods" << endl;

       // Select methods (don't look at this code - not of interest)
       // Checks for valid methods that are in the 'Use' map
       if (myMethodList != "") 
          {
              for (std::map<std::string,int>::iterator it = Use.begin();
                   it != Use.end(); it++)
                       it->second = 0;

              std::vector<TString> mlist = TMVA::gTools().SplitString( myMethodList, ',' );
              
              for (UInt_t i=0; i<mlist.size(); i++) 
                  {
                     std::string regMethod(mlist[i]);

                     if (Use.find(regMethod) == Use.end()) 
                         {
                            cout << "Method \"" << regMethod 
                                 << "\" not known in TMVA under this name." 
                                 << " Choose among the following:" << endl;
                            for (std::map<std::string,int>::iterator it = Use.begin();
                                 it != Use.end(); it++) 
                                     cout << it->first << " ";
                            cout << endl;
                         }

                     Use[regMethod] = 1;
                  }
           }

       // ------------------------------------------------------------------------------------

       // Here the preparation phase begins

       // Read training and test data
       // (it is also possible to use ASCII format as input -> see TMVA Users Guide)
       TFile *input_s(0);
       TFile *input_b(0);

       // Original name: "./Reduced_gammaU-3S-highE-PreSelect.root"
       input_s = TFile::Open("gamma.root"); 
       
       // Original name: "./Reduced_Run7-Ups3S-OnPeak-1s_random-highE-PreSelect.root"
       input_b = TFile::Open("gamma_back.root");

       // Check if there are signal and background inputs
       if (!input_s || !input_b)
           {
               cout << "ERROR: could not open data file"
                    << endl;
               exit(1);
           }

       cout << "--- TMVAClassification       : Using signal input file: " 
            << input_s->GetName() << endl 
            << "--- TMVAClassification       : Using background input file: "
            << input_b->GetName() << endl;

       // Register the training and test trees
       TTree *signalTree = (TTree*)input_s->Get("Reduced");
       TTree *background = (TTree*)input_b->Get("Reduced");

       // Create a ROOT output file where TMVA will store ntuples, histograms, etc.
       TString outfileName("ML_Methods_C++_out.root");
       TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

       // Declaring factory for training and testing
       TMVA::Factory *factory = new TMVA::Factory("TMVAClassification", outputFile,
                                                  "!V:!Silent:Color:DrawProgressBar:"
                                                  "Transformations=I;D;P;G,D:"
                                                  "AnalysisType=Classification");

       // Declaring the data loader for loading the variables
       // and the signal and background trees
       TMVA::DataLoader *dataloader=new TMVA::DataLoader("dataset");

       // Loading the variables for the machine learning methods
       dataloader->AddVariable("e1nCrys_decorr");
       dataloader->AddVariable("e1Lat");
       dataloader->AddVariable("e1A42 ");
       dataloader->AddVariable("e1CosTheta");
       dataloader->AddVariable("e2CosTheta ");
       dataloader->AddVariable("extraE");
       dataloader->AddVariable("backNHphi");
       dataloader->AddVariable("IFRfiducial");
       dataloader->AddVariable("MissEmcPhiDist");
       dataloader->AddVariable("MissEmcThetaDist");
       dataloader->AddVariable("e2Mag");
       dataloader->AddVariable("photonCorr");

       // Global event weights per tree. Signal and background will have the same weight
       Double_t signalWeight = 1.0;
       Double_t backgroundWeight = 1.0;

       // Loading the signal and background trees
       dataloader->AddSignalTree(signalTree, signalWeight);
       dataloader->AddBackgroundTree(background, backgroundWeight);

       // Apply additional cuts on the signal and background samples (can be different)
       TCut mycuts = ""; 
       TCut mycutb = ""; 


       // Prepares the signal and background trees for training and testing by picking 
       // 10000 events for each. Can be increased to decrease likelyhood of overtraining
       dataloader->PrepareTrainingAndTestTree(mycuts, mycutb, "nTrain_Signal=10000"
                                              ":nTrain_Background=10000:nTest_Signal=10000"
                                              ":nTest_Background=10000:SplitMode=Random"
                                              ":NormMode=NumEvents:!V");

       // -------------------------------------------------------------------------------

       /*
           Here is where all methods defined in the 'Use' map are booked. Feel free to book
           additional methods here, but make sure they are within the TMVA User Manual,
           they are defined in the map, and the name used in the map is the same name as
           the one used in the third argument of the 'factory->BookMethod()'
       */

       // TMVA ANN: MLP (recommended ANN)
       
       // MLP using default TMVA arguments
       if (Use["MLP_Def_Sigm"])
           factory->BookMethod(dataloader, TMVA::Types::kMLP, "MLP_Def_Sigm","NeuronType=sigmoid:!V");
           
       if (Use["MLP_Def_Tanh"])
           factory->BookMethod(dataloader, TMVA::Types::kMLP, "MLP_Def_Tanh","NeuronType=tanh:!V");
       
       // MLP using 2 hidden layers, one with 17 nodes and the second with 16 nodes.
       // The activation function of each node is a hyperbolic tangent function
       if (Use["MLP_Tanh_17"])
           factory->BookMethod(dataloader, TMVA::Types::kMLP, "MLP_Tanh_17",
                               "NeuronType=tanh:HiddenLayers=17,16:!V");

       // MLP using 2 hidden layers, one with 17 nodes and the second with 16 nodes.
       // The activation function of each node is a sigmoid function
       if (Use["MLP_Sigm_17"])      
           factory->BookMethod(dataloader, TMVA::Types::kMLP, "MLP_Sigm_17",
                               "NeuronType=sigmoid:HiddenLayers=17,16:!V");

       // DNNs that use the CPU architecture. None of these methods have been optimized
       // for the "gamma" dataset or its variables
       
       /*
           DNN that uses 3 hidden layers, each with 128 nodes using hyperbolic tangent 
           activation functions. Three training strategies used. This method is utlized
           by Hoecker in TMVAClassification.C
       */   
       if (Use["DNN_Tanh"]) 
           {
               TString layoutString1("Layout=TANH|128,TANH|128,TANH|128,LINEAR");

               TString training0("LearningRate=1e-1,Momentum=0.9,Repetitions=1,"
                                 "ConvergenceSteps=20,BatchSize=256,TestRepetitions=10,"
                                 "WeightDecay=1e-4,Regularization=L2,"
                                 "DropConfig=0.0+0.5+0.5+0.5, Multithreading=True");
               TString training1("LearningRate=1e-2,Momentum=0.9,Repetitions=1,"
                                 "ConvergenceSteps=20,BatchSize=256,TestRepetitions=10,"
                                 "WeightDecay=1e-4,Regularization=L2,"
                                 "DropConfig=0.0+0.0+0.0+0.0, Multithreading=True");
               TString training2("LearningRate=1e-3,Momentum=0.0,Repetitions=1,"
                                 "ConvergenceSteps=20,BatchSize=256,TestRepetitions=10,"
                                 "WeightDecay=1e-4,Regularization=L2,"
                                 "DropConfig=0.0+0.0+0.0+0.0, Multithreading=True");

               TString trainingStrategyString1 ("TrainingStrategy=");
               trainingStrategyString1 += training0 + "|" + training1 + "|" + training2;
               TString dnnOptions1 ("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=N:"
                                    "WeightInitialization=XAVIERUNIFORM");
               dnnOptions1.Append (":"); dnnOptions1.Append (layoutString1);
               dnnOptions1.Append (":"); dnnOptions1.Append (trainingStrategyString1);
               TString cpuOptions1 = dnnOptions1 + ":Architecture=CPU";
               factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_Tanh", cpuOptions1);
          }
        
       /* 
           DNN that uses 3 hidden layers, each with 10 nodes using sigmoid activation 
           functions. Three training stragegies are used.This method was utlized by 
           lmoneta in TMVA_Classification_py.ipynb
       */
       if (Use["DNN_Sigm"])
           {
               TString layoutString2("Layout=SIGMOID|10,SIGMOID|10,SIGMOID|10,LINEAR");

               TString training0_s("LearningRate= 1e-1,"
                                   "Momentum=0,"
                                   "Repetitions= 1,"
                                   "ConvergenceSteps= 100,"
                                   "BatchSize= 50,"
                                   "TestRepetitions= 2,"
                                   "WeightDecay= 0.001,"
                                   "Regularization= NONE,"
                                   "DropConfig= 0.0+0.5+0.5+0.5,"
                                   "DropRepetitions= 1,"
                                   "Multithreading= True");
               TString training1_s("LearningRate= 1e-2,"
                                   "Momentum= 0,"
                                   "Repetitions= 1,"
                                   "ConvergenceSteps= 100,"
                                   "BatchSize= 50,"
                                   "TestRepetitions= 2,"
                                   "WeightDecay= 0.001,"
                                   "Regularization= NONE,"
                                   "DropConfig= 0.0+0.1+0.1+0.1,"
                                   "DropRepetitions= 1,"
                                   "Multithreading= True");
               TString training2_s("LearningRate= 1e-3,"
                                   "Momentum= 0,"
                                   "Repetitions= 1,"
                                   "ConvergenceSteps= 100,"
                                   "BatchSize= 50,"
                                   "TestRepetitions= 2,"
                                   "WeightDecay= 0.001,"
                                   "Regularization= NONE,"
                                   "Multithreading= True");

               TString trainingStrategyString2 ("TrainingStrategy=");
               trainingStrategyString2 += training0_s + "|" + training1_s + "|" + training2_s;

               TString dnnOptions2 ("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=Normalize:");
               dnnOptions2.Append (":"); dnnOptions2.Append (layoutString2);
               dnnOptions2.Append (":"); dnnOptions2.Append (trainingStrategyString2);

               TString cpuOptions2 = dnnOptions2 + ":Architecture=CPU";
               factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_Sigm", cpuOptions2);
          }

      /*
          DNN that uses 3 hidden layers, each with 10 nodes using sigmoid activation 
          functions. Only one training strategy is used.This method was utlized by
          lmoneta in TMVA_Classification_py.ipynb
      */
      if (Use["DNN_Sigm_Fast"])
          {
              TString layoutStringf("Layout=SIGMOID|10,SIGMOID|10,SIGMOID|10,LINEAR");
 
              TString trainingFast("LearningRate= 1e-1,"
                                   "Momentum= 0.0,"
                                   "Repetitions= 1,"
                                   "ConvergenceSteps= 100,"
                                   "BatchSize= 50,"
                                   "TestRepetitions= 7,"
                                   "WeightDecay= 0.001,"
                                   "Regularization= NONE,"
                                   "DropConfig= 0.0+0.5+0.5+0.5,"
                                   "DropRepetitions= 1,"
                                   "Multithreading= True");
 
              TString trainingStrategyStringf ("TrainingStrategy=");
              trainingStrategyStringf += trainingFast;
              TString dnnOptionsf ("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=Normalize:");
              dnnOptionsf.Append (":"); dnnOptionsf.Append (layoutStringf);
              dnnOptionsf.Append (":"); dnnOptionsf.Append (trainingStrategyStringf);
              TString cpuOptionsf = dnnOptionsf + ":Architecture=CPU";
              factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_Sigm_Fast", cpuOptionsf);  
          }
          
      // Boosted Decision Trees
      
      // Gradient Boost. Utlizes 390 trees
      if (Use["BDTG_H"])
          factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDTG_H",
                              "!H:!V:NTrees=390:MinNodeSize=22%:"
                              "BoostType=AdaBoost:Shrinkage=1:"
                              "UseBaggedBoost:BaggedSampleFraction=0.5:"
                              "nCuts=40:MaxDepth=10");
                              
       // Adaptive Boost. Utlizes 120 trees
       if (Use["BDT_120_H"])
           factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDT_120_H",
                               "!H:!V:NTrees=120:MinNodeSize=7%:MaxDepth=7:"
                               "BoostType=AdaBoost:AdaBoostBeta=3:"
                               "UseBaggedBoost:BaggedSampleFraction=0.5:"
                               "SeparationType=GiniIndex:nCuts=30");
        
       // Adaptive Boost. Utlizes 350 trees
       if (Use["BDT_350_K"])
           factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDT_350_K",
                               "!H:!V:NTrees=350:MinNodeSize=2.5%:MaxDepth=3:"
                               "BoostType=AdaBoost:AdaBoostBeta=0.5:"
                               "UseBaggedBoost=True:BaggedSampleFraction=0.5:"
                               "SeparationType=GiniIndex:nCuts=20");

       // Bagging. Utilizes 200 trees
       if (Use["BDTB_H"]) 
           factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDTB_H",
                               "!H:!V:NTrees=200:BoostType=Bagging:"
                               "SeparationType=CrossEntropy:nCuts=30");

       // Decorrelation + Adaptive Boost. Utilizes 380 trees
       if (Use["BDTD_H"])
           factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDTD_H",
                               "!H:!V:NTrees=380:MinNodeSize=27%:"
                               "MaxDepth=10:BoostType=AdaBoost:"
                               "SeparationType=GiniIndex:nCuts=40:"
                               "VarTransform=Decorrelate");
                               
       // Allow Using Fisher discriminant in node splitting for (strong) 
       // linearly correlated variables. Utilizes 50 trees
       if (Use["BDTF_H"])
          factory->BookMethod(dataloader, TMVA::Types::kBDT,"BDTF_H",
                              "!H:!V:NTrees=50:MinNodeSize=2.5%:UseFisherCuts"
                              ":MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.5"
                              ":SeparationType=GiniIndex:nCuts=20");

       // Train MVAs using the set of training events
       factory->TrainAllMethods();

       // Evaluate all MVAs using the set of test events
       factory->TestAllMethods();

       // Evaluate and compare performance of all configured MVAs
       factory->EvaluateAllMethods();

       cout << "==> Wrote root file: " << outputFile->GetName() << endl;
       cout << "==> TMVAClassification is done!" << endl;

       // --------------------------------------------------------------
       
       // Will use user's input to determine whether to save the ROC to a text file
       string user_in;
       cout << "Would you like to save the ROC Data to a text file? " << endl
            << "Please type 'yes' for yes or 'no' for no" << endl;
       
       
       while(true)
           {
               getline(cin, user_in);
               
               if (user_in.compare("yes") == 0)
                   {
                       cout << endl;
                       cout << "Would you like the data arrays to be stored as rows or columns?" << endl
                            << "Rows are faster. Please type either 'rows' or 'columns'." << endl;
                       string row_or_col;

                       while(true)
                           {
                               getline(cin, row_or_col);
                               if (row_or_col.compare("rows") == 0 || row_or_col.compare("columns") == 0)
                                   {
                                       roc_to_text(factory, dataloader, Use, row_or_col);
                                       break;
                                   }
                               else
                                  cout << "Error. Try again." << endl;     
                           }
                       break;
                    }
                else if (user_in.compare("no") == 0)
                    break;
                else
                    cout << "Error. Try again." << endl;
            }
       cout << endl;
       delete factory;
       delete dataloader;
       
       // Save the output
       outputFile->Close();
    
       // Launch the GUI for the root macros.
       // Remove comment from next line to launch TMVAGui for the saved root file
       //if (!gROOT->IsBatch()) TMVA::TMVAGui( outfileName );
       
       cout << "Done! Thank you for using ML_Methods.C" << endl;
       
       exit_root();
    }

// Relic from Hoecker's TMVAClassification.C, not used
int main(int argc, char** argv)
    {
        // Select methods (don't look at this code - not of interest)
        TString methodList;
        for (int i=1; i<argc; i++) 
            {
               TString regMethod(argv[i]);
               if(regMethod=="-b" || regMethod=="--batch") continue;
               if (!methodList.IsNull()) methodList += TString(",");
               methodList += regMethod;
            }
    }
