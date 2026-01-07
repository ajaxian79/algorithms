# Convert to Base 7

Standard repeated-division: peel off `n % 7`, divide by 7, repeat. The
digits emerge least-significant first, so we collect them in a small buffer
and reverse on the way out into the heap result.

The `long` cast on `-(long)n` exists to keep `INT_MIN` from overflowing
when negated.

No allocations on the hot path.

Handles empty input by returning 0.

Stable across duplicates in the input.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Two passes: one to count, one to fill.
