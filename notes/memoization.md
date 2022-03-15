# memoization

## entry 1

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 7

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 9

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 11

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 12

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 13

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 14

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 15

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 16

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 17

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 18

- Monotonic stack pops while the new element violates the invariant.

## entry 19

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 20

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 21

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 22

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 24

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 25

- Stable sort matters when a secondary key was set in a prior pass.
