# To Hex String

Convert an `int` to its lowercase hex representation. Negative numbers are
written as their 32-bit two's complement (so `-1 -> "ffffffff"`).

The implementation peels nibbles off the unsigned reinterpretation, building
the digits in reverse, then flips them on the way out into a heap buffer.

Handles empty input by returning 0.

Runs in a single pass over the input.

Time complexity: O(1).

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.
