# centroid-decomposition

## entry 1

Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5

Splay tree: every access splays to the root; amortized O(log n).

## entry 6

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 7

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 8

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 9

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 10

Union-Find with path compression amortizes to near-O(1) per op.

## entry 11

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 12

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 15

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 18

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 19

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 20

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 21

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 22

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 23

Splay tree: every access splays to the root; amortized O(log n).

## entry 24

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 27

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 28

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 29

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 32

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 33

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 34

StringBuilder: amortize allocation by doubling on grow.

## entry 35

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 36

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 37

DFS on a grid: write a sentinel into the visited cell; restore if needed.
