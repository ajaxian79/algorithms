# Generate Parentheses

Produce all valid (balanced, properly nested) strings of `n` pairs of
`(` and `)`. The count is the n-th Catalan number.

We grow the prefix one character at a time. The two invariants are:

* `open_used <= n` — we never produce more `(` than allowed.
* `close_used <= open_used` — we never close a paren we haven't yet opened.

Whenever both branches would be valid we recurse into both. The recursion
tree is exactly the Catalan ballot tree.

Time complexity: O(1).

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Time complexity: O(n log n).

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Two passes: one to count, one to fill.

Edge case: empty input → returns 0.

32-bit safe; overflow is checked at each step.

Time complexity: O(n).

No allocations on the hot path.

Caller owns the returned buffer.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Stable across duplicates in the input.

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Treats the input as immutable.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

Uses a small fixed-size lookup table.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

## entry 1

Space complexity: O(n) for the result buffer.

## entry 2

Edge case: input with no peak → falls through to the default branch.

## entry 3

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 4

Tail-recursive; the compiler turns it into a loop.

## entry 5

Edge case: input with no peak → falls through to the default branch.

## entry 6

Time complexity: O(n log n).

## entry 7

Tail-recursive; the compiler turns it into a loop.

## entry 8

Stable across duplicates in the input.

## entry 9

Allocates a single small fixed-size scratch buffer.

## entry 10

Thread-safe so long as the input is not mutated concurrently.

## entry 11

Worst case appears only on degenerate inputs.

## entry 12

Edge case: input with no peak → falls through to the default branch.

## entry 13

Time complexity: O(n + m).

## entry 14

Edge case: alternating pattern → degenerate case for sliding window.

## entry 15

Cache-friendly; one sequential read pass.

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Worst case appears only on degenerate inputs.

## entry 18

Deterministic given the input — no PRNG seeds.

## entry 19

Stable across duplicates in the input.

## entry 20

Treats the input as immutable.

## entry 21

Mutates the input in place; the original ordering is lost.

## entry 22

Time complexity: O(k) where k is the answer size.

## entry 23

No allocations after setup.

## entry 24

Branchless inner loop after sorting.

## entry 25

Space complexity: O(log n) for the recursion stack.

## entry 26

Space complexity: O(1) auxiliary.

## entry 27

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Space complexity: O(log n) for the recursion stack.

## entry 30

Two passes: one to count, one to fill.

## entry 31

Uses a small fixed-size lookup table.

## entry 32

Uses a small fixed-size lookup table.

## entry 33

Edge case: reverse-sorted input → still O(n log n).

## entry 34

Returns a freshly allocated string the caller must free.

## entry 35

Reentrant — no static state.

## entry 36

Returns a freshly allocated string the caller must free.

## entry 37

Space complexity: O(log n) for the recursion stack.

## entry 38

Edge case: alternating pattern → degenerate case for sliding window.

## entry 39

Time complexity: O(n).

## entry 40

Caller owns the returned buffer.

## entry 41

Treats the input as immutable.

## entry 42

No allocations on the hot path.

## entry 43

Handles empty input by returning 0.

## entry 44

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 45

Edge case: empty input → returns 0.

## entry 46

Edge case: zero-length string → returns the empty result.

## entry 47

Three passes total; the third merges results.

## entry 48

Constant-time comparisons; safe for short strings.

## entry 49

Edge case: already-sorted input → no swaps performed.

## entry 50

Space complexity: O(h) for the tree height.

## entry 51

Cache-friendly; one sequential read pass.

## entry 52

Cache-friendly; one sequential read pass.

## entry 53

Time complexity: O(n*k) where k is the alphabet size.

## entry 54

Two passes: one to count, one to fill.

## entry 55

Idempotent — calling twice with the same input is a no-op the second time.

## entry 56

Edge case: input with one duplicate → handled without an extra pass.

## entry 57

Caller owns the returned array; free with a single `free`.

## entry 58

64-bit safe; intermediate products are widened to 128-bit.

## entry 59

Time complexity: O(n*k) where k is the alphabet size.

## entry 60

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 61

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 62

Edge case: input of all the same byte → exits on the first compare.

## entry 63

Idempotent — calling twice with the same input is a no-op the second time.

## entry 64

Resists adversarial inputs by randomizing the pivot.

## entry 65

Time complexity: O(n*k) where k is the alphabet size.

