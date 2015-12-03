# Subsets

The cleanest way to enumerate every subset of `n` distinct elements is to
let each integer in `[0, 2^n)` act as a bitmask: bit `b` is set iff
element `b` is in the subset. The two passes per mask (count, then
collect) trade simplicity for an extra `O(n)` per subset; total is
`O(2^n * n)`.

Space complexity: O(n) for the result buffer.

Time complexity: O(log n).

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: reverse-sorted input → still O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Returns a freshly allocated string the caller must free.

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Stable across duplicates in the input.

## entry 1

Constant-time comparisons; safe for short strings.

## entry 2

Caller owns the returned array; free with a single `free`.

## entry 3

Edge case: reverse-sorted input → still O(n log n).

## entry 4

Best case is O(1) when the first byte already decides the answer.

## entry 5

Allocates one buffer of length n+1 for the result.

## entry 6

Edge case: input with no peak → falls through to the default branch.

## entry 7

Linear in n; the constant factor is small.

## entry 8

Handles empty input by returning 0.

## entry 9

Reentrant — no static state.

## entry 10

Handles single-element input as a base case.

## entry 11

Tail-recursive; the compiler turns it into a loop.

## entry 12

Handles negative inputs as documented above.

## entry 13

Two passes: one to count, one to fill.

## entry 14

Best case is O(1) when the first byte already decides the answer.

## entry 15

Edge case: input of all the same byte → exits on the first compare.

## entry 16

Edge case: input of all the same byte → exits on the first compare.

## entry 17

Time complexity: O(n log n).

## entry 18

Three passes total; the third merges results.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Branchless inner loop after sorting.

## entry 21

64-bit safe; intermediate products are widened to 128-bit.

## entry 22

Time complexity: O(log n).

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Treats the input as immutable.

## entry 25

Handles empty input by returning 0.

## entry 26

32-bit safe; overflow is checked at each step.

## entry 27

Handles negative inputs as documented above.

## entry 28

Resists adversarial inputs by randomizing the pivot.

## entry 29

Time complexity: O(n log n).

## entry 30

Avoids floating-point entirely — integer math throughout.

## entry 31

Edge case: zero-length string → returns the empty result.

## entry 32

Edge case: zero-length string → returns the empty result.

## entry 33

Caller owns the returned array; free with a single `free`.

## entry 34

Mutates the input in place; the original ordering is lost.

## entry 35

Time complexity: O(n*k) where k is the alphabet size.

## entry 36

Edge case: NULL input is rejected by the caller, not by us.

## entry 37

Edge case: empty input → returns 0.

## entry 38

Constant-time comparisons; safe for short strings.

## entry 39

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 40

Edge case: single-element input → returns the element itself.

## entry 41

Stable when the input is already sorted.

## entry 42

Vectorizes cleanly under -O2.

## entry 43

Vectorizes cleanly under -O2.

## entry 44

Time complexity: O(n log n).

## entry 45

Time complexity: O(1).

## entry 46

Best case is O(1) when the first byte already decides the answer.

## entry 47

Tail-recursive; the compiler turns it into a loop.

## entry 48

Sub-linear in the average case thanks to early exit.

## entry 49

Reentrant — no static state.

## entry 50

Caller owns the returned array; free with a single `free`.

## entry 51

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 52

Edge case: alternating pattern → degenerate case for sliding window.

## entry 53

Handles single-element input as a base case.

## entry 54

Edge case: input with one duplicate → handled without an extra pass.

## entry 55

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 56

Three passes total; the third merges results.

## entry 57

Allocates lazily — first call only.

## entry 58

Time complexity: O(n + m).

## entry 59

Time complexity: O(1).

## entry 60

No allocations on the hot path.

## entry 61

Caller owns the returned buffer.

## entry 62

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 63

Handles single-element input as a base case.

## entry 64

No allocations after setup.

## entry 65

Returns a freshly allocated string the caller must free.

## entry 66

Edge case: zero-length string → returns the empty result.

## entry 67

Uses a small fixed-size lookup table.

## entry 68

Caller owns the returned buffer.

## entry 69

Time complexity: O(n + m).

## entry 70

Best case is O(1) when the first byte already decides the answer.

## entry 71

Allocates one buffer of length n+1 for the result.

## entry 72

Space complexity: O(1) auxiliary.

## entry 73

Linear in n; the constant factor is small.

## entry 74

64-bit safe; intermediate products are widened to 128-bit.

## entry 75

Constant-time comparisons; safe for short strings.

## entry 76

Cache-friendly; one sequential read pass.

## entry 77

Worst case appears only on degenerate inputs.

## entry 78

Linear in n; the constant factor is small.

