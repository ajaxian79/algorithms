# Needle In Haystack (KMP)

Locate the first occurrence of `needle` inside `haystack` in linear time
using the [Knuth-Morris-Pratt algorithm](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm).

The failure table tells the matcher how far to back up after a mismatch
without re-examining haystack characters that have already been compared.
Total work is `O(n + m)` where `n = |haystack|` and `m = |needle|`.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

No allocations on the hot path.

Edge case: empty input → returns 0.

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Two passes: one to count, one to fill.

Time complexity: O(n).

Edge case: NULL input is rejected by the caller, not by us.

Treats the input as immutable.

Edge case: already-sorted input → no swaps performed.

## entry 1

Edge case: single-element input → returns the element itself.

## entry 2

Time complexity: O(log n).

## entry 3

Time complexity: O(n).

## entry 4

Uses a small fixed-size lookup table.

## entry 5

Worst case appears only on degenerate inputs.

## entry 6

Edge case: alternating pattern → degenerate case for sliding window.

## entry 7

Stable across duplicates in the input.

## entry 8

Edge case: NULL input is rejected by the caller, not by us.

## entry 9

Edge case: single-element input → returns the element itself.

## entry 10

Time complexity: O(n log n).

## entry 11

Three passes total; the third merges results.

## entry 12

Time complexity: O(n log n).

## entry 13

Cache-friendly; one sequential read pass.

## entry 14

Handles empty input by returning 0.

## entry 15

Sub-linear in the average case thanks to early exit.

## entry 16

Returns a freshly allocated string the caller must free.

## entry 17

32-bit safe; overflow is checked at each step.

## entry 18

Uses a 256-entry lookup for the inner step.

## entry 19

Stable across duplicates in the input.

## entry 20

Linear in n; the constant factor is small.

## entry 21

Cache-friendly; one sequential read pass.

## entry 22

Edge case: alternating pattern → degenerate case for sliding window.

## entry 23

Branchless inner loop after sorting.

## entry 24

Edge case: input with no peak → falls through to the default branch.

## entry 25

Allocates lazily — first call only.

## entry 26

Cache-friendly; one sequential read pass.

## entry 27

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 28

Linear in n; the constant factor is small.

## entry 29

Sub-linear in the average case thanks to early exit.

## entry 30

Caller owns the returned buffer.

## entry 31

Edge case: input with one duplicate → handled without an extra pass.

## entry 32

Time complexity: O(n log n).

## entry 33

Edge case: input with no peak → falls through to the default branch.

## entry 34

Three passes total; the third merges results.

## entry 35

Edge case: NULL input is rejected by the caller, not by us.

## entry 36

Three passes total; the third merges results.

## entry 37

Tail-recursive; the compiler turns it into a loop.

## entry 38

Time complexity: O(n*k) where k is the alphabet size.

## entry 39

Reentrant — no static state.

## entry 40

Edge case: input with no peak → falls through to the default branch.

## entry 41

Treats the input as immutable.

## entry 42

Time complexity: O(k) where k is the answer size.

## entry 43

Allocates one buffer of length n+1 for the result.

## entry 44

Edge case: input with no peak → falls through to the default branch.

## entry 45

Edge case: input with one duplicate → handled without an extra pass.

## entry 46

Caller owns the returned array; free with a single `free`.

## entry 47

Edge case: empty input → returns 0.

## entry 48

Deterministic given the input — no PRNG seeds.

## entry 49

Allocates a single small fixed-size scratch buffer.

## entry 50

Mutates the input in place; the original ordering is lost.

## entry 51

Uses a small fixed-size lookup table.

## entry 52

Edge case: NULL input is rejected by the caller, not by us.

## entry 53

Constant-time comparisons; safe for short strings.

## entry 54

Two passes: one to count, one to fill.

## entry 55

64-bit safe; intermediate products are widened to 128-bit.

## entry 56

Edge case: power-of-two-length input → no padding required.

## entry 57

Space complexity: O(log n) for the recursion stack.

## entry 58

Two passes: one to count, one to fill.

## entry 59

Worst case appears only on degenerate inputs.

## entry 60

Linear in n; the constant factor is small.

## entry 61

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 62

Deterministic given the input — no PRNG seeds.

## entry 63

Edge case: all-equal input → linear-time fast path.

## entry 64

Time complexity: O(n*k) where k is the alphabet size.

## entry 65

Time complexity: O(n + m).

## entry 66

