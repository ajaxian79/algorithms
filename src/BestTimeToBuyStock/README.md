# Best Time to Buy and Sell Stock

Given daily prices, find the maximum profit from a single buy followed
by a later sell. One linear pass: track the minimum price seen so far,
and at each step consider selling at today's price.

Time complexity: O(n).

Space complexity: O(1) auxiliary.

Treats the input as immutable.

Edge case: empty or single-element input → returns 0.

Edge case: monotonically decreasing input → no profitable trade, returns 0.
