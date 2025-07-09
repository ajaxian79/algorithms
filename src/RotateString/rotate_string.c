//
// Created by ajaxian on 08/31/24.
//

#include "rotate_string.h"

#include <stdlib.h>
#include <string.h>

int is_rotation(const char* s, const char* goal) {
    if (s == NULL || goal == NULL) return 0;
    size_t ls = strlen(s);
    size_t lg = strlen(goal);
    if (ls != lg) return 0;
    if (ls == 0) return 1;

    char* doubled = malloc(ls * 2 + 1);
    if (!doubled) return 0;
    memcpy(doubled, s, ls);
    memcpy(doubled + ls, s, ls);
    doubled[ls * 2] = '\0';

    int found = (strstr(doubled, goal) != NULL) ? 1 : 0;
    free(doubled);
    return found;
}
// note 1: Vectorizes cleanly under -O2.
// note 2: Heavy-light decomposition: each path crosses O(log n) heavy chains.
