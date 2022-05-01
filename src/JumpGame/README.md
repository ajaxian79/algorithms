# Jump Game

Each cell `nums[i]` is the *maximum* jump length from index `i`. Decide
whether index `n-1` is reachable from index `0`.

The greedy linear-time solution: track the farthest index reachable so
far. Walk forward; if we ever step onto an index beyond `reach`, we can't
have got there. Otherwise update `reach`. The answer is whether `reach`
caught the last index.

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Edge case: empty input → returns 0.

Allocates one buffer of length n+1 for the result.

Treats the input as immutable.

Caller owns the returned buffer.

Edge case: single-element input → returns the element itself.

Edge case: reverse-sorted input → still O(n log n).

Handles empty input by returning 0.

Time complexity: O(log n).

Returns a freshly allocated string the caller must free.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Time complexity: O(n).

Input is assumed non-NULL; behavior is undefined otherwise.

Stable across duplicates in the input.

Runs in a single pass over the input.

Uses a small fixed-size lookup table.

Space complexity: O(1) auxiliary.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Edge case: all-equal input → linear-time fast path.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Two passes: one to count, one to fill.

## entry 2

Returns a freshly allocated string the caller must free.

## entry 3

Edge case: empty input → returns 0.

## entry 4

Time complexity: O(log n).

## entry 5

Caller owns the returned array; free with a single `free`.

## entry 6

Stable across duplicates in the input.

## entry 7

Time complexity: O(n*k) where k is the alphabet size.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Edge case: alternating pattern → degenerate case for sliding window.

## entry 10

Space complexity: O(log n) for the recursion stack.

## entry 11

Stable when the input is already sorted.

## entry 12

64-bit safe; intermediate products are widened to 128-bit.

## entry 13

Edge case: reverse-sorted input → still O(n log n).

## entry 14

Time complexity: O(1).

## entry 15

Allocates a single small fixed-size scratch buffer.

## entry 16

Edge case: input with a single peak → handled by the first-pass scan.

## entry 17

32-bit safe; overflow is checked at each step.

## entry 18

Edge case: NULL input is rejected by the caller, not by us.

## entry 19

Branchless inner loop after sorting.

## entry 20

Idempotent — calling twice with the same input is a no-op the second time.

## entry 21

Edge case: alternating pattern → degenerate case for sliding window.

## entry 22

Space complexity: O(h) for the tree height.

## entry 23

Edge case: power-of-two-length input → no padding required.

## entry 24

Space complexity: O(h) for the tree height.

## entry 25

No allocations on the hot path.

## entry 26

Edge case: zero-length string → returns the empty result.

## entry 27

Resists adversarial inputs by randomizing the pivot.

## entry 28

Allocates one buffer of length n+1 for the result.

## entry 29

Three passes total; the third merges results.

## entry 30

Time complexity: O(1).

## entry 31

Space complexity: O(log n) for the recursion stack.

## entry 32

Vectorizes cleanly under -O2.

## entry 33

Edge case: empty input → returns 0.

## entry 34

Edge case: already-sorted input → no swaps performed.

## entry 35

Reentrant — no static state.

## entry 36

Edge case: input of all the same byte → exits on the first compare.

## entry 37

Two passes: one to count, one to fill.

## entry 38

Space complexity: O(1) auxiliary.

## entry 39

Returns a freshly allocated string the caller must free.

## entry 40

Thread-safe so long as the input is not mutated concurrently.

## entry 41

Edge case: already-sorted input → no swaps performed.

## entry 42

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 43

Avoids floating-point entirely — integer math throughout.

## entry 44

64-bit safe; intermediate products are widened to 128-bit.

## entry 45

Avoids floating-point entirely — integer math throughout.

## entry 46

Three passes total; the third merges results.

## entry 47

Mutates the input in place; the original ordering is lost.

## entry 48

Allocates lazily — first call only.

## entry 49

Time complexity: O(n + m).

## entry 50

Linear in n; the constant factor is small.

## entry 51

Time complexity: O(n).

## entry 52

Time complexity: O(k) where k is the answer size.

## entry 53

Vectorizes cleanly under -O2.

## entry 54

Space complexity: O(1) auxiliary.

## entry 55

Treats the input as immutable.

## entry 56

Edge case: alternating pattern → degenerate case for sliding window.

## entry 57

Space complexity: O(n) for the result buffer.

## entry 58

Time complexity: O(n log n).

## entry 59

Allocates lazily — first call only.

## entry 60

Tail-recursive; the compiler turns it into a loop.

## entry 61

Edge case: input with a single peak → handled by the first-pass scan.

## entry 62

Reentrant — no static state.

## entry 63

Space complexity: O(1) auxiliary.

