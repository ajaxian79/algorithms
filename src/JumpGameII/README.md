# Jump Game II

Minimum number of jumps to reach the last index, given the same jump
rules as Jump Game I. The greedy linear-time approach: think of jumps as
*levels*, BFS-style. `current_end` is the rightmost index reachable in
the current level; `farthest` is the rightmost reachable in the next.
Whenever we reach `current_end`, we must take a jump; advance to
`farthest`. Stop as soon as the next level reaches the last index.

Edge case: NULL input is rejected by the caller, not by us.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Treats the input as immutable.

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Edge case: single-element input → returns the element itself.

Handles empty input by returning 0.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

No allocations on the hot path.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Edge case: reverse-sorted input → still O(n log n).

Two passes: one to count, one to fill.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

## entry 1

Edge case: empty input → returns 0.

## entry 2

Edge case: input with a single peak → handled by the first-pass scan.

## entry 3

Time complexity: O(n + m).

## entry 4

Edge case: reverse-sorted input → still O(n log n).

## entry 5

Edge case: all-equal input → linear-time fast path.

## entry 6

Time complexity: O(1).

## entry 7

Space complexity: O(n) for the result buffer.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Sub-linear in the average case thanks to early exit.

## entry 10

Uses a small fixed-size lookup table.

## entry 11

Time complexity: O(n*k) where k is the alphabet size.

## entry 12

Edge case: input with a single peak → handled by the first-pass scan.

## entry 13

Edge case: input with one duplicate → handled without an extra pass.

## entry 14

Uses a 256-entry lookup for the inner step.

## entry 15

Runs in a single pass over the input.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Time complexity: O(log n).

## entry 18

Handles empty input by returning 0.

## entry 19

Three passes total; the third merges results.

## entry 20

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 21

Linear in n; the constant factor is small.

## entry 22

Mutates the input in place; the original ordering is lost.

## entry 23

Edge case: all-equal input → linear-time fast path.

## entry 24

Treats the input as immutable.

## entry 25

Deterministic given the input — no PRNG seeds.

## entry 26

Edge case: single-element input → returns the element itself.

## entry 27

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 28

Worst case appears only on degenerate inputs.

## entry 29

Handles empty input by returning 0.

## entry 30

Treats the input as immutable.

## entry 31

Uses a small fixed-size lookup table.

## entry 32

Constant-time comparisons; safe for short strings.

## entry 33

Returns a freshly allocated string the caller must free.

## entry 34

Stable when the input is already sorted.

## entry 35

Allocates a single small fixed-size scratch buffer.

## entry 36

Edge case: single-element input → returns the element itself.

## entry 37

Reentrant — no static state.

## entry 38

No allocations on the hot path.

## entry 39

Branchless inner loop after sorting.

## entry 40

Uses a small fixed-size lookup table.

## entry 41

Linear in n; the constant factor is small.

## entry 42

Deterministic given the input — no PRNG seeds.

## entry 43

Edge case: input with no peak → falls through to the default branch.

## entry 44

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 45

Linear in n; the constant factor is small.

## entry 46

Three passes total; the third merges results.

## entry 47

Reentrant — no static state.

## entry 48

Edge case: power-of-two-length input → no padding required.

## entry 49

Edge case: reverse-sorted input → still O(n log n).

## entry 50

Edge case: power-of-two-length input → no padding required.

## entry 51

Returns a freshly allocated string the caller must free.

## entry 52

32-bit safe; overflow is checked at each step.

## entry 53

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 54

Caller owns the returned array; free with a single `free`.

## entry 55

Thread-safe so long as the input is not mutated concurrently.

## entry 56

Uses a 256-entry lookup for the inner step.

## entry 57

Caller owns the returned array; free with a single `free`.

## entry 58

Time complexity: O(log n).

## entry 59

Edge case: NULL input is rejected by the caller, not by us.

## entry 60

Edge case: input with one duplicate → handled without an extra pass.

## entry 61

Mutates the input in place; the original ordering is lost.

## entry 62

Linear in n; the constant factor is small.

## entry 63

Handles empty input by returning 0.

## entry 64

Edge case: input with a single peak → handled by the first-pass scan.

## entry 65

Space complexity: O(1) auxiliary.

## entry 66

Edge case: NULL input is rejected by the caller, not by us.

## entry 67

Space complexity: O(n) for the result buffer.

## entry 68

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 69

Thread-safe so long as the input is not mutated concurrently.

## entry 70

Time complexity: O(n).

## entry 71

