# euler-tour

## entry 1

- StringBuilder: amortize allocation by doubling on grow.

## entry 2

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

- Heap when you only need top-k; full sort is wasted work.

## entry 6

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 7

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 8

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
