#plotsFilePathIn  = '/project/bfys/jleerdam/data/Bs2Jpsiphi/Reco14/P2VVDataSets20112012Reco14_I2Mass_6KKMassBins_2TagCats_20140309_plots.root'
#plotsFilePathOut = '/project/bfys/jleerdam/data/Bs2Jpsiphi/Reco14/P2VVDataSets20112012Reco14_I2Mass_6KKMassBins_2TagCats_20140309_mass_adjPaper.pdf'
plotsFilePathIn  = 'P2VVDataSets20112012Reco14_noMC_I2Mass_6KKMassBins_2TagCats_plots.root'
plotsFilePathOut = 'P2VVDataSets20112012Reco14_noMC_I2Mass_6KKMassBins_2TagCats_mass_adjPaper.pdf'
plotLabelText = 'LHCb' # 'LHCb'
minMax = [ ( 5.e2, 2.e4 ), ( 0., 16000. ) ]
minMaxResid = [ ( -5., 5. ), ( -5., 5. ) ]
div = [ ( 5, 5, 0 ), ( 5, 5, 0 ) ]
divResid = [ ( 4, 5, 0 ), ( 4, 5, 0 ) ]

from ROOT import gStyle
#from P2VV.Load import LHCbStyle
#gStyle.SetColorModelPS(1)
gStyle.SetLineStyleString( 5, ' 40 20 10 20'  )
gStyle.SetLineStyleString( 7, ' 40 20'        )
gStyle.SetLineStyleString( 9, ' 100 20'       )

if plotLabelText :
    from ROOT import TLatex
    plotLabel = TLatex()
    plotLabel.SetTextAlign(32)

from ROOT import TFile, TPad, TCanvas
plotsFile = TFile.Open(plotsFilePathIn)
dumCanv = TCanvas('dummy')
dumCanv.Print( plotsFilePathOut + '[' )
for plotIt, name in enumerate( [ 'mass', 'mass_signal', 'mass_left', 'mass_right', 'mass_peakBkg' ] ) :
    plot = plotsFile.Get(name)
    residPlot = plotsFile.Get( name + '_resid' )

    # set plot properties
    if len(minMax) > plotIt :
        plot.SetMinimum( minMax[plotIt][0] )
        plot.SetMaximum( minMax[plotIt][1] )
    if len(minMaxResid) > plotIt :
        residPlot.SetMinimum( minMaxResid[plotIt][0] )
        residPlot.SetMaximum( minMaxResid[plotIt][1] )
    if len(div) > plotIt :
        plot.GetYaxis().SetNdivisions( div[plotIt][0], div[plotIt][1], div[plotIt][2]  )
    if len(divResid) > plotIt :
        residPlot.GetYaxis().SetNdivisions( divResid[plotIt][0], divResid[plotIt][1], divResid[plotIt][2]  )

    # draw mass plot without residuals
    canv = TCanvas(name)
    if plotIt == 0 : canv.SetLogy(1)
    canv.SetLeftMargin(0.18)
    canv.SetRightMargin(0.05)
    canv.SetBottomMargin(0.18)
    canv.SetTopMargin(0.05)
    plot.SetLabelSize( 0.06,  'y' )
    plot.SetTitleSize( 0.072, 'y' )
    plot.SetLabelOffset( 0.03, 'x' )
    plot.SetLabelOffset( 0.01, 'y' )
    plot.SetTitleOffset( 1.15, 'x' )
    plot.SetTitleOffset( 1.0 if plotIt == 0 else 1.3, 'y' )
    #plot.GetYaxis().SetMoreLogLabels()
    plot.Draw()

    if plotLabelText and plotIt < 2 :
        plotLabel.SetTextSize(0.072)
        plotLabel.DrawLatexNDC( 0.88, 0.85, plotLabelText )

    canv.Print(plotsFilePathOut)

    # draw mass plot
    canv = TCanvas( name + '_resid' )
    plot.SetLabelSize( 0.92 / 0.68 * 0.060, 'y' )
    plot.SetTitleSize( 0.92 / 0.68 * 0.072, 'y' )
    plot.SetLabelOffset( 1.1, 'x' )
    plot.SetLabelOffset( 0.01, 'y' )
    plot.SetTitleOffset( 0.7 if plotIt == 0 else 0.9, 'y' )
    canv.cd()
    plotName = name + '_plot'
    plotPad = TPad( plotName, plotName, 0, 0.32, 1, 1 )
    if plotIt == 0 : plotPad.SetLogy(1)
    plotPad.SetNumber(1)
    plotPad.SetLeftMargin(0.18)
    plotPad.SetRightMargin(0.12)
    plotPad.SetBottomMargin(0.05)
    plotPad.SetTopMargin(0.05)
    plotPad.Draw()
    canv.cd(1)
    plot.Draw()
    if plotLabelText and plotIt < 2 :
        plotLabel.SetTextSize( 0.92 / 0.68 * 0.072 )
        plotLabel.DrawLatexNDC( 0.818, 0.825, plotLabelText )

    # draw residuals
    residPlot.SetLabelSize( 0.92 / 0.32 * 0.060, 'x' )
    residPlot.SetLabelSize( 0.92 / 0.32 * 0.060, 'y' )
    residPlot.SetTitleSize( 0.92 / 0.32 * 0.072, 'x' )
    residPlot.SetLabelOffset( 0.08, 'x' )
    residPlot.SetLabelOffset( 0.01, 'y' )
    residPlot.SetTitleOffset( 1.2, 'x' )
    canv.cd()
    residName = name + '_resid'
    residPad = TPad( residName, residName, 0, 0, 1, 0.32 )
    residPad.SetNumber(2)
    residPad.SetLeftMargin(0.18)
    residPad.SetRightMargin(0.12)
    residPad.SetBottomMargin(0.54)
    residPad.SetTopMargin(0.06)
    residPad.Draw()
    canv.cd(2)
    residPlot.Draw()

    canv.Print(plotsFilePathOut)

dumCanv.Print( plotsFilePathOut + ']' )
plotsFile.Close()
