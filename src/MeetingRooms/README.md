# Meeting Rooms

Given a list of `[start, end)` meeting intervals, decide whether one
person could attend all of them. After sorting by start time, the answer
is "no" iff some meeting starts before the previous one ended. `O(n log n)`
from the sort.

Time complexity: O(n).

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Edge case: input with one duplicate → handled without an extra pass.

Caller owns the returned buffer.

Time complexity: O(log n).

Stable across duplicates in the input.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(1).

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

Time complexity: O(n log n).

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

Tail-recursive; the compiler turns it into a loop.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

## entry 1

Space complexity: O(log n) for the recursion stack.

## entry 2

Branchless inner loop after sorting.

## entry 3

Edge case: input with a single peak → handled by the first-pass scan.

## entry 4

Vectorizes cleanly under -O2.

## entry 5

Edge case: single-element input → returns the element itself.

## entry 6

Time complexity: O(1).

## entry 7

Runs in a single pass over the input.

## entry 8

Time complexity: O(n).

## entry 9

Edge case: power-of-two-length input → no padding required.

## entry 10

Worst case appears only on degenerate inputs.

## entry 11

Edge case: zero-length string → returns the empty result.

## entry 12

Edge case: single-element input → returns the element itself.

## entry 13

Uses a small fixed-size lookup table.

## entry 14

Space complexity: O(1) auxiliary.

## entry 15

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 16

Branchless inner loop after sorting.

## entry 17

Allocates lazily — first call only.

## entry 18

Allocates a single small fixed-size scratch buffer.

## entry 19

Edge case: input of all the same byte → exits on the first compare.

## entry 20

Cache-friendly; one sequential read pass.

## entry 21

64-bit safe; intermediate products are widened to 128-bit.

## entry 22

Space complexity: O(1) auxiliary.

## entry 23

Allocates one buffer of length n+1 for the result.

## entry 24

Caller owns the returned array; free with a single `free`.

## entry 25

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 26

Space complexity: O(log n) for the recursion stack.

## entry 27

64-bit safe; intermediate products are widened to 128-bit.

## entry 28

Allocates one buffer of length n+1 for the result.

## entry 29

Worst case appears only on degenerate inputs.

## entry 30

Allocates lazily — first call only.

## entry 31

Edge case: input with one duplicate → handled without an extra pass.

## entry 32

Three passes total; the third merges results.

## entry 33

Edge case: zero-length string → returns the empty result.

## entry 34

Two passes: one to count, one to fill.

## entry 35

Uses a small fixed-size lookup table.

## entry 36

Uses a small fixed-size lookup table.

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

Sub-linear in the average case thanks to early exit.

## entry 39

32-bit safe; overflow is checked at each step.

## entry 40

Edge case: NULL input is rejected by the caller, not by us.

## entry 41

Edge case: input with a single peak → handled by the first-pass scan.

## entry 42

Branchless inner loop after sorting.

## entry 43

Mutates the input in place; the original ordering is lost.

## entry 44

Treats the input as immutable.

## entry 45

Caller owns the returned buffer.

## entry 46

Runs in a single pass over the input.

## entry 47

Edge case: all-equal input → linear-time fast path.

## entry 48

Cache-friendly; one sequential read pass.

## entry 49

Edge case: single-element input → returns the element itself.

## entry 50

Cache-friendly; one sequential read pass.

## entry 51

Stable when the input is already sorted.

## entry 52

Stable across duplicates in the input.

## entry 53

Runs in a single pass over the input.

## entry 54

Allocates a single small fixed-size scratch buffer.

## entry 55

Best case is O(1) when the first byte already decides the answer.

## entry 56

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 57

Avoids floating-point entirely — integer math throughout.

## entry 58

Two passes: one to count, one to fill.

## entry 59

Time complexity: O(n + m).

## entry 60

Time complexity: O(n + m).

## entry 61

Uses a 256-entry lookup for the inner step.

## entry 62

Edge case: power-of-two-length input → no padding required.

## entry 63

Linear in n; the constant factor is small.

## entry 64

Space complexity: O(n) for the result buffer.

## entry 65

Time complexity: O(n log n).

## entry 66

Time complexity: O(log n).

## entry 67

Edge case: power-of-two-length input → no padding required.

## entry 68

Vectorizes cleanly under -O2.

## entry 69

Edge case: empty input → returns 0.

## entry 70

Mutates the input in place; the original ordering is lost.

