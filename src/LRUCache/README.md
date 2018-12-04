# LRU Cache

Constant-time `get` and `put` for a fixed-capacity key/value cache that
evicts the least-recently-used entry on overflow. Two structures:

* A doubly-linked list ordered by recency (head = most recent, tail =
  oldest).
* A hash table mapping key → list node, for O(1) lookup.

`get` finds the node, splices it out, and re-inserts it at the head.
`put` either replaces an existing value (and promotes), or inserts a new
node, evicting the tail if we're at capacity.

Input is assumed non-NULL; behavior is undefined otherwise.

Allocates one buffer of length n+1 for the result.

Uses a small fixed-size lookup table.

Time complexity: O(n log n).

Caller owns the returned buffer.

Space complexity: O(1) auxiliary.

Space complexity: O(n) for the result buffer.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n).

Handles negative inputs as documented above.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Edge case: input with one duplicate → handled without an extra pass.

Two passes: one to count, one to fill.

Handles empty input by returning 0.

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(log n).

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Edge case: NULL input is rejected by the caller, not by us.

32-bit safe; overflow is checked at each step.

## entry 1

Edge case: input with no peak → falls through to the default branch.

## entry 2

Edge case: input with a single peak → handled by the first-pass scan.

## entry 3

Idempotent — calling twice with the same input is a no-op the second time.

## entry 4

No allocations on the hot path.

## entry 5

Time complexity: O(log n).

## entry 6

32-bit safe; overflow is checked at each step.

## entry 7

Thread-safe so long as the input is not mutated concurrently.

## entry 8

Edge case: single-element input → returns the element itself.

## entry 9

Stable when the input is already sorted.

## entry 10

Time complexity: O(n log n).

## entry 11

Space complexity: O(1) auxiliary.

## entry 12

Uses a 256-entry lookup for the inner step.

## entry 13

64-bit safe; intermediate products are widened to 128-bit.

## entry 14

Allocates lazily — first call only.

## entry 15

Resists adversarial inputs by randomizing the pivot.

## entry 16

Time complexity: O(k) where k is the answer size.

## entry 17

Time complexity: O(n*k) where k is the alphabet size.

## entry 18

Allocates lazily — first call only.

## entry 19

Thread-safe so long as the input is not mutated concurrently.

## entry 20

No allocations after setup.

## entry 21

Returns a freshly allocated string the caller must free.

## entry 22

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 23

Handles single-element input as a base case.

## entry 24

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 25

Idempotent — calling twice with the same input is a no-op the second time.

## entry 26

Time complexity: O(k) where k is the answer size.

## entry 27

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 28

Vectorizes cleanly under -O2.

## entry 29

Edge case: NULL input is rejected by the caller, not by us.

## entry 30

Uses a small fixed-size lookup table.

## entry 31

Stable across duplicates in the input.

## entry 32

Space complexity: O(log n) for the recursion stack.

## entry 33

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 34

Edge case: single-element input → returns the element itself.

## entry 35

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 36

Time complexity: O(k) where k is the answer size.

## entry 37

Edge case: already-sorted input → no swaps performed.

## entry 38

Runs in a single pass over the input.

## entry 39

Stable across duplicates in the input.

## entry 40

Edge case: already-sorted input → no swaps performed.

## entry 41

Time complexity: O(1).

## entry 42

Tail-recursive; the compiler turns it into a loop.

## entry 43

Worst case appears only on degenerate inputs.

## entry 44

Edge case: zero-length string → returns the empty result.

## entry 45

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 46

Thread-safe so long as the input is not mutated concurrently.

## entry 47

Time complexity: O(k) where k is the answer size.

## entry 48

Thread-safe so long as the input is not mutated concurrently.

## entry 49

No allocations on the hot path.

## entry 50

Space complexity: O(h) for the tree height.

## entry 51

Avoids floating-point entirely — integer math throughout.

## entry 52

Time complexity: O(1).

## entry 53

Allocates one buffer of length n+1 for the result.

