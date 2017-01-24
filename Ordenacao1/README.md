# Ordenação1

[Description Here](https://github.com/GustavoKatel/APA-UFPB)

## Algorithms

1. selection_sort
2. insertion_sort
3. merge_sort
4. quick_sort
5. heap_sort

## How to compile

```
$ make
```

## How to run pre-defined test cases?

```
$ ./test.sh
```

## How to run custom test case?

```
$ ./run.sh [language Default: cpp] <algorithm 1-5>
```
It will read from stdin and print to stdout

Example:

```
$ ./run.sh 1 < array.in > result.out
```
The above example will read numbers from stdin (piped from `array.in`) and
write the result to stdout (piped to `result.out`) using the `C++` implementation


## Languages:

### C++

Files:
* cpp/bin/ord1 (Binary executable)
* cpp/[include|src]/* (Implementations)
