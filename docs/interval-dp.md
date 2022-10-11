# interval-dp

## entry 1

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 9

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 11

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 12

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 13

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 16

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 17

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 18

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

StringBuilder: amortize allocation by doubling on grow.

## entry 20

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 21

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 22

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 24

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 25

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 26

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 27

Heap when you only need top-k; full sort is wasted work.

## entry 28

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 29

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 30

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 31

Wavelet tree: range k-th element in O(log Σ) time.

## entry 32

Monotonic stack pops while the new element violates the invariant.

## entry 33

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 34

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 35

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 36

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
