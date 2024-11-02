# euler-tour

## entry 1

- StringBuilder: amortize allocation by doubling on grow.

## entry 2

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
