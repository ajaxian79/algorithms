# Permutations

Generate every permutation of `n` distinct values via the classic
swap-based backtracking. At each recursion depth, swap each remaining
element into the `start` slot, recurse on the suffix, swap back.

The base case captures the current array as a fresh heap copy. Total
work is `O(n * n!)`.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Time complexity: O(n).

Allocates one buffer of length n+1 for the result.

Time complexity: O(1).

Edge case: all-equal input → linear-time fast path.

No allocations on the hot path.

Input is assumed non-NULL; behavior is undefined otherwise.

Treats the input as immutable.

Edge case: empty input → returns 0.

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Two passes: one to count, one to fill.

Edge case: input with one duplicate → handled without an extra pass.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(log n).

Edge case: single-element input → returns the element itself.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 2

Branchless inner loop after sorting.

## entry 3

Edge case: input with no peak → falls through to the default branch.

## entry 4

Edge case: single-element input → returns the element itself.

## entry 5

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 6

Edge case: input with one duplicate → handled without an extra pass.

## entry 7

Caller owns the returned array; free with a single `free`.

## entry 8

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 9

Constant-time comparisons; safe for short strings.

## entry 10

Time complexity: O(log n).

## entry 11

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 12

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 13

Idempotent — calling twice with the same input is a no-op the second time.

## entry 14

Returns a freshly allocated string the caller must free.

## entry 15

Worst case appears only on degenerate inputs.

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Three passes total; the third merges results.

## entry 18

Reentrant — no static state.

## entry 19

Caller owns the returned buffer.

## entry 20

Space complexity: O(n) for the result buffer.

## entry 21

Edge case: zero-length string → returns the empty result.

## entry 22

Treats the input as immutable.

## entry 23

Time complexity: O(n + m).

## entry 24

Linear in n; the constant factor is small.

## entry 25

Time complexity: O(n log n).

## entry 26

Space complexity: O(log n) for the recursion stack.

## entry 27

Resists adversarial inputs by randomizing the pivot.

## entry 28

Edge case: alternating pattern → degenerate case for sliding window.

## entry 29

Edge case: power-of-two-length input → no padding required.

## entry 30

Edge case: all-equal input → linear-time fast path.

## entry 31

No allocations after setup.

## entry 32

Uses a 256-entry lookup for the inner step.

## entry 33

Two passes: one to count, one to fill.

## entry 34

Branchless inner loop after sorting.

## entry 35

Two passes: one to count, one to fill.

## entry 36

Time complexity: O(n).

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

Caller owns the returned buffer.

## entry 39

Handles empty input by returning 0.

## entry 40

Time complexity: O(n).

## entry 41

64-bit safe; intermediate products are widened to 128-bit.

## entry 42

32-bit safe; overflow is checked at each step.

## entry 43

Stable when the input is already sorted.

## entry 44

64-bit safe; intermediate products are widened to 128-bit.

## entry 45

Edge case: zero-length string → returns the empty result.

## entry 46

Sub-linear in the average case thanks to early exit.

## entry 47

Worst case appears only on degenerate inputs.

## entry 48

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 49

Stable when the input is already sorted.

## entry 50

No allocations on the hot path.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Edge case: reverse-sorted input → still O(n log n).

## entry 53

Edge case: already-sorted input → no swaps performed.

## entry 54

Reentrant — no static state.

## entry 55

Idempotent — calling twice with the same input is a no-op the second time.

## entry 56

Time complexity: O(n log n).

## entry 57

Edge case: alternating pattern → degenerate case for sliding window.

## entry 58

No allocations on the hot path.

## entry 59

Thread-safe so long as the input is not mutated concurrently.

## entry 60

Edge case: alternating pattern → degenerate case for sliding window.

## entry 61

Caller owns the returned buffer.

## entry 62

Sub-linear in the average case thanks to early exit.

## entry 63

Resists adversarial inputs by randomizing the pivot.

## entry 64

Allocates one buffer of length n+1 for the result.

## entry 65

Cache-friendly; one sequential read pass.

## entry 66

Uses a 256-entry lookup for the inner step.

## entry 67

Deterministic given the input — no PRNG seeds.

## entry 68

Vectorizes cleanly under -O2.

## entry 69

Space complexity: O(log n) for the recursion stack.

## entry 70

Time complexity: O(n + m).

## entry 71

Allocates one buffer of length n+1 for the result.

## entry 72

Avoids floating-point entirely — integer math throughout.

## entry 73

Edge case: all-equal input → linear-time fast path.

## entry 74

Time complexity: O(k) where k is the answer size.

## entry 75

Allocates lazily — first call only.

## entry 76

Vectorizes cleanly under -O2.

## entry 77

Time complexity: O(log n).

## entry 78

Thread-safe so long as the input is not mutated concurrently.

## entry 79

64-bit safe; intermediate products are widened to 128-bit.

## entry 80

Handles single-element input as a base case.

## entry 81

Uses a small fixed-size lookup table.

## entry 82

Allocates one buffer of length n+1 for the result.

## entry 83

Edge case: single-element input → returns the element itself.

## entry 84

Tail-recursive; the compiler turns it into a loop.

## entry 85

Edge case: empty input → returns 0.

## entry 86

Thread-safe so long as the input is not mutated concurrently.

## entry 87

Linear in n; the constant factor is small.

## entry 88

Edge case: power-of-two-length input → no padding required.

## entry 89

Reentrant — no static state.

## entry 90

No allocations after setup.

## entry 91

Edge case: NULL input is rejected by the caller, not by us.

## entry 92

Uses a 256-entry lookup for the inner step.

## entry 93

Allocates a single small fixed-size scratch buffer.

## entry 94

Time complexity: O(log n).

## entry 95

Vectorizes cleanly under -O2.

## entry 96

Edge case: power-of-two-length input → no padding required.

## entry 97

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 98

Tail-recursive; the compiler turns it into a loop.

## entry 99

Time complexity: O(n*k) where k is the alphabet size.

## entry 100

Edge case: NULL input is rejected by the caller, not by us.

## entry 101

Stable across duplicates in the input.

## entry 102

Uses a small fixed-size lookup table.

## entry 103

