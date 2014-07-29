n=12 #number of intervals
max=3. #max value
min=-3. #min value
width=(max-min)/n #interval width
hist(x,width)=width*floor(x/width)+width/2.0
set xlabel "(par1-par2)/sqrt(dpar1^2 + dpar2^2)"
set ylabel "Entries"
set xrange [min:max]
plot '<cat' using (hist($3,width)):(1.0) smooth freq with boxes lc rgb"red" notitle
