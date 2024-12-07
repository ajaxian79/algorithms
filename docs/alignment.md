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
