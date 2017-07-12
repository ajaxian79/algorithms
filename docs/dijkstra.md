# dijkstra

## entry 1

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 8

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 9

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 10

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 14

Monotonic stack pops while the new element violates the invariant.

## entry 15

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 16

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 17

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 18

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 19

Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 21

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 22

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 23

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 24

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 25

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 26

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 27

State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 29

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 30

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

Monotonic stack pops while the new element violates the invariant.

## entry 32

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 33

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 34

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 35

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 36

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 37

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

LIS via patience: each pile holds the smallest tail of length k.

## entry 39

State compression: bitmask + integer encodes a small subset cheaply.

## entry 40

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 41

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 42

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 43

Splay tree: every access splays to the root; amortized O(log n).

## entry 44

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 45

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 46

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 47

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 48

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 49

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 50

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 51

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 52

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 53

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 54

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 55

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 56

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

Union-Find with path compression amortizes to near-O(1) per op.

## entry 58

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 59

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 60

Greedy by end-time picks the most non-overlapping intervals.

## entry 61

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 62

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 63

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 64

Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 66

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
