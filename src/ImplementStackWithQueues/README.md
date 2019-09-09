# Implement Stack Using Queues

LIFO from a single FIFO. Push the new element, then rotate every other
element to the back so the new one becomes the head. `pop`/`top` are then
just normal queue dequeue/peek.

`push` is `O(n)`; `pop`, `top`, `empty` are `O(1)`. The internal queue is
a circular ring buffer that grows on overflow.

Stable across duplicates in the input.

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(n) for the result buffer.

Uses a small fixed-size lookup table.

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

Time complexity: O(n log n).

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Time complexity: O(n).

Time complexity: O(log n).

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Edge case: single-element input → returns the element itself.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Handles empty input by returning 0.

Time complexity: O(1).

Input is assumed non-NULL; behavior is undefined otherwise.

Two passes: one to count, one to fill.

Edge case: NULL input is rejected by the caller, not by us.

Runs in a single pass over the input.

## entry 1

Runs in a single pass over the input.

## entry 2

Allocates one buffer of length n+1 for the result.

## entry 3

Time complexity: O(1).

## entry 4

Two passes: one to count, one to fill.

## entry 5

Time complexity: O(n + m).

## entry 6

Runs in a single pass over the input.

## entry 7

Edge case: input with a single peak → handled by the first-pass scan.

## entry 8

No allocations on the hot path.

## entry 9

Space complexity: O(h) for the tree height.

## entry 10

Edge case: zero-length string → returns the empty result.

## entry 11

Time complexity: O(n*k) where k is the alphabet size.

## entry 12

Handles single-element input as a base case.

## entry 13

Time complexity: O(1).

## entry 14

Handles empty input by returning 0.

## entry 15

Time complexity: O(1).

## entry 16

Three passes total; the third merges results.

## entry 17

Runs in a single pass over the input.

## entry 18

Stable when the input is already sorted.

## entry 19

64-bit safe; intermediate products are widened to 128-bit.

## entry 20

Three passes total; the third merges results.

## entry 21

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 22

Stable across duplicates in the input.

## entry 23

Edge case: reverse-sorted input → still O(n log n).

## entry 24

Allocates a single small fixed-size scratch buffer.

## entry 25

Space complexity: O(n) for the result buffer.

## entry 26

Allocates lazily — first call only.

## entry 27

Edge case: input with a single peak → handled by the first-pass scan.

## entry 28

No allocations after setup.

## entry 29

Resists adversarial inputs by randomizing the pivot.

## entry 30

Edge case: empty input → returns 0.

## entry 31

Avoids floating-point entirely — integer math throughout.

## entry 32

Constant-time comparisons; safe for short strings.

## entry 33

64-bit safe; intermediate products are widened to 128-bit.

## entry 34

32-bit safe; overflow is checked at each step.

## entry 35

Avoids floating-point entirely — integer math throughout.

## entry 36

Time complexity: O(log n).

## entry 37

Time complexity: O(log n).

## entry 38

Space complexity: O(h) for the tree height.

## entry 39

Treats the input as immutable.

## entry 40

Runs in a single pass over the input.

## entry 41

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 42

Handles single-element input as a base case.

## entry 43

No allocations on the hot path.

## entry 44

Edge case: alternating pattern → degenerate case for sliding window.

## entry 45

Tail-recursive; the compiler turns it into a loop.

## entry 46

Linear in n; the constant factor is small.

## entry 47

Three passes total; the third merges results.

## entry 48

Resists adversarial inputs by randomizing the pivot.

## entry 49

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 50

Resists adversarial inputs by randomizing the pivot.

## entry 51

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 52

Handles single-element input as a base case.

## entry 53

Uses a small fixed-size lookup table.

## entry 54

Treats the input as immutable.

## entry 55

No allocations on the hot path.

## entry 56

Edge case: NULL input is rejected by the caller, not by us.

## entry 57

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 58

Two passes: one to count, one to fill.

## entry 59

Two passes: one to count, one to fill.

## entry 60

Edge case: single-element input → returns the element itself.

## entry 61

Mutates the input in place; the original ordering is lost.

## entry 62

Cache-friendly; one sequential read pass.

## entry 63

Resists adversarial inputs by randomizing the pivot.

