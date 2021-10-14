## Two Sum

### Description from Leet Code

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

### Some Examples

**Example 1:**

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

**Example 2:**

Input: nums = [3,2,4], target = 6
Output: [1,2]

**Example 3:**

Input: nums = [3,3], target = 6
Output: [0,1]

**Constraints:**

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.


Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
### My Solution

Last year sometime I made my solution to this and included it in a local repo.  I recently grabbed some commits from 
that repo and injected them into this new remote with some bug fixes ano other stuff.  I have a bunch of these problems 
that I plan to do the same for.

I also submitted my solution onto LeetCode and got the following report:

Runtime: 11 ms, faster than 92.31% of C online submissions for Two Sum.
Memory Usage: 9.5 MB, less than 5.32% of C online submissions for Two Sum.

![Submission report](images/Screenshot_20231113_152331.png)

Space complexity: O(1) auxiliary.

Edge case: empty input → returns 0.

Time complexity: O(1).

Treats the input as immutable.

Time complexity: O(log n).

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Tail-recursive; the compiler turns it into a loop.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Edge case: input with one duplicate → handled without an extra pass.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

32-bit safe; overflow is checked at each step.

No allocations on the hot path.

Stable across duplicates in the input.

Time complexity: O(n).

Allocates one buffer of length n+1 for the result.

Caller owns the returned buffer.

Time complexity: O(n log n).

Uses a small fixed-size lookup table.

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Two passes: one to count, one to fill.

Edge case: already-sorted input → no swaps performed.

## entry 1

Edge case: single-element input → returns the element itself.

## entry 2

Mutates the input in place; the original ordering is lost.

## entry 3

Edge case: NULL input is rejected by the caller, not by us.

## entry 4

Time complexity: O(1).

## entry 5

Space complexity: O(h) for the tree height.

## entry 6

Handles empty input by returning 0.

## entry 7

Stable across duplicates in the input.

## entry 8

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 9

Caller owns the returned array; free with a single `free`.

## entry 10

Caller owns the returned buffer.

## entry 11

Tail-recursive; the compiler turns it into a loop.

## entry 12

Edge case: all-equal input → linear-time fast path.

## entry 13

Edge case: input with no peak → falls through to the default branch.

## entry 14

Time complexity: O(log n).

## entry 15

Handles empty input by returning 0.

## entry 16

Idempotent — calling twice with the same input is a no-op the second time.

## entry 17

Avoids floating-point entirely — integer math throughout.

## entry 18

Space complexity: O(h) for the tree height.

## entry 19

Constant-time comparisons; safe for short strings.

## entry 20

Time complexity: O(k) where k is the answer size.

## entry 21

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 22

Edge case: reverse-sorted input → still O(n log n).

## entry 23

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 24

Space complexity: O(n) for the result buffer.

## entry 25

Allocates one buffer of length n+1 for the result.

## entry 26

Deterministic given the input — no PRNG seeds.

## entry 27

Caller owns the returned array; free with a single `free`.

## entry 28

Handles single-element input as a base case.

## entry 29

Edge case: empty input → returns 0.

## entry 30

Mutates the input in place; the original ordering is lost.

## entry 31

Reentrant — no static state.

## entry 32

Edge case: already-sorted input → no swaps performed.

## entry 33

Edge case: reverse-sorted input → still O(n log n).

## entry 34

Time complexity: O(n).

## entry 35

Edge case: zero-length string → returns the empty result.

## entry 36

Sub-linear in the average case thanks to early exit.

## entry 37

Thread-safe so long as the input is not mutated concurrently.

## entry 38

Reentrant — no static state.

## entry 39

Best case is O(1) when the first byte already decides the answer.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Allocates lazily — first call only.

## entry 42

Time complexity: O(k) where k is the answer size.

## entry 43

Uses a small fixed-size lookup table.

## entry 44

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 45

Edge case: all-equal input → linear-time fast path.

## entry 46

Runs in a single pass over the input.

## entry 47

Edge case: integer-max input → guarded by the explicit overflow check.