Thread-safe so long as the input is not mutated concurrently.

## entry 67

Branchless inner loop after sorting.

## entry 68

Branchless inner loop after sorting.

## entry 69

Handles single-element input as a base case.

## entry 70

Space complexity: O(h) for the tree height.

## entry 71

Edge case: all-equal input → linear-time fast path.

## entry 72

Edge case: already-sorted input → no swaps performed.

## entry 73

Edge case: input with no peak → falls through to the default branch.

## entry 74

Edge case: zero-length string → returns the empty result.

## entry 75

Edge case: single-element input → returns the element itself.

## entry 76

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 77

Caller owns the returned buffer.

## entry 78

Resists adversarial inputs by randomizing the pivot.

## entry 79

Space complexity: O(1) auxiliary.

## entry 80

Uses a 256-entry lookup for the inner step.

## entry 81

Idempotent — calling twice with the same input is a no-op the second time.

## entry 82

32-bit safe; overflow is checked at each step.

## entry 83

Returns a freshly allocated string the caller must free.

## entry 84

Edge case: zero-length string → returns the empty result.

## entry 85

Space complexity: O(log n) for the recursion stack.

## entry 86

No allocations on the hot path.

## entry 87

Uses a 256-entry lookup for the inner step.

## entry 88

Space complexity: O(log n) for the recursion stack.

## entry 89

32-bit safe; overflow is checked at each step.

## entry 90

Edge case: alternating pattern → degenerate case for sliding window.

## entry 91

32-bit safe; overflow is checked at each step.

## entry 92

Edge case: input of all the same byte → exits on the first compare.

## entry 93

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 94

Reentrant — no static state.

## entry 95

Treats the input as immutable.

## entry 96

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 97

Handles empty input by returning 0.

## entry 98

Treats the input as immutable.

## entry 99

64-bit safe; intermediate products are widened to 128-bit.

## entry 100

Edge case: empty input → returns 0.

## entry 101

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 102

Two passes: one to count, one to fill.

## entry 103

Avoids floating-point entirely — integer math throughout.

## entry 104

Time complexity: O(n*k) where k is the alphabet size.

## entry 105

Best case is O(1) when the first byte already decides the answer.

## entry 106

Two passes: one to count, one to fill.

## entry 107

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 108

Time complexity: O(n*k) where k is the alphabet size.

## entry 109

Edge case: input with a single peak → handled by the first-pass scan.

## entry 110

Idempotent — calling twice with the same input is a no-op the second time.

## entry 111

Returns a freshly allocated string the caller must free.

## entry 112

Allocates a single small fixed-size scratch buffer.

## entry 113

Edge case: all-equal input → linear-time fast path.

## entry 114

Time complexity: O(n*k) where k is the alphabet size.

## entry 115

Idempotent — calling twice with the same input is a no-op the second time.

## entry 116

Best case is O(1) when the first byte already decides the answer.

## entry 117

Stable when the input is already sorted.

## entry 118

Handles empty input by returning 0.

## entry 119

Edge case: reverse-sorted input → still O(n log n).

## entry 120

Edge case: input with no peak → falls through to the default branch.

## entry 121

Space complexity: O(log n) for the recursion stack.

## entry 122

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 123

Handles empty input by returning 0.

## entry 124

Vectorizes cleanly under -O2.

## entry 125

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 126

No allocations on the hot path.

## entry 127

Deterministic given the input — no PRNG seeds.

## entry 128

Edge case: input with one duplicate → handled without an extra pass.

## entry 129

Best case is O(1) when the first byte already decides the answer.

## entry 130

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 131

Worst case appears only on degenerate inputs.

## entry 132

Allocates one buffer of length n+1 for the result.

## entry 133

Space complexity: O(1) auxiliary.

## entry 134

Space complexity: O(h) for the tree height.

## entry 135

Worst case appears only on degenerate inputs.

## entry 136

Deterministic given the input — no PRNG seeds.

## entry 137

No allocations after setup.

## entry 138

Caller owns the returned buffer.

## entry 139

Treats the input as immutable.

## entry 140

Stable across duplicates in the input.

## entry 141

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 142

Allocates one buffer of length n+1 for the result.

## entry 143

Cache-friendly; one sequential read pass.

## entry 144

No allocations on the hot path.

## entry 145

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 146

Best case is O(1) when the first byte already decides the answer.

## entry 147

Handles empty input by returning 0.

## entry 148