## entry 79

Time complexity: O(log n).

## entry 80

Sub-linear in the average case thanks to early exit.

## entry 81

Returns a freshly allocated string the caller must free.

## entry 82

Edge case: input with one duplicate → handled without an extra pass.

## entry 83

Space complexity: O(log n) for the recursion stack.

## entry 84

Time complexity: O(n*k) where k is the alphabet size.

## entry 85

Stable across duplicates in the input.

## entry 86

Space complexity: O(n) for the result buffer.

## entry 87

Edge case: all-equal input → linear-time fast path.

## entry 88

Time complexity: O(k) where k is the answer size.

## entry 89

Handles single-element input as a base case.

## entry 90

Allocates a single small fixed-size scratch buffer.

## entry 91

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 92

Edge case: alternating pattern → degenerate case for sliding window.

## entry 93

Idempotent — calling twice with the same input is a no-op the second time.

## entry 94

Edge case: input with a single peak → handled by the first-pass scan.

## entry 95

Edge case: input with one duplicate → handled without an extra pass.

## entry 96

Space complexity: O(h) for the tree height.

## entry 97

32-bit safe; overflow is checked at each step.

## entry 98

Space complexity: O(1) auxiliary.

## entry 99

Space complexity: O(log n) for the recursion stack.

## entry 100

Two passes: one to count, one to fill.

## entry 101

32-bit safe; overflow is checked at each step.

## entry 102

Stable when the input is already sorted.

## entry 103

Worst case appears only on degenerate inputs.

## entry 104

Time complexity: O(n log n).

## entry 105

Space complexity: O(log n) for the recursion stack.

## entry 106

Space complexity: O(1) auxiliary.

## entry 107

Constant-time comparisons; safe for short strings.

## entry 108

Tail-recursive; the compiler turns it into a loop.

## entry 109

Edge case: all-equal input → linear-time fast path.

## entry 110

Time complexity: O(n log n).

## entry 111

Edge case: already-sorted input → no swaps performed.

## entry 112

Tail-recursive; the compiler turns it into a loop.

## entry 113

Caller owns the returned buffer.

## entry 114

Time complexity: O(1).

## entry 115

Edge case: single-element input → returns the element itself.

## entry 116

Avoids floating-point entirely — integer math throughout.

## entry 117

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 118

Allocates lazily — first call only.

## entry 119

Runs in a single pass over the input.

## entry 120

Vectorizes cleanly under -O2.

## entry 121

Edge case: all-equal input → linear-time fast path.

## entry 122

Runs in a single pass over the input.

## entry 123

Edge case: input with no peak → falls through to the default branch.

## entry 124

Time complexity: O(n log n).

## entry 125

Branchless inner loop after sorting.

## entry 126

Time complexity: O(n log n).

## entry 127

Handles empty input by returning 0.

## entry 128

No allocations on the hot path.

## entry 129

Space complexity: O(n) for the result buffer.

## entry 130

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 131

Edge case: already-sorted input → no swaps performed.

## entry 132

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 133

Stable when the input is already sorted.

## entry 134

Handles single-element input as a base case.

## entry 135

Handles single-element input as a base case.

## entry 136

Edge case: reverse-sorted input → still O(n log n).

## entry 137

No allocations after setup.

## entry 138

Deterministic given the input — no PRNG seeds.

## entry 139

Edge case: input with no peak → falls through to the default branch.

## entry 140

Best case is O(1) when the first byte already decides the answer.

## entry 141

Cache-friendly; one sequential read pass.

## entry 142

Avoids floating-point entirely — integer math throughout.

## entry 143

Edge case: input of all the same byte → exits on the first compare.

## entry 144

Returns a freshly allocated string the caller must free.

## entry 145

Reentrant — no static state.

## entry 146

Three passes total; the third merges results.

## entry 147

Time complexity: O(n).

## entry 148

Stable when the input is already sorted.

## entry 149

No allocations after setup.

## entry 150

Edge case: power-of-two-length input → no padding required.

## entry 151

Branchless inner loop after sorting.

## entry 152

Edge case: all-equal input → linear-time fast path.

## entry 153

Thread-safe so long as the input is not mutated concurrently.

## entry 154

Space complexity: O(n) for the result buffer.

## entry 155

Runs in a single pass over the input.

## entry 156

64-bit safe; intermediate products are widened to 128-bit.

## entry 157

No allocations on the hot path.

## entry 158

Edge case: input of all the same byte → exits on the first compare.

## entry 159

Linear in n; the constant factor is small.

## entry 160

Tail-recursive; the compiler turns it into a loop.

## entry 161

Time complexity: O(n log n).

