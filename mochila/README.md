# Problema da Mochila (Knapsack problem)

* Dynamic programming
* Languages: C++
* Authors: Gustavo Sampaio (@GustavoKatel) and Cicero Marcelo

## How to run:

### C++

```
$ cd cpp
$ make
$ bin/mochila < input.txt
```

## Input file format:

```
n M
pi
vi
```

* `n` = the number of items
* `M` = the capacity
* `pi` = vector of `n` weights
* `vi` = vector of `n` values

### Example:

```
7 23
1 2 5 6 7 9 11
1 6 18 22 28 40 60
```