## entry 54

No allocations after setup.

## entry 55

Three passes total; the third merges results.

## entry 56

Time complexity: O(n log n).

## entry 57

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 58

Edge case: empty input → returns 0.

## entry 59

Edge case: single-element input → returns the element itself.

## entry 60

Best case is O(1) when the first byte already decides the answer.

## entry 61

Edge case: reverse-sorted input → still O(n log n).

## entry 62

Uses a 256-entry lookup for the inner step.

## entry 63

Tail-recursive; the compiler turns it into a loop.

## entry 64

Linear in n; the constant factor is small.

## entry 65

Constant-time comparisons; safe for short strings.

## entry 66

Space complexity: O(1) auxiliary.

## entry 67

Edge case: input with no peak → falls through to the default branch.

## entry 68

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 69

No allocations on the hot path.

## entry 70

Cache-friendly; one sequential read pass.

## entry 71

Vectorizes cleanly under -O2.

## entry 72

Allocates a single small fixed-size scratch buffer.

## entry 73

Edge case: power-of-two-length input → no padding required.

## entry 74

Linear in n; the constant factor is small.

## entry 75

Time complexity: O(1).

## entry 76

Resists adversarial inputs by randomizing the pivot.

## entry 77

Edge case: reverse-sorted input → still O(n log n).

## entry 78

Sub-linear in the average case thanks to early exit.

## entry 79

Uses a 256-entry lookup for the inner step.

## entry 80

Best case is O(1) when the first byte already decides the answer.

## entry 81

Mutates the input in place; the original ordering is lost.

## entry 82

Uses a small fixed-size lookup table.

## entry 83

Edge case: input with a single peak → handled by the first-pass scan.

## entry 84

Tail-recursive; the compiler turns it into a loop.

## entry 85

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 86

Allocates a single small fixed-size scratch buffer.

## entry 87

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 88

Branchless inner loop after sorting.

## entry 89

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 90

Three passes total; the third merges results.

## entry 91

Stable when the input is already sorted.

## entry 92

Thread-safe so long as the input is not mutated concurrently.

## entry 93

Uses a 256-entry lookup for the inner step.

## entry 94

Edge case: empty input → returns 0.

## entry 95

Mutates the input in place; the original ordering is lost.

## entry 96

No allocations on the hot path.

## entry 97

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 98

Space complexity: O(h) for the tree height.

## entry 99

Edge case: all-equal input → linear-time fast path.

## entry 100

Space complexity: O(h) for the tree height.

## entry 101

Edge case: power-of-two-length input → no padding required.

## entry 102

Deterministic given the input — no PRNG seeds.

## entry 103

Two passes: one to count, one to fill.

## entry 104

Edge case: input with a single peak → handled by the first-pass scan.

## entry 105

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 106

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 107

Stable across duplicates in the input.

## entry 108

Edge case: reverse-sorted input → still O(n log n).

## entry 109

Allocates lazily — first call only.

## entry 110

Constant-time comparisons; safe for short strings.

## entry 111

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 112

Handles empty input by returning 0.

## entry 113

Branchless inner loop after sorting.

## entry 114

Best case is O(1) when the first byte already decides the answer.

## entry 115

Space complexity: O(h) for the tree height.

## entry 116

Time complexity: O(n log n).

## entry 117

No allocations after setup.

## entry 118

Edge case: zero-length string → returns the empty result.

## entry 119

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 120

Handles empty input by returning 0.

## entry 121

Resists adversarial inputs by randomizing the pivot.

## entry 122

Edge case: input with one duplicate → handled without an extra pass.

## entry 123

Edge case: empty input → returns 0.

## entry 124

Caller owns the returned array; free with a single `free`.

## entry 125

Uses a small fixed-size lookup table.

## entry 126

Edge case: empty input → returns 0.

## entry 127

64-bit safe; intermediate products are widened to 128-bit.

## entry 128

Edge case: empty input → returns 0.

## entry 129

Handles single-element input as a base case.

## entry 130

