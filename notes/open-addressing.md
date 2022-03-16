# open-addressing

## entry 1

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 12

- StringBuilder: amortize allocation by doubling on grow.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 15

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 16

- Monotonic stack pops while the new element violates the invariant.

## entry 17

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 18

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 19

- StringBuilder: amortize allocation by doubling on grow.

## entry 20

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 21

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 22

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 23

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 26

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 27

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 28

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 29

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 30

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 31

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 32

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 33

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 35

- Heap when you only need top-k; full sort is wasted work.

## entry 36

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Splay tree: every access splays to the root; amortized O(log n).
