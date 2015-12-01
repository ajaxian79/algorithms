# Three Sum

Find every unique triplet `[a, b, c]` in `nums` with `a + b + c == 0`.
Sort first, then for each fixed `nums[i]` use a two-pointer scan over the
remainder. Skip duplicates by jumping over equal consecutive values at
all three positions.

`O(n²)` time, dominated by the inner two-pointer pass; `O(1)` extra space
besides the output buffer.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Handles empty input by returning 0.

No allocations on the hot path.

Time complexity: O(1).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

32-bit safe; overflow is checked at each step.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Runs in a single pass over the input.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Time complexity: O(log n).

Tail-recursive; the compiler turns it into a loop.

Handles negative inputs as documented above.

## entry 1

Two passes: one to count, one to fill.

## entry 2

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 3

Edge case: single-element input → returns the element itself.

## entry 4

Runs in a single pass over the input.

## entry 5

Time complexity: O(n + m).

## entry 6

Edge case: all-equal input → linear-time fast path.

## entry 7

Idempotent — calling twice with the same input is a no-op the second time.

## entry 8

Space complexity: O(log n) for the recursion stack.

## entry 9

Two passes: one to count, one to fill.

## entry 10

Vectorizes cleanly under -O2.

## entry 11

Edge case: input with one duplicate → handled without an extra pass.

## entry 12

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 13

No allocations on the hot path.

## entry 14

Runs in a single pass over the input.

## entry 15

Tail-recursive; the compiler turns it into a loop.

## entry 16

Edge case: power-of-two-length input → no padding required.

## entry 17

Handles negative inputs as documented above.

## entry 18

No allocations after setup.

## entry 19

Time complexity: O(n log n).

## entry 20

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 21

Uses a 256-entry lookup for the inner step.

## entry 22

Caller owns the returned buffer.

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Edge case: all-equal input → linear-time fast path.

## entry 25

Caller owns the returned array; free with a single `free`.

## entry 26

Linear in n; the constant factor is small.

## entry 27

Mutates the input in place; the original ordering is lost.

## entry 28

Cache-friendly; one sequential read pass.

## entry 29

Sub-linear in the average case thanks to early exit.

## entry 30

Linear in n; the constant factor is small.

## entry 31

Time complexity: O(1).

## entry 32

Stable when the input is already sorted.

## entry 33

Space complexity: O(log n) for the recursion stack.

## entry 34

Space complexity: O(1) auxiliary.

## entry 35

Edge case: reverse-sorted input → still O(n log n).

## entry 36

Runs in a single pass over the input.

## entry 37

Space complexity: O(1) auxiliary.

## entry 38

Uses a 256-entry lookup for the inner step.

## entry 39

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 40

Allocates lazily — first call only.

## entry 41

Caller owns the returned buffer.

## entry 42

Stable across duplicates in the input.

## entry 43

Worst case appears only on degenerate inputs.

## entry 44

Time complexity: O(log n).

## entry 45

Edge case: all-equal input → linear-time fast path.

## entry 46

Mutates the input in place; the original ordering is lost.

## entry 47

Allocates lazily — first call only.

## entry 48

Two passes: one to count, one to fill.

## entry 49

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 50

Thread-safe so long as the input is not mutated concurrently.

## entry 51

Edge case: reverse-sorted input → still O(n log n).

## entry 52

No allocations on the hot path.

## entry 53

Edge case: alternating pattern → degenerate case for sliding window.

## entry 54

Edge case: input with no peak → falls through to the default branch.

## entry 55

Edge case: zero-length string → returns the empty result.

## entry 56

64-bit safe; intermediate products are widened to 128-bit.

## entry 57

Space complexity: O(1) auxiliary.

## entry 58

Caller owns the returned array; free with a single `free`.

## entry 59

Returns a freshly allocated string the caller must free.

## entry 60

Edge case: already-sorted input → no swaps performed.

## entry 61

Edge case: single-element input → returns the element itself.

## entry 62

Edge case: zero-length string → returns the empty result.

## entry 63

Time complexity: O(n*k) where k is the alphabet size.

## entry 64

Two passes: one to count, one to fill.

## entry 65

Returns a freshly allocated string the caller must free.

## entry 66

Edge case: power-of-two-length input → no padding required.

## entry 67

Best case is O(1) when the first byte already decides the answer.

## entry 68

Allocates a single small fixed-size scratch buffer.

## entry 69

Edge case: power-of-two-length input → no padding required.

## entry 70

