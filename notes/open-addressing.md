# open-addressing

## entry 1

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
