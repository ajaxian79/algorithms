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
