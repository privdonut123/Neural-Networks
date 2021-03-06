// Class: ReadMLP
// Automatically generated by MethodBase::MakeClass
//

/* configuration options =====================================================

#GEN -*-*-*-*-*-*-*-*-*-*-*- general info -*-*-*-*-*-*-*-*-*-*-*-

Method         : MLP::MLP
TMVA Release   : 4.2.1         [262657]
ROOT Release   : 6.12/06       [396294]
Creator        : kumar
Date           : Wed Oct 31 12:37:04 2018
Host           : Linux SFT-ubuntu-1710-2 4.13.0-25-generic #29-Ubuntu SMP Mon Jan 8 21:14:41 UTC 2018 x86_64 x86_64 x86_64 GNU/Linux
Dir            : /home/kumar/Desktop/Neural Net/Neural Networks
Training events: 20000
Analysis type  : [Classification]


#OPT -*-*-*-*-*-*-*-*-*-*-*-*- options -*-*-*-*-*-*-*-*-*-*-*-*-

# Set by User:
# Default:
NCycles: "500" [Number of training cycles]
HiddenLayers: "N,N-1" [Specification of hidden layer architecture]
NeuronType: "sigmoid" [Neuron activation function type]
RandomSeed: "1" [Random seed for initial synapse weights (0 means unique seed for each run; default value '1')]
EstimatorType: "CE" [MSE (Mean Square Estimator) for Gaussian Likelihood or CE(Cross-Entropy) for Bernoulli Likelihood]
NeuronInputType: "sum" [Neuron input function type]
V: "False" [Verbose output (short form of "VerbosityLevel" below - overrides the latter one)]
VerbosityLevel: "Default" [Verbosity level]
VarTransform: "None" [List of variable transformations performed before training, e.g., "D_Background,P_Signal,G,N_AllClasses" for: "Decorrelation, PCA-transformation, Gaussianisation, Normalisation, each for the given class of events ('AllClasses' denotes all events of all classes, if no class indication is given, 'All' is assumed)"]
H: "False" [Print method-specific help message]
CreateMVAPdfs: "False" [Create PDFs for classifier outputs (signal and background)]
IgnoreNegWeightsInTraining: "False" [Events with negative weights are ignored in the training (but are included for testing and performance evaluation)]
TrainingMethod: "BP" [Train with Back-Propagation (BP), BFGS Algorithm (BFGS), or Genetic Algorithm (GA - slower and worse)]
LearningRate: "2.000000e-02" [ANN learning rate parameter]
DecayRate: "1.000000e-02" [Decay rate for learning parameter]
TestRate: "10" [Test for overtraining performed at each #th epochs]
EpochMonitoring: "False" [Provide epoch-wise monitoring plots according to TestRate (caution: causes big ROOT output file!)]
Sampling: "1.000000e+00" [Only 'Sampling' (randomly selected) events are trained each epoch]
SamplingEpoch: "1.000000e+00" [Sampling is used for the first 'SamplingEpoch' epochs, afterwards, all events are taken for training]
SamplingImportance: "1.000000e+00" [ The sampling weights of events in epochs which successful (worse estimator than before) are multiplied with SamplingImportance, else they are divided.]
SamplingTraining: "True" [The training sample is sampled]
SamplingTesting: "False" [The testing sample is sampled]
ResetStep: "50" [How often BFGS should reset history]
Tau: "3.000000e+00" [LineSearch "size step"]
BPMode: "sequential" [Back-propagation learning mode: sequential or batch]
BatchSize: "-1" [Batch size: number of events/batch, only set if in Batch Mode, -1 for BatchSize=number_of_events]
ConvergenceImprove: "1.000000e-30" [Minimum improvement which counts as improvement (<0 means automatic convergence check is turned off)]
ConvergenceTests: "-1" [Number of steps (without improvement) required for convergence (<0 means automatic convergence check is turned off)]
UseRegulator: "False" [Use regulator to avoid over-training]
UpdateLimit: "10000" [Maximum times of regulator update]
CalculateErrors: "False" [Calculates inverse Hessian matrix at the end of the training to be able to calculate the uncertainties of an MVA value]
WeightRange: "1.000000e+00" [Take the events for the estimator calculations from small deviations from the desired value to large deviations only over the weight range]
##


#VAR -*-*-*-*-*-*-*-*-*-*-*-* variables *-*-*-*-*-*-*-*-*-*-*-*-

NVar 12
e1nCrys_decorr                e1nCrys_decorr                e1nCrys_decorr                e1nCrys_decorr                                                  'F'    [-30.473449707,25.4657287598]
e1Lat                         e1Lat                         e1Lat                         e1Lat                                                           'F'    [0,0.79997330904]
e1A42                         e1A42                         e1A42                         e1A42                                                           'F'    [1.8916607587e-05,0.319493889809]
e1CosTheta                    e1CosTheta                    e1CosTheta                    e1CosTheta                                                      'F'    [-0.599983453751,0.59999614954]
e2CosTheta                    e2CosTheta                    e2CosTheta                    e2CosTheta                                                      'F'    [-0.913028538227,0.906818687916]
extraE                        extraE                        extraE                        extraE                                                          'F'    [0,1.98586559296]
backNHphi                     backNHphi                     backNHphi                     backNHphi                                                       'F'    [-0.949998021126,1]
IFRfiducial                   IFRfiducial                   IFRfiducial                   IFRfiducial                                                     'F'    [-1,0.979917347431]
MissEmcPhiDist                MissEmcPhiDist                MissEmcPhiDist                MissEmcPhiDist                                                  'F'    [-2.2765879631,5.24096870422]
MissEmcThetaDist              MissEmcThetaDist              MissEmcThetaDist              MissEmcThetaDist                                                'F'    [-2.30988430977,0.64991492033]
e2Mag                         e2Mag                         e2Mag                         e2Mag                                                           'F'    [0,0.499921351671]
photonCorr                    photonCorr                    photonCorr                    photonCorr                                                      'F'    [-1,0.999999940395]
NSpec 0


============================================================================ */

