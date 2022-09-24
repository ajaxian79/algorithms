# skip-list

## entry 1

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

- Monotonic stack pops while the new element violates the invariant.

## entry 5

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 7

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 9

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 11

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 12

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 13

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- StringBuilder: amortize allocation by doubling on grow.

## entry 17

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 18

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 19

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

- Euler tour flattens a tree into an array for range-query LCA.

## entry 22

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
