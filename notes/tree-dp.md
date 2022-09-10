# tree-dp

## entry 1

- Heap when you only need top-k; full sort is wasted work.

## entry 2

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 6

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 7

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 8

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 9

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 11

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 12

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 13

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

- Walk both pointers from each end inward; advance the smaller side.

## entry 15

- LIS via patience: each pile holds the smallest tail of length k.

## entry 16

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
