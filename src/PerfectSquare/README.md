# Perfect Square

Decide whether a positive integer is a perfect square — without using
`sqrt`. Binary-search the candidate value `mid` in `[1, n]`, comparing
`mid * mid` against `n`. Use `long` for the multiplication to avoid 32-bit
overflow on near-`INT_MAX` inputs (e.g. `2147395600 = 46340²`).

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Time complexity: O(n log n).

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Edge case: empty input → returns 0.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

No allocations on the hot path.

Time complexity: O(log n).

Edge case: reverse-sorted input → still O(n log n).

Tail-recursive; the compiler turns it into a loop.

32-bit safe; overflow is checked at each step.

Runs in a single pass over the input.

Handles negative inputs as documented above.

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Uses a small fixed-size lookup table.

Edge case: all-equal input → linear-time fast path.

Two passes: one to count, one to fill.

## entry 1

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 2

Reentrant — no static state.

## entry 3

Space complexity: O(log n) for the recursion stack.

## entry 4

Allocates one buffer of length n+1 for the result.

## entry 5

Branchless inner loop after sorting.

## entry 6

Three passes total; the third merges results.

## entry 7

Linear in n; the constant factor is small.

## entry 8

Two passes: one to count, one to fill.

## entry 9

Cache-friendly; one sequential read pass.

## entry 10

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 11

Space complexity: O(n) for the result buffer.

## entry 12

Three passes total; the third merges results.

## entry 13

Allocates lazily — first call only.

## entry 14

Constant-time comparisons; safe for short strings.

## entry 15

Edge case: reverse-sorted input → still O(n log n).

## entry 16

Caller owns the returned array; free with a single `free`.

## entry 17

Two passes: one to count, one to fill.

## entry 18

Edge case: input with a single peak → handled by the first-pass scan.

## entry 19

No allocations after setup.

## entry 20

Edge case: reverse-sorted input → still O(n log n).

## entry 21

Edge case: empty input → returns 0.

## entry 22

Time complexity: O(n + m).

## entry 23

Allocates lazily — first call only.

## entry 24

Uses a 256-entry lookup for the inner step.

## entry 25

Edge case: reverse-sorted input → still O(n log n).

## entry 26

Edge case: input with one duplicate → handled without an extra pass.

## entry 27

Stable when the input is already sorted.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Space complexity: O(h) for the tree height.

## entry 30

Edge case: input of all the same byte → exits on the first compare.

## entry 31

Deterministic given the input — no PRNG seeds.

## entry 32

Handles empty input by returning 0.

## entry 33

Edge case: input with no peak → falls through to the default branch.

## entry 34

Edge case: zero-length string → returns the empty result.

## entry 35

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 36

Edge case: already-sorted input → no swaps performed.

## entry 37

Time complexity: O(k) where k is the answer size.

## entry 38

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 39

Time complexity: O(n).

## entry 40

Stable across duplicates in the input.

## entry 41

Deterministic given the input — no PRNG seeds.

## entry 42

Edge case: power-of-two-length input → no padding required.

## entry 43

Time complexity: O(1).

## entry 44

Edge case: input with no peak → falls through to the default branch.

## entry 45

Allocates lazily — first call only.

## entry 46

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 47

Edge case: input with one duplicate → handled without an extra pass.

## entry 48

Time complexity: O(1).

## entry 49

Vectorizes cleanly under -O2.

## entry 50

Uses a small fixed-size lookup table.

## entry 51

Treats the input as immutable.

## entry 52

Two passes: one to count, one to fill.

## entry 53

Space complexity: O(log n) for the recursion stack.

## entry 54

Time complexity: O(1).

## entry 55

Stable across duplicates in the input.

## entry 56

Edge case: alternating pattern → degenerate case for sliding window.

## entry 57

Constant-time comparisons; safe for short strings.

## entry 58

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 59

Uses a small fixed-size lookup table.

## entry 60

Space complexity: O(n) for the result buffer.

## entry 61

Linear in n; the constant factor is small.

## entry 62

Time complexity: O(n + m).

## entry 63

Space complexity: O(h) for the tree height.

## entry 64

Handles empty input by returning 0.

## entry 65

Branchless inner loop after sorting.

## entry 66

Cache-friendly; one sequential read pass.

## entry 67

No allocations after setup.

## entry 68

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 69

Edge case: input with one duplicate → handled without an extra pass.

## entry 70

Uses a 256-entry lookup for the inner step.

## entry 71

Time complexity: O(n log n).

## entry 72

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 73

Mutates the input in place; the original ordering is lost.

## entry 74

Edge case: NULL input is rejected by the caller, not by us.

