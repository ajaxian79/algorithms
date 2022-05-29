# Subsets

The cleanest way to enumerate every subset of `n` distinct elements is to
let each integer in `[0, 2^n)` act as a bitmask: bit `b` is set iff
element `b` is in the subset. The two passes per mask (count, then
collect) trade simplicity for an extra `O(n)` per subset; total is
`O(2^n * n)`.

Space complexity: O(n) for the result buffer.

Time complexity: O(log n).

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: reverse-sorted input → still O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Returns a freshly allocated string the caller must free.

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Stable across duplicates in the input.

## entry 1

Constant-time comparisons; safe for short strings.

## entry 2

Caller owns the returned array; free with a single `free`.

## entry 3

Edge case: reverse-sorted input → still O(n log n).

## entry 4

Best case is O(1) when the first byte already decides the answer.

## entry 5

Allocates one buffer of length n+1 for the result.

## entry 6

Edge case: input with no peak → falls through to the default branch.

## entry 7

Linear in n; the constant factor is small.

## entry 8

Handles empty input by returning 0.

## entry 9

Reentrant — no static state.

## entry 10

Handles single-element input as a base case.

## entry 11

Tail-recursive; the compiler turns it into a loop.

## entry 12

Handles negative inputs as documented above.

## entry 13

Two passes: one to count, one to fill.

## entry 14

Best case is O(1) when the first byte already decides the answer.

## entry 15

Edge case: input of all the same byte → exits on the first compare.

## entry 16

Edge case: input of all the same byte → exits on the first compare.

## entry 17

Time complexity: O(n log n).

## entry 18

Three passes total; the third merges results.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Branchless inner loop after sorting.

## entry 21

64-bit safe; intermediate products are widened to 128-bit.

## entry 22

Time complexity: O(log n).

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Treats the input as immutable.

## entry 25

Handles empty input by returning 0.

## entry 26

32-bit safe; overflow is checked at each step.

## entry 27

Handles negative inputs as documented above.

## entry 28

Resists adversarial inputs by randomizing the pivot.

## entry 29

Time complexity: O(n log n).

## entry 30

Avoids floating-point entirely — integer math throughout.

## entry 31

Edge case: zero-length string → returns the empty result.

## entry 32

Edge case: zero-length string → returns the empty result.

## entry 33

Caller owns the returned array; free with a single `free`.

## entry 34

Mutates the input in place; the original ordering is lost.

## entry 35

Time complexity: O(n*k) where k is the alphabet size.

## entry 36

Edge case: NULL input is rejected by the caller, not by us.

## entry 37

Edge case: empty input → returns 0.

## entry 38

Constant-time comparisons; safe for short strings.

## entry 39

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 40

Edge case: single-element input → returns the element itself.

## entry 41

Stable when the input is already sorted.

## entry 42

Vectorizes cleanly under -O2.

## entry 43

Vectorizes cleanly under -O2.

## entry 44

Time complexity: O(n log n).

## entry 45

Time complexity: O(1).

## entry 46

Best case is O(1) when the first byte already decides the answer.

## entry 47

Tail-recursive; the compiler turns it into a loop.

## entry 48

Sub-linear in the average case thanks to early exit.

## entry 49

Reentrant — no static state.

## entry 50

Caller owns the returned array; free with a single `free`.

## entry 51

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 52

Edge case: alternating pattern → degenerate case for sliding window.

## entry 53

Handles single-element input as a base case.

## entry 54

Edge case: input with one duplicate → handled without an extra pass.

## entry 55

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 56

Three passes total; the third merges results.

## entry 57

Allocates lazily — first call only.

## entry 58

Time complexity: O(n + m).

## entry 59

Time complexity: O(1).

## entry 60

No allocations on the hot path.

## entry 61

Caller owns the returned buffer.

## entry 62

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 63

Handles single-element input as a base case.

## entry 64

No allocations after setup.

## entry 65

Returns a freshly allocated string the caller must free.

## entry 66

Edge case: zero-length string → returns the empty result.

## entry 67

Uses a small fixed-size lookup table.

## entry 68

Caller owns the returned buffer.

## entry 69

Time complexity: O(n + m).

## entry 70

Best case is O(1) when the first byte already decides the answer.

## entry 71

Allocates one buffer of length n+1 for the result.

## entry 72

Space complexity: O(1) auxiliary.

## entry 73

Linear in n; the constant factor is small.

## entry 74

64-bit safe; intermediate products are widened to 128-bit.

## entry 75

Constant-time comparisons; safe for short strings.

## entry 76

Cache-friendly; one sequential read pass.

## entry 77

Worst case appears only on degenerate inputs.