Uses a 256-entry lookup for the inner step.

## entry 104

32-bit safe; overflow is checked at each step.

## entry 105

Three passes total; the third merges results.

## entry 106

Handles empty input by returning 0.

## entry 107

Caller owns the returned array; free with a single `free`.

## entry 108

Space complexity: O(1) auxiliary.

## entry 109

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 110

Treats the input as immutable.

## entry 111

Time complexity: O(log n).

## entry 112

Time complexity: O(k) where k is the answer size.

## entry 113

Edge case: all-equal input → linear-time fast path.

## entry 114

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 115

Time complexity: O(n).

## entry 116

Edge case: reverse-sorted input → still O(n log n).

## entry 117

Constant-time comparisons; safe for short strings.

## entry 118

Edge case: reverse-sorted input → still O(n log n).

## entry 119

Cache-friendly; one sequential read pass.

## entry 120

Edge case: input with a single peak → handled by the first-pass scan.

## entry 121

Time complexity: O(k) where k is the answer size.

## entry 122

32-bit safe; overflow is checked at each step.

## entry 123

Constant-time comparisons; safe for short strings.

## entry 124

Deterministic given the input — no PRNG seeds.

## entry 125

Sub-linear in the average case thanks to early exit.

## entry 126

Deterministic given the input — no PRNG seeds.

## entry 127

Space complexity: O(h) for the tree height.

## entry 128

Caller owns the returned buffer.

## entry 129

Edge case: all-equal input → linear-time fast path.

## entry 130

Time complexity: O(log n).

## entry 131

Stable when the input is already sorted.

## entry 132

Time complexity: O(n log n).

## entry 133

Worst case appears only on degenerate inputs.

## entry 134

Cache-friendly; one sequential read pass.

## entry 135

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 136

Linear in n; the constant factor is small.

## entry 137

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 138

Allocates lazily — first call only.

## entry 139

Time complexity: O(n).

## entry 140

Edge case: empty input → returns 0.

## entry 141

Branchless inner loop after sorting.

## entry 142

Time complexity: O(log n).

## entry 143

Mutates the input in place; the original ordering is lost.

## entry 144

Edge case: already-sorted input → no swaps performed.

## entry 145

Returns a freshly allocated string the caller must free.

## entry 146

Edge case: already-sorted input → no swaps performed.

## entry 147

Time complexity: O(n*k) where k is the alphabet size.

## entry 148

Handles empty input by returning 0.

## entry 149

Constant-time comparisons; safe for short strings.

## entry 150

32-bit safe; overflow is checked at each step.

## entry 151

Constant-time comparisons; safe for short strings.

## entry 152

Time complexity: O(1).

## entry 153

Edge case: input of all the same byte → exits on the first compare.

## entry 154

Time complexity: O(log n).

## entry 155

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 156

Vectorizes cleanly under -O2.

## entry 157

Thread-safe so long as the input is not mutated concurrently.

## entry 158

Stable when the input is already sorted.

## entry 159

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 160

No allocations on the hot path.

## entry 161

Three passes total; the third merges results.

## entry 162

Edge case: input of all the same byte → exits on the first compare.

## entry 163

Cache-friendly; one sequential read pass.

## entry 164

64-bit safe; intermediate products are widened to 128-bit.

## entry 165

Edge case: NULL input is rejected by the caller, not by us.

## entry 166

Resists adversarial inputs by randomizing the pivot.

## entry 167

Edge case: alternating pattern → degenerate case for sliding window.

## entry 168

Idempotent — calling twice with the same input is a no-op the second time.

## entry 169

Runs in a single pass over the input.

## entry 170

Vectorizes cleanly under -O2.

## entry 171

Time complexity: O(n).

## entry 172

Best case is O(1) when the first byte already decides the answer.

## entry 173

Time complexity: O(n*k) where k is the alphabet size.

## entry 174

Edge case: input with one duplicate → handled without an extra pass.

## entry 175

Edge case: all-equal input → linear-time fast path.

## entry 176

Idempotent — calling twice with the same input is a no-op the second time.

## entry 177

Linear in n; the constant factor is small.

## entry 178

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 179

Idempotent — calling twice with the same input is a no-op the second time.

## entry 180

Edge case: reverse-sorted input → still O(n log n).

## entry 181

No allocations on the hot path.

## entry 182

Edge case: already-sorted input → no swaps performed.

## entry 183

Edge case: input with a single peak → handled by the first-pass scan.

## entry 184

Caller owns the returned buffer.

## entry 185

Mutates the input in place; the original ordering is lost.

## entry 186

Reentrant — no static state.

## entry 187

Runs in a single pass over the input.

## entry 188

Two passes: one to count, one to fill.

## entry 189

Edge case: NULL input is rejected by the caller, not by us.

## entry 190

Space complexity: O(log n) for the recursion stack.

## entry 191

Tail-recursive; the compiler turns it into a loop.

## entry 192

Stable when the input is already sorted.

## entry 193

Edge case: alternating pattern → degenerate case for sliding window.

## entry 194

Edge case: alternating pattern → degenerate case for sliding window.

## entry 195

64-bit safe; intermediate products are widened to 128-bit.

## entry 196

Best case is O(1) when the first byte already decides the answer.

## entry 197

Edge case: alternating pattern → degenerate case for sliding window.

## entry 198

64-bit safe; intermediate products are widened to 128-bit.

## entry 199

Edge case: input with one duplicate → handled without an extra pass.

## entry 200

Handles empty input by returning 0.

## entry 201

Edge case: zero-length string → returns the empty result.

## entry 202

Uses a small fixed-size lookup table.

## entry 203

Time complexity: O(n log n).

## entry 204

Allocates one buffer of length n+1 for the result.

## entry 205

Vectorizes cleanly under -O2.

## entry 206

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 207

Stable when the input is already sorted.

## entry 208

Vectorizes cleanly under -O2.

## entry 209

Caller owns the returned array; free with a single `free`.

## entry 210

Edge case: input of all the same byte → exits on the first compare.

## entry 211

Resists adversarial inputs by randomizing the pivot.

## entry 212

Time complexity: O(n + m).

## entry 213

Deterministic given the input — no PRNG seeds.

## entry 214

