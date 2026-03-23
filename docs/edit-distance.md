# edit-distance

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Manacher expands around each center, reusing prior radii via mirror reflection.