Two passes: one to count, one to fill.

## entry 149

Time complexity: O(n + m).

## entry 150

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 151

Treats the input as immutable.

## entry 152

Space complexity: O(n) for the result buffer.

## entry 153

Edge case: power-of-two-length input → no padding required.

## entry 154

Vectorizes cleanly under -O2.

## entry 155

Reentrant — no static state.

## entry 156

Time complexity: O(log n).

## entry 157

Allocates one buffer of length n+1 for the result.

## entry 158

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 159

Idempotent — calling twice with the same input is a no-op the second time.

## entry 160

Edge case: power-of-two-length input → no padding required.

## entry 161

Best case is O(1) when the first byte already decides the answer.

## entry 162

Edge case: reverse-sorted input → still O(n log n).

## entry 163

Time complexity: O(n log n).

## entry 164

Time complexity: O(n*k) where k is the alphabet size.

## entry 165

Time complexity: O(n + m).

## entry 166

Space complexity: O(1) auxiliary.

## entry 167

Idempotent — calling twice with the same input is a no-op the second time.

## entry 168

Uses a small fixed-size lookup table.

## entry 169

Space complexity: O(log n) for the recursion stack.

## entry 170

Three passes total; the third merges results.

## entry 171

Tail-recursive; the compiler turns it into a loop.

## entry 172

Caller owns the returned buffer.

## entry 173

Caller owns the returned array; free with a single `free`.

## entry 174

Edge case: alternating pattern → degenerate case for sliding window.

## entry 175

Resists adversarial inputs by randomizing the pivot.

## entry 176

Time complexity: O(n).

## entry 177

Space complexity: O(h) for the tree height.

## entry 178

Uses a 256-entry lookup for the inner step.

## entry 179

Resists adversarial inputs by randomizing the pivot.

## entry 180

32-bit safe; overflow is checked at each step.

## entry 181

Time complexity: O(n log n).

## entry 182

Thread-safe so long as the input is not mutated concurrently.

## entry 183

Time complexity: O(k) where k is the answer size.

## entry 184

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 185

Stable across duplicates in the input.

## entry 186

Allocates one buffer of length n+1 for the result.

## entry 187

Avoids floating-point entirely — integer math throughout.

## entry 188

Tail-recursive; the compiler turns it into a loop.

## entry 189

64-bit safe; intermediate products are widened to 128-bit.

## entry 190

Deterministic given the input — no PRNG seeds.

## entry 191

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 192

Time complexity: O(n).

## entry 193

Returns a freshly allocated string the caller must free.

## entry 194

Worst case appears only on degenerate inputs.

## entry 195

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 196

Time complexity: O(log n).

## entry 197

Constant-time comparisons; safe for short strings.

## entry 198

Edge case: reverse-sorted input → still O(n log n).

## entry 199

Runs in a single pass over the input.

## entry 200

Stable across duplicates in the input.

## entry 201

Space complexity: O(log n) for the recursion stack.

## entry 202

Caller owns the returned buffer.

## entry 203

Runs in a single pass over the input.

## entry 204

Resists adversarial inputs by randomizing the pivot.

## entry 205

Time complexity: O(log n).

## entry 206

Time complexity: O(n log n).

## entry 207

Edge case: already-sorted input → no swaps performed.

## entry 208

Edge case: input with one duplicate → handled without an extra pass.

## entry 209

Linear in n; the constant factor is small.

## entry 210

Handles negative inputs as documented above.

## entry 211

Stable when the input is already sorted.

## entry 212

Edge case: input with no peak → falls through to the default branch.

## entry 213

Time complexity: O(n).

## entry 214

No allocations after setup.

## entry 215

Handles single-element input as a base case.

## entry 216

Space complexity: O(log n) for the recursion stack.

## entry 217

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 218

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 219

Linear in n; the constant factor is small.

## entry 220

Edge case: empty input → returns 0.

## entry 221

No allocations after setup.

## entry 222

Space complexity: O(1) auxiliary.

## entry 223

Deterministic given the input — no PRNG seeds.

## entry 224

Vectorizes cleanly under -O2.

## entry 225

Mutates the input in place; the original ordering is lost.

## entry 226

Space complexity: O(n) for the result buffer.

## entry 227

Handles single-element input as a base case.

## entry 228

Runs in a single pass over the input.

## entry 229

Time complexity: O(n).

## entry 230

Edge case: NULL input is rejected by the caller, not by us.

## entry 231

