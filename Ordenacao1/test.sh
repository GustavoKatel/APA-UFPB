#!/bin/bash

lang=$1
algo_count=5

languages=$(ls -d */)

for lang in $languages; do

  if [[ -e "$lang/.test.sh" ]]; then
    cd $lang && ./.test.sh $algo_count
  fi

done