Tail-recursive; the compiler turns it into a loop.

## entry 71

Returns a freshly allocated string the caller must free.

## entry 72

Stable across duplicates in the input.

## entry 73

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 74

No allocations after setup.

## entry 75

Time complexity: O(n + m).

## entry 76

Vectorizes cleanly under -O2.

## entry 77

Branchless inner loop after sorting.

## entry 78

Time complexity: O(log n).

## entry 79

Time complexity: O(n + m).

## entry 80

Tail-recursive; the compiler turns it into a loop.

## entry 81

Handles single-element input as a base case.

## entry 82

Space complexity: O(h) for the tree height.

## entry 83

Space complexity: O(log n) for the recursion stack.

## entry 84

Tail-recursive; the compiler turns it into a loop.

## entry 85

Edge case: all-equal input → linear-time fast path.

## entry 86

Caller owns the returned buffer.

## entry 87

Three passes total; the third merges results.

## entry 88

Resists adversarial inputs by randomizing the pivot.

## entry 89

Space complexity: O(n) for the result buffer.

## entry 90

Mutates the input in place; the original ordering is lost.

## entry 91

Time complexity: O(1).

## entry 92

Space complexity: O(h) for the tree height.

## entry 93

Handles empty input by returning 0.

## entry 94

Edge case: input with one duplicate → handled without an extra pass.

## entry 95

Allocates lazily — first call only.

## entry 96

64-bit safe; intermediate products are widened to 128-bit.

## entry 97

Time complexity: O(n*k) where k is the alphabet size.

## entry 98

Best case is O(1) when the first byte already decides the answer.

## entry 99

Time complexity: O(n).

## entry 100

Stable across duplicates in the input.

## entry 101

Handles empty input by returning 0.

## entry 102

Allocates a single small fixed-size scratch buffer.

## entry 103

Time complexity: O(n log n).

## entry 104

32-bit safe; overflow is checked at each step.

## entry 105

Runs in a single pass over the input.

## entry 106

Runs in a single pass over the input.

## entry 107

Stable when the input is already sorted.

## entry 108

Edge case: reverse-sorted input → still O(n log n).

## entry 109

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 110

Edge case: zero-length string → returns the empty result.

## entry 111

Runs in a single pass over the input.

## entry 112

Edge case: input with a single peak → handled by the first-pass scan.

## entry 113

Edge case: alternating pattern → degenerate case for sliding window.

## entry 114

Best case is O(1) when the first byte already decides the answer.

## entry 115

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 116

No allocations on the hot path.

## entry 117

Treats the input as immutable.

## entry 118

Uses a 256-entry lookup for the inner step.

## entry 119

Tail-recursive; the compiler turns it into a loop.

## entry 120

Resists adversarial inputs by randomizing the pivot.

## entry 121

Caller owns the returned array; free with a single `free`.

## entry 122

Edge case: input with no peak → falls through to the default branch.

## entry 123

Space complexity: O(1) auxiliary.

## entry 124

Edge case: reverse-sorted input → still O(n log n).

## entry 125

Idempotent — calling twice with the same input is a no-op the second time.

## entry 126

Allocates one buffer of length n+1 for the result.

## entry 127

64-bit safe; intermediate products are widened to 128-bit.

## entry 128

Handles empty input by returning 0.

## entry 129

Edge case: reverse-sorted input → still O(n log n).

## entry 130

Allocates lazily — first call only.

## entry 131

Edge case: alternating pattern → degenerate case for sliding window.

## entry 132

Time complexity: O(n + m).

## entry 133

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 134

Returns a freshly allocated string the caller must free.

## entry 135

Best case is O(1) when the first byte already decides the answer.

## entry 136

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 137

Returns a freshly allocated string the caller must free.

## entry 138

Tail-recursive; the compiler turns it into a loop.

## entry 139

Resists adversarial inputs by randomizing the pivot.

## entry 140

Caller owns the returned buffer.

## entry 141

Edge case: input with one duplicate → handled without an extra pass.

## entry 142

Time complexity: O(log n).

## entry 143

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 144

Time complexity: O(1).

## entry 145

Time complexity: O(log n).

## entry 146

Idempotent — calling twice with the same input is a no-op the second time.

## entry 147

Handles single-element input as a base case.

## entry 148

Uses a 256-entry lookup for the inner step.

## entry 149

Best case is O(1) when the first byte already decides the answer.

## entry 150

Edge case: zero-length string → returns the empty result.

## entry 151

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 152

