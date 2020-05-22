# interval-tree

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 7

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 8

State compression: bitmask + integer encodes a small subset cheaply.

## entry 9

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 11

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 12

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 15

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 17

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 18

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 19

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 21

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 22

Euler tour flattens a tree into an array for range-query LCA.

## entry 23

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 24

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 26

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 27

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 31

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 32

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 33

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 34

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 35

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