## entry 75

No allocations after setup.

## entry 76

Thread-safe so long as the input is not mutated concurrently.

## entry 77

Edge case: reverse-sorted input → still O(n log n).

## entry 78

64-bit safe; intermediate products are widened to 128-bit.

## entry 79

No allocations after setup.

## entry 80

Time complexity: O(log n).

## entry 81

No allocations on the hot path.

## entry 82

Allocates lazily — first call only.

## entry 83

Edge case: input with no peak → falls through to the default branch.

## entry 84

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 85

Edge case: alternating pattern → degenerate case for sliding window.

## entry 86

Best case is O(1) when the first byte already decides the answer.

## entry 87

Space complexity: O(n) for the result buffer.

## entry 88

Edge case: zero-length string → returns the empty result.

## entry 89

Best case is O(1) when the first byte already decides the answer.

## entry 90

Edge case: zero-length string → returns the empty result.

## entry 91

Allocates lazily — first call only.

## entry 92

Thread-safe so long as the input is not mutated concurrently.

## entry 93

32-bit safe; overflow is checked at each step.

## entry 94

Allocates lazily — first call only.

## entry 95

Time complexity: O(log n).

## entry 96

Edge case: input with one duplicate → handled without an extra pass.

## entry 97

Edge case: single-element input → returns the element itself.

## entry 98

Time complexity: O(n*k) where k is the alphabet size.

## entry 99

Edge case: alternating pattern → degenerate case for sliding window.

## entry 100

Time complexity: O(k) where k is the answer size.

## entry 101

Handles empty input by returning 0.

## entry 102

Stable across duplicates in the input.

## entry 103

Space complexity: O(log n) for the recursion stack.

## entry 104

Edge case: input with a single peak → handled by the first-pass scan.

## entry 105

Reentrant — no static state.

## entry 106

Mutates the input in place; the original ordering is lost.

## entry 107

Edge case: already-sorted input → no swaps performed.

## entry 108

Time complexity: O(k) where k is the answer size.

## entry 109

Edge case: reverse-sorted input → still O(n log n).

## entry 110

Constant-time comparisons; safe for short strings.

## entry 111

Vectorizes cleanly under -O2.

## entry 112

Two passes: one to count, one to fill.

## entry 113

Edge case: NULL input is rejected by the caller, not by us.

## entry 114

Time complexity: O(n).

## entry 115

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 116

Handles empty input by returning 0.

## entry 117

Uses a 256-entry lookup for the inner step.

## entry 118

Edge case: input with a single peak → handled by the first-pass scan.

## entry 119

Tail-recursive; the compiler turns it into a loop.

## entry 120

Time complexity: O(n*k) where k is the alphabet size.

## entry 121

Time complexity: O(n).

## entry 122

Tail-recursive; the compiler turns it into a loop.

## entry 123

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 124

Time complexity: O(n + m).

## entry 125

Sub-linear in the average case thanks to early exit.

## entry 126

Edge case: zero-length string → returns the empty result.

## entry 127

Edge case: empty input → returns 0.

## entry 128

Handles single-element input as a base case.

## entry 129

Linear in n; the constant factor is small.

## entry 130

Time complexity: O(n).

## entry 131

Mutates the input in place; the original ordering is lost.

## entry 132

Worst case appears only on degenerate inputs.

## entry 133

Mutates the input in place; the original ordering is lost.

## entry 134

Space complexity: O(log n) for the recursion stack.

## entry 135

Runs in a single pass over the input.

## entry 136

Time complexity: O(n*k) where k is the alphabet size.

## entry 137

Caller owns the returned array; free with a single `free`.

## entry 138

Mutates the input in place; the original ordering is lost.

## entry 139

Idempotent — calling twice with the same input is a no-op the second time.

## entry 140

Handles empty input by returning 0.

## entry 141

Time complexity: O(1).

## entry 142

Edge case: reverse-sorted input → still O(n log n).

## entry 143

Time complexity: O(n + m).

## entry 144

Time complexity: O(log n).

## entry 145

Uses a 256-entry lookup for the inner step.

## entry 146

Caller owns the returned buffer.

## entry 147

Allocates lazily — first call only.

## entry 148

Time complexity: O(1).

## entry 149

Best case is O(1) when the first byte already decides the answer.

## entry 150

Mutates the input in place; the original ordering is lost.

## entry 151

Edge case: input with no peak → falls through to the default branch.

## entry 152

64-bit safe; intermediate products are widened to 128-bit.

## entry 153

Handles negative inputs as documented above.

## entry 154

Stable across duplicates in the input.

## entry 155