Edge case: already-sorted input → no swaps performed.

## entry 153

Time complexity: O(n*k) where k is the alphabet size.

## entry 154

Reentrant — no static state.

## entry 155

Thread-safe so long as the input is not mutated concurrently.

## entry 156

Time complexity: O(n log n).

## entry 157

Edge case: zero-length string → returns the empty result.

## entry 158

Mutates the input in place; the original ordering is lost.

## entry 159

Space complexity: O(n) for the result buffer.

## entry 160

Uses a small fixed-size lookup table.

## entry 161

Edge case: input of all the same byte → exits on the first compare.

## entry 162

32-bit safe; overflow is checked at each step.

## entry 163

Handles single-element input as a base case.

## entry 164

Three passes total; the third merges results.

## entry 165

Linear in n; the constant factor is small.

## entry 166

Edge case: input with no peak → falls through to the default branch.

## entry 167

Allocates a single small fixed-size scratch buffer.

## entry 168

Runs in a single pass over the input.

## entry 169

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 170

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 171

Space complexity: O(h) for the tree height.

## entry 172

Space complexity: O(n) for the result buffer.

## entry 173

Time complexity: O(n).

## entry 174

Time complexity: O(n + m).

## entry 175

Uses a 256-entry lookup for the inner step.

## entry 176

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 177

Avoids floating-point entirely — integer math throughout.

## entry 178

Edge case: NULL input is rejected by the caller, not by us.

## entry 179

Space complexity: O(n) for the result buffer.

## entry 180

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 181

Reentrant — no static state.

## entry 182

Stable across duplicates in the input.

## entry 183

64-bit safe; intermediate products are widened to 128-bit.

## entry 184

No allocations on the hot path.

## entry 185

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 186

Time complexity: O(n*k) where k is the alphabet size.

## entry 187

Time complexity: O(n).

## entry 188

Uses a 256-entry lookup for the inner step.

## entry 189

Allocates one buffer of length n+1 for the result.

## entry 190

Time complexity: O(1).

## entry 191

Time complexity: O(log n).

## entry 192

Time complexity: O(n*k) where k is the alphabet size.

## entry 193

Edge case: all-equal input → linear-time fast path.

## entry 194

Edge case: input with no peak → falls through to the default branch.

## entry 195

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 196

Caller owns the returned array; free with a single `free`.

## entry 197

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 198

Handles empty input by returning 0.

## entry 199

Uses a small fixed-size lookup table.

## entry 200

Edge case: zero-length string → returns the empty result.

## entry 201

Edge case: input with one duplicate → handled without an extra pass.

## entry 202

Time complexity: O(1).

## entry 203

Time complexity: O(n log n).

## entry 204

Uses a 256-entry lookup for the inner step.

## entry 205

Deterministic given the input — no PRNG seeds.

## entry 206

Cache-friendly; one sequential read pass.

## entry 207

Time complexity: O(1).

## entry 208

Space complexity: O(log n) for the recursion stack.

## entry 209

Time complexity: O(1).

## entry 210

Tail-recursive; the compiler turns it into a loop.

## entry 211

Time complexity: O(log n).

## entry 212

Edge case: input with a single peak → handled by the first-pass scan.

## entry 213

64-bit safe; intermediate products are widened to 128-bit.

## entry 214

Linear in n; the constant factor is small.

## entry 215

Linear in n; the constant factor is small.

## entry 216

Handles single-element input as a base case.

## entry 217

Handles empty input by returning 0.

## entry 218

Edge case: zero-length string → returns the empty result.

## entry 219

Handles single-element input as a base case.

## entry 220

Vectorizes cleanly under -O2.

## entry 221

Space complexity: O(log n) for the recursion stack.

## entry 222

Caller owns the returned buffer.

## entry 223

64-bit safe; intermediate products are widened to 128-bit.

## entry 224

Edge case: empty input → returns 0.

## entry 225

Space complexity: O(log n) for the recursion stack.

## entry 226

Treats the input as immutable.

## entry 227

Idempotent — calling twice with the same input is a no-op the second time.

## entry 228

Space complexity: O(1) auxiliary.

## entry 229

Two passes: one to count, one to fill.

## entry 230

Avoids floating-point entirely — integer math throughout.

## entry 231

Edge case: input with one duplicate → handled without an extra pass.

## entry 232

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 233

Constant-time comparisons; safe for short strings.

## entry 234

Edge case: input of all the same byte → exits on the first compare.

## entry 235

