# spfa

## entry 1

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 7

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 8

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 9

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 10

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 11

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 12

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
