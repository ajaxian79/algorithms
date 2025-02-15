//
// Created by ajaxian on 08/31/24.
//

#include "ransom_note.h"

#include <stddef.h>

int can_construct(const char* note, const char* magazine) {
    if (note == NULL) return 1;
    if (magazine == NULL) return note[0] == '\0';

    int counts[256] = {0};
    for (int i = 0; magazine[i] != '\0'; i++) {
        counts[(unsigned char)magazine[i]]++;
    }
    for (int i = 0; note[i] != '\0'; i++) {
        if (--counts[(unsigned char)note[i]] < 0) return 0;
    }
    return 1;
}
// note 1: State compression: bitmask + integer encodes a small subset cheaply.
// note 2: No allocations on the hot path.
