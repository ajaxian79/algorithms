# Flood Fill

Recolor every cell 4-connected to a starting cell that shares its
original color. Standard DFS. The `if (from == new_color) return;`
guard avoids infinite recursion when the new color is already there.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.
