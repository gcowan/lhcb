#! /bin/bash
awk '{sub(/<SetIntegratorTest>True<\/SetIntegratorTest>/,"<UseGSLNumericalIntegration>True</UseGSLNumericalIntegration>\n\t<FixedIntegrationPoints>100000</FixedIntegrationPoints>"); print}' $1 > /tmp/tmp.xml
mv /tmp/tmp.xml $1
awk '{sub(/UseAngularAcceptance:True/,"UseAngularAcceptance:False"); print}' $1 > /tmp/tmp.xml
mv /tmp/tmp.xml $1