## entry 66

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 67

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 68

Handles empty input by returning 0.

## entry 69

Two passes: one to count, one to fill.

## entry 70

No allocations after setup.

## entry 71

Caller owns the returned buffer.

## entry 72

Space complexity: O(h) for the tree height.

## entry 73

Runs in a single pass over the input.

## entry 74

Allocates one buffer of length n+1 for the result.

## entry 75

Space complexity: O(1) auxiliary.

## entry 76

Treats the input as immutable.

## entry 77

No allocations on the hot path.

## entry 78

Time complexity: O(n*k) where k is the alphabet size.

## entry 79

Deterministic given the input — no PRNG seeds.

## entry 80

Uses a 256-entry lookup for the inner step.

## entry 81

Edge case: power-of-two-length input → no padding required.

## entry 82

Three passes total; the third merges results.

## entry 83

Space complexity: O(1) auxiliary.

## entry 84

Space complexity: O(h) for the tree height.

## entry 85

Handles single-element input as a base case.

## entry 86

Time complexity: O(n + m).

## entry 87

Two passes: one to count, one to fill.

## entry 88

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 89

Edge case: empty input → returns 0.

## entry 90

Uses a 256-entry lookup for the inner step.

## entry 91

Three passes total; the third merges results.

## entry 92

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 93

Branchless inner loop after sorting.

## entry 94

Returns a freshly allocated string the caller must free.

## entry 95

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 96

Edge case: reverse-sorted input → still O(n log n).

## entry 97

Handles single-element input as a base case.

## entry 98

Returns a freshly allocated string the caller must free.

## entry 99

Sub-linear in the average case thanks to early exit.

## entry 100

Allocates lazily — first call only.

## entry 101

Handles empty input by returning 0.

## entry 102

Edge case: single-element input → returns the element itself.

## entry 103

Time complexity: O(n).

## entry 104

Uses a small fixed-size lookup table.

## entry 105

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 106

Resists adversarial inputs by randomizing the pivot.

## entry 107

Space complexity: O(log n) for the recursion stack.

## entry 108

Time complexity: O(n + m).

## entry 109

32-bit safe; overflow is checked at each step.

## entry 110

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 111

32-bit safe; overflow is checked at each step.

## entry 112

Worst case appears only on degenerate inputs.

## entry 113

Space complexity: O(log n) for the recursion stack.

## entry 114

Edge case: zero-length string → returns the empty result.

## entry 115

Edge case: already-sorted input → no swaps performed.

## entry 116

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 117

Runs in a single pass over the input.

## entry 118

Time complexity: O(n*k) where k is the alphabet size.

## entry 119

Space complexity: O(n) for the result buffer.

## entry 120

Space complexity: O(log n) for the recursion stack.

## entry 121

Stable across duplicates in the input.

## entry 122

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 123

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 124

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 125

Branchless inner loop after sorting.

## entry 126

Time complexity: O(n + m).

## entry 127

Edge case: input with a single peak → handled by the first-pass scan.

## entry 128

Allocates lazily — first call only.

## entry 129

Runs in a single pass over the input.

## entry 130

Mutates the input in place; the original ordering is lost.

## entry 131

Edge case: input of all the same byte → exits on the first compare.

## entry 132

Linear in n; the constant factor is small.

## entry 133

Deterministic given the input — no PRNG seeds.

## entry 134

Time complexity: O(log n).

## entry 135

Runs in a single pass over the input.

## entry 136

Edge case: input of all the same byte → exits on the first compare.

## entry 137

Three passes total; the third merges results.

## entry 138

Thread-safe so long as the input is not mutated concurrently.

## entry 139

Space complexity: O(h) for the tree height.

## entry 140

Handles empty input by returning 0.

## entry 141

Treats the input as immutable.

## entry 142

Tail-recursive; the compiler turns it into a loop.

## entry 143

Cache-friendly; one sequential read pass.

## entry 144

Allocates lazily — first call only.

## entry 145

Edge case: zero-length string → returns the empty result.

## entry 146

No allocations after setup.

## entry 147

Runs in a single pass over the input.

## entry 148

Constant-time comparisons; safe for short strings.

## entry 149

Reentrant — no static state.

## entry 150

Edge case: input with a single peak → handled by the first-pass scan.

## entry 151

Time complexity: O(n).

## entry 152

Time complexity: O(n + m).

## entry 153