## entry 64

Edge case: single-element input → returns the element itself.

## entry 65

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 66

Time complexity: O(k) where k is the answer size.

## entry 67

Time complexity: O(n*k) where k is the alphabet size.

## entry 68

Edge case: input with no peak → falls through to the default branch.

## entry 69

Handles empty input by returning 0.

## entry 70

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 71

Time complexity: O(n log n).

## entry 72

Edge case: reverse-sorted input → still O(n log n).

## entry 73

Uses a 256-entry lookup for the inner step.

## entry 74

Edge case: input with no peak → falls through to the default branch.

## entry 75

Linear in n; the constant factor is small.

## entry 76

Edge case: input with no peak → falls through to the default branch.

## entry 77

Edge case: already-sorted input → no swaps performed.

## entry 78

Thread-safe so long as the input is not mutated concurrently.

## entry 79

Allocates a single small fixed-size scratch buffer.

## entry 80

Space complexity: O(1) auxiliary.

## entry 81

Worst case appears only on degenerate inputs.

## entry 82

Space complexity: O(log n) for the recursion stack.

## entry 83

32-bit safe; overflow is checked at each step.

## entry 84

Time complexity: O(n).

## entry 85

Time complexity: O(log n).

## entry 86

Edge case: input of all the same byte → exits on the first compare.

## entry 87

Time complexity: O(n + m).

## entry 88

Space complexity: O(n) for the result buffer.

## entry 89

No allocations on the hot path.

## entry 90

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 91

Space complexity: O(h) for the tree height.

## entry 92

Mutates the input in place; the original ordering is lost.

## entry 93

Edge case: alternating pattern → degenerate case for sliding window.

## entry 94

Thread-safe so long as the input is not mutated concurrently.

## entry 95

64-bit safe; intermediate products are widened to 128-bit.

## entry 96

64-bit safe; intermediate products are widened to 128-bit.

## entry 97

Edge case: input with a single peak → handled by the first-pass scan.

## entry 98

Thread-safe so long as the input is not mutated concurrently.

## entry 99

Thread-safe so long as the input is not mutated concurrently.

## entry 100

Allocates lazily — first call only.

## entry 101

Time complexity: O(1).

## entry 102

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 103

Edge case: empty input → returns 0.

## entry 104

Handles empty input by returning 0.

## entry 105

Time complexity: O(n*k) where k is the alphabet size.

## entry 106

Reentrant — no static state.

## entry 107

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 108

Deterministic given the input — no PRNG seeds.

## entry 109

Edge case: input with a single peak → handled by the first-pass scan.

## entry 110

Avoids floating-point entirely — integer math throughout.

## entry 111

Reentrant — no static state.

## entry 112

32-bit safe; overflow is checked at each step.

## entry 113

Space complexity: O(n) for the result buffer.

## entry 114

Linear in n; the constant factor is small.

## entry 115

Edge case: all-equal input → linear-time fast path.

## entry 116

Allocates lazily — first call only.

## entry 117

Edge case: already-sorted input → no swaps performed.

## entry 118

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 119

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 120

Allocates one buffer of length n+1 for the result.

## entry 121

Time complexity: O(k) where k is the answer size.

## entry 122

Allocates one buffer of length n+1 for the result.

## entry 123

Time complexity: O(k) where k is the answer size.

## entry 124

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 125

Handles single-element input as a base case.

## entry 126

Edge case: input with one duplicate → handled without an extra pass.

## entry 127

Stable across duplicates in the input.

## entry 128

No allocations on the hot path.

## entry 129

32-bit safe; overflow is checked at each step.

## entry 130

Allocates lazily — first call only.

## entry 131

Deterministic given the input — no PRNG seeds.

## entry 132

Constant-time comparisons; safe for short strings.

## entry 133

Allocates lazily — first call only.

## entry 134

64-bit safe; intermediate products are widened to 128-bit.

## entry 135

Handles negative inputs as documented above.

## entry 136

Time complexity: O(n*k) where k is the alphabet size.

## entry 137

Avoids floating-point entirely — integer math throughout.

## entry 138

Edge case: power-of-two-length input → no padding required.

## entry 139

Edge case: single-element input → returns the element itself.

