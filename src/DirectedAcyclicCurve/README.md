# Directed Acyclic Curve

C++20 module.

## Problem

Given two byte arrays:

- `X`: 1..10240 bytes; any byte values, no global frequency constraint.
- `Y`: any length; every byte value 0..255 must appear at least 3 times.

Find a *directed acyclic curve*, expressible as a single polynomial equation
`p(x)`, such that for every `i` in `[1, |X|]`:

- `0 <= p(i) < |Y|`
- `Y[p(i)] == X[i-1]`

"Directed" because the curve is parametrised by `i` increasing monotonically.
"Acyclic" because no two nodes of the curve share the same `i`, so the curve
never revisits a value of its parameter.

## Approach

The locator picks, for each `i`, one of the (>= 3) Y-positions whose value
equals `X[i-1]`. A per-byte cursor advances each time that byte is consumed
from `X`, spreading the curve across `Y` rather than collapsing onto the first
occurrence of each value:

```
j_i = positions[X[i-1]][(cursor[X[i-1]]++) mod positions[X[i-1]].size()]
```

The unique polynomial of degree at most `N-1` (where `N = |X|`) that
interpolates the `N` points `(1, j_1), ..., (N, j_N)` is the curve. The
`CurveEquation` exposes it in two equivalent forms:

- **Nodal form** (always exact): the `j_1..j_N` values themselves. Evaluating
  at integer `i` in `[1, N]` is `j_i`.
- **Newton's forward-difference form** (closed form, integer coefficients):

  ```
  p(x) = sum_{k=0..N-1} d_k * C(x-1, k)
  ```

  where `d_k = Delta^k p(1)` is the k-th forward difference at the first
  node. `C(m, k) = m*(m-1)*...*(m-k+1)/k!` is the falling-factorial
  binomial coefficient. For small `N` (degree < ~60) `d_k` fits in `int128`
  and the equation can be reconstructed and re-evaluated exactly. For larger
  `N` the coefficients grow factorially; storing the nodal form remains the
  canonical, exact representation of the same polynomial.

## API

- `CurveLocator::locate(X, Y)` → `CurveEquation`. Throws `std::invalid_argument`
  on oversized `X` or under-populated `Y`.
- `CurveLocator::validate_y(Y)` → `bool`. True iff `Y` has >= 3 of every byte.
- `CurveLocator::verify(curve, X, Y)` → `bool`. Confirms `Y[p(i)] == X[i-1]`
  for every `i`.
- `CurveLocator::verify_equation(curve, X, Y, max_degree=60)` → `bool`.
  Additionally reconstructs the Newton polynomial in `int128` and confirms it
  reproduces the stored nodes; skipped past `max_degree` to avoid overflow.
- `DeterministicYBuilder::build(seed, min_length=768)` →
  `std::vector<uint8_t>`. Same seed → same Y on any machine, by construction
  (hardcoded splitmix64 + hand-rolled Fisher-Yates over 256x3 base array).
- `CurveCodec::serialize(out, y_seed, y_length, curve)` /
  `CurveCodec::deserialize(in)` → `PersistedCurve`. Stores
  `(y_seed, y_length, j_1..j_N)` in a 32-byte header plus an `N*W` index
  array, where `W ∈ {1,2,4,8}` is auto-sized so every index in `[0, y_length)`
  fits without bias. Y is regenerated from `(seed, length)` on decode, so the
  file does not store Y bytes at all.

## Persisted size

`file_bytes = 32 + N * W`. With the minimum legal `|Y| = 768` (so every byte
0..255 is present 3 times) the index slot is W=2, and the persisted form is
asymptotically `2 * |X|`. See `dac_bench_persist` for a sweep.

| `|X|` | `|Y|` | `W` | persisted bytes | ratio of `|X|` |
| ----: | ----: | --: | --------------: | -------------: |
|     1 |   768 |   2 |              34 |        34.000× |
|     5 |   768 |   2 |              42 |         8.400× |
|    10 |   768 |   2 |              52 |         5.200× |
|   100 |   768 |   2 |             232 |         2.320× |
|  1024 |   768 |   2 |           2,080 |         2.031× |
|  4096 |   768 |   2 |           8,224 |         2.008× |
| 10240 |   768 |   2 |          20,512 |         2.003× |
|  1024 | 65792 |   4 |           4,128 |         4.031× |
| 10240 | 65792 |   4 |          40,992 |         4.003× |

## Build

```bash
cmake -S . -B build -G Ninja
cmake --build build --target dac_curve dac_tests dac_demo
ctest --test-dir build --output-on-failure
./build/dac_demo
```
