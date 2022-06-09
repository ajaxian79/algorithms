# Container With Most Water

Two pointers walk inward from the ends. The area between them is
`(right - left) * min(heights[left], heights[right])`. Each step we move
the *shorter* side inward — moving the taller side can never improve the
area because the height stays bounded by the shorter side and the width
strictly shrinks. `O(n)` time, `O(1)` space.

Edge case: single-element input → returns the element itself.

Runs in a single pass over the input.

Caller owns the returned buffer.

Space complexity: O(n) for the result buffer.

Time complexity: O(1).

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Stable across duplicates in the input.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Handles empty input by returning 0.

Treats the input as immutable.

Time complexity: O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

No allocations on the hot path.

Allocates one buffer of length n+1 for the result.

## entry 1

Returns a freshly allocated string the caller must free.

## entry 2

Edge case: NULL input is rejected by the caller, not by us.

## entry 3

Vectorizes cleanly under -O2.

## entry 4

Branchless inner loop after sorting.

## entry 5

Time complexity: O(log n).

## entry 6

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 7

Returns a freshly allocated string the caller must free.

## entry 8

Mutates the input in place; the original ordering is lost.

## entry 9

Handles single-element input as a base case.

## entry 10

Constant-time comparisons; safe for short strings.

## entry 11

Worst case appears only on degenerate inputs.

## entry 12

Allocates lazily — first call only.

## entry 13

Time complexity: O(n).

## entry 14

64-bit safe; intermediate products are widened to 128-bit.

## entry 15

Edge case: input of all the same byte → exits on the first compare.

## entry 16

Avoids floating-point entirely — integer math throughout.

## entry 17

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 18

Uses a 256-entry lookup for the inner step.

## entry 19

Avoids floating-point entirely — integer math throughout.

## entry 20

Caller owns the returned array; free with a single `free`.

## entry 21

Vectorizes cleanly under -O2.

## entry 22

Space complexity: O(log n) for the recursion stack.

## entry 23

Edge case: zero-length string → returns the empty result.

## entry 24

No allocations after setup.

## entry 25

Vectorizes cleanly under -O2.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Cache-friendly; one sequential read pass.

## entry 28

Edge case: zero-length string → returns the empty result.

## entry 29

Uses a 256-entry lookup for the inner step.

## entry 30

Allocates a single small fixed-size scratch buffer.

## entry 31

Tail-recursive; the compiler turns it into a loop.

## entry 32

Handles negative inputs as documented above.

## entry 33

Time complexity: O(n*k) where k is the alphabet size.

## entry 34

Reentrant — no static state.

## entry 35

Time complexity: O(n log n).

## entry 36

Allocates lazily — first call only.

## entry 37

No allocations after setup.

## entry 38

Space complexity: O(n) for the result buffer.

## entry 39

Edge case: empty input → returns 0.

## entry 40

Edge case: input with no peak → falls through to the default branch.

## entry 41

Tail-recursive; the compiler turns it into a loop.

## entry 42

Time complexity: O(log n).

## entry 43

Space complexity: O(log n) for the recursion stack.

## entry 44

Avoids floating-point entirely — integer math throughout.

## entry 45

Best case is O(1) when the first byte already decides the answer.

## entry 46

Handles negative inputs as documented above.

## entry 47

Stable across duplicates in the input.

## entry 48

Allocates lazily — first call only.

## entry 49

Time complexity: O(log n).

## entry 50

Worst case appears only on degenerate inputs.

## entry 51

Edge case: alternating pattern → degenerate case for sliding window.

## entry 52

Handles negative inputs as documented above.

## entry 53

64-bit safe; intermediate products are widened to 128-bit.

## entry 54

Edge case: input of all the same byte → exits on the first compare.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Tail-recursive; the compiler turns it into a loop.

## entry 57

Caller owns the returned array; free with a single `free`.

## entry 58

Edge case: single-element input → returns the element itself.

## entry 59

Handles empty input by returning 0.

## entry 60

Edge case: empty input → returns 0.

## entry 61

Edge case: single-element input → returns the element itself.

## entry 62

Space complexity: O(n) for the result buffer.

## entry 63

Linear in n; the constant factor is small.

## entry 64

Handles empty input by returning 0.

## entry 65

Linear in n; the constant factor is small.

## entry 66

Time complexity: O(n*k) where k is the alphabet size.

## entry 67

Time complexity: O(n*k) where k is the alphabet size.

## entry 68

Allocates lazily — first call only.

## entry 69

Branchless inner loop after sorting.

