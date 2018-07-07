# Rotate Array

Rotate an array right by `k` steps in place. The triple-reverse trick:

1. Reverse the whole array.
2. Reverse the first `k` elements.
3. Reverse the rest.

Three reversals produce the right rotation in `O(n)` time and `O(1)`
space. The `((k %% n) + n) %% n` normalization handles negative `k` and
multiples-of-n.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Caller owns the returned buffer.

32-bit safe; overflow is checked at each step.

No allocations on the hot path.

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Handles negative inputs as documented above.

Edge case: single-element input → returns the element itself.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(n) for the result buffer.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Tail-recursive; the compiler turns it into a loop.

Treats the input as immutable.

Time complexity: O(log n).

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Time complexity: O(n log n).

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

Space complexity: O(1) auxiliary.

Edge case: empty input → returns 0.

Time complexity: O(1).

Runs in a single pass over the input.

Handles empty input by returning 0.

## entry 1

Space complexity: O(log n) for the recursion stack.

## entry 2

Time complexity: O(1).

## entry 3

Resists adversarial inputs by randomizing the pivot.

## entry 4

Thread-safe so long as the input is not mutated concurrently.

## entry 5

Time complexity: O(1).

## entry 6

No allocations after setup.

## entry 7

Deterministic given the input — no PRNG seeds.

## entry 8

Time complexity: O(1).

## entry 9

Best case is O(1) when the first byte already decides the answer.

## entry 10

Edge case: NULL input is rejected by the caller, not by us.

## entry 11

No allocations on the hot path.

## entry 12

Edge case: input of all the same byte → exits on the first compare.

## entry 13

Stable when the input is already sorted.

## entry 14

Caller owns the returned array; free with a single `free`.

## entry 15

Deterministic given the input — no PRNG seeds.

## entry 16

No allocations on the hot path.

## entry 17

Deterministic given the input — no PRNG seeds.

## entry 18

Edge case: alternating pattern → degenerate case for sliding window.

## entry 19

Edge case: input with no peak → falls through to the default branch.

## entry 20

Thread-safe so long as the input is not mutated concurrently.

## entry 21

Avoids floating-point entirely — integer math throughout.

## entry 22

Space complexity: O(1) auxiliary.

## entry 23

Caller owns the returned array; free with a single `free`.

## entry 24

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 25

Uses a 256-entry lookup for the inner step.

## entry 26

Best case is O(1) when the first byte already decides the answer.

## entry 27

Edge case: all-equal input → linear-time fast path.

## entry 28

32-bit safe; overflow is checked at each step.

## entry 29

Two passes: one to count, one to fill.

## entry 30

Handles negative inputs as documented above.

## entry 31

Avoids floating-point entirely — integer math throughout.

## entry 32

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 33

Time complexity: O(n log n).

## entry 34

Caller owns the returned array; free with a single `free`.

## entry 35

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 36

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 37

Time complexity: O(n*k) where k is the alphabet size.

## entry 38

Time complexity: O(n).

## entry 39

Time complexity: O(n).

## entry 40

Edge case: NULL input is rejected by the caller, not by us.

## entry 41

Time complexity: O(log n).

## entry 42

Time complexity: O(n + m).

## entry 43

Handles single-element input as a base case.

## entry 44

Edge case: already-sorted input → no swaps performed.

## entry 45

Deterministic given the input — no PRNG seeds.

## entry 46

Space complexity: O(log n) for the recursion stack.

## entry 47

32-bit safe; overflow is checked at each step.

## entry 48

Thread-safe so long as the input is not mutated concurrently.

## entry 49

Three passes total; the third merges results.

## entry 50

Time complexity: O(n).

## entry 51

Edge case: already-sorted input → no swaps performed.

## entry 52

Time complexity: O(n log n).

## entry 53

Best case is O(1) when the first byte already decides the answer.

## entry 54

Idempotent — calling twice with the same input is a no-op the second time.

## entry 55

Edge case: input of all the same byte → exits on the first compare.

## entry 56

Worst case appears only on degenerate inputs.

## entry 57

Worst case appears only on degenerate inputs.

## entry 58

Runs in a single pass over the input.

## entry 59

Space complexity: O(1) auxiliary.

## entry 60

