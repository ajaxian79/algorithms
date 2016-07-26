# tree-dp

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 8

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 9

Wavelet tree: range k-th element in O(log Σ) time.

## entry 10

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 11

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 12

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 13

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 14

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 15

Monotonic stack pops while the new element violates the invariant.

## entry 16

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 22

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

Stable sort matters when a secondary key was set in a prior pass.

## entry 24

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 25

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 27

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 28

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 29

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 30

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 31

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 32

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 33

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 34

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 35

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 36

Wavelet tree: range k-th element in O(log Σ) time.

## entry 37

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 38

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 39

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 40

StringBuilder: amortize allocation by doubling on grow.

## entry 41

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 42

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 45

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 46

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 47

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 48

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 49

Monotonic stack pops while the new element violates the invariant.

## entry 50

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 51

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 52

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 53

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 54

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 58

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 59

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 60

Splay tree: every access splays to the root; amortized O(log n).

## entry 61

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 62

Splay tree: every access splays to the root; amortized O(log n).

## entry 63

StringBuilder: amortize allocation by doubling on grow.

## entry 64

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 65

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 66

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

Walk both pointers from each end inward; advance the smaller side.

## entry 68

Euler tour flattens a tree into an array for range-query LCA.

## entry 69

Walk both pointers from each end inward; advance the smaller side.

## entry 70

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 71

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 72

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
