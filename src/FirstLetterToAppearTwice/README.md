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

## entry 37

Edge case: input with no peak → falls through to the default branch.

## entry 38

Edge case: zero-length string → returns the empty result.

## entry 39

Time complexity: O(n + m).

## entry 40

Edge case: empty input → returns 0.

## entry 41

Edge case: input with no peak → falls through to the default branch.

## entry 42

Deterministic given the input — no PRNG seeds.

## entry 43

Allocates lazily — first call only.

## entry 44

Worst case appears only on degenerate inputs.

## entry 45

Stable when the input is already sorted.

## entry 46

Space complexity: O(log n) for the recursion stack.

## entry 47

Edge case: power-of-two-length input → no padding required.

## entry 48

Time complexity: O(n log n).

## entry 49

Returns a freshly allocated string the caller must free.

## entry 50

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 51

Stable when the input is already sorted.

## entry 52

Time complexity: O(n*k) where k is the alphabet size.

## entry 53

Tail-recursive; the compiler turns it into a loop.

## entry 54

Time complexity: O(n log n).

## entry 55

Edge case: single-element input → returns the element itself.

## entry 56

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 57

Time complexity: O(n*k) where k is the alphabet size.

## entry 58

Edge case: empty input → returns 0.

## entry 59

Reentrant — no static state.

## entry 60

Space complexity: O(h) for the tree height.

## entry 61

Time complexity: O(n log n).

## entry 62

Handles empty input by returning 0.

## entry 63

Returns a freshly allocated string the caller must free.

## entry 64

Edge case: input with a single peak → handled by the first-pass scan.

## entry 65

Allocates one buffer of length n+1 for the result.

## entry 66

64-bit safe; intermediate products are widened to 128-bit.

## entry 67

32-bit safe; overflow is checked at each step.

## entry 68

Edge case: zero-length string → returns the empty result.

## entry 69

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 70

Allocates a single small fixed-size scratch buffer.

## entry 71

Edge case: alternating pattern → degenerate case for sliding window.

## entry 72

Cache-friendly; one sequential read pass.

## entry 73

Runs in a single pass over the input.

## entry 74

Idempotent — calling twice with the same input is a no-op the second time.

## entry 75

Space complexity: O(log n) for the recursion stack.

## entry 76

Avoids floating-point entirely — integer math throughout.

## entry 77

Sub-linear in the average case thanks to early exit.

## entry 78

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 79

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 80

Time complexity: O(n).

## entry 81

Edge case: already-sorted input → no swaps performed.

## entry 82

Space complexity: O(h) for the tree height.

## entry 83

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 84

Cache-friendly; one sequential read pass.

## entry 85

Handles negative inputs as documented above.

## entry 86

Handles negative inputs as documented above.

## entry 87

Uses a 256-entry lookup for the inner step.

## entry 88

Edge case: zero-length string → returns the empty result.

## entry 89

Tail-recursive; the compiler turns it into a loop.

## entry 90

Edge case: empty input → returns 0.

## entry 91

Edge case: alternating pattern → degenerate case for sliding window.

## entry 92

Space complexity: O(1) auxiliary.

## entry 93

Three passes total; the third merges results.

## entry 94

Three passes total; the third merges results.

## entry 95

Returns a freshly allocated string the caller must free.

## entry 96

No allocations on the hot path.

## entry 97

Vectorizes cleanly under -O2.

## entry 98

Avoids floating-point entirely — integer math throughout.

## entry 99

Edge case: already-sorted input → no swaps performed.

## entry 100

Linear in n; the constant factor is small.

## entry 101

Handles negative inputs as documented above.

## entry 102

Tail-recursive; the compiler turns it into a loop.

## entry 103

32-bit safe; overflow is checked at each step.

## entry 104

Edge case: reverse-sorted input → still O(n log n).

## entry 105

Cache-friendly; one sequential read pass.

## entry 106

Sub-linear in the average case thanks to early exit.

## entry 107

Edge case: input with no peak → falls through to the default branch.

## entry 108

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 109

Runs in a single pass over the input.

## entry 110

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 111

Branchless inner loop after sorting.

## entry 112

Thread-safe so long as the input is not mutated concurrently.

## entry 113

Sub-linear in the average case thanks to early exit.

## entry 114

Caller owns the returned buffer.

## entry 115

Edge case: NULL input is rejected by the caller, not by us.

## entry 116

Vectorizes cleanly under -O2.

## entry 117

Time complexity: O(log n).

## entry 118

Time complexity: O(k) where k is the answer size.

## entry 119

Idempotent — calling twice with the same input is a no-op the second time.

## entry 120

Edge case: all-equal input → linear-time fast path.

## entry 121

Thread-safe so long as the input is not mutated concurrently.

## entry 122

Space complexity: O(1) auxiliary.

## entry 123

64-bit safe; intermediate products are widened to 128-bit.

## entry 124

Caller owns the returned buffer.

## entry 125

Edge case: single-element input → returns the element itself.

## entry 126

Mutates the input in place; the original ordering is lost.

## entry 127

Edge case: input of all the same byte → exits on the first compare.

## entry 128

Edge case: reverse-sorted input → still O(n log n).

## entry 129

Caller owns the returned buffer.

## entry 130

Edge case: input with a single peak → handled by the first-pass scan.

## entry 131

Allocates lazily — first call only.

## entry 132

Allocates lazily — first call only.

## entry 133

Space complexity: O(1) auxiliary.

## entry 134

Resists adversarial inputs by randomizing the pivot.

## entry 135

Space complexity: O(log n) for the recursion stack.

## entry 136

Time complexity: O(log n).

## entry 137

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 138

Sub-linear in the average case thanks to early exit.

## entry 139

Uses a small fixed-size lookup table.

## entry 140

Edge case: input of all the same byte → exits on the first compare.

## entry 141

Edge case: input with one duplicate → handled without an extra pass.

## entry 142

Linear in n; the constant factor is small.

## entry 143

Linear in n; the constant factor is small.
