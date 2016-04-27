# splay

## entry 1

- Heap when you only need top-k; full sort is wasted work.

## entry 2

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6

- LIS via patience: each pile holds the smallest tail of length k.

## entry 7

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 10

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 11

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 18

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 20

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 27

- Euler tour flattens a tree into an array for range-query LCA.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 32

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 33

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 34

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 35

- Walk both pointers from each end inward; advance the smaller side.

## entry 36

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 37

- Euler tour flattens a tree into an array for range-query LCA.

## entry 38

- StringBuilder: amortize allocation by doubling on grow.

## entry 39

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 41

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 42

- StringBuilder: amortize allocation by doubling on grow.

## entry 43

- Euler tour flattens a tree into an array for range-query LCA.

## entry 44

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 45

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 46

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 47

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 48

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 49

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 50

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 51

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 52

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 53

- Splay tree: every access splays to the root; amortized O(log n).

## entry 54

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 55

- Splay tree: every access splays to the root; amortized O(log n).

## entry 56

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 57

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 58

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 59

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 60

- Euler tour flattens a tree into an array for range-query LCA.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 63

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 64

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 65

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
