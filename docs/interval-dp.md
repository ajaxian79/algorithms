# interval-dp

## entry 1

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
