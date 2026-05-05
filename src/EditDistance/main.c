#include <stdio.h>

#include "edit_distance.h"

int main(void) {
    printf("%-10s %-10s -> %d\n", "kitten", "sitting", edit_distance("kitten", "sitting"));
    printf("%-10s %-10s -> %d\n", "sunday", "saturday", edit_distance("sunday", "saturday"));
    printf("%-10s %-10s -> %d\n", "abc", "abc",       edit_distance("abc", "abc"));
    printf("%-10s %-10s -> %d\n", "abc", "",          edit_distance("abc", ""));
    printf("%-10s %-10s -> %d\n", "", "xyz",          edit_distance("", "xyz"));
    return 0;
}