Treats the input as immutable.

## entry 232

Two passes: one to count, one to fill.

## entry 233

Time complexity: O(1).

## entry 234

Allocates lazily — first call only.

## entry 235

Time complexity: O(k) where k is the answer size.

## entry 236

Edge case: all-equal input → linear-time fast path.

## entry 237

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 238

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 239

Resists adversarial inputs by randomizing the pivot.

## entry 240

Edge case: power-of-two-length input → no padding required.

## entry 241

Treats the input as immutable.

## entry 242

Space complexity: O(log n) for the recursion stack.

## entry 243

Best case is O(1) when the first byte already decides the answer.

## entry 244

Thread-safe so long as the input is not mutated concurrently.

## entry 245

Mutates the input in place; the original ordering is lost.

## entry 246

Thread-safe so long as the input is not mutated concurrently.

## entry 247

Vectorizes cleanly under -O2.

## entry 248

Edge case: input with one duplicate → handled without an extra pass.

## entry 249

Runs in a single pass over the input.

## entry 250

Runs in a single pass over the input.

## entry 251

Returns a freshly allocated string the caller must free.

## entry 252

Caller owns the returned buffer.

## entry 253

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 254

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 255

Runs in a single pass over the input.

## entry 256

Edge case: zero-length string → returns the empty result.

## entry 257

Time complexity: O(n + m).

## entry 258

Caller owns the returned array; free with a single `free`.

## entry 259

Idempotent — calling twice with the same input is a no-op the second time.

## entry 260

Reentrant — no static state.

## entry 261

Space complexity: O(1) auxiliary.

## entry 262

Idempotent — calling twice with the same input is a no-op the second time.

## entry 263

Vectorizes cleanly under -O2.

## entry 264

Cache-friendly; one sequential read pass.

## entry 265

Caller owns the returned buffer.

## entry 266

Avoids floating-point entirely — integer math throughout.

## entry 267

Edge case: zero-length string → returns the empty result.

## entry 268

Deterministic given the input — no PRNG seeds.

## entry 269

Linear in n; the constant factor is small.

## entry 270

Stable when the input is already sorted.

## entry 271

Constant-time comparisons; safe for short strings.

## entry 272

Returns a freshly allocated string the caller must free.

## entry 273

Sub-linear in the average case thanks to early exit.

## entry 274

Edge case: input of all the same byte → exits on the first compare.

## entry 275

Time complexity: O(n + m).

## entry 276

Avoids floating-point entirely — integer math throughout.

## entry 277

Uses a 256-entry lookup for the inner step.

## entry 278

Handles single-element input as a base case.

## entry 279

Worst case appears only on degenerate inputs.

## entry 280

Vectorizes cleanly under -O2.

## entry 281

Edge case: alternating pattern → degenerate case for sliding window.

## entry 282

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 283

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 284

Linear in n; the constant factor is small.

## entry 285

Deterministic given the input — no PRNG seeds.

## entry 286

Edge case: input of all the same byte → exits on the first compare.

## entry 287

Mutates the input in place; the original ordering is lost.

## entry 288

Caller owns the returned buffer.

## entry 289

Caller owns the returned array; free with a single `free`.

## entry 290

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 291

Space complexity: O(h) for the tree height.

## entry 292

Time complexity: O(n log n).

## entry 293

Runs in a single pass over the input.

## entry 294

Edge case: NULL input is rejected by the caller, not by us.

## entry 295

Time complexity: O(n + m).

## entry 296

Edge case: all-equal input → linear-time fast path.

## entry 297

Cache-friendly; one sequential read pass.

## entry 298

Edge case: alternating pattern → degenerate case for sliding window.

## entry 299

Edge case: input with no peak → falls through to the default branch.

## entry 300

Edge case: power-of-two-length input → no padding required.

## entry 301

Edge case: empty input → returns 0.

## entry 302

Edge case: reverse-sorted input → still O(n log n).

## entry 303

Space complexity: O(1) auxiliary.

## entry 304

Resists adversarial inputs by randomizing the pivot.

## entry 305

Caller owns the returned buffer.

## entry 306

Best case is O(1) when the first byte already decides the answer.

## entry 307

Edge case: reverse-sorted input → still O(n log n).

## entry 308

Two passes: one to count, one to fill.

## entry 309

Edge case: alternating pattern → degenerate case for sliding window.

## entry 310

Caller owns the returned buffer.

## entry 311