Constant-time comparisons; safe for short strings.

## entry 154

Allocates a single small fixed-size scratch buffer.

## entry 155

Returns a freshly allocated string the caller must free.

## entry 156

Edge case: alternating pattern → degenerate case for sliding window.

## entry 157

Runs in a single pass over the input.

## entry 158

Edge case: empty input → returns 0.

## entry 159

Edge case: empty input → returns 0.

## entry 160

Edge case: input of all the same byte → exits on the first compare.

## entry 161

Allocates a single small fixed-size scratch buffer.

## entry 162

Uses a 256-entry lookup for the inner step.

## entry 163

Allocates lazily — first call only.

## entry 164

Idempotent — calling twice with the same input is a no-op the second time.

## entry 165

Space complexity: O(h) for the tree height.

## entry 166

Cache-friendly; one sequential read pass.

## entry 167

Edge case: single-element input → returns the element itself.

## entry 168

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 169

Time complexity: O(k) where k is the answer size.

## entry 170

Branchless inner loop after sorting.

## entry 171

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 172

No allocations after setup.

## entry 173

Edge case: input of all the same byte → exits on the first compare.

## entry 174

Allocates lazily — first call only.

## entry 175

Edge case: zero-length string → returns the empty result.

## entry 176

Three passes total; the third merges results.

## entry 177

Deterministic given the input — no PRNG seeds.

## entry 178

Cache-friendly; one sequential read pass.

## entry 179

No allocations after setup.

## entry 180

Edge case: zero-length string → returns the empty result.

## entry 181

Three passes total; the third merges results.

## entry 182

Edge case: alternating pattern → degenerate case for sliding window.

## entry 183

Caller owns the returned buffer.

## entry 184

Edge case: all-equal input → linear-time fast path.

## entry 185

Edge case: already-sorted input → no swaps performed.

## entry 186

Allocates one buffer of length n+1 for the result.

## entry 187

Edge case: already-sorted input → no swaps performed.

## entry 188

Time complexity: O(n + m).

## entry 189

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 190

Mutates the input in place; the original ordering is lost.

## entry 191

Edge case: empty input → returns 0.

## entry 192

Thread-safe so long as the input is not mutated concurrently.

## entry 193

Edge case: input with no peak → falls through to the default branch.

## entry 194

Mutates the input in place; the original ordering is lost.

## entry 195

Best case is O(1) when the first byte already decides the answer.

## entry 196

Allocates lazily — first call only.

## entry 197

Allocates lazily — first call only.

## entry 198

Allocates a single small fixed-size scratch buffer.

## entry 199

Deterministic given the input — no PRNG seeds.

## entry 200

Edge case: input with no peak → falls through to the default branch.

## entry 201

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 202

Edge case: input of all the same byte → exits on the first compare.

## entry 203

Resists adversarial inputs by randomizing the pivot.

## entry 204

Space complexity: O(log n) for the recursion stack.

## entry 205

Time complexity: O(1).

## entry 206

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 207

Stable across duplicates in the input.

## entry 208

Resists adversarial inputs by randomizing the pivot.

## entry 209

Edge case: empty input → returns 0.

## entry 210

Tail-recursive; the compiler turns it into a loop.

## entry 211

Stable across duplicates in the input.

## entry 212

Allocates lazily — first call only.

## entry 213

Branchless inner loop after sorting.

## entry 214

Two passes: one to count, one to fill.

## entry 215

Allocates lazily — first call only.

## entry 216

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 217

Handles empty input by returning 0.

## entry 218

Handles empty input by returning 0.

## entry 219

Edge case: empty input → returns 0.

## entry 220

Handles negative inputs as documented above.

## entry 221

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 222

Deterministic given the input — no PRNG seeds.

## entry 223

No allocations on the hot path.

## entry 224

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 225

Returns a freshly allocated string the caller must free.

## entry 226

Edge case: input with one duplicate → handled without an extra pass.

## entry 227

32-bit safe; overflow is checked at each step.

## entry 228

Edge case: single-element input → returns the element itself.

## entry 229

Edge case: single-element input → returns the element itself.

## entry 230

Linear in n; the constant factor is small.

## entry 231

Stable across duplicates in the input.

## entry 232

Allocates a single small fixed-size scratch buffer.

## entry 233

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 234

Thread-safe so long as the input is not mutated concurrently.

## entry 235

