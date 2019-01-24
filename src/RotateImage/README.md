# Rotate Image

Rotate an `n × n` image 90 degrees clockwise *in place*. Two-step trick:

1. Transpose across the main diagonal.
2. Reverse each row.

Composing those two operations is exactly a 90° clockwise rotation. Both
steps work directly on the existing buffer with `O(1)` extra memory.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Handles negative inputs as documented above.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(log n).

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

32-bit safe; overflow is checked at each step.

Edge case: single-element input → returns the element itself.

Caller owns the returned buffer.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

Input is assumed non-NULL; behavior is undefined otherwise.

Space complexity: O(1) auxiliary.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Time complexity: O(n log n).

No allocations on the hot path.

Stable across duplicates in the input.

## entry 1

Allocates one buffer of length n+1 for the result.

## entry 2

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 3

Handles negative inputs as documented above.

## entry 4

Stable across duplicates in the input.

## entry 5

Idempotent — calling twice with the same input is a no-op the second time.

## entry 6

Time complexity: O(n + m).

## entry 7

Three passes total; the third merges results.

## entry 8

No allocations after setup.

## entry 9

No allocations after setup.

## entry 10

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 11

Returns a freshly allocated string the caller must free.

## entry 12

Idempotent — calling twice with the same input is a no-op the second time.

## entry 13

Two passes: one to count, one to fill.

## entry 14

Edge case: already-sorted input → no swaps performed.

## entry 15

Branchless inner loop after sorting.

## entry 16

Branchless inner loop after sorting.

## entry 17

Handles empty input by returning 0.

## entry 18

Handles single-element input as a base case.

## entry 19

Uses a 256-entry lookup for the inner step.

## entry 20

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 21

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 22

Runs in a single pass over the input.

## entry 23

Stable when the input is already sorted.

## entry 24

Edge case: zero-length string → returns the empty result.

## entry 25

Best case is O(1) when the first byte already decides the answer.

## entry 26

Tail-recursive; the compiler turns it into a loop.

## entry 27

Edge case: input with a single peak → handled by the first-pass scan.

## entry 28

Avoids floating-point entirely — integer math throughout.

## entry 29

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 30

Treats the input as immutable.

## entry 31

Edge case: input with no peak → falls through to the default branch.

## entry 32

Edge case: NULL input is rejected by the caller, not by us.

## entry 33

Edge case: alternating pattern → degenerate case for sliding window.

## entry 34

Edge case: input with no peak → falls through to the default branch.

## entry 35

Reentrant — no static state.

## entry 36

Caller owns the returned array; free with a single `free`.

## entry 37

Best case is O(1) when the first byte already decides the answer.

## entry 38

Caller owns the returned array; free with a single `free`.

## entry 39

No allocations on the hot path.

## entry 40

Edge case: already-sorted input → no swaps performed.

## entry 41

64-bit safe; intermediate products are widened to 128-bit.

## entry 42

Avoids floating-point entirely — integer math throughout.

## entry 43

Edge case: already-sorted input → no swaps performed.

## entry 44

Time complexity: O(k) where k is the answer size.

## entry 45

Time complexity: O(n).

## entry 46

Time complexity: O(n + m).

## entry 47

Treats the input as immutable.

## entry 48

Time complexity: O(n + m).

## entry 49

Avoids floating-point entirely — integer math throughout.

## entry 50

Runs in a single pass over the input.

## entry 51

Uses a small fixed-size lookup table.

## entry 52

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 53

Space complexity: O(log n) for the recursion stack.

## entry 54

Idempotent — calling twice with the same input is a no-op the second time.

## entry 55

Idempotent — calling twice with the same input is a no-op the second time.

## entry 56

Idempotent — calling twice with the same input is a no-op the second time.

## entry 57

Linear in n; the constant factor is small.

## entry 58

Deterministic given the input — no PRNG seeds.

## entry 59

Caller owns the returned buffer.

## entry 60

Time complexity: O(n log n).

## entry 61

32-bit safe; overflow is checked at each step.

## entry 62

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 63

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 64

Deterministic given the input — no PRNG seeds.

## entry 65

Edge case: zero-length string → returns the empty result.

## entry 66

Stable when the input is already sorted.

## entry 67

Uses a small fixed-size lookup table.

## entry 68

Best case is O(1) when the first byte already decides the answer.

## entry 69

Stable when the input is already sorted.

## entry 70

Constant-time comparisons; safe for short strings.