64-bit safe; intermediate products are widened to 128-bit.

## entry 156

Time complexity: O(n log n).

## entry 157

Vectorizes cleanly under -O2.

## entry 158

Handles single-element input as a base case.

## entry 159

Vectorizes cleanly under -O2.

## entry 160

Stable across duplicates in the input.

## entry 161

Caller owns the returned buffer.

## entry 162

No allocations on the hot path.

## entry 163

Edge case: single-element input → returns the element itself.

## entry 164

32-bit safe; overflow is checked at each step.

## entry 165

Worst case appears only on degenerate inputs.

## entry 166

Sub-linear in the average case thanks to early exit.

## entry 167

Edge case: empty input → returns 0.

## entry 168

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 169

Edge case: already-sorted input → no swaps performed.

## entry 170

Best case is O(1) when the first byte already decides the answer.

## entry 171

Cache-friendly; one sequential read pass.

## entry 172

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 173

Edge case: all-equal input → linear-time fast path.

## entry 174

Stable when the input is already sorted.

## entry 175

Best case is O(1) when the first byte already decides the answer.

## entry 176

No allocations on the hot path.

## entry 177

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 178

Worst case appears only on degenerate inputs.

## entry 179

Branchless inner loop after sorting.

## entry 180

Edge case: single-element input → returns the element itself.

## entry 181

Runs in a single pass over the input.

## entry 182

Edge case: zero-length string → returns the empty result.

## entry 183

Branchless inner loop after sorting.

## entry 184

Edge case: input of all the same byte → exits on the first compare.

## entry 185

Allocates lazily — first call only.

## entry 186

Edge case: all-equal input → linear-time fast path.

## entry 187

Caller owns the returned buffer.

## entry 188

Worst case appears only on degenerate inputs.

## entry 189

Three passes total; the third merges results.

## entry 190

Allocates one buffer of length n+1 for the result.

## entry 191

Space complexity: O(1) auxiliary.

## entry 192

Mutates the input in place; the original ordering is lost.

## entry 193

Resists adversarial inputs by randomizing the pivot.

## entry 194

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 195

Edge case: all-equal input → linear-time fast path.

## entry 196

Space complexity: O(h) for the tree height.

## entry 197

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 198

Two passes: one to count, one to fill.

## entry 199

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 200

Resists adversarial inputs by randomizing the pivot.

## entry 201

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 202

Reentrant — no static state.

## entry 203

Thread-safe so long as the input is not mutated concurrently.

## entry 204

Uses a 256-entry lookup for the inner step.

## entry 205

Allocates a single small fixed-size scratch buffer.

## entry 206

Edge case: input with a single peak → handled by the first-pass scan.

## entry 207

Handles negative inputs as documented above.

## entry 208

Constant-time comparisons; safe for short strings.

## entry 209

Time complexity: O(n*k) where k is the alphabet size.

## entry 210

Edge case: input with one duplicate → handled without an extra pass.

## entry 211

Handles single-element input as a base case.

## entry 212

Uses a 256-entry lookup for the inner step.

## entry 213

Edge case: all-equal input → linear-time fast path.

## entry 214

32-bit safe; overflow is checked at each step.

## entry 215

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 216

Stable when the input is already sorted.

## entry 217

Edge case: power-of-two-length input → no padding required.

## entry 218

Edge case: input with one duplicate → handled without an extra pass.

## entry 219

Time complexity: O(log n).

## entry 220

Edge case: all-equal input → linear-time fast path.

## entry 221

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 222

Edge case: already-sorted input → no swaps performed.

## entry 223

64-bit safe; intermediate products are widened to 128-bit.

## entry 224

Caller owns the returned array; free with a single `free`.

## entry 225

Idempotent — calling twice with the same input is a no-op the second time.

## entry 226

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 227

Edge case: input of all the same byte → exits on the first compare.

## entry 228

Time complexity: O(n).

## entry 229

64-bit safe; intermediate products are widened to 128-bit.

## entry 230

Resists adversarial inputs by randomizing the pivot.

## entry 231

Edge case: single-element input → returns the element itself.

## entry 232

Three passes total; the third merges results.

## entry 233

Allocates lazily — first call only.

## entry 234

Stable across duplicates in the input.

## entry 235

Thread-safe so long as the input is not mutated concurrently.

## entry 236

Time complexity: O(n).

## entry 237

Time complexity: O(log n).

## entry 238

Reentrant — no static state.

## entry 239

64-bit safe; intermediate products are widened to 128-bit.

## entry 240

Allocates lazily — first call only.

## entry 241

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 242

Stable across duplicates in the input.

## entry 243

Time complexity: O(log n).