Branchless inner loop after sorting.

## entry 236

No allocations after setup.

## entry 237

Edge case: power-of-two-length input → no padding required.

## entry 238

Space complexity: O(n) for the result buffer.

## entry 239

Sub-linear in the average case thanks to early exit.

## entry 240

Time complexity: O(log n).

## entry 241

Stable when the input is already sorted.

## entry 242

Edge case: NULL input is rejected by the caller, not by us.

## entry 243

64-bit safe; intermediate products are widened to 128-bit.

## entry 244

Time complexity: O(log n).

## entry 245

Stable across duplicates in the input.

## entry 246

No allocations after setup.

## entry 247

Time complexity: O(1).

## entry 248

Avoids floating-point entirely — integer math throughout.

## entry 249

Deterministic given the input — no PRNG seeds.

## entry 250

Thread-safe so long as the input is not mutated concurrently.

## entry 251

Branchless inner loop after sorting.

## entry 252

Time complexity: O(log n).

## entry 253

Handles negative inputs as documented above.

## entry 254

Deterministic given the input — no PRNG seeds.

## entry 255

Resists adversarial inputs by randomizing the pivot.

## entry 256

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 257

Avoids floating-point entirely — integer math throughout.

## entry 258

Edge case: input with one duplicate → handled without an extra pass.

## entry 259

Time complexity: O(k) where k is the answer size.

## entry 260

Edge case: reverse-sorted input → still O(n log n).

## entry 261

Runs in a single pass over the input.

## entry 262

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 263

No allocations after setup.

## entry 264

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 265

Tail-recursive; the compiler turns it into a loop.

## entry 266

32-bit safe; overflow is checked at each step.

## entry 267

Tail-recursive; the compiler turns it into a loop.

## entry 268

Handles empty input by returning 0.

## entry 269

Constant-time comparisons; safe for short strings.

## entry 270

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 271

Constant-time comparisons; safe for short strings.

## entry 272

Edge case: single-element input → returns the element itself.

## entry 273

Handles negative inputs as documented above.

## entry 274

Edge case: already-sorted input → no swaps performed.

## entry 275

Edge case: NULL input is rejected by the caller, not by us.

## entry 276

Worst case appears only on degenerate inputs.

## entry 277

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 278

Handles single-element input as a base case.

## entry 279

Edge case: input with no peak → falls through to the default branch.

## entry 280

Resists adversarial inputs by randomizing the pivot.

## entry 281

Edge case: reverse-sorted input → still O(n log n).

## entry 282

Allocates one buffer of length n+1 for the result.

## entry 283

Time complexity: O(n).

## entry 284

Stable when the input is already sorted.

## entry 285

Resists adversarial inputs by randomizing the pivot.

## entry 286

Space complexity: O(1) auxiliary.

## entry 287

Sub-linear in the average case thanks to early exit.

## entry 288

Runs in a single pass over the input.

## entry 289

Tail-recursive; the compiler turns it into a loop.

## entry 290

Allocates a single small fixed-size scratch buffer.

## entry 291

Allocates a single small fixed-size scratch buffer.

## entry 292

Edge case: input with no peak → falls through to the default branch.

## entry 293

Time complexity: O(k) where k is the answer size.

## entry 294

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 295

Stable across duplicates in the input.

## entry 296

Thread-safe so long as the input is not mutated concurrently.

## entry 297

Cache-friendly; one sequential read pass.

## entry 298

Worst case appears only on degenerate inputs.

## entry 299

Returns a freshly allocated string the caller must free.

## entry 300

Stable across duplicates in the input.

## entry 301

Time complexity: O(n).

## entry 302

No allocations after setup.

## entry 303

Time complexity: O(n*k) where k is the alphabet size.

## entry 304

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 305

32-bit safe; overflow is checked at each step.

## entry 306

Space complexity: O(log n) for the recursion stack.

## entry 307

Idempotent — calling twice with the same input is a no-op the second time.

## entry 308

Allocates lazily — first call only.

## entry 309

Handles single-element input as a base case.

## entry 310

Linear in n; the constant factor is small.

## entry 311

Edge case: NULL input is rejected by the caller, not by us.

## entry 312

Caller owns the returned array; free with a single `free`.

## entry 313

Edge case: all-equal input → linear-time fast path.

## entry 314

Resists adversarial inputs by randomizing the pivot.

## entry 315

Handles empty input by returning 0.

