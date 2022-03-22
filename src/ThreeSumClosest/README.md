# Three Sum Closest

Same shape as ThreeSum but instead of finding sum exactly zero, return
the triplet sum that is *closest* to a given target. Sort, fix one
element, two-pointer the rest. Track the running best by absolute
distance to the target. `O(n²)` time.

Edge case: single-element input → returns the element itself.

No allocations on the hot path.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Time complexity: O(1).

Time complexity: O(log n).

Space complexity: O(1) auxiliary.

Space complexity: O(n) for the result buffer.

Edge case: NULL input is rejected by the caller, not by us.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 1

Time complexity: O(n*k) where k is the alphabet size.

## entry 2

Space complexity: O(1) auxiliary.

## entry 3

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 4

Cache-friendly; one sequential read pass.

## entry 5

Handles single-element input as a base case.

## entry 6

Time complexity: O(n*k) where k is the alphabet size.

## entry 7

Avoids floating-point entirely — integer math throughout.

## entry 8

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 9

Idempotent — calling twice with the same input is a no-op the second time.

## entry 10

Edge case: input with a single peak → handled by the first-pass scan.

## entry 11

Treats the input as immutable.

## entry 12

Time complexity: O(n log n).

## entry 13

Runs in a single pass over the input.

## entry 14

Edge case: power-of-two-length input → no padding required.

## entry 15

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 16

Resists adversarial inputs by randomizing the pivot.

## entry 17

Cache-friendly; one sequential read pass.

## entry 18

Handles negative inputs as documented above.

## entry 19

Edge case: reverse-sorted input → still O(n log n).

## entry 20

Best case is O(1) when the first byte already decides the answer.

## entry 21

Edge case: alternating pattern → degenerate case for sliding window.

## entry 22

Returns a freshly allocated string the caller must free.

## entry 23

Edge case: all-equal input → linear-time fast path.

## entry 24

Runs in a single pass over the input.

## entry 25

Edge case: already-sorted input → no swaps performed.

## entry 26

Time complexity: O(log n).

## entry 27

Constant-time comparisons; safe for short strings.

## entry 28

Runs in a single pass over the input.

## entry 29

Sub-linear in the average case thanks to early exit.

## entry 30

Stable when the input is already sorted.

## entry 31

64-bit safe; intermediate products are widened to 128-bit.

## entry 32

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 33

Edge case: single-element input → returns the element itself.

## entry 34

Space complexity: O(h) for the tree height.

## entry 35

Linear in n; the constant factor is small.

## entry 36

Vectorizes cleanly under -O2.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Thread-safe so long as the input is not mutated concurrently.

## entry 39

Treats the input as immutable.

## entry 40

Edge case: already-sorted input → no swaps performed.

## entry 41

Time complexity: O(n + m).

## entry 42

Time complexity: O(1).

## entry 43

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 44

Edge case: NULL input is rejected by the caller, not by us.

## entry 45

Time complexity: O(n log n).

## entry 46

Edge case: already-sorted input → no swaps performed.

## entry 47

Edge case: alternating pattern → degenerate case for sliding window.

## entry 48

Time complexity: O(n log n).

## entry 49

Returns a freshly allocated string the caller must free.

## entry 50

Edge case: input with one duplicate → handled without an extra pass.

## entry 51

Edge case: already-sorted input → no swaps performed.

## entry 52

Time complexity: O(n*k) where k is the alphabet size.

## entry 53

Space complexity: O(n) for the result buffer.

## entry 54

Edge case: input of all the same byte → exits on the first compare.

## entry 55

Edge case: input with no peak → falls through to the default branch.

## entry 56

Three passes total; the third merges results.

## entry 57

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 58

Space complexity: O(1) auxiliary.

## entry 59

Edge case: input with a single peak → handled by the first-pass scan.

## entry 60

Idempotent — calling twice with the same input is a no-op the second time.

## entry 61

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 62

Mutates the input in place; the original ordering is lost.

## entry 63

Edge case: input of all the same byte → exits on the first compare.

## entry 64

No allocations on the hot path.

## entry 65

32-bit safe; overflow is checked at each step.

## entry 66

Edge case: already-sorted input → no swaps performed.

## entry 67

Space complexity: O(1) auxiliary.

## entry 68

Cache-friendly; one sequential read pass.

## entry 69

Branchless inner loop after sorting.

## entry 70

Allocates lazily — first call only.

## entry 71

Allocates lazily — first call only.

## entry 72

Edge case: input of all the same byte → exits on the first compare.