#include <array>
#include <vector>
#include <cmath>
#include <string>
#include <iostream>

#ifndef IClassifierReader__def
#define IClassifierReader__def

class IClassifierReader {

 public:

   // constructor
   IClassifierReader() : fStatusIsClean( true ) {}
   virtual ~IClassifierReader() {}

   // return classifier response
   virtual double GetMvaValue( const std::vector<double>& inputValues ) const = 0;

   // returns classifier status
   bool IsStatusClean() const { return fStatusIsClean; }

 protected:

   bool fStatusIsClean;
};

#endif

class ReadMLP : public IClassifierReader {

 public:

   // constructor
   ReadMLP( std::vector<std::string>& theInputVars ) 
      : IClassifierReader(),
        fClassName( "ReadMLP" ),
        fNvars( 12 ),
        fIsNormalised( false )
   {      
      // the training input variables
      const char* inputVars[] = { "e1nCrys_decorr", "e1Lat", "e1A42", "e1CosTheta", "e2CosTheta", "extraE", "backNHphi", "IFRfiducial", "MissEmcPhiDist", "MissEmcThetaDist", "e2Mag", "photonCorr" };

      // sanity checks
      if (theInputVars.size() <= 0) {
         std::cout << "Problem in class \"" << fClassName << "\": empty input vector" << std::endl;
         fStatusIsClean = false;
      }

      if (theInputVars.size() != fNvars) {
         std::cout << "Problem in class \"" << fClassName << "\": mismatch in number of input values: "
                   << theInputVars.size() << " != " << fNvars << std::endl;
         fStatusIsClean = false;
      }

      // validate input variables
      for (size_t ivar = 0; ivar < theInputVars.size(); ivar++) {
         if (theInputVars[ivar] != inputVars[ivar]) {
            std::cout << "Problem in class \"" << fClassName << "\": mismatch in input variable names" << std::endl
                      << " for variable [" << ivar << "]: " << theInputVars[ivar].c_str() << " != " << inputVars[ivar] << std::endl;
            fStatusIsClean = false;
         }
      }

      // initialize min and max vectors (for normalisation)
      fVmin[0] = 0;
      fVmax[0] = 0;
      fVmin[1] = 0;
      fVmax[1] = 0;
      fVmin[2] = 0;
      fVmax[2] = 0;
      fVmin[3] = 0;
      fVmax[3] = 0;
      fVmin[4] = 0;
      fVmax[4] = 0;
      fVmin[5] = 0;
      fVmax[5] = 0;
      fVmin[6] = 0;
      fVmax[6] = 0;
      fVmin[7] = 0;
      fVmax[7] = 0;
      fVmin[8] = 0;
      fVmax[8] = 0;
      fVmin[9] = 0;
      fVmax[9] = 0;
      fVmin[10] = 0;
      fVmax[10] = 0;
      fVmin[11] = 0;
      fVmax[11] = 0;

      // initialize input variable types
      fType[0] = 'F';
      fType[1] = 'F';
      fType[2] = 'F';
      fType[3] = 'F';
      fType[4] = 'F';
      fType[5] = 'F';
      fType[6] = 'F';
      fType[7] = 'F';
      fType[8] = 'F';
      fType[9] = 'F';
      fType[10] = 'F';
      fType[11] = 'F';

      // initialize constants
      Initialize();

   }