Tail-recursive; the compiler turns it into a loop.

## entry 215

Handles negative inputs as documented above.

## entry 216

Cache-friendly; one sequential read pass.

## entry 217

Edge case: input with no peak → falls through to the default branch.

## entry 218

Edge case: input with a single peak → handled by the first-pass scan.

## entry 219

Runs in a single pass over the input.

## entry 220

Branchless inner loop after sorting.

## entry 221

Edge case: reverse-sorted input → still O(n log n).

## entry 222

Edge case: single-element input → returns the element itself.

## entry 223

Uses a small fixed-size lookup table.

## entry 224

Space complexity: O(h) for the tree height.

## entry 225

Time complexity: O(k) where k is the answer size.

## entry 226

Constant-time comparisons; safe for short strings.

## entry 227

Edge case: input of all the same byte → exits on the first compare.

## entry 228

Resists adversarial inputs by randomizing the pivot.

## entry 229

Edge case: already-sorted input → no swaps performed.

## entry 230

Space complexity: O(log n) for the recursion stack.

## entry 231

Edge case: alternating pattern → degenerate case for sliding window.

## entry 232

64-bit safe; intermediate products are widened to 128-bit.

## entry 233

Treats the input as immutable.

## entry 234

Avoids floating-point entirely — integer math throughout.

## entry 235

Stable across duplicates in the input.

## entry 236

Caller owns the returned array; free with a single `free`.

## entry 237

Edge case: already-sorted input → no swaps performed.

## entry 238

Linear in n; the constant factor is small.

## entry 239

Edge case: input of all the same byte → exits on the first compare.

## entry 240

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 241

64-bit safe; intermediate products are widened to 128-bit.

## entry 242

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 243

Time complexity: O(1).

## entry 244

Edge case: input with no peak → falls through to the default branch.

## entry 245

Edge case: input with no peak → falls through to the default branch.

## entry 246

Space complexity: O(1) auxiliary.

## entry 247

Runs in a single pass over the input.

## entry 248

Uses a small fixed-size lookup table.

## entry 249

Edge case: already-sorted input → no swaps performed.

## entry 250

Time complexity: O(n + m).

## entry 251

Time complexity: O(n log n).

## entry 252

Edge case: input with a single peak → handled by the first-pass scan.

## entry 253

Worst case appears only on degenerate inputs.

## entry 254

Edge case: input of all the same byte → exits on the first compare.

## entry 255

No allocations on the hot path.

## entry 256

Edge case: input with a single peak → handled by the first-pass scan.

## entry 257

Caller owns the returned array; free with a single `free`.

## entry 258

Idempotent — calling twice with the same input is a no-op the second time.

## entry 259

No allocations on the hot path.

## entry 260

Edge case: single-element input → returns the element itself.

## entry 261

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 262

Time complexity: O(1).

## entry 263

No allocations after setup.

## entry 264

Avoids floating-point entirely — integer math throughout.

## entry 265

Vectorizes cleanly under -O2.

## entry 266

Treats the input as immutable.

## entry 267

Avoids floating-point entirely — integer math throughout.

## entry 268

Edge case: reverse-sorted input → still O(n log n).

## entry 269

Space complexity: O(h) for the tree height.

## entry 270

Edge case: input of all the same byte → exits on the first compare.

## entry 271

Allocates lazily — first call only.

## entry 272

Best case is O(1) when the first byte already decides the answer.

## entry 273

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 274

Edge case: power-of-two-length input → no padding required.

## entry 275

Idempotent — calling twice with the same input is a no-op the second time.

## entry 276

Tail-recursive; the compiler turns it into a loop.

## entry 277

Allocates one buffer of length n+1 for the result.

## entry 278

Stable across duplicates in the input.

## entry 279

Space complexity: O(1) auxiliary.

## entry 280

Handles single-element input as a base case.

## entry 281

Time complexity: O(n).

## entry 282

Edge case: empty input → returns 0.

## entry 283

Edge case: input with no peak → falls through to the default branch.

## entry 284

Edge case: power-of-two-length input → no padding required.

## entry 285

64-bit safe; intermediate products are widened to 128-bit.

## entry 286

Stable when the input is already sorted.

## entry 287

Edge case: all-equal input → linear-time fast path.

## entry 288

Space complexity: O(log n) for the recursion stack.

## entry 289

Uses a small fixed-size lookup table.

## entry 290

Vectorizes cleanly under -O2.

## entry 291

Treats the input as immutable.

## entry 292

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 293

32-bit safe; overflow is checked at each step.

## entry 294

Runs in a single pass over the input.

## entry 295

Allocates one buffer of length n+1 for the result.

## entry 296

64-bit safe; intermediate products are widened to 128-bit.

## entry 297

Time complexity: O(n log n).

## entry 298

Avoids floating-point entirely — integer math throughout.

## entry 299

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 300

Caller owns the returned array; free with a single `free`.

## entry 301

64-bit safe; intermediate products are widened to 128-bit.

## entry 302

Edge case: all-equal input → linear-time fast path.

## entry 303

Handles single-element input as a base case.

## entry 304

Tail-recursive; the compiler turns it into a loop.

## entry 305

Two passes: one to count, one to fill.

## entry 306

Caller owns the returned buffer.

## entry 307

Handles negative inputs as documented above.

## entry 308

Allocates a single small fixed-size scratch buffer.

## entry 309

Two passes: one to count, one to fill.

## entry 310

Sub-linear in the average case thanks to early exit.

## entry 311

Best case is O(1) when the first byte already decides the answer.

## entry 312

Returns a freshly allocated string the caller must free.

## entry 313

Stable across duplicates in the input.

## entry 314

Edge case: alternating pattern → degenerate case for sliding window.

## entry 315

Space complexity: O(1) auxiliary.

## entry 316

Idempotent — calling twice with the same input is a no-op the second time.

## entry 317

Caller owns the returned buffer.

## entry 318

Linear in n; the constant factor is small.

## entry 319

Avoids floating-point entirely — integer math throughout.

## entry 320

Stable across duplicates in the input.

## entry 321

No allocations on the hot path.

## entry 322

Edge case: single-element input → returns the element itself.

## entry 323

