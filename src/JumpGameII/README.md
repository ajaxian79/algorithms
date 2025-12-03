# Jump Game II

Minimum number of jumps to reach the last index, given the same jump
rules as Jump Game I. The greedy linear-time approach: think of jumps as
*levels*, BFS-style. `current_end` is the rightmost index reachable in
the current level; `farthest` is the rightmost reachable in the next.
Whenever we reach `current_end`, we must take a jump; advance to
`farthest`. Stop as soon as the next level reaches the last index.

Edge case: NULL input is rejected by the caller, not by us.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Treats the input as immutable.

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Edge case: single-element input → returns the element itself.

Handles empty input by returning 0.
