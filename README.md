# Algorithms
My personal playground of algorithms written in C just because I wanted something to play around with when I am bored.

## Links

* [Two Sum](src/TwoSum) originally done in November 2022, added to and cleaned up Novembber 2023
* [Missing Number](src/MissingNumber) — find the missing one in `[0, n]` via gauss sum
* [Number Complement](src/NumberComplement) — flip only the meaningful bits
* [Binary Gap](src/BinaryGap) — longest 0-run between 1-bits
* [To Hex String](src/ToHexString) — int → lowercase hex (two's complement for negatives)
* [Add Digits](src/AddDigits) — closed-form digital root
* [Count Trailing Zeros](src/CountTrailingZeros) — factors of 5 in n!
* [Perfect Square](src/PerfectSquare) — binary search without `sqrt`
* [Convert to Base 7](src/ConvertToBase7) — repeated-division base conversion
* [Pascal's Triangle Row](src/PascalsTriangleRow) — kth row in O(k) space
* [Pascal's Triangle (N rows)](src/PascalsTriangleN) — full triangle as ragged array
* [Generate Parentheses](src/GenerateParens) — recursive Catalan enumeration
* [Valid Sudoku](src/ValidSudoku) — row/column/box duplicate sweep
* [Matrix Diagonal Sum](src/MatrixDiagonalSum) — both diagonals with center-cell fix
* [Spiral Matrix](src/SpiralMatrix) — clockwise traversal with shrinking edges
* [Rotate Image](src/RotateImage) — transpose then reverse rows
* [Kth Largest](src/KthLargestNumber) — quickselect with randomized pivot
* [Merge Intervals](src/MergeIntervals) — sort by start, sweep, extend
* [Non-Overlapping Intervals](src/NonOverlappingIntervals) — greedy by end
* [Meeting Rooms](src/MeetingRooms) — sort by start, check pairwise
* [Meeting Rooms II](src/MeetingRoomsII) — peak room count via two-pointer sweep
* [Jump Game](src/JumpGame) — greedy farthest-reach
* [Jump Game II](src/JumpGameII) — minimum jumps via BFS levels
* [Max Subarray](src/MaxSubarray) — Kadane's algorithm
* [Product Except Self](src/ProductExceptSelf) — prefix and suffix products
* [Rotate Array](src/RotateArray) — triple-reverse in place
* [Container With Most Water](src/ContainerWithMostWater) — two-pointer area maximizer
* [Trapping Rain Water](src/TrappingRainWater) — two-pointer rain accumulator
* [Three Sum](src/ThreeSum) — sorted + two-pointer triplets
* [Three Sum Closest](src/ThreeSumClosest) — closest-to-target triplet sum
* [Four Sum](src/FourSum) — sorted + nested two-pointer quadruplets
* [Needle in Haystack](src/NeedleInHaystack) — KMP substring search
* [Search Insert Position](src/SearchInsertPosition) — lower-bound binary search
* [Sqrt Int](src/SqrtInt) — integer floor-sqrt by binary search
* [Symmetric Tree](src/SymmetricTree) — recursive mirror check
* [Max Depth Binary Tree](src/MaxDepthBinaryTree) — post-order depth recursion
* [Min Depth Binary Tree](src/MinDepthBinaryTree) — leaf-only shortest path
* [Invert Binary Tree](src/InvertBinaryTree) — recursive child swap
* [Binary Tree Preorder](src/BinaryTreePreorder) — iterative preorder via stack
* [Binary Tree Inorder](src/BinaryTreeInorder) — iterative inorder via stack
* [Binary Tree Postorder](src/BinaryTreePostorder) — reverse-preorder + reverse
* [Path Sum](src/PathSum) — root-to-leaf sum recursion
* [Same Tree](src/SameTree) — pairwise recursive equality
* [Valid BST](src/ValidBST) — bounded-interval BST check
* [Remove Duplicates Sorted](src/RemoveDuplicatesSorted) — read/write pointer compaction
* [Remove Element](src/RemoveElement) — strip a value in place
* [Sum of Bit Differences](src/SumOfBitDifferences) — column-counted hamming totals
* [Min Stack](src/MinStack) — stack with O(1) min via frame-tagged minima
* [Queue From Stacks](src/ImplementQueueWithStacks) — amortized O(1) FIFO from two LIFOs
* [Stack From Queue](src/ImplementStackWithQueues) — single ring-buffer LIFO via rotation
* [Number of Islands](src/NumIslands) — DFS flood fill on a grid
* [Flood Fill](src/FloodFill) — recursive recolor with same-color guard
* [Word Search](src/WordSearch) — backtracking DFS with sentinel marking
* [Combination Sum](src/CombinationSum) — sorted backtracking with reuse
* [Subsets](src/Subsets) — bitmask enumeration of 2^n subsets
* [Permutations](src/Permutations) — swap-based backtracking enumeration
* [LRU Cache](src/LRUCache) — doubly-linked list + open-chained hash table
* [Find the Difference](src/FindDifference) — XOR over both strings
* [Is Palindrome (Ignore Case)](src/IsPalindromeIgnoreCase) — case-folded two-pointer
* [Perfect Number](src/PerfectNumber) — sum of proper divisors via sqrt sweep

Tests use the vendored munit framework.

New problems get a per-directory README with a brief approach note.

Built with cmake and clang on macOS; gcc on Linux.

Run `./build/unittests` after `cmake --build build` to exercise the suites.

Each problem links mimalloc and lives in its own subdirectory.

Helper headers live alongside the problem that uses them — no shared utilities.

Space complexity: O(1) auxiliary.

Space complexity: O(h) for the tree height.

No allocations on the hot path.

Deterministic given the input — no PRNG seeds.

Thread-safe so long as the input is not mutated concurrently.

macOS users may need `brew install mimalloc` if cmake can't find the package.

Branchless inner loop after sorting.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

Allocates a single small fixed-size scratch buffer.

No allocations after setup.

Stable across duplicates in the input.

Time complexity: O(n^2) worst case, O(n) amortized.

Space complexity: O(log n) for the recursion stack.

Caller owns the returned array; free with a single `free`.

Treats the input as immutable.

Allocates lazily — first call only.

Uses a small fixed-size lookup table.

Vectorizes cleanly under -O2.

On Linux, mimalloc is typically available via the distribution package manager.

Allocates one buffer of length n+1 for the result.

Avoids floating-point entirely — integer math throughout.

Linear in n; the constant factor is small.

Constant-time comparisons; safe for short strings.

Time complexity: O(k) where k is the answer size.

Time complexity: O(n log n).

Best case is O(1) when the first byte already decides the answer.

32-bit safe; overflow is checked at each step.

Debug build is the default; pass `-DCMAKE_BUILD_TYPE=Release` for the optimized run.

Stable when the input is already sorted.

Cache-friendly; one sequential read pass.

Runs in a single pass over the input.

Sub-linear in the average case thanks to early exit.

Idempotent — calling twice with the same input is a no-op the second time.

Mutates the input in place; the original ordering is lost.

Handles negative inputs as documented above.

Time complexity: O(n*k) where k is the alphabet size.

Resists adversarial inputs by randomizing the pivot.

Configure once with `cmake -S . -B build` and reuse the build directory thereafter.

The `unittests` target is the aggregate; per-problem executables exist for ad-hoc runs.

Time complexity: O(log n).

Two passes: one to count, one to fill.

Time complexity: O(1).

Handles single-element input as a base case.

Uses a 256-entry lookup for the inner step.

All sources are C17; no C++ in this tree.

Worst case appears only on degenerate inputs.

Tail-recursive; the compiler turns it into a loop.

Reentrant — no static state.

Caller owns the returned buffer.

64-bit safe; intermediate products are widened to 128-bit.

Space complexity: O(n) for the result buffer.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Three passes total; the third merges results.

Time complexity: O(n + m).