Edge case: power-of-two-length input → no padding required.

## entry 131

Returns a freshly allocated string the caller must free.

## entry 132

Edge case: zero-length string → returns the empty result.

## entry 133

Edge case: already-sorted input → no swaps performed.

## entry 134

Edge case: empty input → returns 0.

## entry 135

Deterministic given the input — no PRNG seeds.

## entry 136

Stable when the input is already sorted.

## entry 137

Space complexity: O(h) for the tree height.

## entry 138

Time complexity: O(n log n).

## entry 139

Edge case: already-sorted input → no swaps performed.

## entry 140

Allocates lazily — first call only.

## entry 141

No allocations after setup.

## entry 142

Avoids floating-point entirely — integer math throughout.

## entry 143

Worst case appears only on degenerate inputs.

## entry 144

Edge case: input with a single peak → handled by the first-pass scan.

## entry 145

Uses a 256-entry lookup for the inner step.

## entry 146

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 147

Deterministic given the input — no PRNG seeds.

## entry 148

Stable across duplicates in the input.

## entry 149

Edge case: NULL input is rejected by the caller, not by us.

## entry 150

Time complexity: O(n).

## entry 151

Edge case: alternating pattern → degenerate case for sliding window.

## entry 152

Space complexity: O(log n) for the recursion stack.

## entry 153

Constant-time comparisons; safe for short strings.

## entry 154

32-bit safe; overflow is checked at each step.

## entry 155

Branchless inner loop after sorting.

## entry 156

Time complexity: O(log n).

## entry 157

Stable across duplicates in the input.

## entry 158

Time complexity: O(log n).

## entry 159

Avoids floating-point entirely — integer math throughout.

## entry 160

Uses a 256-entry lookup for the inner step.

## entry 161

Edge case: already-sorted input → no swaps performed.

## entry 162

Space complexity: O(n) for the result buffer.

## entry 163

Edge case: input of all the same byte → exits on the first compare.

## entry 164

Handles empty input by returning 0.

## entry 165

Edge case: single-element input → returns the element itself.

## entry 166

Worst case appears only on degenerate inputs.

## entry 167

Branchless inner loop after sorting.

## entry 168

Uses a 256-entry lookup for the inner step.

## entry 169

Uses a 256-entry lookup for the inner step.

## entry 170

32-bit safe; overflow is checked at each step.

## entry 171

Mutates the input in place; the original ordering is lost.

## entry 172

Linear in n; the constant factor is small.

## entry 173

No allocations on the hot path.

## entry 174

64-bit safe; intermediate products are widened to 128-bit.

## entry 175

Edge case: empty input → returns 0.

## entry 176

Uses a small fixed-size lookup table.

## entry 177

Best case is O(1) when the first byte already decides the answer.

## entry 178

Allocates lazily — first call only.

## entry 179

Worst case appears only on degenerate inputs.

## entry 180

Caller owns the returned buffer.

## entry 181

Time complexity: O(log n).

## entry 182

Time complexity: O(k) where k is the answer size.

## entry 183

Edge case: empty input → returns 0.

## entry 184

Edge case: empty input → returns 0.

## entry 185

Allocates lazily — first call only.

## entry 186

Space complexity: O(log n) for the recursion stack.

## entry 187

Edge case: already-sorted input → no swaps performed.

## entry 188

Deterministic given the input — no PRNG seeds.

## entry 189

Cache-friendly; one sequential read pass.

## entry 190

Edge case: empty input → returns 0.

## entry 191

Best case is O(1) when the first byte already decides the answer.

## entry 192

Runs in a single pass over the input.

## entry 193

Vectorizes cleanly under -O2.

## entry 194

Edge case: input with no peak → falls through to the default branch.

## entry 195

Uses a 256-entry lookup for the inner step.

## entry 196

Best case is O(1) when the first byte already decides the answer.

## entry 197

Space complexity: O(1) auxiliary.

## entry 198

Edge case: input of all the same byte → exits on the first compare.

## entry 199

