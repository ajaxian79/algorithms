# wavelet-tree

## entry 1

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 7

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 9

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 10

- Splay tree: every access splays to the root; amortized O(log n).

## entry 11

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 12

- In-place compaction uses two pointers: read advances always, write only on keep.
