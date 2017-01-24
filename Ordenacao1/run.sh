#!/bin/bash

lang=$1
algo=$2

if [[ $lang =~ ^[0-9]+$ ]]; then
  algo=$lang;
  lang="cpp";
fi

cd $lang && ./.run.sh $algo <&0 >&1