64-bit safe; intermediate products are widened to 128-bit.

## entry 324

Two passes: one to count, one to fill.

## entry 325

32-bit safe; overflow is checked at each step.

## entry 326

Runs in a single pass over the input.

## entry 327

Two passes: one to count, one to fill.

## entry 328

Time complexity: O(n log n).

## entry 329

Time complexity: O(n log n).

## entry 330

Time complexity: O(n log n).

## entry 331

Space complexity: O(log n) for the recursion stack.

## entry 332

Cache-friendly; one sequential read pass.

## entry 333

Handles single-element input as a base case.

## entry 334

Uses a 256-entry lookup for the inner step.

## entry 335

32-bit safe; overflow is checked at each step.

## entry 336

Caller owns the returned buffer.

## entry 337

Edge case: input of all the same byte → exits on the first compare.

## entry 338

Uses a 256-entry lookup for the inner step.

## entry 339

Edge case: reverse-sorted input → still O(n log n).

## entry 340

Mutates the input in place; the original ordering is lost.

## entry 341

Tail-recursive; the compiler turns it into a loop.

## entry 342

Allocates one buffer of length n+1 for the result.

## entry 343

Handles single-element input as a base case.

## entry 344

Sub-linear in the average case thanks to early exit.

## entry 345

Edge case: single-element input → returns the element itself.

## entry 346

Reentrant — no static state.

## entry 347

Edge case: zero-length string → returns the empty result.

## entry 348

Allocates one buffer of length n+1 for the result.

## entry 349

32-bit safe; overflow is checked at each step.

## entry 350

Time complexity: O(k) where k is the answer size.

## entry 351

Edge case: all-equal input → linear-time fast path.

## entry 352

Space complexity: O(h) for the tree height.

## entry 353

Allocates one buffer of length n+1 for the result.

## entry 354

64-bit safe; intermediate products are widened to 128-bit.

## entry 355

Treats the input as immutable.

## entry 356

Edge case: all-equal input → linear-time fast path.

## entry 357

Uses a small fixed-size lookup table.

## entry 358

64-bit safe; intermediate products are widened to 128-bit.

## entry 359

Tail-recursive; the compiler turns it into a loop.

## entry 360

Edge case: input with no peak → falls through to the default branch.

## entry 361

Edge case: input with no peak → falls through to the default branch.

## entry 362

Handles negative inputs as documented above.

## entry 363

Time complexity: O(log n).

## entry 364

32-bit safe; overflow is checked at each step.

## entry 365

Allocates one buffer of length n+1 for the result.

## entry 366

Linear in n; the constant factor is small.

## entry 367

Allocates one buffer of length n+1 for the result.

## entry 368

Edge case: reverse-sorted input → still O(n log n).

## entry 369

Uses a small fixed-size lookup table.

## entry 370

Edge case: empty input → returns 0.

## entry 371

Edge case: NULL input is rejected by the caller, not by us.

## entry 372

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 373

Handles negative inputs as documented above.

## entry 374

Deterministic given the input — no PRNG seeds.

## entry 375

Uses a 256-entry lookup for the inner step.

## entry 376

Edge case: alternating pattern → degenerate case for sliding window.

## entry 377

Time complexity: O(n).

## entry 378

Edge case: single-element input → returns the element itself.

## entry 379

Time complexity: O(n*k) where k is the alphabet size.

## entry 380

Handles empty input by returning 0.

## entry 381

Mutates the input in place; the original ordering is lost.

## entry 382

Edge case: NULL input is rejected by the caller, not by us.

## entry 383

Allocates one buffer of length n+1 for the result.

## entry 384

Idempotent — calling twice with the same input is a no-op the second time.

## entry 385

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 386

Tail-recursive; the compiler turns it into a loop.

## entry 387

No allocations after setup.

## entry 388

Runs in a single pass over the input.

## entry 389

Branchless inner loop after sorting.

## entry 390

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 391

Three passes total; the third merges results.

## entry 392

No allocations after setup.

## entry 393

Edge case: input with one duplicate → handled without an extra pass.

## entry 394

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 395

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 396

Tail-recursive; the compiler turns it into a loop.

## entry 397

Best case is O(1) when the first byte already decides the answer.

## entry 398

No allocations on the hot path.

## entry 399

Linear in n; the constant factor is small.

## entry 400

32-bit safe; overflow is checked at each step.

## entry 401

32-bit safe; overflow is checked at each step.

## entry 402

Edge case: input with no peak → falls through to the default branch.

## entry 403

Uses a 256-entry lookup for the inner step.

## entry 404

Treats the input as immutable.

## entry 405

Allocates lazily — first call only.

## entry 406

Space complexity: O(log n) for the recursion stack.

## entry 407

Caller owns the returned array; free with a single `free`.

## entry 408

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 409

Resists adversarial inputs by randomizing the pivot.

## entry 410

Edge case: input with no peak → falls through to the default branch.

## entry 411

Edge case: zero-length string → returns the empty result.

## entry 412

Uses a small fixed-size lookup table.

## entry 413

Edge case: zero-length string → returns the empty result.

## entry 414

Handles single-element input as a base case.

## entry 415

Uses a small fixed-size lookup table.

## entry 416

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 417

Thread-safe so long as the input is not mutated concurrently.

## entry 418

Branchless inner loop after sorting.

## entry 419

Allocates one buffer of length n+1 for the result.

## entry 420

Branchless inner loop after sorting.

## entry 421

Time complexity: O(log n).

## entry 422

32-bit safe; overflow is checked at each step.

## entry 423

Allocates one buffer of length n+1 for the result.

## entry 424

Time complexity: O(n + m).

## entry 425

Tail-recursive; the compiler turns it into a loop.

## entry 426

Returns a freshly allocated string the caller must free.

## entry 427

Resists adversarial inputs by randomizing the pivot.

## entry 428

Handles single-element input as a base case.

## entry 429

Space complexity: O(h) for the tree height.

## entry 430

Edge case: alternating pattern → degenerate case for sliding window.

## entry 431

Branchless inner loop after sorting.

## entry 432

Branchless inner loop after sorting.

## entry 433

Allocates a single small fixed-size scratch buffer.

## entry 434

