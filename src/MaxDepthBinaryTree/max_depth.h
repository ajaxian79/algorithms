//
// Created by ajaxian on 01/02/21.
//

#ifndef ALGORITHMS_MAX_DEPTH_H
#define ALGORITHMS_MAX_DEPTH_H

typedef struct MdTreeNode {
    int val;
    struct MdTreeNode* left;
    struct MdTreeNode* right;
} MdTreeNode;

// Maximum number of nodes on any root-to-leaf path. Empty tree has depth 0.
int max_depth(MdTreeNode* root);

#endif //ALGORITHMS_MAX_DEPTH_H
