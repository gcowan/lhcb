#! /bin/bash

CODEPATH=~/lhcb/lhcb/b2cc/analysis/phi_s/3fb/toy/Bc

count=1
while [ $count -ge 0 ]
do
	for server in `cat ~/software/hostlist_reduced.txt`
	do
		echo $count
		echo "Checking $server"
		ssh $server "screen -list | grep -q $server"
		output=`echo $?`
		if [ $output = 1 ]; then
			echo "No screen running, submit job to $server"
			ssh $server "screen -m -d -S $server $CODEPATH/run_single_tagged_fit_ppe.sh" 
			count=$((count-1))
		fi
	done
	sleep 1
done

