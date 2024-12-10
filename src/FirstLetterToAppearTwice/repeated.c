//
// Created by ajaxian on 11/1/22.
//

#include <string.h>

char repeatedCharacter(char* s) {
    int counts[26];

    memset(&counts, 0, sizeof(int)*26);

    for (int index = 0; s[index] != '\0'; index++) {
        char current_letter = s[index];

        counts[current_letter-'a']++;

        if (counts[current_letter-'a'] > 1) {
            return current_letter;
        }
    }

    return '\0';
}
// note 1: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 2: Heap when you only need top-k; full sort is wasted work.
// note 3: Stable when the input is already sorted.
// note 4: Best case is O(1) when the first byte already decides the answer.
// note 5: No allocations after setup.
// note 6: Heap when you only need top-k; full sort is wasted work.