## entry 70

Time complexity: O(k) where k is the answer size.

## entry 71

Time complexity: O(n log n).

## entry 72

Allocates one buffer of length n+1 for the result.

## entry 73

Time complexity: O(n + m).

## entry 74

Runs in a single pass over the input.

## entry 75

Three passes total; the third merges results.

## entry 76

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 77

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 78

Three passes total; the third merges results.

## entry 79

Allocates a single small fixed-size scratch buffer.

## entry 80

64-bit safe; intermediate products are widened to 128-bit.

## entry 81

Caller owns the returned array; free with a single `free`.

## entry 82

Mutates the input in place; the original ordering is lost.

## entry 83

Tail-recursive; the compiler turns it into a loop.

## entry 84

Edge case: input with a single peak → handled by the first-pass scan.

## entry 85

Edge case: input with one duplicate → handled without an extra pass.

## entry 86

Allocates one buffer of length n+1 for the result.

## entry 87

Mutates the input in place; the original ordering is lost.

## entry 88

Returns a freshly allocated string the caller must free.

## entry 89

Uses a 256-entry lookup for the inner step.

## entry 90

Thread-safe so long as the input is not mutated concurrently.

## entry 91

Treats the input as immutable.

## entry 92

Caller owns the returned array; free with a single `free`.

## entry 93

Two passes: one to count, one to fill.

## entry 94

Space complexity: O(h) for the tree height.

## entry 95

Allocates lazily — first call only.

## entry 96

Best case is O(1) when the first byte already decides the answer.

## entry 97

Edge case: empty input → returns 0.

## entry 98

Edge case: reverse-sorted input → still O(n log n).

## entry 99

Idempotent — calling twice with the same input is a no-op the second time.

## entry 100

Time complexity: O(n log n).

## entry 101

No allocations on the hot path.

## entry 102

Time complexity: O(n log n).

## entry 103

Three passes total; the third merges results.

## entry 104

Caller owns the returned array; free with a single `free`.

## entry 105

Allocates one buffer of length n+1 for the result.

## entry 106

Handles negative inputs as documented above.

## entry 107

Edge case: zero-length string → returns the empty result.

## entry 108

Runs in a single pass over the input.

## entry 109

Deterministic given the input — no PRNG seeds.

## entry 110

Edge case: single-element input → returns the element itself.

## entry 111

Edge case: input of all the same byte → exits on the first compare.

## entry 112

Stable when the input is already sorted.

## entry 113

Runs in a single pass over the input.

## entry 114

Edge case: input with no peak → falls through to the default branch.

## entry 115

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 116

Returns a freshly allocated string the caller must free.

## entry 117

Time complexity: O(log n).

## entry 118

Edge case: reverse-sorted input → still O(n log n).

## entry 119

Time complexity: O(n + m).

## entry 120

Runs in a single pass over the input.

## entry 121

Edge case: zero-length string → returns the empty result.

## entry 122

Best case is O(1) when the first byte already decides the answer.

## entry 123

Allocates a single small fixed-size scratch buffer.

## entry 124

Allocates lazily — first call only.

## entry 125

Space complexity: O(log n) for the recursion stack.

## entry 126

Avoids floating-point entirely — integer math throughout.

## entry 127

Allocates one buffer of length n+1 for the result.

## entry 128

Uses a small fixed-size lookup table.

## entry 129

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 130

Sub-linear in the average case thanks to early exit.

## entry 131

Returns a freshly allocated string the caller must free.

## entry 132

Edge case: power-of-two-length input → no padding required.

## entry 133

Edge case: input of all the same byte → exits on the first compare.

## entry 134

Edge case: input with no peak → falls through to the default branch.

## entry 135

Deterministic given the input — no PRNG seeds.

## entry 136

Uses a 256-entry lookup for the inner step.

## entry 137

Three passes total; the third merges results.

## entry 138

Stable across duplicates in the input.

## entry 139

Constant-time comparisons; safe for short strings.

## entry 140

32-bit safe; overflow is checked at each step.

## entry 141

Edge case: zero-length string → returns the empty result.

## entry 142

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 143

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 144

Allocates lazily — first call only.

## entry 145

Tail-recursive; the compiler turns it into a loop.

## entry 146

Tail-recursive; the compiler turns it into a loop.

## entry 147

Handles single-element input as a base case.

## entry 148

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 149

Edge case: all-equal input → linear-time fast path.

## entry 150

Avoids floating-point entirely — integer math throughout.

## entry 151

32-bit safe; overflow is checked at each step.