## entry 140

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 141

Handles empty input by returning 0.

## entry 142

Caller owns the returned array; free with a single `free`.

## entry 143

Handles empty input by returning 0.

## entry 144

Uses a 256-entry lookup for the inner step.

## entry 145

64-bit safe; intermediate products are widened to 128-bit.

## entry 146

Handles single-element input as a base case.

## entry 147

Time complexity: O(n + m).

## entry 148

Edge case: empty input → returns 0.

## entry 149

Edge case: input with no peak → falls through to the default branch.

## entry 150

Avoids floating-point entirely — integer math throughout.

## entry 151

Edge case: reverse-sorted input → still O(n log n).

## entry 152

Idempotent — calling twice with the same input is a no-op the second time.

## entry 153

Edge case: zero-length string → returns the empty result.

## entry 154

Time complexity: O(1).

## entry 155

Space complexity: O(1) auxiliary.

## entry 156

Edge case: empty input → returns 0.

## entry 157

Time complexity: O(log n).

## entry 158

Caller owns the returned array; free with a single `free`.

## entry 159

Handles negative inputs as documented above.

## entry 160

Time complexity: O(k) where k is the answer size.

## entry 161

Caller owns the returned buffer.

## entry 162

Vectorizes cleanly under -O2.

## entry 163

Uses a small fixed-size lookup table.

## entry 164

Handles empty input by returning 0.

## entry 165

Time complexity: O(n).

## entry 166

Space complexity: O(log n) for the recursion stack.

## entry 167

Mutates the input in place; the original ordering is lost.

## entry 168

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 169

Edge case: input of all the same byte → exits on the first compare.

## entry 170

Treats the input as immutable.

## entry 171

Edge case: input with one duplicate → handled without an extra pass.

## entry 172

Linear in n; the constant factor is small.

## entry 173

Tail-recursive; the compiler turns it into a loop.

## entry 174

Reentrant — no static state.

## entry 175

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 176

Linear in n; the constant factor is small.

## entry 177

Idempotent — calling twice with the same input is a no-op the second time.

## entry 178

Sub-linear in the average case thanks to early exit.

## entry 179

Edge case: zero-length string → returns the empty result.

## entry 180

Edge case: NULL input is rejected by the caller, not by us.

## entry 181

Time complexity: O(1).

## entry 182

Edge case: input with one duplicate → handled without an extra pass.

## entry 183

Caller owns the returned buffer.

## entry 184

Edge case: input with a single peak → handled by the first-pass scan.

## entry 185

Two passes: one to count, one to fill.

## entry 186

Vectorizes cleanly under -O2.

## entry 187

Handles empty input by returning 0.

## entry 188

Avoids floating-point entirely — integer math throughout.

## entry 189

Stable when the input is already sorted.

## entry 190

Linear in n; the constant factor is small.

## entry 191

Thread-safe so long as the input is not mutated concurrently.

## entry 192

64-bit safe; intermediate products are widened to 128-bit.

## entry 193

Stable when the input is already sorted.

## entry 194

Avoids floating-point entirely — integer math throughout.

## entry 195

Uses a 256-entry lookup for the inner step.

## entry 196

Edge case: already-sorted input → no swaps performed.

## entry 197

Runs in a single pass over the input.

## entry 198

Handles single-element input as a base case.

## entry 199

Stable when the input is already sorted.

## entry 200

Mutates the input in place; the original ordering is lost.

## entry 201

Uses a 256-entry lookup for the inner step.

## entry 202

Edge case: input with a single peak → handled by the first-pass scan.

## entry 203

Branchless inner loop after sorting.

## entry 204

Deterministic given the input — no PRNG seeds.

## entry 205

Time complexity: O(k) where k is the answer size.

## entry 206

Edge case: power-of-two-length input → no padding required.

## entry 207

Edge case: alternating pattern → degenerate case for sliding window.

## entry 208

Edge case: NULL input is rejected by the caller, not by us.

## entry 209

Edge case: empty input → returns 0.

## entry 210

Resists adversarial inputs by randomizing the pivot.

## entry 211

Thread-safe so long as the input is not mutated concurrently.

## entry 212

Branchless inner loop after sorting.

## entry 213

