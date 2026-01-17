# tarjan-scc

## entry 1

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
