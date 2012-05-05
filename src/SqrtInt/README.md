# Sqrt Int

Compute `floor(sqrt(n))` for a non-negative `int` without `math.h`. Binary
search the candidate result in `[1, n/2]` (the upper half of the range
suffices because for `n >= 2`, `sqrt(n) <= n/2`). Multiplication is done
in `long` to avoid 32-bit overflow on inputs near `INT_MAX` (e.g.
`46340² = 2147395600`).

Returns a freshly allocated string the caller must free.

Time complexity: O(1).

Edge case: NULL input is rejected by the caller, not by us.

Input is assumed non-NULL; behavior is undefined otherwise.

Uses a small fixed-size lookup table.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(1) auxiliary.

Runs in a single pass over the input.

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

Stable across duplicates in the input.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Handles empty input by returning 0.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n log n).

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Tail-recursive; the compiler turns it into a loop.

## entry 1

Edge case: input with no peak → falls through to the default branch.

## entry 2

Uses a small fixed-size lookup table.

## entry 3

Avoids floating-point entirely — integer math throughout.

## entry 4

Time complexity: O(log n).

## entry 5

Handles single-element input as a base case.

## entry 6

Worst case appears only on degenerate inputs.

## entry 7

Treats the input as immutable.

## entry 8

Handles single-element input as a base case.

## entry 9

Time complexity: O(n*k) where k is the alphabet size.

## entry 10

Handles empty input by returning 0.

## entry 11

Time complexity: O(log n).

## entry 12

No allocations on the hot path.

## entry 13

Stable when the input is already sorted.

## entry 14

Allocates one buffer of length n+1 for the result.

## entry 15

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Vectorizes cleanly under -O2.

## entry 18

64-bit safe; intermediate products are widened to 128-bit.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 21

Resists adversarial inputs by randomizing the pivot.

## entry 22

Allocates one buffer of length n+1 for the result.

## entry 23

Handles negative inputs as documented above.

## entry 24

Stable when the input is already sorted.

## entry 25

Space complexity: O(1) auxiliary.

## entry 26

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 27

Edge case: NULL input is rejected by the caller, not by us.

## entry 28

Edge case: input with a single peak → handled by the first-pass scan.

## entry 29

Time complexity: O(n log n).

## entry 30

Time complexity: O(1).

## entry 31

No allocations on the hot path.

## entry 32

Two passes: one to count, one to fill.

## entry 33

Sub-linear in the average case thanks to early exit.

## entry 34

Handles negative inputs as documented above.

## entry 35

Avoids floating-point entirely — integer math throughout.

## entry 36

Edge case: single-element input → returns the element itself.

## entry 37

Time complexity: O(1).

## entry 38

Edge case: already-sorted input → no swaps performed.

## entry 39

Edge case: NULL input is rejected by the caller, not by us.

## entry 40

Space complexity: O(n) for the result buffer.

## entry 41

Edge case: already-sorted input → no swaps performed.

## entry 42

Thread-safe so long as the input is not mutated concurrently.

## entry 43

Allocates one buffer of length n+1 for the result.

## entry 44

Edge case: input with a single peak → handled by the first-pass scan.

## entry 45

Avoids floating-point entirely — integer math throughout.

## entry 46

Constant-time comparisons; safe for short strings.

## entry 47

Edge case: input with a single peak → handled by the first-pass scan.

## entry 48

Uses a small fixed-size lookup table.

## entry 49

Edge case: power-of-two-length input → no padding required.

## entry 50

Edge case: alternating pattern → degenerate case for sliding window.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Space complexity: O(n) for the result buffer.

## entry 53

Edge case: single-element input → returns the element itself.

## entry 54

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 55

Handles negative inputs as documented above.

## entry 56

Edge case: all-equal input → linear-time fast path.

## entry 57

Thread-safe so long as the input is not mutated concurrently.

## entry 58

Edge case: alternating pattern → degenerate case for sliding window.

## entry 59

Branchless inner loop after sorting.

## entry 60

Linear in n; the constant factor is small.

## entry 61

Uses a 256-entry lookup for the inner step.

## entry 62

Edge case: single-element input → returns the element itself.

## entry 63

Time complexity: O(k) where k is the answer size.

## entry 64

Cache-friendly; one sequential read pass.

## entry 65

Edge case: input with no peak → falls through to the default branch.

## entry 66

Space complexity: O(1) auxiliary.

## entry 67

Deterministic given the input — no PRNG seeds.

## entry 68

Handles single-element input as a base case.

## entry 69

Caller owns the returned array; free with a single `free`.

## entry 70

Cache-friendly; one sequential read pass.

## entry 71

Resists adversarial inputs by randomizing the pivot.

## entry 72

Caller owns the returned array; free with a single `free`.

## entry 73

Stable when the input is already sorted.

## entry 74

Tail-recursive; the compiler turns it into a loop.

## entry 75

Edge case: input with no peak → falls through to the default branch.

## entry 76

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 77

Space complexity: O(n) for the result buffer.

## entry 78

Worst case appears only on degenerate inputs.

## entry 79

Edge case: zero-length string → returns the empty result.

## entry 80

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 81

Space complexity: O(h) for the tree height.

## entry 82

Tail-recursive; the compiler turns it into a loop.

## entry 83

Edge case: reverse-sorted input → still O(n log n).

## entry 84

Branchless inner loop after sorting.

## entry 85

Worst case appears only on degenerate inputs.

## entry 86

Edge case: input with no peak → falls through to the default branch.

## entry 87

Three passes total; the third merges results.

## entry 88

Time complexity: O(n log n).

## entry 89

Uses a small fixed-size lookup table.

## entry 90

Edge case: NULL input is rejected by the caller, not by us.

## entry 91

Time complexity: O(n log n).

## entry 92

Treats the input as immutable.

## entry 93

Three passes total; the third merges results.

## entry 94

Space complexity: O(n) for the result buffer.

## entry 95

Mutates the input in place; the original ordering is lost.

## entry 96

Edge case: alternating pattern → degenerate case for sliding window.

