# utf8-bytes

## entry 1

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 8

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 9

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 10

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 12

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 13

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 14

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 15

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 16

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 17

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 18

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 19

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 20

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 22

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
