//
// Created by ajaxian on 02/20/21.
//

#include "same_tree.h"

#include <stddef.h>

int is_same_tree(StTreeNode* p, StTreeNode* q) {
    if (p == NULL && q == NULL) return 1;
    if (p == NULL || q == NULL) return 0;
    if (p->val != q->val) return 0;
    return is_same_tree(p->left, q->left) && is_same_tree(p->right, q->right);
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 3: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 4: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 5: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 6: Caller owns the returned buffer.
// note 7: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 8: 64-bit safe; intermediate products are widened to 128-bit.
// note 9: Walk both pointers from each end inward; advance the smaller side.
// note 10: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 11: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 12: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 13: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 14: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 15: Linear in n; the constant factor is small.