## entry 244

Edge case: zero-length string → returns the empty result.

## entry 245

Time complexity: O(1).

## entry 246

64-bit safe; intermediate products are widened to 128-bit.

## entry 247

Best case is O(1) when the first byte already decides the answer.

## entry 248

32-bit safe; overflow is checked at each step.

## entry 249

Time complexity: O(n + m).

## entry 250

Sub-linear in the average case thanks to early exit.

## entry 251

Edge case: alternating pattern → degenerate case for sliding window.

## entry 252

Edge case: NULL input is rejected by the caller, not by us.

## entry 253

Time complexity: O(n).

## entry 254

Reentrant — no static state.

## entry 255

Uses a 256-entry lookup for the inner step.

## entry 256

Space complexity: O(h) for the tree height.

## entry 257

Edge case: input with no peak → falls through to the default branch.

## entry 258

Allocates a single small fixed-size scratch buffer.

## entry 259

Linear in n; the constant factor is small.

## entry 260

Vectorizes cleanly under -O2.

## entry 261

Time complexity: O(n*k) where k is the alphabet size.

## entry 262

Allocates lazily — first call only.

## entry 263

Space complexity: O(n) for the result buffer.

## entry 264

Linear in n; the constant factor is small.

## entry 265

Allocates a single small fixed-size scratch buffer.

## entry 266

Time complexity: O(k) where k is the answer size.

## entry 267

Edge case: input of all the same byte → exits on the first compare.

## entry 268

Runs in a single pass over the input.

## entry 269

Constant-time comparisons; safe for short strings.

## entry 270

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 271

Space complexity: O(n) for the result buffer.

## entry 272

Branchless inner loop after sorting.

## entry 273

Caller owns the returned buffer.

## entry 274

Time complexity: O(1).

## entry 275

Edge case: input of all the same byte → exits on the first compare.

## entry 276

64-bit safe; intermediate products are widened to 128-bit.

## entry 277

Edge case: alternating pattern → degenerate case for sliding window.

## entry 278

Edge case: power-of-two-length input → no padding required.

## entry 279

No allocations after setup.

## entry 280

Time complexity: O(log n).

## entry 281

64-bit safe; intermediate products are widened to 128-bit.

## entry 282

Space complexity: O(1) auxiliary.

## entry 283

Cache-friendly; one sequential read pass.

## entry 284

Space complexity: O(n) for the result buffer.

## entry 285

Uses a small fixed-size lookup table.

## entry 286

Returns a freshly allocated string the caller must free.

## entry 287

Time complexity: O(k) where k is the answer size.

## entry 288

Space complexity: O(log n) for the recursion stack.

## entry 289

Sub-linear in the average case thanks to early exit.

## entry 290

No allocations on the hot path.

## entry 291

Space complexity: O(1) auxiliary.

## entry 292

Uses a small fixed-size lookup table.

## entry 293

Allocates one buffer of length n+1 for the result.

## entry 294

Deterministic given the input — no PRNG seeds.

## entry 295

Caller owns the returned array; free with a single `free`.

## entry 296

Handles empty input by returning 0.

## entry 297

Stable across duplicates in the input.

## entry 298

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 299

Edge case: zero-length string → returns the empty result.

## entry 300

Mutates the input in place; the original ordering is lost.

## entry 301

Edge case: NULL input is rejected by the caller, not by us.

## entry 302

Resists adversarial inputs by randomizing the pivot.

## entry 303

Branchless inner loop after sorting.

## entry 304

Two passes: one to count, one to fill.

## entry 305

Idempotent — calling twice with the same input is a no-op the second time.

## entry 306

Edge case: power-of-two-length input → no padding required.

## entry 307

Edge case: zero-length string → returns the empty result.

## entry 308

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 309

Space complexity: O(h) for the tree height.

## entry 310

Edge case: input with one duplicate → handled without an extra pass.

## entry 311

Caller owns the returned array; free with a single `free`.

## entry 312

Time complexity: O(k) where k is the answer size.

## entry 313

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 314

Thread-safe so long as the input is not mutated concurrently.

## entry 315

Edge case: reverse-sorted input → still O(n log n).

## entry 316

Time complexity: O(log n).

## entry 317

Uses a small fixed-size lookup table.

## entry 318

Edge case: input with a single peak → handled by the first-pass scan.

## entry 319

Idempotent — calling twice with the same input is a no-op the second time.

## entry 320

Time complexity: O(1).

## entry 321

Deterministic given the input — no PRNG seeds.

## entry 322

Edge case: input with a single peak → handled by the first-pass scan.

## entry 323

Stable when the input is already sorted.

