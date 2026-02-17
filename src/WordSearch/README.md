# Word Search

Backtracking DFS over a character grid. From each starting cell, try to
match the word's characters by walking to 4-connected neighbours. Mark a
visited cell with a sentinel before recursing and restore on the way out
so paths cannot reuse a cell.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Handles empty input by returning 0.

Runs in a single pass over the input.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.