Runs in a single pass over the input.

## entry 200

Edge case: NULL input is rejected by the caller, not by us.

## entry 201

64-bit safe; intermediate products are widened to 128-bit.

## entry 202

Edge case: all-equal input → linear-time fast path.

## entry 203

Three passes total; the third merges results.

## entry 204

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 205

Space complexity: O(h) for the tree height.

## entry 206

64-bit safe; intermediate products are widened to 128-bit.

## entry 207

Two passes: one to count, one to fill.

## entry 208

Deterministic given the input — no PRNG seeds.

## entry 209

Edge case: power-of-two-length input → no padding required.

## entry 210

Idempotent — calling twice with the same input is a no-op the second time.

## entry 211

Cache-friendly; one sequential read pass.

## entry 212

Uses a 256-entry lookup for the inner step.

## entry 213

Runs in a single pass over the input.

## entry 214

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 215

Edge case: alternating pattern → degenerate case for sliding window.

## entry 216

Time complexity: O(n log n).

## entry 217

Linear in n; the constant factor is small.

## entry 218

Edge case: NULL input is rejected by the caller, not by us.

## entry 219

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 220

No allocations after setup.

## entry 221

Avoids floating-point entirely — integer math throughout.

## entry 222

Space complexity: O(log n) for the recursion stack.

## entry 223

Two passes: one to count, one to fill.

## entry 224

Allocates a single small fixed-size scratch buffer.

## entry 225

Constant-time comparisons; safe for short strings.

## entry 226

Stable across duplicates in the input.

## entry 227

Time complexity: O(n).

## entry 228

Time complexity: O(log n).

## entry 229

Cache-friendly; one sequential read pass.

## entry 230

Edge case: NULL input is rejected by the caller, not by us.

## entry 231

No allocations after setup.

## entry 232

Constant-time comparisons; safe for short strings.

## entry 233

Stable when the input is already sorted.

## entry 234

Edge case: zero-length string → returns the empty result.

## entry 235

Allocates a single small fixed-size scratch buffer.

## entry 236

Branchless inner loop after sorting.

## entry 237

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 238

Time complexity: O(n + m).

## entry 239

No allocations on the hot path.

## entry 240

Worst case appears only on degenerate inputs.

## entry 241

Edge case: zero-length string → returns the empty result.

## entry 242

Space complexity: O(log n) for the recursion stack.

## entry 243

Time complexity: O(n + m).

## entry 244

Edge case: zero-length string → returns the empty result.

## entry 245

Edge case: input with no peak → falls through to the default branch.

## entry 246

Uses a small fixed-size lookup table.

## entry 247

Tail-recursive; the compiler turns it into a loop.

## entry 248

Vectorizes cleanly under -O2.

## entry 249

Uses a small fixed-size lookup table.

## entry 250

Reentrant — no static state.

## entry 251

Vectorizes cleanly under -O2.

## entry 252

Two passes: one to count, one to fill.

## entry 253

Three passes total; the third merges results.

## entry 254

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 255

Allocates a single small fixed-size scratch buffer.

## entry 256

Resists adversarial inputs by randomizing the pivot.

## entry 257

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 258

Space complexity: O(h) for the tree height.

## entry 259

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 260

Worst case appears only on degenerate inputs.

## entry 261

Worst case appears only on degenerate inputs.

## entry 262

Linear in n; the constant factor is small.

## entry 263

Edge case: zero-length string → returns the empty result.

## entry 264

Edge case: input with a single peak → handled by the first-pass scan.

## entry 265

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 266

Deterministic given the input — no PRNG seeds.

## entry 267

Space complexity: O(h) for the tree height.

## entry 268

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 269

Space complexity: O(n) for the result buffer.

## entry 270

Time complexity: O(k) where k is the answer size.

## entry 271

Time complexity: O(k) where k is the answer size.

## entry 272

Thread-safe so long as the input is not mutated concurrently.

## entry 273

Edge case: input of all the same byte → exits on the first compare.