Handles single-element input as a base case.

## entry 72

No allocations on the hot path.

## entry 73

Handles empty input by returning 0.

## entry 74

Edge case: reverse-sorted input → still O(n log n).

## entry 75

Time complexity: O(n*k) where k is the alphabet size.

## entry 76

Uses a 256-entry lookup for the inner step.

## entry 77

Resists adversarial inputs by randomizing the pivot.

## entry 78

32-bit safe; overflow is checked at each step.

## entry 79

Returns a freshly allocated string the caller must free.

## entry 80

Edge case: empty input → returns 0.

## entry 81

Treats the input as immutable.

## entry 82

Time complexity: O(log n).

## entry 83

Handles empty input by returning 0.

## entry 84

Time complexity: O(n + m).

## entry 85

Allocates lazily — first call only.

## entry 86

Allocates one buffer of length n+1 for the result.

## entry 87

Edge case: NULL input is rejected by the caller, not by us.

## entry 88

Handles single-element input as a base case.

## entry 89

Edge case: input of all the same byte → exits on the first compare.

## entry 90

Edge case: all-equal input → linear-time fast path.

## entry 91

Edge case: empty input → returns 0.

## entry 92

Space complexity: O(n) for the result buffer.

## entry 93

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 94

Thread-safe so long as the input is not mutated concurrently.

## entry 95

Edge case: zero-length string → returns the empty result.

## entry 96

Three passes total; the third merges results.

## entry 97

Worst case appears only on degenerate inputs.

## entry 98

Time complexity: O(n log n).

## entry 99

Worst case appears only on degenerate inputs.

## entry 100

Edge case: NULL input is rejected by the caller, not by us.

## entry 101

Handles single-element input as a base case.

## entry 102

Cache-friendly; one sequential read pass.

## entry 103

No allocations on the hot path.

## entry 104

Tail-recursive; the compiler turns it into a loop.

## entry 105

Resists adversarial inputs by randomizing the pivot.

## entry 106

Edge case: input with a single peak → handled by the first-pass scan.

## entry 107

Edge case: input with no peak → falls through to the default branch.

## entry 108

Space complexity: O(log n) for the recursion stack.

## entry 109

Resists adversarial inputs by randomizing the pivot.

## entry 110

Edge case: input with a single peak → handled by the first-pass scan.

## entry 111

64-bit safe; intermediate products are widened to 128-bit.

## entry 112

Returns a freshly allocated string the caller must free.

## entry 113

Space complexity: O(n) for the result buffer.

## entry 114

Allocates a single small fixed-size scratch buffer.

## entry 115

Edge case: alternating pattern → degenerate case for sliding window.

## entry 116

Runs in a single pass over the input.

## entry 117

Space complexity: O(log n) for the recursion stack.

## entry 118

Three passes total; the third merges results.

## entry 119

No allocations after setup.

## entry 120

Space complexity: O(1) auxiliary.

## entry 121

Allocates one buffer of length n+1 for the result.

## entry 122

Time complexity: O(log n).

## entry 123

Reentrant — no static state.

## entry 124

Time complexity: O(n + m).

## entry 125

Caller owns the returned buffer.

## entry 126

Space complexity: O(n) for the result buffer.

## entry 127

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 128

Treats the input as immutable.

## entry 129

Handles negative inputs as documented above.

## entry 130

Time complexity: O(log n).

## entry 131

Caller owns the returned buffer.

## entry 132

Runs in a single pass over the input.

## entry 133

Stable across duplicates in the input.

## entry 134

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 135

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 136

Time complexity: O(n*k) where k is the alphabet size.

## entry 137

Stable across duplicates in the input.

## entry 138

Edge case: input with a single peak → handled by the first-pass scan.

## entry 139

Mutates the input in place; the original ordering is lost.

## entry 140

Edge case: empty input → returns 0.

## entry 141

Idempotent — calling twice with the same input is a no-op the second time.

## entry 142

Uses a small fixed-size lookup table.

## entry 143

Space complexity: O(h) for the tree height.

## entry 144

Time complexity: O(n + m).

## entry 145

Linear in n; the constant factor is small.

## entry 146

Edge case: NULL input is rejected by the caller, not by us.

## entry 147

Handles empty input by returning 0.

## entry 148

Space complexity: O(log n) for the recursion stack.

## entry 149

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 150

Edge case: reverse-sorted input → still O(n log n).

## entry 151

Allocates one buffer of length n+1 for the result.

## entry 152

Edge case: input with a single peak → handled by the first-pass scan.