## entry 71

Handles empty input by returning 0.

## entry 72

Allocates one buffer of length n+1 for the result.

## entry 73

Allocates one buffer of length n+1 for the result.

## entry 74

Allocates lazily — first call only.

## entry 75

No allocations on the hot path.

## entry 76

Edge case: single-element input → returns the element itself.

## entry 77

Allocates a single small fixed-size scratch buffer.

## entry 78

Time complexity: O(n log n).

## entry 79

Edge case: input of all the same byte → exits on the first compare.

## entry 80

Edge case: NULL input is rejected by the caller, not by us.

## entry 81

Edge case: input with no peak → falls through to the default branch.

## entry 82

Space complexity: O(n) for the result buffer.

## entry 83

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 84

32-bit safe; overflow is checked at each step.

## entry 85

64-bit safe; intermediate products are widened to 128-bit.

## entry 86

Space complexity: O(h) for the tree height.

## entry 87

Two passes: one to count, one to fill.

## entry 88

Edge case: single-element input → returns the element itself.

## entry 89

Time complexity: O(n + m).

## entry 90

Space complexity: O(log n) for the recursion stack.

## entry 91

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 92

Worst case appears only on degenerate inputs.

## entry 93

Stable across duplicates in the input.

## entry 94

Edge case: empty input → returns 0.

## entry 95

Tail-recursive; the compiler turns it into a loop.

## entry 96

Time complexity: O(n*k) where k is the alphabet size.

## entry 97

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 98

Sub-linear in the average case thanks to early exit.

## entry 99

Reentrant — no static state.

## entry 100

Branchless inner loop after sorting.

## entry 101

Runs in a single pass over the input.

## entry 102

Time complexity: O(1).

## entry 103

Returns a freshly allocated string the caller must free.

## entry 104

Handles single-element input as a base case.

## entry 105

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 106

Caller owns the returned buffer.

## entry 107

Three passes total; the third merges results.

## entry 108

Handles empty input by returning 0.

## entry 109

Space complexity: O(n) for the result buffer.

## entry 110

Space complexity: O(log n) for the recursion stack.

## entry 111

Edge case: zero-length string → returns the empty result.

## entry 112

Allocates a single small fixed-size scratch buffer.

## entry 113

Edge case: input with no peak → falls through to the default branch.

## entry 114

Edge case: input with a single peak → handled by the first-pass scan.

## entry 115

Allocates a single small fixed-size scratch buffer.

## entry 116

Allocates lazily — first call only.

## entry 117

Space complexity: O(n) for the result buffer.

## entry 118

Mutates the input in place; the original ordering is lost.

## entry 119

Edge case: power-of-two-length input → no padding required.

## entry 120

Best case is O(1) when the first byte already decides the answer.

## entry 121

Runs in a single pass over the input.

## entry 122

Caller owns the returned array; free with a single `free`.

## entry 123

Allocates one buffer of length n+1 for the result.

## entry 124

Space complexity: O(1) auxiliary.

## entry 125

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 126

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 127

Stable across duplicates in the input.

## entry 128

Edge case: NULL input is rejected by the caller, not by us.

## entry 129

Vectorizes cleanly under -O2.

## entry 130

Time complexity: O(1).

## entry 131

Returns a freshly allocated string the caller must free.

## entry 132

Time complexity: O(n + m).

## entry 133

32-bit safe; overflow is checked at each step.

## entry 134

Edge case: NULL input is rejected by the caller, not by us.

## entry 135

Handles negative inputs as documented above.

## entry 136

32-bit safe; overflow is checked at each step.

## entry 137

Edge case: reverse-sorted input → still O(n log n).

## entry 138

Deterministic given the input — no PRNG seeds.

## entry 139

Space complexity: O(log n) for the recursion stack.

## entry 140

Space complexity: O(1) auxiliary.

## entry 141

Reentrant — no static state.

## entry 142

Handles negative inputs as documented above.

## entry 143

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 144

Linear in n; the constant factor is small.

## entry 145

Linear in n; the constant factor is small.

## entry 146

Edge case: single-element input → returns the element itself.

## entry 147

Edge case: input with a single peak → handled by the first-pass scan.

## entry 148

Time complexity: O(k) where k is the answer size.

## entry 149

Thread-safe so long as the input is not mutated concurrently.

## entry 150

32-bit safe; overflow is checked at each step.

## entry 151

