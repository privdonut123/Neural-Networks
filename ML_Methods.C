#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

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

int ML_Methods(TString myMethodList = "")
{

   //---------------------------------------------------------------
   // This loads the library
   TMVA::Tools::Instance();

   // Default MVA methods to be trained + tested
   std::map<std::string,int> Use;

   //
   // Neural Networks (all are feed-forward Multilayer Perceptrons)
   Use["MLP"]             = 1; // Recommended ANN
   Use["DNN_GPU"]         = 0; // CUDA-accelerated DNN training.
 //Use["DNN_CPU"]         = 0; // Multi-core accelerated DNN.
   Use["DNN_CPU_1"]       = 0;
   Use["DNN_CPU_2"]       = 0;
   Use["DNN_CPU_fast"]    = 0;
   //
   
   //
   // Boosted Decision Trees
   Use["BDT"]             = 0; // uses Adaptive Boost
   Use["BDTG"]            = 0; // uses Gradient Boost
   Use["BDTB"]            = 0; // uses Bagging
   Use["BDTD"]            = 0; // decorrelation + Adaptive Boost
   Use["BDTF"]            = 0; // allow usage of fisher discriminant for node splitting
   //
   // ---------------------------------------------------------------

   std::cout << std::endl;
   std::cout << "==> Start TMVAClassification" << std::endl;

   // Select methods (don't look at this code - not of interest)
   if (myMethodList != "") {
      for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) it->second = 0;

      std::vector<TString> mlist = TMVA::gTools().SplitString( myMethodList, ',' );
      for (UInt_t i=0; i<mlist.size(); i++) {
         std::string regMethod(mlist[i]);

         if (Use.find(regMethod) == Use.end()) {
            std::cout << "Method \"" << regMethod << "\" not known in TMVA under this name. Choose among the following:" << std::endl;
            for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) std::cout << it->first << " ";
            std::cout << std::endl;
            return 1;
         }
         Use[regMethod] = 1;
      }
   }

   // --------------------------------------------------------------------------------------------------

   // Here the preparation phase begins

   // Read training and test data
   // (it is also possible to use ASCII format as input -> see TMVA Users Guide)
   TFile *input_s(0);
   TFile *input_b(0);

   input_s = TFile::Open("gamma.root");
   input_b = TFile::Open("gamma_back.root");
   
   if (!input_s || !input_b) {
      std::cout << "ERROR: could not open data file" << std::endl;
      exit(1);
   }
   std::cout << "--- TMVAClassification       : Using signal input file: " << input_s->GetName() << std::endl 
	<< "--- TMVAClassification       : Using background input file: " << input_b->GetName() << std::endl;

   // Register the training and test trees

   TTree *signalTree     = (TTree*)input_s->Get("Reduced");
   TTree *background     = (TTree*)input_b->Get("Reduced");

   // Create a ROOT output file where TMVA will store ntuples, histograms, etc.
   TString outfileName( "TMVA.root" );
   TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

   TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile,
                                               "!V:!Silent:Color:DrawProgressBar"
                                               ":Transformations=I;D;P;G,D"
                                               ":AnalysisType=Classification" );

   TMVA::DataLoader *dataloader=new TMVA::DataLoader("dataset");
   
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
   

   // global event weights per tree (see below for setting event-wise weights)
   Double_t signalWeight     = 1.0;
   Double_t backgroundWeight = 1.0;

   // You can add an arbitrary number of signal or background trees
   dataloader->AddSignalTree    ( signalTree,     signalWeight );
   dataloader->AddBackgroundTree( background, backgroundWeight );

   // Apply additional cuts on the signal and background samples (can be different)
   TCut mycuts = ""; // for example: TCut mycuts = "abs(var1)<0.5 && abs(var2-0.5)<1";
   TCut mycutb = ""; // for example: TCut mycutb = "abs(var1)<0.5";

   
  
   dataloader->PrepareTrainingAndTestTree( mycuts, mycutb, "nTrain_Signal=10000"
                                           ":nTrain_Background=10000:nTest_Signal=10000"
                                            ":nTest_Background=10000:SplitMode=Random"
                                            ":NormMode=NumEvents:!V" );
                                            
   // TMVA ANN: MLP (recommended ANN) -- all ANNs in TMVA are Multilayer Perceptrons
   if (Use["MLP"]){
                      factory->BookMethod( dataloader, TMVA::Types::kMLP, "MLP_default");
     
                      factory->BookMethod( dataloader, TMVA::Types::kMLP, "MLP_tanh", "NeuronType=tanh:HiddenLayers=12,11");
         
                      factory->BookMethod( dataloader, TMVA::Types::kMLP, "MLP_sigm", "NeuronType=sigmoid:HiddenLayers=12,11");
                   }
            

   // Multi-architecture DNN implementation.
   if (Use["DNN_CPU_1"] or Use["DNN_CPU_2"] or Use["DNN_CPU_fast"] or Use["DNN_GPU"])
      {
      // General layout.
      TString layoutString1("Layout=TANH|128,TANH|128,TANH|128,LINEAR");
      TString layoutString2("Layout=SIGMOID|10,SIGMOID|10,SIGMOID|10,LINEAR");
      TString layoutStringf("Layout=SIGMOID|10,SIGMOID|10,SIGMOID|10,LINEAR");

      // Training strategies.
      
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
                        
      cout << "error not in first strategy" << endl;
      
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
      cout << "error not in second strategy" << endl;                  
      
      TString trainingFast( "LearningRate= 1e-1,"
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
      cout << "error not in fast" << endl;
      
      
      TString trainingStrategyString1 ("TrainingStrategy=");
      TString trainingStrategyString2 ("TrainingStrategy=");
      TString trainingStrategyStringf ("TrainingStrategy=");
      
      
      trainingStrategyString1 += training0 + "|" + training1 + "|" + training2;
      
      trainingStrategyString2 += training0_s + "|" + training1_s + "|" + training2_s;
      
      trainingStrategyStringf += trainingFast;

      // General Options.
      TString dnnOptions1 ("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=N:"
                          "WeightInitialization=XAVIERUNIFORM");
      dnnOptions1.Append (":"); dnnOptions1.Append (layoutString1);
      dnnOptions1.Append (":"); dnnOptions1.Append (trainingStrategyString1);
      
      
      TString dnnOptions2 ("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=Normalize:");
      dnnOptions2.Append (":"); dnnOptions2.Append (layoutString2);
      dnnOptions2.Append (":"); dnnOptions2.Append (trainingStrategyString2);
      
      TString dnnOptionsf ("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=Normalize:");
      dnnOptionsf.Append (":"); dnnOptionsf.Append (layoutStringf);
      dnnOptionsf.Append (":"); dnnOptionsf.Append (trainingStrategyStringf);
      

      // Cuda implementation.
      if (Use["DNN_GPU"]) {
         TString gpuOptions = dnnOptions1 + ":Architecture=GPU";
         factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_GPU", gpuOptions);
      }
      // Multi-core CPU implementation.
      if (Use["DNN_CPU_1"]) {
         TString cpuOptions1 = dnnOptions1 + ":Architecture=CPU";
         factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_CPU_Tanh", cpuOptions1);
         }
         
      if (Use["DNN_CPU_2"]){
         TString cpuOptions2 = dnnOptions2 + ":Architecture=CPU";
         factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_CPU_Sigm", cpuOptions2);
         }
         
      if (Use["DNN_CPU_fast"]){
         TString cpuOptionsf = dnnOptionsf + ":Architecture=CPU";
         factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_CPU_Sigm_Fast", cpuOptionsf);  
         }
   }


   // Boosted Decision Trees
   if (Use["BDTG"]) // Gradient Boost
      factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG",
                           "!H:!V:NTrees=390:MinNodeSize=22%:BoostType=AdaBoost:Shrinkage=1:"
                           "UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=40:MaxDepth=10");

   if (Use["BDT"])
       {  // Adaptive Boost
      factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDT_120_H",
                           "!H:!V:NTrees=120:MinNodeSize=7%:MaxDepth=7:"
                           "BoostType=AdaBoost:AdaBoostBeta=3:"
                           "UseBaggedBoost:BaggedSampleFraction=0.5:"
                           "SeparationType=GiniIndex:nCuts=30" );
      factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDT_350_K",
                           "!H:!V:NTrees=350:MinNodeSize=2.5%:MaxDepth=3:"
                           "BoostType=AdaBoost:AdaBoostBeta=0.5:"
                           "UseBaggedBoost=True:BaggedSampleFraction=0.5:"
                           "SeparationType=GiniIndex:nCuts=20" );
        }
        
   if (Use["BDTB"]) // Bagging
      factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDTB_200_H",
                           "!H:!V:NTrees=200:BoostType=Bagging:SeparationType=CrossEntropy:nCuts=30");

   if (Use["BDTD"]) // Decorrelation + Adaptive Boost
      factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTD",
                           "!H:!V:NTrees=380:MinNodeSize=27%:"
                           "MaxDepth=10:BoostType=AdaBoost:"
                           "SeparationType=GiniIndex:nCuts=40:"
                           "VarTransform=Decorrelate" );

   if (Use["BDTF"])  // Allow Using Fisher discriminant in node splitting for (strong) linearly correlated variables
      factory->BookMethod( dataloader, TMVA::Types::kBDT,"BDTF",
                           "!H:!V:NTrees=50:MinNodeSize=2.5%:UseFisherCuts"
                           ":MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.5"
                           ":SeparationType=GiniIndex:nCuts=20" );

   // For an example of the category classifier usage, see: TMVAClassificationCategory
   //
   // --------------------------------------------------------------------------------------------------
   //  Now you can optimize the setting (configuration) of the MVAs using the set of training events
   // STILL EXPERIMENTAL and only implemented for BDT's !
   //
   //     factory->OptimizeAllMethods("SigEffAt001","Scan");
   //     factory->OptimizeAllMethods("ROCIntegral","FitGA");
   //
   // --------------------------------------------------------------------------------------------------

   // Now you can tell the factory to train, test, and evaluate the MVAs
   //
   // Train MVAs using the set of training events
   factory->TrainAllMethods();

   // Evaluate all MVAs using the set of test events
   factory->TestAllMethods();

   // Evaluate and compare performance of all configured MVAs
   factory->EvaluateAllMethods();

   // --------------------------------------------------------------
   
   /* This is just a placeholder for extracting the x and y values of 
      the ROC curves of each method that was trained and tested.
      Unfortunately, the TMVAGui is extremely clunky when
      attempting to manipulate graphs. For this particular project,
      the graph is of the ROC curve. The idea here is to convert the curves
      into an array of values which are saved to a .txt file, which would
      enable users to analyze the data in their language of choice, be it
      Python, Matlab, R, etc. I'm considering whether to include such an
      to be in the Classifier itself or to create a separate program to do
      it, as it may be more useful to other individuals.
   
    //ofstream roc_data("roc_data.txt");
    //roc_data.open("roc_data.txt", ios::app);

    */

   // Save the output
   outputFile->Close();

   std::cout << "==> Wrote root file: " << outputFile->GetName() << std::endl;
   std::cout << "==> TMVAClassification is done!" << std::endl;

   //delete factory;
   //delete dataloader;
   // Launch the GUI for the root macros
   if (!gROOT->IsBatch()) TMVA::TMVAGui( outfileName );

   return 0;
}

int main( int argc, char** argv )
{
   // Select methods (don't look at this code - not of interest)
   TString methodList;
   for (int i=1; i<argc; i++) {
      TString regMethod(argv[i]);
      if(regMethod=="-b" || regMethod=="--batch") continue;
      if (!methodList.IsNull()) methodList += TString(",");
      methodList += regMethod;
   }
   return ML_Methods(methodList);
}

