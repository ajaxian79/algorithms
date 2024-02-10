#include <stdio.h>
#include <string.h>

#include "reverse_string.h"

int main(void) {
    char s[] = "hello";
    reverse_string(s, (int)strlen(s));
    printf("%s\n", s);
    return 0;
}