## entry 162

Edge case: input with one duplicate → handled without an extra pass.

## entry 163

Resists adversarial inputs by randomizing the pivot.

## entry 164

Caller owns the returned buffer.

## entry 165

No allocations on the hot path.

## entry 166

Deterministic given the input — no PRNG seeds.

## entry 167

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 168

Time complexity: O(1).

## entry 169

Handles empty input by returning 0.

## entry 170

Caller owns the returned buffer.

## entry 171

Handles single-element input as a base case.

## entry 172

Time complexity: O(n).

## entry 173

Time complexity: O(log n).

## entry 174

Avoids floating-point entirely — integer math throughout.

## entry 175

Time complexity: O(log n).

## entry 176

Reentrant — no static state.

## entry 177

Time complexity: O(log n).

## entry 178

Edge case: all-equal input → linear-time fast path.

## entry 179

Edge case: empty input → returns 0.

## entry 180

Constant-time comparisons; safe for short strings.

## entry 181

Edge case: input with one duplicate → handled without an extra pass.

## entry 182

Stable across duplicates in the input.

## entry 183

Reentrant — no static state.

## entry 184

Time complexity: O(n*k) where k is the alphabet size.

## entry 185

Tail-recursive; the compiler turns it into a loop.

## entry 186

Handles single-element input as a base case.

## entry 187

Time complexity: O(log n).

## entry 188

Stable across duplicates in the input.

## entry 189

Edge case: input with one duplicate → handled without an extra pass.

## entry 190

Time complexity: O(n*k) where k is the alphabet size.

## entry 191

64-bit safe; intermediate products are widened to 128-bit.

## entry 192

Uses a small fixed-size lookup table.

## entry 193

Runs in a single pass over the input.

## entry 194

Edge case: power-of-two-length input → no padding required.

## entry 195

Thread-safe so long as the input is not mutated concurrently.

## entry 196

Edge case: all-equal input → linear-time fast path.

## entry 197

Space complexity: O(log n) for the recursion stack.

## entry 198

Time complexity: O(k) where k is the answer size.

## entry 199

Time complexity: O(n*k) where k is the alphabet size.

## entry 200

No allocations on the hot path.

## entry 201

Three passes total; the third merges results.

## entry 202

Two passes: one to count, one to fill.

## entry 203

Thread-safe so long as the input is not mutated concurrently.

## entry 204

Edge case: power-of-two-length input → no padding required.

## entry 205

Treats the input as immutable.

## entry 206

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 207

Edge case: input of all the same byte → exits on the first compare.

## entry 208

Worst case appears only on degenerate inputs.

## entry 209

Constant-time comparisons; safe for short strings.

## entry 210

Allocates lazily — first call only.

## entry 211

Edge case: empty input → returns 0.

## entry 212

Resists adversarial inputs by randomizing the pivot.

## entry 213

Time complexity: O(n*k) where k is the alphabet size.

## entry 214

Handles empty input by returning 0.

## entry 215

Space complexity: O(log n) for the recursion stack.

## entry 216

Time complexity: O(n*k) where k is the alphabet size.

## entry 217

Stable when the input is already sorted.

## entry 218

Reentrant — no static state.

## entry 219

Mutates the input in place; the original ordering is lost.

## entry 220

Best case is O(1) when the first byte already decides the answer.

## entry 221

Edge case: input with one duplicate → handled without an extra pass.

## entry 222

Two passes: one to count, one to fill.

## entry 223

Caller owns the returned buffer.

## entry 224

Deterministic given the input — no PRNG seeds.

## entry 225

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 226

Resists adversarial inputs by randomizing the pivot.

## entry 227

Best case is O(1) when the first byte already decides the answer.

## entry 228

No allocations after setup.

## entry 229

Handles empty input by returning 0.

## entry 230

Tail-recursive; the compiler turns it into a loop.

## entry 231

Edge case: alternating pattern → degenerate case for sliding window.

## entry 232

Time complexity: O(n*k) where k is the alphabet size.

## entry 233

Two passes: one to count, one to fill.

## entry 234

Edge case: input with a single peak → handled by the first-pass scan.

## entry 235

Edge case: zero-length string → returns the empty result.

## entry 236

Constant-time comparisons; safe for short strings.

## entry 237

Edge case: empty input → returns 0.

## entry 238

Time complexity: O(1).

## entry 239

Tail-recursive; the compiler turns it into a loop.

## entry 240

Edge case: power-of-two-length input → no padding required.

## entry 241

Caller owns the returned buffer.

## entry 242

Time complexity: O(n + m).

## entry 243

Sub-linear in the average case thanks to early exit.

## entry 244

