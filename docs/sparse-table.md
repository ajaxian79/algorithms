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

## entry 14

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 18

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 19

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 20

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 22

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 26

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 27

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 28

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 29

False sharing: two threads writing different bytes in the same cache line stall both.
