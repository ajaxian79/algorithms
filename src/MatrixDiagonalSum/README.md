# Matrix Diagonal Sum

Sum both diagonals of an `n × n` matrix. The trick is the off-by-one: in a
matrix with odd `n`, the center cell is on both diagonals, so we add it
once during the loop and subtract it once at the end. Even `n` has no
overlap and the post-correction is skipped.

32-bit safe; overflow is checked at each step.