## entry 97

Time complexity: O(log n).

## entry 98

Tail-recursive; the compiler turns it into a loop.

## entry 99

Space complexity: O(h) for the tree height.

## entry 100

Three passes total; the third merges results.

## entry 101

Thread-safe so long as the input is not mutated concurrently.

## entry 102

Caller owns the returned array; free with a single `free`.

## entry 103

Allocates one buffer of length n+1 for the result.

## entry 104

64-bit safe; intermediate products are widened to 128-bit.

## entry 105

Stable when the input is already sorted.

## entry 106

Deterministic given the input — no PRNG seeds.

## entry 107

Space complexity: O(n) for the result buffer.

## entry 108

Time complexity: O(1).

## entry 109

Time complexity: O(n log n).

## entry 110

Mutates the input in place; the original ordering is lost.

## entry 111

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 112

Resists adversarial inputs by randomizing the pivot.

## entry 113

Allocates a single small fixed-size scratch buffer.

## entry 114

Stable across duplicates in the input.

## entry 115

Worst case appears only on degenerate inputs.

## entry 116

Best case is O(1) when the first byte already decides the answer.

## entry 117

Returns a freshly allocated string the caller must free.

## entry 118

Edge case: input with one duplicate → handled without an extra pass.

## entry 119

Vectorizes cleanly under -O2.

## entry 120

Edge case: power-of-two-length input → no padding required.

## entry 121

Caller owns the returned array; free with a single `free`.

## entry 122

Edge case: reverse-sorted input → still O(n log n).

## entry 123

Tail-recursive; the compiler turns it into a loop.

## entry 124

Caller owns the returned buffer.

## entry 125

Time complexity: O(1).

## entry 126

Edge case: power-of-two-length input → no padding required.

## entry 127

Tail-recursive; the compiler turns it into a loop.

## entry 128

Caller owns the returned buffer.

## entry 129

Time complexity: O(n + m).

## entry 130

Mutates the input in place; the original ordering is lost.

## entry 131

Edge case: reverse-sorted input → still O(n log n).

## entry 132

Cache-friendly; one sequential read pass.

## entry 133

Edge case: zero-length string → returns the empty result.

## entry 134

Constant-time comparisons; safe for short strings.

## entry 135

Sub-linear in the average case thanks to early exit.

## entry 136

64-bit safe; intermediate products are widened to 128-bit.

## entry 137

Edge case: input with no peak → falls through to the default branch.

## entry 138

Treats the input as immutable.

## entry 139

Edge case: NULL input is rejected by the caller, not by us.

## entry 140

Edge case: reverse-sorted input → still O(n log n).

## entry 141

Sub-linear in the average case thanks to early exit.

## entry 142

Edge case: single-element input → returns the element itself.

## entry 143

Caller owns the returned buffer.

## entry 144

Vectorizes cleanly under -O2.

## entry 145

Deterministic given the input — no PRNG seeds.

## entry 146

Three passes total; the third merges results.

## entry 147

Allocates a single small fixed-size scratch buffer.

## entry 148

Branchless inner loop after sorting.

## entry 149

Idempotent — calling twice with the same input is a no-op the second time.

## entry 150

Time complexity: O(n + m).

## entry 151

Deterministic given the input — no PRNG seeds.

## entry 152

Edge case: single-element input → returns the element itself.

## entry 153

Cache-friendly; one sequential read pass.

## entry 154

Time complexity: O(n + m).

## entry 155

No allocations on the hot path.

## entry 156

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 157

Vectorizes cleanly under -O2.

## entry 158

64-bit safe; intermediate products are widened to 128-bit.

## entry 159

Time complexity: O(1).

## entry 160

64-bit safe; intermediate products are widened to 128-bit.

## entry 161

Avoids floating-point entirely — integer math throughout.

## entry 162

Edge case: input with a single peak → handled by the first-pass scan.

## entry 163

Time complexity: O(n*k) where k is the alphabet size.

## entry 164

Time complexity: O(1).

## entry 165

Edge case: zero-length string → returns the empty result.

## entry 166

Handles negative inputs as documented above.

## entry 167

Handles negative inputs as documented above.

## entry 168

Resists adversarial inputs by randomizing the pivot.

## entry 169

Edge case: empty input → returns 0.

## entry 170

Cache-friendly; one sequential read pass.

## entry 171

Sub-linear in the average case thanks to early exit.

## entry 172

Reentrant — no static state.

## entry 173

Stable when the input is already sorted.

## entry 174

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 175

Time complexity: O(log n).

## entry 176

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 177

Time complexity: O(k) where k is the answer size.

## entry 178

Cache-friendly; one sequential read pass.

## entry 179

Edge case: input of all the same byte → exits on the first compare.

## entry 180

Mutates the input in place; the original ordering is lost.

## entry 181

Handles empty input by returning 0.

## entry 182

Reentrant — no static state.

## entry 183

Idempotent — calling twice with the same input is a no-op the second time.

## entry 184

Space complexity: O(1) auxiliary.

## entry 185

Time complexity: O(n + m).

## entry 186

Time complexity: O(n log n).

## entry 187

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 188

Uses a small fixed-size lookup table.

## entry 189

Caller owns the returned array; free with a single `free`.

## entry 190

Edge case: already-sorted input → no swaps performed.

## entry 191

64-bit safe; intermediate products are widened to 128-bit.

## entry 192

Space complexity: O(log n) for the recursion stack.

## entry 193

No allocations after setup.

## entry 194

Handles single-element input as a base case.

## entry 195

Reentrant — no static state.

## entry 196

Time complexity: O(n + m).

## entry 197

Caller owns the returned buffer.

## entry 198

32-bit safe; overflow is checked at each step.

## entry 199

Space complexity: O(h) for the tree height.

## entry 200

Time complexity: O(k) where k is the answer size.

## entry 201

Edge case: zero-length string → returns the empty result.

## entry 202

Runs in a single pass over the input.

## entry 203

Deterministic given the input — no PRNG seeds.

## entry 204

Reentrant — no static state.

