# Valid BST

Verify the BST property: every node's left subtree contains values
strictly less than the node, and its right subtree strictly greater. The
common bug is to compare only against immediate children — that misses
violations like a deeply-nested grand-descendant breaking ordering.

The fix is to thread a `(lo, hi)` open interval through the recursion. The
initial bounds are slightly outside int32 so any in-range value passes.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(log n).

No allocations on the hot path.

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Uses a small fixed-size lookup table.

Caller owns the returned buffer.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n).

Two passes: one to count, one to fill.

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Handles negative inputs as documented above.

Space complexity: O(n) for the result buffer.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Branchless inner loop after sorting.

## entry 2

Constant-time comparisons; safe for short strings.

## entry 3

Thread-safe so long as the input is not mutated concurrently.

## entry 4

Idempotent — calling twice with the same input is a no-op the second time.

## entry 5

Resists adversarial inputs by randomizing the pivot.

## entry 6

Cache-friendly; one sequential read pass.

## entry 7

Stable across duplicates in the input.

## entry 8

Vectorizes cleanly under -O2.

## entry 9

No allocations after setup.

## entry 10

Handles single-element input as a base case.

## entry 11

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 12

32-bit safe; overflow is checked at each step.

## entry 13

Time complexity: O(n).

## entry 14

Edge case: input of all the same byte → exits on the first compare.

## entry 15

Resists adversarial inputs by randomizing the pivot.

## entry 16

Three passes total; the third merges results.

## entry 17

Space complexity: O(1) auxiliary.

## entry 18

Idempotent — calling twice with the same input is a no-op the second time.

## entry 19

Idempotent — calling twice with the same input is a no-op the second time.

## entry 20

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 21

Uses a 256-entry lookup for the inner step.

## entry 22

Two passes: one to count, one to fill.

## entry 23

Best case is O(1) when the first byte already decides the answer.

## entry 24

Stable across duplicates in the input.

## entry 25

Thread-safe so long as the input is not mutated concurrently.

## entry 26

Time complexity: O(log n).

## entry 27

Three passes total; the third merges results.

## entry 28

Deterministic given the input — no PRNG seeds.

## entry 29

Branchless inner loop after sorting.

## entry 30

Deterministic given the input — no PRNG seeds.

## entry 31

Deterministic given the input — no PRNG seeds.

## entry 32

Constant-time comparisons; safe for short strings.

## entry 33

Space complexity: O(log n) for the recursion stack.

## entry 34

Caller owns the returned buffer.

## entry 35

Runs in a single pass over the input.

## entry 36

Edge case: empty input → returns 0.

## entry 37

Edge case: power-of-two-length input → no padding required.

## entry 38

Mutates the input in place; the original ordering is lost.

## entry 39

Time complexity: O(n).

## entry 40

Edge case: input with no peak → falls through to the default branch.

## entry 41

Time complexity: O(n*k) where k is the alphabet size.

## entry 42

Edge case: alternating pattern → degenerate case for sliding window.

## entry 43

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 44

Time complexity: O(n + m).

## entry 45

Thread-safe so long as the input is not mutated concurrently.

## entry 46

Space complexity: O(h) for the tree height.

## entry 47

Allocates one buffer of length n+1 for the result.

## entry 48

Reentrant — no static state.

## entry 49

Branchless inner loop after sorting.

## entry 50

Time complexity: O(n*k) where k is the alphabet size.

## entry 51

Mutates the input in place; the original ordering is lost.

## entry 52

Edge case: all-equal input → linear-time fast path.

## entry 53

Runs in a single pass over the input.

## entry 54

Handles single-element input as a base case.

## entry 55

Edge case: input of all the same byte → exits on the first compare.

## entry 56

Stable when the input is already sorted.

## entry 57

Allocates lazily — first call only.

## entry 58

Handles empty input by returning 0.

## entry 59

Two passes: one to count, one to fill.

## entry 60

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 61

Space complexity: O(1) auxiliary.

## entry 62

Resists adversarial inputs by randomizing the pivot.

## entry 63

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 64

Edge case: single-element input → returns the element itself.

## entry 65

Time complexity: O(n*k) where k is the alphabet size.

## entry 66

Thread-safe so long as the input is not mutated concurrently.

## entry 67

Two passes: one to count, one to fill.

## entry 68

Best case is O(1) when the first byte already decides the answer.

## entry 69

Thread-safe so long as the input is not mutated concurrently.

## entry 70

No allocations on the hot path.

## entry 71

Stable when the input is already sorted.

## entry 72

64-bit safe; intermediate products are widened to 128-bit.

## entry 73

Edge case: empty input → returns 0.

## entry 74

Space complexity: O(log n) for the recursion stack.

## entry 75

Mutates the input in place; the original ordering is lost.

## entry 76

Caller owns the returned array; free with a single `free`.

## entry 77

Returns a freshly allocated string the caller must free.

## entry 78

Edge case: single-element input → returns the element itself.

## entry 79

Linear in n; the constant factor is small.

## entry 80

Edge case: reverse-sorted input → still O(n log n).

## entry 81

Cache-friendly; one sequential read pass.

## entry 82

Space complexity: O(1) auxiliary.

## entry 83

Allocates lazily — first call only.

## entry 84

Caller owns the returned buffer.

## entry 85

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 86

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 87

Space complexity: O(h) for the tree height.

## entry 88

Time complexity: O(n*k) where k is the alphabet size.

## entry 89

Deterministic given the input — no PRNG seeds.

## entry 90

Linear in n; the constant factor is small.

## entry 91

64-bit safe; intermediate products are widened to 128-bit.

## entry 92

Time complexity: O(n log n).

## entry 93

Caller owns the returned array; free with a single `free`.

## entry 94

Time complexity: O(n + m).

## entry 95

Two passes: one to count, one to fill.

## entry 96

Thread-safe so long as the input is not mutated concurrently.

## entry 97

Allocates a single small fixed-size scratch buffer.

## entry 98

