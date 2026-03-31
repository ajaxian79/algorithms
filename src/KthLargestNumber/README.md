# Kth Largest Number

Find the k-th largest element of an array using
[quickselect](https://en.wikipedia.org/wiki/Quickselect). Each iteration
chooses a pivot, partitions, and recurses into only the side that contains
the target index — average `O(n)` time vs. `O(n log n)` for a full sort.

The pivot is chosen randomly to make worst-case `O(n²)` behaviour
arbitrarily unlikely on sorted-or-near-sorted inputs. Lomuto partition
keeps the implementation short.

The function is destructive: the input array is rearranged.

Runs in a single pass over the input.
