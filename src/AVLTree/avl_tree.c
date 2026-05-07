//
// Created by ajaxian on 05/06/26.
//

#include <stdlib.h>

#include "avl_tree.h"

static int h(const AVLNode* n) { return n ? n->height : 0; }

static int max_int(int a, int b) { return a > b ? a : b; }

static void update_h(AVLNode* n) {
    if (n) n->height = 1 + max_int(h(n->left), h(n->right));
}

static int balance(const AVLNode* n) {
    return n ? h(n->left) - h(n->right) : 0;
}

static AVLNode* rot_right(AVLNode* y) {
    AVLNode* x = y->left;
    AVLNode* t = x->right;
    x->right = y;
    y->left = t;
    update_h(y);
    update_h(x);
    return x;
}

static AVLNode* rot_left(AVLNode* x) {
    AVLNode* y = x->right;
    AVLNode* t = y->left;
    y->left = x;
    x->right = t;
    update_h(x);
    update_h(y);
    return y;
}

AVLNode* avl_insert(AVLNode* root, int key) {
    if (!root) {
        AVLNode* n = (AVLNode*)malloc(sizeof(AVLNode));
        if (!n) return NULL;
        n->key = key;
        n->height = 1;
        n->left = NULL;
        n->right = NULL;
        return n;
    }

    if (key < root->key) {
        AVLNode* nl = avl_insert(root->left, key);
        if (!nl) return root;
        root->left = nl;
    } else if (key > root->key) {
        AVLNode* nr = avl_insert(root->right, key);
        if (!nr) return root;
        root->right = nr;
    } else {
        return root; // duplicate, no-op
    }

    update_h(root);
    int b = balance(root);

    // LL
    if (b > 1 && key < root->left->key) return rot_right(root);
    // LR
    if (b > 1 && key > root->left->key) {
        root->left = rot_left(root->left);
        return rot_right(root);
    }
    // RR
    if (b < -1 && key > root->right->key) return rot_left(root);
    // RL
    if (b < -1 && key < root->right->key) {
        root->right = rot_right(root->right);
        return rot_left(root);
    }

    return root;
}

int avl_contains(const AVLNode* root, int key) {
    while (root) {
        if (key == root->key) return 1;
        root = key < root->key ? root->left : root->right;
    }
    return 0;
}

void avl_free(AVLNode* root) {
    if (!root) return;
    avl_free(root->left);
    avl_free(root->right);
    free(root);
}

int avl_height(const AVLNode* root) { return h(root); }

static int inorder_walk(const AVLNode* n, int* out, int cap, int written) {
    if (!n || written >= cap) return written;
    written = inorder_walk(n->left, out, cap, written);
    if (written < cap) out[written++] = n->key;
    written = inorder_walk(n->right, out, cap, written);
    return written;
}

int avl_inorder(const AVLNode* root, int* out, int cap) {
    if (!out || cap <= 0) return 0;
    return inorder_walk(root, out, cap, 0);
}
