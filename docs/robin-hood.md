# robin-hood

## entry 1

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3

Euler tour flattens a tree into an array for range-query LCA.

## entry 4

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 5

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 7

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 9

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 12

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 16

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 18

Splay tree: every access splays to the root; amortized O(log n).

## entry 19

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 20

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 21

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 22

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 23

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 24

LIS via patience: each pile holds the smallest tail of length k.

## entry 25

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 26

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 27

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 28

Euler tour flattens a tree into an array for range-query LCA.

## entry 29

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 30

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 31

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 32

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 33

StringBuilder: amortize allocation by doubling on grow.

## entry 34

Wavelet tree: range k-th element in O(log Σ) time.

## entry 35

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 36

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 37

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 38

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 41

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 42

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 43

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 44

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 45

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 46

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 47

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 48

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 49

State compression: bitmask + integer encodes a small subset cheaply.

## entry 50

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 51

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 52

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 53

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 54

Iterative DFS with an explicit stack avoids recursion-limit issues.
