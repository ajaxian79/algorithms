# bellman-ford

## entry 1

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.
