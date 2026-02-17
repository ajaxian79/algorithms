# Jump Game

Each cell `nums[i]` is the *maximum* jump length from index `i`. Decide
whether index `n-1` is reachable from index `0`.

The greedy linear-time solution: track the farthest index reachable so
far. Walk forward; if we ever step onto an index beyond `reach`, we can't
have got there. Otherwise update `reach`. The answer is whether `reach`
caught the last index.

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Edge case: empty input → returns 0.

Allocates one buffer of length n+1 for the result.

Treats the input as immutable.

Caller owns the returned buffer.

Edge case: single-element input → returns the element itself.