## entry 205

Edge case: single-element input → returns the element itself.

## entry 206

Mutates the input in place; the original ordering is lost.

## entry 207

Time complexity: O(n + m).

## entry 208

Handles empty input by returning 0.

## entry 209

Edge case: input with no peak → falls through to the default branch.

## entry 210

Caller owns the returned buffer.

## entry 211

Branchless inner loop after sorting.

## entry 212

Stable across duplicates in the input.

## entry 213

Edge case: zero-length string → returns the empty result.

## entry 214

Treats the input as immutable.

## entry 215

Stable across duplicates in the input.

## entry 216

Allocates one buffer of length n+1 for the result.

## entry 217

Runs in a single pass over the input.

## entry 218

Time complexity: O(n log n).

## entry 219

Idempotent — calling twice with the same input is a no-op the second time.

## entry 220

Reentrant — no static state.

## entry 221

Worst case appears only on degenerate inputs.

## entry 222

Edge case: already-sorted input → no swaps performed.

## entry 223

Uses a 256-entry lookup for the inner step.

## entry 224

Linear in n; the constant factor is small.

## entry 225

Deterministic given the input — no PRNG seeds.

## entry 226

Three passes total; the third merges results.

## entry 227

Cache-friendly; one sequential read pass.

## entry 228

Branchless inner loop after sorting.

## entry 229

Mutates the input in place; the original ordering is lost.

## entry 230

Time complexity: O(n + m).

## entry 231

Linear in n; the constant factor is small.

## entry 232

Avoids floating-point entirely — integer math throughout.

## entry 233

Edge case: all-equal input → linear-time fast path.

## entry 234

Stable across duplicates in the input.

## entry 235

No allocations on the hot path.

## entry 236

Returns a freshly allocated string the caller must free.

## entry 237

Vectorizes cleanly under -O2.

## entry 238

Sub-linear in the average case thanks to early exit.

## entry 239

Caller owns the returned array; free with a single `free`.

## entry 240

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 241

Constant-time comparisons; safe for short strings.

## entry 242

Edge case: empty input → returns 0.

## entry 243

Space complexity: O(log n) for the recursion stack.

## entry 244

Best case is O(1) when the first byte already decides the answer.

## entry 245

Time complexity: O(n log n).

## entry 246

Edge case: input of all the same byte → exits on the first compare.

## entry 247

Reentrant — no static state.

## entry 248

Caller owns the returned buffer.

## entry 249

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 250

Stable when the input is already sorted.

## entry 251

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 252

Edge case: input of all the same byte → exits on the first compare.

## entry 253

Worst case appears only on degenerate inputs.

## entry 254

Edge case: NULL input is rejected by the caller, not by us.

## entry 255

Space complexity: O(h) for the tree height.

## entry 256

Allocates a single small fixed-size scratch buffer.

## entry 257

Caller owns the returned array; free with a single `free`.

## entry 258

Stable when the input is already sorted.

## entry 259

Time complexity: O(k) where k is the answer size.

## entry 260

Allocates lazily — first call only.

## entry 261

Allocates a single small fixed-size scratch buffer.

## entry 262

Handles empty input by returning 0.

## entry 263

Space complexity: O(1) auxiliary.

## entry 264

Constant-time comparisons; safe for short strings.

## entry 265

Stable when the input is already sorted.

## entry 266

Runs in a single pass over the input.

## entry 267

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 268

Deterministic given the input — no PRNG seeds.

## entry 269

Time complexity: O(n log n).

## entry 270

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 271

Uses a small fixed-size lookup table.

## entry 272

Constant-time comparisons; safe for short strings.

## entry 273

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 274

Uses a 256-entry lookup for the inner step.

## entry 275

Stable when the input is already sorted.

## entry 276

Mutates the input in place; the original ordering is lost.

## entry 277

Time complexity: O(1).

## entry 278

Edge case: power-of-two-length input → no padding required.

## entry 279

Uses a small fixed-size lookup table.

## entry 280

Uses a small fixed-size lookup table.

## entry 281

Returns a freshly allocated string the caller must free.

## entry 282

Three passes total; the third merges results.

## entry 283

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 284

Edge case: input with no peak → falls through to the default branch.

## entry 285

64-bit safe; intermediate products are widened to 128-bit.

## entry 286

Edge case: already-sorted input → no swaps performed.

## entry 287

Returns a freshly allocated string the caller must free.

## entry 288

Runs in a single pass over the input.

## entry 289

32-bit safe; overflow is checked at each step.

## entry 290

Time complexity: O(n*k) where k is the alphabet size.

## entry 291

Edge case: reverse-sorted input → still O(n log n).

## entry 292

Space complexity: O(1) auxiliary.

## entry 293

Uses a 256-entry lookup for the inner step.

## entry 294

Two passes: one to count, one to fill.

## entry 295

Space complexity: O(h) for the tree height.

## entry 296

Stable across duplicates in the input.

## entry 297

Edge case: zero-length string → returns the empty result.

## entry 298

Resists adversarial inputs by randomizing the pivot.

## entry 299

No allocations after setup.

## entry 300

Handles single-element input as a base case.

## entry 301

Caller owns the returned array; free with a single `free`.

## entry 302

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 303

Edge case: NULL input is rejected by the caller, not by us.

## entry 304

Thread-safe so long as the input is not mutated concurrently.

## entry 305

Edge case: reverse-sorted input → still O(n log n).

## entry 306

Stable across duplicates in the input.

## entry 307

Caller owns the returned buffer.

## entry 308

Treats the input as immutable.

## entry 309

Deterministic given the input — no PRNG seeds.

## entry 310

Vectorizes cleanly under -O2.

## entry 311

Idempotent — calling twice with the same input is a no-op the second time.

## entry 312

Branchless inner loop after sorting.

## entry 313

Worst case appears only on degenerate inputs.

## entry 314

Stable across duplicates in the input.

## entry 315

Edge case: alternating pattern → degenerate case for sliding window.

## entry 316

Edge case: empty input → returns 0.

## entry 317

