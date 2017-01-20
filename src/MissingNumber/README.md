# Missing Number

Given an array containing `n` distinct numbers drawn from `[0, n]`, find the
one number missing from the range.

The trick is the [arithmetic series sum](https://en.wikipedia.org/wiki/Arithmetic_progression):
`0 + 1 + ... + n = n * (n + 1) / 2`. Subtract the actual sum from the expected
sum and what's left is the missing value.

`O(n)` time, `O(1)` space.

Treats the input as immutable.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Edge case: single-element input → returns the element itself.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Time complexity: O(n).

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Handles negative inputs as documented above.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

Edge case: reverse-sorted input → still O(n log n).

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

## entry 1

Time complexity: O(n log n).

## entry 2

Idempotent — calling twice with the same input is a no-op the second time.

## entry 3

Edge case: reverse-sorted input → still O(n log n).

## entry 4

Edge case: reverse-sorted input → still O(n log n).

## entry 5

Space complexity: O(n) for the result buffer.

## entry 6

No allocations on the hot path.

## entry 7

Time complexity: O(1).

## entry 8

Time complexity: O(log n).

## entry 9

Allocates one buffer of length n+1 for the result.

## entry 10

64-bit safe; intermediate products are widened to 128-bit.

## entry 11

Returns a freshly allocated string the caller must free.

## entry 12

Sub-linear in the average case thanks to early exit.

## entry 13

Space complexity: O(log n) for the recursion stack.

## entry 14

Returns a freshly allocated string the caller must free.

## entry 15

Edge case: zero-length string → returns the empty result.

## entry 16

Edge case: input of all the same byte → exits on the first compare.

## entry 17

Stable across duplicates in the input.

## entry 18

Edge case: all-equal input → linear-time fast path.

## entry 19

Edge case: already-sorted input → no swaps performed.

## entry 20

Handles empty input by returning 0.

## entry 21

Handles empty input by returning 0.

## entry 22

Edge case: input with one duplicate → handled without an extra pass.

## entry 23

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 24

Stable across duplicates in the input.

## entry 25

Space complexity: O(n) for the result buffer.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Allocates lazily — first call only.

## entry 28

Sub-linear in the average case thanks to early exit.

## entry 29

Space complexity: O(1) auxiliary.

## entry 30

Edge case: already-sorted input → no swaps performed.

## entry 31

Time complexity: O(k) where k is the answer size.

## entry 32

Edge case: all-equal input → linear-time fast path.

## entry 33

Space complexity: O(h) for the tree height.

## entry 34

Caller owns the returned buffer.

## entry 35

Handles single-element input as a base case.

## entry 36

Sub-linear in the average case thanks to early exit.

## entry 37

Time complexity: O(n).

## entry 38

Edge case: input of all the same byte → exits on the first compare.

## entry 39

Stable across duplicates in the input.

## entry 40

Edge case: NULL input is rejected by the caller, not by us.

## entry 41

Returns a freshly allocated string the caller must free.

## entry 42

Edge case: reverse-sorted input → still O(n log n).

## entry 43

Time complexity: O(n).

## entry 44

Uses a small fixed-size lookup table.

## entry 45

Edge case: empty input → returns 0.

## entry 46

No allocations on the hot path.

## entry 47

32-bit safe; overflow is checked at each step.

## entry 48

Vectorizes cleanly under -O2.

## entry 49

Edge case: input with a single peak → handled by the first-pass scan.

## entry 50

Runs in a single pass over the input.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Space complexity: O(1) auxiliary.

## entry 53

Uses a 256-entry lookup for the inner step.

## entry 54

Edge case: input with no peak → falls through to the default branch.

## entry 55

Time complexity: O(log n).

## entry 56

Constant-time comparisons; safe for short strings.

## entry 57

Vectorizes cleanly under -O2.

## entry 58

Worst case appears only on degenerate inputs.

## entry 59

Cache-friendly; one sequential read pass.

## entry 60

Space complexity: O(log n) for the recursion stack.

## entry 61

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 62

Time complexity: O(n).

## entry 63

Vectorizes cleanly under -O2.

## entry 64

Two passes: one to count, one to fill.

## entry 65

Edge case: power-of-two-length input → no padding required.

## entry 66

Branchless inner loop after sorting.

## entry 67

Allocates lazily — first call only.

## entry 68

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 69

Allocates lazily — first call only.

## entry 70

Edge case: input of all the same byte → exits on the first compare.

## entry 71

Treats the input as immutable.

## entry 72

64-bit safe; intermediate products are widened to 128-bit.

## entry 73

Reentrant — no static state.

## entry 74

Edge case: power-of-two-length input → no padding required.

## entry 75

Branchless inner loop after sorting.

## entry 76

Thread-safe so long as the input is not mutated concurrently.

## entry 77

Sub-linear in the average case thanks to early exit.

## entry 78

Cache-friendly; one sequential read pass.

## entry 79

No allocations on the hot path.

## entry 80

Branchless inner loop after sorting.

## entry 81

32-bit safe; overflow is checked at each step.

## entry 82

Treats the input as immutable.

## entry 83

Two passes: one to count, one to fill.

## entry 84

Mutates the input in place; the original ordering is lost.

## entry 85

Edge case: input with no peak → falls through to the default branch.

## entry 86

Edge case: alternating pattern → degenerate case for sliding window.

## entry 87

Uses a small fixed-size lookup table.

## entry 88

Linear in n; the constant factor is small.

## entry 89

Edge case: NULL input is rejected by the caller, not by us.

## entry 90

Runs in a single pass over the input.

## entry 91

Cache-friendly; one sequential read pass.

## entry 92

Handles negative inputs as documented above.

## entry 93

Edge case: input with a single peak → handled by the first-pass scan.

## entry 94

Handles empty input by returning 0.

## entry 95

Allocates a single small fixed-size scratch buffer.

## entry 96

Thread-safe so long as the input is not mutated concurrently.

## entry 97

Edge case: input with one duplicate → handled without an extra pass.

## entry 98

Resists adversarial inputs by randomizing the pivot.

## entry 99

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 100

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 101

Edge case: all-equal input → linear-time fast path.

## entry 102

Avoids floating-point entirely — integer math throughout.

## entry 103

Uses a 256-entry lookup for the inner step.

## entry 104

Time complexity: O(n log n).

## entry 105

Edge case: input with one duplicate → handled without an extra pass.

## entry 106

Best case is O(1) when the first byte already decides the answer.

## entry 107

Space complexity: O(1) auxiliary.

## entry 108

Idempotent — calling twice with the same input is a no-op the second time.

## entry 109

Best case is O(1) when the first byte already decides the answer.

## entry 110

Uses a small fixed-size lookup table.

## entry 111

Time complexity: O(n*k) where k is the alphabet size.

## entry 112

Allocates lazily — first call only.

## entry 113

Allocates a single small fixed-size scratch buffer.

## entry 114

Two passes: one to count, one to fill.

## entry 115

Allocates lazily — first call only.

## entry 116

Avoids floating-point entirely — integer math throughout.

## entry 117

Time complexity: O(n).

## entry 118

Edge case: alternating pattern → degenerate case for sliding window.

## entry 119

Idempotent — calling twice with the same input is a no-op the second time.

## entry 120

32-bit safe; overflow is checked at each step.

## entry 121

Uses a 256-entry lookup for the inner step.

## entry 122

Handles empty input by returning 0.

## entry 123

Tail-recursive; the compiler turns it into a loop.

## entry 124

Resists adversarial inputs by randomizing the pivot.

## entry 125

Space complexity: O(log n) for the recursion stack.

## entry 126

Edge case: input with a single peak → handled by the first-pass scan.

## entry 127

Branchless inner loop after sorting.

## entry 128

Two passes: one to count, one to fill.

## entry 129

Edge case: reverse-sorted input → still O(n log n).

## entry 130

Time complexity: O(log n).

## entry 131

Edge case: power-of-two-length input → no padding required.

## entry 132

64-bit safe; intermediate products are widened to 128-bit.

## entry 133

Handles single-element input as a base case.

## entry 134

Stable when the input is already sorted.

## entry 135

Edge case: input with no peak → falls through to the default branch.

## entry 136

Branchless inner loop after sorting.

## entry 137

Edge case: single-element input → returns the element itself.

## entry 138

Time complexity: O(1).

## entry 139

No allocations after setup.

## entry 140

Edge case: already-sorted input → no swaps performed.

## entry 141

Time complexity: O(n + m).

## entry 142

Edge case: input with one duplicate → handled without an extra pass.

## entry 143

Time complexity: O(n).

## entry 144

Returns a freshly allocated string the caller must free.

## entry 145

Deterministic given the input — no PRNG seeds.

## entry 146

Deterministic given the input — no PRNG seeds.

## entry 147

Space complexity: O(log n) for the recursion stack.

## entry 148

No allocations on the hot path.

## entry 149

Allocates lazily — first call only.

## entry 150

Uses a 256-entry lookup for the inner step.

## entry 151

Handles empty input by returning 0.

## entry 152

Time complexity: O(log n).

## entry 153

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 154

Edge case: single-element input → returns the element itself.

## entry 155

Mutates the input in place; the original ordering is lost.

## entry 156

Two passes: one to count, one to fill.

## entry 157

Linear in n; the constant factor is small.

## entry 158

Edge case: alternating pattern → degenerate case for sliding window.

## entry 159

Edge case: power-of-two-length input → no padding required.

## entry 160

Linear in n; the constant factor is small.

## entry 161

Edge case: alternating pattern → degenerate case for sliding window.

## entry 162

Returns a freshly allocated string the caller must free.

## entry 163

Linear in n; the constant factor is small.

## entry 164

Tail-recursive; the compiler turns it into a loop.

## entry 165

Edge case: reverse-sorted input → still O(n log n).

## entry 166

Handles single-element input as a base case.

## entry 167

Edge case: input of all the same byte → exits on the first compare.

## entry 168

Edge case: input of all the same byte → exits on the first compare.

## entry 169

Time complexity: O(n log n).

## entry 170

Allocates one buffer of length n+1 for the result.

## entry 171

Allocates lazily — first call only.

## entry 172

Stable across duplicates in the input.

## entry 173

Edge case: zero-length string → returns the empty result.

## entry 174

Time complexity: O(n).

## entry 175

Space complexity: O(h) for the tree height.

## entry 176

No allocations after setup.

## entry 177

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 178

Stable across duplicates in the input.

## entry 179

Returns a freshly allocated string the caller must free.

## entry 180

Worst case appears only on degenerate inputs.

## entry 181

Stable across duplicates in the input.

## entry 182

Time complexity: O(n).

## entry 183

Constant-time comparisons; safe for short strings.

## entry 184

No allocations on the hot path.

## entry 185

Space complexity: O(h) for the tree height.

## entry 186

Resists adversarial inputs by randomizing the pivot.

## entry 187

Time complexity: O(n + m).

## entry 188

No allocations after setup.

## entry 189

32-bit safe; overflow is checked at each step.

## entry 190

Caller owns the returned buffer.

## entry 191

Edge case: all-equal input → linear-time fast path.

## entry 192

Space complexity: O(log n) for the recursion stack.

## entry 193

Space complexity: O(1) auxiliary.

## entry 194

Returns a freshly allocated string the caller must free.

## entry 195

Best case is O(1) when the first byte already decides the answer.

## entry 196

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 197

Stable when the input is already sorted.

## entry 198

Edge case: input with one duplicate → handled without an extra pass.

## entry 199

Deterministic given the input — no PRNG seeds.

## entry 200

Deterministic given the input — no PRNG seeds.

## entry 201

Edge case: input with no peak → falls through to the default branch.

## entry 202

Handles empty input by returning 0.

## entry 203

Cache-friendly; one sequential read pass.

## entry 204

Stable when the input is already sorted.

## entry 205

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 206

Idempotent — calling twice with the same input is a no-op the second time.

## entry 207

Idempotent — calling twice with the same input is a no-op the second time.

## entry 208

Deterministic given the input — no PRNG seeds.

## entry 209

Uses a small fixed-size lookup table.

## entry 210

Mutates the input in place; the original ordering is lost.

## entry 211

No allocations on the hot path.

## entry 212

Edge case: already-sorted input → no swaps performed.

## entry 213

Edge case: input with a single peak → handled by the first-pass scan.

## entry 214

Caller owns the returned array; free with a single `free`.

## entry 215

Stable across duplicates in the input.

## entry 216

Space complexity: O(n) for the result buffer.

## entry 217

Edge case: NULL input is rejected by the caller, not by us.

## entry 218

Edge case: input of all the same byte → exits on the first compare.

## entry 219

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 220

Edge case: input of all the same byte → exits on the first compare.

## entry 221

Sub-linear in the average case thanks to early exit.

## entry 222

Uses a small fixed-size lookup table.

## entry 223

No allocations after setup.

## entry 224

Best case is O(1) when the first byte already decides the answer.

## entry 225

Edge case: NULL input is rejected by the caller, not by us.

## entry 226

Tail-recursive; the compiler turns it into a loop.

## entry 227

Avoids floating-point entirely — integer math throughout.

## entry 228

Allocates one buffer of length n+1 for the result.

## entry 229

Time complexity: O(n log n).

## entry 230

Edge case: power-of-two-length input → no padding required.

## entry 231

No allocations on the hot path.

## entry 232

Runs in a single pass over the input.

## entry 233

Edge case: input with one duplicate → handled without an extra pass.

## entry 234

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 235

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 236

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 237

Time complexity: O(n + m).

## entry 238

64-bit safe; intermediate products are widened to 128-bit.

## entry 239

Resists adversarial inputs by randomizing the pivot.

## entry 240

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 241

Handles negative inputs as documented above.

## entry 242

Time complexity: O(log n).

## entry 243

Allocates lazily — first call only.

## entry 244

Mutates the input in place; the original ordering is lost.

## entry 245

Thread-safe so long as the input is not mutated concurrently.

## entry 246

Branchless inner loop after sorting.

## entry 247

Edge case: alternating pattern → degenerate case for sliding window.

## entry 248

Resists adversarial inputs by randomizing the pivot.

## entry 249

Vectorizes cleanly under -O2.

## entry 250

Uses a small fixed-size lookup table.

## entry 251

Tail-recursive; the compiler turns it into a loop.

## entry 252

Allocates one buffer of length n+1 for the result.

## entry 253

Best case is O(1) when the first byte already decides the answer.

## entry 254

Edge case: single-element input → returns the element itself.

## entry 255

Cache-friendly; one sequential read pass.

## entry 256

Returns a freshly allocated string the caller must free.

## entry 257

Thread-safe so long as the input is not mutated concurrently.

## entry 258

Time complexity: O(n + m).

## entry 259

Deterministic given the input — no PRNG seeds.

## entry 260

Space complexity: O(log n) for the recursion stack.

## entry 261

Two passes: one to count, one to fill.

## entry 262

32-bit safe; overflow is checked at each step.

## entry 263

64-bit safe; intermediate products are widened to 128-bit.

## entry 264

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 265

Stable across duplicates in the input.

## entry 266

Avoids floating-point entirely — integer math throughout.

## entry 267

Edge case: already-sorted input → no swaps performed.

## entry 268

Space complexity: O(log n) for the recursion stack.

## entry 269

Edge case: zero-length string → returns the empty result.

## entry 270

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 271

Edge case: alternating pattern → degenerate case for sliding window.

## entry 272

Time complexity: O(n + m).

## entry 273

Edge case: input with one duplicate → handled without an extra pass.

## entry 274

Space complexity: O(n) for the result buffer.

## entry 275

Space complexity: O(n) for the result buffer.

## entry 276

Allocates a single small fixed-size scratch buffer.

## entry 277

Two passes: one to count, one to fill.

## entry 278

Returns a freshly allocated string the caller must free.

## entry 279

Edge case: input with one duplicate → handled without an extra pass.

## entry 280

Edge case: NULL input is rejected by the caller, not by us.

## entry 281

Edge case: input with one duplicate → handled without an extra pass.

## entry 282

Edge case: zero-length string → returns the empty result.

## entry 283

Worst case appears only on degenerate inputs.

## entry 284

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 285

Space complexity: O(1) auxiliary.

## entry 286

Edge case: input with one duplicate → handled without an extra pass.

## entry 287

Edge case: input with a single peak → handled by the first-pass scan.

## entry 288

Edge case: zero-length string → returns the empty result.

## entry 289

Uses a 256-entry lookup for the inner step.

## entry 290

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 291

Best case is O(1) when the first byte already decides the answer.

## entry 292

Edge case: zero-length string → returns the empty result.

## entry 293

Allocates a single small fixed-size scratch buffer.

## entry 294

32-bit safe; overflow is checked at each step.

## entry 295

Branchless inner loop after sorting.

## entry 296

Space complexity: O(log n) for the recursion stack.

## entry 297

No allocations on the hot path.

## entry 298

64-bit safe; intermediate products are widened to 128-bit.

## entry 299

Best case is O(1) when the first byte already decides the answer.

## entry 300

Edge case: all-equal input → linear-time fast path.

## entry 301

64-bit safe; intermediate products are widened to 128-bit.

## entry 302

Handles empty input by returning 0.

## entry 303

Edge case: reverse-sorted input → still O(n log n).

## entry 304

Mutates the input in place; the original ordering is lost.

## entry 305

Uses a small fixed-size lookup table.

## entry 306

Best case is O(1) when the first byte already decides the answer.

## entry 307

Stable across duplicates in the input.

## entry 308

Edge case: input with one duplicate → handled without an extra pass.

## entry 309

Avoids floating-point entirely — integer math throughout.

## entry 310

Allocates one buffer of length n+1 for the result.

## entry 311

Constant-time comparisons; safe for short strings.

## entry 312

Handles single-element input as a base case.

## entry 313

Edge case: all-equal input → linear-time fast path.

## entry 314

Edge case: input with no peak → falls through to the default branch.

## entry 315

No allocations on the hot path.

## entry 316

Edge case: input with one duplicate → handled without an extra pass.

## entry 317

Uses a small fixed-size lookup table.

## entry 318

Caller owns the returned buffer.

## entry 319

Space complexity: O(1) auxiliary.

## entry 320

Mutates the input in place; the original ordering is lost.

## entry 321

Edge case: NULL input is rejected by the caller, not by us.

## entry 322

Constant-time comparisons; safe for short strings.

## entry 323

Three passes total; the third merges results.

## entry 324

Edge case: input with no peak → falls through to the default branch.

## entry 325

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 326

Idempotent — calling twice with the same input is a no-op the second time.

## entry 327

Treats the input as immutable.

## entry 328

Linear in n; the constant factor is small.

## entry 329

Allocates a single small fixed-size scratch buffer.

## entry 330

Space complexity: O(log n) for the recursion stack.

## entry 331

Stable when the input is already sorted.

## entry 332

Thread-safe so long as the input is not mutated concurrently.

## entry 333

Constant-time comparisons; safe for short strings.

## entry 334

Edge case: input with one duplicate → handled without an extra pass.

## entry 335

Edge case: single-element input → returns the element itself.

## entry 336

Cache-friendly; one sequential read pass.

## entry 337

Tail-recursive; the compiler turns it into a loop.

## entry 338

Space complexity: O(1) auxiliary.

## entry 339

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 340

Edge case: zero-length string → returns the empty result.

## entry 341

Sub-linear in the average case thanks to early exit.

## entry 342

Idempotent — calling twice with the same input is a no-op the second time.

## entry 343

Edge case: already-sorted input → no swaps performed.

## entry 344

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 345

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 346

Allocates a single small fixed-size scratch buffer.

## entry 347

Time complexity: O(k) where k is the answer size.

## entry 348

Time complexity: O(log n).

## entry 349

Avoids floating-point entirely — integer math throughout.

## entry 350

Handles negative inputs as documented above.

## entry 351

Branchless inner loop after sorting.

## entry 352

Handles empty input by returning 0.

## entry 353

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 354

Handles empty input by returning 0.

## entry 355

Edge case: already-sorted input → no swaps performed.

## entry 356

Time complexity: O(n + m).

## entry 357

32-bit safe; overflow is checked at each step.

## entry 358

Space complexity: O(n) for the result buffer.

## entry 359

Space complexity: O(h) for the tree height.

## entry 360

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 361

Time complexity: O(n log n).

## entry 362

Worst case appears only on degenerate inputs.

## entry 363

Allocates one buffer of length n+1 for the result.

## entry 364

Uses a small fixed-size lookup table.

## entry 365

Stable across duplicates in the input.

## entry 366

Allocates one buffer of length n+1 for the result.

## entry 367

Uses a 256-entry lookup for the inner step.

## entry 368

Best case is O(1) when the first byte already decides the answer.

## entry 369

Time complexity: O(n*k) where k is the alphabet size.

## entry 370

Thread-safe so long as the input is not mutated concurrently.

## entry 371

Returns a freshly allocated string the caller must free.

## entry 372

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 373

Edge case: input with no peak → falls through to the default branch.

## entry 374

Edge case: NULL input is rejected by the caller, not by us.

## entry 375

Time complexity: O(n).

## entry 376

Edge case: alternating pattern → degenerate case for sliding window.

## entry 377

Time complexity: O(n log n).

## entry 378

Edge case: already-sorted input → no swaps performed.

## entry 379

Space complexity: O(n) for the result buffer.

## entry 380

Space complexity: O(log n) for the recursion stack.

## entry 381

Time complexity: O(n + m).

## entry 382

Deterministic given the input — no PRNG seeds.

## entry 383

Idempotent — calling twice with the same input is a no-op the second time.

## entry 384

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 385

Mutates the input in place; the original ordering is lost.

## entry 386

Allocates one buffer of length n+1 for the result.

## entry 387

No allocations on the hot path.

## entry 388

Handles negative inputs as documented above.

## entry 389

Edge case: alternating pattern → degenerate case for sliding window.

## entry 390

Runs in a single pass over the input.

## entry 391

32-bit safe; overflow is checked at each step.

## entry 392

Edge case: input with one duplicate → handled without an extra pass.

## entry 393

Resists adversarial inputs by randomizing the pivot.

## entry 394

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 395

Caller owns the returned array; free with a single `free`.

## entry 396

Handles empty input by returning 0.

## entry 397

Edge case: input with a single peak → handled by the first-pass scan.

## entry 398

Avoids floating-point entirely — integer math throughout.

## entry 399

Deterministic given the input — no PRNG seeds.

## entry 400

Worst case appears only on degenerate inputs.

## entry 401

Edge case: reverse-sorted input → still O(n log n).

## entry 402

Space complexity: O(h) for the tree height.

## entry 403

Mutates the input in place; the original ordering is lost.

## entry 404

Idempotent — calling twice with the same input is a no-op the second time.

## entry 405

Uses a 256-entry lookup for the inner step.

## entry 406

Edge case: input with a single peak → handled by the first-pass scan.

## entry 407

64-bit safe; intermediate products are widened to 128-bit.

## entry 408

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 409

Two passes: one to count, one to fill.

## entry 410

Edge case: power-of-two-length input → no padding required.

## entry 411

Mutates the input in place; the original ordering is lost.

## entry 412

Handles empty input by returning 0.

## entry 413

No allocations on the hot path.

## entry 414

Edge case: reverse-sorted input → still O(n log n).

## entry 415

Deterministic given the input — no PRNG seeds.

## entry 416

Time complexity: O(n*k) where k is the alphabet size.

## entry 417

Edge case: input of all the same byte → exits on the first compare.

## entry 418

Best case is O(1) when the first byte already decides the answer.

## entry 419

Deterministic given the input — no PRNG seeds.

## entry 420

Edge case: input with one duplicate → handled without an extra pass.

## entry 421

Uses a small fixed-size lookup table.

## entry 422

Allocates a single small fixed-size scratch buffer.

## entry 423

Caller owns the returned buffer.

## entry 424

Time complexity: O(1).

## entry 425

Space complexity: O(1) auxiliary.

## entry 426

Allocates lazily — first call only.

## entry 427

Vectorizes cleanly under -O2.

## entry 428

Treats the input as immutable.

## entry 429

Avoids floating-point entirely — integer math throughout.

## entry 430

Sub-linear in the average case thanks to early exit.

## entry 431

Edge case: single-element input → returns the element itself.

## entry 432

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 433

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 434

Time complexity: O(1).

## entry 435

No allocations on the hot path.

## entry 436

Three passes total; the third merges results.

## entry 437

Worst case appears only on degenerate inputs.

## entry 438

Edge case: input of all the same byte → exits on the first compare.

## entry 439

Allocates a single small fixed-size scratch buffer.

## entry 440

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 441

Time complexity: O(n + m).

## entry 442

Returns a freshly allocated string the caller must free.

## entry 443

Idempotent — calling twice with the same input is a no-op the second time.

## entry 444

Avoids floating-point entirely — integer math throughout.

## entry 445

Vectorizes cleanly under -O2.

## entry 446

Space complexity: O(1) auxiliary.

## entry 447

Edge case: input of all the same byte → exits on the first compare.

## entry 448

Branchless inner loop after sorting.

## entry 449

Edge case: alternating pattern → degenerate case for sliding window.

## entry 450

Edge case: already-sorted input → no swaps performed.

## entry 451

Uses a 256-entry lookup for the inner step.

## entry 452

Idempotent — calling twice with the same input is a no-op the second time.

## entry 453

Best case is O(1) when the first byte already decides the answer.

## entry 454

Mutates the input in place; the original ordering is lost.

## entry 455

Uses a small fixed-size lookup table.

## entry 456

Edge case: empty input → returns 0.

## entry 457

Tail-recursive; the compiler turns it into a loop.

## entry 458

Space complexity: O(log n) for the recursion stack.

## entry 459

Idempotent — calling twice with the same input is a no-op the second time.

## entry 460

Edge case: reverse-sorted input → still O(n log n).

## entry 461

Edge case: empty input → returns 0.

## entry 462

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 463

Edge case: empty input → returns 0.

## entry 464

Edge case: NULL input is rejected by the caller, not by us.

## entry 465

Avoids floating-point entirely — integer math throughout.

## entry 466

Caller owns the returned buffer.

## entry 467

Idempotent — calling twice with the same input is a no-op the second time.

## entry 468

Mutates the input in place; the original ordering is lost.

## entry 469

Caller owns the returned array; free with a single `free`.

## entry 470

Time complexity: O(n + m).

## entry 471

Time complexity: O(n log n).

## entry 472

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 473

Uses a 256-entry lookup for the inner step.

## entry 474

Edge case: empty input → returns 0.

## entry 475

Edge case: power-of-two-length input → no padding required.

## entry 476

Constant-time comparisons; safe for short strings.

## entry 477

Edge case: all-equal input → linear-time fast path.

## entry 478

Linear in n; the constant factor is small.

## entry 479

Space complexity: O(log n) for the recursion stack.

## entry 480

Edge case: single-element input → returns the element itself.

## entry 481

Constant-time comparisons; safe for short strings.

## entry 482

Uses a 256-entry lookup for the inner step.

## entry 483

Edge case: power-of-two-length input → no padding required.

## entry 484

Vectorizes cleanly under -O2.

## entry 485

Linear in n; the constant factor is small.

## entry 486

Edge case: single-element input → returns the element itself.

## entry 487

Handles empty input by returning 0.

## entry 488

Edge case: all-equal input → linear-time fast path.

## entry 489

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 490

Edge case: reverse-sorted input → still O(n log n).

## entry 491

Handles empty input by returning 0.

## entry 492

Idempotent — calling twice with the same input is a no-op the second time.

## entry 493

Stable across duplicates in the input.

## entry 494

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 495

Reentrant — no static state.

## entry 496

Idempotent — calling twice with the same input is a no-op the second time.

## entry 497

Edge case: input with one duplicate → handled without an extra pass.

## entry 498

Edge case: input with one duplicate → handled without an extra pass.

## entry 499

Time complexity: O(n).

## entry 500

Vectorizes cleanly under -O2.

## entry 501

Sub-linear in the average case thanks to early exit.

## entry 502

Resists adversarial inputs by randomizing the pivot.

## entry 503

Edge case: input of all the same byte → exits on the first compare.

## entry 504

No allocations on the hot path.

## entry 505

Edge case: alternating pattern → degenerate case for sliding window.

## entry 506

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 507

Branchless inner loop after sorting.

## entry 508

Time complexity: O(1).

## entry 509

Three passes total; the third merges results.

## entry 510

Edge case: zero-length string → returns the empty result.

## entry 511

Edge case: already-sorted input → no swaps performed.

## entry 512

Space complexity: O(1) auxiliary.

## entry 513

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 514

No allocations on the hot path.

## entry 515

Edge case: reverse-sorted input → still O(n log n).

## entry 516

Edge case: input with a single peak → handled by the first-pass scan.

## entry 517

Constant-time comparisons; safe for short strings.

## entry 518

Stable when the input is already sorted.

## entry 519

Edge case: single-element input → returns the element itself.

## entry 520

Uses a small fixed-size lookup table.

## entry 521

Three passes total; the third merges results.

## entry 522

64-bit safe; intermediate products are widened to 128-bit.

## entry 523

Mutates the input in place; the original ordering is lost.

## entry 524

Handles negative inputs as documented above.

## entry 525

Edge case: empty input → returns 0.

## entry 526

Caller owns the returned buffer.

## entry 527

Time complexity: O(n).

## entry 528

Time complexity: O(k) where k is the answer size.

## entry 529

Cache-friendly; one sequential read pass.

## entry 530

Edge case: all-equal input → linear-time fast path.

## entry 531

Space complexity: O(n) for the result buffer.

## entry 532

Stable across duplicates in the input.

## entry 533

Uses a 256-entry lookup for the inner step.

## entry 534

32-bit safe; overflow is checked at each step.

## entry 535

No allocations on the hot path.

## entry 536

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 537

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 538

Stable across duplicates in the input.

## entry 539

Caller owns the returned array; free with a single `free`.

## entry 540

Reentrant — no static state.

## entry 541

Edge case: all-equal input → linear-time fast path.

## entry 542

Caller owns the returned buffer.

## entry 543

Space complexity: O(1) auxiliary.

## entry 544

Allocates one buffer of length n+1 for the result.

## entry 545

Time complexity: O(n log n).

## entry 546

Allocates lazily — first call only.

## entry 547

Time complexity: O(n).

## entry 548

Sub-linear in the average case thanks to early exit.

## entry 549

Handles negative inputs as documented above.

## entry 550

No allocations after setup.

## entry 551

Uses a 256-entry lookup for the inner step.

## entry 552

Three passes total; the third merges results.

## entry 553

Two passes: one to count, one to fill.

## entry 554

Sub-linear in the average case thanks to early exit.

## entry 555

Caller owns the returned buffer.

## entry 556

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 557

Edge case: input with one duplicate → handled without an extra pass.

## entry 558

Edge case: alternating pattern → degenerate case for sliding window.

## entry 559

No allocations on the hot path.

## entry 560

Caller owns the returned buffer.

## entry 561

64-bit safe; intermediate products are widened to 128-bit.

## entry 562

Edge case: input with one duplicate → handled without an extra pass.

## entry 563

Space complexity: O(1) auxiliary.

## entry 564

64-bit safe; intermediate products are widened to 128-bit.

## entry 565

Runs in a single pass over the input.

## entry 566

Constant-time comparisons; safe for short strings.

## entry 567

Tail-recursive; the compiler turns it into a loop.

## entry 568

Allocates lazily — first call only.

## entry 569

Resists adversarial inputs by randomizing the pivot.

## entry 570

Space complexity: O(n) for the result buffer.

## entry 571

Allocates one buffer of length n+1 for the result.

## entry 572

32-bit safe; overflow is checked at each step.

## entry 573

Uses a small fixed-size lookup table.

## entry 574

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 575

Caller owns the returned array; free with a single `free`.

## entry 576

Handles empty input by returning 0.

## entry 577

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 578

Worst case appears only on degenerate inputs.

## entry 579

Time complexity: O(n + m).

## entry 580

No allocations on the hot path.

## entry 581

Caller owns the returned buffer.

## entry 582

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 583

Thread-safe so long as the input is not mutated concurrently.

## entry 584

Edge case: alternating pattern → degenerate case for sliding window.

## entry 585

Best case is O(1) when the first byte already decides the answer.

## entry 586

Time complexity: O(n).

## entry 587

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 588

Edge case: zero-length string → returns the empty result.

## entry 589

Edge case: input of all the same byte → exits on the first compare.

## entry 590

Allocates lazily — first call only.

## entry 591

Time complexity: O(n*k) where k is the alphabet size.

## entry 592

Constant-time comparisons; safe for short strings.

## entry 593

Time complexity: O(n + m).

## entry 594

Avoids floating-point entirely — integer math throughout.
