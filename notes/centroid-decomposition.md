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
