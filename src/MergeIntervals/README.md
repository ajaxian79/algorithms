# Merge Intervals

Merge a list of `[start, end]` intervals so no two in the output overlap.

The classic algorithm: sort by start, then sweep. If the current interval
starts before the most recent merged interval's end, extend that end;
otherwise emit a new interval. `O(n log n)` time, dominated by the sort.

The intervals are laid out flat as `[s0, e0, s1, e1, ...]` so we can sort
them as pairs of `int` with a pair-size comparator.
