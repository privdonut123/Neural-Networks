void MLP_Def_Tanh()
{
//=========Macro generated from canvas: c0/Neural Network Layout for: MLP_Def_Tanh
//=========  (Mon Nov 25 23:23:16 2019) by ROOT version 6.18/00
   TCanvas *c0 = new TCanvas("c0", "Neural Network Layout for: MLP_Def_Tanh",100,64,1000,650);
   gStyle->SetOptStat(0);
   c0->Range(0,0,1,1);
   c0->SetFillColor(37);
   c0->SetBorderMode(0);
   c0->SetBorderSize(2);
   c0->SetTickx(1);
   c0->SetTicky(1);
   c0->SetLeftMargin(0.12);
   c0->SetRightMargin(0.05);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#fffffd");
   c0->SetFrameFillColor(ci);
   c0->SetFrameBorderMode(0);
   
   TEllipse *ellipse = new TEllipse(0.325,0.06846154,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);
   ellipse->SetLineColor(9);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.1430769,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.2176923,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.2923077,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.3669231,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.4415385,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.5161538,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.5907692,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.6653846,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.74,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.8146154,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.8892308,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.325,0.9638462,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   TText *text = new TText(0.25,0.9498462,"e1nCrys_decorr :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.8752308,"e1Lat :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.8006154,"e1A42 :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.726,"e1CosTheta :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.6513846,"e2CosTheta :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.5767692,"extraE :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.5021538,"backNHphi :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.4275385,"IFRfiducial :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.3529231,"MissEmcPhiDist :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.2783077,"MissEmcThetaDist :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.2036923,"e2Mag :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.1290769,"photonCorr :");
   text->SetTextAlign(31);
   text->SetTextColor(0);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.25,0.05446154,"Bias node :");
   text->SetTextAlign(31);

   ci = TColor::GetColor("#afdcec");
   text->SetTextColor(ci);
   text->SetTextSize(0.04);
   text->Draw();
   
   ellipse = new TEllipse(0.525,0.06846154,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);
   ellipse->SetLineColor(9);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.1430769,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.2176923,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.2923077,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.3669231,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.4415385,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.5161538,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.5907692,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.6653846,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.74,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.8146154,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.8892308,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.525,0.9638462,0.0194,0.02984615,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   TArrow *arrow = new TArrow(0.3444,0.9638462,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.9638462,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(74);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(73);
   arrow->SetLineWidth(3);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(73);
   arrow->SetLineWidth(3);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8892308,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(67);
   arrow->SetLineWidth(5);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(75);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.8146154,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(60);
   arrow->SetLineWidth(8);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(88);
   arrow->SetLineWidth(3);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(76);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.74,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(91);
   arrow->SetLineWidth(4);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.6653846,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(84);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5907692,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(76);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.5161538,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.4415385,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.3669231,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2923077,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(73);
   arrow->SetLineWidth(3);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(75);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(86);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.2176923,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(68);
   arrow->SetLineWidth(5);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(76);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(75);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.1430769,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.9638462,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(75);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.8892308,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.8146154,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(88);
   arrow->SetLineWidth(3);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.74,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.6653846,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.5907692,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.5161538,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(87);
   arrow->SetLineWidth(3);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.4415385,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.3669231,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(84);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.2923077,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(72);
   arrow->SetLineWidth(3);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.2176923,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(73);
   arrow->SetLineWidth(3);
   arrow->Draw();
   arrow = new TArrow(0.3444,0.06846154,0.5056,0.1430769,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(88);
   arrow->SetLineWidth(3);
   arrow->Draw();
   
   ellipse = new TEllipse(0.725,0.07166667,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);
   ellipse->SetLineColor(9);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.071667
   TPad *activation0.7250000.071667 = new TPad("activation0.7250000.071667", "activation0.7250000.071667",0.7068,0.04366667,0.7432,0.09966667);
   activation0.7250000.071667->Draw();
   activation0.7250000.071667->cd();
   activation0.7250000.071667->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.071667->SetFillColor(0);
   activation0.7250000.071667->SetBorderMode(0);
   activation0.7250000.071667->SetBorderSize(2);
   activation0.7250000.071667->SetTickx(1);
   activation0.7250000.071667->SetTicky(1);
   activation0.7250000.071667->SetLeftMargin(0.12);
   activation0.7250000.071667->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.071667->SetFrameFillColor(ci);
   activation0.7250000.071667->SetFrameBorderMode(0);
   activation0.7250000.071667->SetFrameLineColor(0);
   activation0.7250000.071667->SetFrameBorderMode(0);

/* XPM */
const char *xpm_line-small_png_3[] = {
/* columns rows colors chars-per-pixel */
"30 27 6 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #BFBFBF",
"O c #C6C6C6",
"+ c #FFFFFF",
"++++++++++++++++++++++++++++OX",
"+++++++++++++++++++++++++++OO+",
"++++++++++++++++++++++++++XO++",
"+++++++++++++++++++++++++X++++",
"++++++++++++++++++++++++X+++++",
"++++++++++++++++++++++OX++++++",
"++++++++++++++++++++++X+++++++",
"+++++++++++++++++++++X++++++++",
"+++++++++++++++++++OX+++++++++",
"++++++++++++++++++OO++++++++++",
"+++++++++++++++++XO+++++++++++",
"++++++++++++++++X+++++++++++++",
"+++++++++++++++X++++++++++++++",
"++++++++++++++ +++++++++++++++",
"+++++++++++++X++++++++++++++++",
"++++++++++++X+++++++++++++++++",
"++++++++++OX++++++++++++++++++",
"+++++++++OO+++++++++++++++++++",
"++++++++XO++++++++++++++++++++",
"+++++++X++++++++++++++++++++++",
"++++++X+++++++++++++++++++++++",
"+++++XO+++++++++++++++++++++++",
"++++X+++++++++++++++++++++++++",
"+++X++++++++++++++++++++++++++",
"+OX+++++++++++++++++++++++++++",
"oO++++++++++++++++++++++++++++",
".+++++++++++++++++++++++++++++"
};


   TImage *xpm_line-small_png_3_img = TImage::Create();
   xpm_line-small_png_3_img->SetImageBuffer( (char **)xpm_line-small_png_3, TImage::kXpm);
   xpm_line-small_png_3_img->Draw();
   activation0.7250000.071667->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.1525,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.152500
   TPad *activation0.7250000.152500 = new TPad("activation0.7250000.152500", "activation0.7250000.152500",0.7068,0.1245,0.7432,0.1805);
   activation0.7250000.152500->Draw();
   activation0.7250000.152500->cd();
   activation0.7250000.152500->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.152500->SetFillColor(0);
   activation0.7250000.152500->SetBorderMode(0);
   activation0.7250000.152500->SetBorderSize(2);
   activation0.7250000.152500->SetTickx(1);
   activation0.7250000.152500->SetTicky(1);
   activation0.7250000.152500->SetLeftMargin(0.12);
   activation0.7250000.152500->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.152500->SetFrameFillColor(ci);
   activation0.7250000.152500->SetFrameBorderMode(0);
   activation0.7250000.152500->SetFrameLineColor(0);
   activation0.7250000.152500->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_4[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_4_img = TImage::Create();
   xpm_sigmoid-small_png_4_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_4, TImage::kXpm);
   xpm_sigmoid-small_png_4_img->Draw();
   activation0.7250000.152500->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.2333333,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.233333
   TPad *activation0.7250000.233333 = new TPad("activation0.7250000.233333", "activation0.7250000.233333",0.7068,0.2053333,0.7432,0.2613333);
   activation0.7250000.233333->Draw();
   activation0.7250000.233333->cd();
   activation0.7250000.233333->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.233333->SetFillColor(0);
   activation0.7250000.233333->SetBorderMode(0);
   activation0.7250000.233333->SetBorderSize(2);
   activation0.7250000.233333->SetTickx(1);
   activation0.7250000.233333->SetTicky(1);
   activation0.7250000.233333->SetLeftMargin(0.12);
   activation0.7250000.233333->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.233333->SetFrameFillColor(ci);
   activation0.7250000.233333->SetFrameBorderMode(0);
   activation0.7250000.233333->SetFrameLineColor(0);
   activation0.7250000.233333->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_5[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_5_img = TImage::Create();
   xpm_sigmoid-small_png_5_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_5, TImage::kXpm);
   xpm_sigmoid-small_png_5_img->Draw();
   activation0.7250000.233333->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.3141667,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.314167
   TPad *activation0.7250000.314167 = new TPad("activation0.7250000.314167", "activation0.7250000.314167",0.7068,0.2861667,0.7432,0.3421667);
   activation0.7250000.314167->Draw();
   activation0.7250000.314167->cd();
   activation0.7250000.314167->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.314167->SetFillColor(0);
   activation0.7250000.314167->SetBorderMode(0);
   activation0.7250000.314167->SetBorderSize(2);
   activation0.7250000.314167->SetTickx(1);
   activation0.7250000.314167->SetTicky(1);
   activation0.7250000.314167->SetLeftMargin(0.12);
   activation0.7250000.314167->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.314167->SetFrameFillColor(ci);
   activation0.7250000.314167->SetFrameBorderMode(0);
   activation0.7250000.314167->SetFrameLineColor(0);
   activation0.7250000.314167->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_6[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_6_img = TImage::Create();
   xpm_sigmoid-small_png_6_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_6, TImage::kXpm);
   xpm_sigmoid-small_png_6_img->Draw();
   activation0.7250000.314167->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.395,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.395000
   TPad *activation0.7250000.395000 = new TPad("activation0.7250000.395000", "activation0.7250000.395000",0.7068,0.367,0.7432,0.423);
   activation0.7250000.395000->Draw();
   activation0.7250000.395000->cd();
   activation0.7250000.395000->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.395000->SetFillColor(0);
   activation0.7250000.395000->SetBorderMode(0);
   activation0.7250000.395000->SetBorderSize(2);
   activation0.7250000.395000->SetTickx(1);
   activation0.7250000.395000->SetTicky(1);
   activation0.7250000.395000->SetLeftMargin(0.12);
   activation0.7250000.395000->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.395000->SetFrameFillColor(ci);
   activation0.7250000.395000->SetFrameBorderMode(0);
   activation0.7250000.395000->SetFrameLineColor(0);
   activation0.7250000.395000->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_7[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_7_img = TImage::Create();
   xpm_sigmoid-small_png_7_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_7, TImage::kXpm);
   xpm_sigmoid-small_png_7_img->Draw();
   activation0.7250000.395000->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.4758333,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.475833
   TPad *activation0.7250000.475833 = new TPad("activation0.7250000.475833", "activation0.7250000.475833",0.7068,0.4478333,0.7432,0.5038333);
   activation0.7250000.475833->Draw();
   activation0.7250000.475833->cd();
   activation0.7250000.475833->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.475833->SetFillColor(0);
   activation0.7250000.475833->SetBorderMode(0);
   activation0.7250000.475833->SetBorderSize(2);
   activation0.7250000.475833->SetTickx(1);
   activation0.7250000.475833->SetTicky(1);
   activation0.7250000.475833->SetLeftMargin(0.12);
   activation0.7250000.475833->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.475833->SetFrameFillColor(ci);
   activation0.7250000.475833->SetFrameBorderMode(0);
   activation0.7250000.475833->SetFrameLineColor(0);
   activation0.7250000.475833->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_8[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_8_img = TImage::Create();
   xpm_sigmoid-small_png_8_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_8, TImage::kXpm);
   xpm_sigmoid-small_png_8_img->Draw();
   activation0.7250000.475833->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.5566667,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.556667
   TPad *activation0.7250000.556667 = new TPad("activation0.7250000.556667", "activation0.7250000.556667",0.7068,0.5286667,0.7432,0.5846667);
   activation0.7250000.556667->Draw();
   activation0.7250000.556667->cd();
   activation0.7250000.556667->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.556667->SetFillColor(0);
   activation0.7250000.556667->SetBorderMode(0);
   activation0.7250000.556667->SetBorderSize(2);
   activation0.7250000.556667->SetTickx(1);
   activation0.7250000.556667->SetTicky(1);
   activation0.7250000.556667->SetLeftMargin(0.12);
   activation0.7250000.556667->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.556667->SetFrameFillColor(ci);
   activation0.7250000.556667->SetFrameBorderMode(0);
   activation0.7250000.556667->SetFrameLineColor(0);
   activation0.7250000.556667->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_9[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_9_img = TImage::Create();
   xpm_sigmoid-small_png_9_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_9, TImage::kXpm);
   xpm_sigmoid-small_png_9_img->Draw();
   activation0.7250000.556667->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.6375,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.637500
   TPad *activation0.7250000.637500 = new TPad("activation0.7250000.637500", "activation0.7250000.637500",0.7068,0.6095,0.7432,0.6655);
   activation0.7250000.637500->Draw();
   activation0.7250000.637500->cd();
   activation0.7250000.637500->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.637500->SetFillColor(0);
   activation0.7250000.637500->SetBorderMode(0);
   activation0.7250000.637500->SetBorderSize(2);
   activation0.7250000.637500->SetTickx(1);
   activation0.7250000.637500->SetTicky(1);
   activation0.7250000.637500->SetLeftMargin(0.12);
   activation0.7250000.637500->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.637500->SetFrameFillColor(ci);
   activation0.7250000.637500->SetFrameBorderMode(0);
   activation0.7250000.637500->SetFrameLineColor(0);
   activation0.7250000.637500->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_10[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_10_img = TImage::Create();
   xpm_sigmoid-small_png_10_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_10, TImage::kXpm);
   xpm_sigmoid-small_png_10_img->Draw();
   activation0.7250000.637500->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.7183333,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.718333
   TPad *activation0.7250000.718333 = new TPad("activation0.7250000.718333", "activation0.7250000.718333",0.7068,0.6903333,0.7432,0.7463333);
   activation0.7250000.718333->Draw();
   activation0.7250000.718333->cd();
   activation0.7250000.718333->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.718333->SetFillColor(0);
   activation0.7250000.718333->SetBorderMode(0);
   activation0.7250000.718333->SetBorderSize(2);
   activation0.7250000.718333->SetTickx(1);
   activation0.7250000.718333->SetTicky(1);
   activation0.7250000.718333->SetLeftMargin(0.12);
   activation0.7250000.718333->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.718333->SetFrameFillColor(ci);
   activation0.7250000.718333->SetFrameBorderMode(0);
   activation0.7250000.718333->SetFrameLineColor(0);
   activation0.7250000.718333->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_11[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_11_img = TImage::Create();
   xpm_sigmoid-small_png_11_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_11, TImage::kXpm);
   xpm_sigmoid-small_png_11_img->Draw();
   activation0.7250000.718333->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.7991667,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.799167
   TPad *activation0.7250000.799167 = new TPad("activation0.7250000.799167", "activation0.7250000.799167",0.7068,0.7711667,0.7432,0.8271667);
   activation0.7250000.799167->Draw();
   activation0.7250000.799167->cd();
   activation0.7250000.799167->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.799167->SetFillColor(0);
   activation0.7250000.799167->SetBorderMode(0);
   activation0.7250000.799167->SetBorderSize(2);
   activation0.7250000.799167->SetTickx(1);
   activation0.7250000.799167->SetTicky(1);
   activation0.7250000.799167->SetLeftMargin(0.12);
   activation0.7250000.799167->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.799167->SetFrameFillColor(ci);
   activation0.7250000.799167->SetFrameBorderMode(0);
   activation0.7250000.799167->SetFrameLineColor(0);
   activation0.7250000.799167->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_12[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_12_img = TImage::Create();
   xpm_sigmoid-small_png_12_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_12, TImage::kXpm);
   xpm_sigmoid-small_png_12_img->Draw();
   activation0.7250000.799167->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.88,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.880000
   TPad *activation0.7250000.880000 = new TPad("activation0.7250000.880000", "activation0.7250000.880000",0.7068,0.852,0.7432,0.908);
   activation0.7250000.880000->Draw();
   activation0.7250000.880000->cd();
   activation0.7250000.880000->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.880000->SetFillColor(0);
   activation0.7250000.880000->SetBorderMode(0);
   activation0.7250000.880000->SetBorderSize(2);
   activation0.7250000.880000->SetTickx(1);
   activation0.7250000.880000->SetTicky(1);
   activation0.7250000.880000->SetLeftMargin(0.12);
   activation0.7250000.880000->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.880000->SetFrameFillColor(ci);
   activation0.7250000.880000->SetFrameBorderMode(0);
   activation0.7250000.880000->SetFrameLineColor(0);
   activation0.7250000.880000->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_13[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_13_img = TImage::Create();
   xpm_sigmoid-small_png_13_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_13, TImage::kXpm);
   xpm_sigmoid-small_png_13_img->Draw();
   activation0.7250000.880000->Modified();
   c0->cd();
   
   ellipse = new TEllipse(0.725,0.9608333,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.7250000.960833
   TPad *activation0.7250000.960833 = new TPad("activation0.7250000.960833", "activation0.7250000.960833",0.7068,0.9328333,0.7432,0.9888333);
   activation0.7250000.960833->Draw();
   activation0.7250000.960833->cd();
   activation0.7250000.960833->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.7250000.960833->SetFillColor(0);
   activation0.7250000.960833->SetBorderMode(0);
   activation0.7250000.960833->SetBorderSize(2);
   activation0.7250000.960833->SetTickx(1);
   activation0.7250000.960833->SetTicky(1);
   activation0.7250000.960833->SetLeftMargin(0.12);
   activation0.7250000.960833->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.7250000.960833->SetFrameFillColor(ci);
   activation0.7250000.960833->SetFrameBorderMode(0);
   activation0.7250000.960833->SetFrameLineColor(0);
   activation0.7250000.960833->SetFrameBorderMode(0);

/* XPM */
const char *xpm_sigmoid-small_png_14[] = {
/* columns rows colors chars-per-pixel */
"30 27 5 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #C6C6C6",
"O c #FFFFFF",
"OOOOOOOOOOOOOOOOOOOOOOOOoXX.XO",
"OOOOOOOOOOOOOOOOOOOOOOXXoOOOOO",
"OOOOOOOOOOOOOOOOOOOOOXOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOXXOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOXOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOXoOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOO OOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOXOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOXOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOO OOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOXOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOXOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOoXOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOXOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOXOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOoXOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOooOOOOOOOOOOOOOOOOOOOOOO",
"OOXXX.oOOOOOOOOOOOOOOOOOOOOOOO",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOO"
};


   TImage *xpm_sigmoid-small_png_14_img = TImage::Create();
   xpm_sigmoid-small_png_14_img->SetImageBuffer( (char **)xpm_sigmoid-small_png_14, TImage::kXpm);
   xpm_sigmoid-small_png_14_img->Draw();
   activation0.7250000.960833->Modified();
   c0->cd();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.9638462,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8892308,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.8146154,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.74,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.6653846,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(84);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(76);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5907692,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.5161538,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.4415385,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.3669231,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2923077,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.2176923,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(75);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.1430769,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.9608333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.88,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(83);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.7991667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.7183333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.6375,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.5566667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.4758333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(85);
   arrow->SetLineWidth(2);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.395,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(80);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.3141667,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.2333333,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.5444,0.06846154,0.699,0.1525,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   
   ellipse = new TEllipse(0.925,0.53,0.026,0.04,0,360,0);

   ci = TColor::GetColor("#fffffd");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
  
// ------------>Primitives in pad: activation0.9250000.530000
   TPad *activation0.9250000.530000 = new TPad("activation0.9250000.530000", "activation0.9250000.530000",0.9068,0.502,0.9432,0.558);
   activation0.9250000.530000->Draw();
   activation0.9250000.530000->cd();
   activation0.9250000.530000->Range(-0.1445783,-0.1392405,1.060241,1.126582);
   activation0.9250000.530000->SetFillColor(0);
   activation0.9250000.530000->SetBorderMode(0);
   activation0.9250000.530000->SetBorderSize(2);
   activation0.9250000.530000->SetTickx(1);
   activation0.9250000.530000->SetTicky(1);
   activation0.9250000.530000->SetLeftMargin(0.12);
   activation0.9250000.530000->SetRightMargin(0.05);

   ci = TColor::GetColor("#fffffd");
   activation0.9250000.530000->SetFrameFillColor(ci);
   activation0.9250000.530000->SetFrameBorderMode(0);
   activation0.9250000.530000->SetFrameLineColor(0);
   activation0.9250000.530000->SetFrameBorderMode(0);

/* XPM */
const char *xpm_line-small_png_15[] = {
/* columns rows colors chars-per-pixel */
"30 27 6 1",
"  c #070707",
". c #7F7F7F",
"X c #828282",
"o c #BFBFBF",
"O c #C6C6C6",
"+ c #FFFFFF",
"++++++++++++++++++++++++++++OX",
"+++++++++++++++++++++++++++OO+",
"++++++++++++++++++++++++++XO++",
"+++++++++++++++++++++++++X++++",
"++++++++++++++++++++++++X+++++",
"++++++++++++++++++++++OX++++++",
"++++++++++++++++++++++X+++++++",
"+++++++++++++++++++++X++++++++",
"+++++++++++++++++++OX+++++++++",
"++++++++++++++++++OO++++++++++",
"+++++++++++++++++XO+++++++++++",
"++++++++++++++++X+++++++++++++",
"+++++++++++++++X++++++++++++++",
"++++++++++++++ +++++++++++++++",
"+++++++++++++X++++++++++++++++",
"++++++++++++X+++++++++++++++++",
"++++++++++OX++++++++++++++++++",
"+++++++++OO+++++++++++++++++++",
"++++++++XO++++++++++++++++++++",
"+++++++X++++++++++++++++++++++",
"++++++X+++++++++++++++++++++++",
"+++++XO+++++++++++++++++++++++",
"++++X+++++++++++++++++++++++++",
"+++X++++++++++++++++++++++++++",
"+OX+++++++++++++++++++++++++++",
"oO++++++++++++++++++++++++++++",
".+++++++++++++++++++++++++++++"
};


   TImage *xpm_line-small_png_15_img = TImage::Create();
   xpm_line-small_png_15_img->SetImageBuffer( (char **)xpm_line-small_png_15, TImage::kXpm);
   xpm_line-small_png_15_img->Draw();
   activation0.9250000.530000->Modified();
   c0->cd();
   arrow = new TArrow(0.751,0.9608333,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.751,0.88,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.751,0.7991667,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(78);
   arrow->Draw();
   arrow = new TArrow(0.751,0.7183333,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.751,0.6375,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.751,0.5566667,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->Draw();
   arrow = new TArrow(0.751,0.4758333,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.751,0.395,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(79);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.751,0.3141667,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(77);
   arrow->Draw();
   arrow = new TArrow(0.751,0.2333333,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(82);
   arrow->Draw();
   arrow = new TArrow(0.751,0.1525,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(81);
   arrow->SetLineWidth(0);
   arrow->Draw();
   arrow = new TArrow(0.751,0.07166667,0.899,0.53,0.01,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(73);
   arrow->SetLineWidth(3);
   arrow->Draw();
   
   TPaveLabel *pl = new TPaveLabel(0.261,0.0064,0.389,0.032,"Layer 0","br");
   pl->SetBorderSize(0);
   pl->SetFillColor(37);

   ci = TColor::GetColor("#7d8b9d");
   pl->SetLineColor(ci);
   pl->SetTextColor(0);
   pl->SetTextSize(0.99);
   pl->Draw();
   
   pl = new TPaveLabel(0.461,0.0064,0.589,0.032,"Layer 1","br");
   pl->SetBorderSize(0);
   pl->SetFillColor(37);

   ci = TColor::GetColor("#7d8b9d");
   pl->SetLineColor(ci);
   pl->SetTextColor(0);
   pl->SetTextSize(0.99);
   pl->Draw();
   
   pl = new TPaveLabel(0.661,0.0064,0.789,0.032,"Layer 2","br");
   pl->SetBorderSize(0);
   pl->SetFillColor(37);

   ci = TColor::GetColor("#7d8b9d");
   pl->SetLineColor(ci);
   pl->SetTextColor(0);
   pl->SetTextSize(0.99);
   pl->Draw();
   
   pl = new TPaveLabel(0.861,0.0064,0.989,0.032,"Output layer","br");
   pl->SetBorderSize(0);
   pl->SetFillColor(37);

   ci = TColor::GetColor("#7d8b9d");
   pl->SetLineColor(ci);
   pl->SetTextColor(0);
   pl->SetTextSize(0.99);
   pl->Draw();
  
// ------------>Primitives in pad: imgpad
   TPad *imgpad = new TPad("imgpad", "imgpad",0.8126653,0.91,0.95,0.965);
   imgpad->Draw();
   imgpad->cd();
   imgpad->Range(0,0,1,1);
   imgpad->SetFillColor(0);
   imgpad->SetBorderMode(0);
   imgpad->SetBorderSize(2);
   imgpad->SetTickx(1);
   imgpad->SetTicky(1);
   imgpad->SetLeftMargin(0);
   imgpad->SetRightMargin(0);
   imgpad->SetTopMargin(0);
   imgpad->SetBottomMargin(0);

   ci = TColor::GetColor("#fffffd");
   imgpad->SetFrameFillColor(ci);
   imgpad->SetFrameBorderMode(0);
   imgpad->SetFrameLineColor(0);
   imgpad->SetFrameBorderMode(0);

/* XPM */
const char *xpm_tmva_logo_gif_16[] = {
/* columns rows colors chars-per-pixel */
"137 34 95 2",
"   c #7E5971",
" . c #7E6071",
" X c #FF0000",
" o c #FF2908",
" O c #FF3B0C",
" + c #FF3F3F",
" @ c #FF440D",
" # c #FF6013",
" $ c #FF7B18",
" % c #BB7F4F",
" & c #A0705E",
" * c #BB7F50",
" = c #8B6D79",
" - c #FF4646",
" ; c #FF5555",
" : c #C17F4D",
" > c #C17F50",
" , c #FF6040",
" < c #FF6A6A",
" 1 c #FF7878",
" 2 c #33349C",
" 3 c #3535A0",
" 4 c #473F8F",
" 5 c #463E93",
" 6 c #4C428B",
" 7 c #674E83",
" 8 c #4B4BAA",
" 9 c #5050AB",
" 0 c #5C5CB1",
" q c #796689",
" w c #6363AF",
" e c #6D6DB9",
" r c #7A7ABB",
" t c #7E7EC2",
" y c #A07D82",
" u c #FF851A",
" i c #D8903C",
" p c #EF9C2F",
" a c #FF9723",
" s c #E49636",
" d c #F39E32",
" f c #FFAA24",
" g c #FFAE39",
" h c #FFB134",
" j c #BE814F",
" k c #C2844A",
" l c #D48D42",
" z c #C28550",
" x c #C28F61",
" c c #C2977A",
" v c #FFBB47",
" b c #FFBF5E",
" n c #CEA27C",
" m c #EFAF60",
" M c #E9BC7A",
" N c #FFC059",
" B c #FFC86C",
" V c #FFCA72",
" C c #AC8F8A",
" Z c #B18F8A",
" A c #A083B6",
" S c #FF8D8D",
" D c #FF9B9B",
" F c #FFAEAE",
" G c #FFB1B1",
" H c #8F8FC6",
" J c #9090CD",
" K c #9B9CD3",
" L c #A099CC",
" P c #A09FD2",
" I c #A0A0D3",
" U c #BCBCDE",
" Y c #BDBDE3",
" T c #C1BBDE",
" R c #FFCF82",
" E c #FFD184",
" W c #FFD294",
" Q c #FFDEA3",
" ! c #FFE0A9",
" ~ c #FFE6B6",
" ^ c #BDC1E3",
" / c #C1C1DE",
" ( c #FFCDCD",
" ) c #E4CCDD",
" _ c #C2C2E2",
" ` c #D8D8EF",
" ' c #DFDFF4",
" ] c #FFEDC8",
" [ c #FFF2CE",
" { c #FFF5DC",
" } c #FFE9E9",
" | c #EFEFFA",
".  c #FFFAEA",
".. c #FFFFFF",
".X c None",
".................................................  R v f f f N W. ................................................................................................................................................................................................................",
".............................................. Q f f f f f f f f f ~..............................................................................................................................................................................................................",
"............................................ V f f f f f f f f f f f ]............................................................................................................................................................................................................",
".......................................... ] f f f f f f f f f f f f h. ..........................................................................................................................................................................................................",
".......................................... N f f f f f f f f f f f f f E..........................................................................................................................................................................................................",
".........................................  f f f f f f f f f f f f f f f..........................................................................................................................................................................................................",
"........................................ W f f f f f f f f f f f f f f f ~........................................................................................................................................................................................................",
"........................................ V f f f f f f f f f f f f f f f B.................................... } F G F F G F F G F F G F F G F ) ^ T ^ T ^................ Y / Y / Y.... | _ U _ U |................ Y / Y / |............ ` Y / Y / `............................",
"........................................ V f f f f f f f f f f f f f f f B.................................... G X X X X X X X X X X X X X X X A 2 2 3 2 2 '............ U 2 3 2 2 2 _.... 3 2 2 2 J.............. U 2 3 2 2.............. 9 2 3 2 2 8............................",
"........................................ V f f f f f f f f f f f f f f f W.................................... 1 X X X X X X X X X X X X X X X L 2 3 2 2 2 K............ 0 2 2 2 3 2 _.... e 2 2 3 2.............. t 2 2 3 r............ ` 3 2 2 2 3 2 `..........................",
"........................................ ~ f f f f f f f f f f f f f f f ~.................................... + X X X X X X X X X X X X X X ; L 3 2 2 2 3 9.......... ` 3 2 2 2 3 2 _.... I 2 2 3 2 Y............ 8 2 2 3 U............ J 2 3 2 2 2 3 H..........................",
".........................................  f f f f f f f f f f f f f f f...................................... G F F G F 1 X X X X < F G F F ( P 2 2 3 2 2 2 `........ J 2 3 2 2 2 3 _.... | 2 2 3 2 r.......... _ 2 2 3 8.............. 9 2 3 2 2 2 3 8..........................",
".......................................... V f f f f f f f f f f f f f W................................................ 1 X X X X G.......... I 2 2 3 2 2 2 e...... | 2 3 2 2 2 3 2 _...... 9 2 3 2 2.......... t 2 2 3 r............ ` 2 3 2 2 2 3 2 2 _........................",
".......................................... { g f f f f f f f f f f f v.................................................. - X X X X............ I 2 2 3 2 2 2 3 U.... t 2 2 3 2 2 2 3 _...... I 2 2 3 2 _........ 2 3 2 2 U............ J 2 3 2 K 9 2 3 2 H........................",
".............................................  f f f f f f f f f f f. .................................................. X X X X ;............ I 2 2 3 r 8 2 2 e.. ` 3 2 2 J 2 3 2 2 _...... | 2 3 2 2 H...... I 2 2 3 2.............. 8 2 2 3 | I 2 2 3 8........................",
"............................................ V B b f f f f f f f E W W................................................ ( X X X X S............ I 2 2 3 r J 2 3 2 ' e 2 2 8 Y 2 2 2 3 _........ t 2 2 3 9...... e 2 2 3 r............ ` 3 2 2 0.. | 2 3 2 2 `......................",
".......................... ~ ~ ~. ........ W B.... ~ V B f B E {.... V ~........ ] ~ ~ ].............................. D X X X X F............ I 2 2 3 r | 2 2 3 r 2 3 2 H _ 2 2 2 3 _........ _ 2 2 3 2 |.... 2 3 2 2 Y............ J 2 3 2 H.... 0 2 2 2 J......................",
".....................  ~ ~...... { ~ ]...  V.......................... h ~.. ~ ~........ ~ ~.......................... 1 X X X X.............. I 2 2 3 r.. t 2 2 3 2 2 2 | U 3 2 2 2 _.......... 3 2 2 2 I.. _ 2 2 3 2.............. 9 2 3 2 Y.... H 2 3 2 8......................",
"...................  ]................ ~ b. ...........................  h Q................ ~........................ - X X X +.............. I 2 2 3 r.. U 2 3 2 2 2 8.. _ 2 2 3 2 _.......... t 2 2 3 w.. H 2 3 2 J............ _ 2 2 3 2...... _ 2 2 3 2 Y....................",
"................. . .................... Q.............................. Q.................... Q...................... X X X X 1.............. I 2 2 3 r.... 2 3 2 2 2 I.. _ 2 2 3 2 _.......... U 2 3 2 2 ` 0 2 2 2 `............ t 2 2 3 2 r t r e 2 2 3 2 r....................",
"................ ]........................ ].......................... ~........................ ~.................. ( X X X X G.............. I 2 2 3 r.... I 2 2 3 9.... _ 2 2 3 2 _.......... | 2 2 3 2 e 2 2 3 8............ | 2 2 3 2 2 2 3 2 2 2 3 2 2 2 |..................",
" W B V B V B V R.......................... ] V B V B V B V B V B V B V............................ V B V B V B V B V , X X X X B V B V B V B V y 2 2 3 q B V m .     x B V c 2 3 2 2 n V B V B V B 7 2 2 3 2 2 2 3 = B V B V B V Z 2 3 2 2 2 3 2 2 2 3 2 2 2 3 C V B V B V B V B Q",
" b f f f f f f ~............................ f f f f f f f f f f f f V............................ E f f f f f f f f O X X X o f f f f f f f f & 3 2 2   f f f f f f f f f k 2 3 2 2 k f f f f f f k 2 3 2 2 2 3 2 k f f f f f f   2 2 3 6     .       2 2 3 2   f f f f f f f f B",
" b f f f f f f.............................. V f f f f f f f f f f f Q............................ ! f f f f f f f f X X X X @ f f f f f f f f & 3 2 2   f f f f f f f f f k 2 3 2 2 k f f f f f f f 2 2 3 2 2 2 3 f f f f f f f 6 3 2 2 j f f f f f f   2 2 3 4 f f f f f f f f B",
" b f f f f f f.............................. V f f f f f f f f f f f ]............................ ] f f f f f f f u X X X X # f f f f f f f f & 3 2 2   f f f f f f f f f k 2 3 2 2 k f f f f f f f   2 2 3 2 2   f f f f f f k 2 3 2 5 f f f f f f f k 2 3 2 2 j f f f f f f f B",
" b f f f f f f.............................. V f f f f f f f f f f f ]............................ ] f f f f f f f # X X X X $ f f f f f f f f & 3 2 2   f f f f f f f f f k 2 3 2 2 k f f f f f f f i 2 3 2 2 2 l f f f f f f   2 2 3   f f f f f f f f 2 2 2 3   f f f f f f f B",
" b f f f f f f.............................. V f f f f f f f f f f f ~............................ ~ f f f f f f f u $ # $ $ a f f f f f f f f s j k * i f f f f f f f f f p z j : j d f f f f f f f f k j > j k f f f f f f f k j > j s f f f f f f f f l j k % z f f f f f f f B",
" b f f f f f f {............................ v f f f f f f f f f f f E............................ E f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f B",
" b f f f f f f E...........................  f f f f f f f f f f f f v............................ v f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f B",
" b f f f f f f f. ........................ E f f f f f f f f f f f f f ]........................ { f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f B",
" b f f f f f f f h...................... { f f f f f f f f f f f f f f h. .....................  h f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f B",
" b f f f f f f f f B.................. ~ h f f f f f f f f f f f f f f f h.................... h f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f B",
" b f f f f f f f f f b [............ W f f f f f f f f f f f f f f f f f f h ~............ ~ h f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f f B",
" M V B V B V B V B V B V W ~ ~ ~ ~ B V B V B V B V B V B V B V B V B V B V B V B ~ ~ ~ ~ V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B V B Q"
};


   TImage *xpm_tmva_logo_gif_16_img = TImage::Create();
   xpm_tmva_logo_gif_16_img->SetImageBuffer( (char **)xpm_tmva_logo_gif_16, TImage::kXpm);
   xpm_tmva_logo_gif_16_img->Draw();
   imgpad->Modified();
   c0->cd();
   c0->Modified();
   c0->cd();
   c0->SetSelected(c0);
}