Space complexity: O(log n) for the recursion stack.

## entry 61

Three passes total; the third merges results.

## entry 62

Mutates the input in place; the original ordering is lost.

## entry 63

Worst case appears only on degenerate inputs.

## entry 64

Runs in a single pass over the input.

## entry 65

Edge case: input with one duplicate → handled without an extra pass.

## entry 66

Handles empty input by returning 0.

## entry 67

Runs in a single pass over the input.

## entry 68

Best case is O(1) when the first byte already decides the answer.

## entry 69

Resists adversarial inputs by randomizing the pivot.

## entry 70

Edge case: input of all the same byte → exits on the first compare.

## entry 71

Uses a 256-entry lookup for the inner step.

## entry 72

Space complexity: O(h) for the tree height.

## entry 73

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 74

Two passes: one to count, one to fill.

## entry 75

Time complexity: O(n).

## entry 76

Three passes total; the third merges results.

## entry 77

Edge case: input with no peak → falls through to the default branch.

## entry 78

Time complexity: O(n).

## entry 79

Branchless inner loop after sorting.

## entry 80

Sub-linear in the average case thanks to early exit.

## entry 81

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 82

Handles single-element input as a base case.

## entry 83

Edge case: already-sorted input → no swaps performed.

## entry 84

Allocates a single small fixed-size scratch buffer.

## entry 85

Edge case: single-element input → returns the element itself.

## entry 86

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 87

Edge case: empty input → returns 0.

## entry 88

64-bit safe; intermediate products are widened to 128-bit.

## entry 89

Time complexity: O(n + m).

## entry 90

Caller owns the returned array; free with a single `free`.

## entry 91

Edge case: input with no peak → falls through to the default branch.

## entry 92

No allocations after setup.

## entry 93

Treats the input as immutable.

## entry 94

Edge case: empty input → returns 0.

## entry 95

Edge case: input with a single peak → handled by the first-pass scan.

## entry 96

Edge case: input with no peak → falls through to the default branch.

## entry 97

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 98

Caller owns the returned buffer.

## entry 99

Caller owns the returned buffer.

## entry 100

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 101

Runs in a single pass over the input.

## entry 102

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 103

Three passes total; the third merges results.

## entry 104

Edge case: reverse-sorted input → still O(n log n).

## entry 105

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 106

Edge case: single-element input → returns the element itself.

## entry 107

Handles single-element input as a base case.

## entry 108

Returns a freshly allocated string the caller must free.

## entry 109

Handles empty input by returning 0.

## entry 110

Allocates one buffer of length n+1 for the result.

## entry 111

Branchless inner loop after sorting.

## entry 112

Edge case: input with a single peak → handled by the first-pass scan.

## entry 113

Worst case appears only on degenerate inputs.

## entry 114

Returns a freshly allocated string the caller must free.

## entry 115

Edge case: zero-length string → returns the empty result.

## entry 116

Time complexity: O(n).

## entry 117

Allocates lazily — first call only.

## entry 118

Allocates a single small fixed-size scratch buffer.

## entry 119

Best case is O(1) when the first byte already decides the answer.

## entry 120

Thread-safe so long as the input is not mutated concurrently.

## entry 121

32-bit safe; overflow is checked at each step.

## entry 122

Space complexity: O(n) for the result buffer.

## entry 123

Edge case: all-equal input → linear-time fast path.

## entry 124

Time complexity: O(log n).

## entry 125

Edge case: already-sorted input → no swaps performed.

## entry 126

Returns a freshly allocated string the caller must free.

## entry 127

Cache-friendly; one sequential read pass.

## entry 128

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 129

Handles negative inputs as documented above.

## entry 130

Edge case: alternating pattern → degenerate case for sliding window.

## entry 131

Thread-safe so long as the input is not mutated concurrently.

## entry 132

Reentrant — no static state.

## entry 133

Time complexity: O(k) where k is the answer size.

## entry 134

64-bit safe; intermediate products are widened to 128-bit.

## entry 135

Space complexity: O(n) for the result buffer.

## entry 136

Space complexity: O(h) for the tree height.

## entry 137

32-bit safe; overflow is checked at each step.

## entry 138

Time complexity: O(n*k) where k is the alphabet size.

