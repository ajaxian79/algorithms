# Trapping Rain Water

Compute total trapped water between bars of an elevation map. Two pointers
walk inward; the side whose current height is *smaller* is the one that
controls the water level on its side, so we always advance from there
and add `(side_max - height)` whenever the current bar dips below its
running max.

`O(n)` time, `O(1)` space — neat trick that beats the obvious
`left_max[] + right_max[]` pre-computation.

Allocates one buffer of length n+1 for the result.

Handles empty input by returning 0.
