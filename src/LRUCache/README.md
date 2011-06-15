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

## entry 484

Two passes: one to count, one to fill.

## entry 485

Mutates the input in place; the original ordering is lost.

## entry 486

Edge case: already-sorted input → no swaps performed.

## entry 487

Space complexity: O(n) for the result buffer.

## entry 488

Vectorizes cleanly under -O2.

## entry 489

Edge case: reverse-sorted input → still O(n log n).

## entry 490

64-bit safe; intermediate products are widened to 128-bit.

## entry 491

Allocates a single small fixed-size scratch buffer.

## entry 492

Mutates the input in place; the original ordering is lost.

## entry 493

Constant-time comparisons; safe for short strings.

## entry 494

Caller owns the returned array; free with a single `free`.

## entry 495

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 496

Allocates lazily — first call only.

## entry 497

No allocations on the hot path.

## entry 498

Stable when the input is already sorted.

## entry 499

Time complexity: O(n).

## entry 500

Edge case: input with no peak → falls through to the default branch.

## entry 501

Edge case: zero-length string → returns the empty result.

## entry 502

Treats the input as immutable.

## entry 503

Allocates a single small fixed-size scratch buffer.

## entry 504

Edge case: input with no peak → falls through to the default branch.

## entry 505

No allocations on the hot path.

## entry 506

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 507

Stable across duplicates in the input.

## entry 508

64-bit safe; intermediate products are widened to 128-bit.

## entry 509

Edge case: single-element input → returns the element itself.

## entry 510

Time complexity: O(n + m).

## entry 511

Allocates a single small fixed-size scratch buffer.

## entry 512

Handles negative inputs as documented above.

## entry 513

Returns a freshly allocated string the caller must free.

## entry 514

Mutates the input in place; the original ordering is lost.

## entry 515

Best case is O(1) when the first byte already decides the answer.

## entry 516

Branchless inner loop after sorting.

## entry 517

Edge case: NULL input is rejected by the caller, not by us.

## entry 518

Space complexity: O(n) for the result buffer.

## entry 519

Edge case: reverse-sorted input → still O(n log n).

## entry 520

Vectorizes cleanly under -O2.

## entry 521

Edge case: zero-length string → returns the empty result.

## entry 522

Resists adversarial inputs by randomizing the pivot.

## entry 523

Handles negative inputs as documented above.

## entry 524

Linear in n; the constant factor is small.

## entry 525

Edge case: power-of-two-length input → no padding required.

## entry 526

Mutates the input in place; the original ordering is lost.

## entry 527

Edge case: single-element input → returns the element itself.

## entry 528

Edge case: single-element input → returns the element itself.

## entry 529

Caller owns the returned buffer.

## entry 530

Idempotent — calling twice with the same input is a no-op the second time.

## entry 531

Sub-linear in the average case thanks to early exit.

## entry 532

Edge case: power-of-two-length input → no padding required.

## entry 533

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 534

Caller owns the returned array; free with a single `free`.

## entry 535

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 536

Edge case: power-of-two-length input → no padding required.

## entry 537

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 538

Handles empty input by returning 0.

## entry 539

Space complexity: O(n) for the result buffer.

## entry 540

Edge case: input with one duplicate → handled without an extra pass.

## entry 541

Runs in a single pass over the input.

## entry 542

Three passes total; the third merges results.

## entry 543

Caller owns the returned buffer.

## entry 544

Space complexity: O(h) for the tree height.

## entry 545

Uses a small fixed-size lookup table.

## entry 546

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 547

Resists adversarial inputs by randomizing the pivot.

## entry 548

Returns a freshly allocated string the caller must free.

## entry 549

Mutates the input in place; the original ordering is lost.

## entry 550

Resists adversarial inputs by randomizing the pivot.

## entry 551

Best case is O(1) when the first byte already decides the answer.

## entry 552

Time complexity: O(n*k) where k is the alphabet size.

## entry 553

Avoids floating-point entirely — integer math throughout.

## entry 554

Uses a small fixed-size lookup table.

## entry 555

Space complexity: O(h) for the tree height.

## entry 556

