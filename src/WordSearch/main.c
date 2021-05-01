#include <stdio.h>

#include "word_search.h"

int main(void) {
    char board[3 * 4] = {
        'A','B','C','E',
        'S','F','C','S',
        'A','D','E','E',
    };
    printf("%d\n", word_search(board, 3, 4, "ABCCED"));
    printf("%d\n", word_search(board, 3, 4, "SEE"));
    printf("%d\n", word_search(board, 3, 4, "ABCB"));
    return 0;
}
