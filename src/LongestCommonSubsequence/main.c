#include <stdio.h>

#include "lcs.h"

int main(void) {
    printf("%-10s %-10s -> %d\n", "abcde", "ace",      lcs_length("abcde", "ace"));
    printf("%-10s %-10s -> %d\n", "abc",   "abc",      lcs_length("abc", "abc"));
    printf("%-10s %-10s -> %d\n", "abc",   "def",      lcs_length("abc", "def"));
    printf("%-10s %-10s -> %d\n", "AGCAT", "GAC",      lcs_length("AGCAT", "GAC"));
    printf("%-10s %-10s -> %d\n", "",      "abc",      lcs_length("", "abc"));
    return 0;
}