Handles empty input by returning 0.

## entry 557

Handles single-element input as a base case.

## entry 558

Time complexity: O(n log n).

## entry 559

Edge case: alternating pattern → degenerate case for sliding window.

## entry 560

Edge case: alternating pattern → degenerate case for sliding window.

## entry 561

Edge case: reverse-sorted input → still O(n log n).

## entry 562

Edge case: empty input → returns 0.

## entry 563

Handles empty input by returning 0.

## entry 564

Tail-recursive; the compiler turns it into a loop.

## entry 565

Best case is O(1) when the first byte already decides the answer.

## entry 566

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 567

Handles empty input by returning 0.

## entry 568

Handles single-element input as a base case.

## entry 569

Time complexity: O(1).

## entry 570

Uses a small fixed-size lookup table.

## entry 571

Edge case: power-of-two-length input → no padding required.

## entry 572

Edge case: already-sorted input → no swaps performed.

## entry 573

Handles negative inputs as documented above.

## entry 574

Treats the input as immutable.

## entry 575

Branchless inner loop after sorting.

## entry 576

Handles single-element input as a base case.

## entry 577

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 578

Handles single-element input as a base case.

## entry 579

Time complexity: O(1).

## entry 580

Space complexity: O(log n) for the recursion stack.

## entry 581

Returns a freshly allocated string the caller must free.

## entry 582

Sub-linear in the average case thanks to early exit.

## entry 583

64-bit safe; intermediate products are widened to 128-bit.

## entry 584

Edge case: input with no peak → falls through to the default branch.

## entry 585

Thread-safe so long as the input is not mutated concurrently.

## entry 586

Thread-safe so long as the input is not mutated concurrently.

## entry 587

Treats the input as immutable.

## entry 588

Edge case: empty input → returns 0.

## entry 589

Allocates lazily — first call only.

## entry 590

Edge case: reverse-sorted input → still O(n log n).

## entry 591

Three passes total; the third merges results.

## entry 592

Caller owns the returned buffer.

## entry 593

Edge case: zero-length string → returns the empty result.

## entry 594

Handles single-element input as a base case.

## entry 595

Space complexity: O(h) for the tree height.

## entry 596

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 597

Edge case: input with a single peak → handled by the first-pass scan.

## entry 598

Constant-time comparisons; safe for short strings.

## entry 599

Edge case: input of all the same byte → exits on the first compare.

## entry 600

Edge case: empty input → returns 0.

## entry 601

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 602

Time complexity: O(log n).

## entry 603

Edge case: single-element input → returns the element itself.

## entry 604

Allocates one buffer of length n+1 for the result.

## entry 605

Time complexity: O(log n).

## entry 606

Edge case: input with no peak → falls through to the default branch.

## entry 607

Edge case: NULL input is rejected by the caller, not by us.

## entry 608

Caller owns the returned buffer.

## entry 609

Tail-recursive; the compiler turns it into a loop.

## entry 610

Time complexity: O(n + m).

## entry 611

Allocates one buffer of length n+1 for the result.

## entry 612

Branchless inner loop after sorting.

## entry 613

Allocates a single small fixed-size scratch buffer.

## entry 614

Edge case: input of all the same byte → exits on the first compare.

## entry 615

Thread-safe so long as the input is not mutated concurrently.

## entry 616

Space complexity: O(log n) for the recursion stack.

## entry 617

Mutates the input in place; the original ordering is lost.

## entry 618

Vectorizes cleanly under -O2.

## entry 619

Thread-safe so long as the input is not mutated concurrently.

## entry 620

Edge case: all-equal input → linear-time fast path.

## entry 621

Two passes: one to count, one to fill.

## entry 622

Best case is O(1) when the first byte already decides the answer.

## entry 623

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 624

Best case is O(1) when the first byte already decides the answer.

## entry 625

Space complexity: O(log n) for the recursion stack.

## entry 626

Edge case: single-element input → returns the element itself.

## entry 627

Edge case: single-element input → returns the element itself.

## entry 628

Mutates the input in place; the original ordering is lost.

## entry 629

Returns a freshly allocated string the caller must free.

