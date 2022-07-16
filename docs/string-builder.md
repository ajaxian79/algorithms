# string-builder

## entry 1

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4

StringBuilder: amortize allocation by doubling on grow.

## entry 5

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 6

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 8

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 9

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 14

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 15

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 16

Monotonic stack pops while the new element violates the invariant.

## entry 17

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 18

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

StringBuilder: amortize allocation by doubling on grow.

## entry 21

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 22

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