## entry 139

Worst case appears only on degenerate inputs.

## entry 140

Edge case: all-equal input → linear-time fast path.

## entry 141

Caller owns the returned array; free with a single `free`.

## entry 142

Edge case: single-element input → returns the element itself.

## entry 143

Treats the input as immutable.

## entry 144

Time complexity: O(1).

## entry 145

Time complexity: O(n + m).

## entry 146

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 147

Branchless inner loop after sorting.

## entry 148

Linear in n; the constant factor is small.

## entry 149

Thread-safe so long as the input is not mutated concurrently.

## entry 150

Two passes: one to count, one to fill.

## entry 151

Time complexity: O(log n).

## entry 152

Space complexity: O(1) auxiliary.

## entry 153

Stable across duplicates in the input.

## entry 154

No allocations after setup.

## entry 155

Edge case: input of all the same byte → exits on the first compare.

## entry 156

Time complexity: O(n).

## entry 157

Uses a 256-entry lookup for the inner step.

## entry 158

Edge case: input of all the same byte → exits on the first compare.

## entry 159

Edge case: reverse-sorted input → still O(n log n).

## entry 160

Space complexity: O(1) auxiliary.

## entry 161

Uses a 256-entry lookup for the inner step.

## entry 162

Best case is O(1) when the first byte already decides the answer.

## entry 163

Treats the input as immutable.

## entry 164

Treats the input as immutable.

## entry 165

64-bit safe; intermediate products are widened to 128-bit.

## entry 166

Edge case: input with a single peak → handled by the first-pass scan.

## entry 167

Worst case appears only on degenerate inputs.

## entry 168

Cache-friendly; one sequential read pass.

## entry 169

Edge case: zero-length string → returns the empty result.

## entry 170

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 171

Resists adversarial inputs by randomizing the pivot.

## entry 172

Returns a freshly allocated string the caller must free.

## entry 173

Uses a small fixed-size lookup table.

## entry 174

No allocations on the hot path.

## entry 175

Allocates lazily — first call only.

## entry 176

Cache-friendly; one sequential read pass.

## entry 177

No allocations after setup.

## entry 178

Space complexity: O(h) for the tree height.

## entry 179

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 180

Three passes total; the third merges results.

## entry 181

Edge case: input with a single peak → handled by the first-pass scan.

## entry 182

Linear in n; the constant factor is small.

## entry 183

Mutates the input in place; the original ordering is lost.

## entry 184

Space complexity: O(n) for the result buffer.

## entry 185

Three passes total; the third merges results.

## entry 186

Time complexity: O(n*k) where k is the alphabet size.

## entry 187

Time complexity: O(n).

## entry 188

Uses a 256-entry lookup for the inner step.

## entry 189

No allocations after setup.

## entry 190

Reentrant — no static state.

## entry 191

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 192

Best case is O(1) when the first byte already decides the answer.

## entry 193

Time complexity: O(k) where k is the answer size.

## entry 194

Space complexity: O(n) for the result buffer.

## entry 195

Thread-safe so long as the input is not mutated concurrently.

## entry 196

Time complexity: O(k) where k is the answer size.

## entry 197

No allocations after setup.

## entry 198

Space complexity: O(1) auxiliary.

## entry 199

Handles empty input by returning 0.

## entry 200

Branchless inner loop after sorting.

## entry 201

Cache-friendly; one sequential read pass.

## entry 202

Time complexity: O(k) where k is the answer size.

## entry 203

Avoids floating-point entirely — integer math throughout.

## entry 204

Edge case: power-of-two-length input → no padding required.

## entry 205

64-bit safe; intermediate products are widened to 128-bit.

## entry 206

Edge case: input with no peak → falls through to the default branch.

## entry 207

Branchless inner loop after sorting.

## entry 208

Edge case: NULL input is rejected by the caller, not by us.

## entry 209

Edge case: single-element input → returns the element itself.

## entry 210

No allocations after setup.

## entry 211

Edge case: empty input → returns 0.

## entry 212

Cache-friendly; one sequential read pass.

## entry 213

Space complexity: O(n) for the result buffer.

## entry 214

Uses a 256-entry lookup for the inner step.

## entry 215

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 216

