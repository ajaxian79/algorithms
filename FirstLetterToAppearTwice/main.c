#include <stdio.h>

#include "repeated.h"
#include <stdio.h>

int main() {
    char string[] = {"abccbaacz"};
    printf("\"%s\"\n\nFound \'%c\'\n", string, repeatedCharacter(string));

    return 0;
}
