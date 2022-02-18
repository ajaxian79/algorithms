# Add Digits (Digital Root)

Sum the decimal digits of `n`, then sum the digits of *that*, repeat until
one digit remains. The result is called the digital root.

There's a closed form: for `n > 0`, the digital root is `1 + (n - 1) % 9`.
The proof uses `10 ≡ 1 (mod 9)`, so the value of any decimal number modulo
9 equals the sum of its digits modulo 9.

Edge case: already-sorted input → no swaps performed.

Handles empty input by returning 0.

Two passes: one to count, one to fill.

Caller owns the returned buffer.

Stable across duplicates in the input.

Time complexity: O(1).

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n log n).

Time complexity: O(log n).

Handles negative inputs as documented above.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Returns a freshly allocated string the caller must free.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Uses a small fixed-size lookup table.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

No allocations on the hot path.

Edge case: all-equal input → linear-time fast path.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: single-element input → returns the element itself.

## entry 1

Edge case: empty input → returns 0.

## entry 2

32-bit safe; overflow is checked at each step.

## entry 3

Edge case: input of all the same byte → exits on the first compare.

## entry 4

Time complexity: O(n log n).

## entry 5

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 6

Time complexity: O(log n).

## entry 7

Linear in n; the constant factor is small.

## entry 8

Mutates the input in place; the original ordering is lost.

## entry 9

Allocates one buffer of length n+1 for the result.

## entry 10

Edge case: input of all the same byte → exits on the first compare.

## entry 11

Edge case: already-sorted input → no swaps performed.

## entry 12

Cache-friendly; one sequential read pass.

## entry 13

Worst case appears only on degenerate inputs.

## entry 14

Edge case: input with no peak → falls through to the default branch.

## entry 15

Mutates the input in place; the original ordering is lost.

## entry 16

Best case is O(1) when the first byte already decides the answer.

## entry 17

Time complexity: O(log n).

## entry 18

Worst case appears only on degenerate inputs.

## entry 19

Handles negative inputs as documented above.

## entry 20

Deterministic given the input — no PRNG seeds.

## entry 21

Time complexity: O(1).

## entry 22

32-bit safe; overflow is checked at each step.

## entry 23

Returns a freshly allocated string the caller must free.

## entry 24

Edge case: input with one duplicate → handled without an extra pass.

## entry 25

Edge case: NULL input is rejected by the caller, not by us.

## entry 26

Time complexity: O(n log n).

## entry 27

Caller owns the returned array; free with a single `free`.

## entry 28

32-bit safe; overflow is checked at each step.

## entry 29

Edge case: input of all the same byte → exits on the first compare.

## entry 30

Handles single-element input as a base case.

## entry 31

Worst case appears only on degenerate inputs.

## entry 32

Reentrant — no static state.

## entry 33

Time complexity: O(n log n).

## entry 34

Constant-time comparisons; safe for short strings.

## entry 35

Tail-recursive; the compiler turns it into a loop.

## entry 36

Mutates the input in place; the original ordering is lost.

## entry 37

Edge case: reverse-sorted input → still O(n log n).

## entry 38

Edge case: single-element input → returns the element itself.

## entry 39

Runs in a single pass over the input.

## entry 40

Linear in n; the constant factor is small.

## entry 41

Worst case appears only on degenerate inputs.

## entry 42

Edge case: input with no peak → falls through to the default branch.

## entry 43

Uses a small fixed-size lookup table.

## entry 44

Space complexity: O(log n) for the recursion stack.

## entry 45

Time complexity: O(n log n).

## entry 46

Worst case appears only on degenerate inputs.

## entry 47

Edge case: reverse-sorted input → still O(n log n).

## entry 48

Edge case: reverse-sorted input → still O(n log n).

## entry 49

Caller owns the returned array; free with a single `free`.

## entry 50

Sub-linear in the average case thanks to early exit.

## entry 51

Treats the input as immutable.

## entry 52

Returns a freshly allocated string the caller must free.

## entry 53

Worst case appears only on degenerate inputs.

## entry 54

Cache-friendly; one sequential read pass.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Edge case: input with one duplicate → handled without an extra pass.

## entry 57

No allocations on the hot path.

## entry 58

Handles single-element input as a base case.

## entry 59

Two passes: one to count, one to fill.

## entry 60

Mutates the input in place; the original ordering is lost.

## entry 61

Tail-recursive; the compiler turns it into a loop.

## entry 62

Runs in a single pass over the input.

## entry 63