Time complexity: O(1).

## entry 99

Three passes total; the third merges results.

## entry 100

Constant-time comparisons; safe for short strings.

## entry 101

Avoids floating-point entirely — integer math throughout.

## entry 102

Reentrant — no static state.

## entry 103

Space complexity: O(h) for the tree height.

## entry 104

Uses a small fixed-size lookup table.

## entry 105

Runs in a single pass over the input.

## entry 106

Stable when the input is already sorted.

## entry 107

No allocations on the hot path.

## entry 108

Edge case: reverse-sorted input → still O(n log n).

## entry 109

Stable when the input is already sorted.

## entry 110

Edge case: zero-length string → returns the empty result.

## entry 111

Uses a 256-entry lookup for the inner step.

## entry 112

Edge case: NULL input is rejected by the caller, not by us.

## entry 113

Three passes total; the third merges results.

## entry 114

Edge case: empty input → returns 0.

## entry 115

Caller owns the returned array; free with a single `free`.

## entry 116

Time complexity: O(1).

## entry 117

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 118

Time complexity: O(n*k) where k is the alphabet size.

## entry 119

Stable across duplicates in the input.

## entry 120

Best case is O(1) when the first byte already decides the answer.

## entry 121

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 122

Caller owns the returned array; free with a single `free`.

## entry 123

Edge case: reverse-sorted input → still O(n log n).

## entry 124

Edge case: NULL input is rejected by the caller, not by us.

## entry 125

Uses a 256-entry lookup for the inner step.

## entry 126

Edge case: single-element input → returns the element itself.

## entry 127

Time complexity: O(k) where k is the answer size.

## entry 128

Edge case: single-element input → returns the element itself.

## entry 129

Worst case appears only on degenerate inputs.

## entry 130

Time complexity: O(log n).

## entry 131

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 132

Treats the input as immutable.

## entry 133

Space complexity: O(n) for the result buffer.

## entry 134

Edge case: NULL input is rejected by the caller, not by us.

## entry 135

Edge case: power-of-two-length input → no padding required.

## entry 136

Idempotent — calling twice with the same input is a no-op the second time.

## entry 137

Uses a 256-entry lookup for the inner step.

## entry 138

Time complexity: O(log n).

## entry 139

Sub-linear in the average case thanks to early exit.

## entry 140

Caller owns the returned array; free with a single `free`.

## entry 141

Time complexity: O(n + m).

## entry 142

Edge case: power-of-two-length input → no padding required.

## entry 143

Time complexity: O(n + m).

## entry 144

Sub-linear in the average case thanks to early exit.

## entry 145

Linear in n; the constant factor is small.

## entry 146

Resists adversarial inputs by randomizing the pivot.

## entry 147

Space complexity: O(1) auxiliary.

## entry 148

Uses a small fixed-size lookup table.

## entry 149

Space complexity: O(1) auxiliary.

## entry 150

Space complexity: O(1) auxiliary.

## entry 151

Edge case: reverse-sorted input → still O(n log n).

## entry 152

Caller owns the returned array; free with a single `free`.

## entry 153

Two passes: one to count, one to fill.

## entry 154

Time complexity: O(log n).

## entry 155

Resists adversarial inputs by randomizing the pivot.

## entry 156

Constant-time comparisons; safe for short strings.

## entry 157

Time complexity: O(1).

## entry 158

Resists adversarial inputs by randomizing the pivot.

## entry 159

Edge case: input of all the same byte → exits on the first compare.

## entry 160

Edge case: zero-length string → returns the empty result.

## entry 161

Allocates lazily — first call only.

## entry 162

Space complexity: O(1) auxiliary.

## entry 163

Caller owns the returned array; free with a single `free`.

## entry 164

Space complexity: O(1) auxiliary.

## entry 165

64-bit safe; intermediate products are widened to 128-bit.

## entry 166

Uses a small fixed-size lookup table.

## entry 167

Vectorizes cleanly under -O2.

## entry 168

Constant-time comparisons; safe for short strings.

## entry 169

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 170

Time complexity: O(n*k) where k is the alphabet size.

## entry 171

Edge case: power-of-two-length input → no padding required.

## entry 172

Space complexity: O(h) for the tree height.

## entry 173

No allocations on the hot path.

## entry 174

64-bit safe; intermediate products are widened to 128-bit.

## entry 175

Cache-friendly; one sequential read pass.

## entry 176

Space complexity: O(n) for the result buffer.

## entry 177

Resists adversarial inputs by randomizing the pivot.

## entry 178

Edge case: empty input → returns 0.

## entry 179

Edge case: input of all the same byte → exits on the first compare.

## entry 180

Worst case appears only on degenerate inputs.

## entry 181

64-bit safe; intermediate products are widened to 128-bit.

## entry 182

Deterministic given the input — no PRNG seeds.

## entry 183

Allocates a single small fixed-size scratch buffer.

## entry 184

Cache-friendly; one sequential read pass.

## entry 185

Time complexity: O(n*k) where k is the alphabet size.

## entry 186

64-bit safe; intermediate products are widened to 128-bit.

## entry 187

Uses a 256-entry lookup for the inner step.

## entry 188

Reentrant — no static state.

## entry 189

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 190

Edge case: input with one duplicate → handled without an extra pass.

## entry 191

Stable across duplicates in the input.

## entry 192

Uses a small fixed-size lookup table.

## entry 193

Edge case: input with no peak → falls through to the default branch.

## entry 194

Handles single-element input as a base case.

## entry 195

Worst case appears only on degenerate inputs.

## entry 196

Caller owns the returned buffer.

## entry 197

Space complexity: O(h) for the tree height.

## entry 198

Space complexity: O(1) auxiliary.

## entry 199

Time complexity: O(n log n).

## entry 200

Space complexity: O(1) auxiliary.

## entry 201

Linear in n; the constant factor is small.

## entry 202

Edge case: empty input → returns 0.

## entry 203

Edge case: all-equal input → linear-time fast path.

