# centroid-decomposition

## entry 1

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 8

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

- Greedy by end-time picks the most non-overlapping intervals.

## entry 10

- Monotonic stack pops while the new element violates the invariant.

## entry 11

- Stable sort matters when a secondary key was set in a prior pass.

## entry 12

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

- Stable sort matters when a secondary key was set in a prior pass.

## entry 14

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- Monotonic stack pops while the new element violates the invariant.

## entry 20

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 21

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 22

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 23

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 24

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 27

- Walk both pointers from each end inward; advance the smaller side.

## entry 28

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 29

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 31

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 33

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

- Greedy by end-time picks the most non-overlapping intervals.

## entry 37

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 38

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 41

- Walk both pointers from each end inward; advance the smaller side.

## entry 42

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 43

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 44

- Stable sort matters when a secondary key was set in a prior pass.

## entry 45

- StringBuilder: amortize allocation by doubling on grow.

## entry 46

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 49

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 50

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 51

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 52

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 53

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 54

- Monotonic stack pops while the new element violates the invariant.

## entry 55

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 56

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 57

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 58

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 59

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 60

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.