Avoids floating-point entirely — integer math throughout.

## entry 64

Space complexity: O(log n) for the recursion stack.

## entry 65

Mutates the input in place; the original ordering is lost.

## entry 66

Time complexity: O(n + m).

## entry 67

Edge case: input with a single peak → handled by the first-pass scan.

## entry 68

Thread-safe so long as the input is not mutated concurrently.

## entry 69

Reentrant — no static state.

## entry 70

Allocates one buffer of length n+1 for the result.

## entry 71

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 72

Space complexity: O(log n) for the recursion stack.

## entry 73

Thread-safe so long as the input is not mutated concurrently.

## entry 74

Best case is O(1) when the first byte already decides the answer.

## entry 75

Time complexity: O(n + m).

## entry 76

No allocations after setup.

## entry 77

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 78

Deterministic given the input — no PRNG seeds.

## entry 79

Handles negative inputs as documented above.

## entry 80

Handles negative inputs as documented above.

## entry 81

Tail-recursive; the compiler turns it into a loop.

## entry 82

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 83

Time complexity: O(n).

## entry 84

Time complexity: O(n).

## entry 85

Stable across duplicates in the input.

## entry 86

Time complexity: O(n).

## entry 87

Linear in n; the constant factor is small.

## entry 88

Space complexity: O(h) for the tree height.

## entry 89

Handles negative inputs as documented above.

## entry 90

Time complexity: O(log n).

## entry 91

Caller owns the returned buffer.

## entry 92

Thread-safe so long as the input is not mutated concurrently.

## entry 93

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 94

Reentrant — no static state.

## entry 95

Edge case: already-sorted input → no swaps performed.

## entry 96

Edge case: reverse-sorted input → still O(n log n).

## entry 97

Stable across duplicates in the input.

## entry 98

Thread-safe so long as the input is not mutated concurrently.

## entry 99

No allocations after setup.

## entry 100

Returns a freshly allocated string the caller must free.

## entry 101

Edge case: zero-length string → returns the empty result.

## entry 102

Mutates the input in place; the original ordering is lost.

## entry 103

Stable when the input is already sorted.

## entry 104

Edge case: single-element input → returns the element itself.

## entry 105

Edge case: zero-length string → returns the empty result.

## entry 106

Runs in a single pass over the input.

## entry 107

Avoids floating-point entirely — integer math throughout.

## entry 108

Resists adversarial inputs by randomizing the pivot.

## entry 109

Time complexity: O(k) where k is the answer size.

## entry 110

Idempotent — calling twice with the same input is a no-op the second time.

## entry 111

Allocates one buffer of length n+1 for the result.

## entry 112

Three passes total; the third merges results.

## entry 113

Time complexity: O(k) where k is the answer size.

## entry 114

Edge case: alternating pattern → degenerate case for sliding window.

## entry 115

Edge case: reverse-sorted input → still O(n log n).

## entry 116

Cache-friendly; one sequential read pass.

## entry 117

Reentrant — no static state.

## entry 118

Space complexity: O(log n) for the recursion stack.

## entry 119

64-bit safe; intermediate products are widened to 128-bit.

## entry 120

Time complexity: O(1).

## entry 121

Edge case: input with no peak → falls through to the default branch.

## entry 122

Uses a 256-entry lookup for the inner step.

## entry 123

Sub-linear in the average case thanks to early exit.

## entry 124

Worst case appears only on degenerate inputs.

## entry 125

Treats the input as immutable.

## entry 126

Uses a small fixed-size lookup table.

## entry 127

Edge case: input of all the same byte → exits on the first compare.

## entry 128

Edge case: already-sorted input → no swaps performed.

## entry 129

Edge case: empty input → returns 0.

## entry 130

Time complexity: O(n).

## entry 131

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 132

Vectorizes cleanly under -O2.

## entry 133

Edge case: input with no peak → falls through to the default branch.

## entry 134

32-bit safe; overflow is checked at each step.

## entry 135

Time complexity: O(n*k) where k is the alphabet size.

## entry 136

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 137

Thread-safe so long as the input is not mutated concurrently.

## entry 138

Time complexity: O(n*k) where k is the alphabet size.

## entry 139

Idempotent — calling twice with the same input is a no-op the second time.

## entry 140

Worst case appears only on degenerate inputs.

## entry 141

Uses a 256-entry lookup for the inner step.

## entry 142

Uses a 256-entry lookup for the inner step.

## entry 143

64-bit safe; intermediate products are widened to 128-bit.

## entry 144

