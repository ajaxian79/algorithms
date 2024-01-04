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