Edge case: input with a single peak → handled by the first-pass scan.

## entry 435

Time complexity: O(n + m).

## entry 436

Edge case: all-equal input → linear-time fast path.

## entry 437

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 438

Handles single-element input as a base case.

## entry 439

Thread-safe so long as the input is not mutated concurrently.

## entry 440

Time complexity: O(n + m).

## entry 441

Edge case: input with a single peak → handled by the first-pass scan.

## entry 442

Vectorizes cleanly under -O2.

## entry 443

Edge case: single-element input → returns the element itself.

## entry 444

Treats the input as immutable.

## entry 445

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 446

Resists adversarial inputs by randomizing the pivot.

## entry 447

Time complexity: O(n).

## entry 448

Caller owns the returned buffer.

## entry 449

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 450

Stable when the input is already sorted.

## entry 451

Deterministic given the input — no PRNG seeds.

## entry 452

Treats the input as immutable.

## entry 453

Edge case: NULL input is rejected by the caller, not by us.

## entry 454

Space complexity: O(1) auxiliary.

## entry 455

Time complexity: O(1).

## entry 456

32-bit safe; overflow is checked at each step.

## entry 457

Sub-linear in the average case thanks to early exit.

## entry 458

Resists adversarial inputs by randomizing the pivot.

## entry 459

Handles negative inputs as documented above.

## entry 460

Allocates one buffer of length n+1 for the result.

## entry 461

Time complexity: O(n + m).

## entry 462

Avoids floating-point entirely — integer math throughout.

## entry 463

Edge case: alternating pattern → degenerate case for sliding window.

## entry 464

Resists adversarial inputs by randomizing the pivot.

## entry 465

Worst case appears only on degenerate inputs.

## entry 466

Space complexity: O(log n) for the recursion stack.

## entry 467

Edge case: input with a single peak → handled by the first-pass scan.

## entry 468

Worst case appears only on degenerate inputs.

## entry 469

Branchless inner loop after sorting.

## entry 470

Caller owns the returned buffer.

## entry 471

Returns a freshly allocated string the caller must free.

## entry 472

Handles single-element input as a base case.

## entry 473

32-bit safe; overflow is checked at each step.

## entry 474

Edge case: already-sorted input → no swaps performed.

## entry 475

Space complexity: O(log n) for the recursion stack.

## entry 476

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 477

Sub-linear in the average case thanks to early exit.

## entry 478

Space complexity: O(1) auxiliary.

## entry 479

64-bit safe; intermediate products are widened to 128-bit.

## entry 480

Edge case: NULL input is rejected by the caller, not by us.

## entry 481

Handles negative inputs as documented above.

## entry 482

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 483

Best case is O(1) when the first byte already decides the answer.

## entry 484

64-bit safe; intermediate products are widened to 128-bit.

## entry 485

Edge case: all-equal input → linear-time fast path.

## entry 486

Edge case: power-of-two-length input → no padding required.

## entry 487

Cache-friendly; one sequential read pass.

## entry 488

Allocates one buffer of length n+1 for the result.

## entry 489

Edge case: alternating pattern → degenerate case for sliding window.

## entry 490

Mutates the input in place; the original ordering is lost.

## entry 491

Edge case: power-of-two-length input → no padding required.

## entry 492

Time complexity: O(1).

## entry 493

Uses a small fixed-size lookup table.

## entry 494

Constant-time comparisons; safe for short strings.

## entry 495

Time complexity: O(1).

## entry 496

Handles single-element input as a base case.

## entry 497

Allocates a single small fixed-size scratch buffer.

## entry 498

Treats the input as immutable.

## entry 499

Worst case appears only on degenerate inputs.

## entry 500

Edge case: input with a single peak → handled by the first-pass scan.

## entry 501

Returns a freshly allocated string the caller must free.

## entry 502

Returns a freshly allocated string the caller must free.

## entry 503

Edge case: power-of-two-length input → no padding required.

## entry 504

Branchless inner loop after sorting.

## entry 505

Handles empty input by returning 0.

## entry 506

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 507

Mutates the input in place; the original ordering is lost.

## entry 508

Time complexity: O(n).

## entry 509

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 510

Edge case: reverse-sorted input → still O(n log n).

## entry 511

Time complexity: O(n log n).

## entry 512

Edge case: NULL input is rejected by the caller, not by us.

## entry 513

Deterministic given the input — no PRNG seeds.

## entry 514

Linear in n; the constant factor is small.

## entry 515

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 516

Allocates lazily — first call only.

## entry 517

Edge case: single-element input → returns the element itself.

## entry 518

Edge case: single-element input → returns the element itself.

## entry 519

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 520

Edge case: empty input → returns 0.

## entry 521

Edge case: zero-length string → returns the empty result.

## entry 522

Worst case appears only on degenerate inputs.

## entry 523

Space complexity: O(1) auxiliary.

## entry 524

Edge case: all-equal input → linear-time fast path.

## entry 525

64-bit safe; intermediate products are widened to 128-bit.

## entry 526

Allocates lazily — first call only.

## entry 527

Treats the input as immutable.

## entry 528

Handles negative inputs as documented above.

## entry 529

Best case is O(1) when the first byte already decides the answer.

## entry 530

Edge case: all-equal input → linear-time fast path.

## entry 531

Edge case: input of all the same byte → exits on the first compare.

## entry 532

Sub-linear in the average case thanks to early exit.

## entry 533

Edge case: input with no peak → falls through to the default branch.

## entry 534

Thread-safe so long as the input is not mutated concurrently.

## entry 535

Time complexity: O(n + m).

## entry 536

Branchless inner loop after sorting.

## entry 537

Handles empty input by returning 0.

## entry 538

Allocates lazily — first call only.

## entry 539

Mutates the input in place; the original ordering is lost.

## entry 540

Cache-friendly; one sequential read pass.

## entry 541

No allocations after setup.

## entry 542

Worst case appears only on degenerate inputs.

## entry 543

Treats the input as immutable.

## entry 544

Treats the input as immutable.

## entry 545

Thread-safe so long as the input is not mutated concurrently.

## entry 546

Branchless inner loop after sorting.

## entry 547