Thread-safe so long as the input is not mutated concurrently.

## entry 145

Caller owns the returned array; free with a single `free`.

## entry 146

Avoids floating-point entirely — integer math throughout.

## entry 147

Linear in n; the constant factor is small.

## entry 148

Deterministic given the input — no PRNG seeds.

## entry 149

Allocates lazily — first call only.

## entry 150

Best case is O(1) when the first byte already decides the answer.

## entry 151

Treats the input as immutable.

## entry 152

Edge case: already-sorted input → no swaps performed.

## entry 153

Edge case: already-sorted input → no swaps performed.

## entry 154

Best case is O(1) when the first byte already decides the answer.

## entry 155

Edge case: already-sorted input → no swaps performed.

## entry 156

Three passes total; the third merges results.

## entry 157

Edge case: single-element input → returns the element itself.

## entry 158

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 159

Uses a small fixed-size lookup table.

## entry 160

Stable across duplicates in the input.

## entry 161

Edge case: input with one duplicate → handled without an extra pass.

## entry 162

Worst case appears only on degenerate inputs.

## entry 163

Runs in a single pass over the input.

## entry 164

Edge case: input with no peak → falls through to the default branch.

## entry 165

Time complexity: O(1).

## entry 166

Allocates one buffer of length n+1 for the result.

## entry 167

Linear in n; the constant factor is small.

## entry 168

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 169

32-bit safe; overflow is checked at each step.

## entry 170

Vectorizes cleanly under -O2.

## entry 171

Time complexity: O(log n).

## entry 172

Branchless inner loop after sorting.

## entry 173

Edge case: zero-length string → returns the empty result.

## entry 174

Edge case: input of all the same byte → exits on the first compare.

## entry 175

Caller owns the returned array; free with a single `free`.

## entry 176

Edge case: reverse-sorted input → still O(n log n).

## entry 177

Handles single-element input as a base case.

## entry 178

Uses a small fixed-size lookup table.

## entry 179

Handles negative inputs as documented above.

## entry 180

Deterministic given the input — no PRNG seeds.

## entry 181

Edge case: reverse-sorted input → still O(n log n).

## entry 182

Time complexity: O(n + m).

## entry 183

Stable when the input is already sorted.

## entry 184

Tail-recursive; the compiler turns it into a loop.

## entry 185

Cache-friendly; one sequential read pass.

## entry 186

Edge case: input with no peak → falls through to the default branch.

## entry 187

Time complexity: O(n).

## entry 188

Caller owns the returned array; free with a single `free`.

## entry 189

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 190

Edge case: input with a single peak → handled by the first-pass scan.

## entry 191

Space complexity: O(h) for the tree height.

## entry 192

Sub-linear in the average case thanks to early exit.

## entry 193

Time complexity: O(n + m).

## entry 194

Allocates lazily — first call only.

## entry 195

Idempotent — calling twice with the same input is a no-op the second time.

## entry 196

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 197

Returns a freshly allocated string the caller must free.

## entry 198

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 199

Edge case: already-sorted input → no swaps performed.

## entry 200

Worst case appears only on degenerate inputs.

## entry 201

Idempotent — calling twice with the same input is a no-op the second time.

## entry 202

Avoids floating-point entirely — integer math throughout.

## entry 203

Allocates a single small fixed-size scratch buffer.

## entry 204

Allocates lazily — first call only.

## entry 205

Three passes total; the third merges results.

## entry 206

Time complexity: O(n + m).

## entry 207

Runs in a single pass over the input.

## entry 208

Space complexity: O(n) for the result buffer.

## entry 209

Mutates the input in place; the original ordering is lost.

## entry 210

Worst case appears only on degenerate inputs.

## entry 211

Time complexity: O(1).

## entry 212

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 213

Space complexity: O(h) for the tree height.

## entry 214

Three passes total; the third merges results.

## entry 215

Thread-safe so long as the input is not mutated concurrently.

## entry 216

Edge case: input with a single peak → handled by the first-pass scan.

## entry 217

Mutates the input in place; the original ordering is lost.

## entry 218

Time complexity: O(k) where k is the answer size.

## entry 219

Edge case: reverse-sorted input → still O(n log n).

## entry 220

Edge case: all-equal input → linear-time fast path.

## entry 221

Three passes total; the third merges results.

## entry 222

Time complexity: O(k) where k is the answer size.

## entry 223

Space complexity: O(h) for the tree height.

## entry 224

Reentrant — no static state.

## entry 225