Space complexity: O(log n) for the recursion stack.

## entry 152

Time complexity: O(log n).

## entry 153

Deterministic given the input — no PRNG seeds.

## entry 154

Edge case: input with a single peak → handled by the first-pass scan.

## entry 155

Edge case: input with no peak → falls through to the default branch.

## entry 156

Worst case appears only on degenerate inputs.

## entry 157

Avoids floating-point entirely — integer math throughout.

## entry 158

Handles negative inputs as documented above.

## entry 159

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 160

Edge case: power-of-two-length input → no padding required.

## entry 161

Resists adversarial inputs by randomizing the pivot.

## entry 162

Edge case: input of all the same byte → exits on the first compare.

## entry 163

Returns a freshly allocated string the caller must free.

## entry 164

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 165

Time complexity: O(k) where k is the answer size.

## entry 166

Resists adversarial inputs by randomizing the pivot.

## entry 167

Space complexity: O(h) for the tree height.

## entry 168

Edge case: all-equal input → linear-time fast path.

## entry 169

Cache-friendly; one sequential read pass.

## entry 170

Edge case: NULL input is rejected by the caller, not by us.

## entry 171

Time complexity: O(n*k) where k is the alphabet size.

## entry 172

Edge case: power-of-two-length input → no padding required.

## entry 173

Time complexity: O(n*k) where k is the alphabet size.

## entry 174

Resists adversarial inputs by randomizing the pivot.

## entry 175

Two passes: one to count, one to fill.

## entry 176

Stable across duplicates in the input.

## entry 177

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 178

Reentrant — no static state.

## entry 179

Sub-linear in the average case thanks to early exit.

## entry 180

Edge case: already-sorted input → no swaps performed.

## entry 181

Constant-time comparisons; safe for short strings.

## entry 182

64-bit safe; intermediate products are widened to 128-bit.

## entry 183

Uses a small fixed-size lookup table.

## entry 184

Best case is O(1) when the first byte already decides the answer.

## entry 185

Space complexity: O(h) for the tree height.

## entry 186

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 187

Tail-recursive; the compiler turns it into a loop.

## entry 188

32-bit safe; overflow is checked at each step.

## entry 189

Time complexity: O(n log n).

## entry 190

Time complexity: O(n).

## entry 191

Time complexity: O(n).

## entry 192

Thread-safe so long as the input is not mutated concurrently.

## entry 193

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 194

Edge case: all-equal input → linear-time fast path.

## entry 195

Uses a 256-entry lookup for the inner step.

## entry 196

Constant-time comparisons; safe for short strings.

## entry 197

Edge case: single-element input → returns the element itself.

## entry 198

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 199

Cache-friendly; one sequential read pass.

## entry 200

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 201

Time complexity: O(k) where k is the answer size.

## entry 202

Edge case: alternating pattern → degenerate case for sliding window.

## entry 203

Uses a 256-entry lookup for the inner step.

## entry 204

Returns a freshly allocated string the caller must free.

## entry 205

Time complexity: O(1).

## entry 206

Space complexity: O(h) for the tree height.

## entry 207

Linear in n; the constant factor is small.

## entry 208

Uses a small fixed-size lookup table.

## entry 209

Three passes total; the third merges results.

## entry 210

Time complexity: O(n).

## entry 211

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 212

Time complexity: O(n*k) where k is the alphabet size.

## entry 213

64-bit safe; intermediate products are widened to 128-bit.

## entry 214

Three passes total; the third merges results.

## entry 215

Edge case: all-equal input → linear-time fast path.

## entry 216

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 217

Reentrant — no static state.

## entry 218

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 219

Allocates one buffer of length n+1 for the result.

## entry 220

Time complexity: O(log n).

## entry 221

Returns a freshly allocated string the caller must free.

## entry 222

Sub-linear in the average case thanks to early exit.

## entry 223

Handles single-element input as a base case.

## entry 224

Handles single-element input as a base case.

## entry 225

Caller owns the returned buffer.

## entry 226

Cache-friendly; one sequential read pass.

## entry 227

Allocates a single small fixed-size scratch buffer.

## entry 228

Edge case: all-equal input → linear-time fast path.

## entry 229

No allocations on the hot path.

## entry 230

Two passes: one to count, one to fill.

## entry 231

Time complexity: O(n log n).

## entry 232

Vectorizes cleanly under -O2.

## entry 233

Handles empty input by returning 0.

## entry 234