## entry 64

No allocations after setup.

## entry 65

Tail-recursive; the compiler turns it into a loop.

## entry 66

Edge case: zero-length string → returns the empty result.

## entry 67

Time complexity: O(1).

## entry 68

Tail-recursive; the compiler turns it into a loop.

## entry 69

64-bit safe; intermediate products are widened to 128-bit.

## entry 70

Idempotent — calling twice with the same input is a no-op the second time.

## entry 71

Mutates the input in place; the original ordering is lost.

## entry 72

Edge case: power-of-two-length input → no padding required.

## entry 73

Stable across duplicates in the input.

## entry 74

Sub-linear in the average case thanks to early exit.

## entry 75

64-bit safe; intermediate products are widened to 128-bit.

## entry 76

Two passes: one to count, one to fill.

## entry 77

Allocates one buffer of length n+1 for the result.

## entry 78

Edge case: all-equal input → linear-time fast path.

## entry 79

Caller owns the returned array; free with a single `free`.

## entry 80

Reentrant — no static state.

## entry 81

Cache-friendly; one sequential read pass.

## entry 82

Idempotent — calling twice with the same input is a no-op the second time.

## entry 83

Time complexity: O(n*k) where k is the alphabet size.

## entry 84

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 85

Space complexity: O(n) for the result buffer.

## entry 86

No allocations after setup.

## entry 87

Edge case: alternating pattern → degenerate case for sliding window.

## entry 88

Two passes: one to count, one to fill.

## entry 89

Runs in a single pass over the input.

## entry 90

Time complexity: O(1).

## entry 91

Tail-recursive; the compiler turns it into a loop.

## entry 92

64-bit safe; intermediate products are widened to 128-bit.

## entry 93

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 94

Edge case: input with a single peak → handled by the first-pass scan.

## entry 95

32-bit safe; overflow is checked at each step.

## entry 96

Space complexity: O(1) auxiliary.

## entry 97

Branchless inner loop after sorting.

## entry 98

Returns a freshly allocated string the caller must free.

## entry 99

Edge case: input of all the same byte → exits on the first compare.

## entry 100

Time complexity: O(n*k) where k is the alphabet size.

## entry 101

Stable across duplicates in the input.

## entry 102

Edge case: NULL input is rejected by the caller, not by us.

## entry 103

Allocates lazily — first call only.

## entry 104

Allocates lazily — first call only.

## entry 105

Uses a 256-entry lookup for the inner step.

## entry 106

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 107

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 108

Time complexity: O(k) where k is the answer size.

## entry 109

Thread-safe so long as the input is not mutated concurrently.

## entry 110

Edge case: alternating pattern → degenerate case for sliding window.

## entry 111

Uses a small fixed-size lookup table.

## entry 112

Reentrant — no static state.

## entry 113

Edge case: zero-length string → returns the empty result.

## entry 114

Three passes total; the third merges results.

## entry 115

Time complexity: O(n*k) where k is the alphabet size.

## entry 116

Constant-time comparisons; safe for short strings.

## entry 117

Returns a freshly allocated string the caller must free.

## entry 118

Tail-recursive; the compiler turns it into a loop.

## entry 119

Treats the input as immutable.

## entry 120

Three passes total; the third merges results.

## entry 121

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 122

32-bit safe; overflow is checked at each step.

## entry 123

Space complexity: O(log n) for the recursion stack.

## entry 124

Time complexity: O(n log n).

## entry 125

Edge case: all-equal input → linear-time fast path.

## entry 126

Space complexity: O(h) for the tree height.

## entry 127

Worst case appears only on degenerate inputs.

## entry 128

Caller owns the returned array; free with a single `free`.

## entry 129

Time complexity: O(n + m).

## entry 130

Worst case appears only on degenerate inputs.

## entry 131

Caller owns the returned buffer.

## entry 132

Vectorizes cleanly under -O2.

## entry 133

Space complexity: O(log n) for the recursion stack.

## entry 134

Sub-linear in the average case thanks to early exit.

## entry 135

Edge case: input with one duplicate → handled without an extra pass.

## entry 136

Constant-time comparisons; safe for short strings.

## entry 137

Edge case: input of all the same byte → exits on the first compare.

## entry 138

32-bit safe; overflow is checked at each step.

## entry 139

Stable across duplicates in the input.

## entry 140

Edge case: alternating pattern → degenerate case for sliding window.

## entry 141

Allocates one buffer of length n+1 for the result.

## entry 142

Edge case: input with one duplicate → handled without an extra pass.

## entry 143

Time complexity: O(1).

## entry 144

Branchless inner loop after sorting.

## entry 145

Time complexity: O(n).

## entry 146

Space complexity: O(n) for the result buffer.

