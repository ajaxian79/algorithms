# spfa

## entry 1

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