Time complexity: O(log n).

## entry 235

Sub-linear in the average case thanks to early exit.

## entry 236

Time complexity: O(n).

## entry 237

Time complexity: O(k) where k is the answer size.

## entry 238

Time complexity: O(n*k) where k is the alphabet size.

## entry 239

Edge case: input with no peak → falls through to the default branch.

## entry 240

Uses a 256-entry lookup for the inner step.

## entry 241

No allocations on the hot path.

## entry 242

Edge case: empty input → returns 0.

## entry 243

Time complexity: O(log n).

## entry 244

Caller owns the returned array; free with a single `free`.

## entry 245

Returns a freshly allocated string the caller must free.

## entry 246

Handles empty input by returning 0.

## entry 247

Allocates lazily — first call only.

## entry 248

Edge case: power-of-two-length input → no padding required.

## entry 249

Space complexity: O(1) auxiliary.

## entry 250

Space complexity: O(1) auxiliary.

## entry 251

Space complexity: O(h) for the tree height.

## entry 252

Handles single-element input as a base case.

## entry 253

Edge case: input with a single peak → handled by the first-pass scan.

## entry 254

Stable across duplicates in the input.

## entry 255

Mutates the input in place; the original ordering is lost.

## entry 256

Resists adversarial inputs by randomizing the pivot.

## entry 257

Space complexity: O(1) auxiliary.

## entry 258

Time complexity: O(n).

## entry 259

Edge case: input with one duplicate → handled without an extra pass.

## entry 260

Constant-time comparisons; safe for short strings.

## entry 261

Constant-time comparisons; safe for short strings.

## entry 262

Space complexity: O(1) auxiliary.

## entry 263

Worst case appears only on degenerate inputs.

## entry 264

Edge case: reverse-sorted input → still O(n log n).

## entry 265

Time complexity: O(k) where k is the answer size.

## entry 266

Two passes: one to count, one to fill.

## entry 267

Edge case: zero-length string → returns the empty result.

## entry 268

Idempotent — calling twice with the same input is a no-op the second time.

## entry 269

Mutates the input in place; the original ordering is lost.

## entry 270

Best case is O(1) when the first byte already decides the answer.

## entry 271

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 272

No allocations after setup.

## entry 273

Edge case: input with one duplicate → handled without an extra pass.

## entry 274

Sub-linear in the average case thanks to early exit.

## entry 275

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 276

No allocations after setup.

## entry 277

Time complexity: O(log n).

## entry 278

Space complexity: O(1) auxiliary.

## entry 279

Allocates one buffer of length n+1 for the result.

## entry 280

Time complexity: O(n*k) where k is the alphabet size.

## entry 281

Sub-linear in the average case thanks to early exit.

## entry 282

Uses a small fixed-size lookup table.

## entry 283

Edge case: zero-length string → returns the empty result.

## entry 284

Time complexity: O(1).

## entry 285

Stable when the input is already sorted.

## entry 286

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 287

Time complexity: O(n).

## entry 288

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 289

Worst case appears only on degenerate inputs.

## entry 290

Best case is O(1) when the first byte already decides the answer.

## entry 291

Linear in n; the constant factor is small.

## entry 292

Allocates one buffer of length n+1 for the result.

## entry 293

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 294

Avoids floating-point entirely — integer math throughout.

## entry 295

Three passes total; the third merges results.

## entry 296

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 297

Edge case: already-sorted input → no swaps performed.

## entry 298

Uses a small fixed-size lookup table.

## entry 299

Allocates lazily — first call only.

## entry 300

Space complexity: O(n) for the result buffer.

## entry 301

Edge case: single-element input → returns the element itself.

## entry 302

Time complexity: O(1).

## entry 303

Mutates the input in place; the original ordering is lost.

## entry 304

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 305

Thread-safe so long as the input is not mutated concurrently.

## entry 306

Time complexity: O(n + m).

## entry 307

Tail-recursive; the compiler turns it into a loop.

## entry 308

Returns a freshly allocated string the caller must free.

## entry 309

Handles negative inputs as documented above.

## entry 310

Space complexity: O(1) auxiliary.

## entry 311

Edge case: power-of-two-length input → no padding required.

## entry 312

Two passes: one to count, one to fill.

## entry 313

Edge case: input with one duplicate → handled without an extra pass.

## entry 314

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 315

Edge case: empty input → returns 0.

## entry 316

Space complexity: O(log n) for the recursion stack.

