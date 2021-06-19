# Perfect Number

A positive integer is *perfect* iff it equals the sum of its proper
divisors (factors other than itself). The known small perfect numbers are
`6, 28, 496, 8128, 33550336, ...`

We sweep divisors up to `sqrt(n)`. For each divisor `i` we add both `i`
and `n/i` (skipping the duplicate when `i² == n`). `O(sqrt n)` time, the
same shape as a small primality probe.