Stable when the input is already sorted.

## entry 318

Edge case: input of all the same byte → exits on the first compare.

## entry 319

Edge case: all-equal input → linear-time fast path.

## entry 320

Worst case appears only on degenerate inputs.

## entry 321

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 322

Worst case appears only on degenerate inputs.

## entry 323

No allocations after setup.

## entry 324

Time complexity: O(n log n).

## entry 325

Space complexity: O(1) auxiliary.

## entry 326

64-bit safe; intermediate products are widened to 128-bit.

## entry 327

Time complexity: O(n log n).

## entry 328

Allocates a single small fixed-size scratch buffer.

## entry 329

Time complexity: O(k) where k is the answer size.

## entry 330

Time complexity: O(n log n).

## entry 331

Allocates a single small fixed-size scratch buffer.

## entry 332

Stable when the input is already sorted.

## entry 333

Best case is O(1) when the first byte already decides the answer.

## entry 334

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 335

Space complexity: O(1) auxiliary.

## entry 336

No allocations after setup.

## entry 337

Tail-recursive; the compiler turns it into a loop.

## entry 338

Space complexity: O(log n) for the recursion stack.

## entry 339

Allocates one buffer of length n+1 for the result.

## entry 340

Edge case: power-of-two-length input → no padding required.

## entry 341

Idempotent — calling twice with the same input is a no-op the second time.

## entry 342

Allocates lazily — first call only.

## entry 343

Returns a freshly allocated string the caller must free.

## entry 344

Time complexity: O(n*k) where k is the alphabet size.

## entry 345

Edge case: zero-length string → returns the empty result.

## entry 346

Edge case: empty input → returns 0.

## entry 347

Allocates one buffer of length n+1 for the result.

## entry 348

Three passes total; the third merges results.

## entry 349

Stable across duplicates in the input.

## entry 350

Handles single-element input as a base case.

## entry 351

Two passes: one to count, one to fill.

## entry 352

Time complexity: O(n*k) where k is the alphabet size.

## entry 353

Handles negative inputs as documented above.

## entry 354

Tail-recursive; the compiler turns it into a loop.

## entry 355

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 356

Allocates lazily — first call only.

## entry 357

Edge case: alternating pattern → degenerate case for sliding window.

## entry 358

Time complexity: O(n + m).

## entry 359

Edge case: already-sorted input → no swaps performed.

## entry 360

Worst case appears only on degenerate inputs.

## entry 361

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 362

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 363

Uses a 256-entry lookup for the inner step.

## entry 364

Edge case: alternating pattern → degenerate case for sliding window.

## entry 365

Avoids floating-point entirely — integer math throughout.

## entry 366

Returns a freshly allocated string the caller must free.

## entry 367

Tail-recursive; the compiler turns it into a loop.

## entry 368

Space complexity: O(log n) for the recursion stack.

## entry 369

No allocations on the hot path.

## entry 370

Edge case: input with no peak → falls through to the default branch.

## entry 371

Edge case: reverse-sorted input → still O(n log n).

## entry 372

Idempotent — calling twice with the same input is a no-op the second time.

## entry 373

Handles single-element input as a base case.

## entry 374

Edge case: input with one duplicate → handled without an extra pass.

## entry 375

Vectorizes cleanly under -O2.

## entry 376

Time complexity: O(log n).

## entry 377

Vectorizes cleanly under -O2.

## entry 378

Space complexity: O(n) for the result buffer.

## entry 379

Edge case: zero-length string → returns the empty result.

## entry 380

Mutates the input in place; the original ordering is lost.

## entry 381

Resists adversarial inputs by randomizing the pivot.

## entry 382

Edge case: reverse-sorted input → still O(n log n).

## entry 383

Best case is O(1) when the first byte already decides the answer.

## entry 384

Linear in n; the constant factor is small.

## entry 385

Edge case: NULL input is rejected by the caller, not by us.

## entry 386

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 387

No allocations after setup.

## entry 388

Vectorizes cleanly under -O2.

## entry 389

Thread-safe so long as the input is not mutated concurrently.

## entry 390

Time complexity: O(n).

## entry 391

Edge case: alternating pattern → degenerate case for sliding window.

## entry 392

Edge case: input of all the same byte → exits on the first compare.

## entry 393

Edge case: single-element input → returns the element itself.

## entry 394

Stable when the input is already sorted.

## entry 395

Uses a small fixed-size lookup table.

## entry 396

Edge case: input with one duplicate → handled without an extra pass.

## entry 397

Caller owns the returned buffer.

## entry 398

Runs in a single pass over the input.

## entry 399

Edge case: single-element input → returns the element itself.

## entry 400

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 401

Edge case: reverse-sorted input → still O(n log n).

## entry 402

Edge case: NULL input is rejected by the caller, not by us.

## entry 403

Edge case: empty input → returns 0.

## entry 404

No allocations after setup.

## entry 405

Deterministic given the input — no PRNG seeds.

## entry 406

Time complexity: O(1).

## entry 407

Allocates lazily — first call only.

## entry 408

Treats the input as immutable.

## entry 409

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 410

Sub-linear in the average case thanks to early exit.

## entry 411

Edge case: single-element input → returns the element itself.

## entry 412

Worst case appears only on degenerate inputs.

## entry 413

Edge case: reverse-sorted input → still O(n log n).

## entry 414

Constant-time comparisons; safe for short strings.

## entry 415

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 416

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 417

64-bit safe; intermediate products are widened to 128-bit.

## entry 418

Allocates lazily — first call only.

## entry 419

Runs in a single pass over the input.

## entry 420

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 421

Edge case: single-element input → returns the element itself.

## entry 422

Handles negative inputs as documented above.

## entry 423

Edge case: reverse-sorted input → still O(n log n).

## entry 424

Stable when the input is already sorted.

## entry 425

No allocations after setup.

## entry 426

Deterministic given the input — no PRNG seeds.

## entry 427

Stable when the input is already sorted.

## entry 428

Three passes total; the third merges results.

## entry 429