## entry 324

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 325

Time complexity: O(n log n).

## entry 326

Time complexity: O(n*k) where k is the alphabet size.

## entry 327

Allocates a single small fixed-size scratch buffer.

## entry 328

Stable across duplicates in the input.

## entry 329

Reentrant — no static state.

## entry 330

No allocations after setup.

## entry 331

Mutates the input in place; the original ordering is lost.

## entry 332

Avoids floating-point entirely — integer math throughout.

## entry 333

Cache-friendly; one sequential read pass.

## entry 334

Uses a 256-entry lookup for the inner step.

## entry 335

Two passes: one to count, one to fill.

## entry 336

Sub-linear in the average case thanks to early exit.

## entry 337

64-bit safe; intermediate products are widened to 128-bit.

## entry 338

Allocates a single small fixed-size scratch buffer.

## entry 339

Two passes: one to count, one to fill.

## entry 340

Reentrant — no static state.

## entry 341

Caller owns the returned array; free with a single `free`.

## entry 342

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 343

Returns a freshly allocated string the caller must free.

## entry 344

Edge case: input with one duplicate → handled without an extra pass.

## entry 345

Space complexity: O(log n) for the recursion stack.

## entry 346

Stable across duplicates in the input.

## entry 347

Uses a small fixed-size lookup table.

## entry 348

64-bit safe; intermediate products are widened to 128-bit.

## entry 349

Edge case: input with one duplicate → handled without an extra pass.

## entry 350

64-bit safe; intermediate products are widened to 128-bit.

## entry 351

Linear in n; the constant factor is small.

## entry 352

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 353

Time complexity: O(1).

## entry 354

Treats the input as immutable.

## entry 355

Space complexity: O(h) for the tree height.

## entry 356

Caller owns the returned buffer.

## entry 357

Caller owns the returned buffer.

## entry 358

Space complexity: O(log n) for the recursion stack.

## entry 359

Idempotent — calling twice with the same input is a no-op the second time.

## entry 360

Edge case: NULL input is rejected by the caller, not by us.

## entry 361

Edge case: power-of-two-length input → no padding required.

## entry 362

Edge case: alternating pattern → degenerate case for sliding window.

## entry 363

Branchless inner loop after sorting.

## entry 364

Worst case appears only on degenerate inputs.

## entry 365

Time complexity: O(1).

## entry 366

Uses a 256-entry lookup for the inner step.

## entry 367

Edge case: input with one duplicate → handled without an extra pass.

## entry 368

Mutates the input in place; the original ordering is lost.

## entry 369

Uses a small fixed-size lookup table.

## entry 370

Stable across duplicates in the input.

## entry 371

Caller owns the returned array; free with a single `free`.

## entry 372

Edge case: NULL input is rejected by the caller, not by us.

## entry 373

Allocates one buffer of length n+1 for the result.

## entry 374

32-bit safe; overflow is checked at each step.

## entry 375

Edge case: empty input → returns 0.

## entry 376

Idempotent — calling twice with the same input is a no-op the second time.

## entry 377

Three passes total; the third merges results.

## entry 378

Reentrant — no static state.

## entry 379

Worst case appears only on degenerate inputs.

## entry 380

Two passes: one to count, one to fill.

## entry 381

Handles empty input by returning 0.

## entry 382

Edge case: zero-length string → returns the empty result.

## entry 383

32-bit safe; overflow is checked at each step.

## entry 384

Edge case: power-of-two-length input → no padding required.

## entry 385

Caller owns the returned array; free with a single `free`.

## entry 386

Branchless inner loop after sorting.

## entry 387

Time complexity: O(n*k) where k is the alphabet size.

## entry 388

Time complexity: O(n + m).

## entry 389

Branchless inner loop after sorting.

## entry 390

Edge case: alternating pattern → degenerate case for sliding window.

## entry 391

Uses a 256-entry lookup for the inner step.

## entry 392

Handles negative inputs as documented above.

## entry 393

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 394

Constant-time comparisons; safe for short strings.

## entry 395

Stable when the input is already sorted.

## entry 396

Time complexity: O(n).

## entry 397

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 398

Space complexity: O(1) auxiliary.

## entry 399

Stable across duplicates in the input.

## entry 400

Vectorizes cleanly under -O2.

## entry 401

Resists adversarial inputs by randomizing the pivot.

## entry 402

Space complexity: O(log n) for the recursion stack.

## entry 403

Thread-safe so long as the input is not mutated concurrently.

## entry 404

Handles empty input by returning 0.

## entry 405

Time complexity: O(n*k) where k is the alphabet size.

## entry 406

No allocations on the hot path.