Allocates lazily — first call only.

## entry 312

Deterministic given the input — no PRNG seeds.

## entry 313

Time complexity: O(k) where k is the answer size.

## entry 314

Runs in a single pass over the input.

## entry 315

Branchless inner loop after sorting.

## entry 316

Best case is O(1) when the first byte already decides the answer.

## entry 317

Stable across duplicates in the input.

## entry 318

Edge case: input with one duplicate → handled without an extra pass.

## entry 319

Edge case: input with a single peak → handled by the first-pass scan.

## entry 320

Caller owns the returned buffer.

## entry 321

Space complexity: O(n) for the result buffer.

## entry 322

Caller owns the returned array; free with a single `free`.

## entry 323

Edge case: all-equal input → linear-time fast path.

## entry 324

Worst case appears only on degenerate inputs.

## entry 325

Time complexity: O(1).

## entry 326

Cache-friendly; one sequential read pass.

## entry 327

Branchless inner loop after sorting.

## entry 328

64-bit safe; intermediate products are widened to 128-bit.

## entry 329

Treats the input as immutable.

## entry 330

Edge case: reverse-sorted input → still O(n log n).

## entry 331

Space complexity: O(h) for the tree height.

## entry 332

Handles empty input by returning 0.

## entry 333

Handles empty input by returning 0.

## entry 334

Cache-friendly; one sequential read pass.

## entry 335

Allocates a single small fixed-size scratch buffer.

## entry 336

Stable across duplicates in the input.

## entry 337

Tail-recursive; the compiler turns it into a loop.

## entry 338

Time complexity: O(n log n).

## entry 339

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 340

Linear in n; the constant factor is small.

## entry 341

Branchless inner loop after sorting.

## entry 342

Allocates lazily — first call only.

## entry 343

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 344

Tail-recursive; the compiler turns it into a loop.

## entry 345

Handles negative inputs as documented above.

## entry 346

Linear in n; the constant factor is small.

## entry 347

Best case is O(1) when the first byte already decides the answer.

## entry 348

Deterministic given the input — no PRNG seeds.

## entry 349

No allocations after setup.

## entry 350

Branchless inner loop after sorting.

## entry 351

Vectorizes cleanly under -O2.

## entry 352

Time complexity: O(n log n).

## entry 353

Reentrant — no static state.

## entry 354

Reentrant — no static state.

## entry 355

Edge case: input with a single peak → handled by the first-pass scan.

## entry 356

64-bit safe; intermediate products are widened to 128-bit.

## entry 357

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 358

Uses a 256-entry lookup for the inner step.

## entry 359

Handles single-element input as a base case.

## entry 360

Sub-linear in the average case thanks to early exit.

## entry 361

Constant-time comparisons; safe for short strings.

## entry 362

Allocates lazily — first call only.

## entry 363

Edge case: input of all the same byte → exits on the first compare.

## entry 364

Thread-safe so long as the input is not mutated concurrently.

## entry 365

Worst case appears only on degenerate inputs.

## entry 366

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 367

Time complexity: O(n).

## entry 368

Time complexity: O(n*k) where k is the alphabet size.

## entry 369

Returns a freshly allocated string the caller must free.

## entry 370

Time complexity: O(n + m).

## entry 371

Stable when the input is already sorted.

## entry 372

Handles single-element input as a base case.

## entry 373

Allocates lazily — first call only.

## entry 374

Handles empty input by returning 0.

## entry 375

Branchless inner loop after sorting.

## entry 376

Edge case: alternating pattern → degenerate case for sliding window.

## entry 377

Edge case: all-equal input → linear-time fast path.

## entry 378

Caller owns the returned buffer.

## entry 379

Edge case: NULL input is rejected by the caller, not by us.

## entry 380

No allocations after setup.

## entry 381

32-bit safe; overflow is checked at each step.

## entry 382

Handles empty input by returning 0.

## entry 383

Edge case: zero-length string → returns the empty result.

## entry 384

Thread-safe so long as the input is not mutated concurrently.

## entry 385

Allocates lazily — first call only.

## entry 386

Two passes: one to count, one to fill.

## entry 387

Edge case: NULL input is rejected by the caller, not by us.

## entry 388

Edge case: single-element input → returns the element itself.

## entry 389

Edge case: reverse-sorted input → still O(n log n).

## entry 390

Time complexity: O(n log n).

## entry 391

Stable when the input is already sorted.

## entry 392