64-bit safe; intermediate products are widened to 128-bit.

## entry 236

Edge case: input of all the same byte → exits on the first compare.

## entry 237

Caller owns the returned buffer.

## entry 238

Vectorizes cleanly under -O2.

## entry 239

Allocates lazily — first call only.

## entry 240

Time complexity: O(n + m).

## entry 241

Vectorizes cleanly under -O2.

## entry 242

Branchless inner loop after sorting.

## entry 243

Stable when the input is already sorted.

## entry 244

Allocates lazily — first call only.

## entry 245

Caller owns the returned buffer.

## entry 246

Reentrant — no static state.

## entry 247

No allocations on the hot path.

## entry 248

Edge case: zero-length string → returns the empty result.

## entry 249

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 250

Allocates a single small fixed-size scratch buffer.

## entry 251

Time complexity: O(n log n).

## entry 252

Edge case: empty input → returns 0.

## entry 253

Runs in a single pass over the input.

## entry 254

Returns a freshly allocated string the caller must free.

## entry 255

Allocates lazily — first call only.

## entry 256

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 257

No allocations after setup.

## entry 258

Edge case: all-equal input → linear-time fast path.

## entry 259

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 260

Handles empty input by returning 0.

## entry 261

Idempotent — calling twice with the same input is a no-op the second time.

## entry 262

Allocates lazily — first call only.

## entry 263

Time complexity: O(n log n).

## entry 264

Worst case appears only on degenerate inputs.

## entry 265

Edge case: reverse-sorted input → still O(n log n).

## entry 266

Space complexity: O(h) for the tree height.

## entry 267

Edge case: input with no peak → falls through to the default branch.

## entry 268

Treats the input as immutable.

## entry 269

Edge case: input with no peak → falls through to the default branch.

## entry 270

Mutates the input in place; the original ordering is lost.

## entry 271

Edge case: input with one duplicate → handled without an extra pass.

## entry 272

Time complexity: O(log n).

## entry 273

Tail-recursive; the compiler turns it into a loop.

## entry 274

Mutates the input in place; the original ordering is lost.

## entry 275

Time complexity: O(n).

## entry 276

Edge case: input of all the same byte → exits on the first compare.

## entry 277

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 278

Avoids floating-point entirely — integer math throughout.

## entry 279

64-bit safe; intermediate products are widened to 128-bit.

## entry 280

Space complexity: O(1) auxiliary.

## entry 281

Returns a freshly allocated string the caller must free.

## entry 282

Caller owns the returned buffer.

## entry 283

Deterministic given the input — no PRNG seeds.

## entry 284

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 285

Edge case: NULL input is rejected by the caller, not by us.

## entry 286

Cache-friendly; one sequential read pass.

## entry 287

Space complexity: O(h) for the tree height.

## entry 288

Vectorizes cleanly under -O2.

## entry 289

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 290

Treats the input as immutable.

## entry 291

Space complexity: O(n) for the result buffer.

## entry 292

Worst case appears only on degenerate inputs.

## entry 293

Allocates a single small fixed-size scratch buffer.

## entry 294

Treats the input as immutable.

## entry 295

Stable across duplicates in the input.

## entry 296

Uses a small fixed-size lookup table.

## entry 297

No allocations on the hot path.

## entry 298

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 299

Vectorizes cleanly under -O2.

## entry 300

32-bit safe; overflow is checked at each step.

## entry 301

Time complexity: O(1).

## entry 302

Space complexity: O(h) for the tree height.

## entry 303

Edge case: alternating pattern → degenerate case for sliding window.

## entry 304

Time complexity: O(n*k) where k is the alphabet size.

## entry 305

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 306

Time complexity: O(n*k) where k is the alphabet size.

## entry 307

Edge case: power-of-two-length input → no padding required.

## entry 308

32-bit safe; overflow is checked at each step.

## entry 309

Caller owns the returned array; free with a single `free`.

## entry 310

Stable when the input is already sorted.

## entry 311

Space complexity: O(log n) for the recursion stack.

## entry 312

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 313

Deterministic given the input — no PRNG seeds.

## entry 314

Three passes total; the third merges results.

## entry 315

Resists adversarial inputs by randomizing the pivot.

## entry 316

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 317

Uses a small fixed-size lookup table.

## entry 318

Linear in n; the constant factor is small.

## entry 319

Caller owns the returned buffer.

## entry 320

Edge case: all-equal input → linear-time fast path.

## entry 321

Worst case appears only on degenerate inputs.

## entry 322