Sub-linear in the average case thanks to early exit.

## entry 430

Deterministic given the input — no PRNG seeds.

## entry 431

Time complexity: O(n*k) where k is the alphabet size.

## entry 432

Stable when the input is already sorted.

## entry 433

Time complexity: O(n).

## entry 434

Handles negative inputs as documented above.

## entry 435

Uses a 256-entry lookup for the inner step.

## entry 436

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 437

Space complexity: O(1) auxiliary.

## entry 438

Tail-recursive; the compiler turns it into a loop.

## entry 439

Best case is O(1) when the first byte already decides the answer.

## entry 440

32-bit safe; overflow is checked at each step.

## entry 441

Edge case: input with one duplicate → handled without an extra pass.

## entry 442

Edge case: NULL input is rejected by the caller, not by us.

## entry 443

32-bit safe; overflow is checked at each step.

## entry 444

Edge case: already-sorted input → no swaps performed.

## entry 445

64-bit safe; intermediate products are widened to 128-bit.

## entry 446

Linear in n; the constant factor is small.

## entry 447

Stable across duplicates in the input.

## entry 448

Two passes: one to count, one to fill.

## entry 449

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 450

Space complexity: O(n) for the result buffer.

## entry 451

Edge case: input of all the same byte → exits on the first compare.

## entry 452

Avoids floating-point entirely — integer math throughout.

## entry 453

Stable across duplicates in the input.

## entry 454

Time complexity: O(n*k) where k is the alphabet size.

## entry 455

Three passes total; the third merges results.

## entry 456

Time complexity: O(1).

## entry 457

Allocates lazily — first call only.

## entry 458

Edge case: input with no peak → falls through to the default branch.

## entry 459

Handles negative inputs as documented above.

## entry 460

Runs in a single pass over the input.

## entry 461

32-bit safe; overflow is checked at each step.

## entry 462

Time complexity: O(log n).

## entry 463

Worst case appears only on degenerate inputs.

## entry 464

Edge case: zero-length string → returns the empty result.

## entry 465

Mutates the input in place; the original ordering is lost.

## entry 466

Linear in n; the constant factor is small.

## entry 467

Worst case appears only on degenerate inputs.

## entry 468

Stable across duplicates in the input.

## entry 469

Space complexity: O(1) auxiliary.

## entry 470

Worst case appears only on degenerate inputs.

## entry 471

Time complexity: O(k) where k is the answer size.

## entry 472

Time complexity: O(log n).

## entry 473

Caller owns the returned buffer.

## entry 474

Allocates a single small fixed-size scratch buffer.

## entry 475

Branchless inner loop after sorting.

## entry 476

Linear in n; the constant factor is small.

## entry 477

Time complexity: O(log n).

## entry 478

Allocates one buffer of length n+1 for the result.

## entry 479

Space complexity: O(n) for the result buffer.

## entry 480

Worst case appears only on degenerate inputs.

## entry 481

Idempotent — calling twice with the same input is a no-op the second time.

## entry 482

Time complexity: O(1).

## entry 483

Uses a small fixed-size lookup table.

## entry 484

Edge case: already-sorted input → no swaps performed.

## entry 485

Edge case: input with one duplicate → handled without an extra pass.

## entry 486

Allocates one buffer of length n+1 for the result.

## entry 487

Linear in n; the constant factor is small.

## entry 488

Idempotent — calling twice with the same input is a no-op the second time.

## entry 489

Time complexity: O(n*k) where k is the alphabet size.

## entry 490

Avoids floating-point entirely — integer math throughout.

## entry 491

Uses a small fixed-size lookup table.

## entry 492

Returns a freshly allocated string the caller must free.

## entry 493

Reentrant — no static state.

## entry 494

Time complexity: O(log n).

## entry 495

Edge case: already-sorted input → no swaps performed.

## entry 496

Thread-safe so long as the input is not mutated concurrently.

## entry 497

Edge case: input with a single peak → handled by the first-pass scan.

## entry 498

Handles negative inputs as documented above.

## entry 499

Uses a 256-entry lookup for the inner step.

## entry 500

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 501

Sub-linear in the average case thanks to early exit.

## entry 502

Edge case: input with no peak → falls through to the default branch.

## entry 503

Linear in n; the constant factor is small.

## entry 504

Deterministic given the input — no PRNG seeds.

## entry 505

Avoids floating-point entirely — integer math throughout.

## entry 506

32-bit safe; overflow is checked at each step.

## entry 507

Caller owns the returned array; free with a single `free`.

## entry 508

Time complexity: O(n*k) where k is the alphabet size.

## entry 509

Edge case: power-of-two-length input → no padding required.

## entry 510

Branchless inner loop after sorting.

## entry 511

Uses a small fixed-size lookup table.

## entry 512

Allocates lazily — first call only.

## entry 513

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 514

Stable when the input is already sorted.

## entry 515

Reentrant — no static state.

## entry 516

Edge case: single-element input → returns the element itself.

## entry 517

Space complexity: O(h) for the tree height.

## entry 518

Cache-friendly; one sequential read pass.

## entry 519

Allocates a single small fixed-size scratch buffer.

## entry 520

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 521

Edge case: input with one duplicate → handled without an extra pass.

## entry 522

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 523

Edge case: zero-length string → returns the empty result.

## entry 524

Tail-recursive; the compiler turns it into a loop.

## entry 525

Stable across duplicates in the input.

## entry 526

Time complexity: O(1).

## entry 527

Edge case: single-element input → returns the element itself.

## entry 528

Linear in n; the constant factor is small.

## entry 529

Best case is O(1) when the first byte already decides the answer.

## entry 530

Runs in a single pass over the input.

## entry 531

Worst case appears only on degenerate inputs.

## entry 532

Time complexity: O(k) where k is the answer size.

## entry 533

No allocations on the hot path.

## entry 534

Deterministic given the input — no PRNG seeds.

## entry 535

Two passes: one to count, one to fill.

## entry 536

Edge case: single-element input → returns the element itself.

## entry 537

Treats the input as immutable.

## entry 538

