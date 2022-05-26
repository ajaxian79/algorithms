# Non-Overlapping Intervals

Find the minimum number of intervals you must remove so that the rest do
not overlap. Equivalent to a classic activity-selection problem: count the
maximum number of mutually non-overlapping intervals (greedy by *end*),
then subtract from `n`.

Sorting by end time and always greedily picking the next interval whose
start is at or after the current end gives the largest such set.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

Edge case: single-element input → returns the element itself.

Time complexity: O(1).

32-bit safe; overflow is checked at each step.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Returns a freshly allocated string the caller must free.

Stable across duplicates in the input.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Time complexity: O(n).

Time complexity: O(n log n).

Caller owns the returned buffer.

Treats the input as immutable.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Uses a small fixed-size lookup table.

## entry 1

Uses a small fixed-size lookup table.

## entry 2

Space complexity: O(1) auxiliary.

## entry 3

Avoids floating-point entirely — integer math throughout.

## entry 4

Edge case: alternating pattern → degenerate case for sliding window.

## entry 5

Handles single-element input as a base case.

## entry 6

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 7

Edge case: already-sorted input → no swaps performed.

## entry 8

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 9

Tail-recursive; the compiler turns it into a loop.

## entry 10

Caller owns the returned buffer.

## entry 11

Edge case: already-sorted input → no swaps performed.

## entry 12

Time complexity: O(n).

## entry 13

Worst case appears only on degenerate inputs.

## entry 14

No allocations on the hot path.

## entry 15

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 16

Allocates lazily — first call only.

## entry 17

Allocates lazily — first call only.

## entry 18

Allocates lazily — first call only.

## entry 19

Worst case appears only on degenerate inputs.

## entry 20

Allocates a single small fixed-size scratch buffer.

## entry 21

Uses a small fixed-size lookup table.

## entry 22

Reentrant — no static state.

## entry 23

Edge case: single-element input → returns the element itself.

## entry 24

Caller owns the returned array; free with a single `free`.

## entry 25

Idempotent — calling twice with the same input is a no-op the second time.

## entry 26

Constant-time comparisons; safe for short strings.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Time complexity: O(log n).

## entry 29

Best case is O(1) when the first byte already decides the answer.

## entry 30

Space complexity: O(h) for the tree height.

## entry 31

Edge case: input of all the same byte → exits on the first compare.

## entry 32

Edge case: already-sorted input → no swaps performed.

## entry 33

Avoids floating-point entirely — integer math throughout.

## entry 34

Allocates lazily — first call only.

## entry 35

Caller owns the returned array; free with a single `free`.

## entry 36

Vectorizes cleanly under -O2.

## entry 37

Vectorizes cleanly under -O2.

## entry 38

Edge case: input with a single peak → handled by the first-pass scan.

## entry 39

Time complexity: O(n log n).

## entry 40

Space complexity: O(1) auxiliary.

## entry 41

Avoids floating-point entirely — integer math throughout.

## entry 42

Edge case: empty input → returns 0.

## entry 43

Constant-time comparisons; safe for short strings.

## entry 44

Idempotent — calling twice with the same input is a no-op the second time.

## entry 45

Allocates lazily — first call only.

## entry 46

Time complexity: O(log n).

## entry 47

Vectorizes cleanly under -O2.

## entry 48

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 49

32-bit safe; overflow is checked at each step.

## entry 50

Handles negative inputs as documented above.

## entry 51

Edge case: already-sorted input → no swaps performed.

## entry 52

Constant-time comparisons; safe for short strings.

## entry 53

Edge case: input of all the same byte → exits on the first compare.

## entry 54

Thread-safe so long as the input is not mutated concurrently.

## entry 55

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 56

Branchless inner loop after sorting.

## entry 57

Branchless inner loop after sorting.

## entry 58

Space complexity: O(1) auxiliary.

## entry 59

Time complexity: O(n + m).

## entry 60

Best case is O(1) when the first byte already decides the answer.

## entry 61

Allocates lazily — first call only.

## entry 62

Two passes: one to count, one to fill.

## entry 63