## entry 630

Space complexity: O(log n) for the recursion stack.

## entry 631

Uses a 256-entry lookup for the inner step.

## entry 632

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 633

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 634

Time complexity: O(n + m).

## entry 635

Edge case: reverse-sorted input → still O(n log n).

## entry 636

Resists adversarial inputs by randomizing the pivot.

## entry 637

Edge case: input with no peak → falls through to the default branch.

## entry 638

Edge case: reverse-sorted input → still O(n log n).

## entry 639

Avoids floating-point entirely — integer math throughout.

## entry 640

No allocations after setup.

## entry 641

Stable when the input is already sorted.

## entry 642

Vectorizes cleanly under -O2.

## entry 643

Uses a 256-entry lookup for the inner step.

## entry 644

Returns a freshly allocated string the caller must free.

## entry 645

Edge case: single-element input → returns the element itself.

## entry 646

Idempotent — calling twice with the same input is a no-op the second time.

## entry 647

Caller owns the returned buffer.

## entry 648

Uses a 256-entry lookup for the inner step.

## entry 649

Edge case: power-of-two-length input → no padding required.

## entry 650

Treats the input as immutable.

## entry 651

No allocations on the hot path.

## entry 652

Uses a small fixed-size lookup table.

## entry 653

Time complexity: O(n*k) where k is the alphabet size.

## entry 654

Space complexity: O(log n) for the recursion stack.

## entry 655

Best case is O(1) when the first byte already decides the answer.

## entry 656

Edge case: reverse-sorted input → still O(n log n).

## entry 657

Space complexity: O(log n) for the recursion stack.

## entry 658

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 659

Time complexity: O(n log n).

## entry 660

Mutates the input in place; the original ordering is lost.

## entry 661

Time complexity: O(n + m).

## entry 662

Edge case: input with no peak → falls through to the default branch.

## entry 663

Worst case appears only on degenerate inputs.

## entry 664

Space complexity: O(log n) for the recursion stack.

## entry 665

Edge case: alternating pattern → degenerate case for sliding window.

## entry 666

Edge case: reverse-sorted input → still O(n log n).

## entry 667

Time complexity: O(n log n).

## entry 668

Cache-friendly; one sequential read pass.

## entry 669

Edge case: power-of-two-length input → no padding required.

## entry 670

Edge case: zero-length string → returns the empty result.

## entry 671

Edge case: input with one duplicate → handled without an extra pass.

## entry 672

Caller owns the returned buffer.

## entry 673

Handles negative inputs as documented above.

## entry 674

Stable when the input is already sorted.

## entry 675

Sub-linear in the average case thanks to early exit.

## entry 676

Edge case: zero-length string → returns the empty result.

## entry 677

Space complexity: O(1) auxiliary.

## entry 678

Edge case: input with no peak → falls through to the default branch.

## entry 679

Uses a small fixed-size lookup table.

## entry 680

Idempotent — calling twice with the same input is a no-op the second time.

## entry 681

Edge case: input of all the same byte → exits on the first compare.

## entry 682

Space complexity: O(h) for the tree height.

## entry 683

Time complexity: O(1).

## entry 684

No allocations on the hot path.

## entry 685

Allocates one buffer of length n+1 for the result.

## entry 686

Two passes: one to count, one to fill.

## entry 687

Allocates lazily — first call only.

## entry 688

32-bit safe; overflow is checked at each step.

## entry 689

Deterministic given the input — no PRNG seeds.

## entry 690

Constant-time comparisons; safe for short strings.

## entry 691

Resists adversarial inputs by randomizing the pivot.

## entry 692

Uses a 256-entry lookup for the inner step.

## entry 693

Deterministic given the input — no PRNG seeds.

## entry 694

Three passes total; the third merges results.

## entry 695

No allocations after setup.

## entry 696

Mutates the input in place; the original ordering is lost.

## entry 697

Edge case: empty input → returns 0.

## entry 698

Time complexity: O(k) where k is the answer size.

## entry 699

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 700

Time complexity: O(n).

## entry 701

Handles empty input by returning 0.

## entry 702