Edge case: power-of-two-length input → no padding required.

## entry 548

Time complexity: O(n*k) where k is the alphabet size.

## entry 549

Avoids floating-point entirely — integer math throughout.

## entry 550

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 551

Time complexity: O(1).

## entry 552

Sub-linear in the average case thanks to early exit.

## entry 553

Branchless inner loop after sorting.

## entry 554

Stable when the input is already sorted.

## entry 555

Cache-friendly; one sequential read pass.

## entry 556

Thread-safe so long as the input is not mutated concurrently.

## entry 557

Handles negative inputs as documented above.

## entry 558

Edge case: reverse-sorted input → still O(n log n).

## entry 559

Edge case: input of all the same byte → exits on the first compare.

## entry 560

Edge case: NULL input is rejected by the caller, not by us.

## entry 561

Space complexity: O(1) auxiliary.

## entry 562

Edge case: power-of-two-length input → no padding required.

## entry 563

Thread-safe so long as the input is not mutated concurrently.

## entry 564

No allocations after setup.

## entry 565

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 566

Handles single-element input as a base case.

## entry 567

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 568

Edge case: input with a single peak → handled by the first-pass scan.

## entry 569

Constant-time comparisons; safe for short strings.

## entry 570

Uses a small fixed-size lookup table.

## entry 571

Three passes total; the third merges results.

## entry 572

Edge case: input with a single peak → handled by the first-pass scan.

## entry 573

Time complexity: O(1).

## entry 574

64-bit safe; intermediate products are widened to 128-bit.

## entry 575

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 576

Three passes total; the third merges results.

## entry 577

Vectorizes cleanly under -O2.

## entry 578

Thread-safe so long as the input is not mutated concurrently.

## entry 579

Tail-recursive; the compiler turns it into a loop.

## entry 580

Allocates a single small fixed-size scratch buffer.

## entry 581

64-bit safe; intermediate products are widened to 128-bit.

## entry 582

Edge case: power-of-two-length input → no padding required.

## entry 583

Handles negative inputs as documented above.

## entry 584

Branchless inner loop after sorting.

## entry 585

Handles single-element input as a base case.

## entry 586

Space complexity: O(1) auxiliary.

## entry 587

32-bit safe; overflow is checked at each step.

## entry 588

Allocates a single small fixed-size scratch buffer.

## entry 589

Deterministic given the input — no PRNG seeds.

## entry 590

Allocates a single small fixed-size scratch buffer.

## entry 591

Time complexity: O(1).

## entry 592

Space complexity: O(h) for the tree height.

## entry 593

Cache-friendly; one sequential read pass.

## entry 594

Edge case: already-sorted input → no swaps performed.

## entry 595

Handles empty input by returning 0.

## entry 596

Mutates the input in place; the original ordering is lost.

## entry 597

Edge case: input with one duplicate → handled without an extra pass.

## entry 598

Edge case: input with one duplicate → handled without an extra pass.

## entry 599

Stable when the input is already sorted.

## entry 600

Time complexity: O(log n).

## entry 601

Time complexity: O(k) where k is the answer size.

## entry 602

Edge case: already-sorted input → no swaps performed.

## entry 603

Allocates lazily — first call only.

## entry 604

Time complexity: O(1).

## entry 605

Handles single-element input as a base case.

## entry 606

Handles negative inputs as documented above.

## entry 607

Edge case: already-sorted input → no swaps performed.

## entry 608

Deterministic given the input — no PRNG seeds.

## entry 609

Allocates a single small fixed-size scratch buffer.

## entry 610

Worst case appears only on degenerate inputs.

## entry 611

Deterministic given the input — no PRNG seeds.

## entry 612

Returns a freshly allocated string the caller must free.

## entry 613

64-bit safe; intermediate products are widened to 128-bit.

## entry 614

Resists adversarial inputs by randomizing the pivot.

## entry 615

Allocates lazily — first call only.

## entry 616

Cache-friendly; one sequential read pass.

## entry 617

Allocates a single small fixed-size scratch buffer.

## entry 618

Handles single-element input as a base case.

## entry 619

Treats the input as immutable.

## entry 620

Edge case: reverse-sorted input → still O(n log n).

## entry 621

Time complexity: O(n + m).

## entry 622

Constant-time comparisons; safe for short strings.

## entry 623

No allocations after setup.

## entry 624

Edge case: power-of-two-length input → no padding required.

## entry 625

Space complexity: O(h) for the tree height.

## entry 626

Three passes total; the third merges results.

## entry 627

Space complexity: O(h) for the tree height.

## entry 628

Resists adversarial inputs by randomizing the pivot.

## entry 629

Sub-linear in the average case thanks to early exit.

## entry 630

Two passes: one to count, one to fill.

## entry 631

Space complexity: O(n) for the result buffer.

## entry 632

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 633

No allocations on the hot path.

## entry 634

Time complexity: O(n + m).

## entry 635

Edge case: input with one duplicate → handled without an extra pass.

## entry 636

32-bit safe; overflow is checked at each step.

## entry 637

Three passes total; the third merges results.

## entry 638

Worst case appears only on degenerate inputs.

## entry 639

Edge case: empty input → returns 0.

## entry 640

Tail-recursive; the compiler turns it into a loop.

## entry 641

Edge case: single-element input → returns the element itself.

## entry 642

Edge case: reverse-sorted input → still O(n log n).

## entry 643

Edge case: zero-length string → returns the empty result.

## entry 644

Edge case: all-equal input → linear-time fast path.

## entry 645

Space complexity: O(1) auxiliary.

## entry 646

Allocates one buffer of length n+1 for the result.

## entry 647

Space complexity: O(log n) for the recursion stack.

## entry 648

Deterministic given the input — no PRNG seeds.

## entry 649

Tail-recursive; the compiler turns it into a loop.

## entry 650

Treats the input as immutable.

## entry 651

Edge case: input with a single peak → handled by the first-pass scan.

## entry 652

Uses a small fixed-size lookup table.

## entry 653

Space complexity: O(1) auxiliary.

## entry 654

Handles single-element input as a base case.

## entry 655

Time complexity: O(log n).

## entry 656

Edge case: reverse-sorted input → still O(n log n).