   // destructor
   virtual ~ReadMLP() {
      Clear(); // method-specific
   }

   // the classifier response
   // "inputValues" is a vector of input values in the same order as the 
   // variables given to the constructor
   double GetMvaValue( const std::vector<double>& inputValues ) const;

 private:

   // method-specific destructor
   void Clear();

   // common member variables
   const char* fClassName;

   const size_t fNvars;
   size_t GetNvar()           const { return fNvars; }
   char   GetType( int ivar ) const { return fType[ivar]; }

   // normalisation of input variables
   const bool fIsNormalised;
   bool IsNormalised() const { return fIsNormalised; }
   double fVmin[12];
   double fVmax[12];
   double NormVariable( double x, double xmin, double xmax ) const {
      // normalise to output range: [-1, 1]
      return 2*(x - xmin)/(xmax - xmin) - 1.0;
   }

   // type of input variable: 'F' or 'I'
   char   fType[12];

   // initialize internal variables
   void Initialize();
   double GetMvaValue__( const std::vector<double>& inputValues ) const;

   // private members (method specific)

   double ActivationFnc(double x) const;
   double OutputActivationFnc(double x) const;

   int fLayers;
   int fLayerSize[4];
   double fWeightMatrix0to1[13][13];   // weight matrix from layer 0 to 1
   double fWeightMatrix1to2[12][13];   // weight matrix from layer 1 to 2
   double fWeightMatrix2to3[1][12];   // weight matrix from layer 2 to 3

};