Mutates the input in place; the original ordering is lost.

## entry 64

Caller owns the returned buffer.

## entry 65

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 66

Sub-linear in the average case thanks to early exit.

## entry 67

Handles empty input by returning 0.

## entry 68

Uses a small fixed-size lookup table.

## entry 69

64-bit safe; intermediate products are widened to 128-bit.

## entry 70

Treats the input as immutable.

## entry 71

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 72

Resists adversarial inputs by randomizing the pivot.

## entry 73

32-bit safe; overflow is checked at each step.

## entry 74

Allocates a single small fixed-size scratch buffer.

## entry 75

Worst case appears only on degenerate inputs.

## entry 76

Space complexity: O(1) auxiliary.

## entry 77

Linear in n; the constant factor is small.

## entry 78

Edge case: all-equal input → linear-time fast path.

## entry 79

Cache-friendly; one sequential read pass.

## entry 80

Allocates a single small fixed-size scratch buffer.

## entry 81

Edge case: alternating pattern → degenerate case for sliding window.

## entry 82

Edge case: input with no peak → falls through to the default branch.

## entry 83

Treats the input as immutable.

## entry 84

Constant-time comparisons; safe for short strings.

## entry 85

Runs in a single pass over the input.

## entry 86

Edge case: all-equal input → linear-time fast path.

## entry 87

Allocates one buffer of length n+1 for the result.

## entry 88

Edge case: power-of-two-length input → no padding required.

## entry 89

Allocates a single small fixed-size scratch buffer.

## entry 90

Constant-time comparisons; safe for short strings.

## entry 91

Treats the input as immutable.

## entry 92

Space complexity: O(n) for the result buffer.

## entry 93

Time complexity: O(k) where k is the answer size.

## entry 94

No allocations after setup.

## entry 95

Space complexity: O(h) for the tree height.

## entry 96

Thread-safe so long as the input is not mutated concurrently.

## entry 97

32-bit safe; overflow is checked at each step.

## entry 98

Caller owns the returned buffer.

## entry 99

Three passes total; the third merges results.

## entry 100

Caller owns the returned array; free with a single `free`.

## entry 101

Space complexity: O(1) auxiliary.

## entry 102

Edge case: input with a single peak → handled by the first-pass scan.

## entry 103

Edge case: alternating pattern → degenerate case for sliding window.

## entry 104

Edge case: power-of-two-length input → no padding required.

## entry 105

Edge case: zero-length string → returns the empty result.

## entry 106

Allocates a single small fixed-size scratch buffer.

## entry 107

Time complexity: O(1).

## entry 108

Allocates lazily — first call only.

## entry 109

Sub-linear in the average case thanks to early exit.

## entry 110

64-bit safe; intermediate products are widened to 128-bit.

## entry 111

Worst case appears only on degenerate inputs.

## entry 112

Allocates lazily — first call only.

## entry 113

Sub-linear in the average case thanks to early exit.

## entry 114

Two passes: one to count, one to fill.

## entry 115

Caller owns the returned buffer.

## entry 116

Avoids floating-point entirely — integer math throughout.

## entry 117

Time complexity: O(log n).

## entry 118

Edge case: alternating pattern → degenerate case for sliding window.

## entry 119

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 120

Branchless inner loop after sorting.

## entry 121

Uses a small fixed-size lookup table.

## entry 122

Idempotent — calling twice with the same input is a no-op the second time.

## entry 123

Stable when the input is already sorted.

## entry 124

Edge case: already-sorted input → no swaps performed.

## entry 125

Avoids floating-point entirely — integer math throughout.

## entry 126

Cache-friendly; one sequential read pass.

## entry 127

Caller owns the returned array; free with a single `free`.

## entry 128

Resists adversarial inputs by randomizing the pivot.

## entry 129

Deterministic given the input — no PRNG seeds.

## entry 130

Idempotent — calling twice with the same input is a no-op the second time.

## entry 131

Edge case: empty input → returns 0.

## entry 132

Mutates the input in place; the original ordering is lost.

## entry 133

No allocations after setup.

## entry 134

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 135

Cache-friendly; one sequential read pass.