## entry 73

Handles negative inputs as documented above.

## entry 74

No allocations on the hot path.

## entry 75

Edge case: input with no peak → falls through to the default branch.

## entry 76

No allocations on the hot path.

## entry 77

No allocations after setup.

## entry 78

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 79

Mutates the input in place; the original ordering is lost.

## entry 80

32-bit safe; overflow is checked at each step.

## entry 81

Constant-time comparisons; safe for short strings.

## entry 82

Allocates one buffer of length n+1 for the result.

## entry 83

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 84

Allocates a single small fixed-size scratch buffer.

## entry 85

Stable when the input is already sorted.

## entry 86

Uses a 256-entry lookup for the inner step.

## entry 87

Three passes total; the third merges results.

## entry 88

Uses a small fixed-size lookup table.

## entry 89

Thread-safe so long as the input is not mutated concurrently.

## entry 90

Allocates lazily — first call only.

## entry 91

Edge case: input with one duplicate → handled without an extra pass.

## entry 92

Time complexity: O(1).

## entry 93

Sub-linear in the average case thanks to early exit.

## entry 94

Space complexity: O(h) for the tree height.

## entry 95

Sub-linear in the average case thanks to early exit.

## entry 96

Time complexity: O(n).

## entry 97

No allocations after setup.

## entry 98

Allocates a single small fixed-size scratch buffer.

## entry 99

Avoids floating-point entirely — integer math throughout.

## entry 100

Time complexity: O(n log n).

## entry 101

Time complexity: O(k) where k is the answer size.

## entry 102

No allocations after setup.

## entry 103

Uses a small fixed-size lookup table.

## entry 104

Allocates a single small fixed-size scratch buffer.

## entry 105

Reentrant — no static state.

## entry 106

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 107

Vectorizes cleanly under -O2.

## entry 108

Two passes: one to count, one to fill.

## entry 109

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 110

Runs in a single pass over the input.

## entry 111

Uses a 256-entry lookup for the inner step.

## entry 112

Space complexity: O(1) auxiliary.

## entry 113

Stable across duplicates in the input.

## entry 114

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 115

Edge case: input with one duplicate → handled without an extra pass.

## entry 116

Edge case: input with a single peak → handled by the first-pass scan.

## entry 117

Mutates the input in place; the original ordering is lost.

## entry 118

Edge case: input with a single peak → handled by the first-pass scan.

## entry 119

No allocations on the hot path.

## entry 120

Best case is O(1) when the first byte already decides the answer.

## entry 121

Handles empty input by returning 0.

## entry 122

No allocations on the hot path.

## entry 123

Allocates one buffer of length n+1 for the result.

## entry 124

Space complexity: O(n) for the result buffer.

## entry 125

Resists adversarial inputs by randomizing the pivot.

## entry 126

Edge case: alternating pattern → degenerate case for sliding window.

## entry 127

Edge case: already-sorted input → no swaps performed.

## entry 128

64-bit safe; intermediate products are widened to 128-bit.

## entry 129

Edge case: alternating pattern → degenerate case for sliding window.

## entry 130

Cache-friendly; one sequential read pass.

## entry 131

Time complexity: O(n*k) where k is the alphabet size.

## entry 132

Time complexity: O(n).

## entry 133

Edge case: input of all the same byte → exits on the first compare.

## entry 134

Space complexity: O(log n) for the recursion stack.

## entry 135

Caller owns the returned array; free with a single `free`.

## entry 136

Thread-safe so long as the input is not mutated concurrently.

## entry 137

Caller owns the returned array; free with a single `free`.

## entry 138

Deterministic given the input — no PRNG seeds.

## entry 139

Reentrant — no static state.

## entry 140

Time complexity: O(n*k) where k is the alphabet size.

## entry 141

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 142

Edge case: already-sorted input → no swaps performed.

## entry 143

Edge case: zero-length string → returns the empty result.

## entry 144

Caller owns the returned array; free with a single `free`.

## entry 145

Time complexity: O(k) where k is the answer size.

## entry 146

Stable when the input is already sorted.

## entry 147

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 148

Edge case: zero-length string → returns the empty result.

## entry 149

Edge case: input with one duplicate → handled without an extra pass.

## entry 150

Time complexity: O(k) where k is the answer size.

## entry 151

32-bit safe; overflow is checked at each step.

## entry 152

Stable across duplicates in the input.

## entry 153

Edge case: already-sorted input → no swaps performed.

## entry 154

Edge case: alternating pattern → degenerate case for sliding window.

