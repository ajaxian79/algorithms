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

## entry 17

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 20

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 24

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 27

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 28

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 29

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 30

- Walk both pointers from each end inward; advance the smaller side.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 32

- Stable sort matters when a secondary key was set in a prior pass.

## entry 33

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

- Monotonic stack pops while the new element violates the invariant.

## entry 37

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 38

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 40

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 41

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 43

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 44

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 45

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 46

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 47

- Euler tour flattens a tree into an array for range-query LCA.

## entry 48

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 49

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