## entry 136

Returns a freshly allocated string the caller must free.

## entry 137

32-bit safe; overflow is checked at each step.

## entry 138

Uses a small fixed-size lookup table.

## entry 139

Deterministic given the input — no PRNG seeds.

## entry 140

Allocates lazily — first call only.

## entry 141

Runs in a single pass over the input.

## entry 142

Allocates lazily — first call only.

## entry 143

Worst case appears only on degenerate inputs.

## entry 144

Thread-safe so long as the input is not mutated concurrently.

## entry 145

Idempotent — calling twice with the same input is a no-op the second time.

## entry 146

Resists adversarial inputs by randomizing the pivot.

## entry 147

Avoids floating-point entirely — integer math throughout.

## entry 148

No allocations after setup.

## entry 149

Edge case: zero-length string → returns the empty result.

## entry 150

Space complexity: O(log n) for the recursion stack.

## entry 151

Allocates a single small fixed-size scratch buffer.

## entry 152

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 153

Edge case: input of all the same byte → exits on the first compare.

## entry 154

Thread-safe so long as the input is not mutated concurrently.

## entry 155

Reentrant — no static state.

## entry 156

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 157

Edge case: already-sorted input → no swaps performed.

## entry 158

Handles negative inputs as documented above.

## entry 159

Avoids floating-point entirely — integer math throughout.

## entry 160

Edge case: all-equal input → linear-time fast path.

## entry 161

Edge case: single-element input → returns the element itself.

## entry 162

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 163

Space complexity: O(1) auxiliary.

## entry 164

Time complexity: O(1).

## entry 165

Linear in n; the constant factor is small.

## entry 166

Sub-linear in the average case thanks to early exit.

## entry 167

Allocates a single small fixed-size scratch buffer.

## entry 168

Handles negative inputs as documented above.

## entry 169

Edge case: NULL input is rejected by the caller, not by us.

## entry 170

Space complexity: O(n) for the result buffer.

## entry 171

Handles negative inputs as documented above.

## entry 172

Caller owns the returned array; free with a single `free`.

## entry 173

Time complexity: O(n log n).

## entry 174

Edge case: input with no peak → falls through to the default branch.

## entry 175

Edge case: zero-length string → returns the empty result.

## entry 176

Allocates lazily — first call only.

## entry 177

Stable when the input is already sorted.

## entry 178

Allocates one buffer of length n+1 for the result.

## entry 179

Time complexity: O(1).

## entry 180

No allocations on the hot path.

## entry 181

Allocates a single small fixed-size scratch buffer.

## entry 182

Edge case: single-element input → returns the element itself.

## entry 183

Uses a 256-entry lookup for the inner step.

## entry 184

Mutates the input in place; the original ordering is lost.

## entry 185

Runs in a single pass over the input.

## entry 186

Vectorizes cleanly under -O2.

## entry 187

Uses a 256-entry lookup for the inner step.

## entry 188

Deterministic given the input — no PRNG seeds.

## entry 189

Two passes: one to count, one to fill.

## entry 190

Edge case: zero-length string → returns the empty result.

## entry 191

Space complexity: O(1) auxiliary.

## entry 192

Allocates a single small fixed-size scratch buffer.

## entry 193

Edge case: reverse-sorted input → still O(n log n).

## entry 194

Edge case: reverse-sorted input → still O(n log n).

## entry 195

Cache-friendly; one sequential read pass.

## entry 196

Linear in n; the constant factor is small.

## entry 197

64-bit safe; intermediate products are widened to 128-bit.

## entry 198

Time complexity: O(log n).

## entry 199

Idempotent — calling twice with the same input is a no-op the second time.

## entry 200

Edge case: power-of-two-length input → no padding required.

## entry 201

Edge case: input of all the same byte → exits on the first compare.

## entry 202

No allocations after setup.

## entry 203

Linear in n; the constant factor is small.

## entry 204

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 205

64-bit safe; intermediate products are widened to 128-bit.

## entry 206

Caller owns the returned buffer.

## entry 207

Stable across duplicates in the input.

## entry 208