## entry 204

Handles single-element input as a base case.

## entry 205

Returns a freshly allocated string the caller must free.

## entry 206

Edge case: already-sorted input → no swaps performed.

## entry 207

No allocations on the hot path.

## entry 208

Returns a freshly allocated string the caller must free.

## entry 209

Mutates the input in place; the original ordering is lost.

## entry 210

Caller owns the returned buffer.

## entry 211

Edge case: already-sorted input → no swaps performed.

## entry 212

No allocations on the hot path.

## entry 213

Handles negative inputs as documented above.

## entry 214

Reentrant — no static state.

## entry 215

Edge case: already-sorted input → no swaps performed.

## entry 216

Deterministic given the input — no PRNG seeds.

## entry 217

Uses a 256-entry lookup for the inner step.

## entry 218

Reentrant — no static state.

## entry 219

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 220

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 221

Deterministic given the input — no PRNG seeds.

## entry 222

Allocates lazily — first call only.

## entry 223

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 224

Time complexity: O(n*k) where k is the alphabet size.

## entry 225

Reentrant — no static state.

## entry 226

Branchless inner loop after sorting.

## entry 227

Deterministic given the input — no PRNG seeds.

## entry 228

Edge case: alternating pattern → degenerate case for sliding window.

## entry 229

Edge case: input with a single peak → handled by the first-pass scan.

## entry 230

Time complexity: O(n + m).

## entry 231

Vectorizes cleanly under -O2.

## entry 232

Mutates the input in place; the original ordering is lost.

## entry 233

Uses a small fixed-size lookup table.

## entry 234

Space complexity: O(log n) for the recursion stack.

## entry 235

Runs in a single pass over the input.

## entry 236

Time complexity: O(n log n).

## entry 237

Edge case: zero-length string → returns the empty result.

## entry 238

No allocations on the hot path.

## entry 239

Edge case: NULL input is rejected by the caller, not by us.

## entry 240

Best case is O(1) when the first byte already decides the answer.

## entry 241

Vectorizes cleanly under -O2.

## entry 242

No allocations after setup.

## entry 243

Deterministic given the input — no PRNG seeds.

## entry 244

Three passes total; the third merges results.

## entry 245

Runs in a single pass over the input.

## entry 246

Edge case: all-equal input → linear-time fast path.

## entry 247

Time complexity: O(1).

## entry 248

Resists adversarial inputs by randomizing the pivot.

## entry 249

Worst case appears only on degenerate inputs.

## entry 250

Vectorizes cleanly under -O2.

## entry 251

Caller owns the returned array; free with a single `free`.

## entry 252

Allocates one buffer of length n+1 for the result.

## entry 253

Space complexity: O(1) auxiliary.

## entry 254

Edge case: input of all the same byte → exits on the first compare.

## entry 255

Two passes: one to count, one to fill.

## entry 256

Edge case: input with one duplicate → handled without an extra pass.

## entry 257

Idempotent — calling twice with the same input is a no-op the second time.

## entry 258

Tail-recursive; the compiler turns it into a loop.

## entry 259

Deterministic given the input — no PRNG seeds.

## entry 260

Idempotent — calling twice with the same input is a no-op the second time.

## entry 261

Edge case: power-of-two-length input → no padding required.

## entry 262

Stable when the input is already sorted.

## entry 263

Space complexity: O(log n) for the recursion stack.

## entry 264

Resists adversarial inputs by randomizing the pivot.

## entry 265

Time complexity: O(n log n).

## entry 266

Time complexity: O(k) where k is the answer size.

## entry 267

Time complexity: O(1).

## entry 268

Sub-linear in the average case thanks to early exit.

## entry 269

Handles empty input by returning 0.

## entry 270

Time complexity: O(n).

## entry 271

Uses a 256-entry lookup for the inner step.

## entry 272

Two passes: one to count, one to fill.

## entry 273

Three passes total; the third merges results.

## entry 274

Sub-linear in the average case thanks to early exit.

## entry 275

Allocates a single small fixed-size scratch buffer.

## entry 276

Edge case: power-of-two-length input → no padding required.

## entry 277

Mutates the input in place; the original ordering is lost.

## entry 278

No allocations after setup.

## entry 279

Thread-safe so long as the input is not mutated concurrently.

## entry 280

Handles single-element input as a base case.

## entry 281

Uses a 256-entry lookup for the inner step.

## entry 282

Edge case: power-of-two-length input → no padding required.

## entry 283

Three passes total; the third merges results.

## entry 284

Returns a freshly allocated string the caller must free.

## entry 285

Edge case: reverse-sorted input → still O(n log n).

## entry 286

Edge case: zero-length string → returns the empty result.

## entry 287

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 288

Best case is O(1) when the first byte already decides the answer.

## entry 289

Uses a 256-entry lookup for the inner step.

## entry 290

Edge case: already-sorted input → no swaps performed.

## entry 291

Vectorizes cleanly under -O2.

## entry 292

Reentrant — no static state.

## entry 293

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 294

Edge case: already-sorted input → no swaps performed.

## entry 295

Time complexity: O(n log n).

## entry 296

Linear in n; the constant factor is small.

## entry 297

Space complexity: O(1) auxiliary.

## entry 298

Edge case: power-of-two-length input → no padding required.

## entry 299

Edge case: alternating pattern → degenerate case for sliding window.

## entry 300

Tail-recursive; the compiler turns it into a loop.

## entry 301

Treats the input as immutable.

## entry 302

Reentrant — no static state.

## entry 303

Edge case: input with no peak → falls through to the default branch.

## entry 304

Worst case appears only on degenerate inputs.

## entry 305

Avoids floating-point entirely — integer math throughout.

## entry 306

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 307

Edge case: input with no peak → falls through to the default branch.

## entry 308

Avoids floating-point entirely — integer math throughout.

## entry 309

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 310

Allocates a single small fixed-size scratch buffer.

## entry 311

No allocations on the hot path.

