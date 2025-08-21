# robin-hood

## entry 1

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5

- Greedy by end-time picks the most non-overlapping intervals.

## entry 6

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 7

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 9

- Euler tour flattens a tree into an array for range-query LCA.

## entry 10

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 11

- Monotonic stack pops while the new element violates the invariant.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 15

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 16

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 18

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 19

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 20

- Walk both pointers from each end inward; advance the smaller side.

## entry 21

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 22

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 23

- LIS via patience: each pile holds the smallest tail of length k.

## entry 24

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 25

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 27

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 28

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 29

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 30

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 31

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 32

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 33

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 35

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 36

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 37

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 39

- Greedy by end-time picks the most non-overlapping intervals.

## entry 40

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 41

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 42

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 43

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 44

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 45

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 46

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 47

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 48

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 49

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 50

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 51

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 52

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 53

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 54

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 55

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 56

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 57

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 58

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 59

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 60

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 61

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 62

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 63

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 64

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 65

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 66

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 67

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 68

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 69

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 70

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 71

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

- Walk both pointers from each end inward; advance the smaller side.

## entry 73

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 74

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 75

- StringBuilder: amortize allocation by doubling on grow.

## entry 76

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 77

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 80

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 82

- StringBuilder: amortize allocation by doubling on grow.

## entry 83

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 84

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 85

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 86

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 87

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 88

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 89

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 90

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 91

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 92

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 93

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 94

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 95

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 96

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 97

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 98

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 99

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 100

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 101

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 102

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 103

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 104

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 105

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 106

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 107

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 108

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 109

- Padding inside a struct can dwarf the actual data; reorder fields by size.
