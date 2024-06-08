# alignment

## entry 1

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 9

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 11

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 12

- Padding inside a struct can dwarf the actual data; reorder fields by size.