inline void ReadMLP::Initialize()
{
   // build network structure
   fLayers = 4;
   fLayerSize[0] = 13;
   fLayerSize[1] = 13;
   fLayerSize[2] = 12;
   fLayerSize[3] = 1;
   // weight matrix from layer 0 to 1
   fWeightMatrix0to1[0][0] = -0.205574260769787;
   fWeightMatrix0to1[1][0] = 0.936896212648954;
   fWeightMatrix0to1[2][0] = 0.629977501407809;
   fWeightMatrix0to1[3][0] = -0.0423301760596834;
   fWeightMatrix0to1[4][0] = -2.13943263066161;
   fWeightMatrix0to1[5][0] = -0.397655484108985;
   fWeightMatrix0to1[6][0] = -0.074018116272134;
   fWeightMatrix0to1[7][0] = 0.0605289900515892;
   fWeightMatrix0to1[8][0] = 0.0869602234509559;
   fWeightMatrix0to1[9][0] = -0.0599505874444849;
   fWeightMatrix0to1[10][0] = -0.154540723251594;
   fWeightMatrix0to1[11][0] = 0.133979006675423;
   fWeightMatrix0to1[0][1] = 0.144487455251279;
   fWeightMatrix0to1[1][1] = -0.740231990847758;
   fWeightMatrix0to1[2][1] = -0.143525772344035;
   fWeightMatrix0to1[3][1] = 1.30563661717675;
   fWeightMatrix0to1[4][1] = 0.257754111196183;
   fWeightMatrix0to1[5][1] = 0.933637482705484;
   fWeightMatrix0to1[6][1] = -1.2021696733584;
   fWeightMatrix0to1[7][1] = 0.729148892927528;
   fWeightMatrix0to1[8][1] = -6.59488879837813;
   fWeightMatrix0to1[9][1] = 1.07009365272299;
   fWeightMatrix0to1[10][1] = -2.87559824396396;
   fWeightMatrix0to1[11][1] = -10.9663589868849;
   fWeightMatrix0to1[0][2] = -4.28036521916219;
   fWeightMatrix0to1[1][2] = -0.556152944782781;
   fWeightMatrix0to1[2][2] = 1.48528984402066;
   fWeightMatrix0to1[3][2] = 0.788486677128479;
   fWeightMatrix0to1[4][2] = -1.53361365501453;
   fWeightMatrix0to1[5][2] = -0.367416451622667;
   fWeightMatrix0to1[6][2] = 0.168690821834968;
   fWeightMatrix0to1[7][2] = 3.78006224132092;
   fWeightMatrix0to1[8][2] = -7.00154247309898;
   fWeightMatrix0to1[9][2] = -2.38853117884902;
   fWeightMatrix0to1[10][2] = -0.515936695772082;
   fWeightMatrix0to1[11][2] = -16.2457429051821;
   fWeightMatrix0to1[0][3] = -6.68671978089375;
   fWeightMatrix0to1[1][3] = 1.62023975227772;
   fWeightMatrix0to1[2][3] = -1.33230419338988;
   fWeightMatrix0to1[3][3] = 1.75031707569468;
   fWeightMatrix0to1[4][3] = 0.579599655615753;
   fWeightMatrix0to1[5][3] = 1.15414415118359;
   fWeightMatrix0to1[6][3] = 1.00719315675962;
   fWeightMatrix0to1[7][3] = -0.232748259287342;
   fWeightMatrix0to1[8][3] = 0.0831784767662174;
   fWeightMatrix0to1[9][3] = -8.3274938830674;
   fWeightMatrix0to1[10][3] = 1.64923518627402;
   fWeightMatrix0to1[11][3] = -1.68783707900534;
   fWeightMatrix0to1[0][4] = 0.206307175178595;
   fWeightMatrix0to1[1][4] = -0.856133672281677;
   fWeightMatrix0to1[2][4] = -1.09889384411528;
   fWeightMatrix0to1[3][4] = 6.928204863007;
   fWeightMatrix0to1[4][4] = -1.30419085867963;
   fWeightMatrix0to1[5][4] = 3.05978911505656;
   fWeightMatrix0to1[6][4] = -6.62695663746694;
   fWeightMatrix0to1[7][4] = 0.0592103783493483;
   fWeightMatrix0to1[8][4] = 0.160381403864198;
   fWeightMatrix0to1[9][4] = -0.702738803148848;
   fWeightMatrix0to1[10][4] = 0.652697838037692;
   fWeightMatrix0to1[11][4] = 0.101333637062556;
   fWeightMatrix0to1[0][5] = 1.59553808943732;
   fWeightMatrix0to1[1][5] = -0.031686921493544;
   fWeightMatrix0to1[2][5] = -0.567654744041605;
   fWeightMatrix0to1[3][5] = -1.34300985585907;
   fWeightMatrix0to1[4][5] = 2.32207094399097;
   fWeightMatrix0to1[5][5] = -0.0611692131927855;
   fWeightMatrix0to1[6][5] = -2.98103782303888;
   fWeightMatrix0to1[7][5] = -1.82435650602578;
   fWeightMatrix0to1[8][5] = 1.21649366001816;
   fWeightMatrix0to1[9][5] = -0.258549713238973;
   fWeightMatrix0to1[10][5] = -0.610719519610903;
   fWeightMatrix0to1[11][5] = -1.38113608403028;
   fWeightMatrix0to1[0][6] = -1.00367742457231;
   fWeightMatrix0to1[1][6] = 1.63161279877518;
   fWeightMatrix0to1[2][6] = -0.411778206856261;
   fWeightMatrix0to1[3][6] = 0.0249950661108839;
   fWeightMatrix0to1[4][6] = -0.968829258722701;
   fWeightMatrix0to1[5][6] = -0.643954392493931;
   fWeightMatrix0to1[6][6] = -0.307503276048152;
   fWeightMatrix0to1[7][6] = 0.99837781167856;
   fWeightMatrix0to1[8][6] = 1.73360082323124;
   fWeightMatrix0to1[9][6] = -0.038897572081077;
   fWeightMatrix0to1[10][6] = 0.0433677360641885;
   fWeightMatrix0to1[11][6] = -0.832716990544636;
   fWeightMatrix0to1[0][7] = 0.160219392713507;
   fWeightMatrix0to1[1][7] = 1.0127519833285;
   fWeightMatrix0to1[2][7] = 0.164152841635495;
   fWeightMatrix0to1[3][7] = 0.0430646122679261;
   fWeightMatrix0to1[4][7] = -2.48259974809284;
   fWeightMatrix0to1[5][7] = 0.0505477496545441;
   fWeightMatrix0to1[6][7] = -0.122588493856623;
   fWeightMatrix0to1[7][7] = -0.653980649561067;
   fWeightMatrix0to1[8][7] = -0.196467956147859;
   fWeightMatrix0to1[9][7] = -0.451797392276918;
   fWeightMatrix0to1[10][7] = 0.0973814846408598;
   fWeightMatrix0to1[11][7] = 0.0128598468205129;
   fWeightMatrix0to1[0][8] = -0.415587946717796;
   fWeightMatrix0to1[1][8] = -1.41732609293889;
   fWeightMatrix0to1[2][8] = -1.89003539750972;
   fWeightMatrix0to1[3][8] = -0.293384662645914;
   fWeightMatrix0to1[4][8] = -1.53780895661347;
   fWeightMatrix0to1[5][8] = -2.39129552019575;
   fWeightMatrix0to1[6][8] = -0.0266397108928663;
   fWeightMatrix0to1[7][8] = 0.0767511975749569;
   fWeightMatrix0to1[8][8] = -0.186728285305387;
   fWeightMatrix0to1[9][8] = 0.383975816043677;
   fWeightMatrix0to1[10][8] = -0.245430926451529;
   fWeightMatrix0to1[11][8] = 0.0774970342295224;
   fWeightMatrix0to1[0][9] = 0.234667293135035;
   fWeightMatrix0to1[1][9] = 0.314642375750086;
   fWeightMatrix0to1[2][9] = -1.02482388438889;
   fWeightMatrix0to1[3][9] = 0.17590312019785;
   fWeightMatrix0to1[4][9] = -0.423375319346617;
   fWeightMatrix0to1[5][9] = 0.37064221555932;
   fWeightMatrix0to1[6][9] = -0.531255176914707;
   fWeightMatrix0to1[7][9] = 0.557953060682014;
   fWeightMatrix0to1[8][9] = 0.0264122695470538;
   fWeightMatrix0to1[9][9] = -0.0944890300338283;
   fWeightMatrix0to1[10][9] = 0.141735023735036;
   fWeightMatrix0to1[11][9] = -0.0948472678744934;
   fWeightMatrix0to1[0][10] = 0.735171665442815;
   fWeightMatrix0to1[1][10] = 0.614691240719358;
   fWeightMatrix0to1[2][10] = -0.829577540174942;
   fWeightMatrix0to1[3][10] = -2.47699838698923;
   fWeightMatrix0to1[4][10] = 0.826704566429073;
   fWeightMatrix0to1[5][10] = -0.0485718512357654;
   fWeightMatrix0to1[6][10] = -2.88650263565083;
   fWeightMatrix0to1[7][10] = -1.30978063380425;
   fWeightMatrix0to1[8][10] = -1.43583183250973;
   fWeightMatrix0to1[9][10] = 2.47723460827243;
   fWeightMatrix0to1[10][10] = 2.54112304875797;
   fWeightMatrix0to1[11][10] = -12.9168054750492;
   fWeightMatrix0to1[0][11] = -0.28272575260982;
   fWeightMatrix0to1[1][11] = -2.55882534955869;
   fWeightMatrix0to1[2][11] = 0.0363563449236077;
   fWeightMatrix0to1[3][11] = 5.028923316988;
   fWeightMatrix0to1[4][11] = 1.30267258729751;
   fWeightMatrix0to1[5][11] = -2.22259936008734;
   fWeightMatrix0to1[6][11] = -2.18966856762566;
   fWeightMatrix0to1[7][11] = 0.607258919995656;
   fWeightMatrix0to1[8][11] = 0.443915971293038;
   fWeightMatrix0to1[9][11] = 1.04340580715469;
   fWeightMatrix0to1[10][11] = -6.21775142487671;
   fWeightMatrix0to1[11][11] = 0.573137303295076;
   fWeightMatrix0to1[0][12] = -5.326774551398;
   fWeightMatrix0to1[1][12] = 1.80980153871646;
   fWeightMatrix0to1[2][12] = 5.12302924132741;
   fWeightMatrix0to1[3][12] = -0.186602733330532;
   fWeightMatrix0to1[4][12] = -1.02985512881849;
   fWeightMatrix0to1[5][12] = 1.51544466937791;
   fWeightMatrix0to1[6][12] = 0.394604460411086;
   fWeightMatrix0to1[7][12] = 0.205055914229644;
   fWeightMatrix0to1[8][12] = 3.17122186825237;
   fWeightMatrix0to1[9][12] = -3.16306723888672;
   fWeightMatrix0to1[10][12] = -5.01747039250382;
   fWeightMatrix0to1[11][12] = 6.53363623587673;
   // weight matrix from layer 1 to 2
   fWeightMatrix1to2[0][0] = 2.29924406150839;
   fWeightMatrix1to2[1][0] = 1.02055579474659;
   fWeightMatrix1to2[2][0] = 0.745340723093904;
   fWeightMatrix1to2[3][0] = -2.64095138452843;
   fWeightMatrix1to2[4][0] = 1.11040019035398;
   fWeightMatrix1to2[5][0] = 1.94005973575703;
   fWeightMatrix1to2[6][0] = -0.275218154462116;
   fWeightMatrix1to2[7][0] = 2.62254162812523;
   fWeightMatrix1to2[8][0] = -0.980030363962659;
   fWeightMatrix1to2[9][0] = 0.609760369834949;
   fWeightMatrix1to2[10][0] = -0.850218449717338;
   fWeightMatrix1to2[0][1] = 2.20943122542244;
   fWeightMatrix1to2[1][1] = -1.96814164630158;
   fWeightMatrix1to2[2][1] = -0.443638902722556;
   fWeightMatrix1to2[3][1] = 0.219083135999506;
   fWeightMatrix1to2[4][1] = 0.283812482328644;
   fWeightMatrix1to2[5][1] = -1.95888723977089;
   fWeightMatrix1to2[6][1] = 0.847528784932024;
   fWeightMatrix1to2[7][1] = 0.717955173760807;
   fWeightMatrix1to2[8][1] = -0.186300954153623;
   fWeightMatrix1to2[9][1] = 0.2465203194915;
   fWeightMatrix1to2[10][1] = 0.591433559933006;
   fWeightMatrix1to2[0][2] = 1.1093830560744;
   fWeightMatrix1to2[1][2] = -5.39520406967807;
   fWeightMatrix1to2[2][2] = -2.70208601978712;
   fWeightMatrix1to2[3][2] = 2.50324039237591;
   fWeightMatrix1to2[4][2] = 1.89033855333612;
   fWeightMatrix1to2[5][2] = -1.47428614728125;
   fWeightMatrix1to2[6][2] = -0.113918365271353;
   fWeightMatrix1to2[7][2] = -0.12861799257913;
   fWeightMatrix1to2[8][2] = 0.738973969814778;
   fWeightMatrix1to2[9][2] = 2.40911152702385;
   fWeightMatrix1to2[10][2] = -1.44480073745303;
   fWeightMatrix1to2[0][3] = 0.11996042857897;
   fWeightMatrix1to2[1][3] = 0.515803324931075;
   fWeightMatrix1to2[2][3] = 2.73065735893581;
   fWeightMatrix1to2[3][3] = 1.4984456431739;
   fWeightMatrix1to2[4][3] = 1.28448185428666;
   fWeightMatrix1to2[5][3] = -0.385502644612913;
   fWeightMatrix1to2[6][3] = -6.43985363014512;
   fWeightMatrix1to2[7][3] = -3.11953964564883;
   fWeightMatrix1to2[8][3] = 1.25291485991513;
   fWeightMatrix1to2[9][3] = 0.0167628022717312;
   fWeightMatrix1to2[10][3] = -1.59166877265832;
   fWeightMatrix1to2[0][4] = -0.439287671632945;
   fWeightMatrix1to2[1][4] = 0.0578606658408089;
   fWeightMatrix1to2[2][4] = 0.860200198650704;
   fWeightMatrix1to2[3][4] = -1.00879036566212;
   fWeightMatrix1to2[4][4] = 2.13269893826352;
   fWeightMatrix1to2[5][4] = 1.66008161137642;
   fWeightMatrix1to2[6][4] = -0.925457214063797;
   fWeightMatrix1to2[7][4] = -2.09684441071143;
   fWeightMatrix1to2[8][4] = -0.255612441665341;
   fWeightMatrix1to2[9][4] = 0.808175973838586;
   fWeightMatrix1to2[10][4] = -0.324667187826113;
   fWeightMatrix1to2[0][5] = -0.168355009632603;
   fWeightMatrix1to2[1][5] = -2.15917175374098;
   fWeightMatrix1to2[2][5] = 0.374282288589418;
   fWeightMatrix1to2[3][5] = 2.29454464972166;
   fWeightMatrix1to2[4][5] = 1.68775688275016;
   fWeightMatrix1to2[5][5] = 1.27914121625646;
   fWeightMatrix1to2[6][5] = -0.753598325385649;
   fWeightMatrix1to2[7][5] = 2.47658949452683;
   fWeightMatrix1to2[8][5] = -0.0286997987982138;
   fWeightMatrix1to2[9][5] = -0.496780896927957;
   fWeightMatrix1to2[10][5] = 0.0604413936499758;
   fWeightMatrix1to2[0][6] = -1.12160647586392;
   fWeightMatrix1to2[1][6] = 1.12802200062751;
   fWeightMatrix1to2[2][6] = 2.52679813582048;
   fWeightMatrix1to2[3][6] = -0.189163968901654;
   fWeightMatrix1to2[4][6] = 0.0948733290481875;
   fWeightMatrix1to2[5][6] = -0.272994580377099;
   fWeightMatrix1to2[6][6] = -3.91957897227856;
   fWeightMatrix1to2[7][6] = -3.57894676317935;
   fWeightMatrix1to2[8][6] = 0.703741428642037;
   fWeightMatrix1to2[9][6] = -0.0729780402941784;
   fWeightMatrix1to2[10][6] = -0.303382460683908;
   fWeightMatrix1to2[0][7] = -0.982655689095299;
   fWeightMatrix1to2[1][7] = 2.03808571881149;
   fWeightMatrix1to2[2][7] = -2.56877134748606;
   fWeightMatrix1to2[3][7] = -0.197582823450556;
   fWeightMatrix1to2[4][7] = 4.82162186206766e-05;
   fWeightMatrix1to2[5][7] = -0.564336054713295;
   fWeightMatrix1to2[6][7] = -0.609943737861844;
   fWeightMatrix1to2[7][7] = 0.0394819091386307;
   fWeightMatrix1to2[8][7] = 3.10533729823526;
   fWeightMatrix1to2[9][7] = -2.19839576153027;
   fWeightMatrix1to2[10][7] = -2.32303238748823;
   fWeightMatrix1to2[0][8] = -2.68145199338325;
   fWeightMatrix1to2[1][8] = -0.461624606199542;
   fWeightMatrix1to2[2][8] = -0.931278566470782;
   fWeightMatrix1to2[3][8] = -1.28827203262692;
   fWeightMatrix1to2[4][8] = 1.94742152617403;
   fWeightMatrix1to2[5][8] = -1.19120998296227;
   fWeightMatrix1to2[6][8] = -0.65916035829825;
   fWeightMatrix1to2[7][8] = -1.22073578144178;
   fWeightMatrix1to2[8][8] = -4.15180081305206;
   fWeightMatrix1to2[9][8] = 1.43402902717164;
   fWeightMatrix1to2[10][8] = 2.00435415429369;
   fWeightMatrix1to2[0][9] = 0.282461608210321;
   fWeightMatrix1to2[1][9] = -1.09278551937418;
   fWeightMatrix1to2[2][9] = -1.72580669562028;
   fWeightMatrix1to2[3][9] = -0.489877734500739;
   fWeightMatrix1to2[4][9] = -1.66290650497952;
   fWeightMatrix1to2[5][9] = 0.967434344019027;
   fWeightMatrix1to2[6][9] = 0.34768504403679;
   fWeightMatrix1to2[7][9] = 4.72132456239215;
   fWeightMatrix1to2[8][9] = -1.3615515232816;
   fWeightMatrix1to2[9][9] = 2.01961497004282;
   fWeightMatrix1to2[10][9] = -1.03495432328014;
   fWeightMatrix1to2[0][10] = -2.8357437155795;
   fWeightMatrix1to2[1][10] = 1.6417783857328;
   fWeightMatrix1to2[2][10] = 1.31956199407092;
   fWeightMatrix1to2[3][10] = -0.593316182566441;
   fWeightMatrix1to2[4][10] = -1.30466369829628;
   fWeightMatrix1to2[5][10] = -0.125898374758238;
   fWeightMatrix1to2[6][10] = 6.7400102767303;
   fWeightMatrix1to2[7][10] = -2.07683831765121;
   fWeightMatrix1to2[8][10] = -2.49697832739195;
   fWeightMatrix1to2[9][10] = -2.54959017628404;
   fWeightMatrix1to2[10][10] = 2.61754886204877;
   fWeightMatrix1to2[0][11] = 0.170476234154759;
   fWeightMatrix1to2[1][11] = 0.43411889781246;
   fWeightMatrix1to2[2][11] = -1.01254733834244;
   fWeightMatrix1to2[3][11] = -0.384222656001438;
   fWeightMatrix1to2[4][11] = -0.381098907416113;
   fWeightMatrix1to2[5][11] = -0.967597685725777;
   fWeightMatrix1to2[6][11] = -2.22202431502915;
   fWeightMatrix1to2[7][11] = -0.152383410586623;
   fWeightMatrix1to2[8][11] = -5.96210307481148;
   fWeightMatrix1to2[9][11] = -4.55849329825033;
   fWeightMatrix1to2[10][11] = 0.987204013580317;
   fWeightMatrix1to2[0][12] = -1.09547753426884;
   fWeightMatrix1to2[1][12] = 1.98501127678835;
   fWeightMatrix1to2[2][12] = -0.604599184896218;
   fWeightMatrix1to2[3][12] = 1.02898952156675;
   fWeightMatrix1to2[4][12] = -1.70426555613886;
   fWeightMatrix1to2[5][12] = 2.23249875160621;
   fWeightMatrix1to2[6][12] = 0.370516098923436;
   fWeightMatrix1to2[7][12] = -0.56634720134038;
   fWeightMatrix1to2[8][12] = 1.29251982887985;
   fWeightMatrix1to2[9][12] = 1.88391874802415;
   fWeightMatrix1to2[10][12] = -2.22242328282634;
   // weight matrix from layer 2 to 3
   fWeightMatrix2to3[0][0] = -1.8903052703155;
   fWeightMatrix2to3[0][1] = -6.55738888675084;
   fWeightMatrix2to3[0][2] = -4.46799041343065;
   fWeightMatrix2to3[0][3] = 3.53821042429287;
   fWeightMatrix2to3[0][4] = 3.47258753522547;
   fWeightMatrix2to3[0][5] = -2.9532311035266;
   fWeightMatrix2to3[0][6] = -7.86920193004881;
   fWeightMatrix2to3[0][7] = -3.46080575070897;
   fWeightMatrix2to3[0][8] = -9.40775190746029;
   fWeightMatrix2to3[0][9] = -2.67876726649517;
   fWeightMatrix2to3[0][10] = -2.44179937092116;
   fWeightMatrix2to3[0][11] = 2.09280715376522;
}

