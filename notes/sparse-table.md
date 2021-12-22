# sparse-table

## entry 1

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 6

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 8

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 9

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 10

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 11

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 14

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 15

- Monotonic stack pops while the new element violates the invariant.

## entry 16

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 22

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 23

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 24

- StringBuilder: amortize allocation by doubling on grow.

## entry 25

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 26

- Tarjan SCC: low-link values find strongly connected components in one DFS.