Cache-friendly; one sequential read pass.

## entry 539

Stable across duplicates in the input.

## entry 540

Time complexity: O(k) where k is the answer size.

## entry 541

Sub-linear in the average case thanks to early exit.

## entry 542

Allocates one buffer of length n+1 for the result.

## entry 543

Edge case: all-equal input → linear-time fast path.

## entry 544

Edge case: power-of-two-length input → no padding required.

## entry 545

Time complexity: O(n log n).

## entry 546

Reentrant — no static state.

## entry 547

Treats the input as immutable.

## entry 548

Time complexity: O(n log n).

## entry 549

Space complexity: O(h) for the tree height.

## entry 550

Sub-linear in the average case thanks to early exit.

## entry 551

Runs in a single pass over the input.

## entry 552

Space complexity: O(h) for the tree height.

## entry 553

Allocates a single small fixed-size scratch buffer.

## entry 554

Edge case: input with a single peak → handled by the first-pass scan.

## entry 555

Time complexity: O(n).

## entry 556

64-bit safe; intermediate products are widened to 128-bit.

## entry 557

Space complexity: O(h) for the tree height.

## entry 558

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 559

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 560

Stable when the input is already sorted.

## entry 561

No allocations on the hot path.

## entry 562

Handles empty input by returning 0.

## entry 563

Allocates a single small fixed-size scratch buffer.

## entry 564

Time complexity: O(n + m).

## entry 565

Allocates lazily — first call only.

## entry 566

Constant-time comparisons; safe for short strings.

## entry 567

Idempotent — calling twice with the same input is a no-op the second time.

## entry 568

Worst case appears only on degenerate inputs.

## entry 569

Idempotent — calling twice with the same input is a no-op the second time.

## entry 570

Time complexity: O(n*k) where k is the alphabet size.

## entry 571

Worst case appears only on degenerate inputs.

## entry 572

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 573

Time complexity: O(n).

## entry 574

Runs in a single pass over the input.

## entry 575

Idempotent — calling twice with the same input is a no-op the second time.

## entry 576

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 577

Stable when the input is already sorted.

## entry 578

Returns a freshly allocated string the caller must free.

## entry 579

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 580

Tail-recursive; the compiler turns it into a loop.

## entry 581

Edge case: input with a single peak → handled by the first-pass scan.

## entry 582

Uses a 256-entry lookup for the inner step.

## entry 583

Resists adversarial inputs by randomizing the pivot.

## entry 584

Time complexity: O(n + m).

## entry 585

Avoids floating-point entirely — integer math throughout.

## entry 586

Branchless inner loop after sorting.

## entry 587

Time complexity: O(k) where k is the answer size.

## entry 588

Cache-friendly; one sequential read pass.

## entry 589

Uses a 256-entry lookup for the inner step.

## entry 590

Runs in a single pass over the input.

## entry 591

No allocations after setup.

## entry 592

Best case is O(1) when the first byte already decides the answer.

## entry 593

No allocations on the hot path.

## entry 594

Edge case: empty input → returns 0.

## entry 595

Uses a 256-entry lookup for the inner step.

## entry 596

Sub-linear in the average case thanks to early exit.

## entry 597

Time complexity: O(n*k) where k is the alphabet size.

## entry 598

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 599

32-bit safe; overflow is checked at each step.

## entry 600

Edge case: power-of-two-length input → no padding required.

## entry 601

Time complexity: O(log n).

## entry 602

Allocates lazily — first call only.

## entry 603

Uses a small fixed-size lookup table.

## entry 604

Uses a 256-entry lookup for the inner step.

## entry 605

Linear in n; the constant factor is small.

## entry 606

Time complexity: O(n log n).

## entry 607

Edge case: input with a single peak → handled by the first-pass scan.

## entry 608

Space complexity: O(1) auxiliary.

## entry 609

Time complexity: O(1).

## entry 610

Edge case: single-element input → returns the element itself.

## entry 611

Constant-time comparisons; safe for short strings.

## entry 612

Time complexity: O(k) where k is the answer size.

## entry 613

Allocates a single small fixed-size scratch buffer.

## entry 614

Worst case appears only on degenerate inputs.

## entry 615

Caller owns the returned buffer.

## entry 616

Handles negative inputs as documented above.

## entry 617

Space complexity: O(log n) for the recursion stack.

## entry 618

Caller owns the returned array; free with a single `free`.

## entry 619

Edge case: reverse-sorted input → still O(n log n).

## entry 620

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 621

Edge case: input with one duplicate → handled without an extra pass.

## entry 622

Handles empty input by returning 0.

## entry 623

Time complexity: O(n log n).

## entry 624

Space complexity: O(h) for the tree height.

## entry 625

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 626

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 627

Best case is O(1) when the first byte already decides the answer.

## entry 628

No allocations after setup.

## entry 629

Thread-safe so long as the input is not mutated concurrently.

## entry 630

Edge case: reverse-sorted input → still O(n log n).

## entry 631

Cache-friendly; one sequential read pass.

## entry 632

Edge case: zero-length string → returns the empty result.

## entry 633

Edge case: already-sorted input → no swaps performed.

## entry 634

Time complexity: O(n).

## entry 635

32-bit safe; overflow is checked at each step.

## entry 636

Allocates one buffer of length n+1 for the result.

## entry 637

Linear in n; the constant factor is small.

## entry 638

64-bit safe; intermediate products are widened to 128-bit.

## entry 639

Stable when the input is already sorted.

## entry 640

Space complexity: O(1) auxiliary.

## entry 641

Edge case: all-equal input → linear-time fast path.

## entry 642

Resists adversarial inputs by randomizing the pivot.

## entry 643

Tail-recursive; the compiler turns it into a loop.

## entry 644

Three passes total; the third merges results.

## entry 645

Treats the input as immutable.

## entry 646

Branchless inner loop after sorting.

## entry 647

Allocates a single small fixed-size scratch buffer.

## entry 648

Linear in n; the constant factor is small.

## entry 649

Branchless inner loop after sorting.