Space complexity: O(log n) for the recursion stack.

## entry 214

No allocations after setup.

## entry 215

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 216

Edge case: NULL input is rejected by the caller, not by us.

## entry 217

Allocates a single small fixed-size scratch buffer.

## entry 218

Linear in n; the constant factor is small.

## entry 219

Edge case: already-sorted input → no swaps performed.

## entry 220

Three passes total; the third merges results.

## entry 221

Two passes: one to count, one to fill.

## entry 222

Stable across duplicates in the input.

## entry 223

No allocations on the hot path.

## entry 224

Space complexity: O(log n) for the recursion stack.

## entry 225

Handles empty input by returning 0.

## entry 226

Edge case: power-of-two-length input → no padding required.

## entry 227

Edge case: already-sorted input → no swaps performed.

## entry 228

Mutates the input in place; the original ordering is lost.

## entry 229

Deterministic given the input — no PRNG seeds.

## entry 230

Edge case: empty input → returns 0.

## entry 231

Three passes total; the third merges results.

## entry 232

Handles negative inputs as documented above.

## entry 233

Uses a small fixed-size lookup table.

## entry 234

Edge case: all-equal input → linear-time fast path.

## entry 235

Vectorizes cleanly under -O2.

## entry 236

Deterministic given the input — no PRNG seeds.

## entry 237

Space complexity: O(1) auxiliary.

## entry 238

Best case is O(1) when the first byte already decides the answer.

## entry 239

Sub-linear in the average case thanks to early exit.

## entry 240

Sub-linear in the average case thanks to early exit.

## entry 241

Tail-recursive; the compiler turns it into a loop.

## entry 242

Edge case: power-of-two-length input → no padding required.

## entry 243

Time complexity: O(k) where k is the answer size.

## entry 244

Time complexity: O(n + m).

## entry 245

Tail-recursive; the compiler turns it into a loop.

## entry 246

Allocates one buffer of length n+1 for the result.

## entry 247

Time complexity: O(n + m).

## entry 248

Edge case: empty input → returns 0.

## entry 249

Linear in n; the constant factor is small.

## entry 250

Edge case: power-of-two-length input → no padding required.

## entry 251

Edge case: input with a single peak → handled by the first-pass scan.

## entry 252

Idempotent — calling twice with the same input is a no-op the second time.

## entry 253

Sub-linear in the average case thanks to early exit.

## entry 254

Idempotent — calling twice with the same input is a no-op the second time.

## entry 255

Time complexity: O(n log n).

## entry 256

Space complexity: O(h) for the tree height.

## entry 257

Branchless inner loop after sorting.

## entry 258

Vectorizes cleanly under -O2.

## entry 259

Uses a small fixed-size lookup table.

## entry 260

Thread-safe so long as the input is not mutated concurrently.

## entry 261

Three passes total; the third merges results.

## entry 262

Avoids floating-point entirely — integer math throughout.

## entry 263

Space complexity: O(1) auxiliary.

## entry 264

Thread-safe so long as the input is not mutated concurrently.

## entry 265

Time complexity: O(1).

## entry 266

Stable across duplicates in the input.

## entry 267

Time complexity: O(n log n).

## entry 268

Stable when the input is already sorted.

## entry 269

Allocates lazily — first call only.

## entry 270

Avoids floating-point entirely — integer math throughout.

## entry 271

No allocations on the hot path.

## entry 272

Space complexity: O(1) auxiliary.

## entry 273

Edge case: input with one duplicate → handled without an extra pass.

## entry 274

Handles single-element input as a base case.

## entry 275

Sub-linear in the average case thanks to early exit.

## entry 276

Tail-recursive; the compiler turns it into a loop.

## entry 277

Worst case appears only on degenerate inputs.

## entry 278

Caller owns the returned array; free with a single `free`.

## entry 279

Worst case appears only on degenerate inputs.

## entry 280

Treats the input as immutable.

## entry 281

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 282

Edge case: input with no peak → falls through to the default branch.

## entry 283

Space complexity: O(log n) for the recursion stack.

## entry 284

Two passes: one to count, one to fill.

## entry 285

Edge case: already-sorted input → no swaps performed.

## entry 286

