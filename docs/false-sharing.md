# false-sharing

## entry 1

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 6

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 8

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 11

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 12

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 13

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 14

Euler tour flattens a tree into an array for range-query LCA.

## entry 15

Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 17

StringBuilder: amortize allocation by doubling on grow.

## entry 18

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 19

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 21

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 25

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 27

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 28

Walk both pointers from each end inward; advance the smaller side.

## entry 29

Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 31

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 32

Walk both pointers from each end inward; advance the smaller side.

## entry 33

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 34

Greedy by end-time picks the most non-overlapping intervals.

## entry 35

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 36

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 37

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 38

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 39

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 40

Euler tour flattens a tree into an array for range-query LCA.

## entry 41

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 42

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 43

Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

Greedy by end-time picks the most non-overlapping intervals.

## entry 46

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 47

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 48

Splay tree: every access splays to the root; amortized O(log n).

## entry 49

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 50

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 51

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 52

Euler tour flattens a tree into an array for range-query LCA.

## entry 53

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 54

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 55

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 56

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 58

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 59

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 60

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 61

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 62

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 63

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 64

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 65

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

Euler tour flattens a tree into an array for range-query LCA.

## entry 68

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
