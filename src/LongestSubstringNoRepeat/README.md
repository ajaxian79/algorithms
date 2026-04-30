# Longest Substring Without Repeating Characters

Sliding window over the string. Keep a 256-entry "last index seen" table
for each byte. When the next byte was seen at or after the window's
left edge, jump the left edge past it. The best window length is the
answer.

Time complexity: O(n).

Space complexity: O(1) auxiliary (a fixed 256-int table regardless of input).

Uses a 256-entry lookup for the inner step.

Edge case: empty input → returns 0.

Edge case: NULL input → returns 0.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