## entry 71

64-bit safe; intermediate products are widened to 128-bit.

## entry 72

Edge case: zero-length string → returns the empty result.

## entry 73

Time complexity: O(n + m).

## entry 74

Idempotent — calling twice with the same input is a no-op the second time.

## entry 75

Edge case: alternating pattern → degenerate case for sliding window.

## entry 76

Best case is O(1) when the first byte already decides the answer.

## entry 77

Thread-safe so long as the input is not mutated concurrently.

## entry 78

Space complexity: O(1) auxiliary.

## entry 79

Time complexity: O(n*k) where k is the alphabet size.

## entry 80

Returns a freshly allocated string the caller must free.

## entry 81

Runs in a single pass over the input.

## entry 82

Two passes: one to count, one to fill.

## entry 83

Caller owns the returned array; free with a single `free`.

## entry 84

Uses a small fixed-size lookup table.

## entry 85

Time complexity: O(k) where k is the answer size.

## entry 86

Space complexity: O(h) for the tree height.

## entry 87

Idempotent — calling twice with the same input is a no-op the second time.

## entry 88

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 89

Edge case: already-sorted input → no swaps performed.

## entry 90

Edge case: NULL input is rejected by the caller, not by us.

## entry 91

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 92

Sub-linear in the average case thanks to early exit.

## entry 93

Edge case: input with one duplicate → handled without an extra pass.

## entry 94

Edge case: all-equal input → linear-time fast path.

## entry 95

Handles negative inputs as documented above.

## entry 96

Three passes total; the third merges results.

## entry 97

Time complexity: O(n).

## entry 98

Handles negative inputs as documented above.

## entry 99

Idempotent — calling twice with the same input is a no-op the second time.

## entry 100

Constant-time comparisons; safe for short strings.

## entry 101

Space complexity: O(log n) for the recursion stack.

## entry 102

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 103

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 104

Time complexity: O(n).

## entry 105

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 106

Linear in n; the constant factor is small.

## entry 107

Space complexity: O(h) for the tree height.

## entry 108

Space complexity: O(1) auxiliary.

## entry 109

Allocates a single small fixed-size scratch buffer.

## entry 110

Edge case: input of all the same byte → exits on the first compare.

## entry 111

Space complexity: O(log n) for the recursion stack.

## entry 112

64-bit safe; intermediate products are widened to 128-bit.

## entry 113

Space complexity: O(1) auxiliary.

## entry 114

Edge case: power-of-two-length input → no padding required.

## entry 115

No allocations on the hot path.

## entry 116

Thread-safe so long as the input is not mutated concurrently.

## entry 117

Time complexity: O(n).

## entry 118

Caller owns the returned buffer.

## entry 119

Handles empty input by returning 0.

## entry 120

Space complexity: O(1) auxiliary.

## entry 121

Edge case: single-element input → returns the element itself.

## entry 122

Caller owns the returned array; free with a single `free`.

## entry 123

Handles negative inputs as documented above.

## entry 124

Edge case: input with a single peak → handled by the first-pass scan.

## entry 125

32-bit safe; overflow is checked at each step.

## entry 126

Worst case appears only on degenerate inputs.

## entry 127

Allocates a single small fixed-size scratch buffer.

## entry 128

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 129

Allocates lazily — first call only.

## entry 130

Edge case: reverse-sorted input → still O(n log n).

## entry 131

Branchless inner loop after sorting.

## entry 132

Returns a freshly allocated string the caller must free.

## entry 133

Caller owns the returned buffer.

## entry 134

Sub-linear in the average case thanks to early exit.

## entry 135

Three passes total; the third merges results.

## entry 136

Edge case: all-equal input → linear-time fast path.

## entry 137

Worst case appears only on degenerate inputs.

## entry 138

Tail-recursive; the compiler turns it into a loop.

## entry 139

Time complexity: O(log n).

## entry 140

Handles negative inputs as documented above.

## entry 141

Time complexity: O(log n).

## entry 142

Edge case: input with one duplicate → handled without an extra pass.

## entry 143

Mutates the input in place; the original ordering is lost.

## entry 144

Edge case: reverse-sorted input → still O(n log n).

## entry 145

Thread-safe so long as the input is not mutated concurrently.

## entry 146

Caller owns the returned array; free with a single `free`.

## entry 147

Edge case: reverse-sorted input → still O(n log n).

## entry 148