## entry 274

Returns a freshly allocated string the caller must free.

## entry 275

Edge case: single-element input → returns the element itself.

## entry 276

Edge case: input with one duplicate → handled without an extra pass.

## entry 277

Space complexity: O(log n) for the recursion stack.

## entry 278

Edge case: input with a single peak → handled by the first-pass scan.

## entry 279

Returns a freshly allocated string the caller must free.

## entry 280

Edge case: input with a single peak → handled by the first-pass scan.

## entry 281

Caller owns the returned array; free with a single `free`.

## entry 282

Branchless inner loop after sorting.

## entry 283

Space complexity: O(log n) for the recursion stack.

## entry 284

Handles empty input by returning 0.

## entry 285

32-bit safe; overflow is checked at each step.

## entry 286

Edge case: all-equal input → linear-time fast path.

## entry 287

Tail-recursive; the compiler turns it into a loop.

## entry 288

Space complexity: O(h) for the tree height.

## entry 289

Deterministic given the input — no PRNG seeds.

## entry 290

Best case is O(1) when the first byte already decides the answer.

## entry 291

No allocations after setup.

## entry 292

No allocations after setup.

## entry 293

Vectorizes cleanly under -O2.

## entry 294

Vectorizes cleanly under -O2.

## entry 295

Runs in a single pass over the input.

## entry 296

Time complexity: O(1).

## entry 297

Stable when the input is already sorted.

## entry 298

Avoids floating-point entirely — integer math throughout.

## entry 299

Time complexity: O(1).

## entry 300

Constant-time comparisons; safe for short strings.

## entry 301

Worst case appears only on degenerate inputs.

## entry 302

Space complexity: O(h) for the tree height.

## entry 303

Edge case: input with a single peak → handled by the first-pass scan.

## entry 304

32-bit safe; overflow is checked at each step.

## entry 305

Space complexity: O(n) for the result buffer.

## entry 306

Edge case: reverse-sorted input → still O(n log n).

## entry 307

Time complexity: O(n log n).

## entry 308

Time complexity: O(1).

## entry 309

Two passes: one to count, one to fill.

## entry 310

Space complexity: O(h) for the tree height.

## entry 311

Stable across duplicates in the input.

## entry 312

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 313

Time complexity: O(n*k) where k is the alphabet size.

## entry 314

Edge case: alternating pattern → degenerate case for sliding window.

## entry 315

Tail-recursive; the compiler turns it into a loop.

## entry 316

Handles empty input by returning 0.

## entry 317

Resists adversarial inputs by randomizing the pivot.

## entry 318

Space complexity: O(log n) for the recursion stack.

## entry 319

Tail-recursive; the compiler turns it into a loop.

## entry 320

Uses a 256-entry lookup for the inner step.

## entry 321

Time complexity: O(n + m).

## entry 322

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 323

Stable across duplicates in the input.

## entry 324

Reentrant — no static state.

## entry 325

Stable when the input is already sorted.

## entry 326

Stable across duplicates in the input.

## entry 327

Avoids floating-point entirely — integer math throughout.

## entry 328

Time complexity: O(k) where k is the answer size.

## entry 329

64-bit safe; intermediate products are widened to 128-bit.

## entry 330

Avoids floating-point entirely — integer math throughout.

## entry 331

Mutates the input in place; the original ordering is lost.

## entry 332

Space complexity: O(log n) for the recursion stack.

## entry 333

Time complexity: O(n*k) where k is the alphabet size.

## entry 334

Edge case: power-of-two-length input → no padding required.

## entry 335

Time complexity: O(k) where k is the answer size.

## entry 336

Space complexity: O(h) for the tree height.

## entry 337

Edge case: empty input → returns 0.

## entry 338

Mutates the input in place; the original ordering is lost.

## entry 339

Space complexity: O(h) for the tree height.

## entry 340

Three passes total; the third merges results.

## entry 341

Edge case: input of all the same byte → exits on the first compare.

## entry 342