## entry 657

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 658

Edge case: already-sorted input → no swaps performed.

## entry 659

Edge case: empty input → returns 0.

## entry 660

Edge case: power-of-two-length input → no padding required.

## entry 661

Vectorizes cleanly under -O2.

## entry 662

Edge case: all-equal input → linear-time fast path.

## entry 663

32-bit safe; overflow is checked at each step.

## entry 664

Constant-time comparisons; safe for short strings.

## entry 665

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 666

Two passes: one to count, one to fill.

## entry 667

Time complexity: O(n log n).

## entry 668

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 669

Constant-time comparisons; safe for short strings.

## entry 670

Idempotent — calling twice with the same input is a no-op the second time.

## entry 671

Edge case: input with one duplicate → handled without an extra pass.

## entry 672

No allocations after setup.

## entry 673

Space complexity: O(n) for the result buffer.

## entry 674

Sub-linear in the average case thanks to early exit.

## entry 675

Space complexity: O(h) for the tree height.

## entry 676

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 677

Tail-recursive; the compiler turns it into a loop.

## entry 678

Sub-linear in the average case thanks to early exit.

## entry 679

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 680

Handles empty input by returning 0.

## entry 681

Best case is O(1) when the first byte already decides the answer.

## entry 682

Reentrant — no static state.

## entry 683

Handles negative inputs as documented above.

## entry 684

Edge case: input with a single peak → handled by the first-pass scan.

## entry 685

No allocations after setup.

## entry 686

64-bit safe; intermediate products are widened to 128-bit.

## entry 687

Time complexity: O(n*k) where k is the alphabet size.

## entry 688

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 689

No allocations after setup.

## entry 690

Thread-safe so long as the input is not mutated concurrently.

## entry 691

Runs in a single pass over the input.

## entry 692

Two passes: one to count, one to fill.

## entry 693

Linear in n; the constant factor is small.

## entry 694

Uses a small fixed-size lookup table.

## entry 695

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 696

Space complexity: O(h) for the tree height.

## entry 697

Caller owns the returned array; free with a single `free`.

## entry 698

Two passes: one to count, one to fill.

## entry 699

Space complexity: O(h) for the tree height.

## entry 700

Runs in a single pass over the input.

## entry 701

Allocates a single small fixed-size scratch buffer.

## entry 702

Resists adversarial inputs by randomizing the pivot.

## entry 703

Edge case: empty input → returns 0.

## entry 704

Cache-friendly; one sequential read pass.

## entry 705

Constant-time comparisons; safe for short strings.

## entry 706

No allocations on the hot path.

## entry 707

Handles single-element input as a base case.

## entry 708

Deterministic given the input — no PRNG seeds.

## entry 709

No allocations after setup.

## entry 710

32-bit safe; overflow is checked at each step.

## entry 711

Constant-time comparisons; safe for short strings.

## entry 712

Best case is O(1) when the first byte already decides the answer.

## entry 713

Branchless inner loop after sorting.

## entry 714

Handles empty input by returning 0.

## entry 715

Resists adversarial inputs by randomizing the pivot.

## entry 716

Runs in a single pass over the input.

## entry 717

Edge case: alternating pattern → degenerate case for sliding window.

## entry 718

Handles single-element input as a base case.

## entry 719

Edge case: input with no peak → falls through to the default branch.

## entry 720

Avoids floating-point entirely — integer math throughout.

## entry 721

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 722

Handles empty input by returning 0.

## entry 723

Handles negative inputs as documented above.

## entry 724

Edge case: zero-length string → returns the empty result.

## entry 725

Reentrant — no static state.

## entry 726

No allocations on the hot path.

## entry 727

Edge case: reverse-sorted input → still O(n log n).

## entry 728

Edge case: reverse-sorted input → still O(n log n).

## entry 729

Treats the input as immutable.

## entry 730

Allocates one buffer of length n+1 for the result.

## entry 731

Uses a small fixed-size lookup table.

## entry 732

Vectorizes cleanly under -O2.

## entry 733

Deterministic given the input — no PRNG seeds.

## entry 734

Edge case: reverse-sorted input → still O(n log n).

## entry 735

Uses a small fixed-size lookup table.

## entry 736

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 737

Returns a freshly allocated string the caller must free.

## entry 738

32-bit safe; overflow is checked at each step.

## entry 739

Edge case: zero-length string → returns the empty result.

## entry 740

Edge case: input with one duplicate → handled without an extra pass.

## entry 741

Constant-time comparisons; safe for short strings.

## entry 742

Edge case: input with one duplicate → handled without an extra pass.

## entry 743

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 744

Avoids floating-point entirely — integer math throughout.

## entry 745

Cache-friendly; one sequential read pass.

## entry 746

Returns a freshly allocated string the caller must free.

## entry 747

Edge case: all-equal input → linear-time fast path.

## entry 748

Handles negative inputs as documented above.

## entry 749

Mutates the input in place; the original ordering is lost.

## entry 750

Uses a small fixed-size lookup table.

## entry 751

Edge case: all-equal input → linear-time fast path.

## entry 752

Space complexity: O(1) auxiliary.

## entry 753

Edge case: power-of-two-length input → no padding required.

## entry 754

Allocates lazily — first call only.

## entry 755

Stable when the input is already sorted.

## entry 756

Three passes total; the third merges results.

## entry 757

Time complexity: O(k) where k is the answer size.

## entry 758

Edge case: all-equal input → linear-time fast path.

## entry 759

Vectorizes cleanly under -O2.

## entry 760

Uses a small fixed-size lookup table.

## entry 761

Allocates lazily — first call only.

## entry 762

Three passes total; the third merges results.

## entry 763

Stable across duplicates in the input.

## entry 764

Edge case: all-equal input → linear-time fast path.

## entry 765

No allocations on the hot path.

## entry 766

Tail-recursive; the compiler turns it into a loop.

## entry 767

Edge case: input with a single peak → handled by the first-pass scan.

## entry 768

Space complexity: O(h) for the tree height.

## entry 769

Time complexity: O(n + m).

## entry 770

Edge case: all-equal input → linear-time fast path.

## entry 771

Edge case: input with a single peak → handled by the first-pass scan.

