# digit-dp

## entry 1

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 8

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 9

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 10

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 11

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 12

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 13

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- Splay tree: every access splays to the root; amortized O(log n).

## entry 19

- LIS via patience: each pile holds the smallest tail of length k.

## entry 20

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 21

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 22

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 23

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 25

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 27

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 28

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 29

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 30

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 31

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 32

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 33

- LIS via patience: each pile holds the smallest tail of length k.

## entry 34

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 35

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 36

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 37

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 38

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 41

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 42

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 43

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 44

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 45

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 46

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 47

- Stable sort matters when a secondary key was set in a prior pass.

## entry 48

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 49

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 50

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 51

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 52

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 53

- Euler tour flattens a tree into an array for range-query LCA.

## entry 54

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 57

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 58

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 59

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 60

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 61

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 64

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 65

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 66

- Greedy by end-time picks the most non-overlapping intervals.

## entry 67

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 68

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 69

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 70

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 71

- Unbounded knapsack: capacity inner ascending allows item reuse.
