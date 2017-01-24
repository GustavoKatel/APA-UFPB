#!/bin/bash

echo "############";
echo "###  C++ ###";
echo "############";

algo_count=$1

passed=0
failed=0

for i in `seq 1 $algo_count`; do

  echo -e "\nAlgoritmo $i";
  echo "--------------";

  for input in $(ls ../test_cases/*.in); do
    output=${input/".in"/".out"}

    echo -en "\nTest: $input -> ";

    ./.run.sh $i < $input > /tmp/ord.out

    diff $output /tmp/ord.out > /dev/null 2>&1

    if [[ $? -eq 0 ]]; then
      passed=$((passed+1));
      echo "✓"
    else
      failed=$((failed+1));
      echo "✗";
    fi

  done;

done

echo "--------------";
echo "Passed: $passed"
echo "Failed: $failed"
