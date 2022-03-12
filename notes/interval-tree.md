# interval-tree

## entry 1

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 6

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 7

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 8

- StringBuilder: amortize allocation by doubling on grow.

## entry 9

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 10

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 12

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 15

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 16

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 25

- Greedy by end-time picks the most non-overlapping intervals.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 28

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 30

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 31

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 32

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 34

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 35

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 36

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 37

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 38

- Hash collision: chain or open-address; chained handles arbitrary load factor.
