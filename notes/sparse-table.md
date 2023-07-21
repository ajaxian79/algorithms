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
