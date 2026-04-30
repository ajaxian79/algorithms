//
// Created by ajaxian on 11/04/24.
//

#ifndef ALGORITHMS_LONGEST_NO_REPEAT_H
#define ALGORITHMS_LONGEST_NO_REPEAT_H

// Length of the longest substring of `s` containing no repeated byte.
// Sliding window keyed on the last-seen index per byte (256-entry table).
int length_of_longest_substring(const char* s);

#endif //ALGORITHMS_LONGEST_NO_REPEAT_H