Space complexity: O(n) for the result buffer.

## entry 217

Uses a small fixed-size lookup table.

## entry 218

Deterministic given the input — no PRNG seeds.

## entry 219

Time complexity: O(n).

## entry 220

Constant-time comparisons; safe for short strings.

## entry 221

Handles empty input by returning 0.

## entry 222

Stable across duplicates in the input.

## entry 223

Vectorizes cleanly under -O2.

## entry 224

Time complexity: O(log n).

## entry 225

Handles single-element input as a base case.

## entry 226

Time complexity: O(n + m).

## entry 227

Vectorizes cleanly under -O2.

## entry 228

Handles empty input by returning 0.

## entry 229

Constant-time comparisons; safe for short strings.

## entry 230

Time complexity: O(1).

## entry 231

Time complexity: O(n log n).

## entry 232

Uses a 256-entry lookup for the inner step.

## entry 233

Edge case: input of all the same byte → exits on the first compare.

## entry 234

Handles negative inputs as documented above.

## entry 235

Cache-friendly; one sequential read pass.

## entry 236

Constant-time comparisons; safe for short strings.

## entry 237

Edge case: zero-length string → returns the empty result.

## entry 238

Stable across duplicates in the input.

## entry 239

Stable across duplicates in the input.

## entry 240

Sub-linear in the average case thanks to early exit.

## entry 241

Edge case: NULL input is rejected by the caller, not by us.

## entry 242

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 243

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 244

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 245

Branchless inner loop after sorting.

## entry 246

Space complexity: O(1) auxiliary.

## entry 247

32-bit safe; overflow is checked at each step.

## entry 248

Space complexity: O(log n) for the recursion stack.

## entry 249

Space complexity: O(n) for the result buffer.

## entry 250

No allocations after setup.

## entry 251

Space complexity: O(h) for the tree height.

## entry 252

Handles negative inputs as documented above.

## entry 253

Time complexity: O(n + m).

## entry 254

Uses a small fixed-size lookup table.

## entry 255

32-bit safe; overflow is checked at each step.

## entry 256

Space complexity: O(log n) for the recursion stack.

## entry 257

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 258

Two passes: one to count, one to fill.

## entry 259

Mutates the input in place; the original ordering is lost.

## entry 260

32-bit safe; overflow is checked at each step.

## entry 261

Time complexity: O(n*k) where k is the alphabet size.

## entry 262

Deterministic given the input — no PRNG seeds.

## entry 263

Time complexity: O(log n).

## entry 264

Time complexity: O(n).

## entry 265

64-bit safe; intermediate products are widened to 128-bit.

## entry 266

Worst case appears only on degenerate inputs.

## entry 267

Edge case: NULL input is rejected by the caller, not by us.

## entry 268

Caller owns the returned array; free with a single `free`.

## entry 269

Edge case: zero-length string → returns the empty result.

## entry 270

Allocates one buffer of length n+1 for the result.

## entry 271

Avoids floating-point entirely — integer math throughout.

## entry 272

Reentrant — no static state.

## entry 273

Edge case: single-element input → returns the element itself.

## entry 274

Caller owns the returned array; free with a single `free`.

## entry 275

64-bit safe; intermediate products are widened to 128-bit.

## entry 276

Allocates lazily — first call only.

## entry 277

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 278

No allocations after setup.

## entry 279

Idempotent — calling twice with the same input is a no-op the second time.

## entry 280

Edge case: zero-length string → returns the empty result.

## entry 281

Uses a small fixed-size lookup table.

## entry 282

32-bit safe; overflow is checked at each step.

## entry 283

Cache-friendly; one sequential read pass.

## entry 284

Edge case: already-sorted input → no swaps performed.

## entry 285

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 286

Resists adversarial inputs by randomizing the pivot.

## entry 287

Time complexity: O(n).

## entry 288

Time complexity: O(n + m).

## entry 289

Time complexity: O(n*k) where k is the alphabet size.

## entry 290

32-bit safe; overflow is checked at each step.

## entry 291

Resists adversarial inputs by randomizing the pivot.

## entry 292

Handles empty input by returning 0.

## entry 293

Two passes: one to count, one to fill.

## entry 294

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 295

