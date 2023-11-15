# sparse-table

## entry 1

Union-Find with path compression amortizes to near-O(1) per op.

## entry 2

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

Euler tour flattens a tree into an array for range-query LCA.

## entry 6

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 7

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

Splay tree: every access splays to the root; amortized O(log n).

## entry 10

Splay tree: every access splays to the root; amortized O(log n).

## entry 11

Wavelet tree: range k-th element in O(log Σ) time.

## entry 12

Wavelet tree: range k-th element in O(log Σ) time.

## entry 13

Interval DP: solve all `[l, r]` ranges from short to long.
