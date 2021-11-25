# spfa

## entry 1

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 8

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 9

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 11

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 12

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 13

- Splay tree: every access splays to the root; amortized O(log n).

## entry 14

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 15

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 16

- Heap when you only need top-k; full sort is wasted work.

## entry 17

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 18

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 19

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 20

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 21

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 22

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 23

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 24

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 25

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 29

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 30

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 31

- Manacher expands around each center, reusing prior radii via mirror reflection.
