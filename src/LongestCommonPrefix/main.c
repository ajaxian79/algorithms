#include <stdio.h>
#include <stdlib.h>

#include "lcp.h"

int main(void) {
    char* a[] = {"flower", "flow", "flight"};
    char* b[] = {"dog", "racecar", "car"};
    char* c[] = {"interspecies", "interstellar", "interstate"};

    char* r;
    r = longest_common_prefix(a, 3); printf("[flower,flow,flight] -> '%s'\n", r); free(r);
    r = longest_common_prefix(b, 3); printf("[dog,racecar,car] -> '%s'\n", r); free(r);
    r = longest_common_prefix(c, 3); printf("[interspecies,interstellar,interstate] -> '%s'\n", r); free(r);

    return 0;
}
