//
// Created by ajaxian on 05/01/21.
//

#ifndef ALGORITHMS_WORD_SEARCH_H
#define ALGORITHMS_WORD_SEARCH_H

// Returns 1 if `word` can be spelled by walking 4-connected adjacent cells
// of `board` (m*n, row-major) without revisiting cells. The board is
// mutated during the search (and restored on backtrack).
int word_search(char* board, int m, int n, const char* word);

#endif //ALGORITHMS_WORD_SEARCH_H