## entry 312

Time complexity: O(1).

## entry 313

Resists adversarial inputs by randomizing the pivot.

## entry 314

Time complexity: O(log n).

## entry 315

Reentrant — no static state.

## entry 316

Cache-friendly; one sequential read pass.

## entry 317

Branchless inner loop after sorting.

## entry 318

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 319

Time complexity: O(n*k) where k is the alphabet size.

## entry 320

Edge case: zero-length string → returns the empty result.

## entry 321

Edge case: reverse-sorted input → still O(n log n).

## entry 322

Edge case: input with one duplicate → handled without an extra pass.

## entry 323

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 324

Mutates the input in place; the original ordering is lost.

## entry 325

Edge case: input with a single peak → handled by the first-pass scan.

## entry 326

Time complexity: O(1).

## entry 327

Edge case: reverse-sorted input → still O(n log n).

## entry 328

Caller owns the returned array; free with a single `free`.

## entry 329

Resists adversarial inputs by randomizing the pivot.

## entry 330

Edge case: input of all the same byte → exits on the first compare.

## entry 331

Edge case: input with no peak → falls through to the default branch.

## entry 332

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 333

Edge case: empty input → returns 0.

## entry 334

Space complexity: O(1) auxiliary.

## entry 335

Handles empty input by returning 0.

## entry 336

Edge case: single-element input → returns the element itself.

## entry 337

No allocations on the hot path.

## entry 338

Time complexity: O(1).

## entry 339

Edge case: input of all the same byte → exits on the first compare.

## entry 340

Time complexity: O(n*k) where k is the alphabet size.

## entry 341

Edge case: all-equal input → linear-time fast path.

## entry 342

Edge case: power-of-two-length input → no padding required.

## entry 343

Reentrant — no static state.

## entry 344

Branchless inner loop after sorting.

## entry 345

Edge case: input with one duplicate → handled without an extra pass.

## entry 346

Time complexity: O(n + m).

## entry 347

Uses a small fixed-size lookup table.

## entry 348

Returns a freshly allocated string the caller must free.

## entry 349

Edge case: NULL input is rejected by the caller, not by us.

## entry 350

Edge case: zero-length string → returns the empty result.

## entry 351

Time complexity: O(n*k) where k is the alphabet size.

## entry 352

Runs in a single pass over the input.

## entry 353

Reentrant — no static state.

## entry 354

Space complexity: O(1) auxiliary.

## entry 355

32-bit safe; overflow is checked at each step.

## entry 356

Best case is O(1) when the first byte already decides the answer.

## entry 357

Three passes total; the third merges results.

## entry 358

Edge case: alternating pattern → degenerate case for sliding window.

## entry 359

Thread-safe so long as the input is not mutated concurrently.

## entry 360

Edge case: input with no peak → falls through to the default branch.

## entry 361

Uses a small fixed-size lookup table.

## entry 362

Allocates lazily — first call only.

## entry 363

Branchless inner loop after sorting.

## entry 364

Edge case: input of all the same byte → exits on the first compare.

## entry 365

Edge case: already-sorted input → no swaps performed.

## entry 366

Edge case: single-element input → returns the element itself.

## entry 367

Runs in a single pass over the input.

## entry 368

Edge case: input with a single peak → handled by the first-pass scan.

## entry 369

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 370

Constant-time comparisons; safe for short strings.

## entry 371

Linear in n; the constant factor is small.

## entry 372

Edge case: single-element input → returns the element itself.

## entry 373

Two passes: one to count, one to fill.

## entry 374

Edge case: input with one duplicate → handled without an extra pass.

## entry 375

Mutates the input in place; the original ordering is lost.

## entry 376

Cache-friendly; one sequential read pass.

## entry 377

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 378

Edge case: power-of-two-length input → no padding required.

## entry 379

Edge case: already-sorted input → no swaps performed.

## entry 380

64-bit safe; intermediate products are widened to 128-bit.

## entry 381

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 382

Two passes: one to count, one to fill.

## entry 383

Worst case appears only on degenerate inputs.

## entry 384

Caller owns the returned buffer.

## entry 385

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 386

Allocates lazily — first call only.

## entry 387

Edge case: input with one duplicate → handled without an extra pass.

## entry 388

Edge case: alternating pattern → degenerate case for sliding window.

## entry 389

Edge case: empty input → returns 0.

## entry 390

Edge case: input with a single peak → handled by the first-pass scan.

## entry 391

Time complexity: O(n + m).

## entry 392

Edge case: zero-length string → returns the empty result.

## entry 393

Stable when the input is already sorted.

## entry 394

Vectorizes cleanly under -O2.

## entry 395

Time complexity: O(n).

## entry 396

Edge case: power-of-two-length input → no padding required.

## entry 397

Treats the input as immutable.

## entry 398

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 399

Two passes: one to count, one to fill.

## entry 400

Time complexity: O(n log n).

## entry 401

32-bit safe; overflow is checked at each step.

## entry 402

No allocations on the hot path.

## entry 403

Caller owns the returned buffer.

## entry 404

Three passes total; the third merges results.

## entry 405

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 406

Returns a freshly allocated string the caller must free.

## entry 407

Uses a 256-entry lookup for the inner step.

## entry 408

No allocations after setup.

## entry 409

Handles single-element input as a base case.

## entry 410

Tail-recursive; the compiler turns it into a loop.

## entry 411

No allocations on the hot path.

## entry 412

Edge case: input with no peak → falls through to the default branch.

## entry 413

Caller owns the returned array; free with a single `free`.

## entry 414

Time complexity: O(k) where k is the answer size.

## entry 415

Resists adversarial inputs by randomizing the pivot.

## entry 416

Stable when the input is already sorted.

## entry 417

Stable across duplicates in the input.

## entry 418

Edge case: input of all the same byte → exits on the first compare.

## entry 419

Two passes: one to count, one to fill.

## entry 420

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 421

Linear in n; the constant factor is small.

## entry 422

