# CHANGELOG

## entry 1

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4

- Walk both pointers from each end inward; advance the smaller side.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

- Splay tree: every access splays to the root; amortized O(log n).

## entry 10

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 11

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 12

- Merge intervals: sort by start; extend the running interval while overlapping.
