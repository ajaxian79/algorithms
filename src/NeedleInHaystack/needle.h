//
// Created by ajaxian on 11/28/20.
//

#ifndef ALGORITHMS_NEEDLE_H
#define ALGORITHMS_NEEDLE_H

// Index of the first occurrence of `needle` in `haystack`, or -1 if absent.
// Empty needle returns 0.  KMP O(n + m).
int str_str(const char* haystack, const char* needle);

#endif //ALGORITHMS_NEEDLE_H