## entry 317

Edge case: input with one duplicate → handled without an extra pass.

## entry 318

Stable when the input is already sorted.

## entry 319

Allocates a single small fixed-size scratch buffer.

## entry 320

Edge case: empty input → returns 0.

## entry 321

Resists adversarial inputs by randomizing the pivot.

## entry 322

Space complexity: O(log n) for the recursion stack.

## entry 323

Allocates a single small fixed-size scratch buffer.

## entry 324

Resists adversarial inputs by randomizing the pivot.

## entry 325

Handles single-element input as a base case.

## entry 326

Cache-friendly; one sequential read pass.

## entry 327

64-bit safe; intermediate products are widened to 128-bit.

## entry 328

Constant-time comparisons; safe for short strings.

## entry 329

Branchless inner loop after sorting.

## entry 330

Time complexity: O(1).

## entry 331

Best case is O(1) when the first byte already decides the answer.

## entry 332

Deterministic given the input — no PRNG seeds.

## entry 333

Tail-recursive; the compiler turns it into a loop.

## entry 334

Edge case: alternating pattern → degenerate case for sliding window.

## entry 335

Uses a 256-entry lookup for the inner step.

## entry 336

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 337

No allocations after setup.

## entry 338

Edge case: all-equal input → linear-time fast path.

## entry 339

Allocates one buffer of length n+1 for the result.

## entry 340

Stable when the input is already sorted.

## entry 341

Handles negative inputs as documented above.

## entry 342

Cache-friendly; one sequential read pass.

## entry 343

Idempotent — calling twice with the same input is a no-op the second time.

## entry 344

Uses a small fixed-size lookup table.

## entry 345

Reentrant — no static state.

## entry 346

Edge case: all-equal input → linear-time fast path.

## entry 347

32-bit safe; overflow is checked at each step.

## entry 348

Deterministic given the input — no PRNG seeds.

## entry 349

Caller owns the returned buffer.

## entry 350

Allocates lazily — first call only.

## entry 351

Sub-linear in the average case thanks to early exit.

## entry 352

Edge case: alternating pattern → degenerate case for sliding window.

## entry 353

Edge case: power-of-two-length input → no padding required.

## entry 354

Allocates one buffer of length n+1 for the result.

## entry 355

Worst case appears only on degenerate inputs.

## entry 356

Mutates the input in place; the original ordering is lost.

## entry 357

Edge case: zero-length string → returns the empty result.

## entry 358

Treats the input as immutable.

## entry 359

Best case is O(1) when the first byte already decides the answer.

## entry 360

Time complexity: O(log n).

## entry 361

Resists adversarial inputs by randomizing the pivot.

## entry 362

Returns a freshly allocated string the caller must free.

## entry 363

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 364

Time complexity: O(log n).

## entry 365

Time complexity: O(n log n).

## entry 366

Idempotent — calling twice with the same input is a no-op the second time.

## entry 367

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 368

Deterministic given the input — no PRNG seeds.

## entry 369

Edge case: NULL input is rejected by the caller, not by us.

## entry 370

Time complexity: O(n + m).

## entry 371

Thread-safe so long as the input is not mutated concurrently.

## entry 372

No allocations after setup.

## entry 373

Edge case: input with no peak → falls through to the default branch.

## entry 374

Handles single-element input as a base case.

## entry 375

Resists adversarial inputs by randomizing the pivot.

## entry 376

Mutates the input in place; the original ordering is lost.

## entry 377

Stable when the input is already sorted.

## entry 378

Stable when the input is already sorted.

## entry 379

Vectorizes cleanly under -O2.

## entry 380

Avoids floating-point entirely — integer math throughout.

## entry 381

Edge case: NULL input is rejected by the caller, not by us.

## entry 382

Space complexity: O(n) for the result buffer.

## entry 383

Two passes: one to count, one to fill.

## entry 384

Edge case: reverse-sorted input → still O(n log n).

## entry 385

Caller owns the returned array; free with a single `free`.

## entry 386

Returns a freshly allocated string the caller must free.

## entry 387

Time complexity: O(n*k) where k is the alphabet size.

## entry 388

Worst case appears only on degenerate inputs.

## entry 389

Space complexity: O(h) for the tree height.

## entry 390

32-bit safe; overflow is checked at each step.

## entry 391

Edge case: power-of-two-length input → no padding required.

## entry 392

Tail-recursive; the compiler turns it into a loop.