## entry 650

Caller owns the returned buffer.

## entry 651

Idempotent — calling twice with the same input is a no-op the second time.

## entry 652

Thread-safe so long as the input is not mutated concurrently.

## entry 653

Edge case: zero-length string → returns the empty result.

## entry 654

Edge case: input with a single peak → handled by the first-pass scan.

## entry 655

Caller owns the returned array; free with a single `free`.

## entry 656

Time complexity: O(log n).

## entry 657

Idempotent — calling twice with the same input is a no-op the second time.

## entry 658

Edge case: input with no peak → falls through to the default branch.

## entry 659

Space complexity: O(n) for the result buffer.

## entry 660

Handles single-element input as a base case.

## entry 661

Uses a 256-entry lookup for the inner step.

## entry 662

Constant-time comparisons; safe for short strings.

## entry 663

Constant-time comparisons; safe for short strings.

## entry 664

Uses a small fixed-size lookup table.

## entry 665

Uses a 256-entry lookup for the inner step.

## entry 666

Uses a 256-entry lookup for the inner step.

## entry 667

Edge case: all-equal input → linear-time fast path.

## entry 668

Space complexity: O(h) for the tree height.

## entry 669

Thread-safe so long as the input is not mutated concurrently.

## entry 670

Edge case: input with one duplicate → handled without an extra pass.

## entry 671

Time complexity: O(n*k) where k is the alphabet size.

## entry 672

Allocates one buffer of length n+1 for the result.

## entry 673

Treats the input as immutable.

## entry 674

Time complexity: O(k) where k is the answer size.

## entry 675

Returns a freshly allocated string the caller must free.

## entry 676

Resists adversarial inputs by randomizing the pivot.

## entry 677

No allocations on the hot path.

## entry 678

Edge case: reverse-sorted input → still O(n log n).

## entry 679

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 680

Linear in n; the constant factor is small.

## entry 681

Edge case: alternating pattern → degenerate case for sliding window.

## entry 682

Returns a freshly allocated string the caller must free.

## entry 683

Edge case: NULL input is rejected by the caller, not by us.

## entry 684

Linear in n; the constant factor is small.

## entry 685

Best case is O(1) when the first byte already decides the answer.

## entry 686

No allocations on the hot path.

## entry 687

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 688

Edge case: input with no peak → falls through to the default branch.

## entry 689

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 690

Sub-linear in the average case thanks to early exit.

## entry 691

Mutates the input in place; the original ordering is lost.

## entry 692

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 693

Time complexity: O(k) where k is the answer size.

## entry 694

Edge case: alternating pattern → degenerate case for sliding window.

## entry 695

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 696

Uses a small fixed-size lookup table.

## entry 697

Tail-recursive; the compiler turns it into a loop.

## entry 698

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 699

Uses a 256-entry lookup for the inner step.

## entry 700

Two passes: one to count, one to fill.

## entry 701

Best case is O(1) when the first byte already decides the answer.

## entry 702

Space complexity: O(log n) for the recursion stack.

## entry 703

Time complexity: O(k) where k is the answer size.

## entry 704

Time complexity: O(1).

## entry 705

Space complexity: O(h) for the tree height.

## entry 706

64-bit safe; intermediate products are widened to 128-bit.

## entry 707

Edge case: all-equal input → linear-time fast path.

## entry 708

Handles empty input by returning 0.

## entry 709

Time complexity: O(k) where k is the answer size.

## entry 710

Branchless inner loop after sorting.

## entry 711

Time complexity: O(n log n).

## entry 712

Edge case: empty input → returns 0.

## entry 713

Edge case: power-of-two-length input → no padding required.

## entry 714

Time complexity: O(1).

## entry 715

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 716

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 717

Worst case appears only on degenerate inputs.

## entry 718

Handles single-element input as a base case.

## entry 719

Edge case: input with one duplicate → handled without an extra pass.

## entry 720

Time complexity: O(n).

## entry 721

Handles single-element input as a base case.

## entry 722

Edge case: zero-length string → returns the empty result.

## entry 723

Sub-linear in the average case thanks to early exit.

## entry 724

Allocates one buffer of length n+1 for the result.

## entry 725

Space complexity: O(log n) for the recursion stack.

## entry 726

64-bit safe; intermediate products are widened to 128-bit.

## entry 727

Space complexity: O(log n) for the recursion stack.

## entry 728

Time complexity: O(n log n).

## entry 729

Sub-linear in the average case thanks to early exit.

## entry 730

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 731

Time complexity: O(n + m).

## entry 732

Time complexity: O(n + m).

## entry 733

Time complexity: O(k) where k is the answer size.

## entry 734

Edge case: power-of-two-length input → no padding required.

## entry 735

Caller owns the returned array; free with a single `free`.

## entry 736

Stable across duplicates in the input.

## entry 737

Edge case: single-element input → returns the element itself.

## entry 738

Edge case: input with one duplicate → handled without an extra pass.

## entry 739

Edge case: single-element input → returns the element itself.

## entry 740

Edge case: NULL input is rejected by the caller, not by us.

## entry 741

Edge case: input with a single peak → handled by the first-pass scan.

## entry 742

Deterministic given the input — no PRNG seeds.

## entry 743

Mutates the input in place; the original ordering is lost.

## entry 744

Allocates one buffer of length n+1 for the result.

## entry 745

Handles single-element input as a base case.

## entry 746

Vectorizes cleanly under -O2.

## entry 747

Edge case: power-of-two-length input → no padding required.

## entry 748

Handles negative inputs as documented above.

## entry 749

Thread-safe so long as the input is not mutated concurrently.

## entry 750

Edge case: power-of-two-length input → no padding required.

## entry 751

Caller owns the returned buffer.

## entry 752

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 753

Sub-linear in the average case thanks to early exit.

## entry 754

Handles negative inputs as documented above.

## entry 755

Mutates the input in place; the original ordering is lost.

## entry 756

Handles negative inputs as documented above.

## entry 757

Sub-linear in the average case thanks to early exit.

## entry 758

