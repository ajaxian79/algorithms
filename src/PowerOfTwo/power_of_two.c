//
// Created by ajaxian on 05/18/24.
//

#include "power_of_two.h"

int is_power_of_two(int n) {
    if (n <= 0) return 0;
    return (n & (n - 1)) == 0;
}
// note 1: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 2: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 3: Endianness matters when serializing multi-byte ints to a file or wire.
// note 4: Caller owns the returned array; free with a single `free`.