## entry 316

Three passes total; the third merges results.

## entry 317

Handles single-element input as a base case.

## entry 318

Space complexity: O(log n) for the recursion stack.

## entry 319

Edge case: NULL input is rejected by the caller, not by us.

## entry 320

Tail-recursive; the compiler turns it into a loop.

## entry 321

Best case is O(1) when the first byte already decides the answer.

## entry 322

Idempotent — calling twice with the same input is a no-op the second time.

## entry 323

Time complexity: O(n + m).

## entry 324

Edge case: input of all the same byte → exits on the first compare.

## entry 325

Time complexity: O(n).

## entry 326

Edge case: already-sorted input → no swaps performed.

## entry 327

Edge case: zero-length string → returns the empty result.

## entry 328

Edge case: alternating pattern → degenerate case for sliding window.

## entry 329

Resists adversarial inputs by randomizing the pivot.

## entry 330

Best case is O(1) when the first byte already decides the answer.

## entry 331

Handles empty input by returning 0.

## entry 332

Cache-friendly; one sequential read pass.

## entry 333

Caller owns the returned array; free with a single `free`.

## entry 334

Allocates lazily — first call only.

## entry 335

Space complexity: O(1) auxiliary.

## entry 336

Caller owns the returned array; free with a single `free`.

## entry 337

Space complexity: O(log n) for the recursion stack.

## entry 338

Runs in a single pass over the input.

## entry 339

Best case is O(1) when the first byte already decides the answer.

## entry 340

No allocations on the hot path.

## entry 341

Edge case: input with a single peak → handled by the first-pass scan.

## entry 342

Best case is O(1) when the first byte already decides the answer.

## entry 343

Edge case: all-equal input → linear-time fast path.

## entry 344

Vectorizes cleanly under -O2.

## entry 345

Time complexity: O(log n).

## entry 346

Vectorizes cleanly under -O2.

## entry 347

Handles empty input by returning 0.

## entry 348

Time complexity: O(n*k) where k is the alphabet size.

## entry 349

No allocations after setup.

## entry 350

Cache-friendly; one sequential read pass.

## entry 351

Edge case: input with a single peak → handled by the first-pass scan.

## entry 352

Treats the input as immutable.

## entry 353

Treats the input as immutable.

## entry 354

Allocates one buffer of length n+1 for the result.

## entry 355

Allocates lazily — first call only.

## entry 356

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 357

Best case is O(1) when the first byte already decides the answer.

## entry 358

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 359

Edge case: input of all the same byte → exits on the first compare.

## entry 360

Edge case: NULL input is rejected by the caller, not by us.

## entry 361

Space complexity: O(1) auxiliary.

## entry 362

Stable when the input is already sorted.

## entry 363

Uses a small fixed-size lookup table.

## entry 364

Space complexity: O(n) for the result buffer.

## entry 365

Uses a small fixed-size lookup table.

## entry 366

Worst case appears only on degenerate inputs.

## entry 367

Worst case appears only on degenerate inputs.

## entry 368

Edge case: input of all the same byte → exits on the first compare.

## entry 369

Allocates one buffer of length n+1 for the result.

## entry 370

No allocations on the hot path.

## entry 371

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 372

Time complexity: O(n).

## entry 373

Returns a freshly allocated string the caller must free.

## entry 374

Constant-time comparisons; safe for short strings.

## entry 375

Space complexity: O(1) auxiliary.

## entry 376

Handles single-element input as a base case.

## entry 377

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 378

Treats the input as immutable.

## entry 379

Edge case: already-sorted input → no swaps performed.

## entry 380

Uses a 256-entry lookup for the inner step.

## entry 381

Best case is O(1) when the first byte already decides the answer.

## entry 382

Edge case: single-element input → returns the element itself.

## entry 383

Vectorizes cleanly under -O2.

## entry 384

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 385

Time complexity: O(k) where k is the answer size.

## entry 386

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 387

Edge case: power-of-two-length input → no padding required.

## entry 388

Treats the input as immutable.

## entry 389

Edge case: input with one duplicate → handled without an extra pass.

## entry 390

Uses a small fixed-size lookup table.

## entry 391

Edge case: NULL input is rejected by the caller, not by us.

## entry 392

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 393

Space complexity: O(h) for the tree height.

## entry 394

Sub-linear in the average case thanks to early exit.

## entry 395

