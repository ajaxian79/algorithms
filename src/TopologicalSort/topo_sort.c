//
// Created by ajaxian on 05/02/26.
//

#include <stdlib.h>
#include <string.h>

#include "topo_sort.h"

int topo_sort(int n, const int* edges, int m, int* out) {
    if (n <= 0 || !out) return 0;
    if (m < 0) m = 0;
    if (m > 0 && !edges) return 0;

    int* indeg = (int*)calloc((size_t)n, sizeof(int));
    int* head = (int*)malloc(sizeof(int) * (size_t)n);
    int* nxt = m > 0 ? (int*)malloc(sizeof(int) * (size_t)m) : NULL;
    int* to = m > 0 ? (int*)malloc(sizeof(int) * (size_t)m) : NULL;
    int* queue = (int*)malloc(sizeof(int) * (size_t)n);
    if (!indeg || !head || (m > 0 && (!nxt || !to)) || !queue) {
        free(indeg); free(head); free(nxt); free(to); free(queue);
        return 0;
    }

    for (int i = 0; i < n; i++) head[i] = -1;
    for (int e = 0; e < m; e++) {
        int u = edges[2 * e], v = edges[2 * e + 1];
        if (u < 0 || u >= n || v < 0 || v >= n) continue;
        to[e] = v;
        nxt[e] = head[u];
        head[u] = e;
        indeg[v]++;
    }

    int qh = 0, qt = 0;
    for (int i = 0; i < n; i++) {
        if (indeg[i] == 0) queue[qt++] = i;
    }

    int written = 0;
    while (qh < qt) {
        int u = queue[qh++];
        out[written++] = u;
        for (int e = head[u]; e != -1; e = nxt[e]) {
            int v = to[e];
            if (--indeg[v] == 0) queue[qt++] = v;
        }
    }

    free(indeg); free(head); free(nxt); free(to); free(queue);
    return written;
}