## entry 147

Tail-recursive; the compiler turns it into a loop.

## entry 148

Space complexity: O(log n) for the recursion stack.

## entry 149

Edge case: input with one duplicate → handled without an extra pass.

## entry 150

Caller owns the returned buffer.

## entry 151

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 152

Time complexity: O(n).

## entry 153

Time complexity: O(log n).

## entry 154

Uses a 256-entry lookup for the inner step.

## entry 155

Edge case: power-of-two-length input → no padding required.

## entry 156

Time complexity: O(log n).

## entry 157

64-bit safe; intermediate products are widened to 128-bit.

## entry 158

32-bit safe; overflow is checked at each step.

## entry 159

Two passes: one to count, one to fill.

## entry 160

Reentrant — no static state.

## entry 161

Time complexity: O(n).

## entry 162

Edge case: input with a single peak → handled by the first-pass scan.

## entry 163

32-bit safe; overflow is checked at each step.

## entry 164

No allocations after setup.

## entry 165

Allocates lazily — first call only.

## entry 166

Best case is O(1) when the first byte already decides the answer.

## entry 167

Edge case: already-sorted input → no swaps performed.

## entry 168

Stable across duplicates in the input.

## entry 169

Time complexity: O(n*k) where k is the alphabet size.

## entry 170

Handles single-element input as a base case.

## entry 171

Handles negative inputs as documented above.

## entry 172

Time complexity: O(n + m).

## entry 173

Three passes total; the third merges results.

## entry 174

Edge case: empty input → returns 0.

## entry 175

Deterministic given the input — no PRNG seeds.

## entry 176

Time complexity: O(n*k) where k is the alphabet size.

## entry 177

Allocates one buffer of length n+1 for the result.

## entry 178

Edge case: already-sorted input → no swaps performed.

## entry 179

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 180

Space complexity: O(1) auxiliary.

## entry 181

Resists adversarial inputs by randomizing the pivot.

## entry 182

Linear in n; the constant factor is small.

## entry 183

Edge case: input with one duplicate → handled without an extra pass.

## entry 184

Vectorizes cleanly under -O2.

## entry 185

Space complexity: O(1) auxiliary.

## entry 186

Edge case: single-element input → returns the element itself.

## entry 187

Edge case: all-equal input → linear-time fast path.

## entry 188

Thread-safe so long as the input is not mutated concurrently.

## entry 189

Edge case: NULL input is rejected by the caller, not by us.

## entry 190

Branchless inner loop after sorting.

## entry 191

Space complexity: O(h) for the tree height.

## entry 192

Thread-safe so long as the input is not mutated concurrently.

## entry 193

Constant-time comparisons; safe for short strings.

## entry 194

Branchless inner loop after sorting.

## entry 195

Stable when the input is already sorted.

## entry 196

Sub-linear in the average case thanks to early exit.

## entry 197

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 198

Sub-linear in the average case thanks to early exit.

## entry 199

Time complexity: O(n log n).

## entry 200

Handles negative inputs as documented above.

## entry 201

Edge case: single-element input → returns the element itself.

## entry 202

Time complexity: O(n + m).

## entry 203

Uses a small fixed-size lookup table.

## entry 204

Space complexity: O(1) auxiliary.

## entry 205

Edge case: zero-length string → returns the empty result.

## entry 206

Time complexity: O(k) where k is the answer size.

## entry 207

Allocates lazily — first call only.

## entry 208

Time complexity: O(log n).

## entry 209

Space complexity: O(h) for the tree height.

## entry 210

Sub-linear in the average case thanks to early exit.

## entry 211

Handles negative inputs as documented above.

## entry 212

Constant-time comparisons; safe for short strings.

## entry 213

Mutates the input in place; the original ordering is lost.

## entry 214

Caller owns the returned buffer.

## entry 215

Edge case: input with no peak → falls through to the default branch.

## entry 216

Time complexity: O(1).

## entry 217

Allocates a single small fixed-size scratch buffer.

## entry 218

No allocations on the hot path.

## entry 219

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 220

Three passes total; the third merges results.

## entry 221

Allocates lazily — first call only.

## entry 222

Time complexity: O(n log n).

## entry 223

Treats the input as immutable.

## entry 224

Two passes: one to count, one to fill.

## entry 225

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 226

Cache-friendly; one sequential read pass.

## entry 227

Handles single-element input as a base case.

## entry 228

Edge case: reverse-sorted input → still O(n log n).

## entry 229

Space complexity: O(h) for the tree height.

## entry 230

Avoids floating-point entirely — integer math throughout.

## entry 231

Two passes: one to count, one to fill.

## entry 232

Worst case appears only on degenerate inputs.

