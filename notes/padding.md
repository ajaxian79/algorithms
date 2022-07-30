# padding

## entry 1

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- Heap when you only need top-k; full sort is wasted work.

## entry 6

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 7

- Walk both pointers from each end inward; advance the smaller side.

## entry 8

- StringBuilder: amortize allocation by doubling on grow.

## entry 9

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 12

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 13

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 14

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 16

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 17

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 18

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 19

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 20

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 21

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 22

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 23

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 24

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.