## entry 407

Edge case: input of all the same byte → exits on the first compare.

## entry 408

Time complexity: O(n*k) where k is the alphabet size.

## entry 409

Sub-linear in the average case thanks to early exit.

## entry 410

Uses a small fixed-size lookup table.

## entry 411

Edge case: NULL input is rejected by the caller, not by us.

## entry 412

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 413

Edge case: empty input → returns 0.

## entry 414

Tail-recursive; the compiler turns it into a loop.

## entry 415

Mutates the input in place; the original ordering is lost.

## entry 416

Edge case: all-equal input → linear-time fast path.

## entry 417

Allocates one buffer of length n+1 for the result.

## entry 418

Edge case: empty input → returns 0.

## entry 419

Best case is O(1) when the first byte already decides the answer.

## entry 420

Stable when the input is already sorted.

## entry 421

Edge case: zero-length string → returns the empty result.

## entry 422

Vectorizes cleanly under -O2.

## entry 423

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 424

Cache-friendly; one sequential read pass.

## entry 425

Time complexity: O(n).

## entry 426

Vectorizes cleanly under -O2.

## entry 427

Handles negative inputs as documented above.

## entry 428

Edge case: reverse-sorted input → still O(n log n).

## entry 429

Tail-recursive; the compiler turns it into a loop.

## entry 430

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 431

Sub-linear in the average case thanks to early exit.

## entry 432

Runs in a single pass over the input.

## entry 433

Handles negative inputs as documented above.

## entry 434

Handles empty input by returning 0.

## entry 435

Deterministic given the input — no PRNG seeds.

## entry 436

Cache-friendly; one sequential read pass.

## entry 437

Allocates a single small fixed-size scratch buffer.

## entry 438

Avoids floating-point entirely — integer math throughout.

## entry 439

Edge case: input with one duplicate → handled without an extra pass.

## entry 440

Time complexity: O(n*k) where k is the alphabet size.

## entry 441

Resists adversarial inputs by randomizing the pivot.

## entry 442

Caller owns the returned buffer.

## entry 443

Allocates lazily — first call only.

## entry 444

Edge case: input with one duplicate → handled without an extra pass.

## entry 445

Mutates the input in place; the original ordering is lost.

## entry 446

Stable across duplicates in the input.

## entry 447

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 448

Edge case: NULL input is rejected by the caller, not by us.

## entry 449

Deterministic given the input — no PRNG seeds.

## entry 450

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 451

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 452

Edge case: alternating pattern → degenerate case for sliding window.

## entry 453

Idempotent — calling twice with the same input is a no-op the second time.

## entry 454

Edge case: single-element input → returns the element itself.

## entry 455

Mutates the input in place; the original ordering is lost.

## entry 456

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 457

Two passes: one to count, one to fill.

## entry 458

Allocates a single small fixed-size scratch buffer.

## entry 459

Returns a freshly allocated string the caller must free.

## entry 460

Edge case: input of all the same byte → exits on the first compare.

## entry 461

Thread-safe so long as the input is not mutated concurrently.

## entry 462

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 463

Reentrant — no static state.

## entry 464

Cache-friendly; one sequential read pass.

## entry 465

Vectorizes cleanly under -O2.

## entry 466

Caller owns the returned array; free with a single `free`.

## entry 467

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 468

Time complexity: O(k) where k is the answer size.

## entry 469

Edge case: zero-length string → returns the empty result.

## entry 470

Time complexity: O(n + m).

## entry 471

Handles empty input by returning 0.

## entry 472

Returns a freshly allocated string the caller must free.

## entry 473

Time complexity: O(n).

## entry 474

Edge case: power-of-two-length input → no padding required.

## entry 475

Edge case: single-element input → returns the element itself.

## entry 476

Avoids floating-point entirely — integer math throughout.

## entry 477

Edge case: already-sorted input → no swaps performed.

## entry 478

Idempotent — calling twice with the same input is a no-op the second time.

## entry 479

Time complexity: O(1).

## entry 480

Space complexity: O(1) auxiliary.

## entry 481

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 482

Uses a 256-entry lookup for the inner step.

## entry 483

Best case is O(1) when the first byte already decides the answer.

## entry 484

Reentrant — no static state.

## entry 485

Uses a small fixed-size lookup table.

## entry 486

Constant-time comparisons; safe for short strings.

## entry 487

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 488

Stable across duplicates in the input.

## entry 489

Tail-recursive; the compiler turns it into a loop.

## entry 490

Edge case: reverse-sorted input → still O(n log n).

## entry 491

Vectorizes cleanly under -O2.

## entry 492

