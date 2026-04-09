# rolling-hash

- Walk both pointers from each end inward; advance the smaller side.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Stable sort matters when a secondary key was set in a prior pass.