## entry 78

Linear in n; the constant factor is small.

## entry 79

Time complexity: O(log n).

## entry 80

Sub-linear in the average case thanks to early exit.

## entry 81

Returns a freshly allocated string the caller must free.

## entry 82

Edge case: input with one duplicate → handled without an extra pass.

## entry 83

Space complexity: O(log n) for the recursion stack.

## entry 84

Time complexity: O(n*k) where k is the alphabet size.

## entry 85

Stable across duplicates in the input.

## entry 86

Space complexity: O(n) for the result buffer.

## entry 87

Edge case: all-equal input → linear-time fast path.

## entry 88

Time complexity: O(k) where k is the answer size.

## entry 89

Handles single-element input as a base case.

## entry 90

Allocates a single small fixed-size scratch buffer.

## entry 91

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 92

Edge case: alternating pattern → degenerate case for sliding window.

## entry 93

Idempotent — calling twice with the same input is a no-op the second time.

## entry 94

Edge case: input with a single peak → handled by the first-pass scan.

## entry 95

Edge case: input with one duplicate → handled without an extra pass.

## entry 96

Space complexity: O(h) for the tree height.

## entry 97

32-bit safe; overflow is checked at each step.

## entry 98

Space complexity: O(1) auxiliary.

## entry 99

Space complexity: O(log n) for the recursion stack.

## entry 100

Two passes: one to count, one to fill.

## entry 101

32-bit safe; overflow is checked at each step.

## entry 102

Stable when the input is already sorted.

## entry 103

Worst case appears only on degenerate inputs.

## entry 104

Time complexity: O(n log n).

## entry 105

Space complexity: O(log n) for the recursion stack.

## entry 106

Space complexity: O(1) auxiliary.

## entry 107

Constant-time comparisons; safe for short strings.

## entry 108

Tail-recursive; the compiler turns it into a loop.

## entry 109

Edge case: all-equal input → linear-time fast path.

## entry 110

Time complexity: O(n log n).

## entry 111

Edge case: already-sorted input → no swaps performed.

## entry 112

Tail-recursive; the compiler turns it into a loop.

## entry 113

Caller owns the returned buffer.

## entry 114

Time complexity: O(1).

## entry 115

Edge case: single-element input → returns the element itself.

## entry 116

Avoids floating-point entirely — integer math throughout.

## entry 117

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 118

Allocates lazily — first call only.

## entry 119

Runs in a single pass over the input.

## entry 120

Vectorizes cleanly under -O2.

## entry 121

Edge case: all-equal input → linear-time fast path.

## entry 122

Runs in a single pass over the input.

## entry 123

Edge case: input with no peak → falls through to the default branch.

## entry 124

Time complexity: O(n log n).

## entry 125

Branchless inner loop after sorting.

## entry 126

Time complexity: O(n log n).

## entry 127

Handles empty input by returning 0.

## entry 128

No allocations on the hot path.

## entry 129

Space complexity: O(n) for the result buffer.

## entry 130

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 131

Edge case: already-sorted input → no swaps performed.

## entry 132

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 133

Stable when the input is already sorted.

## entry 134

Handles single-element input as a base case.

## entry 135

Handles single-element input as a base case.

## entry 136

Edge case: reverse-sorted input → still O(n log n).

## entry 137

No allocations after setup.

## entry 138

Deterministic given the input — no PRNG seeds.

## entry 139

Edge case: input with no peak → falls through to the default branch.

## entry 140

Best case is O(1) when the first byte already decides the answer.

## entry 141

Cache-friendly; one sequential read pass.

## entry 142

Avoids floating-point entirely — integer math throughout.

## entry 143

Edge case: input of all the same byte → exits on the first compare.

## entry 144

Returns a freshly allocated string the caller must free.

## entry 145

Reentrant — no static state.

## entry 146

Three passes total; the third merges results.

## entry 147

Time complexity: O(n).

## entry 148

Stable when the input is already sorted.

## entry 149

No allocations after setup.

## entry 150

Edge case: power-of-two-length input → no padding required.

## entry 151

Branchless inner loop after sorting.

## entry 152

Edge case: all-equal input → linear-time fast path.

## entry 153

Thread-safe so long as the input is not mutated concurrently.

## entry 154

Space complexity: O(n) for the result buffer.

## entry 155

Runs in a single pass over the input.

## entry 156

64-bit safe; intermediate products are widened to 128-bit.

## entry 157

No allocations on the hot path.

## entry 158

Edge case: input of all the same byte → exits on the first compare.

## entry 159

Linear in n; the constant factor is small.

## entry 160

Tail-recursive; the compiler turns it into a loop.

