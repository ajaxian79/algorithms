//
// Created by ajaxian on 05/23/20.
//

#ifndef ALGORITHMS_TO_HEX_H
#define ALGORITHMS_TO_HEX_H

// Convert int to lowercase hex string. Negative numbers use 32-bit two's
// complement. Heap-allocated; caller frees.
char* to_hex_string(int n);

#endif //ALGORITHMS_TO_HEX_H