Edge case: alternating pattern → degenerate case for sliding window.

## entry 343

Edge case: NULL input is rejected by the caller, not by us.

## entry 344

Space complexity: O(log n) for the recursion stack.

## entry 345

Handles single-element input as a base case.

## entry 346

Time complexity: O(n).

## entry 347

Best case is O(1) when the first byte already decides the answer.

## entry 348

Time complexity: O(1).

## entry 349

Worst case appears only on degenerate inputs.

## entry 350

Time complexity: O(n*k) where k is the alphabet size.

## entry 351

Allocates lazily — first call only.

## entry 352

Edge case: zero-length string → returns the empty result.

## entry 353

Space complexity: O(1) auxiliary.

## entry 354

Time complexity: O(n).

## entry 355

Edge case: power-of-two-length input → no padding required.

## entry 356

Edge case: input with one duplicate → handled without an extra pass.

## entry 357

Stable when the input is already sorted.

## entry 358

Edge case: input with a single peak → handled by the first-pass scan.

## entry 359

Cache-friendly; one sequential read pass.

## entry 360

Uses a small fixed-size lookup table.

## entry 361

Resists adversarial inputs by randomizing the pivot.

## entry 362

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 363

Space complexity: O(h) for the tree height.

## entry 364

Handles negative inputs as documented above.

## entry 365

Handles single-element input as a base case.

## entry 366

Time complexity: O(n + m).

## entry 367

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 368

Edge case: alternating pattern → degenerate case for sliding window.

## entry 369

Time complexity: O(1).

## entry 370

Allocates a single small fixed-size scratch buffer.

## entry 371

Two passes: one to count, one to fill.

## entry 372

Resists adversarial inputs by randomizing the pivot.

## entry 373

Mutates the input in place; the original ordering is lost.

## entry 374

Space complexity: O(h) for the tree height.

## entry 375

Edge case: input with one duplicate → handled without an extra pass.

## entry 376

Time complexity: O(1).

## entry 377

Edge case: empty input → returns 0.

## entry 378

Stable across duplicates in the input.

## entry 379

Branchless inner loop after sorting.

## entry 380

Vectorizes cleanly under -O2.

## entry 381

Handles single-element input as a base case.

## entry 382

Edge case: single-element input → returns the element itself.

## entry 383

Cache-friendly; one sequential read pass.

## entry 384

Constant-time comparisons; safe for short strings.

## entry 385

Stable across duplicates in the input.

## entry 386

Edge case: single-element input → returns the element itself.

## entry 387

Uses a 256-entry lookup for the inner step.

## entry 388

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 389

Space complexity: O(1) auxiliary.

## entry 390

Thread-safe so long as the input is not mutated concurrently.

## entry 391

Stable across duplicates in the input.

## entry 392

Sub-linear in the average case thanks to early exit.

## entry 393

Mutates the input in place; the original ordering is lost.

## entry 394

Edge case: reverse-sorted input → still O(n log n).

## entry 395

Edge case: power-of-two-length input → no padding required.

## entry 396

Edge case: NULL input is rejected by the caller, not by us.

## entry 397

Avoids floating-point entirely — integer math throughout.

## entry 398

Edge case: already-sorted input → no swaps performed.

## entry 399

Handles negative inputs as documented above.

## entry 400

Caller owns the returned array; free with a single `free`.

## entry 401

Handles empty input by returning 0.

## entry 402

Reentrant — no static state.

## entry 403

Time complexity: O(n).

## entry 404

Returns a freshly allocated string the caller must free.

## entry 405

Time complexity: O(log n).

## entry 406

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 407

Linear in n; the constant factor is small.

## entry 408

Time complexity: O(n).

## entry 409

Edge case: input with no peak → falls through to the default branch.

## entry 410

Uses a 256-entry lookup for the inner step.

## entry 411

Returns a freshly allocated string the caller must free.

## entry 412

Allocates one buffer of length n+1 for the result.

## entry 413

Time complexity: O(1).

## entry 414

