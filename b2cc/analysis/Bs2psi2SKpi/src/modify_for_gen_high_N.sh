#!/bin/bash
sed -i 's;<OffSetNLL>False</OffSetNLL>;<OffSetNLL>False</OffSetNLL>\n<UseGSLNumericalIntegration>True</UseGSLNumericalIntegration>\n<FixedIntegrationPoints>100000</FixedIntegrationPoints>;' $1
sed -i 's;<Source>File</Source>;<Source>Foam</Source>;' $1
sed -i 's;<FileName>toy.root</FileName>;;' $1
sed -i 's;<NumberEvents>4380</NumberEvents>;<NumberEvents>438000</NumberEvents>;' $1