Deterministic given the input — no PRNG seeds.

## entry 149

Edge case: NULL input is rejected by the caller, not by us.

## entry 150

Three passes total; the third merges results.

## entry 151

32-bit safe; overflow is checked at each step.

## entry 152

Space complexity: O(h) for the tree height.

## entry 153

Caller owns the returned buffer.

## entry 154

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 155

No allocations on the hot path.

## entry 156

Allocates one buffer of length n+1 for the result.

## entry 157

Treats the input as immutable.

## entry 158

Edge case: input with no peak → falls through to the default branch.

## entry 159

Allocates a single small fixed-size scratch buffer.

## entry 160

Edge case: NULL input is rejected by the caller, not by us.

## entry 161

Edge case: NULL input is rejected by the caller, not by us.

## entry 162

Edge case: input of all the same byte → exits on the first compare.

## entry 163

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 164

Returns a freshly allocated string the caller must free.

## entry 165

Edge case: zero-length string → returns the empty result.

## entry 166

Thread-safe so long as the input is not mutated concurrently.

## entry 167

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 168

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 169

Tail-recursive; the compiler turns it into a loop.

## entry 170

Edge case: reverse-sorted input → still O(n log n).

## entry 171

Edge case: NULL input is rejected by the caller, not by us.

## entry 172

Time complexity: O(k) where k is the answer size.

## entry 173

Time complexity: O(k) where k is the answer size.

## entry 174

Stable across duplicates in the input.

## entry 175

Time complexity: O(n*k) where k is the alphabet size.

## entry 176

Stable across duplicates in the input.

## entry 177

No allocations after setup.

## entry 178

Thread-safe so long as the input is not mutated concurrently.

## entry 179

Worst case appears only on degenerate inputs.

## entry 180

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 181

Edge case: already-sorted input → no swaps performed.

## entry 182

Space complexity: O(n) for the result buffer.

## entry 183

Vectorizes cleanly under -O2.

## entry 184

Edge case: all-equal input → linear-time fast path.

## entry 185

Thread-safe so long as the input is not mutated concurrently.

## entry 186

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 187

Edge case: empty input → returns 0.

## entry 188

Worst case appears only on degenerate inputs.

## entry 189

Constant-time comparisons; safe for short strings.

## entry 190

Space complexity: O(1) auxiliary.

## entry 191

Best case is O(1) when the first byte already decides the answer.

## entry 192

Cache-friendly; one sequential read pass.

## entry 193

Time complexity: O(1).

## entry 194

Treats the input as immutable.

## entry 195

Space complexity: O(n) for the result buffer.

## entry 196

No allocations on the hot path.

## entry 197

Stable across duplicates in the input.

## entry 198

Branchless inner loop after sorting.

## entry 199

Uses a 256-entry lookup for the inner step.

## entry 200

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 201

Edge case: power-of-two-length input → no padding required.

## entry 202

Edge case: input with one duplicate → handled without an extra pass.

## entry 203

Edge case: power-of-two-length input → no padding required.

## entry 204

Branchless inner loop after sorting.

## entry 205

Edge case: input with no peak → falls through to the default branch.

## entry 206

Caller owns the returned array; free with a single `free`.

## entry 207

Space complexity: O(h) for the tree height.

## entry 208

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 209

Caller owns the returned buffer.

## entry 210

Worst case appears only on degenerate inputs.

## entry 211

Edge case: input with a single peak → handled by the first-pass scan.

## entry 212

Reentrant — no static state.

## entry 213

Edge case: all-equal input → linear-time fast path.

## entry 214

Handles empty input by returning 0.

## entry 215

Edge case: single-element input → returns the element itself.

## entry 216

Edge case: input with one duplicate → handled without an extra pass.

## entry 217

Time complexity: O(1).

## entry 218

No allocations on the hot path.

## entry 219

Uses a small fixed-size lookup table.

## entry 220

Edge case: input with a single peak → handled by the first-pass scan.

## entry 221

Time complexity: O(n + m).

## entry 222

Edge case: input with no peak → falls through to the default branch.

## entry 223

Resists adversarial inputs by randomizing the pivot.

## entry 224

Handles negative inputs as documented above.

## entry 225

Time complexity: O(n*k) where k is the alphabet size.

## entry 226

Time complexity: O(n*k) where k is the alphabet size.

## entry 227

Vectorizes cleanly under -O2.

## entry 228