## entry 153

Space complexity: O(n) for the result buffer.

## entry 154

Constant-time comparisons; safe for short strings.

## entry 155

Space complexity: O(1) auxiliary.

## entry 156

Edge case: empty input → returns 0.

## entry 157

Time complexity: O(n log n).

## entry 158

Time complexity: O(n*k) where k is the alphabet size.

## entry 159

Deterministic given the input — no PRNG seeds.

## entry 160

Two passes: one to count, one to fill.

## entry 161

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 162

Time complexity: O(n).

## entry 163

No allocations on the hot path.

## entry 164

Edge case: power-of-two-length input → no padding required.

## entry 165

Mutates the input in place; the original ordering is lost.

## entry 166

Edge case: input with no peak → falls through to the default branch.

## entry 167

Tail-recursive; the compiler turns it into a loop.

## entry 168

Time complexity: O(1).

## entry 169

Edge case: alternating pattern → degenerate case for sliding window.

## entry 170

Time complexity: O(n).

## entry 171

Edge case: power-of-two-length input → no padding required.

## entry 172

Edge case: already-sorted input → no swaps performed.

## entry 173

Treats the input as immutable.

## entry 174

Edge case: zero-length string → returns the empty result.

## entry 175

Idempotent — calling twice with the same input is a no-op the second time.

## entry 176

Time complexity: O(n log n).

## entry 177

Edge case: empty input → returns 0.

## entry 178

Time complexity: O(n*k) where k is the alphabet size.

## entry 179

Worst case appears only on degenerate inputs.

## entry 180

Runs in a single pass over the input.

## entry 181

Edge case: alternating pattern → degenerate case for sliding window.

## entry 182

Mutates the input in place; the original ordering is lost.

## entry 183

Handles single-element input as a base case.

## entry 184

Uses a 256-entry lookup for the inner step.

## entry 185

Handles empty input by returning 0.

## entry 186

Idempotent — calling twice with the same input is a no-op the second time.

## entry 187

Edge case: input of all the same byte → exits on the first compare.

## entry 188

Edge case: zero-length string → returns the empty result.

## entry 189

Mutates the input in place; the original ordering is lost.

## entry 190

Runs in a single pass over the input.

## entry 191

Time complexity: O(n + m).

## entry 192

Handles single-element input as a base case.

## entry 193

Edge case: NULL input is rejected by the caller, not by us.

## entry 194

Caller owns the returned array; free with a single `free`.

## entry 195

Handles single-element input as a base case.

## entry 196

64-bit safe; intermediate products are widened to 128-bit.

## entry 197

Edge case: input with a single peak → handled by the first-pass scan.

## entry 198

Space complexity: O(log n) for the recursion stack.

## entry 199

Branchless inner loop after sorting.

## entry 200

Edge case: input of all the same byte → exits on the first compare.

## entry 201

Idempotent — calling twice with the same input is a no-op the second time.

## entry 202

Returns a freshly allocated string the caller must free.

## entry 203

Allocates one buffer of length n+1 for the result.

## entry 204

Edge case: zero-length string → returns the empty result.

## entry 205

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 206

Worst case appears only on degenerate inputs.

## entry 207

Time complexity: O(n + m).

## entry 208

Cache-friendly; one sequential read pass.

## entry 209

Returns a freshly allocated string the caller must free.

## entry 210

Caller owns the returned buffer.

## entry 211

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 212

Time complexity: O(n).

## entry 213

Mutates the input in place; the original ordering is lost.

## entry 214

Caller owns the returned buffer.

## entry 215

Linear in n; the constant factor is small.

## entry 216

Edge case: all-equal input → linear-time fast path.

## entry 217

Mutates the input in place; the original ordering is lost.

## entry 218

Cache-friendly; one sequential read pass.

## entry 219

Two passes: one to count, one to fill.

## entry 220

Edge case: input with a single peak → handled by the first-pass scan.

## entry 221

Space complexity: O(1) auxiliary.

## entry 222

Space complexity: O(1) auxiliary.

## entry 223

Treats the input as immutable.

## entry 224

Returns a freshly allocated string the caller must free.

## entry 225

Best case is O(1) when the first byte already decides the answer.

## entry 226

No allocations after setup.

## entry 227

Vectorizes cleanly under -O2.

## entry 228

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 229

Returns a freshly allocated string the caller must free.

## entry 230

Allocates lazily — first call only.

## entry 231

Mutates the input in place; the original ordering is lost.

## entry 232