inline double ReadMLP::GetMvaValue__( const std::vector<double>& inputValues ) const
{
   if (inputValues.size() != (unsigned int)fLayerSize[0]-1) {
      std::cout << "Input vector needs to be of size " << fLayerSize[0]-1 << std::endl;
      return 0;
   }

   std::array<double, 13> fWeights0 {{}};
   std::array<double, 13> fWeights1 {{}};
   std::array<double, 12> fWeights2 {{}};
   std::array<double, 1> fWeights3 {{}};
   fWeights0.back() = 1.;
   fWeights1.back() = 1.;
   fWeights2.back() = 1.;

   for (int i=0; i<fLayerSize[0]-1; i++)
      fWeights0[i]=inputValues[i];

   // layer 0 to 1
   for (int o=0; o<fLayerSize[1]-1; o++) {
      for (int i=0; i<fLayerSize[0]; i++) {
         double inputVal = fWeightMatrix0to1[o][i] * fWeights0[i];
         fWeights1[o] += inputVal;
      } // loop over i
      fWeights1[o] = ActivationFnc(fWeights1[o]);
   } // loop over o
   // layer 1 to 2
   for (int o=0; o<fLayerSize[2]-1; o++) {
      for (int i=0; i<fLayerSize[1]; i++) {
         double inputVal = fWeightMatrix1to2[o][i] * fWeights1[i];
         fWeights2[o] += inputVal;
      } // loop over i
      fWeights2[o] = ActivationFnc(fWeights2[o]);
   } // loop over o
   // layer 2 to 3
   for (int o=0; o<fLayerSize[3]; o++) {
      for (int i=0; i<fLayerSize[2]; i++) {
         double inputVal = fWeightMatrix2to3[o][i] * fWeights2[i];
         fWeights3[o] += inputVal;
      } // loop over i
      fWeights3[o] = OutputActivationFnc(fWeights3[o]);
   } // loop over o

   return fWeights3[0];
}

double ReadMLP::ActivationFnc(double x) const {
   // sigmoid
   return 1.0/(1.0+exp(-x));
}
double ReadMLP::OutputActivationFnc(double x) const {
   // sigmoid
   return 1.0/(1.0+exp(-x));
}
   
// Clean up
inline void ReadMLP::Clear() 
{
}
   inline double ReadMLP::GetMvaValue( const std::vector<double>& inputValues ) const
   {
      // classifier response value
      double retval = 0;

      // classifier response, sanity check first
      if (!IsStatusClean()) {
         std::cout << "Problem in class \"" << fClassName << "\": cannot return classifier response"
                   << " because status is dirty" << std::endl;
         retval = 0;
      }
      else {
         if (IsNormalised()) {
            // normalise variables
            std::vector<double> iV;
            iV.reserve(inputValues.size());
            int ivar = 0;
            for (std::vector<double>::const_iterator varIt = inputValues.begin();
                 varIt != inputValues.end(); varIt++, ivar++) {
               iV.push_back(NormVariable( *varIt, fVmin[ivar], fVmax[ivar] ));
            }
            retval = GetMvaValue__( iV );
         }
         else {
            retval = GetMvaValue__( inputValues );
         }
      }

      return retval;
   }