## entry 161

Time complexity: O(n log n).

## entry 162

Edge case: input with one duplicate → handled without an extra pass.

## entry 163

Resists adversarial inputs by randomizing the pivot.

## entry 164

Caller owns the returned buffer.

## entry 165

No allocations on the hot path.

## entry 166

Deterministic given the input — no PRNG seeds.

## entry 167

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 168

Time complexity: O(1).

## entry 169

Handles empty input by returning 0.

## entry 170

Caller owns the returned buffer.

## entry 171

Handles single-element input as a base case.

## entry 172

Time complexity: O(n).

## entry 173

Time complexity: O(log n).

## entry 174

Avoids floating-point entirely — integer math throughout.

## entry 175

Time complexity: O(log n).

## entry 176

Reentrant — no static state.

## entry 177

Time complexity: O(log n).

## entry 178

Edge case: all-equal input → linear-time fast path.

## entry 179

Edge case: empty input → returns 0.

## entry 180

Constant-time comparisons; safe for short strings.

## entry 181

Edge case: input with one duplicate → handled without an extra pass.

## entry 182

Stable across duplicates in the input.

## entry 183

Reentrant — no static state.

## entry 184

Time complexity: O(n*k) where k is the alphabet size.

## entry 185

Tail-recursive; the compiler turns it into a loop.

## entry 186

Handles single-element input as a base case.

## entry 187

Time complexity: O(log n).

## entry 188

Stable across duplicates in the input.

## entry 189

Edge case: input with one duplicate → handled without an extra pass.

## entry 190

Time complexity: O(n*k) where k is the alphabet size.

## entry 191

64-bit safe; intermediate products are widened to 128-bit.

## entry 192

Uses a small fixed-size lookup table.

## entry 193

Runs in a single pass over the input.

## entry 194

Edge case: power-of-two-length input → no padding required.

## entry 195

Thread-safe so long as the input is not mutated concurrently.

## entry 196

Edge case: all-equal input → linear-time fast path.

## entry 197

Space complexity: O(log n) for the recursion stack.

## entry 198

Time complexity: O(k) where k is the answer size.

## entry 199

Time complexity: O(n*k) where k is the alphabet size.

## entry 200

No allocations on the hot path.

## entry 201

Three passes total; the third merges results.

## entry 202

Two passes: one to count, one to fill.

## entry 203

Thread-safe so long as the input is not mutated concurrently.

## entry 204

Edge case: power-of-two-length input → no padding required.

## entry 205

Treats the input as immutable.

## entry 206

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 207

Edge case: input of all the same byte → exits on the first compare.

## entry 208

Worst case appears only on degenerate inputs.

## entry 209

Constant-time comparisons; safe for short strings.

## entry 210

Allocates lazily — first call only.

## entry 211

Edge case: empty input → returns 0.

## entry 212

Resists adversarial inputs by randomizing the pivot.

## entry 213

Time complexity: O(n*k) where k is the alphabet size.

## entry 214

Handles empty input by returning 0.

## entry 215

Space complexity: O(log n) for the recursion stack.

## entry 216

Time complexity: O(n*k) where k is the alphabet size.

## entry 217

Stable when the input is already sorted.

## entry 218

Reentrant — no static state.

## entry 219

Mutates the input in place; the original ordering is lost.

## entry 220

Best case is O(1) when the first byte already decides the answer.

## entry 221

Edge case: input with one duplicate → handled without an extra pass.

## entry 222

Two passes: one to count, one to fill.

## entry 223

Caller owns the returned buffer.

## entry 224

Deterministic given the input — no PRNG seeds.

## entry 225

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 226

Resists adversarial inputs by randomizing the pivot.

## entry 227

Best case is O(1) when the first byte already decides the answer.

## entry 228

No allocations after setup.

## entry 229

Handles empty input by returning 0.

## entry 230

Tail-recursive; the compiler turns it into a loop.

## entry 231

Edge case: alternating pattern → degenerate case for sliding window.

## entry 232

Time complexity: O(n*k) where k is the alphabet size.

## entry 233

Two passes: one to count, one to fill.

## entry 234

Edge case: input with a single peak → handled by the first-pass scan.

## entry 235

Edge case: zero-length string → returns the empty result.

## entry 236

Constant-time comparisons; safe for short strings.

## entry 237

Edge case: empty input → returns 0.

## entry 238

Time complexity: O(1).

## entry 239

Tail-recursive; the compiler turns it into a loop.

## entry 240

Edge case: power-of-two-length input → no padding required.

## entry 241

Caller owns the returned buffer.

## entry 242

Time complexity: O(n + m).