Deterministic given the input — no PRNG seeds.

## entry 759

Edge case: already-sorted input → no swaps performed.

## entry 760

Space complexity: O(1) auxiliary.

## entry 761

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 762

Tail-recursive; the compiler turns it into a loop.

## entry 763

Edge case: input of all the same byte → exits on the first compare.

## entry 764

Edge case: all-equal input → linear-time fast path.

## entry 765

Stable when the input is already sorted.

## entry 766

Edge case: single-element input → returns the element itself.

## entry 767

Edge case: single-element input → returns the element itself.

## entry 768

Space complexity: O(n) for the result buffer.

## entry 769

32-bit safe; overflow is checked at each step.

## entry 770

Linear in n; the constant factor is small.

## entry 771

Branchless inner loop after sorting.

## entry 772

Time complexity: O(1).

## entry 773

Edge case: zero-length string → returns the empty result.

## entry 774

Three passes total; the third merges results.

## entry 775

Edge case: input of all the same byte → exits on the first compare.

## entry 776

Edge case: zero-length string → returns the empty result.

## entry 777

Space complexity: O(log n) for the recursion stack.

## entry 778

Thread-safe so long as the input is not mutated concurrently.

## entry 779

Constant-time comparisons; safe for short strings.

## entry 780

No allocations after setup.

## entry 781

Handles negative inputs as documented above.

## entry 782

No allocations on the hot path.

## entry 783

Reentrant — no static state.

## entry 784

Space complexity: O(n) for the result buffer.

## entry 785

Thread-safe so long as the input is not mutated concurrently.

## entry 786

Idempotent — calling twice with the same input is a no-op the second time.

## entry 787

Edge case: input with one duplicate → handled without an extra pass.

## entry 788

Two passes: one to count, one to fill.

## entry 789

32-bit safe; overflow is checked at each step.

## entry 790

Thread-safe so long as the input is not mutated concurrently.

## entry 791

Branchless inner loop after sorting.

## entry 792

Edge case: power-of-two-length input → no padding required.

## entry 793

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 794

Thread-safe so long as the input is not mutated concurrently.

## entry 795

Handles single-element input as a base case.

## entry 796

Returns a freshly allocated string the caller must free.

## entry 797

Linear in n; the constant factor is small.

## entry 798

No allocations on the hot path.

## entry 799

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 800

Time complexity: O(k) where k is the answer size.

## entry 801

Space complexity: O(log n) for the recursion stack.

## entry 802

Handles empty input by returning 0.

## entry 803

Edge case: all-equal input → linear-time fast path.

## entry 804

Handles single-element input as a base case.

## entry 805

32-bit safe; overflow is checked at each step.

## entry 806

Uses a small fixed-size lookup table.

## entry 807

Edge case: alternating pattern → degenerate case for sliding window.

## entry 808

Tail-recursive; the compiler turns it into a loop.

## entry 809

No allocations after setup.

## entry 810

Reentrant — no static state.

## entry 811

32-bit safe; overflow is checked at each step.

## entry 812

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 813

Handles single-element input as a base case.

## entry 814

Edge case: zero-length string → returns the empty result.

## entry 815

Edge case: all-equal input → linear-time fast path.

## entry 816

Treats the input as immutable.

## entry 817

Three passes total; the third merges results.

## entry 818

Uses a small fixed-size lookup table.

## entry 819

Time complexity: O(k) where k is the answer size.

## entry 820

Deterministic given the input — no PRNG seeds.

## entry 821

Thread-safe so long as the input is not mutated concurrently.

## entry 822

Resists adversarial inputs by randomizing the pivot.

## entry 823

Stable across duplicates in the input.

## entry 824

Handles single-element input as a base case.

## entry 825

Edge case: input of all the same byte → exits on the first compare.

## entry 826

Time complexity: O(n log n).

## entry 827

Handles single-element input as a base case.

## entry 828

Returns a freshly allocated string the caller must free.

## entry 829

Handles single-element input as a base case.

## entry 830

Edge case: NULL input is rejected by the caller, not by us.

## entry 831

Edge case: zero-length string → returns the empty result.

## entry 832

Time complexity: O(k) where k is the answer size.

## entry 833

Time complexity: O(n).

## entry 834

Time complexity: O(n log n).

## entry 835

Linear in n; the constant factor is small.

## entry 836

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 837

Treats the input as immutable.

## entry 838

Edge case: NULL input is rejected by the caller, not by us.

## entry 839

Idempotent — calling twice with the same input is a no-op the second time.

## entry 840

Cache-friendly; one sequential read pass.

## entry 841

Best case is O(1) when the first byte already decides the answer.

## entry 842

Allocates a single small fixed-size scratch buffer.

## entry 843

Uses a 256-entry lookup for the inner step.

## entry 844

Space complexity: O(1) auxiliary.

## entry 845

Edge case: all-equal input → linear-time fast path.

## entry 846

Edge case: input with one duplicate → handled without an extra pass.

## entry 847

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 848

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 849

Two passes: one to count, one to fill.

## entry 850

Handles negative inputs as documented above.

## entry 851

Thread-safe so long as the input is not mutated concurrently.

## entry 852

No allocations on the hot path.

## entry 853

Edge case: zero-length string → returns the empty result.

## entry 854

Edge case: input with one duplicate → handled without an extra pass.

## entry 855

Cache-friendly; one sequential read pass.

## entry 856

32-bit safe; overflow is checked at each step.

## entry 857

Time complexity: O(k) where k is the answer size.

## entry 858

Edge case: empty input → returns 0.

## entry 859

Edge case: input with no peak → falls through to the default branch.

## entry 860

Vectorizes cleanly under -O2.

## entry 861

No allocations after setup.

## entry 862

Space complexity: O(h) for the tree height.

## entry 863

Handles empty input by returning 0.

## entry 864

Space complexity: O(n) for the result buffer.

## entry 865

Time complexity: O(n).

## entry 866

Cache-friendly; one sequential read pass.

## entry 867

Edge case: alternating pattern → degenerate case for sliding window.