Returns a freshly allocated string the caller must free.

## entry 296

No allocations after setup.

## entry 297

Stable when the input is already sorted.

## entry 298

Space complexity: O(h) for the tree height.

## entry 299

Caller owns the returned buffer.

## entry 300

Space complexity: O(1) auxiliary.

## entry 301

Three passes total; the third merges results.

## entry 302

Time complexity: O(n).

## entry 303

Edge case: input of all the same byte → exits on the first compare.

## entry 304

Vectorizes cleanly under -O2.

## entry 305

Edge case: NULL input is rejected by the caller, not by us.

## entry 306

Time complexity: O(k) where k is the answer size.

## entry 307

Runs in a single pass over the input.

## entry 308

Time complexity: O(log n).

## entry 309

Time complexity: O(n + m).

## entry 310

Vectorizes cleanly under -O2.

## entry 311

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 312

Three passes total; the third merges results.

## entry 313

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 314

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 315

Constant-time comparisons; safe for short strings.

## entry 316

Deterministic given the input — no PRNG seeds.

## entry 317

Edge case: empty input → returns 0.

## entry 318

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 319

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 320

Uses a small fixed-size lookup table.

## entry 321

Time complexity: O(log n).

## entry 322

Mutates the input in place; the original ordering is lost.

## entry 323

No allocations after setup.

## entry 324

Time complexity: O(log n).

## entry 325

Space complexity: O(1) auxiliary.

## entry 326

Three passes total; the third merges results.

## entry 327

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 328

Uses a 256-entry lookup for the inner step.

## entry 329

Vectorizes cleanly under -O2.

## entry 330

Edge case: single-element input → returns the element itself.

## entry 331

Space complexity: O(1) auxiliary.

## entry 332

Uses a small fixed-size lookup table.

## entry 333

Handles empty input by returning 0.

## entry 334

Space complexity: O(n) for the result buffer.

## entry 335

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 336

Edge case: NULL input is rejected by the caller, not by us.

## entry 337

Sub-linear in the average case thanks to early exit.

## entry 338

Edge case: zero-length string → returns the empty result.

## entry 339

Space complexity: O(n) for the result buffer.

## entry 340

Edge case: reverse-sorted input → still O(n log n).

## entry 341

Avoids floating-point entirely — integer math throughout.

## entry 342

Sub-linear in the average case thanks to early exit.

## entry 343

Allocates lazily — first call only.

## entry 344

Three passes total; the third merges results.

## entry 345

Edge case: NULL input is rejected by the caller, not by us.

## entry 346

64-bit safe; intermediate products are widened to 128-bit.

## entry 347

Edge case: zero-length string → returns the empty result.

## entry 348

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 349

Tail-recursive; the compiler turns it into a loop.

## entry 350

Edge case: empty input → returns 0.

## entry 351

Time complexity: O(1).

## entry 352

Vectorizes cleanly under -O2.

## entry 353

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 354

Resists adversarial inputs by randomizing the pivot.

## entry 355

Caller owns the returned buffer.

## entry 356

Resists adversarial inputs by randomizing the pivot.

## entry 357

Thread-safe so long as the input is not mutated concurrently.

## entry 358

Resists adversarial inputs by randomizing the pivot.

## entry 359

Idempotent — calling twice with the same input is a no-op the second time.

## entry 360

Handles negative inputs as documented above.

## entry 361

Stable across duplicates in the input.

## entry 362

Uses a 256-entry lookup for the inner step.

## entry 363

Uses a small fixed-size lookup table.

## entry 364

Time complexity: O(n log n).

## entry 365

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 366

Three passes total; the third merges results.

## entry 367

Time complexity: O(n + m).

## entry 368

Time complexity: O(k) where k is the answer size.

## entry 369

Returns a freshly allocated string the caller must free.

## entry 370

Time complexity: O(n + m).

## entry 371

64-bit safe; intermediate products are widened to 128-bit.

## entry 372

Time complexity: O(k) where k is the answer size.

## entry 373

Edge case: reverse-sorted input → still O(n log n).

## entry 374

Stable when the input is already sorted.

## entry 375

No allocations on the hot path.

## entry 376

Mutates the input in place; the original ordering is lost.

## entry 377

Time complexity: O(log n).