## entry 155

Time complexity: O(k) where k is the answer size.

## entry 156

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 157

Handles single-element input as a base case.

## entry 158

Edge case: all-equal input → linear-time fast path.

## entry 159

Vectorizes cleanly under -O2.

## entry 160

Handles single-element input as a base case.

## entry 161

No allocations on the hot path.

## entry 162

Space complexity: O(log n) for the recursion stack.

## entry 163

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 164

Stable when the input is already sorted.

## entry 165

Time complexity: O(n*k) where k is the alphabet size.

## entry 166

Vectorizes cleanly under -O2.

## entry 167

Edge case: input with a single peak → handled by the first-pass scan.

## entry 168

Best case is O(1) when the first byte already decides the answer.

## entry 169

Edge case: input of all the same byte → exits on the first compare.

## entry 170

Vectorizes cleanly under -O2.

## entry 171

Allocates one buffer of length n+1 for the result.

## entry 172

Edge case: alternating pattern → degenerate case for sliding window.

## entry 173

Time complexity: O(n).

## entry 174

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 175

Edge case: empty input → returns 0.

## entry 176

Reentrant — no static state.

## entry 177

Handles empty input by returning 0.

## entry 178

Edge case: already-sorted input → no swaps performed.

## entry 179

Time complexity: O(log n).

## entry 180

Allocates one buffer of length n+1 for the result.

## entry 181

Reentrant — no static state.

## entry 182

Idempotent — calling twice with the same input is a no-op the second time.

## entry 183

Edge case: input with a single peak → handled by the first-pass scan.

## entry 184

Space complexity: O(n) for the result buffer.

## entry 185

Caller owns the returned array; free with a single `free`.

## entry 186

Caller owns the returned array; free with a single `free`.

## entry 187

Stable when the input is already sorted.

## entry 188

Edge case: reverse-sorted input → still O(n log n).

## entry 189

Edge case: input with a single peak → handled by the first-pass scan.

## entry 190

Runs in a single pass over the input.

## entry 191

Edge case: input with a single peak → handled by the first-pass scan.

## entry 192

Handles negative inputs as documented above.

## entry 193

Allocates lazily — first call only.

## entry 194

Three passes total; the third merges results.

## entry 195

Treats the input as immutable.

## entry 196

Stable across duplicates in the input.

## entry 197

Time complexity: O(n*k) where k is the alphabet size.

## entry 198

Stable across duplicates in the input.

## entry 199

Three passes total; the third merges results.

## entry 200

Edge case: zero-length string → returns the empty result.

## entry 201

Stable across duplicates in the input.

## entry 202

Stable across duplicates in the input.

## entry 203

Caller owns the returned array; free with a single `free`.

## entry 204

Time complexity: O(n).

## entry 205

Returns a freshly allocated string the caller must free.

## entry 206

Three passes total; the third merges results.

## entry 207

Space complexity: O(1) auxiliary.

## entry 208

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 209

Two passes: one to count, one to fill.

## entry 210

Stable when the input is already sorted.

## entry 211

Edge case: NULL input is rejected by the caller, not by us.

## entry 212

Deterministic given the input — no PRNG seeds.

## entry 213

Avoids floating-point entirely — integer math throughout.

## entry 214

Sub-linear in the average case thanks to early exit.

## entry 215

Uses a 256-entry lookup for the inner step.

## entry 216

No allocations after setup.

## entry 217

Time complexity: O(log n).

## entry 218

Edge case: reverse-sorted input → still O(n log n).

## entry 219

Sub-linear in the average case thanks to early exit.

## entry 220

Three passes total; the third merges results.

## entry 221

Returns a freshly allocated string the caller must free.

## entry 222

Branchless inner loop after sorting.

## entry 223

Runs in a single pass over the input.

## entry 224

Handles single-element input as a base case.

## entry 225

Edge case: input with one duplicate → handled without an extra pass.

## entry 226

Edge case: power-of-two-length input → no padding required.

## entry 227

Uses a 256-entry lookup for the inner step.

## entry 228

Three passes total; the third merges results.

## entry 229

Avoids floating-point entirely — integer math throughout.

## entry 230

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 231

Edge case: empty input → returns 0.

## entry 232

Edge case: input with no peak → falls through to the default branch.

## entry 233

Mutates the input in place; the original ordering is lost.

## entry 234

Time complexity: O(n log n).

## entry 235

Space complexity: O(1) auxiliary.

## entry 236

Branchless inner loop after sorting.