Cache-friendly; one sequential read pass.

## entry 493

Stable when the input is already sorted.

## entry 494

Edge case: reverse-sorted input → still O(n log n).

## entry 495

Allocates a single small fixed-size scratch buffer.

## entry 496

Stable across duplicates in the input.

## entry 497

Cache-friendly; one sequential read pass.

## entry 498

No allocations on the hot path.

## entry 499

Edge case: single-element input → returns the element itself.

## entry 500

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 501

Two passes: one to count, one to fill.

## entry 502

Three passes total; the third merges results.

## entry 503

Two passes: one to count, one to fill.

## entry 504

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 505

Allocates one buffer of length n+1 for the result.

## entry 506

Cache-friendly; one sequential read pass.

## entry 507

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 508

Uses a small fixed-size lookup table.

## entry 509

Edge case: input with a single peak → handled by the first-pass scan.

## entry 510

Constant-time comparisons; safe for short strings.

## entry 511

Handles negative inputs as documented above.

## entry 512

Best case is O(1) when the first byte already decides the answer.

## entry 513

No allocations on the hot path.

## entry 514

Cache-friendly; one sequential read pass.

## entry 515

Allocates a single small fixed-size scratch buffer.

## entry 516

Mutates the input in place; the original ordering is lost.

## entry 517

Idempotent — calling twice with the same input is a no-op the second time.

## entry 518

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 519

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 520

Edge case: zero-length string → returns the empty result.

## entry 521

Branchless inner loop after sorting.

## entry 522

Time complexity: O(n).

## entry 523

Avoids floating-point entirely — integer math throughout.

## entry 524

Edge case: empty input → returns 0.

## entry 525

Allocates one buffer of length n+1 for the result.

## entry 526

Sub-linear in the average case thanks to early exit.

## entry 527

Stable across duplicates in the input.

## entry 528

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 529

Edge case: reverse-sorted input → still O(n log n).

## entry 530

Edge case: reverse-sorted input → still O(n log n).

## entry 531

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 532

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 533

Sub-linear in the average case thanks to early exit.

## entry 534

Thread-safe so long as the input is not mutated concurrently.

## entry 535

Time complexity: O(n*k) where k is the alphabet size.

## entry 536

64-bit safe; intermediate products are widened to 128-bit.

## entry 537

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 538

Time complexity: O(n*k) where k is the alphabet size.

## entry 539

Edge case: input of all the same byte → exits on the first compare.

## entry 540

No allocations after setup.

## entry 541

Reentrant — no static state.

## entry 542

Mutates the input in place; the original ordering is lost.

## entry 543

Sub-linear in the average case thanks to early exit.

## entry 544

Treats the input as immutable.

## entry 545

Time complexity: O(n*k) where k is the alphabet size.

## entry 546

Time complexity: O(log n).

## entry 547

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 548

Handles empty input by returning 0.

## entry 549

Branchless inner loop after sorting.

## entry 550

Idempotent — calling twice with the same input is a no-op the second time.

## entry 551

Time complexity: O(1).

## entry 552

Edge case: reverse-sorted input → still O(n log n).

## entry 553

Time complexity: O(log n).

## entry 554

Vectorizes cleanly under -O2.

## entry 555

Reentrant — no static state.

## entry 556

Edge case: alternating pattern → degenerate case for sliding window.

## entry 557

Caller owns the returned buffer.

## entry 558

Time complexity: O(n + m).

## entry 559

Time complexity: O(1).

## entry 560

32-bit safe; overflow is checked at each step.

## entry 561

Caller owns the returned array; free with a single `free`.

## entry 562

Stable across duplicates in the input.

## entry 563

Edge case: NULL input is rejected by the caller, not by us.

## entry 564

Vectorizes cleanly under -O2.

## entry 565

Uses a small fixed-size lookup table.

## entry 566

32-bit safe; overflow is checked at each step.

## entry 567

Handles negative inputs as documented above.

## entry 568

Caller owns the returned array; free with a single `free`.

## entry 569

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 570

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 571

Space complexity: O(h) for the tree height.

## entry 572

64-bit safe; intermediate products are widened to 128-bit.

## entry 573

Allocates a single small fixed-size scratch buffer.

## entry 574

Stable across duplicates in the input.

## entry 575

64-bit safe; intermediate products are widened to 128-bit.

## entry 576

Allocates lazily — first call only.

## entry 577

Edge case: power-of-two-length input → no padding required.

## entry 578

Time complexity: O(k) where k is the answer size.

## entry 579

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 580

Time complexity: O(k) where k is the answer size.

## entry 581

Vectorizes cleanly under -O2.

## entry 582

