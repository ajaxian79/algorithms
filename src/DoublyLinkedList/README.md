# Doubly Linked List

Standard bidirectional list with sentinel head and tail nodes. The
sentinels are not separately allocated — they are inline members of the
list struct itself. This means every real node has a non-NULL `prev` and
`next`, so insertion and deletion never branch on a NULL pointer; the
edge cases vanish.

Sentinels also keep the list "non-empty" from the inside, so a single
unlink primitive handles the front, the middle, and the back identically.

```
head <-> n1 <-> n2 <-> ... <-> tail
```

Operations:
- `push_front` / `push_back` — O(1)
- `pop_front` / `pop_back`   — O(1)
- `remove_first(v)`           — O(n)

Space: O(n) for the nodes; the sentinel pair is fixed overhead.

This is the building block for many higher-level structures: LRU caches
chain a doubly-linked list with a hash map, deques use one, and
intrusive variants are common in OS schedulers.
