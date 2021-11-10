# bridges

## entry 1

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 7

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 11

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 13

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 19

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 20

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 21

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 22

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 23

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 27

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 29

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 30

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 31

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
