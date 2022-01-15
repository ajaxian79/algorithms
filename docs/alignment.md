# alignment

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 7

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 8

Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 10

Stable sort matters when a secondary key was set in a prior pass.

## entry 11

Walk both pointers from each end inward; advance the smaller side.

## entry 12

Heap when you only need top-k; full sort is wasted work.

## entry 13

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 14

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 16

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

Euler tour flattens a tree into an array for range-query LCA.

## entry 18

Walk both pointers from each end inward; advance the smaller side.

## entry 19

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 20

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 21

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 22

Stable sort matters when a secondary key was set in a prior pass.

## entry 23

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 24

Stable sort matters when a secondary key was set in a prior pass.

## entry 25

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 26

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 27

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 28

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 32

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 34

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 35

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 36

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 37

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 40

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 41

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

StringBuilder: amortize allocation by doubling on grow.

## entry 43

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 44

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 45

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 46

Tree DP: post-order DFS lets children inform the parent in one pass.
