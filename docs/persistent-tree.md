# persistent-tree

## entry 1

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

Wavelet tree: range k-th element in O(log Σ) time.

## entry 5

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 6

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 8

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 9

StringBuilder: amortize allocation by doubling on grow.

## entry 10

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 12

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

Walk both pointers from each end inward; advance the smaller side.

## entry 14

LIS via patience: each pile holds the smallest tail of length k.

## entry 15

StringBuilder pitfall: reuse forces a deep copy on the first read.