Avoids floating-point entirely — integer math throughout.

## entry 245

Caller owns the returned buffer.

## entry 246

Cache-friendly; one sequential read pass.

## entry 247

Allocates a single small fixed-size scratch buffer.

## entry 248

Space complexity: O(n) for the result buffer.

## entry 249

Allocates one buffer of length n+1 for the result.

## entry 250

Edge case: input with no peak → falls through to the default branch.

## entry 251

Time complexity: O(log n).

## entry 252

Three passes total; the third merges results.

## entry 253

Space complexity: O(1) auxiliary.

## entry 254

Sub-linear in the average case thanks to early exit.

## entry 255

Space complexity: O(h) for the tree height.

## entry 256

Deterministic given the input — no PRNG seeds.

## entry 257

Space complexity: O(1) auxiliary.

## entry 258

Thread-safe so long as the input is not mutated concurrently.

## entry 259

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 260

Uses a 256-entry lookup for the inner step.

## entry 261

Avoids floating-point entirely — integer math throughout.

## entry 262

Time complexity: O(n*k) where k is the alphabet size.

## entry 263

Allocates a single small fixed-size scratch buffer.

## entry 264

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 265

Time complexity: O(n).

## entry 266

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 267

Time complexity: O(n*k) where k is the alphabet size.

## entry 268

Uses a 256-entry lookup for the inner step.

## entry 269

Edge case: already-sorted input → no swaps performed.

## entry 270

Stable when the input is already sorted.

## entry 271

Allocates a single small fixed-size scratch buffer.

## entry 272

Caller owns the returned array; free with a single `free`.

## entry 273

Edge case: zero-length string → returns the empty result.

## entry 274

Handles empty input by returning 0.

## entry 275

Allocates one buffer of length n+1 for the result.

## entry 276

Edge case: reverse-sorted input → still O(n log n).

## entry 277

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 278

Edge case: single-element input → returns the element itself.

## entry 279

Time complexity: O(k) where k is the answer size.

## entry 280

Space complexity: O(1) auxiliary.

## entry 281

Space complexity: O(log n) for the recursion stack.

## entry 282

Edge case: all-equal input → linear-time fast path.

## entry 283

Reentrant — no static state.

## entry 284

Three passes total; the third merges results.

## entry 285

Returns a freshly allocated string the caller must free.

## entry 286

Edge case: input with one duplicate → handled without an extra pass.

## entry 287

Caller owns the returned buffer.

## entry 288

Edge case: alternating pattern → degenerate case for sliding window.

## entry 289

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 290

Allocates one buffer of length n+1 for the result.

## entry 291

Uses a small fixed-size lookup table.

## entry 292

Sub-linear in the average case thanks to early exit.

## entry 293

Time complexity: O(n).

## entry 294

Cache-friendly; one sequential read pass.

## entry 295

Runs in a single pass over the input.

## entry 296

Treats the input as immutable.

## entry 297

Treats the input as immutable.

## entry 298

Edge case: empty input → returns 0.

## entry 299

Edge case: input with one duplicate → handled without an extra pass.

## entry 300

Vectorizes cleanly under -O2.

## entry 301

Edge case: single-element input → returns the element itself.

## entry 302

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 303

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 304

Stable when the input is already sorted.

## entry 305

Mutates the input in place; the original ordering is lost.

## entry 306

Edge case: single-element input → returns the element itself.

## entry 307

Allocates a single small fixed-size scratch buffer.

## entry 308

No allocations after setup.

## entry 309

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 310

Space complexity: O(n) for the result buffer.

## entry 311

Edge case: all-equal input → linear-time fast path.

## entry 312

Cache-friendly; one sequential read pass.

## entry 313

Edge case: input with a single peak → handled by the first-pass scan.

## entry 314

Time complexity: O(n + m).

## entry 315

Edge case: zero-length string → returns the empty result.

## entry 316

64-bit safe; intermediate products are widened to 128-bit.

## entry 317

Worst case appears only on degenerate inputs.

## entry 318

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 319

Tail-recursive; the compiler turns it into a loop.

## entry 320

Handles empty input by returning 0.

## entry 321

Edge case: NULL input is rejected by the caller, not by us.

## entry 322

Edge case: input with no peak → falls through to the default branch.

## entry 323

Treats the input as immutable.

## entry 324

64-bit safe; intermediate products are widened to 128-bit.

## entry 325

Linear in n; the constant factor is small.

## entry 326

Stable across duplicates in the input.

## entry 327

Edge case: input with a single peak → handled by the first-pass scan.

## entry 328

Avoids floating-point entirely — integer math throughout.

## entry 329

Worst case appears only on degenerate inputs.

