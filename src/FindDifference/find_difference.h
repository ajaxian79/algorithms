//
// Created by ajaxian on 06/05/21.
//

#ifndef ALGORITHMS_FIND_DIFFERENCE_H
#define ALGORITHMS_FIND_DIFFERENCE_H

// `t` is `s` with one extra char inserted at a random position. Return
// that extra char. XOR every byte of both strings; the survivors are
// the duplicate ones cancelling out, leaving only the unique extra.
char find_difference(const char* s, const char* t);

#endif //ALGORITHMS_FIND_DIFFERENCE_H
