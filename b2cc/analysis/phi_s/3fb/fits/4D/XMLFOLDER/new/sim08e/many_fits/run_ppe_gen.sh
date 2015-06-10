#! /bin/bash

CODEPATH=/Home/gcowan1/lhcb/lhcb/b2cc/analysis/phi_s/3fb/fits/4D/XMLFOLDER/new/sim08e/many_fits

count=0
count2=0
while [ $count2 -le 99 ]
do
	for server in `cat ~/software/hostlist_reduced.txt`
	do
		echo $count
		echo "Checking $server"
		ssh $server "screen -list | grep -q $server"
		output=`echo $?`
		if [ $output = 1 ]; then
			echo "No screen running, submit job to $server $count2"
			ssh $server "screen -m -d -S $server $CODEPATH/run_single_tagged_fit_ppe.sh $count2" 
			echo "Submitted jobs: $count2"
			count=$((count-1))
			count2=$((count2+1))
		fi
	done
	sleep 1
done

