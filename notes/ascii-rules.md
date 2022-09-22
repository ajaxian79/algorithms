# ascii-rules

## entry 1

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 3

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

- Stable sort matters when a secondary key was set in a prior pass.

## entry 7

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 8

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 12

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 13

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Euler tour flattens a tree into an array for range-query LCA.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 18

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 19

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 20

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 22

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 23

- LIS via patience: each pile holds the smallest tail of length k.
