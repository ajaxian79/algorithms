# Topological Sort (Kahn's Algorithm)

Linear-order a DAG in a single pass over edges. Compute every node's
in-degree, seed a FIFO queue with the in-degree-zero nodes, then drain:
pop a node, emit it, and for each outgoing edge decrement the target's
in-degree, enqueueing it if it just hit zero.

Used everywhere in compiler design (module compilation order, header
include resolution, build-system DAGs) and in any system that needs
dependency resolution. The classic deterministic alternative to DFS-based
topo sort.

Cycle detection is free: when the queue empties before draining all
nodes, what remains has at least one cycle. The function returns the
count of emitted nodes, so the caller checks `returned < n`.

Time complexity: O(n + m).

Space complexity: O(n + m) for the in-degree array, adjacency, and
queue.

Edge case: empty graph (n == 0 or m == 0) produces an order of every
isolated node in numeric order.

Edge case: a cycle returns the partial topological order of the
acyclic prefix; the caller can diff the returned length against `n`.