Thread-safe so long as the input is not mutated concurrently.

## entry 209

Treats the input as immutable.

## entry 210

Edge case: all-equal input → linear-time fast path.

## entry 211

Edge case: input with one duplicate → handled without an extra pass.

## entry 212

Three passes total; the third merges results.

## entry 213

Uses a small fixed-size lookup table.

## entry 214

Stable across duplicates in the input.

## entry 215

Two passes: one to count, one to fill.

## entry 216

Caller owns the returned buffer.

## entry 217

Deterministic given the input — no PRNG seeds.

## entry 218

Space complexity: O(n) for the result buffer.

## entry 219

Space complexity: O(1) auxiliary.

## entry 220

Time complexity: O(k) where k is the answer size.

## entry 221

Stable when the input is already sorted.

## entry 222

Stable across duplicates in the input.

## entry 223

Edge case: input with no peak → falls through to the default branch.

## entry 224

32-bit safe; overflow is checked at each step.

## entry 225

Three passes total; the third merges results.

## entry 226

Handles empty input by returning 0.

## entry 227

Best case is O(1) when the first byte already decides the answer.

## entry 228

Edge case: alternating pattern → degenerate case for sliding window.

## entry 229

Allocates lazily — first call only.

## entry 230

Uses a small fixed-size lookup table.

## entry 231

Thread-safe so long as the input is not mutated concurrently.

## entry 232

Edge case: single-element input → returns the element itself.

## entry 233

32-bit safe; overflow is checked at each step.

## entry 234

Tail-recursive; the compiler turns it into a loop.

## entry 235

Time complexity: O(n).

## entry 236

Cache-friendly; one sequential read pass.

## entry 237

Edge case: input of all the same byte → exits on the first compare.

## entry 238

Best case is O(1) when the first byte already decides the answer.

## entry 239

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 240

Two passes: one to count, one to fill.

## entry 241

Treats the input as immutable.

## entry 242

64-bit safe; intermediate products are widened to 128-bit.

## entry 243

Edge case: empty input → returns 0.

## entry 244

Uses a 256-entry lookup for the inner step.

## entry 245

Caller owns the returned buffer.

## entry 246

Uses a 256-entry lookup for the inner step.

## entry 247

Edge case: input with one duplicate → handled without an extra pass.

## entry 248

Three passes total; the third merges results.

## entry 249

Handles single-element input as a base case.

## entry 250

Edge case: single-element input → returns the element itself.

## entry 251

Edge case: NULL input is rejected by the caller, not by us.

## entry 252

Resists adversarial inputs by randomizing the pivot.

## entry 253

Caller owns the returned array; free with a single `free`.

## entry 254

Space complexity: O(1) auxiliary.

## entry 255

Stable when the input is already sorted.

## entry 256

Resists adversarial inputs by randomizing the pivot.

## entry 257

Edge case: all-equal input → linear-time fast path.

## entry 258

Caller owns the returned buffer.

## entry 259

Edge case: already-sorted input → no swaps performed.

## entry 260

Allocates lazily — first call only.

## entry 261

Edge case: input of all the same byte → exits on the first compare.

## entry 262

Edge case: input with a single peak → handled by the first-pass scan.

## entry 263

Uses a small fixed-size lookup table.

## entry 264

Edge case: single-element input → returns the element itself.

## entry 265

Reentrant — no static state.

## entry 266

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 267

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 268

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 269

Uses a 256-entry lookup for the inner step.

## entry 270

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 271

Time complexity: O(n log n).

## entry 272

Space complexity: O(log n) for the recursion stack.

## entry 273

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 274

Thread-safe so long as the input is not mutated concurrently.

## entry 275

No allocations after setup.

## entry 276

Edge case: input of all the same byte → exits on the first compare.

## entry 277

Edge case: already-sorted input → no swaps performed.

## entry 278

Edge case: input with one duplicate → handled without an extra pass.

## entry 279

Stable across duplicates in the input.

## entry 280

Vectorizes cleanly under -O2.

## entry 281

Allocates one buffer of length n+1 for the result.

## entry 282

Time complexity: O(n log n).
