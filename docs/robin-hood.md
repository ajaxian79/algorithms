# robin-hood

## entry 1

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3

Euler tour flattens a tree into an array for range-query LCA.

## entry 4

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 5

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 7

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 9

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 12

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 16

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 18

Splay tree: every access splays to the root; amortized O(log n).

## entry 19

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