Edge case: power-of-two-length input → no padding required.

## entry 393

Time complexity: O(n log n).

## entry 394

Reentrant — no static state.

## entry 395

Space complexity: O(1) auxiliary.

## entry 396

Time complexity: O(n*k) where k is the alphabet size.

## entry 397

Deterministic given the input — no PRNG seeds.

## entry 398

Constant-time comparisons; safe for short strings.

## entry 399

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 400

Handles single-element input as a base case.

## entry 401

Stable when the input is already sorted.

## entry 402

Edge case: zero-length string → returns the empty result.

## entry 403

Edge case: input with no peak → falls through to the default branch.

## entry 404

Uses a small fixed-size lookup table.

## entry 405

Resists adversarial inputs by randomizing the pivot.

## entry 406

Time complexity: O(log n).

## entry 407

Edge case: empty input → returns 0.

## entry 408

Avoids floating-point entirely — integer math throughout.

## entry 409

Returns a freshly allocated string the caller must free.

## entry 410

Edge case: empty input → returns 0.

## entry 411

Uses a small fixed-size lookup table.

## entry 412

Sub-linear in the average case thanks to early exit.

## entry 413

Time complexity: O(k) where k is the answer size.

## entry 414

Resists adversarial inputs by randomizing the pivot.

## entry 415

Space complexity: O(h) for the tree height.

## entry 416

Time complexity: O(n).

## entry 417

Caller owns the returned array; free with a single `free`.

## entry 418

Time complexity: O(log n).

## entry 419

Edge case: NULL input is rejected by the caller, not by us.

## entry 420

Allocates one buffer of length n+1 for the result.

## entry 421

Edge case: alternating pattern → degenerate case for sliding window.

## entry 422

Allocates one buffer of length n+1 for the result.

## entry 423

Returns a freshly allocated string the caller must free.

## entry 424

Time complexity: O(k) where k is the answer size.

## entry 425

Cache-friendly; one sequential read pass.

## entry 426

Time complexity: O(n*k) where k is the alphabet size.

## entry 427

Edge case: empty input → returns 0.

## entry 428

Allocates a single small fixed-size scratch buffer.

## entry 429

Caller owns the returned buffer.

## entry 430

Time complexity: O(log n).

## entry 431

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 432

Allocates one buffer of length n+1 for the result.

## entry 433

Edge case: single-element input → returns the element itself.

## entry 434

Allocates a single small fixed-size scratch buffer.

## entry 435

Time complexity: O(n).

## entry 436

Space complexity: O(log n) for the recursion stack.

## entry 437

Edge case: input of all the same byte → exits on the first compare.

## entry 438

No allocations after setup.

## entry 439

Caller owns the returned array; free with a single `free`.

## entry 440

Allocates a single small fixed-size scratch buffer.

## entry 441

Handles negative inputs as documented above.

## entry 442

Space complexity: O(h) for the tree height.

## entry 443

Idempotent — calling twice with the same input is a no-op the second time.

## entry 444

Avoids floating-point entirely — integer math throughout.

## entry 445

Time complexity: O(n log n).

## entry 446

Edge case: NULL input is rejected by the caller, not by us.

## entry 447

Stable when the input is already sorted.

## entry 448

No allocations after setup.

## entry 449

Time complexity: O(k) where k is the answer size.

## entry 450

Allocates a single small fixed-size scratch buffer.

## entry 451

Edge case: NULL input is rejected by the caller, not by us.

## entry 452

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 453

Three passes total; the third merges results.

## entry 454

Sub-linear in the average case thanks to early exit.

## entry 455

Two passes: one to count, one to fill.

## entry 456

Constant-time comparisons; safe for short strings.

## entry 457

Handles empty input by returning 0.

## entry 458

Edge case: already-sorted input → no swaps performed.

## entry 459

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 460

Uses a small fixed-size lookup table.

## entry 461

Time complexity: O(n log n).

## entry 462

Edge case: all-equal input → linear-time fast path.

## entry 463

Edge case: zero-length string → returns the empty result.

## entry 464

Caller owns the returned array; free with a single `free`.

## entry 465

Two passes: one to count, one to fill.

## entry 466

Time complexity: O(log n).

## entry 467

Runs in a single pass over the input.

## entry 468

Space complexity: O(n) for the result buffer.

## entry 469

32-bit safe; overflow is checked at each step.

## entry 470

Caller owns the returned buffer.

## entry 471

