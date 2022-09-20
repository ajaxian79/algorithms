# false-sharing

## entry 1

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 11

- Splay tree: every access splays to the root; amortized O(log n).

## entry 12

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 13

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 14

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 17

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 18

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 20

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 21

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 23

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 24

- Splay tree: every access splays to the root; amortized O(log n).

## entry 25

- Euler tour flattens a tree into an array for range-query LCA.

## entry 26

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 27

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
