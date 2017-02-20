# skip-list

## entry 1

Splay tree: every access splays to the root; amortized O(log n).

## entry 2

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

Greedy by end-time picks the most non-overlapping intervals.

## entry 5

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

Splay tree: every access splays to the root; amortized O(log n).

## entry 9

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 12

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

Wavelet tree: range k-th element in O(log Σ) time.

## entry 15

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 17

Euler tour flattens a tree into an array for range-query LCA.

## entry 18

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 19

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 21

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 22

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 23

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 25

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 26

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 27

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 29

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 30

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 32

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 34

Heap when you only need top-k; full sort is wasted work.

## entry 35

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 36

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 38

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 39

Walk both pointers from each end inward; advance the smaller side.

## entry 40

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 41

Splay tree: every access splays to the root; amortized O(log n).

## entry 42

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 43

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 44

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 45

Walk both pointers from each end inward; advance the smaller side.

## entry 46

Greedy by end-time picks the most non-overlapping intervals.

## entry 47

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 48

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 50

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 51

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 52

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 53

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 54

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 55

Euler tour flattens a tree into an array for range-query LCA.

## entry 56

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 58

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 59

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 60

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 61

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 62

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 63

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 64

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 65

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

Pick a pivot, partition, recurse on the side that contains the kth slot.