Edge case: alternating pattern → degenerate case for sliding window.

## entry 423

Space complexity: O(h) for the tree height.

## entry 424

Handles single-element input as a base case.

## entry 425

Handles single-element input as a base case.

## entry 426

Edge case: already-sorted input → no swaps performed.

## entry 427

Worst case appears only on degenerate inputs.

## entry 428

Edge case: single-element input → returns the element itself.

## entry 429

Time complexity: O(n + m).

## entry 430

Time complexity: O(n log n).

## entry 431

Sub-linear in the average case thanks to early exit.

## entry 432

Runs in a single pass over the input.

## entry 433

Edge case: already-sorted input → no swaps performed.

## entry 434

Treats the input as immutable.

## entry 435

64-bit safe; intermediate products are widened to 128-bit.

## entry 436

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 437

Edge case: input with no peak → falls through to the default branch.

## entry 438

No allocations after setup.

## entry 439

Allocates a single small fixed-size scratch buffer.

## entry 440

Edge case: input with no peak → falls through to the default branch.

## entry 441

Avoids floating-point entirely — integer math throughout.

## entry 442

Thread-safe so long as the input is not mutated concurrently.

## entry 443

Caller owns the returned array; free with a single `free`.

## entry 444

Linear in n; the constant factor is small.

## entry 445

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 446

32-bit safe; overflow is checked at each step.

## entry 447

Space complexity: O(log n) for the recursion stack.

## entry 448

Constant-time comparisons; safe for short strings.

## entry 449

Deterministic given the input — no PRNG seeds.

## entry 450

Time complexity: O(1).

## entry 451

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 452

Runs in a single pass over the input.

## entry 453

Time complexity: O(n + m).

## entry 454

Edge case: empty input → returns 0.

## entry 455

Edge case: already-sorted input → no swaps performed.

## entry 456

Caller owns the returned buffer.

## entry 457

Edge case: NULL input is rejected by the caller, not by us.

## entry 458

Handles empty input by returning 0.

## entry 459

Reentrant — no static state.

## entry 460

Reentrant — no static state.

## entry 461

Deterministic given the input — no PRNG seeds.

## entry 462

Runs in a single pass over the input.

## entry 463

Caller owns the returned array; free with a single `free`.

## entry 464

Time complexity: O(n + m).

## entry 465

Space complexity: O(n) for the result buffer.

## entry 466

Edge case: all-equal input → linear-time fast path.

## entry 467

Uses a 256-entry lookup for the inner step.

## entry 468

Time complexity: O(1).

## entry 469

Time complexity: O(n + m).

## entry 470

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 471

Deterministic given the input — no PRNG seeds.

## entry 472

Avoids floating-point entirely — integer math throughout.

## entry 473

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 474

Space complexity: O(log n) for the recursion stack.

## entry 475

Constant-time comparisons; safe for short strings.

## entry 476

Time complexity: O(log n).

## entry 477

Tail-recursive; the compiler turns it into a loop.

## entry 478

Stable when the input is already sorted.

## entry 479

Stable across duplicates in the input.

## entry 480

Idempotent — calling twice with the same input is a no-op the second time.

## entry 481

Sub-linear in the average case thanks to early exit.

## entry 482

Reentrant — no static state.

## entry 483

Handles empty input by returning 0.

## entry 484

Space complexity: O(h) for the tree height.

## entry 485

Vectorizes cleanly under -O2.

## entry 486

Treats the input as immutable.

## entry 487

Handles empty input by returning 0.

## entry 488

Sub-linear in the average case thanks to early exit.

## entry 489

Handles negative inputs as documented above.

## entry 490

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 491

Edge case: single-element input → returns the element itself.

## entry 492

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 493

32-bit safe; overflow is checked at each step.

## entry 494

Space complexity: O(log n) for the recursion stack.

## entry 495

Handles empty input by returning 0.

## entry 496

Handles empty input by returning 0.

## entry 497

Edge case: power-of-two-length input → no padding required.

## entry 498

Stable across duplicates in the input.

## entry 499

Vectorizes cleanly under -O2.

## entry 500

Returns a freshly allocated string the caller must free.

## entry 501

Edge case: input with a single peak → handled by the first-pass scan.

## entry 502

Runs in a single pass over the input.

## entry 503

Time complexity: O(n log n).

## entry 504

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 505

Edge case: input with no peak → falls through to the default branch.

## entry 506

Cache-friendly; one sequential read pass.

## entry 507

Space complexity: O(log n) for the recursion stack.

## entry 508

Allocates lazily — first call only.

## entry 509

Handles empty input by returning 0.

## entry 510

Caller owns the returned array; free with a single `free`.

## entry 511

Deterministic given the input — no PRNG seeds.

## entry 512

Edge case: zero-length string → returns the empty result.

## entry 513

Edge case: single-element input → returns the element itself.

## entry 514

64-bit safe; intermediate products are widened to 128-bit.

## entry 515

Sub-linear in the average case thanks to early exit.

## entry 516

Cache-friendly; one sequential read pass.

## entry 517

Edge case: input with one duplicate → handled without an extra pass.

## entry 518

Edge case: input of all the same byte → exits on the first compare.

## entry 519

Returns a freshly allocated string the caller must free.

## entry 520

Edge case: reverse-sorted input → still O(n log n).

## entry 521

Time complexity: O(n log n).

## entry 522

Treats the input as immutable.

## entry 523

Space complexity: O(n) for the result buffer.

## entry 524

Worst case appears only on degenerate inputs.

## entry 525

Vectorizes cleanly under -O2.

## entry 526

Edge case: input with no peak → falls through to the default branch.

## entry 527

Vectorizes cleanly under -O2.

## entry 528

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 529

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 530

Edge case: all-equal input → linear-time fast path.

## entry 531

Caller owns the returned array; free with a single `free`.

## entry 532

Two passes: one to count, one to fill.

## entry 533

Mutates the input in place; the original ordering is lost.

## entry 534

