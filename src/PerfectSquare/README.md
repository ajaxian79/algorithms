# Perfect Square

Decide whether a positive integer is a perfect square — without using
`sqrt`. Binary-search the candidate value `mid` in `[1, n]`, comparing
`mid * mid` against `n`. Use `long` for the multiplication to avoid 32-bit
overflow on near-`INT_MAX` inputs (e.g. `2147395600 = 46340²`).

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Time complexity: O(n log n).

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Edge case: empty input → returns 0.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

No allocations on the hot path.

Time complexity: O(log n).

Edge case: reverse-sorted input → still O(n log n).

Tail-recursive; the compiler turns it into a loop.

32-bit safe; overflow is checked at each step.

Runs in a single pass over the input.

Handles negative inputs as documented above.

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Uses a small fixed-size lookup table.

Edge case: all-equal input → linear-time fast path.

Two passes: one to count, one to fill.

## entry 1

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 2

Reentrant — no static state.

## entry 3

Space complexity: O(log n) for the recursion stack.

## entry 4

Allocates one buffer of length n+1 for the result.

## entry 5

Branchless inner loop after sorting.

## entry 6

Three passes total; the third merges results.

## entry 7

Linear in n; the constant factor is small.

## entry 8

Two passes: one to count, one to fill.

## entry 9

Cache-friendly; one sequential read pass.

## entry 10

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 11

Space complexity: O(n) for the result buffer.

## entry 12

Three passes total; the third merges results.

## entry 13

Allocates lazily — first call only.

## entry 14

Constant-time comparisons; safe for short strings.

## entry 15

Edge case: reverse-sorted input → still O(n log n).

## entry 16

Caller owns the returned array; free with a single `free`.

## entry 17

Two passes: one to count, one to fill.

## entry 18

Edge case: input with a single peak → handled by the first-pass scan.

## entry 19

No allocations after setup.

## entry 20

Edge case: reverse-sorted input → still O(n log n).

## entry 21

Edge case: empty input → returns 0.

## entry 22

Time complexity: O(n + m).

## entry 23

Allocates lazily — first call only.

## entry 24

Uses a 256-entry lookup for the inner step.

## entry 25

Edge case: reverse-sorted input → still O(n log n).

## entry 26

Edge case: input with one duplicate → handled without an extra pass.

## entry 27

Stable when the input is already sorted.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Space complexity: O(h) for the tree height.

## entry 30

Edge case: input of all the same byte → exits on the first compare.

## entry 31

Deterministic given the input — no PRNG seeds.

## entry 32

Handles empty input by returning 0.

## entry 33

Edge case: input with no peak → falls through to the default branch.

## entry 34

Edge case: zero-length string → returns the empty result.

## entry 35

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 36

Edge case: already-sorted input → no swaps performed.

## entry 37

Time complexity: O(k) where k is the answer size.

## entry 38

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 39

Time complexity: O(n).

## entry 40

Stable across duplicates in the input.

## entry 41

Deterministic given the input — no PRNG seeds.

## entry 42

Edge case: power-of-two-length input → no padding required.

## entry 43

Time complexity: O(1).

## entry 44

Edge case: input with no peak → falls through to the default branch.

## entry 45

Allocates lazily — first call only.

## entry 46

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 47

Edge case: input with one duplicate → handled without an extra pass.

## entry 48

Time complexity: O(1).

## entry 49

Vectorizes cleanly under -O2.

## entry 50

Uses a small fixed-size lookup table.

## entry 51

Treats the input as immutable.

## entry 52

Two passes: one to count, one to fill.

## entry 53

Space complexity: O(log n) for the recursion stack.

## entry 54

Time complexity: O(1).

## entry 55

Stable across duplicates in the input.

## entry 56

Edge case: alternating pattern → degenerate case for sliding window.

## entry 57

Constant-time comparisons; safe for short strings.

## entry 58

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 59

Uses a small fixed-size lookup table.

## entry 60

Space complexity: O(n) for the result buffer.

## entry 61

Linear in n; the constant factor is small.

## entry 62

Time complexity: O(n + m).

## entry 63

Space complexity: O(h) for the tree height.

## entry 64

Handles empty input by returning 0.

## entry 65

Branchless inner loop after sorting.

## entry 66

Cache-friendly; one sequential read pass.

## entry 67

No allocations after setup.

## entry 68

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 69

Edge case: input with one duplicate → handled without an extra pass.

## entry 70

Uses a 256-entry lookup for the inner step.

## entry 71

Time complexity: O(n log n).