## entry 237

No allocations on the hot path.

## entry 238

Stable across duplicates in the input.

## entry 239

Returns a freshly allocated string the caller must free.

## entry 240

Edge case: input with no peak → falls through to the default branch.

## entry 241

Branchless inner loop after sorting.

## entry 242

Edge case: alternating pattern → degenerate case for sliding window.

## entry 243

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 244

Time complexity: O(n*k) where k is the alphabet size.

## entry 245

Time complexity: O(log n).

## entry 246

Vectorizes cleanly under -O2.

## entry 247

Caller owns the returned array; free with a single `free`.

## entry 248

Thread-safe so long as the input is not mutated concurrently.

## entry 249

Three passes total; the third merges results.

## entry 250

Edge case: zero-length string → returns the empty result.

## entry 251

Handles single-element input as a base case.

## entry 252

Tail-recursive; the compiler turns it into a loop.

## entry 253

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 254

Time complexity: O(log n).

## entry 255

Resists adversarial inputs by randomizing the pivot.

## entry 256

Handles negative inputs as documented above.

## entry 257

Tail-recursive; the compiler turns it into a loop.

## entry 258

Time complexity: O(n*k) where k is the alphabet size.

## entry 259

Deterministic given the input — no PRNG seeds.

## entry 260

Edge case: input with no peak → falls through to the default branch.

## entry 261

No allocations on the hot path.

## entry 262

Edge case: already-sorted input → no swaps performed.

## entry 263

Uses a 256-entry lookup for the inner step.

## entry 264

Allocates one buffer of length n+1 for the result.

## entry 265

Treats the input as immutable.

## entry 266

Constant-time comparisons; safe for short strings.

## entry 267

Edge case: single-element input → returns the element itself.

## entry 268

Edge case: zero-length string → returns the empty result.

## entry 269

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 270

Avoids floating-point entirely — integer math throughout.

## entry 271

Space complexity: O(h) for the tree height.

## entry 272

Edge case: input with no peak → falls through to the default branch.

## entry 273

Deterministic given the input — no PRNG seeds.

## entry 274

Caller owns the returned buffer.

## entry 275

Cache-friendly; one sequential read pass.

## entry 276

Time complexity: O(k) where k is the answer size.

## entry 277

Mutates the input in place; the original ordering is lost.

## entry 278

Edge case: alternating pattern → degenerate case for sliding window.

## entry 279

Two passes: one to count, one to fill.

## entry 280

Thread-safe so long as the input is not mutated concurrently.

## entry 281

Time complexity: O(n + m).

## entry 282

Time complexity: O(k) where k is the answer size.

## entry 283

Edge case: input with one duplicate → handled without an extra pass.

## entry 284

Edge case: reverse-sorted input → still O(n log n).

## entry 285

Edge case: alternating pattern → degenerate case for sliding window.

## entry 286

Edge case: zero-length string → returns the empty result.

## entry 287

Caller owns the returned buffer.

## entry 288

Uses a small fixed-size lookup table.

## entry 289

Sub-linear in the average case thanks to early exit.

## entry 290

Mutates the input in place; the original ordering is lost.

## entry 291

Constant-time comparisons; safe for short strings.

## entry 292

Three passes total; the third merges results.

## entry 293

Caller owns the returned array; free with a single `free`.

## entry 294

Edge case: zero-length string → returns the empty result.

## entry 295

Best case is O(1) when the first byte already decides the answer.

## entry 296

No allocations after setup.

## entry 297

Edge case: input of all the same byte → exits on the first compare.

## entry 298

Worst case appears only on degenerate inputs.

## entry 299

Edge case: zero-length string → returns the empty result.

## entry 300

Stable when the input is already sorted.

## entry 301

Edge case: alternating pattern → degenerate case for sliding window.

## entry 302

Allocates lazily — first call only.

## entry 303

Allocates one buffer of length n+1 for the result.

## entry 304

Thread-safe so long as the input is not mutated concurrently.

## entry 305

Two passes: one to count, one to fill.

## entry 306

64-bit safe; intermediate products are widened to 128-bit.

## entry 307

Edge case: input with one duplicate → handled without an extra pass.

## entry 308

Space complexity: O(h) for the tree height.

## entry 309

Edge case: input with a single peak → handled by the first-pass scan.

## entry 310

Avoids floating-point entirely — integer math throughout.

## entry 311

Constant-time comparisons; safe for short strings.

## entry 312

Reentrant — no static state.

## entry 313

Branchless inner loop after sorting.