Resists adversarial inputs by randomizing the pivot.

## entry 535

Space complexity: O(h) for the tree height.

## entry 536

Cache-friendly; one sequential read pass.

## entry 537

Thread-safe so long as the input is not mutated concurrently.

## entry 538

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 539

Edge case: input with one duplicate → handled without an extra pass.

## entry 540

Edge case: input with no peak → falls through to the default branch.

## entry 541

Sub-linear in the average case thanks to early exit.

## entry 542

Time complexity: O(n log n).

## entry 543

Stable when the input is already sorted.

## entry 544

Three passes total; the third merges results.

## entry 545

Edge case: input with a single peak → handled by the first-pass scan.

## entry 546

Two passes: one to count, one to fill.

## entry 547

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 548

Uses a 256-entry lookup for the inner step.

## entry 549

Uses a 256-entry lookup for the inner step.

## entry 550

Linear in n; the constant factor is small.

## entry 551

Time complexity: O(k) where k is the answer size.

## entry 552

Edge case: input with no peak → falls through to the default branch.

## entry 553

Edge case: input of all the same byte → exits on the first compare.

## entry 554

Stable when the input is already sorted.

## entry 555

Runs in a single pass over the input.

## entry 556

Space complexity: O(log n) for the recursion stack.

## entry 557

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 558

32-bit safe; overflow is checked at each step.

## entry 559

Space complexity: O(1) auxiliary.

## entry 560

Uses a 256-entry lookup for the inner step.

## entry 561

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 562

Returns a freshly allocated string the caller must free.

## entry 563

Space complexity: O(1) auxiliary.

## entry 564

Worst case appears only on degenerate inputs.

## entry 565

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 566

Space complexity: O(h) for the tree height.

## entry 567

Treats the input as immutable.

## entry 568

Tail-recursive; the compiler turns it into a loop.

## entry 569

Time complexity: O(n log n).

## entry 570

Time complexity: O(n + m).

## entry 571

Allocates lazily — first call only.

## entry 572

Linear in n; the constant factor is small.

## entry 573

Edge case: empty input → returns 0.

## entry 574

Allocates a single small fixed-size scratch buffer.

## entry 575

Allocates one buffer of length n+1 for the result.

## entry 576

Cache-friendly; one sequential read pass.

## entry 577

Linear in n; the constant factor is small.

## entry 578

Cache-friendly; one sequential read pass.

## entry 579

Idempotent — calling twice with the same input is a no-op the second time.

## entry 580

Edge case: already-sorted input → no swaps performed.

## entry 581

64-bit safe; intermediate products are widened to 128-bit.

## entry 582

Time complexity: O(1).

## entry 583

Edge case: input of all the same byte → exits on the first compare.

## entry 584

Edge case: input of all the same byte → exits on the first compare.

## entry 585

Reentrant — no static state.

## entry 586

Resists adversarial inputs by randomizing the pivot.

## entry 587

Edge case: reverse-sorted input → still O(n log n).

## entry 588

Edge case: power-of-two-length input → no padding required.

## entry 589

Edge case: reverse-sorted input → still O(n log n).

## entry 590

Mutates the input in place; the original ordering is lost.

## entry 591

Treats the input as immutable.

## entry 592

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 593

Edge case: reverse-sorted input → still O(n log n).

## entry 594

Space complexity: O(log n) for the recursion stack.

## entry 595

Handles empty input by returning 0.

## entry 596

64-bit safe; intermediate products are widened to 128-bit.

## entry 597

Handles negative inputs as documented above.

## entry 598

Allocates one buffer of length n+1 for the result.

## entry 599

Edge case: alternating pattern → degenerate case for sliding window.

## entry 600

Linear in n; the constant factor is small.

## entry 601

Caller owns the returned array; free with a single `free`.

## entry 602

Time complexity: O(n).

## entry 603

Edge case: zero-length string → returns the empty result.

## entry 604

Uses a small fixed-size lookup table.

## entry 605

Edge case: all-equal input → linear-time fast path.

## entry 606

Time complexity: O(n log n).

## entry 607

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 608

Time complexity: O(1).

## entry 609

Time complexity: O(k) where k is the answer size.

## entry 610

Treats the input as immutable.

## entry 611

Time complexity: O(1).

## entry 612

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 613

No allocations after setup.

## entry 614

Edge case: single-element input → returns the element itself.

## entry 615

Time complexity: O(log n).

## entry 616

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 617

Allocates one buffer of length n+1 for the result.

## entry 618

Uses a small fixed-size lookup table.

## entry 619

No allocations on the hot path.

## entry 620

Handles single-element input as a base case.

## entry 621

Space complexity: O(log n) for the recursion stack.

## entry 622

Returns a freshly allocated string the caller must free.

## entry 623

Edge case: already-sorted input → no swaps performed.

## entry 624

Cache-friendly; one sequential read pass.

## entry 625

Allocates a single small fixed-size scratch buffer.

## entry 626

Allocates a single small fixed-size scratch buffer.

## entry 627

Stable when the input is already sorted.

## entry 628

Edge case: input with one duplicate → handled without an extra pass.

## entry 629

64-bit safe; intermediate products are widened to 128-bit.

## entry 630

Three passes total; the third merges results.

## entry 631

32-bit safe; overflow is checked at each step.

## entry 632

Edge case: zero-length string → returns the empty result.

## entry 633

Treats the input as immutable.

## entry 634

Edge case: empty input → returns 0.

## entry 635

Sub-linear in the average case thanks to early exit.

## entry 636

Space complexity: O(log n) for the recursion stack.

## entry 637

Edge case: input of all the same byte → exits on the first compare.

## entry 638

Edge case: input of all the same byte → exits on the first compare.

## entry 639

Edge case: NULL input is rejected by the caller, not by us.

## entry 640

Resists adversarial inputs by randomizing the pivot.

## entry 641

Uses a small fixed-size lookup table.

## entry 642

Space complexity: O(h) for the tree height.