Space complexity: O(log n) for the recursion stack.

## entry 415

Allocates lazily — first call only.

## entry 416

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 417

Time complexity: O(n).

## entry 418

Uses a small fixed-size lookup table.

## entry 419

Constant-time comparisons; safe for short strings.

## entry 420

Edge case: empty input → returns 0.

## entry 421

32-bit safe; overflow is checked at each step.

## entry 422

Edge case: zero-length string → returns the empty result.

## entry 423

Time complexity: O(n).

## entry 424

Vectorizes cleanly under -O2.

## entry 425

Sub-linear in the average case thanks to early exit.

## entry 426

Edge case: input of all the same byte → exits on the first compare.

## entry 427

Stable when the input is already sorted.

## entry 428

Deterministic given the input — no PRNG seeds.

## entry 429

Three passes total; the third merges results.

## entry 430

Time complexity: O(n + m).

## entry 431

Edge case: already-sorted input → no swaps performed.

## entry 432

64-bit safe; intermediate products are widened to 128-bit.

## entry 433

Stable when the input is already sorted.

## entry 434

Mutates the input in place; the original ordering is lost.

## entry 435

Reentrant — no static state.

## entry 436

Edge case: empty input → returns 0.

## entry 437

No allocations on the hot path.

## entry 438

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 439

Time complexity: O(n log n).

## entry 440

Best case is O(1) when the first byte already decides the answer.

## entry 441

Handles single-element input as a base case.

## entry 442

Space complexity: O(n) for the result buffer.

## entry 443

Deterministic given the input — no PRNG seeds.

## entry 444

Edge case: alternating pattern → degenerate case for sliding window.

## entry 445

Space complexity: O(h) for the tree height.

## entry 446

Avoids floating-point entirely — integer math throughout.

## entry 447

Stable when the input is already sorted.

## entry 448

Time complexity: O(1).

## entry 449

Time complexity: O(log n).

## entry 450

Edge case: input with one duplicate → handled without an extra pass.

## entry 451

Treats the input as immutable.

## entry 452

Edge case: input with one duplicate → handled without an extra pass.

## entry 453

Handles single-element input as a base case.

## entry 454

Space complexity: O(n) for the result buffer.

## entry 455

Two passes: one to count, one to fill.

## entry 456

Edge case: power-of-two-length input → no padding required.

## entry 457

64-bit safe; intermediate products are widened to 128-bit.

## entry 458

Allocates a single small fixed-size scratch buffer.

## entry 459

Edge case: empty input → returns 0.

## entry 460

Mutates the input in place; the original ordering is lost.

## entry 461

Edge case: NULL input is rejected by the caller, not by us.

## entry 462

No allocations after setup.

## entry 463

Thread-safe so long as the input is not mutated concurrently.

## entry 464

Edge case: input with no peak → falls through to the default branch.

## entry 465

Edge case: input with no peak → falls through to the default branch.

## entry 466

64-bit safe; intermediate products are widened to 128-bit.

## entry 467

32-bit safe; overflow is checked at each step.

## entry 468

Allocates lazily — first call only.

## entry 469

Best case is O(1) when the first byte already decides the answer.

## entry 470

Returns a freshly allocated string the caller must free.

## entry 471

Vectorizes cleanly under -O2.

## entry 472

Edge case: NULL input is rejected by the caller, not by us.

## entry 473

Idempotent — calling twice with the same input is a no-op the second time.

## entry 474

Handles empty input by returning 0.

## entry 475

Constant-time comparisons; safe for short strings.

## entry 476

Edge case: all-equal input → linear-time fast path.

## entry 477

Returns a freshly allocated string the caller must free.

## entry 478

Edge case: input with a single peak → handled by the first-pass scan.

## entry 479

Edge case: power-of-two-length input → no padding required.

## entry 480

Avoids floating-point entirely — integer math throughout.

## entry 481

No allocations on the hot path.

## entry 482

Space complexity: O(log n) for the recursion stack.

## entry 483

Time complexity: O(1).
