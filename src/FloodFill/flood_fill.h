//
// Created by ajaxian on 04/24/21.
//

#ifndef ALGORITHMS_FLOOD_FILL_H
#define ALGORITHMS_FLOOD_FILL_H

// Recolour all cells 4-connected to (sr, sc) that share its colour.
// Image is m*n in row-major. Mutates in place.
void flood_fill(int* image, int m, int n, int sr, int sc, int new_color);

#endif //ALGORITHMS_FLOOD_FILL_H