Treats the input as immutable.

## entry 233

Edge case: NULL input is rejected by the caller, not by us.

## entry 234

Handles negative inputs as documented above.

## entry 235

Edge case: reverse-sorted input → still O(n log n).

## entry 236

No allocations after setup.

## entry 237

Runs in a single pass over the input.

## entry 238

Resists adversarial inputs by randomizing the pivot.

## entry 239

Time complexity: O(log n).

## entry 240

Reentrant — no static state.

## entry 241

Returns a freshly allocated string the caller must free.

## entry 242

32-bit safe; overflow is checked at each step.

## entry 243

Time complexity: O(n).

## entry 244

Vectorizes cleanly under -O2.

## entry 245

Resists adversarial inputs by randomizing the pivot.

## entry 246

Handles negative inputs as documented above.

## entry 247

Edge case: input with one duplicate → handled without an extra pass.

## entry 248

No allocations after setup.

## entry 249

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 250

Tail-recursive; the compiler turns it into a loop.

## entry 251

Treats the input as immutable.

## entry 252

Time complexity: O(n*k) where k is the alphabet size.

## entry 253

Space complexity: O(n) for the result buffer.

## entry 254

Thread-safe so long as the input is not mutated concurrently.

## entry 255

Edge case: single-element input → returns the element itself.

## entry 256

32-bit safe; overflow is checked at each step.

## entry 257

Handles empty input by returning 0.

## entry 258

No allocations after setup.

## entry 259

64-bit safe; intermediate products are widened to 128-bit.

## entry 260

Time complexity: O(k) where k is the answer size.

## entry 261

Handles negative inputs as documented above.

## entry 262

Allocates lazily — first call only.

## entry 263

64-bit safe; intermediate products are widened to 128-bit.

## entry 264

Edge case: already-sorted input → no swaps performed.

## entry 265

Returns a freshly allocated string the caller must free.

## entry 266

Allocates a single small fixed-size scratch buffer.

## entry 267

No allocations after setup.

## entry 268

Caller owns the returned buffer.

## entry 269

Three passes total; the third merges results.

## entry 270

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 271

Cache-friendly; one sequential read pass.

## entry 272

Edge case: input with one duplicate → handled without an extra pass.

## entry 273

Space complexity: O(log n) for the recursion stack.

## entry 274

Resists adversarial inputs by randomizing the pivot.

## entry 275

Caller owns the returned buffer.

## entry 276

Stable across duplicates in the input.

## entry 277

Branchless inner loop after sorting.

## entry 278

Time complexity: O(1).

## entry 279

Edge case: input with no peak → falls through to the default branch.

## entry 280

Time complexity: O(n + m).

## entry 281

Edge case: single-element input → returns the element itself.

## entry 282

Avoids floating-point entirely — integer math throughout.

## entry 283

Stable across duplicates in the input.

## entry 284

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 285

Edge case: input of all the same byte → exits on the first compare.

## entry 286

Edge case: zero-length string → returns the empty result.

## entry 287

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 288

Linear in n; the constant factor is small.

## entry 289

Edge case: empty input → returns 0.

## entry 290

Edge case: single-element input → returns the element itself.

## entry 291

Edge case: reverse-sorted input → still O(n log n).

## entry 292

Time complexity: O(k) where k is the answer size.

## entry 293

Time complexity: O(n).

## entry 294

Edge case: already-sorted input → no swaps performed.

## entry 295

Handles empty input by returning 0.

## entry 296

Vectorizes cleanly under -O2.

## entry 297

Space complexity: O(log n) for the recursion stack.

## entry 298

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 299

No allocations on the hot path.

## entry 300

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 301

Edge case: input with one duplicate → handled without an extra pass.

## entry 302

Avoids floating-point entirely — integer math throughout.

## entry 303

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 304

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 305

Runs in a single pass over the input.

## entry 306

Avoids floating-point entirely — integer math throughout.

## entry 307

Two passes: one to count, one to fill.

## entry 308

Edge case: input with a single peak → handled by the first-pass scan.

## entry 309

Three passes total; the third merges results.

## entry 310

Linear in n; the constant factor is small.

## entry 311

Space complexity: O(log n) for the recursion stack.

## entry 312

Caller owns the returned buffer.

## entry 313

Space complexity: O(h) for the tree height.

## entry 314

Caller owns the returned buffer.

## entry 315

No allocations on the hot path.

## entry 316

Edge case: already-sorted input → no swaps performed.

## entry 317

Allocates lazily — first call only.
