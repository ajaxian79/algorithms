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

## entry 38

Wavelet tree: range k-th element in O(log Σ) time.

## entry 39

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 40

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 41

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 42

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 43

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 44

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 45

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 46

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 47

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 48

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 49

State compression: bitmask + integer encodes a small subset cheaply.

## entry 50

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 51

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 52

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 53

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 54

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 55

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 56

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 57

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 58

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 59

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 60

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 61

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 62

Greedy by end-time picks the most non-overlapping intervals.

## entry 63

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 64

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 65

Greedy by end-time picks the most non-overlapping intervals.

## entry 66

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 67

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 68

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 69

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 70

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 71

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 72

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 73

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 74

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 76

BFS layers carry implicit shortest-path distance in unweighted graphs.