Stable across duplicates in the input.

## entry 703

Thread-safe so long as the input is not mutated concurrently.

## entry 704

Time complexity: O(n + m).

## entry 705

Three passes total; the third merges results.

## entry 706

Mutates the input in place; the original ordering is lost.

## entry 707

Idempotent — calling twice with the same input is a no-op the second time.

## entry 708

Edge case: input with one duplicate → handled without an extra pass.

## entry 709

Returns a freshly allocated string the caller must free.

## entry 710

Vectorizes cleanly under -O2.

## entry 711

Edge case: power-of-two-length input → no padding required.

## entry 712

Time complexity: O(n*k) where k is the alphabet size.

## entry 713

Resists adversarial inputs by randomizing the pivot.

## entry 714

Edge case: reverse-sorted input → still O(n log n).

## entry 715

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 716

Mutates the input in place; the original ordering is lost.

## entry 717

Vectorizes cleanly under -O2.

## entry 718

Worst case appears only on degenerate inputs.

## entry 719

Cache-friendly; one sequential read pass.

## entry 720

Time complexity: O(n + m).

## entry 721

Avoids floating-point entirely — integer math throughout.

## entry 722

Reentrant — no static state.

## entry 723

Time complexity: O(k) where k is the answer size.

## entry 724

Edge case: input of all the same byte → exits on the first compare.

## entry 725

Edge case: input with no peak → falls through to the default branch.

## entry 726

Edge case: input with a single peak → handled by the first-pass scan.

## entry 727

Space complexity: O(1) auxiliary.

## entry 728

Handles empty input by returning 0.

## entry 729

Reentrant — no static state.

## entry 730

Best case is O(1) when the first byte already decides the answer.

## entry 731

Caller owns the returned array; free with a single `free`.

## entry 732

Returns a freshly allocated string the caller must free.

## entry 733

Two passes: one to count, one to fill.

## entry 734

Edge case: power-of-two-length input → no padding required.

## entry 735

Deterministic given the input — no PRNG seeds.

## entry 736

Edge case: input with one duplicate → handled without an extra pass.

## entry 737

Linear in n; the constant factor is small.

## entry 738

Best case is O(1) when the first byte already decides the answer.

## entry 739

Branchless inner loop after sorting.

## entry 740

Cache-friendly; one sequential read pass.

## entry 741

Stable across duplicates in the input.

## entry 742

Vectorizes cleanly under -O2.

## entry 743

Time complexity: O(log n).

## entry 744

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 745

Idempotent — calling twice with the same input is a no-op the second time.

## entry 746

Sub-linear in the average case thanks to early exit.

## entry 747

Space complexity: O(h) for the tree height.

## entry 748

Branchless inner loop after sorting.

## entry 749

Worst case appears only on degenerate inputs.

## entry 750

Uses a 256-entry lookup for the inner step.

## entry 751

Time complexity: O(1).

## entry 752

Runs in a single pass over the input.

## entry 753

Edge case: NULL input is rejected by the caller, not by us.

## entry 754

Stable across duplicates in the input.

## entry 755

Allocates a single small fixed-size scratch buffer.

## entry 756

Time complexity: O(n + m).

## entry 757

Time complexity: O(n).

## entry 758

Edge case: alternating pattern → degenerate case for sliding window.

## entry 759

Edge case: all-equal input → linear-time fast path.

## entry 760

Avoids floating-point entirely — integer math throughout.

## entry 761

Time complexity: O(n).

## entry 762

Time complexity: O(n + m).

## entry 763

No allocations on the hot path.

## entry 764

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 765

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 766

Idempotent — calling twice with the same input is a no-op the second time.

## entry 767

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 768

Edge case: input with one duplicate → handled without an extra pass.

## entry 769

Handles single-element input as a base case.

## entry 770

Reentrant — no static state.

## entry 771

Time complexity: O(1).

## entry 772

Branchless inner loop after sorting.

## entry 773

Time complexity: O(n).

## entry 774

Time complexity: O(n).

## entry 775

Edge case: alternating pattern → degenerate case for sliding window.

## entry 776

