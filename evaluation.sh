#!/bin/bash

# LIMIT
# 100 = 700
# 500 = 5500

LIMIT=700
FILE=problem_100
FILEKO=problem_KO
MINSIZE=60;
MINSIZEAVG=6000000000;

file="./problem_100"
if test $file; then
	rm $file
fi

fileko="./problem_KO"
if test $fileko; then
	rm $fileko
fi

for isize in {1..100}
do
	ITERATIONS=0
	MAX=1
	MIN=100000
	SUM=0
	for i in {1..50}
	do
		export ARG=`ruby -e "puts (1..$isize).to_a.shuffle.join(' ')"`
		if ./push_swap $ARG | ./checker_Mac $ARG | grep -q KO
		then
			echo $NUMBER >> $FILEKO
			echo $ARG >> $FILEKO
			break
		fi
		NUMBER="$(./push_swap $ARG | wc -l | sed 's/ //g')"
		if [ "$NUMBER" -gt "$LIMIT" ]
			then
			echo $NUMBER >> $FILE
			echo $ARG >> $FILE
		fi
		if [ "$NUMBER" -gt "$MAX" ]
			then
			MAX=$NUMBER;
		fi
		if [ "$NUMBER" -le "$MIN" ]
			then
			MIN=$NUMBER;
		fi
		let SUM+=$NUMBER;
		let ITERATIONS+=1
	done
	echo "SIZE: $isize"
	echo "AVG: $(($SUM / $ITERATIONS))"
	echo "MAX: " $MAX
	echo "MIN: " $MIN
done














