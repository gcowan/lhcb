if True:
    from StrippingConf.Configuration import StrippingConf, StrippingStream
    from StrippingSettings.Utils import strippingConfiguration
    from StrippingArchive.Utils import buildStreams
    from StrippingArchive import strippingArchive

    stripping = 'stripping19'
    config  = strippingConfiguration(stripping)
    archive = strippingArchive(stripping)
    streams = buildStreams(stripping=config, archive=archive)

    # Select my line
    MyStream = StrippingStream("MyStream")
    MyLines = [ 'SelB2ChicPiPiForPsiX0' ]

    for stream in streams:
      print stream.name()
      for line in stream.lines:
            if "Chic" in line.name(): print line.name()
            MyStream.appendLines( [ line ] )