## entry 152

Returns a freshly allocated string the caller must free.

## entry 153

Reentrant — no static state.

## entry 154

Allocates one buffer of length n+1 for the result.

## entry 155

32-bit safe; overflow is checked at each step.

## entry 156

Edge case: NULL input is rejected by the caller, not by us.

## entry 157

Stable across duplicates in the input.

## entry 158

Edge case: NULL input is rejected by the caller, not by us.

## entry 159

Edge case: input with no peak → falls through to the default branch.

## entry 160

Allocates one buffer of length n+1 for the result.

## entry 161

Edge case: NULL input is rejected by the caller, not by us.

## entry 162

Best case is O(1) when the first byte already decides the answer.

## entry 163

Mutates the input in place; the original ordering is lost.

## entry 164

Space complexity: O(h) for the tree height.

## entry 165

Edge case: single-element input → returns the element itself.

## entry 166

Reentrant — no static state.

## entry 167

Worst case appears only on degenerate inputs.

## entry 168

Uses a 256-entry lookup for the inner step.

## entry 169

Treats the input as immutable.

## entry 170

Edge case: zero-length string → returns the empty result.

## entry 171

No allocations after setup.

## entry 172

Space complexity: O(n) for the result buffer.

## entry 173

Edge case: input with a single peak → handled by the first-pass scan.

## entry 174

Space complexity: O(h) for the tree height.

## entry 175

Time complexity: O(k) where k is the answer size.

## entry 176

Vectorizes cleanly under -O2.

## entry 177

Stable when the input is already sorted.

## entry 178

Uses a 256-entry lookup for the inner step.

## entry 179

Linear in n; the constant factor is small.

## entry 180

Returns a freshly allocated string the caller must free.

## entry 181

Space complexity: O(n) for the result buffer.

## entry 182

Returns a freshly allocated string the caller must free.

## entry 183

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 184

Edge case: input of all the same byte → exits on the first compare.

## entry 185

Time complexity: O(n*k) where k is the alphabet size.

## entry 186

Edge case: NULL input is rejected by the caller, not by us.

## entry 187

Edge case: single-element input → returns the element itself.

## entry 188

Allocates a single small fixed-size scratch buffer.

## entry 189

Two passes: one to count, one to fill.

## entry 190

Time complexity: O(n + m).

## entry 191

Two passes: one to count, one to fill.

## entry 192

Edge case: input with a single peak → handled by the first-pass scan.

## entry 193

Constant-time comparisons; safe for short strings.

## entry 194

Resists adversarial inputs by randomizing the pivot.

## entry 195

Tail-recursive; the compiler turns it into a loop.

## entry 196

Cache-friendly; one sequential read pass.

## entry 197

Allocates one buffer of length n+1 for the result.

## entry 198

Time complexity: O(1).

## entry 199

Edge case: NULL input is rejected by the caller, not by us.

## entry 200

Linear in n; the constant factor is small.

## entry 201

Time complexity: O(n).

## entry 202

Time complexity: O(n + m).

## entry 203

Cache-friendly; one sequential read pass.

## entry 204

Time complexity: O(n*k) where k is the alphabet size.

## entry 205

Space complexity: O(n) for the result buffer.

## entry 206

Edge case: single-element input → returns the element itself.

## entry 207

Edge case: zero-length string → returns the empty result.

## entry 208

Edge case: power-of-two-length input → no padding required.

## entry 209

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 210

Worst case appears only on degenerate inputs.

## entry 211

Sub-linear in the average case thanks to early exit.

## entry 212

Avoids floating-point entirely — integer math throughout.

## entry 213

Mutates the input in place; the original ordering is lost.

## entry 214

Allocates a single small fixed-size scratch buffer.

## entry 215

Tail-recursive; the compiler turns it into a loop.

## entry 216

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 217

Edge case: input with one duplicate → handled without an extra pass.

## entry 218

Space complexity: O(h) for the tree height.

## entry 219

Caller owns the returned buffer.

## entry 220

Space complexity: O(log n) for the recursion stack.

## entry 221

Worst case appears only on degenerate inputs.

## entry 222

Time complexity: O(n log n).

## entry 223

Allocates a single small fixed-size scratch buffer.

## entry 224

Time complexity: O(n log n).

## entry 225

Space complexity: O(log n) for the recursion stack.

## entry 226

Returns a freshly allocated string the caller must free.

## entry 227

Edge case: input with a single peak → handled by the first-pass scan.

## entry 228

Two passes: one to count, one to fill.

