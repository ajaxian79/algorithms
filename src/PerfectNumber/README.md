# Perfect Number

A positive integer is *perfect* iff it equals the sum of its proper
divisors (factors other than itself). The known small perfect numbers are
`6, 28, 496, 8128, 33550336, ...`

We sweep divisors up to `sqrt(n)`. For each divisor `i` we add both `i`
and `n/i` (skipping the duplicate when `i² == n`). `O(sqrt n)` time, the
same shape as a small primality probe.

Space complexity: O(1) auxiliary.

Tail-recursive; the compiler turns it into a loop.

Edge case: reverse-sorted input → still O(n log n).

Uses a small fixed-size lookup table.

Time complexity: O(log n).

Handles empty input by returning 0.

No allocations on the hot path.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.