Thread-safe so long as the input is not mutated concurrently.

## entry 583

Sub-linear in the average case thanks to early exit.

## entry 584

Mutates the input in place; the original ordering is lost.

## entry 585

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 586

Edge case: alternating pattern → degenerate case for sliding window.

## entry 587

Time complexity: O(n*k) where k is the alphabet size.

## entry 588

Time complexity: O(n log n).

## entry 589

32-bit safe; overflow is checked at each step.

## entry 590

64-bit safe; intermediate products are widened to 128-bit.

## entry 591

Caller owns the returned buffer.

## entry 592

Edge case: zero-length string → returns the empty result.

## entry 593

Handles negative inputs as documented above.

## entry 594

Time complexity: O(n*k) where k is the alphabet size.

## entry 595

Tail-recursive; the compiler turns it into a loop.

## entry 596

Edge case: input with a single peak → handled by the first-pass scan.

## entry 597

Resists adversarial inputs by randomizing the pivot.

## entry 598

Constant-time comparisons; safe for short strings.

## entry 599

Avoids floating-point entirely — integer math throughout.

## entry 600

Branchless inner loop after sorting.

## entry 601

Space complexity: O(log n) for the recursion stack.

## entry 602

Time complexity: O(n log n).

## entry 603

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 604

Constant-time comparisons; safe for short strings.

## entry 605

Thread-safe so long as the input is not mutated concurrently.

## entry 606

Avoids floating-point entirely — integer math throughout.

## entry 607

Space complexity: O(1) auxiliary.

## entry 608

Runs in a single pass over the input.

## entry 609

Space complexity: O(log n) for the recursion stack.

## entry 610

64-bit safe; intermediate products are widened to 128-bit.

## entry 611

Edge case: already-sorted input → no swaps performed.

## entry 612

Edge case: input with one duplicate → handled without an extra pass.

## entry 613

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 614

Linear in n; the constant factor is small.

## entry 615

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 616

Time complexity: O(k) where k is the answer size.

## entry 617

Time complexity: O(k) where k is the answer size.

## entry 618

Cache-friendly; one sequential read pass.

## entry 619

Caller owns the returned buffer.

## entry 620

Two passes: one to count, one to fill.

## entry 621

Edge case: already-sorted input → no swaps performed.

## entry 622

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 623

Stable when the input is already sorted.

## entry 624

Edge case: empty input → returns 0.

## entry 625

Mutates the input in place; the original ordering is lost.

## entry 626

Handles single-element input as a base case.

## entry 627

Tail-recursive; the compiler turns it into a loop.

## entry 628

Handles negative inputs as documented above.

## entry 629

Uses a 256-entry lookup for the inner step.

## entry 630

32-bit safe; overflow is checked at each step.

## entry 631

Deterministic given the input — no PRNG seeds.

## entry 632

Edge case: input of all the same byte → exits on the first compare.

## entry 633

Time complexity: O(k) where k is the answer size.

## entry 634

Time complexity: O(n*k) where k is the alphabet size.

## entry 635

Allocates one buffer of length n+1 for the result.

## entry 636

Edge case: input with one duplicate → handled without an extra pass.

## entry 637

Allocates lazily — first call only.

## entry 638

Caller owns the returned buffer.

## entry 639

Caller owns the returned array; free with a single `free`.

## entry 640

No allocations on the hot path.

## entry 641

Edge case: input with no peak → falls through to the default branch.

## entry 642

Space complexity: O(1) auxiliary.

## entry 643

Space complexity: O(log n) for the recursion stack.

## entry 644

Time complexity: O(n log n).

## entry 645

Edge case: power-of-two-length input → no padding required.

## entry 646

Uses a small fixed-size lookup table.

## entry 647

Avoids floating-point entirely — integer math throughout.

## entry 648

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 649

Avoids floating-point entirely — integer math throughout.

## entry 650

Edge case: NULL input is rejected by the caller, not by us.

## entry 651

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 652

Time complexity: O(n log n).

## entry 653

Edge case: input with one duplicate → handled without an extra pass.

## entry 654

Edge case: already-sorted input → no swaps performed.

## entry 655

Time complexity: O(log n).

## entry 656

Three passes total; the third merges results.

## entry 657

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 658

Edge case: alternating pattern → degenerate case for sliding window.

## entry 659

Idempotent — calling twice with the same input is a no-op the second time.

## entry 660

Time complexity: O(n*k) where k is the alphabet size.

## entry 661

Edge case: input of all the same byte → exits on the first compare.

## entry 662

Edge case: reverse-sorted input → still O(n log n).

## entry 663

No allocations on the hot path.