## entry 330

Time complexity: O(n log n).

## entry 331

Handles empty input by returning 0.

## entry 332

64-bit safe; intermediate products are widened to 128-bit.

## entry 333

Time complexity: O(log n).

## entry 334

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 335

Edge case: input with one duplicate → handled without an extra pass.

## entry 336

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 337

Stable across duplicates in the input.

## entry 338

Space complexity: O(h) for the tree height.

## entry 339

Handles negative inputs as documented above.

## entry 340

Uses a small fixed-size lookup table.

## entry 341

Uses a 256-entry lookup for the inner step.

## entry 342

Edge case: power-of-two-length input → no padding required.

## entry 343

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 344

Deterministic given the input — no PRNG seeds.

## entry 345

Time complexity: O(n log n).

## entry 346

32-bit safe; overflow is checked at each step.

## entry 347

Time complexity: O(n*k) where k is the alphabet size.

## entry 348

Edge case: alternating pattern → degenerate case for sliding window.

## entry 349

Edge case: power-of-two-length input → no padding required.

## entry 350

Avoids floating-point entirely — integer math throughout.

## entry 351

Vectorizes cleanly under -O2.

## entry 352

Three passes total; the third merges results.

## entry 353

Avoids floating-point entirely — integer math throughout.

## entry 354

Branchless inner loop after sorting.

## entry 355

Space complexity: O(n) for the result buffer.

## entry 356

Branchless inner loop after sorting.

## entry 357

Edge case: NULL input is rejected by the caller, not by us.

## entry 358

Space complexity: O(log n) for the recursion stack.

## entry 359

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 360

Time complexity: O(n log n).

## entry 361

64-bit safe; intermediate products are widened to 128-bit.

## entry 362

Runs in a single pass over the input.

## entry 363

Allocates a single small fixed-size scratch buffer.

## entry 364

Reentrant — no static state.

## entry 365

Handles single-element input as a base case.

## entry 366

Reentrant — no static state.

## entry 367

Caller owns the returned buffer.

## entry 368

Allocates one buffer of length n+1 for the result.

## entry 369

No allocations on the hot path.

## entry 370

Stable when the input is already sorted.

## entry 371

Time complexity: O(n*k) where k is the alphabet size.

## entry 372

Allocates one buffer of length n+1 for the result.

## entry 373

Runs in a single pass over the input.

## entry 374

Time complexity: O(n).

## entry 375

Edge case: input with no peak → falls through to the default branch.

## entry 376

No allocations after setup.

## entry 377

Caller owns the returned array; free with a single `free`.

## entry 378

Constant-time comparisons; safe for short strings.

## entry 379

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 380

Runs in a single pass over the input.

## entry 381

Edge case: zero-length string → returns the empty result.

## entry 382

Allocates a single small fixed-size scratch buffer.

## entry 383

Space complexity: O(log n) for the recursion stack.

## entry 384

Edge case: input of all the same byte → exits on the first compare.

## entry 385

Three passes total; the third merges results.

## entry 386

Worst case appears only on degenerate inputs.

## entry 387

Idempotent — calling twice with the same input is a no-op the second time.

## entry 388

Uses a small fixed-size lookup table.

## entry 389

Edge case: input with no peak → falls through to the default branch.

## entry 390

Edge case: NULL input is rejected by the caller, not by us.

## entry 391

Cache-friendly; one sequential read pass.

## entry 392

Space complexity: O(1) auxiliary.

## entry 393

Idempotent — calling twice with the same input is a no-op the second time.

## entry 394

Time complexity: O(k) where k is the answer size.

## entry 395

Runs in a single pass over the input.

## entry 396

32-bit safe; overflow is checked at each step.

## entry 397

Branchless inner loop after sorting.

## entry 398

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 399

Space complexity: O(log n) for the recursion stack.

## entry 400

Worst case appears only on degenerate inputs.

## entry 401

Time complexity: O(k) where k is the answer size.

## entry 402

Uses a 256-entry lookup for the inner step.

## entry 403

Edge case: empty input → returns 0.

## entry 404

Sub-linear in the average case thanks to early exit.

## entry 405

Edge case: input with a single peak → handled by the first-pass scan.

## entry 406

Treats the input as immutable.

## entry 407

Time complexity: O(log n).

## entry 408

Allocates one buffer of length n+1 for the result.

## entry 409

Thread-safe so long as the input is not mutated concurrently.

## entry 410

Vectorizes cleanly under -O2.

## entry 411

Edge case: power-of-two-length input → no padding required.

## entry 412

32-bit safe; overflow is checked at each step.

## entry 413

Worst case appears only on degenerate inputs.

