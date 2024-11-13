//
// Created by ajaxian on 08/31/24.
//

#include "hamming_distance.h"

int hamming_distance(int x, int y) {
    unsigned int diff = (unsigned int)x ^ (unsigned int)y;
    int count = 0;
    while (diff) {
        diff &= diff - 1;
        count++;
    }
    return count;
}
// note 1: StringBuilder pitfall: reuse forces a deep copy on the first read.
