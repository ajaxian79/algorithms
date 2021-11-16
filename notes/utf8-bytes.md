# utf8-bytes

## entry 1

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 7

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 11

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 12

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 16

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 18

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 19

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 21

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 22

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 23

- StringBuilder: amortize allocation by doubling on grow.

## entry 24

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 30

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

- LIS via patience: each pile holds the smallest tail of length k.

## entry 32

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 33

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 34

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 35

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 36

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 37

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 39

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 40

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 41

- Manacher expands around each center, reusing prior radii via mirror reflection.
