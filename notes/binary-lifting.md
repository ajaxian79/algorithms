# binary-lifting

## entry 1

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 6

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 7

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 8

- Euler tour flattens a tree into an array for range-query LCA.

## entry 9

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 10

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 11

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 12

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 13

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 14

- LIS via patience: each pile holds the smallest tail of length k.

## entry 15

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 16

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 17

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 18

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 19

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 20

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 21

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 22

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 23

- StringBuilder: amortize allocation by doubling on grow.