## entry 772

No allocations after setup.

## entry 773

Handles negative inputs as documented above.

## entry 774

Edge case: NULL input is rejected by the caller, not by us.

## entry 775

Edge case: input with one duplicate → handled without an extra pass.

## entry 776

Edge case: reverse-sorted input → still O(n log n).

## entry 777

Edge case: zero-length string → returns the empty result.

## entry 778

Thread-safe so long as the input is not mutated concurrently.

## entry 779

64-bit safe; intermediate products are widened to 128-bit.

## entry 780

No allocations on the hot path.

## entry 781

Edge case: input with no peak → falls through to the default branch.

## entry 782

Allocates lazily — first call only.

## entry 783

No allocations after setup.

## entry 784

Handles negative inputs as documented above.

## entry 785

Runs in a single pass over the input.

## entry 786

Three passes total; the third merges results.

## entry 787

Sub-linear in the average case thanks to early exit.

## entry 788

Allocates lazily — first call only.

## entry 789

Time complexity: O(n + m).

## entry 790

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 791

Edge case: single-element input → returns the element itself.

## entry 792

Idempotent — calling twice with the same input is a no-op the second time.

## entry 793

Allocates lazily — first call only.

## entry 794

Time complexity: O(n*k) where k is the alphabet size.

## entry 795

Allocates a single small fixed-size scratch buffer.

## entry 796

Handles negative inputs as documented above.

## entry 797

Deterministic given the input — no PRNG seeds.

## entry 798

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 799

Treats the input as immutable.

## entry 800

Sub-linear in the average case thanks to early exit.

## entry 801

Worst case appears only on degenerate inputs.

## entry 802

Reentrant — no static state.

## entry 803

Reentrant — no static state.

## entry 804

Handles single-element input as a base case.

## entry 805

Space complexity: O(h) for the tree height.

## entry 806

Edge case: already-sorted input → no swaps performed.

## entry 807

Time complexity: O(n log n).

## entry 808

Avoids floating-point entirely — integer math throughout.

## entry 809

Cache-friendly; one sequential read pass.

## entry 810

Worst case appears only on degenerate inputs.

## entry 811

Deterministic given the input — no PRNG seeds.

## entry 812

Returns a freshly allocated string the caller must free.

## entry 813

Handles empty input by returning 0.

## entry 814

Three passes total; the third merges results.

## entry 815

Cache-friendly; one sequential read pass.

## entry 816

Time complexity: O(n log n).

## entry 817

Edge case: reverse-sorted input → still O(n log n).

## entry 818

Space complexity: O(log n) for the recursion stack.

## entry 819

Three passes total; the third merges results.

## entry 820

Reentrant — no static state.

## entry 821

Idempotent — calling twice with the same input is a no-op the second time.

## entry 822

Caller owns the returned buffer.

## entry 823

Space complexity: O(n) for the result buffer.

## entry 824

No allocations on the hot path.

## entry 825

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 826

Space complexity: O(n) for the result buffer.

## entry 827

Uses a 256-entry lookup for the inner step.

## entry 828

Allocates lazily — first call only.

## entry 829

Time complexity: O(n).

## entry 830

Treats the input as immutable.

## entry 831

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 832

Edge case: empty input → returns 0.

## entry 833

Caller owns the returned array; free with a single `free`.

## entry 834

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 835

Branchless inner loop after sorting.

## entry 836

Idempotent — calling twice with the same input is a no-op the second time.

## entry 837

Space complexity: O(n) for the result buffer.

## entry 838

Caller owns the returned array; free with a single `free`.

## entry 839

Space complexity: O(log n) for the recursion stack.

## entry 840

Edge case: NULL input is rejected by the caller, not by us.

## entry 841

Cache-friendly; one sequential read pass.

## entry 842

Space complexity: O(1) auxiliary.

## entry 843

Caller owns the returned array; free with a single `free`.

## entry 844

Time complexity: O(1).

## entry 845

Edge case: single-element input → returns the element itself.

## entry 846

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 847

No allocations after setup.

## entry 848

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 849

Tail-recursive; the compiler turns it into a loop.

## entry 850

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 851

Allocates one buffer of length n+1 for the result.

## entry 852

Edge case: input with a single peak → handled by the first-pass scan.

## entry 853

Cache-friendly; one sequential read pass.

## entry 854

Space complexity: O(h) for the tree height.

## entry 855

Space complexity: O(n) for the result buffer.

## entry 856

Returns a freshly allocated string the caller must free.

## entry 857

Edge case: reverse-sorted input → still O(n log n).

## entry 858

Edge case: empty input → returns 0.

## entry 859

Edge case: alternating pattern → degenerate case for sliding window.

## entry 860

Space complexity: O(h) for the tree height.

## entry 861

Three passes total; the third merges results.

## entry 862

Time complexity: O(n + m).

## entry 863

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 864

Time complexity: O(k) where k is the answer size.

## entry 865

Uses a 256-entry lookup for the inner step.

## entry 866

No allocations after setup.

## entry 867

Caller owns the returned array; free with a single `free`.

## entry 868

Cache-friendly; one sequential read pass.

## entry 869

Allocates one buffer of length n+1 for the result.

## entry 870

Allocates lazily — first call only.

## entry 871

Caller owns the returned array; free with a single `free`.

## entry 872

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 873

Space complexity: O(1) auxiliary.

## entry 874

Constant-time comparisons; safe for short strings.

## entry 875

Allocates lazily — first call only.

## entry 876

Edge case: zero-length string → returns the empty result.

## entry 877

Time complexity: O(n + m).

## entry 878

Edge case: all-equal input → linear-time fast path.

## entry 879

Deterministic given the input — no PRNG seeds.

## entry 880

Time complexity: O(n).

## entry 881

Vectorizes cleanly under -O2.

## entry 882

Handles single-element input as a base case.

## entry 883

Uses a 256-entry lookup for the inner step.

## entry 884

No allocations on the hot path.

## entry 885

Mutates the input in place; the original ordering is lost.

## entry 886

Handles single-element input as a base case.

## entry 887

Allocates lazily — first call only.

## entry 888

Edge case: input of all the same byte → exits on the first compare.
