# lfu-cache

## entry 1

Stable sort matters when a secondary key was set in a prior pass.

## entry 2

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 7

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 8

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 11

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 12

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

Splay tree: every access splays to the root; amortized O(log n).

## entry 14

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 15

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 16

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 17

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 18

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 19

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 20

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 21

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 22

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 23

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

Monotonic stack pops while the new element violates the invariant.

## entry 27

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

Walk both pointers from each end inward; advance the smaller side.

## entry 31

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 32

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 33

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 34

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 36

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 37

LCA via binary lifting: jump up powers of two until depths match, then converge.
