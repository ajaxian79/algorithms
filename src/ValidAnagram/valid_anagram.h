//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_VALID_ANAGRAM_H
#define ALGORITHMS_VALID_ANAGRAM_H

// Returns 1 if t is an anagram of s (same multiset of bytes), else 0.
// Compares raw bytes, so works for any 8-bit charset.
int is_anagram(const char* s, const char* t);

#endif //ALGORITHMS_VALID_ANAGRAM_H