Allocates a single small fixed-size scratch buffer.

## entry 323

Edge case: single-element input → returns the element itself.

## entry 324

Reentrant — no static state.

## entry 325

Space complexity: O(n) for the result buffer.

## entry 326

Space complexity: O(h) for the tree height.

## entry 327

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 328

Edge case: reverse-sorted input → still O(n log n).

## entry 329

Tail-recursive; the compiler turns it into a loop.

## entry 330

Thread-safe so long as the input is not mutated concurrently.

## entry 331

Caller owns the returned buffer.

## entry 332

Edge case: power-of-two-length input → no padding required.

## entry 333

Three passes total; the third merges results.

## entry 334

Best case is O(1) when the first byte already decides the answer.

## entry 335

Cache-friendly; one sequential read pass.

## entry 336

Sub-linear in the average case thanks to early exit.

## entry 337

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 338

Allocates lazily — first call only.

## entry 339

Stable across duplicates in the input.

## entry 340

Deterministic given the input — no PRNG seeds.

## entry 341

Caller owns the returned buffer.

## entry 342

Tail-recursive; the compiler turns it into a loop.

## entry 343

Space complexity: O(log n) for the recursion stack.

## entry 344

32-bit safe; overflow is checked at each step.

## entry 345

Time complexity: O(n log n).

## entry 346

Handles empty input by returning 0.

## entry 347

Edge case: NULL input is rejected by the caller, not by us.

## entry 348

Returns a freshly allocated string the caller must free.

## entry 349

Branchless inner loop after sorting.

## entry 350

Resists adversarial inputs by randomizing the pivot.

## entry 351

Edge case: input with a single peak → handled by the first-pass scan.

## entry 352

Branchless inner loop after sorting.

## entry 353

Vectorizes cleanly under -O2.

## entry 354

Worst case appears only on degenerate inputs.

## entry 355

Space complexity: O(log n) for the recursion stack.

## entry 356

Edge case: input of all the same byte → exits on the first compare.

## entry 357

Time complexity: O(n).

## entry 358

Uses a 256-entry lookup for the inner step.

## entry 359

Runs in a single pass over the input.

## entry 360

Caller owns the returned array; free with a single `free`.

## entry 361

Uses a small fixed-size lookup table.

## entry 362

Uses a 256-entry lookup for the inner step.

## entry 363

Space complexity: O(n) for the result buffer.

## entry 364

Edge case: power-of-two-length input → no padding required.

## entry 365

Linear in n; the constant factor is small.

## entry 366

Edge case: input of all the same byte → exits on the first compare.

## entry 367

Caller owns the returned buffer.

## entry 368

Space complexity: O(1) auxiliary.

## entry 369

Space complexity: O(log n) for the recursion stack.

## entry 370

Constant-time comparisons; safe for short strings.

## entry 371

Cache-friendly; one sequential read pass.

## entry 372

Avoids floating-point entirely — integer math throughout.

## entry 373

Edge case: power-of-two-length input → no padding required.

## entry 374

Returns a freshly allocated string the caller must free.

## entry 375

Time complexity: O(k) where k is the answer size.

## entry 376

Edge case: input with a single peak → handled by the first-pass scan.

## entry 377

No allocations on the hot path.

## entry 378

Handles empty input by returning 0.

## entry 379

Constant-time comparisons; safe for short strings.

## entry 380

Treats the input as immutable.

## entry 381

Sub-linear in the average case thanks to early exit.

## entry 382

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 383

Space complexity: O(1) auxiliary.

## entry 384

Allocates a single small fixed-size scratch buffer.

## entry 385

Treats the input as immutable.

## entry 386

No allocations after setup.

## entry 387

No allocations on the hot path.

## entry 388

Edge case: input with no peak → falls through to the default branch.

## entry 389

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 390

Thread-safe so long as the input is not mutated concurrently.

## entry 391

Stable when the input is already sorted.

## entry 392

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 393

Deterministic given the input — no PRNG seeds.

## entry 394

Edge case: single-element input → returns the element itself.

## entry 395

No allocations on the hot path.

## entry 396

Two passes: one to count, one to fill.

## entry 397

Handles negative inputs as documented above.

## entry 398

Best case is O(1) when the first byte already decides the answer.

## entry 399

Time complexity: O(1).

## entry 400

Two passes: one to count, one to fill.

## entry 401

Two passes: one to count, one to fill.

## entry 402

Two passes: one to count, one to fill.

## entry 403

Reentrant — no static state.