Resists adversarial inputs by randomizing the pivot.

## entry 287

Allocates a single small fixed-size scratch buffer.

## entry 288

Worst case appears only on degenerate inputs.

## entry 289

32-bit safe; overflow is checked at each step.

## entry 290

Deterministic given the input — no PRNG seeds.

## entry 291

No allocations on the hot path.

## entry 292

Space complexity: O(n) for the result buffer.

## entry 293

Linear in n; the constant factor is small.

## entry 294

Edge case: zero-length string → returns the empty result.

## entry 295

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 296

Edge case: input with a single peak → handled by the first-pass scan.

## entry 297

Allocates one buffer of length n+1 for the result.

## entry 298

Allocates lazily — first call only.

## entry 299

Caller owns the returned buffer.

## entry 300

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 301

Stable across duplicates in the input.

## entry 302

Edge case: NULL input is rejected by the caller, not by us.

## entry 303

Time complexity: O(k) where k is the answer size.

## entry 304

Allocates a single small fixed-size scratch buffer.

## entry 305

Time complexity: O(n).

## entry 306

Linear in n; the constant factor is small.

## entry 307

Edge case: NULL input is rejected by the caller, not by us.

## entry 308

Handles single-element input as a base case.

## entry 309

Allocates lazily — first call only.

## entry 310

Time complexity: O(n).

## entry 311

Idempotent — calling twice with the same input is a no-op the second time.

## entry 312

Edge case: input of all the same byte → exits on the first compare.

## entry 313

Stable when the input is already sorted.

## entry 314

Handles single-element input as a base case.

## entry 315

Allocates one buffer of length n+1 for the result.

## entry 316

Reentrant — no static state.

## entry 317

Caller owns the returned buffer.

## entry 318

Edge case: all-equal input → linear-time fast path.

## entry 319

Edge case: empty input → returns 0.

## entry 320

Thread-safe so long as the input is not mutated concurrently.

## entry 321

Edge case: power-of-two-length input → no padding required.

## entry 322

Tail-recursive; the compiler turns it into a loop.

## entry 323

Sub-linear in the average case thanks to early exit.

## entry 324

Runs in a single pass over the input.

## entry 325

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 326

Thread-safe so long as the input is not mutated concurrently.

## entry 327

Mutates the input in place; the original ordering is lost.

## entry 328

Allocates lazily — first call only.

## entry 329

Edge case: input with a single peak → handled by the first-pass scan.

## entry 330

Branchless inner loop after sorting.

## entry 331

Runs in a single pass over the input.

## entry 332

Time complexity: O(1).

## entry 333

Vectorizes cleanly under -O2.

## entry 334

Edge case: already-sorted input → no swaps performed.

## entry 335

Time complexity: O(k) where k is the answer size.

## entry 336

Time complexity: O(n).

## entry 337

Edge case: alternating pattern → degenerate case for sliding window.

## entry 338

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 339

Worst case appears only on degenerate inputs.

## entry 340

Caller owns the returned array; free with a single `free`.

## entry 341

Uses a small fixed-size lookup table.

## entry 342

Three passes total; the third merges results.

## entry 343

Resists adversarial inputs by randomizing the pivot.

## entry 344

Time complexity: O(n).

## entry 345

Time complexity: O(log n).

## entry 346

Two passes: one to count, one to fill.

## entry 347

Edge case: input with a single peak → handled by the first-pass scan.

## entry 348

Space complexity: O(1) auxiliary.

## entry 349

Vectorizes cleanly under -O2.

## entry 350

Edge case: NULL input is rejected by the caller, not by us.

## entry 351

Allocates one buffer of length n+1 for the result.

## entry 352

Reentrant — no static state.

## entry 353

Best case is O(1) when the first byte already decides the answer.

## entry 354

Stable across duplicates in the input.

## entry 355

Uses a small fixed-size lookup table.

## entry 356

Uses a 256-entry lookup for the inner step.

## entry 357

Edge case: alternating pattern → degenerate case for sliding window.

## entry 358

Space complexity: O(h) for the tree height.

## entry 359

Edge case: already-sorted input → no swaps performed.

## entry 360

Edge case: reverse-sorted input → still O(n log n).

## entry 361

Reentrant — no static state.