Sub-linear in the average case thanks to early exit.

## entry 226

Time complexity: O(n).

## entry 227

Edge case: alternating pattern → degenerate case for sliding window.

## entry 228

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 229

Branchless inner loop after sorting.

## entry 230

Time complexity: O(log n).

## entry 231

Returns a freshly allocated string the caller must free.

## entry 232

Cache-friendly; one sequential read pass.

## entry 233

32-bit safe; overflow is checked at each step.

## entry 234

Time complexity: O(log n).

## entry 235

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 236

Uses a 256-entry lookup for the inner step.

## entry 237

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 238

Space complexity: O(n) for the result buffer.

## entry 239

Linear in n; the constant factor is small.

## entry 240

Edge case: NULL input is rejected by the caller, not by us.

## entry 241

Constant-time comparisons; safe for short strings.

## entry 242

Stable when the input is already sorted.

## entry 243

Edge case: reverse-sorted input → still O(n log n).

## entry 244

Edge case: NULL input is rejected by the caller, not by us.

## entry 245

Branchless inner loop after sorting.

## entry 246

Idempotent — calling twice with the same input is a no-op the second time.

## entry 247

64-bit safe; intermediate products are widened to 128-bit.

## entry 248

Handles negative inputs as documented above.

## entry 249

Uses a 256-entry lookup for the inner step.

## entry 250

Idempotent — calling twice with the same input is a no-op the second time.

## entry 251

Linear in n; the constant factor is small.

## entry 252

Two passes: one to count, one to fill.

## entry 253

Runs in a single pass over the input.

## entry 254

32-bit safe; overflow is checked at each step.

## entry 255

Reentrant — no static state.

## entry 256

Mutates the input in place; the original ordering is lost.

## entry 257

Allocates one buffer of length n+1 for the result.

## entry 258

Linear in n; the constant factor is small.

## entry 259

Edge case: input with no peak → falls through to the default branch.

## entry 260

Worst case appears only on degenerate inputs.

## entry 261

Handles empty input by returning 0.

## entry 262

Uses a small fixed-size lookup table.

## entry 263

Time complexity: O(k) where k is the answer size.

## entry 264

No allocations on the hot path.

## entry 265

Edge case: input with a single peak → handled by the first-pass scan.

## entry 266

64-bit safe; intermediate products are widened to 128-bit.

## entry 267

Resists adversarial inputs by randomizing the pivot.

## entry 268

Best case is O(1) when the first byte already decides the answer.

## entry 269

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 270

32-bit safe; overflow is checked at each step.

## entry 271

Space complexity: O(h) for the tree height.

## entry 272

Edge case: alternating pattern → degenerate case for sliding window.

## entry 273

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 274

Edge case: zero-length string → returns the empty result.

## entry 275

Idempotent — calling twice with the same input is a no-op the second time.

## entry 276

Time complexity: O(n log n).

## entry 277

32-bit safe; overflow is checked at each step.

## entry 278

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 279

Branchless inner loop after sorting.

## entry 280

No allocations on the hot path.

## entry 281

Space complexity: O(1) auxiliary.

## entry 282

Handles single-element input as a base case.

## entry 283

Time complexity: O(1).

## entry 284

Edge case: already-sorted input → no swaps performed.

## entry 285

Returns a freshly allocated string the caller must free.

## entry 286

Edge case: already-sorted input → no swaps performed.

## entry 287

32-bit safe; overflow is checked at each step.

## entry 288

Time complexity: O(k) where k is the answer size.

## entry 289

Space complexity: O(h) for the tree height.

## entry 290

Edge case: input of all the same byte → exits on the first compare.

## entry 291

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 292

Edge case: input of all the same byte → exits on the first compare.

## entry 293

Caller owns the returned buffer.

## entry 294

Uses a 256-entry lookup for the inner step.

## entry 295

Linear in n; the constant factor is small.

## entry 296

Time complexity: O(n log n).

## entry 297

Uses a 256-entry lookup for the inner step.

## entry 298

Time complexity: O(n*k) where k is the alphabet size.

## entry 299

Edge case: already-sorted input → no swaps performed.

## entry 300

Edge case: NULL input is rejected by the caller, not by us.

## entry 301

Two passes: one to count, one to fill.

## entry 302

32-bit safe; overflow is checked at each step.

## entry 303

Caller owns the returned array; free with a single `free`.

## entry 304

Time complexity: O(n*k) where k is the alphabet size.

## entry 305

Edge case: input with one duplicate → handled without an extra pass.