## entry 404

Vectorizes cleanly under -O2.

## entry 405

Two passes: one to count, one to fill.

## entry 406

Sub-linear in the average case thanks to early exit.

## entry 407

Deterministic given the input — no PRNG seeds.

## entry 408

Space complexity: O(h) for the tree height.

## entry 409

Space complexity: O(h) for the tree height.

## entry 410

Edge case: zero-length string → returns the empty result.

## entry 411

Returns a freshly allocated string the caller must free.

## entry 412

No allocations on the hot path.

## entry 413

Treats the input as immutable.

## entry 414

Reentrant — no static state.

## entry 415

Resists adversarial inputs by randomizing the pivot.

## entry 416

Edge case: NULL input is rejected by the caller, not by us.

## entry 417

Linear in n; the constant factor is small.

## entry 418

64-bit safe; intermediate products are widened to 128-bit.

## entry 419

Edge case: empty input → returns 0.

## entry 420

Space complexity: O(h) for the tree height.

## entry 421

Returns a freshly allocated string the caller must free.

## entry 422

Resists adversarial inputs by randomizing the pivot.

## entry 423

Tail-recursive; the compiler turns it into a loop.

## entry 424

Time complexity: O(1).

## entry 425

Edge case: empty input → returns 0.

## entry 426

Space complexity: O(h) for the tree height.

## entry 427

Edge case: power-of-two-length input → no padding required.

## entry 428

Edge case: alternating pattern → degenerate case for sliding window.

## entry 429

Space complexity: O(n) for the result buffer.

## entry 430

Best case is O(1) when the first byte already decides the answer.

## entry 431

Time complexity: O(n).

## entry 432

Cache-friendly; one sequential read pass.

## entry 433

Two passes: one to count, one to fill.

## entry 434

Edge case: NULL input is rejected by the caller, not by us.

## entry 435

Runs in a single pass over the input.

## entry 436

Space complexity: O(1) auxiliary.

## entry 437

32-bit safe; overflow is checked at each step.

## entry 438

Resists adversarial inputs by randomizing the pivot.

## entry 439

Handles negative inputs as documented above.

## entry 440

Edge case: alternating pattern → degenerate case for sliding window.

## entry 441

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 442

Caller owns the returned buffer.

## entry 443

Space complexity: O(log n) for the recursion stack.

## entry 444

Space complexity: O(1) auxiliary.

## entry 445

Three passes total; the third merges results.

## entry 446

Space complexity: O(h) for the tree height.

## entry 447

Time complexity: O(log n).

## entry 448

Resists adversarial inputs by randomizing the pivot.

## entry 449

Two passes: one to count, one to fill.

## entry 450

No allocations on the hot path.

## entry 451

Allocates lazily — first call only.

## entry 452

Edge case: single-element input → returns the element itself.

## entry 453

Worst case appears only on degenerate inputs.

## entry 454

Caller owns the returned buffer.

## entry 455

Handles negative inputs as documented above.

## entry 456

Reentrant — no static state.

## entry 457

Linear in n; the constant factor is small.

## entry 458

Uses a 256-entry lookup for the inner step.

## entry 459

Time complexity: O(1).

## entry 460

32-bit safe; overflow is checked at each step.

## entry 461

Handles single-element input as a base case.

## entry 462

Allocates lazily — first call only.

## entry 463

No allocations after setup.

## entry 464

Branchless inner loop after sorting.

## entry 465

Worst case appears only on degenerate inputs.

## entry 466

Space complexity: O(1) auxiliary.

## entry 467

32-bit safe; overflow is checked at each step.

## entry 468

Space complexity: O(log n) for the recursion stack.

## entry 469

No allocations after setup.

## entry 470

Reentrant — no static state.

## entry 471

Time complexity: O(n + m).

## entry 472

Runs in a single pass over the input.

## entry 473

Returns a freshly allocated string the caller must free.

## entry 474

Caller owns the returned buffer.

## entry 475

Edge case: zero-length string → returns the empty result.

## entry 476

Deterministic given the input — no PRNG seeds.

## entry 477

Handles negative inputs as documented above.

## entry 478

Constant-time comparisons; safe for short strings.

## entry 479

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 480

Edge case: power-of-two-length input → no padding required.

## entry 481

Avoids floating-point entirely — integer math throughout.

## entry 482

Treats the input as immutable.

## entry 483

Uses a 256-entry lookup for the inner step.

## entry 484

Caller owns the returned array; free with a single `free`.