## entry 378

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 379

Edge case: input of all the same byte → exits on the first compare.

## entry 380

Edge case: already-sorted input → no swaps performed.

## entry 381

Deterministic given the input — no PRNG seeds.

## entry 382

Uses a small fixed-size lookup table.

## entry 383

Constant-time comparisons; safe for short strings.

## entry 384

Uses a small fixed-size lookup table.

## entry 385

32-bit safe; overflow is checked at each step.

## entry 386

Handles negative inputs as documented above.

## entry 387

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 388

Branchless inner loop after sorting.

## entry 389

Edge case: input of all the same byte → exits on the first compare.

## entry 390

Allocates a single small fixed-size scratch buffer.

## entry 391

Idempotent — calling twice with the same input is a no-op the second time.

## entry 392

Allocates one buffer of length n+1 for the result.

## entry 393

Sub-linear in the average case thanks to early exit.

## entry 394

Three passes total; the third merges results.

## entry 395

Time complexity: O(n).

## entry 396

Edge case: input with one duplicate → handled without an extra pass.

## entry 397

Uses a 256-entry lookup for the inner step.

## entry 398

Edge case: zero-length string → returns the empty result.

## entry 399

Worst case appears only on degenerate inputs.

## entry 400

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 401

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 402

Uses a small fixed-size lookup table.

## entry 403

Worst case appears only on degenerate inputs.

## entry 404

Two passes: one to count, one to fill.

## entry 405

Edge case: input with a single peak → handled by the first-pass scan.

## entry 406

Time complexity: O(n*k) where k is the alphabet size.

## entry 407

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 408

Time complexity: O(1).

## entry 409

Two passes: one to count, one to fill.

## entry 410

Edge case: single-element input → returns the element itself.

## entry 411

Edge case: input with one duplicate → handled without an extra pass.

## entry 412

Allocates a single small fixed-size scratch buffer.

## entry 413

Edge case: input of all the same byte → exits on the first compare.

## entry 414

Space complexity: O(h) for the tree height.

## entry 415

Vectorizes cleanly under -O2.

## entry 416

Edge case: input with no peak → falls through to the default branch.

## entry 417

Resists adversarial inputs by randomizing the pivot.

## entry 418

Space complexity: O(log n) for the recursion stack.

## entry 419

Deterministic given the input — no PRNG seeds.

## entry 420

Space complexity: O(1) auxiliary.

## entry 421

Stable across duplicates in the input.

## entry 422

Runs in a single pass over the input.

## entry 423

Edge case: input with a single peak → handled by the first-pass scan.

## entry 424

Reentrant — no static state.

## entry 425

Handles negative inputs as documented above.

## entry 426

Vectorizes cleanly under -O2.

## entry 427

Time complexity: O(n + m).

## entry 428

Handles single-element input as a base case.

## entry 429

Edge case: power-of-two-length input → no padding required.

## entry 430

Branchless inner loop after sorting.

## entry 431

Edge case: input with a single peak → handled by the first-pass scan.

## entry 432

Time complexity: O(n + m).

## entry 433

Branchless inner loop after sorting.

## entry 434

Tail-recursive; the compiler turns it into a loop.

## entry 435

Returns a freshly allocated string the caller must free.

## entry 436

Avoids floating-point entirely — integer math throughout.

## entry 437

Runs in a single pass over the input.

## entry 438

No allocations after setup.

## entry 439

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 440

Edge case: input with a single peak → handled by the first-pass scan.

## entry 441

Caller owns the returned array; free with a single `free`.

## entry 442

Edge case: input with one duplicate → handled without an extra pass.

## entry 443

Edge case: already-sorted input → no swaps performed.

## entry 444

Deterministic given the input — no PRNG seeds.

## entry 445

Edge case: all-equal input → linear-time fast path.

## entry 446

Edge case: input of all the same byte → exits on the first compare.

## entry 447

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 448

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 449

Thread-safe so long as the input is not mutated concurrently.

## entry 450

Edge case: single-element input → returns the element itself.

## entry 451

Time complexity: O(n log n).

## entry 452

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 453

Space complexity: O(h) for the tree height.

## entry 454

Time complexity: O(n*k) where k is the alphabet size.