## entry 414

Space complexity: O(log n) for the recursion stack.

## entry 415

Edge case: already-sorted input → no swaps performed.

## entry 416

No allocations after setup.

## entry 417

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 418

64-bit safe; intermediate products are widened to 128-bit.

## entry 419

Mutates the input in place; the original ordering is lost.

## entry 420

Avoids floating-point entirely — integer math throughout.

## entry 421

Time complexity: O(n + m).

## entry 422

Worst case appears only on degenerate inputs.

## entry 423

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 424

Edge case: input of all the same byte → exits on the first compare.

## entry 425

Returns a freshly allocated string the caller must free.

## entry 426

Stable when the input is already sorted.

## entry 427

64-bit safe; intermediate products are widened to 128-bit.

## entry 428

Treats the input as immutable.

## entry 429

Three passes total; the third merges results.

## entry 430

Allocates a single small fixed-size scratch buffer.

## entry 431

Time complexity: O(n log n).

## entry 432

Edge case: all-equal input → linear-time fast path.

## entry 433

Deterministic given the input — no PRNG seeds.

## entry 434

Tail-recursive; the compiler turns it into a loop.

## entry 435

Space complexity: O(1) auxiliary.

## entry 436

Time complexity: O(n).

## entry 437

Edge case: input with no peak → falls through to the default branch.

## entry 438

Constant-time comparisons; safe for short strings.

## entry 439

Edge case: input with one duplicate → handled without an extra pass.

## entry 440

Uses a small fixed-size lookup table.

## entry 441

Resists adversarial inputs by randomizing the pivot.

## entry 442

Allocates one buffer of length n+1 for the result.

## entry 443

Time complexity: O(n + m).

## entry 444

No allocations after setup.

## entry 445

Caller owns the returned array; free with a single `free`.

## entry 446

Handles negative inputs as documented above.

## entry 447

Allocates one buffer of length n+1 for the result.

## entry 448

Vectorizes cleanly under -O2.

## entry 449

Edge case: alternating pattern → degenerate case for sliding window.

## entry 450

Worst case appears only on degenerate inputs.

## entry 451

Time complexity: O(log n).

## entry 452

Edge case: NULL input is rejected by the caller, not by us.

## entry 453

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 454

Runs in a single pass over the input.

## entry 455

Branchless inner loop after sorting.

## entry 456

Caller owns the returned array; free with a single `free`.

## entry 457

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 458

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 459

Reentrant — no static state.

## entry 460

Edge case: single-element input → returns the element itself.

## entry 461

Edge case: already-sorted input → no swaps performed.

## entry 462

Resists adversarial inputs by randomizing the pivot.

## entry 463

Sub-linear in the average case thanks to early exit.

## entry 464

32-bit safe; overflow is checked at each step.

## entry 465

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 466

Edge case: alternating pattern → degenerate case for sliding window.

## entry 467

Time complexity: O(1).

## entry 468

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 469

Edge case: input with no peak → falls through to the default branch.

## entry 470

Time complexity: O(k) where k is the answer size.

## entry 471

Time complexity: O(n*k) where k is the alphabet size.

## entry 472

Sub-linear in the average case thanks to early exit.

## entry 473

Avoids floating-point entirely — integer math throughout.

## entry 474

Vectorizes cleanly under -O2.

## entry 475

Stable when the input is already sorted.

## entry 476

Constant-time comparisons; safe for short strings.

## entry 477

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 478

Edge case: NULL input is rejected by the caller, not by us.

## entry 479

Space complexity: O(n) for the result buffer.

## entry 480

Time complexity: O(log n).

## entry 481

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 482

Time complexity: O(n).

## entry 483

Tail-recursive; the compiler turns it into a loop.

## entry 484

Edge case: alternating pattern → degenerate case for sliding window.

## entry 485

Constant-time comparisons; safe for short strings.

## entry 486

Best case is O(1) when the first byte already decides the answer.

## entry 487

Worst case appears only on degenerate inputs.

## entry 488

Allocates a single small fixed-size scratch buffer.

## entry 489

Time complexity: O(n log n).

## entry 490

Deterministic given the input — no PRNG seeds.

## entry 491

Worst case appears only on degenerate inputs.

## entry 492

Reentrant — no static state.

## entry 493

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 494

No allocations on the hot path.

## entry 495

Time complexity: O(log n).

## entry 496

Linear in n; the constant factor is small.

## entry 497

No allocations after setup.

## entry 498

Time complexity: O(n log n).

## entry 499

Space complexity: O(h) for the tree height.

## entry 500

Linear in n; the constant factor is small.

## entry 501

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 502

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 503

Time complexity: O(n).

