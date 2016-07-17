# euler-tour

## entry 1

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

Euler tour flattens a tree into an array for range-query LCA.

## entry 7

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

State compression: bitmask + integer encodes a small subset cheaply.

## entry 9

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 10

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 11

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 12

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 13

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 14

Wavelet tree: range k-th element in O(log Σ) time.

## entry 15

StringBuilder: amortize allocation by doubling on grow.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 18

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

Euler tour flattens a tree into an array for range-query LCA.

## entry 20

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 21

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 22

StringBuilder: amortize allocation by doubling on grow.

## entry 23

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 24

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 26

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 27

Greedy by end-time picks the most non-overlapping intervals.

## entry 28

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 29

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 30

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 31

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 32

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 35

StringBuilder: amortize allocation by doubling on grow.

## entry 36

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 38

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 39

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 42

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 43

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 44

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 45

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 46

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 47

Wavelet tree: range k-th element in O(log Σ) time.

## entry 48

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 49

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 50

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 51

Union-Find with path compression amortizes to near-O(1) per op.

## entry 52

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 53

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