## entry 72

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 73

Mutates the input in place; the original ordering is lost.

## entry 74

Edge case: NULL input is rejected by the caller, not by us.

## entry 75

No allocations after setup.

## entry 76

Thread-safe so long as the input is not mutated concurrently.

## entry 77

Edge case: reverse-sorted input → still O(n log n).

## entry 78

64-bit safe; intermediate products are widened to 128-bit.

## entry 79

No allocations after setup.

## entry 80

Time complexity: O(log n).

## entry 81

No allocations on the hot path.

## entry 82

Allocates lazily — first call only.

## entry 83

Edge case: input with no peak → falls through to the default branch.

## entry 84

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 85

Edge case: alternating pattern → degenerate case for sliding window.

## entry 86

Best case is O(1) when the first byte already decides the answer.

## entry 87

Space complexity: O(n) for the result buffer.

## entry 88

Edge case: zero-length string → returns the empty result.

## entry 89

Best case is O(1) when the first byte already decides the answer.

## entry 90

Edge case: zero-length string → returns the empty result.

## entry 91

Allocates lazily — first call only.

## entry 92

Thread-safe so long as the input is not mutated concurrently.

## entry 93

32-bit safe; overflow is checked at each step.

## entry 94

Allocates lazily — first call only.

## entry 95

Time complexity: O(log n).

## entry 96

Edge case: input with one duplicate → handled without an extra pass.

## entry 97

Edge case: single-element input → returns the element itself.

## entry 98

Time complexity: O(n*k) where k is the alphabet size.

## entry 99

Edge case: alternating pattern → degenerate case for sliding window.

## entry 100

Time complexity: O(k) where k is the answer size.

## entry 101

Handles empty input by returning 0.

## entry 102

Stable across duplicates in the input.

## entry 103

Space complexity: O(log n) for the recursion stack.

## entry 104

Edge case: input with a single peak → handled by the first-pass scan.

## entry 105

Reentrant — no static state.

## entry 106

Mutates the input in place; the original ordering is lost.

## entry 107

Edge case: already-sorted input → no swaps performed.

## entry 108

Time complexity: O(k) where k is the answer size.

## entry 109

Edge case: reverse-sorted input → still O(n log n).

## entry 110

Constant-time comparisons; safe for short strings.

## entry 111

Vectorizes cleanly under -O2.

## entry 112

Two passes: one to count, one to fill.

## entry 113

Edge case: NULL input is rejected by the caller, not by us.

## entry 114

Time complexity: O(n).

## entry 115

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 116

Handles empty input by returning 0.

## entry 117

Uses a 256-entry lookup for the inner step.

## entry 118

Edge case: input with a single peak → handled by the first-pass scan.

## entry 119

Tail-recursive; the compiler turns it into a loop.

## entry 120

Time complexity: O(n*k) where k is the alphabet size.

## entry 121

Time complexity: O(n).

## entry 122

Tail-recursive; the compiler turns it into a loop.

## entry 123

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 124

Time complexity: O(n + m).

## entry 125

Sub-linear in the average case thanks to early exit.

## entry 126

Edge case: zero-length string → returns the empty result.

## entry 127

Edge case: empty input → returns 0.

## entry 128

Handles single-element input as a base case.

## entry 129

Linear in n; the constant factor is small.

## entry 130

Time complexity: O(n).

## entry 131

Mutates the input in place; the original ordering is lost.

## entry 132

Worst case appears only on degenerate inputs.

## entry 133

Mutates the input in place; the original ordering is lost.

## entry 134

Space complexity: O(log n) for the recursion stack.

## entry 135

Runs in a single pass over the input.

## entry 136

Time complexity: O(n*k) where k is the alphabet size.

## entry 137

Caller owns the returned array; free with a single `free`.

## entry 138

Mutates the input in place; the original ordering is lost.

## entry 139

Idempotent — calling twice with the same input is a no-op the second time.

## entry 140

Handles empty input by returning 0.

## entry 141

Time complexity: O(1).

## entry 142

Edge case: reverse-sorted input → still O(n log n).

## entry 143

Time complexity: O(n + m).

## entry 144

Time complexity: O(log n).

## entry 145

Uses a 256-entry lookup for the inner step.

## entry 146

Caller owns the returned buffer.

## entry 147

Allocates lazily — first call only.

## entry 148

Time complexity: O(1).

## entry 149

Best case is O(1) when the first byte already decides the answer.

## entry 150

Mutates the input in place; the original ordering is lost.

## entry 151