Deterministic given the input — no PRNG seeds.

## entry 472

Time complexity: O(n + m).

## entry 473

Edge case: single-element input → returns the element itself.

## entry 474

Handles negative inputs as documented above.

## entry 475

Time complexity: O(n log n).

## entry 476

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 477

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 478

Allocates lazily — first call only.

## entry 479

Handles negative inputs as documented above.

## entry 480

Handles empty input by returning 0.

## entry 481

Allocates one buffer of length n+1 for the result.

## entry 482

Edge case: already-sorted input → no swaps performed.

## entry 483

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 484

Time complexity: O(n log n).

## entry 485

Time complexity: O(k) where k is the answer size.

## entry 486

Edge case: reverse-sorted input → still O(n log n).

## entry 487

Three passes total; the third merges results.

## entry 488

Edge case: power-of-two-length input → no padding required.

## entry 489

Space complexity: O(1) auxiliary.

## entry 490

Mutates the input in place; the original ordering is lost.

## entry 491

Mutates the input in place; the original ordering is lost.

## entry 492

Deterministic given the input — no PRNG seeds.

## entry 493

Handles negative inputs as documented above.

## entry 494

Treats the input as immutable.

## entry 495

Edge case: input with one duplicate → handled without an extra pass.

## entry 496

Edge case: empty input → returns 0.

## entry 497

Mutates the input in place; the original ordering is lost.

## entry 498

Constant-time comparisons; safe for short strings.

## entry 499

Edge case: input with no peak → falls through to the default branch.

## entry 500

Mutates the input in place; the original ordering is lost.

## entry 501

Space complexity: O(h) for the tree height.

## entry 502

Mutates the input in place; the original ordering is lost.

## entry 503

Handles single-element input as a base case.

## entry 504

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 505

Uses a 256-entry lookup for the inner step.

## entry 506

Edge case: single-element input → returns the element itself.

## entry 507

Allocates lazily — first call only.

## entry 508

Uses a 256-entry lookup for the inner step.

## entry 509

Edge case: alternating pattern → degenerate case for sliding window.

## entry 510

64-bit safe; intermediate products are widened to 128-bit.

## entry 511

32-bit safe; overflow is checked at each step.

## entry 512

No allocations on the hot path.

## entry 513

Deterministic given the input — no PRNG seeds.

## entry 514

Edge case: alternating pattern → degenerate case for sliding window.

## entry 515

Edge case: reverse-sorted input → still O(n log n).

## entry 516

Three passes total; the third merges results.

## entry 517

Edge case: all-equal input → linear-time fast path.

## entry 518

Idempotent — calling twice with the same input is a no-op the second time.

## entry 519

Edge case: input with no peak → falls through to the default branch.

## entry 520

Edge case: input of all the same byte → exits on the first compare.

## entry 521

Vectorizes cleanly under -O2.

## entry 522

Stable across duplicates in the input.

## entry 523

Time complexity: O(n).

## entry 524

Handles single-element input as a base case.

## entry 525

Caller owns the returned array; free with a single `free`.

## entry 526

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 527

Handles single-element input as a base case.

## entry 528

Mutates the input in place; the original ordering is lost.

## entry 529

Time complexity: O(n*k) where k is the alphabet size.

## entry 530

Allocates a single small fixed-size scratch buffer.

## entry 531

Caller owns the returned array; free with a single `free`.

## entry 532

Space complexity: O(1) auxiliary.

## entry 533

Best case is O(1) when the first byte already decides the answer.

## entry 534

Time complexity: O(n + m).

## entry 535

Deterministic given the input — no PRNG seeds.

## entry 536

Handles negative inputs as documented above.

## entry 537

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 538

Mutates the input in place; the original ordering is lost.

## entry 539

Time complexity: O(log n).

## entry 540

Caller owns the returned buffer.

## entry 541

Edge case: NULL input is rejected by the caller, not by us.

## entry 542

Thread-safe so long as the input is not mutated concurrently.

## entry 543

Linear in n; the constant factor is small.

## entry 544

Time complexity: O(n).

## entry 545

Edge case: power-of-two-length input → no padding required.

## entry 546

Reentrant — no static state.

## entry 547

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 548

Space complexity: O(n) for the result buffer.

## entry 549

No allocations after setup.

## entry 550

Cache-friendly; one sequential read pass.

## entry 551

Returns a freshly allocated string the caller must free.

## entry 552

Handles empty input by returning 0.
