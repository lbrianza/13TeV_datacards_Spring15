{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Nov 10 23:54:15 2015) by ROOT version5.34/18
   TCanvas *c2 = new TCanvas("c2", "c2",50,72,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(213.75,-5.168831,4338.75,2.623377);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetLogy();
   c2->SetGridx();
   c2->SetGridy();
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.13);
   c2->SetRightMargin(0.07);
   c2->SetTopMargin(0.08);
   c2->SetBottomMargin(0.15);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   
   TH1F *hframe__1 = new TH1F("hframe__1","",1000,750,4050);
   hframe__1->SetMinimum(0.0001);
   hframe__1->SetMaximum(100);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);
   hframe__1->SetLineStyle(0);
   hframe__1->SetMarkerStyle(20);
   hframe__1->GetXaxis()->SetTitle("M_{G_{Bulk}} (GeV)");
   hframe__1->GetXaxis()->CenterTitle(true);
   hframe__1->GetXaxis()->SetLabelFont(42);
   hframe__1->GetXaxis()->SetLabelOffset(0.007);
   hframe__1->GetXaxis()->SetLabelSize(0.045);
   hframe__1->GetXaxis()->SetTitleSize(0.06);
   hframe__1->GetXaxis()->SetTitleOffset(1.1);
   hframe__1->GetXaxis()->SetTitleFont(42);
   hframe__1->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{G_{Bulk}#rightarrow WW} (pb)");
   hframe__1->GetYaxis()->CenterTitle(true);
   hframe__1->GetYaxis()->SetNdivisions(505);
   hframe__1->GetYaxis()->SetLabelFont(42);
   hframe__1->GetYaxis()->SetLabelOffset(0.007);
   hframe__1->GetYaxis()->SetLabelSize(0.045);
   hframe__1->GetYaxis()->SetTitleSize(0.06);
   hframe__1->GetYaxis()->SetTitleFont(42);
   hframe__1->GetZaxis()->SetLabelFont(42);
   hframe__1->GetZaxis()->SetLabelOffset(0.007);
   hframe__1->GetZaxis()->SetLabelSize(0.05);
   hframe__1->GetZaxis()->SetTitleSize(0.06);
   hframe__1->GetZaxis()->SetTitleFont(42);
   hframe__1->Draw(" ");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,800,0.4150812);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1200,0.2439225);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1400,0.212585);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1600,0.165562);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1800,0.1198863);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,2000,0.09973396);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,2500,0.05464429);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,3000,0.03680035);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,3500,0.03310328);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,4500,0.02593241);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,4500,0.262278);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,3500,0.3231957);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,3000,0.3340366);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2500,0.4330063);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2000,0.5877662);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,1800,0.6363944);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,1600,0.7853419);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,1400,0.910765);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,1200,0.9484131);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,800,1.408065);
   grae->SetPointError(19,0,0,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,430,4870);
   Graph_Graph1->SetMinimum(0.02333917);
   Graph_Graph1->SetMaximum(1.546278);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph1);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(20);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,800,0.5386688);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1200,0.3244201);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1400,0.2892121);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1600,0.2311084);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1800,0.1709155);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,2000,0.1446691);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,2500,0.08559515);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,3000,0.06059331);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,3500,0.0567877);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,4500,0.04545052);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,4500,0.167177);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,3500,0.2026239);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,3000,0.2041758);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2500,0.2584008);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2000,0.3731995);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,1800,0.417804);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,1600,0.5307947);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,1400,0.6311583);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,1200,0.6720903);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,800,1.035003);
   grae->SetPointError(19,0,0,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,430,4870);
   Graph_Graph2->SetMinimum(0.04090547);
   Graph_Graph2->SetMaximum(1.133958);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineStyle(0);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph2);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(2);
   grae->SetPoint(0,800,0.7379222);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1200,0.4608425);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1400,0.4235157);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1600,0.3459908);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1800,0.2634411);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,2000,0.2289856);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,2500,0.1457181);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,3000,0.1101859);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,3500,0.1065967);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,4500,0.08649769);
   grae->SetPointError(9,0,0,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,430,4870);
   Graph_Graph3->SetMinimum(0.02135524);
   Graph_Graph3->SetMaximum(0.8030646);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineStyle(0);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3);
   
   grae->Draw("l");
   
   TGraph *graph = new TGraph(10);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(3344);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,800,0.003042331735);
   graph->SetPoint(1,1200,0.0002735824057);
   graph->SetPoint(2,1400,0.0001045496163);
   graph->SetPoint(3,1600,9.32846e-05);
   graph->SetPoint(4,1800,4.20266e-05);
   graph->SetPoint(5,2000,9.580752595e-06);
   graph->SetPoint(6,2500,1.794283115e-06);
   graph->SetPoint(7,3000,3.929944348e-07);
   graph->SetPoint(8,3500,4.787424623e-08);
   graph->SetPoint(9,4500,8.8853962e-10);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,430,4870);
   Graph_Graph1->SetMinimum(7.996857e-10);
   Graph_Graph1->SetMaximum(0.003346565);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.4334171,0.6695804,0.9183417,0.8706294,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph1","Asympt. CL_{S}  Expected #pm 1#sigma","LF");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Asympt. CL_{S}  Expected #pm 2#sigma","LF");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","#sigma_{TH} #times BR_{G_{Bulk}#rightarrow WW} #tilde{k}=0.1","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.6595477,0.222028,0.8944724,0.3653846,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(31);
   pt->SetTextSize(0.038);
   TText *text = pt->AddText("WZ category");
   text = pt->AddText("#tau_{21} < 0.6");
   pt->Draw();
      tex = new TLatex(0.93,0.936,"1.3 fb^{-1},W#rightarrow #mu#nu HP (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.13,0.936,"");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.226,0.936,"");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe__2 = new TH1F("hframe__2","",1000,750,4050);
   hframe__2->SetMinimum(0.0001);
   hframe__2->SetMaximum(100);
   hframe__2->SetDirectory(0);
   hframe__2->SetStats(0);
   hframe__2->SetLineStyle(0);
   hframe__2->SetMarkerStyle(20);
   hframe__2->GetXaxis()->SetTitle("M_{G_{Bulk}} (GeV)");
   hframe__2->GetXaxis()->CenterTitle(true);
   hframe__2->GetXaxis()->SetLabelFont(42);
   hframe__2->GetXaxis()->SetLabelOffset(0.007);
   hframe__2->GetXaxis()->SetLabelSize(0.045);
   hframe__2->GetXaxis()->SetTitleSize(0.06);
   hframe__2->GetXaxis()->SetTitleOffset(1.1);
   hframe__2->GetXaxis()->SetTitleFont(42);
   hframe__2->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{G_{Bulk}#rightarrow WW} (pb)");
   hframe__2->GetYaxis()->CenterTitle(true);
   hframe__2->GetYaxis()->SetNdivisions(505);
   hframe__2->GetYaxis()->SetLabelFont(42);
   hframe__2->GetYaxis()->SetLabelOffset(0.007);
   hframe__2->GetYaxis()->SetLabelSize(0.045);
   hframe__2->GetYaxis()->SetTitleSize(0.06);
   hframe__2->GetYaxis()->SetTitleFont(42);
   hframe__2->GetZaxis()->SetLabelFont(42);
   hframe__2->GetZaxis()->SetLabelOffset(0.007);
   hframe__2->GetZaxis()->SetLabelSize(0.05);
   hframe__2->GetZaxis()->SetTitleSize(0.06);
   hframe__2->GetZaxis()->SetTitleFont(42);
   hframe__2->Draw("sameaxis");
   
   TH1F *hframe__3 = new TH1F("hframe__3","",1000,750,4050);
   hframe__3->SetMinimum(0.0001);
   hframe__3->SetMaximum(100);
   hframe__3->SetDirectory(0);
   hframe__3->SetStats(0);
   hframe__3->SetLineStyle(0);
   hframe__3->SetMarkerStyle(20);
   hframe__3->GetXaxis()->SetTitle("M_{G_{Bulk}} (GeV)");
   hframe__3->GetXaxis()->CenterTitle(true);
   hframe__3->GetXaxis()->SetLabelFont(42);
   hframe__3->GetXaxis()->SetLabelOffset(0.007);
   hframe__3->GetXaxis()->SetLabelSize(0.045);
   hframe__3->GetXaxis()->SetTitleSize(0.06);
   hframe__3->GetXaxis()->SetTitleOffset(1.1);
   hframe__3->GetXaxis()->SetTitleFont(42);
   hframe__3->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{G_{Bulk}#rightarrow WW} (pb)");
   hframe__3->GetYaxis()->CenterTitle(true);
   hframe__3->GetYaxis()->SetNdivisions(505);
   hframe__3->GetYaxis()->SetLabelFont(42);
   hframe__3->GetYaxis()->SetLabelOffset(0.007);
   hframe__3->GetYaxis()->SetLabelSize(0.045);
   hframe__3->GetYaxis()->SetTitleSize(0.06);
   hframe__3->GetYaxis()->SetTitleFont(42);
   hframe__3->GetZaxis()->SetLabelFont(42);
   hframe__3->GetZaxis()->SetLabelOffset(0.007);
   hframe__3->GetZaxis()->SetLabelSize(0.05);
   hframe__3->GetZaxis()->SetTitleSize(0.06);
   hframe__3->GetZaxis()->SetTitleFont(42);
   hframe__3->Draw("sameaxig");
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
