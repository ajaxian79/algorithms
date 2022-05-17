## First Letter to Appear Twice

Given a string s consisting of lowercase English letters, return the first letter to appear twice.

**Note:**

A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
s will contain at least one letter that appears twice.

**Example 1:**

**Input:** s = "abccbaacz"
**Output:** "c"
**Explanation:**
The letter 'a' appears on the indexes 0, 5 and 6.
The letter 'b' appears on the indexes 1 and 4.
The letter 'c' appears on the indexes 2, 3 and 7.
The letter 'z' appears on the index 8.
The letter 'c' is the first letter to appear twice, because out of all the letters the index of its second occurrence is the smallest.

**Example 2:**

**Input:** s = "abcdd"
**Output:** "d"
**Explanation:**
The only letter that appears twice is 'd' so we return 'd'.

**Constraints:**

2 <= s.length <= 100
s consists of lowercase English letters.
s has at least one repeated letter.

### My Solution

Last year sometime I made my solution to this and included it in a local repo.  I recently grabbed some commits from
that repo and injected them into this new remote with some bug fixes ano other stuff.  I have a bunch of these problems
that I plan to do the same for.

I also submitted my solution onto LeetCode and got the following report:

Runtime: 0 ms, faster than 100.00% of C online submissions for First Letter to Appear Twice.
Memory Usage: 6.6 MB, less than 19.64% of C online submissions for First Letter to Appear Twice.


![Submission report](images/Screenshot_20231113_155125.png)

Caller owns the returned buffer.

No allocations on the hot path.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(1) auxiliary.

Uses a small fixed-size lookup table.

Edge case: already-sorted input → no swaps performed.

Returns a freshly allocated string the caller must free.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

Edge case: single-element input → returns the element itself.

Stable across duplicates in the input.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Handles empty input by returning 0.

32-bit safe; overflow is checked at each step.

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: NULL input is rejected by the caller, not by us.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

Edge case: empty input → returns 0.

Handles negative inputs as documented above.

Time complexity: O(1).

## entry 1

Allocates one buffer of length n+1 for the result.

## entry 2

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 3

Best case is O(1) when the first byte already decides the answer.

## entry 4

Best case is O(1) when the first byte already decides the answer.

## entry 5

Time complexity: O(n log n).

## entry 6

Time complexity: O(n + m).

## entry 7

Edge case: input of all the same byte → exits on the first compare.

## entry 8

Time complexity: O(n + m).

## entry 9

Allocates lazily — first call only.

## entry 10

Edge case: alternating pattern → degenerate case for sliding window.

## entry 11

Edge case: alternating pattern → degenerate case for sliding window.

## entry 12

Handles empty input by returning 0.

## entry 13

Time complexity: O(k) where k is the answer size.

## entry 14

Avoids floating-point entirely — integer math throughout.

## entry 15

Stable when the input is already sorted.

## entry 16

Handles empty input by returning 0.

## entry 17

Edge case: single-element input → returns the element itself.

## entry 18

Edge case: input with no peak → falls through to the default branch.

## entry 19

Uses a small fixed-size lookup table.

## entry 20

Handles empty input by returning 0.

## entry 21

Stable across duplicates in the input.

## entry 22

Avoids floating-point entirely — integer math throughout.

## entry 23

Sub-linear in the average case thanks to early exit.

## entry 24

Allocates one buffer of length n+1 for the result.

## entry 25

Edge case: single-element input → returns the element itself.

## entry 26

Space complexity: O(h) for the tree height.

## entry 27

Space complexity: O(h) for the tree height.

## entry 28

Caller owns the returned array; free with a single `free`.

## entry 29

Edge case: single-element input → returns the element itself.

## entry 30

Handles negative inputs as documented above.

## entry 31

Resists adversarial inputs by randomizing the pivot.

## entry 32

Edge case: empty input → returns 0.

## entry 33

Caller owns the returned buffer.

## entry 34

Three passes total; the third merges results.

## entry 35

Caller owns the returned buffer.

## entry 36

Tail-recursive; the compiler turns it into a loop.