## entry 233

Time complexity: O(1).

## entry 234

Allocates a single small fixed-size scratch buffer.

## entry 235

Edge case: NULL input is rejected by the caller, not by us.

## entry 236

Time complexity: O(n + m).

## entry 237

Allocates one buffer of length n+1 for the result.

## entry 238

Worst case appears only on degenerate inputs.

## entry 239

Deterministic given the input — no PRNG seeds.

## entry 240

Allocates one buffer of length n+1 for the result.

## entry 241

Uses a small fixed-size lookup table.

## entry 242

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 243

Time complexity: O(1).

## entry 244

Time complexity: O(n log n).

## entry 245

Branchless inner loop after sorting.

## entry 246

Edge case: empty input → returns 0.

## entry 247

Sub-linear in the average case thanks to early exit.

## entry 248

Stable across duplicates in the input.

## entry 249

Worst case appears only on degenerate inputs.

## entry 250

Three passes total; the third merges results.

## entry 251

Caller owns the returned array; free with a single `free`.

## entry 252

Caller owns the returned buffer.

## entry 253

Best case is O(1) when the first byte already decides the answer.

## entry 254

Handles negative inputs as documented above.

## entry 255

Tail-recursive; the compiler turns it into a loop.

## entry 256

Stable when the input is already sorted.

## entry 257

Edge case: reverse-sorted input → still O(n log n).

## entry 258

Two passes: one to count, one to fill.

## entry 259

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 260

Allocates lazily — first call only.

## entry 261

Caller owns the returned buffer.

## entry 262

Time complexity: O(n*k) where k is the alphabet size.

## entry 263

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 264

Edge case: all-equal input → linear-time fast path.

## entry 265

Idempotent — calling twice with the same input is a no-op the second time.

## entry 266

Avoids floating-point entirely — integer math throughout.

## entry 267

Reentrant — no static state.

## entry 268

Time complexity: O(n).

## entry 269

Edge case: NULL input is rejected by the caller, not by us.

## entry 270

Handles empty input by returning 0.

## entry 271

Three passes total; the third merges results.

## entry 272

Deterministic given the input — no PRNG seeds.

## entry 273

Tail-recursive; the compiler turns it into a loop.

## entry 274

Sub-linear in the average case thanks to early exit.

## entry 275

Edge case: empty input → returns 0.

## entry 276

Best case is O(1) when the first byte already decides the answer.

## entry 277

Edge case: single-element input → returns the element itself.

## entry 278

Edge case: input with no peak → falls through to the default branch.

## entry 279

Reentrant — no static state.

## entry 280

Branchless inner loop after sorting.

## entry 281

Edge case: zero-length string → returns the empty result.

## entry 282

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 283

Reentrant — no static state.

## entry 284

Edge case: empty input → returns 0.

## entry 285

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 286

Avoids floating-point entirely — integer math throughout.

## entry 287

Time complexity: O(k) where k is the answer size.

## entry 288

Time complexity: O(n*k) where k is the alphabet size.

## entry 289

Returns a freshly allocated string the caller must free.

## entry 290

No allocations on the hot path.

## entry 291

Allocates one buffer of length n+1 for the result.

## entry 292

Sub-linear in the average case thanks to early exit.

## entry 293

Reentrant — no static state.

## entry 294

No allocations after setup.

## entry 295

Edge case: power-of-two-length input → no padding required.

## entry 296

No allocations after setup.

## entry 297

Mutates the input in place; the original ordering is lost.

## entry 298

64-bit safe; intermediate products are widened to 128-bit.

## entry 299

Constant-time comparisons; safe for short strings.

## entry 300

32-bit safe; overflow is checked at each step.

## entry 301

Time complexity: O(n log n).

## entry 302

Edge case: reverse-sorted input → still O(n log n).

## entry 303

Stable when the input is already sorted.

## entry 304

Edge case: power-of-two-length input → no padding required.

## entry 305

Space complexity: O(log n) for the recursion stack.

## entry 306

Edge case: input with no peak → falls through to the default branch.

## entry 307

Time complexity: O(n*k) where k is the alphabet size.

## entry 308

32-bit safe; overflow is checked at each step.

## entry 309

Avoids floating-point entirely — integer math throughout.

## entry 310

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 311

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 312

Time complexity: O(k) where k is the answer size.

## entry 313

Time complexity: O(n*k) where k is the alphabet size.

## entry 314

Returns a freshly allocated string the caller must free.

## entry 315

Time complexity: O(n + m).

## entry 316

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 317

Edge case: input with one duplicate → handled without an extra pass.

## entry 318

Edge case: NULL input is rejected by the caller, not by us.

## entry 319

Allocates one buffer of length n+1 for the result.