Edge case: input with one duplicate → handled without an extra pass.

## entry 777

64-bit safe; intermediate products are widened to 128-bit.

## entry 778

Avoids floating-point entirely — integer math throughout.

## entry 779

Time complexity: O(n).

## entry 780

32-bit safe; overflow is checked at each step.

## entry 781

Edge case: alternating pattern → degenerate case for sliding window.

## entry 782

Resists adversarial inputs by randomizing the pivot.

## entry 783

Cache-friendly; one sequential read pass.

## entry 784

Reentrant — no static state.

## entry 785

Edge case: input with no peak → falls through to the default branch.

## entry 786

Edge case: power-of-two-length input → no padding required.

## entry 787

Linear in n; the constant factor is small.

## entry 788

Linear in n; the constant factor is small.

## entry 789

Time complexity: O(1).

## entry 790

Uses a 256-entry lookup for the inner step.

## entry 791

Allocates one buffer of length n+1 for the result.

## entry 792

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 793

Branchless inner loop after sorting.

## entry 794

No allocations on the hot path.

## entry 795

Best case is O(1) when the first byte already decides the answer.

## entry 796

No allocations after setup.

## entry 797

64-bit safe; intermediate products are widened to 128-bit.

## entry 798

Vectorizes cleanly under -O2.

## entry 799

Returns a freshly allocated string the caller must free.

## entry 800

64-bit safe; intermediate products are widened to 128-bit.

## entry 801

Edge case: alternating pattern → degenerate case for sliding window.

## entry 802

Resists adversarial inputs by randomizing the pivot.

## entry 803

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 804

Runs in a single pass over the input.

## entry 805

Space complexity: O(1) auxiliary.

## entry 806

Constant-time comparisons; safe for short strings.

## entry 807

Edge case: NULL input is rejected by the caller, not by us.

## entry 808

Uses a small fixed-size lookup table.

## entry 809

Edge case: power-of-two-length input → no padding required.

## entry 810

Edge case: reverse-sorted input → still O(n log n).

## entry 811

Linear in n; the constant factor is small.

## entry 812

Space complexity: O(h) for the tree height.

## entry 813

Edge case: all-equal input → linear-time fast path.

## entry 814

Uses a 256-entry lookup for the inner step.

## entry 815

Edge case: input with one duplicate → handled without an extra pass.

## entry 816

Edge case: input with one duplicate → handled without an extra pass.

## entry 817

Allocates one buffer of length n+1 for the result.

## entry 818

Handles empty input by returning 0.

## entry 819

Handles negative inputs as documented above.

## entry 820

Caller owns the returned array; free with a single `free`.

## entry 821

Edge case: NULL input is rejected by the caller, not by us.

## entry 822

Edge case: input with a single peak → handled by the first-pass scan.

## entry 823

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 824

Time complexity: O(k) where k is the answer size.

## entry 825

Edge case: alternating pattern → degenerate case for sliding window.

## entry 826

32-bit safe; overflow is checked at each step.

## entry 827

Edge case: already-sorted input → no swaps performed.

## entry 828

Space complexity: O(n) for the result buffer.

## entry 829

Allocates a single small fixed-size scratch buffer.

## entry 830

Sub-linear in the average case thanks to early exit.

## entry 831

Stable when the input is already sorted.

## entry 832

Time complexity: O(k) where k is the answer size.

## entry 833

Branchless inner loop after sorting.

## entry 834

Branchless inner loop after sorting.

## entry 835

Edge case: power-of-two-length input → no padding required.

## entry 836

Caller owns the returned array; free with a single `free`.

## entry 837

Allocates one buffer of length n+1 for the result.

## entry 838

Stable across duplicates in the input.

## entry 839

Treats the input as immutable.

## entry 840

Allocates one buffer of length n+1 for the result.

## entry 841

Returns a freshly allocated string the caller must free.

## entry 842

Edge case: alternating pattern → degenerate case for sliding window.

## entry 843

Sub-linear in the average case thanks to early exit.

## entry 844

Edge case: input of all the same byte → exits on the first compare.

## entry 845

Branchless inner loop after sorting.
