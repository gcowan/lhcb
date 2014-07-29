#! /bin/bash

CODEPATH=~/lhcb/lhcb/b2cc/analysis/phi_s/3fb/toy/angular_resolution/no_angular_acceptance

count=1000
while [ $count -ge 0 ]
do
	echo $count
	for server in `cat ~/software/hostlist_reduced.txt`
	do
		echo "Checking $server"
		ssh $server "screen -list | grep -q $server"
		output=`echo $?`
		if [ $output = 1 ]; then
			echo "No screen running, submit job to $server"
			ssh $server "screen -m -d -S $server $CODEPATH/run_single_fit_ppe.sh" 
			#ssh $server "$CODEPATH/run_single_fit_ppe.sh" 
			count=$((count-1))
		fi
	done
	sleep 1
done