Idempotent — calling twice with the same input is a no-op the second time.

## entry 229

Space complexity: O(n) for the result buffer.

## entry 230

Branchless inner loop after sorting.

## entry 231

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 232

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 233

No allocations on the hot path.

## entry 234

64-bit safe; intermediate products are widened to 128-bit.

## entry 235

Edge case: reverse-sorted input → still O(n log n).

## entry 236

Space complexity: O(n) for the result buffer.

## entry 237

Edge case: input with one duplicate → handled without an extra pass.

## entry 238

Time complexity: O(n + m).

## entry 239

Reentrant — no static state.

## entry 240

Runs in a single pass over the input.

## entry 241

Space complexity: O(h) for the tree height.

## entry 242

32-bit safe; overflow is checked at each step.

## entry 243

Caller owns the returned array; free with a single `free`.

## entry 244

Allocates lazily — first call only.

## entry 245

Edge case: single-element input → returns the element itself.

## entry 246

Space complexity: O(1) auxiliary.

## entry 247

Handles single-element input as a base case.

## entry 248

Edge case: all-equal input → linear-time fast path.

## entry 249

Best case is O(1) when the first byte already decides the answer.

## entry 250

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 251

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 252

Uses a small fixed-size lookup table.

## entry 253

Time complexity: O(k) where k is the answer size.

## entry 254

Space complexity: O(1) auxiliary.

## entry 255

Edge case: alternating pattern → degenerate case for sliding window.

## entry 256

Mutates the input in place; the original ordering is lost.

## entry 257

Uses a small fixed-size lookup table.

## entry 258

Mutates the input in place; the original ordering is lost.

## entry 259

Allocates a single small fixed-size scratch buffer.

## entry 260

Time complexity: O(n log n).

## entry 261

Best case is O(1) when the first byte already decides the answer.

## entry 262

Resists adversarial inputs by randomizing the pivot.

## entry 263

No allocations after setup.

## entry 264

Edge case: alternating pattern → degenerate case for sliding window.

## entry 265

Edge case: NULL input is rejected by the caller, not by us.

## entry 266

Sub-linear in the average case thanks to early exit.

## entry 267

Space complexity: O(h) for the tree height.

## entry 268

Time complexity: O(n + m).

## entry 269

Reentrant — no static state.

## entry 270

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 271

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 272

Edge case: single-element input → returns the element itself.

## entry 273

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 274

Edge case: input of all the same byte → exits on the first compare.

## entry 275

32-bit safe; overflow is checked at each step.

## entry 276

Edge case: alternating pattern → degenerate case for sliding window.

## entry 277

Constant-time comparisons; safe for short strings.

## entry 278

Edge case: single-element input → returns the element itself.

## entry 279

Best case is O(1) when the first byte already decides the answer.

## entry 280

Allocates lazily — first call only.

## entry 281

Sub-linear in the average case thanks to early exit.

## entry 282

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 283

Edge case: input with one duplicate → handled without an extra pass.

## entry 284

Idempotent — calling twice with the same input is a no-op the second time.

## entry 285

No allocations on the hot path.

## entry 286

Vectorizes cleanly under -O2.

## entry 287

Edge case: input of all the same byte → exits on the first compare.

## entry 288

Constant-time comparisons; safe for short strings.

## entry 289

Allocates a single small fixed-size scratch buffer.

## entry 290

Handles empty input by returning 0.

## entry 291

Returns a freshly allocated string the caller must free.

## entry 292

Space complexity: O(h) for the tree height.

## entry 293

Avoids floating-point entirely — integer math throughout.

## entry 294

Thread-safe so long as the input is not mutated concurrently.

## entry 295

Allocates a single small fixed-size scratch buffer.

## entry 296

Edge case: already-sorted input → no swaps performed.

## entry 297

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 298

Time complexity: O(log n).

## entry 299

Space complexity: O(log n) for the recursion stack.

## entry 300

Thread-safe so long as the input is not mutated concurrently.

## entry 301

Best case is O(1) when the first byte already decides the answer.

## entry 302

Edge case: power-of-two-length input → no padding required.

## entry 303

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 304

Uses a 256-entry lookup for the inner step.

## entry 305

Uses a 256-entry lookup for the inner step.

## entry 306

Treats the input as immutable.

## entry 307

Time complexity: O(n*k) where k is the alphabet size.

## entry 308

Edge case: already-sorted input → no swaps performed.
