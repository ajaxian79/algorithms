# lru-cache

## entry 1

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 2

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 6

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

Monotonic stack pops while the new element violates the invariant.

## entry 9

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 12

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 13

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 14

State compression: bitmask + integer encodes a small subset cheaply.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 17

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 18

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 20

Union-Find with path compression amortizes to near-O(1) per op.

## entry 21

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Union-Find with path compression amortizes to near-O(1) per op.

## entry 24

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 26

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 27

Stable sort matters when a secondary key was set in a prior pass.

## entry 28

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 29

Splay tree: every access splays to the root; amortized O(log n).

## entry 30

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 31

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 32

State compression: bitmask + integer encodes a small subset cheaply.

## entry 33

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 34

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 35

Articulation points: same DFS as bridges, with a slightly different test.

## entry 36

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 37

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 38

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 39

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 40

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 41

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 42

Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 44

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 45

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 46

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 47

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 48

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 49

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 50

Union-Find with path compression amortizes to near-O(1) per op.

## entry 51

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 52

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 53

StringBuilder: amortize allocation by doubling on grow.

## entry 54

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Greedy by end-time picks the most non-overlapping intervals.

## entry 57

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 58

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 59

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 60

Interval DP: solve all `[l, r]` ranges from short to long.