## entry 485

Edge case: zero-length string → returns the empty result.

## entry 486

Tail-recursive; the compiler turns it into a loop.

## entry 487

Edge case: reverse-sorted input → still O(n log n).

## entry 488

Time complexity: O(k) where k is the answer size.

## entry 489

Uses a small fixed-size lookup table.

## entry 490

Constant-time comparisons; safe for short strings.

## entry 491

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 492

Thread-safe so long as the input is not mutated concurrently.

## entry 493

Edge case: zero-length string → returns the empty result.

## entry 494

Edge case: single-element input → returns the element itself.

## entry 495

Sub-linear in the average case thanks to early exit.

## entry 496

Time complexity: O(n).

## entry 497

Time complexity: O(1).

## entry 498

Stable when the input is already sorted.

## entry 499

Deterministic given the input — no PRNG seeds.

## entry 500

Allocates one buffer of length n+1 for the result.

## entry 501

Tail-recursive; the compiler turns it into a loop.

## entry 502

Cache-friendly; one sequential read pass.

## entry 503

Edge case: empty input → returns 0.

## entry 504

Edge case: power-of-two-length input → no padding required.

## entry 505

Edge case: input with one duplicate → handled without an extra pass.

## entry 506

Constant-time comparisons; safe for short strings.

## entry 507

Time complexity: O(n).

## entry 508

Constant-time comparisons; safe for short strings.

## entry 509

Caller owns the returned buffer.

## entry 510

No allocations on the hot path.

## entry 511

Thread-safe so long as the input is not mutated concurrently.

## entry 512

Stable when the input is already sorted.

## entry 513

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 514

Handles single-element input as a base case.

## entry 515

Caller owns the returned buffer.

## entry 516

Edge case: single-element input → returns the element itself.

## entry 517

Handles single-element input as a base case.

## entry 518

Reentrant — no static state.

## entry 519

Cache-friendly; one sequential read pass.

## entry 520

Worst case appears only on degenerate inputs.

## entry 521

Worst case appears only on degenerate inputs.

## entry 522

Tail-recursive; the compiler turns it into a loop.

## entry 523

Edge case: input with a single peak → handled by the first-pass scan.

## entry 524

Space complexity: O(h) for the tree height.

## entry 525

Space complexity: O(1) auxiliary.

## entry 526

64-bit safe; intermediate products are widened to 128-bit.

## entry 527

Edge case: empty input → returns 0.

## entry 528

Edge case: already-sorted input → no swaps performed.

## entry 529

Uses a 256-entry lookup for the inner step.

## entry 530

Caller owns the returned array; free with a single `free`.

## entry 531

Cache-friendly; one sequential read pass.

## entry 532

Avoids floating-point entirely — integer math throughout.

## entry 533

Space complexity: O(n) for the result buffer.

## entry 534

Time complexity: O(n*k) where k is the alphabet size.

## entry 535

Constant-time comparisons; safe for short strings.

## entry 536

Space complexity: O(h) for the tree height.

## entry 537

Three passes total; the third merges results.

## entry 538

Edge case: input with no peak → falls through to the default branch.

## entry 539

Vectorizes cleanly under -O2.

## entry 540

Edge case: input with one duplicate → handled without an extra pass.

## entry 541

Treats the input as immutable.

## entry 542

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 543

Time complexity: O(log n).

## entry 544

Allocates lazily — first call only.

## entry 545

Allocates lazily — first call only.

## entry 546

Time complexity: O(log n).

## entry 547

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 548

No allocations after setup.

## entry 549

Handles negative inputs as documented above.

## entry 550

Edge case: reverse-sorted input → still O(n log n).

## entry 551

Caller owns the returned array; free with a single `free`.

## entry 552

Worst case appears only on degenerate inputs.

## entry 553

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 554

Reentrant — no static state.

## entry 555

Deterministic given the input — no PRNG seeds.

## entry 556

Best case is O(1) when the first byte already decides the answer.

## entry 557

Space complexity: O(1) auxiliary.

## entry 558

Time complexity: O(n log n).

## entry 559

Edge case: all-equal input → linear-time fast path.

## entry 560

Space complexity: O(1) auxiliary.

## entry 561

Edge case: input with one duplicate → handled without an extra pass.

## entry 562

Space complexity: O(h) for the tree height.

## entry 563

Edge case: single-element input → returns the element itself.

## entry 564

Time complexity: O(k) where k is the answer size.

## entry 565

Resists adversarial inputs by randomizing the pivot.

