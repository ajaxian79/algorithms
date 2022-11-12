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