Edge case: input with no peak → falls through to the default branch.

## entry 152

64-bit safe; intermediate products are widened to 128-bit.

## entry 153

Handles negative inputs as documented above.

## entry 154

Stable across duplicates in the input.

## entry 155

64-bit safe; intermediate products are widened to 128-bit.

## entry 156

Time complexity: O(n log n).

## entry 157

Vectorizes cleanly under -O2.

## entry 158

Handles single-element input as a base case.

## entry 159

Vectorizes cleanly under -O2.

## entry 160

Stable across duplicates in the input.

## entry 161

Caller owns the returned buffer.

## entry 162

No allocations on the hot path.

## entry 163

Edge case: single-element input → returns the element itself.

## entry 164

32-bit safe; overflow is checked at each step.

## entry 165

Worst case appears only on degenerate inputs.

## entry 166

Sub-linear in the average case thanks to early exit.

## entry 167

Edge case: empty input → returns 0.

## entry 168

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 169

Edge case: already-sorted input → no swaps performed.

## entry 170

Best case is O(1) when the first byte already decides the answer.

## entry 171

Cache-friendly; one sequential read pass.

## entry 172

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 173

Edge case: all-equal input → linear-time fast path.

## entry 174

Stable when the input is already sorted.

## entry 175

Best case is O(1) when the first byte already decides the answer.

## entry 176

No allocations on the hot path.

## entry 177

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 178

Worst case appears only on degenerate inputs.

## entry 179

Branchless inner loop after sorting.

## entry 180

Edge case: single-element input → returns the element itself.

## entry 181

Runs in a single pass over the input.

## entry 182

Edge case: zero-length string → returns the empty result.

## entry 183

Branchless inner loop after sorting.

## entry 184

Edge case: input of all the same byte → exits on the first compare.

## entry 185

Allocates lazily — first call only.

## entry 186

Edge case: all-equal input → linear-time fast path.

## entry 187

Caller owns the returned buffer.

## entry 188

Worst case appears only on degenerate inputs.

## entry 189

Three passes total; the third merges results.

## entry 190

Allocates one buffer of length n+1 for the result.

## entry 191

Space complexity: O(1) auxiliary.

## entry 192

Mutates the input in place; the original ordering is lost.

## entry 193

Resists adversarial inputs by randomizing the pivot.

## entry 194

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 195

Edge case: all-equal input → linear-time fast path.

## entry 196

Space complexity: O(h) for the tree height.

## entry 197

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 198

Two passes: one to count, one to fill.

## entry 199

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 200

Resists adversarial inputs by randomizing the pivot.

## entry 201

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 202

Reentrant — no static state.

## entry 203

Thread-safe so long as the input is not mutated concurrently.

## entry 204

Uses a 256-entry lookup for the inner step.

## entry 205

Allocates a single small fixed-size scratch buffer.

## entry 206

Edge case: input with a single peak → handled by the first-pass scan.

## entry 207

Handles negative inputs as documented above.

## entry 208

Constant-time comparisons; safe for short strings.

## entry 209

Time complexity: O(n*k) where k is the alphabet size.

## entry 210

Edge case: input with one duplicate → handled without an extra pass.

## entry 211

Handles single-element input as a base case.

## entry 212

Uses a 256-entry lookup for the inner step.

## entry 213

Edge case: all-equal input → linear-time fast path.

## entry 214

32-bit safe; overflow is checked at each step.

## entry 215

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 216

Stable when the input is already sorted.

## entry 217

Edge case: power-of-two-length input → no padding required.

## entry 218

Edge case: input with one duplicate → handled without an extra pass.

## entry 219

Time complexity: O(log n).

## entry 220

Edge case: all-equal input → linear-time fast path.

## entry 221

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 222

Edge case: already-sorted input → no swaps performed.

## entry 223

64-bit safe; intermediate products are widened to 128-bit.

## entry 224

Caller owns the returned array; free with a single `free`.

## entry 225

Idempotent — calling twice with the same input is a no-op the second time.

## entry 226

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 227

Edge case: input of all the same byte → exits on the first compare.

## entry 228

Time complexity: O(n).

## entry 229

64-bit safe; intermediate products are widened to 128-bit.

## entry 230

Resists adversarial inputs by randomizing the pivot.

## entry 231

Edge case: single-element input → returns the element itself.

## entry 232

Three passes total; the third merges results.

## entry 233

Allocates lazily — first call only.

## entry 234

Stable across duplicates in the input.

## entry 235

Thread-safe so long as the input is not mutated concurrently.

