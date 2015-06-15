#! /bin/bash

CODEPATH=/Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/xml/toys/chi2_calibration_Fit5

count=500
count2=0
while [ $count -ge 1 ]
do
	for server in `cat ~/software/hostlist_reduced.txt`
	do
		echo $count
		echo "Checking $server"
		ssh $server "screen -list | grep -q $server"
		output=`echo $?`
		if [ $output = 1 ]; then
			echo "No screen running, submit job to $server"
			ssh $server "screen -m -d -S $server $CODEPATH/run_toy.sh" 
			count=$((count-1))
			count2=$((count2+1))
			echo "Submitted jobs: $count2"
		fi
	done
	sleep 1
done