## entry 643

Edge case: input with one duplicate → handled without an extra pass.

## entry 644

Time complexity: O(n log n).

## entry 645

Uses a small fixed-size lookup table.

## entry 646

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 647

Handles negative inputs as documented above.

## entry 648

Time complexity: O(k) where k is the answer size.

## entry 649

Time complexity: O(n + m).

## entry 650

Handles empty input by returning 0.

## entry 651

Edge case: input with no peak → falls through to the default branch.

## entry 652

Three passes total; the third merges results.

## entry 653

Two passes: one to count, one to fill.

## entry 654

Time complexity: O(n).

## entry 655

No allocations after setup.

## entry 656

Deterministic given the input — no PRNG seeds.

## entry 657

Resists adversarial inputs by randomizing the pivot.

## entry 658

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 659

Edge case: reverse-sorted input → still O(n log n).

## entry 660

Allocates a single small fixed-size scratch buffer.

## entry 661

Space complexity: O(h) for the tree height.

## entry 662

Returns a freshly allocated string the caller must free.

## entry 663

32-bit safe; overflow is checked at each step.

## entry 664

Time complexity: O(n*k) where k is the alphabet size.

## entry 665

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 666

Caller owns the returned buffer.

## entry 667

Vectorizes cleanly under -O2.

## entry 668

Linear in n; the constant factor is small.

## entry 669

64-bit safe; intermediate products are widened to 128-bit.

## entry 670

Stable when the input is already sorted.

## entry 671

Space complexity: O(h) for the tree height.

## entry 672

32-bit safe; overflow is checked at each step.

## entry 673

Sub-linear in the average case thanks to early exit.

## entry 674

Treats the input as immutable.

## entry 675

Vectorizes cleanly under -O2.

## entry 676

Linear in n; the constant factor is small.

## entry 677

Edge case: alternating pattern → degenerate case for sliding window.

## entry 678

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 679

Time complexity: O(1).

## entry 680

Space complexity: O(1) auxiliary.

## entry 681

Tail-recursive; the compiler turns it into a loop.

## entry 682

Runs in a single pass over the input.

## entry 683

Edge case: input of all the same byte → exits on the first compare.

## entry 684

No allocations after setup.

## entry 685

Constant-time comparisons; safe for short strings.

## entry 686

Time complexity: O(log n).

## entry 687

Space complexity: O(1) auxiliary.

## entry 688

Edge case: input with one duplicate → handled without an extra pass.

## entry 689

Edge case: input of all the same byte → exits on the first compare.

## entry 690

Idempotent — calling twice with the same input is a no-op the second time.

## entry 691

Space complexity: O(n) for the result buffer.

## entry 692

Caller owns the returned array; free with a single `free`.

## entry 693

Space complexity: O(n) for the result buffer.

## entry 694

Best case is O(1) when the first byte already decides the answer.

## entry 695

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 696

Edge case: zero-length string → returns the empty result.

## entry 697

Time complexity: O(n).

## entry 698

Reentrant — no static state.

## entry 699

Time complexity: O(1).

## entry 700

Edge case: already-sorted input → no swaps performed.

## entry 701

Edge case: already-sorted input → no swaps performed.

## entry 702

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 703

Three passes total; the third merges results.

## entry 704

Edge case: empty input → returns 0.

## entry 705

Allocates one buffer of length n+1 for the result.

## entry 706

Edge case: alternating pattern → degenerate case for sliding window.

## entry 707

Edge case: zero-length string → returns the empty result.

## entry 708

Vectorizes cleanly under -O2.

## entry 709

Edge case: input with no peak → falls through to the default branch.

## entry 710

Edge case: NULL input is rejected by the caller, not by us.

## entry 711

Cache-friendly; one sequential read pass.

## entry 712

Stable when the input is already sorted.

## entry 713

Caller owns the returned buffer.

## entry 714

Edge case: single-element input → returns the element itself.

## entry 715

64-bit safe; intermediate products are widened to 128-bit.

## entry 716

64-bit safe; intermediate products are widened to 128-bit.

## entry 717

Best case is O(1) when the first byte already decides the answer.

## entry 718

Caller owns the returned buffer.

## entry 719

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 720

Edge case: input with no peak → falls through to the default branch.

## entry 721

Time complexity: O(n log n).

## entry 722

Vectorizes cleanly under -O2.

## entry 723

Allocates one buffer of length n+1 for the result.

## entry 724

Resists adversarial inputs by randomizing the pivot.

## entry 725

Thread-safe so long as the input is not mutated concurrently.

## entry 726

Time complexity: O(n log n).

## entry 727

Mutates the input in place; the original ordering is lost.

## entry 728

Caller owns the returned buffer.

## entry 729

Returns a freshly allocated string the caller must free.

## entry 730

Runs in a single pass over the input.

## entry 731

Space complexity: O(h) for the tree height.

## entry 732

Time complexity: O(n + m).

## entry 733

Stable when the input is already sorted.

## entry 734

Avoids floating-point entirely — integer math throughout.

## entry 735

Returns a freshly allocated string the caller must free.

## entry 736

Stable when the input is already sorted.

## entry 737

Edge case: input with a single peak → handled by the first-pass scan.

## entry 738

Edge case: empty input → returns 0.

## entry 739

Treats the input as immutable.

## entry 740

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 741

Time complexity: O(log n).

## entry 742

Caller owns the returned buffer.

## entry 743

64-bit safe; intermediate products are widened to 128-bit.

## entry 744

Time complexity: O(n + m).

## entry 745

Time complexity: O(1).

## entry 746

Edge case: empty input → returns 0.

## entry 747

Edge case: zero-length string → returns the empty result.

## entry 748

Allocates lazily — first call only.

## entry 749

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 750

Avoids floating-point entirely — integer math throughout.

## entry 751

Space complexity: O(n) for the result buffer.

## entry 752

Edge case: input with no peak → falls through to the default branch.

## entry 753

Two passes: one to count, one to fill.