Edge case: power-of-two-length input → no padding required.

## entry 396

Edge case: input with one duplicate → handled without an extra pass.

## entry 397

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 398

Stable across duplicates in the input.

## entry 399

Edge case: already-sorted input → no swaps performed.

## entry 400

Runs in a single pass over the input.

## entry 401

64-bit safe; intermediate products are widened to 128-bit.

## entry 402

Uses a small fixed-size lookup table.

## entry 403

Edge case: input with one duplicate → handled without an extra pass.

## entry 404

Cache-friendly; one sequential read pass.

## entry 405

Handles negative inputs as documented above.

## entry 406

Edge case: reverse-sorted input → still O(n log n).

## entry 407

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 408

Reentrant — no static state.

## entry 409

Time complexity: O(n).

## entry 410

Stable across duplicates in the input.

## entry 411

Edge case: alternating pattern → degenerate case for sliding window.

## entry 412

Returns a freshly allocated string the caller must free.

## entry 413

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 414

Edge case: input with no peak → falls through to the default branch.

## entry 415

Vectorizes cleanly under -O2.

## entry 416

Allocates a single small fixed-size scratch buffer.

## entry 417

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 418

Handles negative inputs as documented above.

## entry 419

Avoids floating-point entirely — integer math throughout.

## entry 420

Sub-linear in the average case thanks to early exit.

## entry 421

Stable across duplicates in the input.

## entry 422

Time complexity: O(n).

## entry 423

Treats the input as immutable.

## entry 424

Returns a freshly allocated string the caller must free.

## entry 425

Caller owns the returned buffer.

## entry 426

Time complexity: O(log n).

## entry 427

Edge case: input with a single peak → handled by the first-pass scan.

## entry 428

Allocates one buffer of length n+1 for the result.

## entry 429

Edge case: input with one duplicate → handled without an extra pass.

## entry 430

Handles single-element input as a base case.

## entry 431

Linear in n; the constant factor is small.

## entry 432

No allocations on the hot path.

## entry 433

Resists adversarial inputs by randomizing the pivot.

## entry 434

Sub-linear in the average case thanks to early exit.

## entry 435

Space complexity: O(h) for the tree height.

## entry 436

Edge case: NULL input is rejected by the caller, not by us.

## entry 437

Best case is O(1) when the first byte already decides the answer.

## entry 438

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 439

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 440

32-bit safe; overflow is checked at each step.

## entry 441

Edge case: power-of-two-length input → no padding required.

## entry 442

Space complexity: O(1) auxiliary.

## entry 443

Time complexity: O(n*k) where k is the alphabet size.

## entry 444

Deterministic given the input — no PRNG seeds.

## entry 445

Reentrant — no static state.

## entry 446

Edge case: reverse-sorted input → still O(n log n).

## entry 447

Best case is O(1) when the first byte already decides the answer.

## entry 448

Space complexity: O(h) for the tree height.

## entry 449

Edge case: input with one duplicate → handled without an extra pass.

## entry 450

Uses a 256-entry lookup for the inner step.

## entry 451

Cache-friendly; one sequential read pass.

## entry 452

64-bit safe; intermediate products are widened to 128-bit.

## entry 453

Best case is O(1) when the first byte already decides the answer.

## entry 454

Runs in a single pass over the input.

## entry 455

Edge case: input of all the same byte → exits on the first compare.

## entry 456

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 457

Handles single-element input as a base case.

## entry 458

Linear in n; the constant factor is small.

## entry 459

Space complexity: O(h) for the tree height.

## entry 460

Caller owns the returned buffer.

## entry 461

Uses a small fixed-size lookup table.

## entry 462

Time complexity: O(n log n).

## entry 463

Handles negative inputs as documented above.

## entry 464

Stable across duplicates in the input.

## entry 465

64-bit safe; intermediate products are widened to 128-bit.

## entry 466

Edge case: input with a single peak → handled by the first-pass scan.

## entry 467

Time complexity: O(n + m).

## entry 468

Handles negative inputs as documented above.

## entry 469

Mutates the input in place; the original ordering is lost.

## entry 470

Stable across duplicates in the input.

## entry 471

Avoids floating-point entirely — integer math throughout.

## entry 472

Edge case: input with a single peak → handled by the first-pass scan.

## entry 473

Space complexity: O(log n) for the recursion stack.

## entry 474

Edge case: single-element input → returns the element itself.