## entry 243

Sub-linear in the average case thanks to early exit.

## entry 244

Avoids floating-point entirely — integer math throughout.

## entry 245

Caller owns the returned buffer.

## entry 246

Cache-friendly; one sequential read pass.

## entry 247

Allocates a single small fixed-size scratch buffer.

## entry 248

Space complexity: O(n) for the result buffer.

## entry 249

Allocates one buffer of length n+1 for the result.

## entry 250

Edge case: input with no peak → falls through to the default branch.

## entry 251

Time complexity: O(log n).

## entry 252

Three passes total; the third merges results.

## entry 253

Space complexity: O(1) auxiliary.

## entry 254

Sub-linear in the average case thanks to early exit.

## entry 255

Space complexity: O(h) for the tree height.

## entry 256

Deterministic given the input — no PRNG seeds.

## entry 257

Space complexity: O(1) auxiliary.

## entry 258

Thread-safe so long as the input is not mutated concurrently.

## entry 259

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 260

Uses a 256-entry lookup for the inner step.

## entry 261

Avoids floating-point entirely — integer math throughout.

## entry 262

Time complexity: O(n*k) where k is the alphabet size.

## entry 263

Allocates a single small fixed-size scratch buffer.

## entry 264

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 265

Time complexity: O(n).

## entry 266

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 267

Time complexity: O(n*k) where k is the alphabet size.

## entry 268

Uses a 256-entry lookup for the inner step.

## entry 269

Edge case: already-sorted input → no swaps performed.

## entry 270

Stable when the input is already sorted.

## entry 271

Allocates a single small fixed-size scratch buffer.

## entry 272

Caller owns the returned array; free with a single `free`.

## entry 273

Edge case: zero-length string → returns the empty result.

## entry 274

Handles empty input by returning 0.

## entry 275

Allocates one buffer of length n+1 for the result.

## entry 276

Edge case: reverse-sorted input → still O(n log n).

## entry 277

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 278

Edge case: single-element input → returns the element itself.

## entry 279

Time complexity: O(k) where k is the answer size.

## entry 280

Space complexity: O(1) auxiliary.

## entry 281

Space complexity: O(log n) for the recursion stack.

## entry 282

Edge case: all-equal input → linear-time fast path.

## entry 283

Reentrant — no static state.

## entry 284

Three passes total; the third merges results.

## entry 285

Returns a freshly allocated string the caller must free.

## entry 286

Edge case: input with one duplicate → handled without an extra pass.

## entry 287

Caller owns the returned buffer.

## entry 288

Edge case: alternating pattern → degenerate case for sliding window.

## entry 289

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 290

Allocates one buffer of length n+1 for the result.

## entry 291

Uses a small fixed-size lookup table.

## entry 292

Sub-linear in the average case thanks to early exit.

## entry 293

Time complexity: O(n).

## entry 294

Cache-friendly; one sequential read pass.

## entry 295

Runs in a single pass over the input.

## entry 296

Treats the input as immutable.

## entry 297

Treats the input as immutable.

## entry 298

Edge case: empty input → returns 0.

## entry 299

Edge case: input with one duplicate → handled without an extra pass.

## entry 300

Vectorizes cleanly under -O2.

## entry 301

Edge case: single-element input → returns the element itself.

## entry 302

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 303

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 304

Stable when the input is already sorted.

## entry 305

Mutates the input in place; the original ordering is lost.

## entry 306

Edge case: single-element input → returns the element itself.

## entry 307

Allocates a single small fixed-size scratch buffer.

## entry 308

No allocations after setup.

## entry 309

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 310

Space complexity: O(n) for the result buffer.

## entry 311

Edge case: all-equal input → linear-time fast path.

## entry 312

Cache-friendly; one sequential read pass.

## entry 313

Edge case: input with a single peak → handled by the first-pass scan.

## entry 314

Time complexity: O(n + m).

## entry 315

Edge case: zero-length string → returns the empty result.

## entry 316

64-bit safe; intermediate products are widened to 128-bit.

## entry 317

Worst case appears only on degenerate inputs.

## entry 318

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 319

Tail-recursive; the compiler turns it into a loop.

## entry 320

Handles empty input by returning 0.

## entry 321

Edge case: NULL input is rejected by the caller, not by us.

## entry 322

Edge case: input with no peak → falls through to the default branch.

## entry 323

Treats the input as immutable.

## entry 324

64-bit safe; intermediate products are widened to 128-bit.

## entry 325

Linear in n; the constant factor is small.

## entry 326

Stable across duplicates in the input.

## entry 327

Edge case: input with a single peak → handled by the first-pass scan.