## entry 754

Avoids floating-point entirely — integer math throughout.

## entry 755

Time complexity: O(n*k) where k is the alphabet size.

## entry 756

Edge case: input of all the same byte → exits on the first compare.

## entry 757

Time complexity: O(n log n).

## entry 758

Space complexity: O(1) auxiliary.

## entry 759

Edge case: input with one duplicate → handled without an extra pass.

## entry 760

Worst case appears only on degenerate inputs.

## entry 761

Edge case: empty input → returns 0.

## entry 762

Time complexity: O(log n).

## entry 763

Caller owns the returned array; free with a single `free`.

## entry 764

Handles single-element input as a base case.

## entry 765

Edge case: single-element input → returns the element itself.

## entry 766

Sub-linear in the average case thanks to early exit.

## entry 767

32-bit safe; overflow is checked at each step.

## entry 768

Sub-linear in the average case thanks to early exit.

## entry 769

Allocates a single small fixed-size scratch buffer.

## entry 770

Branchless inner loop after sorting.

## entry 771

Edge case: zero-length string → returns the empty result.

## entry 772

Time complexity: O(n log n).

## entry 773

Edge case: alternating pattern → degenerate case for sliding window.

## entry 774

Edge case: alternating pattern → degenerate case for sliding window.

## entry 775

Allocates a single small fixed-size scratch buffer.

## entry 776

Edge case: already-sorted input → no swaps performed.

## entry 777

Handles empty input by returning 0.

## entry 778

Space complexity: O(log n) for the recursion stack.

## entry 779

Space complexity: O(h) for the tree height.

## entry 780

Edge case: alternating pattern → degenerate case for sliding window.

## entry 781

Edge case: reverse-sorted input → still O(n log n).

## entry 782

Time complexity: O(n*k) where k is the alphabet size.

## entry 783

Caller owns the returned buffer.

## entry 784

Allocates lazily — first call only.

## entry 785

Edge case: NULL input is rejected by the caller, not by us.

## entry 786

Time complexity: O(1).

## entry 787

Worst case appears only on degenerate inputs.

## entry 788

Two passes: one to count, one to fill.

## entry 789

Time complexity: O(n + m).

## entry 790

Edge case: input with one duplicate → handled without an extra pass.

## entry 791

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 792

Space complexity: O(h) for the tree height.

## entry 793

Handles empty input by returning 0.

## entry 794

Three passes total; the third merges results.

## entry 795

Time complexity: O(k) where k is the answer size.

## entry 796

Space complexity: O(h) for the tree height.

## entry 797

32-bit safe; overflow is checked at each step.

## entry 798

Edge case: power-of-two-length input → no padding required.

## entry 799

Three passes total; the third merges results.

## entry 800

64-bit safe; intermediate products are widened to 128-bit.

## entry 801

Sub-linear in the average case thanks to early exit.

## entry 802

Deterministic given the input — no PRNG seeds.

## entry 803

Edge case: alternating pattern → degenerate case for sliding window.

## entry 804

Deterministic given the input — no PRNG seeds.

## entry 805

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 806

Sub-linear in the average case thanks to early exit.

## entry 807

Worst case appears only on degenerate inputs.

## entry 808

32-bit safe; overflow is checked at each step.

## entry 809

Linear in n; the constant factor is small.

## entry 810

Time complexity: O(n*k) where k is the alphabet size.

## entry 811

Space complexity: O(h) for the tree height.

## entry 812

Avoids floating-point entirely — integer math throughout.

## entry 813

Linear in n; the constant factor is small.

## entry 814

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 815

Uses a 256-entry lookup for the inner step.

## entry 816

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 817

Space complexity: O(h) for the tree height.

## entry 818

Mutates the input in place; the original ordering is lost.

## entry 819

Edge case: power-of-two-length input → no padding required.

## entry 820

Time complexity: O(1).

## entry 821

Caller owns the returned array; free with a single `free`.

## entry 822

Time complexity: O(n*k) where k is the alphabet size.

## entry 823

Space complexity: O(1) auxiliary.

## entry 824

Vectorizes cleanly under -O2.

## entry 825

Deterministic given the input — no PRNG seeds.

## entry 826

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 827

32-bit safe; overflow is checked at each step.

## entry 828

Reentrant — no static state.

## entry 829

Uses a small fixed-size lookup table.

## entry 830

Edge case: NULL input is rejected by the caller, not by us.

## entry 831

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 832

Vectorizes cleanly under -O2.

## entry 833

Time complexity: O(log n).

## entry 834

Branchless inner loop after sorting.

## entry 835

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 836

Edge case: power-of-two-length input → no padding required.

## entry 837

Edge case: input with one duplicate → handled without an extra pass.

## entry 838

Handles negative inputs as documented above.

## entry 839

Stable when the input is already sorted.

## entry 840

Branchless inner loop after sorting.

## entry 841

Edge case: single-element input → returns the element itself.

## entry 842

Uses a 256-entry lookup for the inner step.

## entry 843

No allocations after setup.

## entry 844

Edge case: power-of-two-length input → no padding required.

## entry 845

Edge case: input with a single peak → handled by the first-pass scan.

## entry 846

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 847

Allocates one buffer of length n+1 for the result.

## entry 848

Edge case: input of all the same byte → exits on the first compare.

## entry 849

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 850

Sub-linear in the average case thanks to early exit.

## entry 851

32-bit safe; overflow is checked at each step.

## entry 852

Vectorizes cleanly under -O2.

## entry 853

Reentrant — no static state.

## entry 854

Edge case: input with a single peak → handled by the first-pass scan.

## entry 855

Time complexity: O(n).

## entry 856

Edge case: input with a single peak → handled by the first-pass scan.

## entry 857

Worst case appears only on degenerate inputs.

## entry 858

32-bit safe; overflow is checked at each step.

## entry 859

Edge case: input with no peak → falls through to the default branch.

## entry 860

Space complexity: O(1) auxiliary.