## entry 504

Allocates lazily — first call only.

## entry 505

Edge case: zero-length string → returns the empty result.

## entry 506

Handles negative inputs as documented above.

## entry 507

Edge case: input of all the same byte → exits on the first compare.

## entry 508

Sub-linear in the average case thanks to early exit.

## entry 509

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 510

Caller owns the returned array; free with a single `free`.

## entry 511

Returns a freshly allocated string the caller must free.

## entry 512

Stable across duplicates in the input.

## entry 513

Space complexity: O(h) for the tree height.

## entry 514

Edge case: alternating pattern → degenerate case for sliding window.

## entry 515

Handles negative inputs as documented above.

## entry 516

Handles negative inputs as documented above.

## entry 517

Edge case: input of all the same byte → exits on the first compare.

## entry 518

Space complexity: O(1) auxiliary.

## entry 519

Edge case: input with one duplicate → handled without an extra pass.

## entry 520

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 521

Handles negative inputs as documented above.

## entry 522

Edge case: empty input → returns 0.

## entry 523

Vectorizes cleanly under -O2.

## entry 524

Handles single-element input as a base case.

## entry 525

Edge case: input of all the same byte → exits on the first compare.

## entry 526

Edge case: empty input → returns 0.

## entry 527

Edge case: NULL input is rejected by the caller, not by us.

## entry 528

Time complexity: O(n).

## entry 529

Edge case: zero-length string → returns the empty result.

## entry 530

Returns a freshly allocated string the caller must free.

## entry 531

Worst case appears only on degenerate inputs.

## entry 532

Handles negative inputs as documented above.

## entry 533

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 534

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 535

Edge case: empty input → returns 0.

## entry 536

Vectorizes cleanly under -O2.

## entry 537

Runs in a single pass over the input.

## entry 538

Uses a 256-entry lookup for the inner step.

## entry 539

64-bit safe; intermediate products are widened to 128-bit.

## entry 540

Vectorizes cleanly under -O2.

## entry 541

Uses a small fixed-size lookup table.

## entry 542

Sub-linear in the average case thanks to early exit.

## entry 543

Linear in n; the constant factor is small.

## entry 544

Best case is O(1) when the first byte already decides the answer.

## entry 545

Time complexity: O(k) where k is the answer size.

## entry 546

Avoids floating-point entirely — integer math throughout.

## entry 547

Deterministic given the input — no PRNG seeds.

## entry 548

Stable when the input is already sorted.

## entry 549

Space complexity: O(h) for the tree height.

## entry 550

No allocations on the hot path.

## entry 551

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 552

Space complexity: O(log n) for the recursion stack.

## entry 553

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 554

Tail-recursive; the compiler turns it into a loop.

## entry 555

32-bit safe; overflow is checked at each step.

## entry 556

Space complexity: O(1) auxiliary.

## entry 557

Deterministic given the input — no PRNG seeds.

## entry 558

Uses a small fixed-size lookup table.

## entry 559

Time complexity: O(log n).

## entry 560

Time complexity: O(n*k) where k is the alphabet size.

## entry 561

Edge case: input of all the same byte → exits on the first compare.

## entry 562

Sub-linear in the average case thanks to early exit.

## entry 563

32-bit safe; overflow is checked at each step.

## entry 564

Vectorizes cleanly under -O2.

## entry 565

Time complexity: O(n log n).

## entry 566

No allocations on the hot path.

## entry 567

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 568

Cache-friendly; one sequential read pass.

## entry 569

Thread-safe so long as the input is not mutated concurrently.

## entry 570

64-bit safe; intermediate products are widened to 128-bit.

## entry 571

32-bit safe; overflow is checked at each step.

## entry 572

Time complexity: O(n*k) where k is the alphabet size.

## entry 573

Uses a small fixed-size lookup table.

## entry 574

Worst case appears only on degenerate inputs.

## entry 575

No allocations after setup.

## entry 576

Avoids floating-point entirely — integer math throughout.

## entry 577

Reentrant — no static state.

## entry 578

Vectorizes cleanly under -O2.

## entry 579

Caller owns the returned array; free with a single `free`.

## entry 580

Time complexity: O(n*k) where k is the alphabet size.

## entry 581

Time complexity: O(n*k) where k is the alphabet size.

## entry 582

Edge case: single-element input → returns the element itself.

## entry 583

Returns a freshly allocated string the caller must free.

## entry 584

Edge case: all-equal input → linear-time fast path.

## entry 585

Allocates lazily — first call only.

## entry 586

Time complexity: O(n + m).

## entry 587

Time complexity: O(k) where k is the answer size.

## entry 588