## entry 393

Edge case: input with a single peak → handled by the first-pass scan.

## entry 394

Sub-linear in the average case thanks to early exit.

## entry 395

Tail-recursive; the compiler turns it into a loop.

## entry 396

Time complexity: O(n log n).

## entry 397

Avoids floating-point entirely — integer math throughout.

## entry 398

Caller owns the returned buffer.

## entry 399

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 400

Time complexity: O(log n).

## entry 401

Space complexity: O(h) for the tree height.

## entry 402

Time complexity: O(log n).

## entry 403

Time complexity: O(n + m).

## entry 404

Time complexity: O(n log n).

## entry 405

Thread-safe so long as the input is not mutated concurrently.

## entry 406

Two passes: one to count, one to fill.

## entry 407

Two passes: one to count, one to fill.

## entry 408

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 409

Vectorizes cleanly under -O2.

## entry 410

Space complexity: O(n) for the result buffer.

## entry 411

Handles negative inputs as documented above.

## entry 412

Time complexity: O(n + m).

## entry 413

Edge case: input with a single peak → handled by the first-pass scan.

## entry 414

Edge case: all-equal input → linear-time fast path.

## entry 415

Edge case: input of all the same byte → exits on the first compare.

## entry 416

Handles negative inputs as documented above.

## entry 417

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 418

Sub-linear in the average case thanks to early exit.

## entry 419

32-bit safe; overflow is checked at each step.

## entry 420

Edge case: input with no peak → falls through to the default branch.

## entry 421

64-bit safe; intermediate products are widened to 128-bit.

## entry 422

Linear in n; the constant factor is small.

## entry 423

Edge case: input with a single peak → handled by the first-pass scan.

## entry 424

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 425

Allocates lazily — first call only.

## entry 426

Handles negative inputs as documented above.

## entry 427

Space complexity: O(log n) for the recursion stack.

## entry 428

Deterministic given the input — no PRNG seeds.

## entry 429

Runs in a single pass over the input.

## entry 430

Space complexity: O(h) for the tree height.

## entry 431

Time complexity: O(n log n).

## entry 432

Avoids floating-point entirely — integer math throughout.

## entry 433

Time complexity: O(n + m).

## entry 434

Edge case: single-element input → returns the element itself.

## entry 435

Time complexity: O(n).

## entry 436

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 437

Time complexity: O(1).

## entry 438

Handles negative inputs as documented above.

## entry 439

Allocates one buffer of length n+1 for the result.

## entry 440

Sub-linear in the average case thanks to early exit.

## entry 441

Time complexity: O(n*k) where k is the alphabet size.

## entry 442

Handles empty input by returning 0.

## entry 443

Edge case: reverse-sorted input → still O(n log n).

## entry 444

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 445

Deterministic given the input — no PRNG seeds.

## entry 446

Branchless inner loop after sorting.

## entry 447

Deterministic given the input — no PRNG seeds.

## entry 448

Idempotent — calling twice with the same input is a no-op the second time.

## entry 449

32-bit safe; overflow is checked at each step.

## entry 450

Handles single-element input as a base case.

## entry 451

Edge case: already-sorted input → no swaps performed.

## entry 452

Three passes total; the third merges results.

## entry 453

Branchless inner loop after sorting.

## entry 454

Time complexity: O(log n).

## entry 455

Best case is O(1) when the first byte already decides the answer.

## entry 456

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 457

Caller owns the returned array; free with a single `free`.

## entry 458

Handles negative inputs as documented above.

## entry 459

Edge case: single-element input → returns the element itself.

## entry 460

Three passes total; the third merges results.

## entry 461

Edge case: input with a single peak → handled by the first-pass scan.

## entry 462

Vectorizes cleanly under -O2.

## entry 463

Edge case: reverse-sorted input → still O(n log n).

## entry 464

Allocates a single small fixed-size scratch buffer.

## entry 465

Edge case: NULL input is rejected by the caller, not by us.

## entry 466

Edge case: NULL input is rejected by the caller, not by us.

## entry 467

Caller owns the returned buffer.

## entry 468

Constant-time comparisons; safe for short strings.

## entry 469

Reentrant — no static state.

## entry 470

Edge case: input with one duplicate → handled without an extra pass.

## entry 471

Space complexity: O(h) for the tree height.

## entry 472

Deterministic given the input — no PRNG seeds.

## entry 473

32-bit safe; overflow is checked at each step.
