{
//=========Macro generated from canvas: c2/c2
//=========  (Sun Nov 22 09:16:38 2015) by ROOT version5.34/18
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
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
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,800,0.3302716);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1200,0.0635652);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1400,0.04974641);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1600,0.04012449);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1800,0.03284146);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,2000,0.02539299);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,2500,0.01469995);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,3000,0.00928526);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,3500,0.006889157);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,4000,0.005783243);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,4500,0.005352873);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,4500,0.05209763);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,4000,0.05440782);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,3500,0.05956922);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,3000,0.06717197);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2500,0.08202047);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2000,0.1151722);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,1800,0.1403921);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,1600,0.1715363);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,1400,0.2216739);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,1200,0.295321);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,800,1.108636);
   grae->SetPointError(21,0,0,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,430,4870);
   Graph_Graph1->SetMinimum(0.004817586);
   Graph_Graph1->SetMaximum(1.218964);
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
   
   grae = new TGraphAsymmErrors(22);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,800,0.424772);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1200,0.0912936);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1400,0.06965543);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1600,0.0546695);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1800,0.04431503);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,2000,0.03461779);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,2500,0.02081943);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,3000,0.01408852);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,3500,0.01112629);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,4000,0.0097265);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,4500,0.009165281);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,4500,0.03266203);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,4000,0.03382565);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,3500,0.03609916);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,3000,0.04078191);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2500,0.05213067);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2000,0.07770986);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,1800,0.09652454);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,1600,0.1182085);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,1400,0.1532562);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,1200,0.2059695);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,800,0.8094767);
   grae->SetPointError(21,0,0,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,430,4870);
   Graph_Graph2->SetMinimum(0.008248753);
   Graph_Graph2->SetMaximum(0.8895078);
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
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(2);
   grae->SetPoint(0,800,0.5771298);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1200,0.1367453);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1400,0.1022898);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1600,0.07931946);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1800,0.06442463);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,2000,0.05078599);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,2500,0.03230204);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,3000,0.02341898);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,3500,0.01965041);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,4000,0.01794558);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,4500,0.01718289);
   grae->SetPointError(10,0,0,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,430,4870);
   Graph_Graph3->SetMinimum(0.0154646);
   Graph_Graph3->SetMaximum(0.6331245);
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
   
   TGraph *graph = new TGraph(11);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(3344);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,800,0.07605829337);
   graph->SetPoint(1,1200,0.006839560143);
   graph->SetPoint(2,1400,0.002613740408);
   graph->SetPoint(3,1600,0.0011483744);
   graph->SetPoint(4,1800,0.000488293);
   graph->SetPoint(5,2000,0.0002395188149);
   graph->SetPoint(6,2500,4.485707788e-05);
   graph->SetPoint(7,3000,9.824860871e-06);
   graph->SetPoint(8,3500,4.197582786e-06);
   graph->SetPoint(9,4000,2.438243797e-06);
   graph->SetPoint(10,4500,2.089672565e-06);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,430,4870);
   Graph_Graph1->SetMinimum(1.880705e-06);
   Graph_Graph1->SetMaximum(0.08366391);
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
   entry=leg->AddEntry("Graph3","#sigma_{TH} #times BR_{G_{Bulk}#rightarrow WW} #tilde{k}=0.5","L");

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
   TText *text = pt->AddText("WW+WZ categories combined");
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
