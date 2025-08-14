# graph-dp

## entry 1

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

- Articulation points: same DFS as bridges, with a slightly different test.
