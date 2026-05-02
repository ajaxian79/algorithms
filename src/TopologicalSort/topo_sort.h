//
// Created by ajaxian on 05/02/26.
//

#ifndef ALGORITHMS_TOPO_SORT_H
#define ALGORITHMS_TOPO_SORT_H

#include <stddef.h>

// Kahn's algorithm. Compute a topological order of a directed graph on
// `n` nodes (0..n-1) given as an edge list of length `m` (each edge is
// `from -> to` packed as two consecutive ints in `edges`). Writes the
// order into `out` and returns its length. If the graph has a cycle the
// algorithm halts as soon as it cannot drain another node and returns the
// partial length, leaving the caller to detect the cycle as
// `returned < n`.
//
// Allocates internal in-degree, adjacency, and queue arrays; all freed
// before return. `out` must have room for `n` ints.
//
// Time complexity: O(n + m). Space complexity: O(n + m).
int topo_sort(int n, const int* edges, int m, int* out);

#endif //ALGORITHMS_TOPO_SORT_H