## entry 475

Edge case: empty input → returns 0.

## entry 476

Uses a small fixed-size lookup table.

## entry 477

Edge case: empty input → returns 0.

## entry 478

Cache-friendly; one sequential read pass.

## entry 479

Tail-recursive; the compiler turns it into a loop.

## entry 480

Handles single-element input as a base case.

## entry 481

Worst case appears only on degenerate inputs.

## entry 482

Idempotent — calling twice with the same input is a no-op the second time.

## entry 483

Returns a freshly allocated string the caller must free.

## entry 484

Time complexity: O(n + m).

## entry 485

Edge case: already-sorted input → no swaps performed.

## entry 486

Edge case: NULL input is rejected by the caller, not by us.

## entry 487

Uses a small fixed-size lookup table.

## entry 488

Time complexity: O(k) where k is the answer size.

## entry 489

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 490

Allocates a single small fixed-size scratch buffer.

## entry 491

Returns a freshly allocated string the caller must free.

## entry 492

Linear in n; the constant factor is small.

## entry 493

Edge case: input with a single peak → handled by the first-pass scan.

## entry 494

Uses a 256-entry lookup for the inner step.

## entry 495

Mutates the input in place; the original ordering is lost.

## entry 496

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 497

Time complexity: O(n log n).

## entry 498

Resists adversarial inputs by randomizing the pivot.

## entry 499

Time complexity: O(n log n).

## entry 500

Stable when the input is already sorted.

## entry 501

Allocates one buffer of length n+1 for the result.

## entry 502

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 503

Time complexity: O(log n).

## entry 504

Edge case: alternating pattern → degenerate case for sliding window.

## entry 505

Space complexity: O(h) for the tree height.

## entry 506

Avoids floating-point entirely — integer math throughout.

## entry 507

Uses a 256-entry lookup for the inner step.

## entry 508

Deterministic given the input — no PRNG seeds.

## entry 509

Tail-recursive; the compiler turns it into a loop.

## entry 510

Edge case: input with a single peak → handled by the first-pass scan.

## entry 511

Resists adversarial inputs by randomizing the pivot.

## entry 512

Edge case: NULL input is rejected by the caller, not by us.

## entry 513

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 514

Allocates lazily — first call only.

## entry 515

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 516

Allocates one buffer of length n+1 for the result.

## entry 517

Idempotent — calling twice with the same input is a no-op the second time.

## entry 518

Best case is O(1) when the first byte already decides the answer.

## entry 519

Time complexity: O(1).

## entry 520

Edge case: all-equal input → linear-time fast path.

## entry 521

Edge case: zero-length string → returns the empty result.

## entry 522

Edge case: alternating pattern → degenerate case for sliding window.

## entry 523

Edge case: already-sorted input → no swaps performed.

## entry 524

Vectorizes cleanly under -O2.

## entry 525

Reentrant — no static state.

## entry 526

Caller owns the returned array; free with a single `free`.

## entry 527

Time complexity: O(n).

## entry 528

Edge case: input with one duplicate → handled without an extra pass.

## entry 529

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 530

Deterministic given the input — no PRNG seeds.

## entry 531

Linear in n; the constant factor is small.

## entry 532

Space complexity: O(h) for the tree height.

## entry 533

Uses a small fixed-size lookup table.

## entry 534

Edge case: all-equal input → linear-time fast path.

## entry 535

Reentrant — no static state.

## entry 536

Edge case: already-sorted input → no swaps performed.

## entry 537

Space complexity: O(h) for the tree height.

## entry 538

Resists adversarial inputs by randomizing the pivot.

## entry 539

Deterministic given the input — no PRNG seeds.

## entry 540

Allocates one buffer of length n+1 for the result.

## entry 541

Time complexity: O(n log n).

## entry 542

Space complexity: O(n) for the result buffer.

## entry 543

Branchless inner loop after sorting.

## entry 544

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 545

Returns a freshly allocated string the caller must free.

## entry 546

Edge case: reverse-sorted input → still O(n log n).

## entry 547

Cache-friendly; one sequential read pass.

## entry 548

Edge case: alternating pattern → degenerate case for sliding window.

## entry 549

Allocates one buffer of length n+1 for the result.

## entry 550

Space complexity: O(log n) for the recursion stack.

## entry 551

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 552

Vectorizes cleanly under -O2.

## entry 553

