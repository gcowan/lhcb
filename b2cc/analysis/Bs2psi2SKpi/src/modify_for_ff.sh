#!/bin/bash
sed -i 's;<OffSetNLL>False</OffSetNLL>;<OffSetNLL>False</OffSetNLL>\n<UseGSLNumericalIntegration>True</UseGSLNumericalIntegration>\n<FixedIntegrationPoints>100000</FixedIntegrationPoints>;' $1