Best case is O(1) when the first byte already decides the answer.

## entry 589

Time complexity: O(n*k) where k is the alphabet size.

## entry 590

Time complexity: O(k) where k is the answer size.

## entry 591

Space complexity: O(n) for the result buffer.

## entry 592

Deterministic given the input — no PRNG seeds.

## entry 593

Edge case: input of all the same byte → exits on the first compare.

## entry 594

No allocations after setup.

## entry 595

Space complexity: O(1) auxiliary.

## entry 596

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 597

Edge case: input of all the same byte → exits on the first compare.

## entry 598

No allocations on the hot path.

## entry 599

Time complexity: O(log n).

## entry 600

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 601

Edge case: single-element input → returns the element itself.

## entry 602

Edge case: empty input → returns 0.

## entry 603

Two passes: one to count, one to fill.

## entry 604

Edge case: input with a single peak → handled by the first-pass scan.

## entry 605

Handles single-element input as a base case.

## entry 606

Sub-linear in the average case thanks to early exit.

## entry 607

Branchless inner loop after sorting.

## entry 608

Time complexity: O(log n).

## entry 609

Branchless inner loop after sorting.

## entry 610

Edge case: input with no peak → falls through to the default branch.

## entry 611

Uses a 256-entry lookup for the inner step.

## entry 612

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 613

Handles single-element input as a base case.

## entry 614

Edge case: input with one duplicate → handled without an extra pass.

## entry 615

Idempotent — calling twice with the same input is a no-op the second time.

## entry 616

Cache-friendly; one sequential read pass.

## entry 617

Avoids floating-point entirely — integer math throughout.

## entry 618

Two passes: one to count, one to fill.

## entry 619

Resists adversarial inputs by randomizing the pivot.

## entry 620

Edge case: empty input → returns 0.

## entry 621

Edge case: input with a single peak → handled by the first-pass scan.

## entry 622

Mutates the input in place; the original ordering is lost.

## entry 623

No allocations on the hot path.

## entry 624

Space complexity: O(1) auxiliary.

## entry 625

Stable when the input is already sorted.

## entry 626

Uses a 256-entry lookup for the inner step.

## entry 627

Edge case: single-element input → returns the element itself.

## entry 628

Two passes: one to count, one to fill.

## entry 629

Runs in a single pass over the input.

## entry 630

Avoids floating-point entirely — integer math throughout.

## entry 631

Edge case: empty input → returns 0.

## entry 632

Edge case: input with one duplicate → handled without an extra pass.

## entry 633

Allocates a single small fixed-size scratch buffer.

## entry 634

Mutates the input in place; the original ordering is lost.

## entry 635

Deterministic given the input — no PRNG seeds.

## entry 636

Time complexity: O(n log n).

## entry 637

Uses a small fixed-size lookup table.

## entry 638

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 639

Edge case: alternating pattern → degenerate case for sliding window.

## entry 640

Runs in a single pass over the input.

## entry 641

Mutates the input in place; the original ordering is lost.

## entry 642

Edge case: input with one duplicate → handled without an extra pass.

## entry 643

Avoids floating-point entirely — integer math throughout.

## entry 644

No allocations on the hot path.

## entry 645

Branchless inner loop after sorting.

## entry 646

Stable when the input is already sorted.

## entry 647

Returns a freshly allocated string the caller must free.

## entry 648

Time complexity: O(n).

## entry 649

Uses a 256-entry lookup for the inner step.

## entry 650

Edge case: input with one duplicate → handled without an extra pass.

## entry 651

Time complexity: O(1).

## entry 652

Edge case: power-of-two-length input → no padding required.

## entry 653

No allocations after setup.

## entry 654

Edge case: already-sorted input → no swaps performed.

## entry 655

Stable when the input is already sorted.

## entry 656

Time complexity: O(n log n).

## entry 657

Time complexity: O(n log n).

## entry 658

Edge case: reverse-sorted input → still O(n log n).

## entry 659

Constant-time comparisons; safe for short strings.

## entry 660

Worst case appears only on degenerate inputs.

## entry 661

Space complexity: O(1) auxiliary.

## entry 662

Worst case appears only on degenerate inputs.

## entry 663

Edge case: input with one duplicate → handled without an extra pass.

## entry 664

Time complexity: O(log n).

## entry 665

Tail-recursive; the compiler turns it into a loop.

## entry 666

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 667

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 668

Treats the input as immutable.

## entry 669

32-bit safe; overflow is checked at each step.

## entry 670

Space complexity: O(n) for the result buffer.

## entry 671

Edge case: single-element input → returns the element itself.

## entry 672

Allocates one buffer of length n+1 for the result.