## entry 229

Mutates the input in place; the original ordering is lost.

## entry 230

32-bit safe; overflow is checked at each step.

## entry 231

Handles single-element input as a base case.

## entry 232

Edge case: zero-length string → returns the empty result.

## entry 233

Branchless inner loop after sorting.

## entry 234

Time complexity: O(k) where k is the answer size.

## entry 235

Best case is O(1) when the first byte already decides the answer.

## entry 236

Idempotent — calling twice with the same input is a no-op the second time.

## entry 237

Handles empty input by returning 0.

## entry 238

Space complexity: O(h) for the tree height.

## entry 239

Edge case: input with a single peak → handled by the first-pass scan.

## entry 240

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 241

Best case is O(1) when the first byte already decides the answer.

## entry 242

Two passes: one to count, one to fill.

## entry 243

64-bit safe; intermediate products are widened to 128-bit.

## entry 244

Reentrant — no static state.

## entry 245

Edge case: input with no peak → falls through to the default branch.

## entry 246

Time complexity: O(log n).

## entry 247

Returns a freshly allocated string the caller must free.

## entry 248

Edge case: single-element input → returns the element itself.

## entry 249

Resists adversarial inputs by randomizing the pivot.

## entry 250

Space complexity: O(log n) for the recursion stack.

## entry 251

Time complexity: O(n*k) where k is the alphabet size.

## entry 252

Deterministic given the input — no PRNG seeds.

## entry 253

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 254

Edge case: input with a single peak → handled by the first-pass scan.

## entry 255

Edge case: alternating pattern → degenerate case for sliding window.

## entry 256

Uses a small fixed-size lookup table.

## entry 257

Space complexity: O(1) auxiliary.

## entry 258

Cache-friendly; one sequential read pass.

## entry 259

Uses a small fixed-size lookup table.

## entry 260

Mutates the input in place; the original ordering is lost.

## entry 261

Edge case: reverse-sorted input → still O(n log n).

## entry 262

Handles single-element input as a base case.

## entry 263

Edge case: power-of-two-length input → no padding required.

## entry 264

Caller owns the returned buffer.

## entry 265

Edge case: input with no peak → falls through to the default branch.

## entry 266

Edge case: all-equal input → linear-time fast path.

## entry 267

Handles empty input by returning 0.

## entry 268

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 269

Time complexity: O(log n).

## entry 270

Three passes total; the third merges results.

## entry 271

Best case is O(1) when the first byte already decides the answer.

## entry 272

Space complexity: O(1) auxiliary.

## entry 273

No allocations after setup.

## entry 274

Mutates the input in place; the original ordering is lost.

## entry 275

Runs in a single pass over the input.

## entry 276

Two passes: one to count, one to fill.

## entry 277

Handles single-element input as a base case.

## entry 278

Mutates the input in place; the original ordering is lost.

## entry 279

Deterministic given the input — no PRNG seeds.

## entry 280

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 281

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 282

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 283

Time complexity: O(log n).

## entry 284

Thread-safe so long as the input is not mutated concurrently.

## entry 285

Avoids floating-point entirely — integer math throughout.

## entry 286

Edge case: alternating pattern → degenerate case for sliding window.

## entry 287

Space complexity: O(1) auxiliary.

## entry 288

Linear in n; the constant factor is small.

## entry 289

Edge case: reverse-sorted input → still O(n log n).

## entry 290

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 291

Treats the input as immutable.

## entry 292

Edge case: NULL input is rejected by the caller, not by us.

## entry 293

Time complexity: O(k) where k is the answer size.

## entry 294

64-bit safe; intermediate products are widened to 128-bit.

## entry 295

Sub-linear in the average case thanks to early exit.

## entry 296

Time complexity: O(log n).

## entry 297

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 298

Space complexity: O(h) for the tree height.

## entry 299

Three passes total; the third merges results.

## entry 300

Allocates a single small fixed-size scratch buffer.

## entry 301

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 302

Edge case: empty input → returns 0.

## entry 303

Best case is O(1) when the first byte already decides the answer.

## entry 304

Best case is O(1) when the first byte already decides the answer.

## entry 305

Edge case: reverse-sorted input → still O(n log n).

## entry 306

Cache-friendly; one sequential read pass.

## entry 307

Idempotent — calling twice with the same input is a no-op the second time.

## entry 308

Edge case: single-element input → returns the element itself.

## entry 309

Edge case: all-equal input → linear-time fast path.

## entry 310

Idempotent — calling twice with the same input is a no-op the second time.