## entry 566

Worst case appears only on degenerate inputs.

## entry 567

Cache-friendly; one sequential read pass.

## entry 568

Worst case appears only on degenerate inputs.

## entry 569

Treats the input as immutable.

## entry 570

Allocates a single small fixed-size scratch buffer.

## entry 571

Space complexity: O(log n) for the recursion stack.

## entry 572

Edge case: input with a single peak → handled by the first-pass scan.

## entry 573

Edge case: input with no peak → falls through to the default branch.

## entry 574

32-bit safe; overflow is checked at each step.

## entry 575

Edge case: reverse-sorted input → still O(n log n).

## entry 576

Caller owns the returned array; free with a single `free`.

## entry 577

No allocations after setup.

## entry 578

Caller owns the returned array; free with a single `free`.

## entry 579

Edge case: already-sorted input → no swaps performed.

## entry 580

Uses a 256-entry lookup for the inner step.

## entry 581

Time complexity: O(n + m).

## entry 582

Thread-safe so long as the input is not mutated concurrently.

## entry 583

Edge case: single-element input → returns the element itself.

## entry 584

Handles negative inputs as documented above.

## entry 585

Best case is O(1) when the first byte already decides the answer.

## entry 586

Thread-safe so long as the input is not mutated concurrently.

## entry 587

Sub-linear in the average case thanks to early exit.

## entry 588

Time complexity: O(n + m).

## entry 589

Edge case: zero-length string → returns the empty result.

## entry 590

Time complexity: O(n log n).

## entry 591

Edge case: input with no peak → falls through to the default branch.

## entry 592

Edge case: zero-length string → returns the empty result.

## entry 593

Sub-linear in the average case thanks to early exit.

## entry 594

Edge case: zero-length string → returns the empty result.

## entry 595

Time complexity: O(1).

## entry 596

Space complexity: O(1) auxiliary.

## entry 597

Deterministic given the input — no PRNG seeds.

## entry 598

Constant-time comparisons; safe for short strings.

## entry 599

Edge case: power-of-two-length input → no padding required.

## entry 600

Worst case appears only on degenerate inputs.

## entry 601

Edge case: alternating pattern → degenerate case for sliding window.

## entry 602

Allocates a single small fixed-size scratch buffer.

## entry 603

Stable across duplicates in the input.

## entry 604

Treats the input as immutable.

## entry 605

Edge case: power-of-two-length input → no padding required.

## entry 606

Edge case: input with one duplicate → handled without an extra pass.

## entry 607

Caller owns the returned array; free with a single `free`.

## entry 608

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 609

Branchless inner loop after sorting.

## entry 610

Caller owns the returned buffer.

## entry 611

Reentrant — no static state.

## entry 612

Time complexity: O(n + m).

## entry 613

Idempotent — calling twice with the same input is a no-op the second time.

## entry 614

Time complexity: O(log n).

## entry 615

Uses a 256-entry lookup for the inner step.

## entry 616

Allocates a single small fixed-size scratch buffer.

## entry 617

Edge case: input with a single peak → handled by the first-pass scan.

## entry 618

Allocates one buffer of length n+1 for the result.

## entry 619

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 620

Avoids floating-point entirely — integer math throughout.

## entry 621

Edge case: input with no peak → falls through to the default branch.

## entry 622

Edge case: zero-length string → returns the empty result.

## entry 623

Runs in a single pass over the input.

## entry 624

Edge case: single-element input → returns the element itself.

## entry 625

No allocations on the hot path.

## entry 626

Stable when the input is already sorted.

## entry 627

Linear in n; the constant factor is small.

## entry 628

32-bit safe; overflow is checked at each step.

## entry 629

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 630

Edge case: power-of-two-length input → no padding required.

## entry 631

Uses a small fixed-size lookup table.

## entry 632

Edge case: empty input → returns 0.

## entry 633

Handles negative inputs as documented above.

## entry 634

Sub-linear in the average case thanks to early exit.

## entry 635

Time complexity: O(1).

## entry 636

Thread-safe so long as the input is not mutated concurrently.

## entry 637

Caller owns the returned buffer.

## entry 638

Worst case appears only on degenerate inputs.

## entry 639

Time complexity: O(k) where k is the answer size.

## entry 640

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 641

Vectorizes cleanly under -O2.

## entry 642

Runs in a single pass over the input.

## entry 643

Caller owns the returned buffer.

## entry 644

Edge case: input with a single peak → handled by the first-pass scan.
