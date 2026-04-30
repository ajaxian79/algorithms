//
// Created by ajaxian on 04/12/25.
//

#ifndef ALGORITHMS_GROUP_ANAGRAMS_H
#define ALGORITHMS_GROUP_ANAGRAMS_H

// Number of distinct anagram classes among `strs[0..n)`. Two strings
// belong to the same class iff one is a permutation of the other. Pure
// counting return — caller doesn't get the partitioning back.
int count_anagram_groups(const char** strs, int n);

#endif //ALGORITHMS_GROUP_ANAGRAMS_H