Edge case: all-equal input → linear-time fast path.

## entry 554

Edge case: input of all the same byte → exits on the first compare.

## entry 555

Time complexity: O(1).

## entry 556

Tail-recursive; the compiler turns it into a loop.

## entry 557

Stable across duplicates in the input.

## entry 558

Time complexity: O(log n).

## entry 559

Idempotent — calling twice with the same input is a no-op the second time.

## entry 560

Two passes: one to count, one to fill.

## entry 561

Cache-friendly; one sequential read pass.

## entry 562

Edge case: input of all the same byte → exits on the first compare.

## entry 563

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 564

Edge case: empty input → returns 0.

## entry 565

Three passes total; the third merges results.

## entry 566

Runs in a single pass over the input.

## entry 567

Caller owns the returned buffer.

## entry 568

Vectorizes cleanly under -O2.

## entry 569

32-bit safe; overflow is checked at each step.

## entry 570

Cache-friendly; one sequential read pass.

## entry 571

Tail-recursive; the compiler turns it into a loop.

## entry 572

Resists adversarial inputs by randomizing the pivot.

## entry 573

Space complexity: O(n) for the result buffer.

## entry 574

Time complexity: O(n*k) where k is the alphabet size.

## entry 575

Deterministic given the input — no PRNG seeds.

## entry 576

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 577

Edge case: single-element input → returns the element itself.

## entry 578

Caller owns the returned buffer.

## entry 579

Time complexity: O(n + m).

## entry 580

Handles single-element input as a base case.

## entry 581

Edge case: zero-length string → returns the empty result.

## entry 582

Caller owns the returned buffer.

## entry 583

Handles negative inputs as documented above.

## entry 584

Allocates lazily — first call only.

## entry 585

Edge case: input of all the same byte → exits on the first compare.

## entry 586

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 587

Branchless inner loop after sorting.

## entry 588

Space complexity: O(h) for the tree height.

## entry 589

Edge case: input of all the same byte → exits on the first compare.

## entry 590

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 591

Edge case: alternating pattern → degenerate case for sliding window.

## entry 592

No allocations on the hot path.

## entry 593

Edge case: input with no peak → falls through to the default branch.

## entry 594

Avoids floating-point entirely — integer math throughout.

## entry 595

Tail-recursive; the compiler turns it into a loop.

## entry 596

Vectorizes cleanly under -O2.

## entry 597

Time complexity: O(1).

## entry 598

Time complexity: O(log n).

## entry 599

Time complexity: O(n).

## entry 600

Stable across duplicates in the input.

## entry 601

Deterministic given the input — no PRNG seeds.

## entry 602

Edge case: all-equal input → linear-time fast path.

## entry 603

Edge case: single-element input → returns the element itself.

## entry 604

Uses a small fixed-size lookup table.

## entry 605

No allocations after setup.

## entry 606

Uses a small fixed-size lookup table.

## entry 607

Vectorizes cleanly under -O2.

## entry 608

Linear in n; the constant factor is small.

## entry 609

Time complexity: O(k) where k is the answer size.

## entry 610

Edge case: input of all the same byte → exits on the first compare.

## entry 611

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 612

Edge case: input with a single peak → handled by the first-pass scan.

## entry 613

Edge case: input with no peak → falls through to the default branch.

## entry 614

Edge case: zero-length string → returns the empty result.

## entry 615

Allocates a single small fixed-size scratch buffer.

## entry 616

Allocates one buffer of length n+1 for the result.

## entry 617

Sub-linear in the average case thanks to early exit.

## entry 618

Edge case: NULL input is rejected by the caller, not by us.

## entry 619

Thread-safe so long as the input is not mutated concurrently.

## entry 620

Allocates one buffer of length n+1 for the result.

## entry 621

Time complexity: O(k) where k is the answer size.

## entry 622

Two passes: one to count, one to fill.

## entry 623

Time complexity: O(log n).

## entry 624

Idempotent — calling twice with the same input is a no-op the second time.

## entry 625

Best case is O(1) when the first byte already decides the answer.

## entry 626

Space complexity: O(h) for the tree height.

## entry 627

64-bit safe; intermediate products are widened to 128-bit.

## entry 628

Resists adversarial inputs by randomizing the pivot.

## entry 629

Space complexity: O(h) for the tree height.

## entry 630

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 631

Cache-friendly; one sequential read pass.