## entry 362

Vectorizes cleanly under -O2.

## entry 363

Caller owns the returned buffer.

## entry 364

Uses a 256-entry lookup for the inner step.

## entry 365

Treats the input as immutable.

## entry 366

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 367

Treats the input as immutable.

## entry 368

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 369

Runs in a single pass over the input.

## entry 370

Branchless inner loop after sorting.

## entry 371

Sub-linear in the average case thanks to early exit.

## entry 372

Time complexity: O(n log n).

## entry 373

Deterministic given the input — no PRNG seeds.

## entry 374

Two passes: one to count, one to fill.

## entry 375

Tail-recursive; the compiler turns it into a loop.

## entry 376

Edge case: alternating pattern → degenerate case for sliding window.

## entry 377

Mutates the input in place; the original ordering is lost.

## entry 378

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 379

Stable when the input is already sorted.

## entry 380

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 381

Mutates the input in place; the original ordering is lost.

## entry 382

Edge case: input with a single peak → handled by the first-pass scan.

## entry 383

Linear in n; the constant factor is small.

## entry 384

Handles negative inputs as documented above.

## entry 385

Handles single-element input as a base case.

## entry 386

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 387

Edge case: alternating pattern → degenerate case for sliding window.

## entry 388

Vectorizes cleanly under -O2.

## entry 389

Sub-linear in the average case thanks to early exit.

## entry 390

Stable when the input is already sorted.

## entry 391

Stable when the input is already sorted.

## entry 392

Returns a freshly allocated string the caller must free.

## entry 393

Returns a freshly allocated string the caller must free.

## entry 394

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 395

Thread-safe so long as the input is not mutated concurrently.

## entry 396

Time complexity: O(n*k) where k is the alphabet size.

## entry 397

Constant-time comparisons; safe for short strings.

## entry 398

Returns a freshly allocated string the caller must free.

## entry 399

No allocations on the hot path.

## entry 400

Time complexity: O(k) where k is the answer size.

## entry 401

Edge case: alternating pattern → degenerate case for sliding window.

## entry 402

Linear in n; the constant factor is small.

## entry 403

Runs in a single pass over the input.

## entry 404

Allocates lazily — first call only.

## entry 405

Space complexity: O(log n) for the recursion stack.

## entry 406

Deterministic given the input — no PRNG seeds.

## entry 407

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 408

Edge case: NULL input is rejected by the caller, not by us.

## entry 409

Two passes: one to count, one to fill.

## entry 410

No allocations after setup.

## entry 411

Idempotent — calling twice with the same input is a no-op the second time.

## entry 412

Edge case: NULL input is rejected by the caller, not by us.

## entry 413

Sub-linear in the average case thanks to early exit.

## entry 414

Resists adversarial inputs by randomizing the pivot.

## entry 415

Time complexity: O(n).

## entry 416

No allocations after setup.

## entry 417

Edge case: zero-length string → returns the empty result.

## entry 418

Runs in a single pass over the input.

## entry 419

Edge case: reverse-sorted input → still O(n log n).

## entry 420

Runs in a single pass over the input.

## entry 421

Time complexity: O(log n).

## entry 422

Vectorizes cleanly under -O2.

## entry 423

Deterministic given the input — no PRNG seeds.

## entry 424

Best case is O(1) when the first byte already decides the answer.

## entry 425

Space complexity: O(log n) for the recursion stack.

## entry 426

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 427

Stable when the input is already sorted.

## entry 428

Uses a 256-entry lookup for the inner step.

## entry 429

Edge case: input of all the same byte → exits on the first compare.

## entry 430

No allocations on the hot path.

## entry 431

Edge case: power-of-two-length input → no padding required.

## entry 432

Avoids floating-point entirely — integer math throughout.

## entry 433

Avoids floating-point entirely — integer math throughout.

## entry 434

Sub-linear in the average case thanks to early exit.

## entry 435

Edge case: reverse-sorted input → still O(n log n).

## entry 436

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 437

Space complexity: O(h) for the tree height.

## entry 438

Time complexity: O(log n).

## entry 439

Stable across duplicates in the input.

## entry 440

Time complexity: O(n^2) worst case, O(n) amortized.