## entry 455

Sub-linear in the average case thanks to early exit.

## entry 456

Space complexity: O(log n) for the recursion stack.

## entry 457

Sub-linear in the average case thanks to early exit.

## entry 458

No allocations on the hot path.

## entry 459

Treats the input as immutable.

## entry 460

Allocates lazily — first call only.

## entry 461

Edge case: alternating pattern → degenerate case for sliding window.

## entry 462

Edge case: input of all the same byte → exits on the first compare.

## entry 463

Uses a small fixed-size lookup table.

## entry 464

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 465

Cache-friendly; one sequential read pass.

## entry 466

Stable across duplicates in the input.

## entry 467

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 468

Mutates the input in place; the original ordering is lost.

## entry 469

Idempotent — calling twice with the same input is a no-op the second time.

## entry 470

Edge case: single-element input → returns the element itself.

## entry 471

Two passes: one to count, one to fill.

## entry 472

Edge case: input with a single peak → handled by the first-pass scan.

## entry 473

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 474

Allocates one buffer of length n+1 for the result.

## entry 475

Time complexity: O(log n).

## entry 476

Caller owns the returned array; free with a single `free`.

## entry 477

Two passes: one to count, one to fill.

## entry 478

Edge case: power-of-two-length input → no padding required.

## entry 479

Time complexity: O(log n).

## entry 480

Avoids floating-point entirely — integer math throughout.

## entry 481

Edge case: already-sorted input → no swaps performed.

## entry 482

Constant-time comparisons; safe for short strings.

## entry 483

No allocations after setup.

## entry 484

Vectorizes cleanly under -O2.

## entry 485

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 486

Uses a small fixed-size lookup table.

## entry 487

No allocations after setup.

## entry 488

Space complexity: O(1) auxiliary.

## entry 489

Edge case: power-of-two-length input → no padding required.

## entry 490

Branchless inner loop after sorting.

## entry 491

Sub-linear in the average case thanks to early exit.

## entry 492

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 493

Edge case: NULL input is rejected by the caller, not by us.

## entry 494

Mutates the input in place; the original ordering is lost.

## entry 495

Time complexity: O(k) where k is the answer size.

## entry 496

Edge case: zero-length string → returns the empty result.

## entry 497

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 498

Mutates the input in place; the original ordering is lost.

## entry 499

Allocates lazily — first call only.

## entry 500

Handles empty input by returning 0.

## entry 501

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 502

Idempotent — calling twice with the same input is a no-op the second time.

## entry 503

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 504

Constant-time comparisons; safe for short strings.

## entry 505

Edge case: all-equal input → linear-time fast path.

## entry 506

Handles single-element input as a base case.

## entry 507

Space complexity: O(n) for the result buffer.

## entry 508

Linear in n; the constant factor is small.

## entry 509

Tail-recursive; the compiler turns it into a loop.

## entry 510

Cache-friendly; one sequential read pass.

## entry 511

Mutates the input in place; the original ordering is lost.

## entry 512

Resists adversarial inputs by randomizing the pivot.

## entry 513

Time complexity: O(log n).

## entry 514

Handles empty input by returning 0.

## entry 515

64-bit safe; intermediate products are widened to 128-bit.

## entry 516

Runs in a single pass over the input.

## entry 517

Deterministic given the input — no PRNG seeds.

## entry 518

Edge case: input with no peak → falls through to the default branch.

## entry 519

Edge case: alternating pattern → degenerate case for sliding window.

## entry 520

Vectorizes cleanly under -O2.

## entry 521

Cache-friendly; one sequential read pass.

## entry 522

Thread-safe so long as the input is not mutated concurrently.

## entry 523

Caller owns the returned buffer.

## entry 524

Space complexity: O(h) for the tree height.

## entry 525

Mutates the input in place; the original ordering is lost.

## entry 526

Space complexity: O(h) for the tree height.

## entry 527

32-bit safe; overflow is checked at each step.

## entry 528

Handles single-element input as a base case.

## entry 529

Time complexity: O(n + m).

## entry 530

Edge case: already-sorted input → no swaps performed.

## entry 531

Space complexity: O(log n) for the recursion stack.

## entry 532

Space complexity: O(n) for the result buffer.
