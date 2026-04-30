#include <stdio.h>

#include "group_anagrams.h"

int main(void) {
    const char* a[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    const char* b[] = {""};
    const char* c[] = {"a"};

    printf("a -> %d\n", count_anagram_groups(a, 6));
    printf("b -> %d\n", count_anagram_groups(b, 1));
    printf("c -> %d\n", count_anagram_groups(c, 1));
    return 0;
}
