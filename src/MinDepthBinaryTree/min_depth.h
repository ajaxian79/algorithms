//
// Created by ajaxian on 01/09/21.
//

#ifndef ALGORITHMS_MIN_DEPTH_H
#define ALGORITHMS_MIN_DEPTH_H

typedef struct MnTreeNode {
    int val;
    struct MnTreeNode* left;
    struct MnTreeNode* right;
} MnTreeNode;

// Shortest root-to-leaf path length. A node with one child has min depth
// derived from that child only — the missing child is not a "leaf path".
int min_depth(MnTreeNode* root);

#endif //ALGORITHMS_MIN_DEPTH_H