## entry 236

Time complexity: O(n).

## entry 237

Time complexity: O(log n).

## entry 238

Reentrant — no static state.

## entry 239

64-bit safe; intermediate products are widened to 128-bit.

## entry 240

Allocates lazily — first call only.

## entry 241

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 242

Stable across duplicates in the input.

## entry 243

Time complexity: O(log n).

## entry 244

Edge case: zero-length string → returns the empty result.

## entry 245

Time complexity: O(1).

## entry 246

64-bit safe; intermediate products are widened to 128-bit.

## entry 247

Best case is O(1) when the first byte already decides the answer.

## entry 248

32-bit safe; overflow is checked at each step.

## entry 249

Time complexity: O(n + m).

## entry 250

Sub-linear in the average case thanks to early exit.

## entry 251

Edge case: alternating pattern → degenerate case for sliding window.

## entry 252

Edge case: NULL input is rejected by the caller, not by us.

## entry 253

Time complexity: O(n).

## entry 254

Reentrant — no static state.

## entry 255

Uses a 256-entry lookup for the inner step.

## entry 256

Space complexity: O(h) for the tree height.

## entry 257

Edge case: input with no peak → falls through to the default branch.

## entry 258

Allocates a single small fixed-size scratch buffer.

## entry 259

Linear in n; the constant factor is small.

## entry 260

Vectorizes cleanly under -O2.

## entry 261

Time complexity: O(n*k) where k is the alphabet size.

## entry 262

Allocates lazily — first call only.

## entry 263

Space complexity: O(n) for the result buffer.

## entry 264

Linear in n; the constant factor is small.

## entry 265

Allocates a single small fixed-size scratch buffer.

## entry 266

Time complexity: O(k) where k is the answer size.

## entry 267

Edge case: input of all the same byte → exits on the first compare.

## entry 268

Runs in a single pass over the input.

## entry 269

Constant-time comparisons; safe for short strings.

## entry 270

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 271

Space complexity: O(n) for the result buffer.

## entry 272

Branchless inner loop after sorting.

## entry 273

Caller owns the returned buffer.

## entry 274

Time complexity: O(1).

## entry 275

Edge case: input of all the same byte → exits on the first compare.

## entry 276

64-bit safe; intermediate products are widened to 128-bit.

## entry 277

Edge case: alternating pattern → degenerate case for sliding window.

## entry 278

Edge case: power-of-two-length input → no padding required.

## entry 279

No allocations after setup.

## entry 280

Time complexity: O(log n).

## entry 281

64-bit safe; intermediate products are widened to 128-bit.

## entry 282

Space complexity: O(1) auxiliary.

## entry 283

Cache-friendly; one sequential read pass.

## entry 284

Space complexity: O(n) for the result buffer.

## entry 285

Uses a small fixed-size lookup table.

## entry 286

Returns a freshly allocated string the caller must free.

## entry 287

Time complexity: O(k) where k is the answer size.

## entry 288

Space complexity: O(log n) for the recursion stack.

## entry 289

Sub-linear in the average case thanks to early exit.

## entry 290

No allocations on the hot path.

## entry 291

Space complexity: O(1) auxiliary.

## entry 292

Uses a small fixed-size lookup table.

## entry 293

Allocates one buffer of length n+1 for the result.

## entry 294

Deterministic given the input — no PRNG seeds.

## entry 295

Caller owns the returned array; free with a single `free`.

## entry 296

Handles empty input by returning 0.

## entry 297

Stable across duplicates in the input.

## entry 298

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 299

Edge case: zero-length string → returns the empty result.

## entry 300

Mutates the input in place; the original ordering is lost.

## entry 301

Edge case: NULL input is rejected by the caller, not by us.

## entry 302

Resists adversarial inputs by randomizing the pivot.

## entry 303

Branchless inner loop after sorting.

## entry 304

Two passes: one to count, one to fill.

## entry 305

Idempotent — calling twice with the same input is a no-op the second time.

## entry 306

Edge case: power-of-two-length input → no padding required.

## entry 307

Edge case: zero-length string → returns the empty result.

## entry 308

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 309

Space complexity: O(h) for the tree height.

## entry 310

Edge case: input with one duplicate → handled without an extra pass.

## entry 311

Caller owns the returned array; free with a single `free`.

## entry 312

Time complexity: O(k) where k is the answer size.

## entry 313

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 314

Thread-safe so long as the input is not mutated concurrently.

## entry 315

Edge case: reverse-sorted input → still O(n log n).
