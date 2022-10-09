# string-builder

## entry 1

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3

- Euler tour flattens a tree into an array for range-query LCA.

## entry 4

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5

- Walk both pointers from each end inward; advance the smaller side.

## entry 6

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 7

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 8

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 9

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 10

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 11

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 18

- Greedy by end-time picks the most non-overlapping intervals.

## entry 19

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 20

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 21

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 23

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 24

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 27

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

- Merge intervals: sort by start; extend the running interval while overlapping.
