# Valid Sudoku

Check whether a 9×9 grid is a *consistent* (not necessarily solvable)
Sudoku state — every row, every column, and every 3×3 box has at most one
of each digit. `'.'` marks an empty cell.

We sweep cells once and keep three boolean tables: row × digit, column ×
digit, and box × digit. The box index is the classic `(r/3)*3 + (c/3)`.
Any double-set in any of the three tables means the board is invalid.

`O(81)` work; constant memory.

Space complexity: O(n) for the result buffer.

Allocates one buffer of length n+1 for the result.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(n).

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Handles empty input by returning 0.

Time complexity: O(n log n).

Stable across duplicates in the input.
