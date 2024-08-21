# splay

## entry 1

- Heap when you only need top-k; full sort is wasted work.

## entry 2

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6

- LIS via patience: each pile holds the smallest tail of length k.

## entry 7

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
