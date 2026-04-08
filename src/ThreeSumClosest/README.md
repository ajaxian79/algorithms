# Three Sum Closest

Same shape as ThreeSum but instead of finding sum exactly zero, return
the triplet sum that is *closest* to a given target. Sort, fix one
element, two-pointer the rest. Track the running best by absolute
distance to the target. `O(n²)` time.

Edge case: single-element input → returns the element itself.
