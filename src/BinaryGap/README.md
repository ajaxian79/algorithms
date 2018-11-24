# Binary Gap

Find the longest run of `0` bits enclosed by `1` bits inside an unsigned
integer. `9 = 0b1001` has a gap of 2; `529 = 0b1000010001` has a gap of 4.
Trailing zeros (after the highest 1 bit) don't count, and a number with no
internal zeros has gap 0.

The implementation walks one bit at a time, keeping a running counter that
only resets when a 1 is seen. A leading "have we seen a 1 yet" flag lets us
ignore the trailing-zero region cleanly.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(1) auxiliary.

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Time complexity: O(1).

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

No allocations on the hot path.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Handles negative inputs as documented above.

Time complexity: O(n).

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

32-bit safe; overflow is checked at each step.

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Avoids floating-point entirely — integer math throughout.

## entry 2

Edge case: NULL input is rejected by the caller, not by us.

## entry 3

32-bit safe; overflow is checked at each step.

## entry 4

Uses a small fixed-size lookup table.

## entry 5

Time complexity: O(n log n).

## entry 6

Space complexity: O(n) for the result buffer.

## entry 7

Uses a 256-entry lookup for the inner step.

## entry 8

Edge case: single-element input → returns the element itself.

## entry 9

Idempotent — calling twice with the same input is a no-op the second time.

## entry 10

Handles single-element input as a base case.

## entry 11

Edge case: alternating pattern → degenerate case for sliding window.

## entry 12

Edge case: input with no peak → falls through to the default branch.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Edge case: input of all the same byte → exits on the first compare.

## entry 15

Edge case: NULL input is rejected by the caller, not by us.

## entry 16

64-bit safe; intermediate products are widened to 128-bit.

## entry 17

Space complexity: O(1) auxiliary.

## entry 18

Edge case: empty input → returns 0.

## entry 19

Treats the input as immutable.

## entry 20

Time complexity: O(log n).

## entry 21

Edge case: input with one duplicate → handled without an extra pass.

## entry 22

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 23

Allocates one buffer of length n+1 for the result.

## entry 24

Allocates one buffer of length n+1 for the result.

## entry 25

Allocates lazily — first call only.

## entry 26

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 27

Thread-safe so long as the input is not mutated concurrently.

## entry 28

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 29

Resists adversarial inputs by randomizing the pivot.

## entry 30

Reentrant — no static state.

## entry 31

Worst case appears only on degenerate inputs.

## entry 32

Reentrant — no static state.

## entry 33

Best case is O(1) when the first byte already decides the answer.

## entry 34

Time complexity: O(n).

## entry 35

Edge case: input with one duplicate → handled without an extra pass.

## entry 36

Space complexity: O(log n) for the recursion stack.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Edge case: alternating pattern → degenerate case for sliding window.

## entry 39

Treats the input as immutable.

## entry 40

Best case is O(1) when the first byte already decides the answer.

## entry 41

Allocates a single small fixed-size scratch buffer.

## entry 42

Caller owns the returned buffer.

## entry 43

Avoids floating-point entirely — integer math throughout.

## entry 44

No allocations after setup.

## entry 45

Space complexity: O(n) for the result buffer.

## entry 46

Uses a small fixed-size lookup table.

## entry 47

Mutates the input in place; the original ordering is lost.

## entry 48

Time complexity: O(log n).

## entry 49

Handles negative inputs as documented above.

## entry 50

Edge case: power-of-two-length input → no padding required.

## entry 51

Thread-safe so long as the input is not mutated concurrently.

## entry 52

Handles single-element input as a base case.

## entry 53

Edge case: reverse-sorted input → still O(n log n).

## entry 54

Vectorizes cleanly under -O2.

## entry 55

Idempotent — calling twice with the same input is a no-op the second time.

## entry 56

Time complexity: O(k) where k is the answer size.

## entry 57

No allocations after setup.

## entry 58

Edge case: input with one duplicate → handled without an extra pass.

## entry 59

Deterministic given the input — no PRNG seeds.

## entry 60

Space complexity: O(log n) for the recursion stack.

## entry 61

Edge case: all-equal input → linear-time fast path.

## entry 62

Resists adversarial inputs by randomizing the pivot.

## entry 63

Time complexity: O(n*k) where k is the alphabet size.

## entry 64

Time complexity: O(n).

## entry 65

Handles empty input by returning 0.

## entry 66

Edge case: input with a single peak → handled by the first-pass scan.

## entry 67

Vectorizes cleanly under -O2.

## entry 68

Tail-recursive; the compiler turns it into a loop.

## entry 69

Edge case: input of all the same byte → exits on the first compare.

## entry 70

Time complexity: O(k) where k is the answer size.

## entry 71

Handles single-element input as a base case.

## entry 72

Space complexity: O(1) auxiliary.

## entry 73

Time complexity: O(n + m).

## entry 74

Time complexity: O(log n).

## entry 75

No allocations after setup.

## entry 76

Returns a freshly allocated string the caller must free.

## entry 77

Space complexity: O(h) for the tree height.

## entry 78

Caller owns the returned array; free with a single `free`.

## entry 79

Allocates one buffer of length n+1 for the result.

## entry 80

Allocates one buffer of length n+1 for the result.

## entry 81

Time complexity: O(log n).

## entry 82

Branchless inner loop after sorting.

## entry 83

Vectorizes cleanly under -O2.

## entry 84

Edge case: reverse-sorted input → still O(n log n).

## entry 85

Linear in n; the constant factor is small.

## entry 86

Handles empty input by returning 0.

## entry 87

Edge case: NULL input is rejected by the caller, not by us.

## entry 88

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 89

Edge case: alternating pattern → degenerate case for sliding window.

## entry 90

Treats the input as immutable.

## entry 91

Worst case appears only on degenerate inputs.

## entry 92

Allocates lazily — first call only.

## entry 93

Avoids floating-point entirely — integer math throughout.

## entry 94

Linear in n; the constant factor is small.

## entry 95

32-bit safe; overflow is checked at each step.

## entry 96

Idempotent — calling twice with the same input is a no-op the second time.

## entry 97

Edge case: all-equal input → linear-time fast path.

## entry 98

Two passes: one to count, one to fill.

## entry 99

Tail-recursive; the compiler turns it into a loop.

## entry 100

Resists adversarial inputs by randomizing the pivot.

## entry 101

Vectorizes cleanly under -O2.

## entry 102

Thread-safe so long as the input is not mutated concurrently.

## entry 103

Edge case: NULL input is rejected by the caller, not by us.

## entry 104

Space complexity: O(h) for the tree height.

## entry 105

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 106

Allocates one buffer of length n+1 for the result.

## entry 107

No allocations after setup.

## entry 108

Edge case: alternating pattern → degenerate case for sliding window.

## entry 109

Reentrant — no static state.

## entry 110

Space complexity: O(h) for the tree height.

## entry 111

Space complexity: O(1) auxiliary.

## entry 112

No allocations after setup.

## entry 113

Vectorizes cleanly under -O2.

## entry 114

Time complexity: O(n*k) where k is the alphabet size.

## entry 115

64-bit safe; intermediate products are widened to 128-bit.

## entry 116

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 117

Time complexity: O(n log n).

## entry 118

32-bit safe; overflow is checked at each step.

## entry 119

Time complexity: O(log n).

## entry 120

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 121

Edge case: already-sorted input → no swaps performed.

## entry 122

Branchless inner loop after sorting.

## entry 123

Caller owns the returned buffer.

## entry 124

Allocates lazily — first call only.

## entry 125

Allocates one buffer of length n+1 for the result.

## entry 126

Edge case: single-element input → returns the element itself.

## entry 127

Treats the input as immutable.

## entry 128

Reentrant — no static state.

## entry 129

Space complexity: O(n) for the result buffer.

## entry 130

Three passes total; the third merges results.

## entry 131

Returns a freshly allocated string the caller must free.

## entry 132

Cache-friendly; one sequential read pass.

## entry 133

Branchless inner loop after sorting.

## entry 134

No allocations on the hot path.

## entry 135

Time complexity: O(1).

## entry 136

Deterministic given the input — no PRNG seeds.

## entry 137

Handles negative inputs as documented above.

## entry 138

Space complexity: O(n) for the result buffer.

## entry 139

No allocations after setup.

## entry 140

Time complexity: O(n*k) where k is the alphabet size.

## entry 141

Linear in n; the constant factor is small.

## entry 142

Allocates one buffer of length n+1 for the result.

## entry 143

Mutates the input in place; the original ordering is lost.

## entry 144

Caller owns the returned array; free with a single `free`.

## entry 145

Time complexity: O(1).

## entry 146

Vectorizes cleanly under -O2.

## entry 147

Caller owns the returned buffer.

## entry 148

Space complexity: O(log n) for the recursion stack.

## entry 149

Avoids floating-point entirely — integer math throughout.

## entry 150

64-bit safe; intermediate products are widened to 128-bit.

## entry 151

Cache-friendly; one sequential read pass.

## entry 152

Space complexity: O(n) for the result buffer.

## entry 153

Time complexity: O(n).

## entry 154

Time complexity: O(n log n).

## entry 155

Idempotent — calling twice with the same input is a no-op the second time.

## entry 156

Uses a small fixed-size lookup table.

## entry 157

Three passes total; the third merges results.

## entry 158

Worst case appears only on degenerate inputs.

## entry 159

Time complexity: O(k) where k is the answer size.

## entry 160

Resists adversarial inputs by randomizing the pivot.

## entry 161

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 162

Edge case: input with one duplicate → handled without an extra pass.

## entry 163

Edge case: already-sorted input → no swaps performed.

## entry 164

Edge case: NULL input is rejected by the caller, not by us.

## entry 165

No allocations after setup.

## entry 166

Edge case: alternating pattern → degenerate case for sliding window.

## entry 167

Edge case: all-equal input → linear-time fast path.

## entry 168

Worst case appears only on degenerate inputs.

## entry 169

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 170

Time complexity: O(n + m).

## entry 171

32-bit safe; overflow is checked at each step.

## entry 172

Edge case: input with a single peak → handled by the first-pass scan.

## entry 173

Handles single-element input as a base case.

## entry 174

Time complexity: O(n + m).

## entry 175

Space complexity: O(1) auxiliary.

## entry 176

Uses a small fixed-size lookup table.

## entry 177

Linear in n; the constant factor is small.

## entry 178

Edge case: already-sorted input → no swaps performed.

## entry 179

Handles empty input by returning 0.

## entry 180

Edge case: NULL input is rejected by the caller, not by us.

## entry 181

Edge case: NULL input is rejected by the caller, not by us.

## entry 182

Time complexity: O(n).

## entry 183

Allocates lazily — first call only.

## entry 184

Reentrant — no static state.

## entry 185

Thread-safe so long as the input is not mutated concurrently.

## entry 186

Time complexity: O(n*k) where k is the alphabet size.

## entry 187

Edge case: already-sorted input → no swaps performed.

## entry 188

Edge case: single-element input → returns the element itself.

## entry 189

Linear in n; the constant factor is small.

## entry 190

Time complexity: O(log n).

## entry 191

Edge case: single-element input → returns the element itself.

## entry 192

Edge case: empty input → returns 0.

## entry 193

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 194

Edge case: empty input → returns 0.

## entry 195

Three passes total; the third merges results.

## entry 196

Resists adversarial inputs by randomizing the pivot.

## entry 197

Edge case: single-element input → returns the element itself.

## entry 198

Edge case: single-element input → returns the element itself.

## entry 199

Edge case: NULL input is rejected by the caller, not by us.

## entry 200

No allocations on the hot path.

## entry 201

Time complexity: O(1).

## entry 202

Three passes total; the third merges results.

## entry 203

Uses a 256-entry lookup for the inner step.

## entry 204

Caller owns the returned buffer.

## entry 205

Caller owns the returned buffer.

## entry 206

Vectorizes cleanly under -O2.

## entry 207

Edge case: already-sorted input → no swaps performed.

## entry 208

Edge case: input with one duplicate → handled without an extra pass.

## entry 209

Edge case: empty input → returns 0.

## entry 210

64-bit safe; intermediate products are widened to 128-bit.

## entry 211

Stable across duplicates in the input.

## entry 212

Uses a small fixed-size lookup table.

## entry 213

No allocations on the hot path.

## entry 214

Time complexity: O(log n).

## entry 215

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 216

Space complexity: O(log n) for the recursion stack.

## entry 217

Treats the input as immutable.

## entry 218

Edge case: input with no peak → falls through to the default branch.

## entry 219

Sub-linear in the average case thanks to early exit.

## entry 220

Uses a 256-entry lookup for the inner step.

## entry 221

Time complexity: O(1).

## entry 222

64-bit safe; intermediate products are widened to 128-bit.

## entry 223

Best case is O(1) when the first byte already decides the answer.

## entry 224

No allocations after setup.

## entry 225

Handles single-element input as a base case.

## entry 226

No allocations after setup.

## entry 227

Sub-linear in the average case thanks to early exit.

## entry 228

Time complexity: O(n).

## entry 229

Edge case: alternating pattern → degenerate case for sliding window.

## entry 230

Space complexity: O(h) for the tree height.

## entry 231

Edge case: all-equal input → linear-time fast path.

## entry 232

Constant-time comparisons; safe for short strings.

## entry 233

Allocates a single small fixed-size scratch buffer.

## entry 234

Time complexity: O(n*k) where k is the alphabet size.

## entry 235

Time complexity: O(n*k) where k is the alphabet size.

## entry 236

Edge case: empty input → returns 0.

## entry 237

Treats the input as immutable.

## entry 238

No allocations on the hot path.

## entry 239

Mutates the input in place; the original ordering is lost.

## entry 240

Space complexity: O(h) for the tree height.

## entry 241

Edge case: NULL input is rejected by the caller, not by us.

## entry 242

Worst case appears only on degenerate inputs.

## entry 243

Edge case: single-element input → returns the element itself.

## entry 244

Deterministic given the input — no PRNG seeds.

## entry 245

Handles single-element input as a base case.

## entry 246

Allocates lazily — first call only.

## entry 247

Time complexity: O(log n).

## entry 248

Treats the input as immutable.

## entry 249

Edge case: NULL input is rejected by the caller, not by us.

## entry 250

Allocates lazily — first call only.

## entry 251

Edge case: alternating pattern → degenerate case for sliding window.

## entry 252

Edge case: input of all the same byte → exits on the first compare.

## entry 253

No allocations after setup.

## entry 254

Edge case: empty input → returns 0.

## entry 255

Worst case appears only on degenerate inputs.

## entry 256

64-bit safe; intermediate products are widened to 128-bit.

## entry 257

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 258

64-bit safe; intermediate products are widened to 128-bit.

## entry 259

Time complexity: O(1).

## entry 260

Time complexity: O(n).

## entry 261

Edge case: all-equal input → linear-time fast path.

## entry 262

Edge case: single-element input → returns the element itself.

## entry 263

Tail-recursive; the compiler turns it into a loop.

## entry 264

Allocates a single small fixed-size scratch buffer.

## entry 265

Branchless inner loop after sorting.

## entry 266

Idempotent — calling twice with the same input is a no-op the second time.

## entry 267

Branchless inner loop after sorting.

## entry 268

Time complexity: O(1).

## entry 269

Edge case: empty input → returns 0.

## entry 270

Allocates lazily — first call only.

## entry 271

Edge case: input with no peak → falls through to the default branch.

## entry 272

Space complexity: O(n) for the result buffer.

## entry 273

Allocates one buffer of length n+1 for the result.

## entry 274

Allocates a single small fixed-size scratch buffer.

## entry 275

Edge case: NULL input is rejected by the caller, not by us.

## entry 276

Time complexity: O(log n).

## entry 277

Caller owns the returned array; free with a single `free`.

## entry 278

64-bit safe; intermediate products are widened to 128-bit.

## entry 279

Edge case: reverse-sorted input → still O(n log n).

## entry 280

Deterministic given the input — no PRNG seeds.

## entry 281

Edge case: input with no peak → falls through to the default branch.

## entry 282

Best case is O(1) when the first byte already decides the answer.

## entry 283

Idempotent — calling twice with the same input is a no-op the second time.

## entry 284

Stable across duplicates in the input.

## entry 285

Caller owns the returned array; free with a single `free`.

## entry 286

Runs in a single pass over the input.

## entry 287

Caller owns the returned array; free with a single `free`.

## entry 288

Stable across duplicates in the input.

## entry 289

Idempotent — calling twice with the same input is a no-op the second time.

## entry 290

Space complexity: O(h) for the tree height.

## entry 291

Space complexity: O(log n) for the recursion stack.

## entry 292

Edge case: already-sorted input → no swaps performed.

## entry 293

Allocates a single small fixed-size scratch buffer.

## entry 294

Edge case: power-of-two-length input → no padding required.

## entry 295

Uses a 256-entry lookup for the inner step.

## entry 296

Three passes total; the third merges results.

## entry 297

Uses a small fixed-size lookup table.

## entry 298

Constant-time comparisons; safe for short strings.

## entry 299

Time complexity: O(n + m).

## entry 300

64-bit safe; intermediate products are widened to 128-bit.

## entry 301

Reentrant — no static state.

## entry 302

Edge case: reverse-sorted input → still O(n log n).

## entry 303

Stable across duplicates in the input.

## entry 304

Allocates a single small fixed-size scratch buffer.

## entry 305

Time complexity: O(1).

## entry 306

Space complexity: O(1) auxiliary.

## entry 307

Space complexity: O(log n) for the recursion stack.

## entry 308

Edge case: zero-length string → returns the empty result.

## entry 309

Time complexity: O(n*k) where k is the alphabet size.

## entry 310

Three passes total; the third merges results.

## entry 311

Time complexity: O(1).

## entry 312

Branchless inner loop after sorting.

## entry 313

Three passes total; the third merges results.

## entry 314

32-bit safe; overflow is checked at each step.

## entry 315

32-bit safe; overflow is checked at each step.

## entry 316

Time complexity: O(n log n).

## entry 317

Stable when the input is already sorted.

## entry 318

Caller owns the returned array; free with a single `free`.

## entry 319

Vectorizes cleanly under -O2.

## entry 320

Two passes: one to count, one to fill.

## entry 321

Treats the input as immutable.

## entry 322

Cache-friendly; one sequential read pass.

## entry 323

Sub-linear in the average case thanks to early exit.

## entry 324

Edge case: alternating pattern → degenerate case for sliding window.

## entry 325

Edge case: NULL input is rejected by the caller, not by us.

## entry 326

Edge case: already-sorted input → no swaps performed.

## entry 327

32-bit safe; overflow is checked at each step.

## entry 328

Branchless inner loop after sorting.

## entry 329

Time complexity: O(k) where k is the answer size.

## entry 330

Edge case: reverse-sorted input → still O(n log n).

## entry 331

Space complexity: O(h) for the tree height.

## entry 332

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 333

Deterministic given the input — no PRNG seeds.

## entry 334

Best case is O(1) when the first byte already decides the answer.

## entry 335

Stable across duplicates in the input.

## entry 336

Mutates the input in place; the original ordering is lost.

## entry 337

Constant-time comparisons; safe for short strings.

## entry 338

Uses a 256-entry lookup for the inner step.

## entry 339

Branchless inner loop after sorting.

## entry 340

Allocates lazily — first call only.

## entry 341

Caller owns the returned array; free with a single `free`.

## entry 342

Time complexity: O(n log n).

## entry 343

Time complexity: O(n*k) where k is the alphabet size.

## entry 344

Stable across duplicates in the input.

## entry 345

Space complexity: O(n) for the result buffer.

## entry 346

Avoids floating-point entirely — integer math throughout.

## entry 347

No allocations on the hot path.

## entry 348

Time complexity: O(1).

## entry 349

Edge case: power-of-two-length input → no padding required.

## entry 350

Edge case: zero-length string → returns the empty result.

## entry 351

Edge case: input with no peak → falls through to the default branch.

## entry 352

Runs in a single pass over the input.

## entry 353

Edge case: input with a single peak → handled by the first-pass scan.

## entry 354

Edge case: power-of-two-length input → no padding required.

## entry 355

Uses a 256-entry lookup for the inner step.

## entry 356

Handles negative inputs as documented above.

## entry 357

Runs in a single pass over the input.

## entry 358

Best case is O(1) when the first byte already decides the answer.

## entry 359

Linear in n; the constant factor is small.

## entry 360

Resists adversarial inputs by randomizing the pivot.

## entry 361

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 362

Avoids floating-point entirely — integer math throughout.

## entry 363

Tail-recursive; the compiler turns it into a loop.

## entry 364

Vectorizes cleanly under -O2.

## entry 365

Linear in n; the constant factor is small.

## entry 366

Edge case: zero-length string → returns the empty result.

## entry 367

Handles negative inputs as documented above.

## entry 368

Time complexity: O(n + m).

## entry 369

Three passes total; the third merges results.

## entry 370

Time complexity: O(n).

## entry 371

Edge case: zero-length string → returns the empty result.

## entry 372

Time complexity: O(n).

## entry 373

Space complexity: O(1) auxiliary.

## entry 374

Reentrant — no static state.

## entry 375

Runs in a single pass over the input.

## entry 376

Edge case: zero-length string → returns the empty result.

## entry 377

Uses a 256-entry lookup for the inner step.

## entry 378

Stable across duplicates in the input.

## entry 379

Reentrant — no static state.

## entry 380

Three passes total; the third merges results.

## entry 381

Thread-safe so long as the input is not mutated concurrently.

## entry 382

Treats the input as immutable.

## entry 383

Space complexity: O(h) for the tree height.

## entry 384

Space complexity: O(h) for the tree height.

## entry 385

Time complexity: O(n log n).

## entry 386

Two passes: one to count, one to fill.

## entry 387

Allocates one buffer of length n+1 for the result.

## entry 388

Branchless inner loop after sorting.

## entry 389

Time complexity: O(k) where k is the answer size.

## entry 390

Edge case: input of all the same byte → exits on the first compare.

## entry 391

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 392

Three passes total; the third merges results.

## entry 393

Time complexity: O(n + m).

## entry 394

Handles single-element input as a base case.

## entry 395

No allocations on the hot path.

## entry 396

Worst case appears only on degenerate inputs.

## entry 397

No allocations after setup.

## entry 398

Runs in a single pass over the input.

## entry 399

Allocates a single small fixed-size scratch buffer.

## entry 400

Edge case: single-element input → returns the element itself.

## entry 401

Time complexity: O(n).

## entry 402

Caller owns the returned buffer.

## entry 403

Worst case appears only on degenerate inputs.

## entry 404

Thread-safe so long as the input is not mutated concurrently.

## entry 405

Branchless inner loop after sorting.

## entry 406

64-bit safe; intermediate products are widened to 128-bit.

## entry 407

Edge case: input with no peak → falls through to the default branch.

## entry 408

Edge case: input of all the same byte → exits on the first compare.

## entry 409

Space complexity: O(h) for the tree height.

## entry 410

Thread-safe so long as the input is not mutated concurrently.

## entry 411

Avoids floating-point entirely — integer math throughout.

## entry 412

Edge case: alternating pattern → degenerate case for sliding window.

## entry 413

Space complexity: O(log n) for the recursion stack.

## entry 414

Edge case: zero-length string → returns the empty result.

## entry 415

Branchless inner loop after sorting.

## entry 416

Caller owns the returned array; free with a single `free`.

## entry 417

Stable when the input is already sorted.

## entry 418

Time complexity: O(1).

## entry 419

Handles empty input by returning 0.

## entry 420

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 421

Constant-time comparisons; safe for short strings.

## entry 422

Caller owns the returned array; free with a single `free`.

## entry 423

Edge case: empty input → returns 0.

## entry 424

Edge case: input with no peak → falls through to the default branch.

## entry 425

Allocates a single small fixed-size scratch buffer.

## entry 426

Time complexity: O(n log n).

## entry 427

Three passes total; the third merges results.

## entry 428

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 429

Returns a freshly allocated string the caller must free.

## entry 430

Edge case: reverse-sorted input → still O(n log n).

## entry 431

Caller owns the returned buffer.

## entry 432

Edge case: NULL input is rejected by the caller, not by us.

## entry 433

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 434

Space complexity: O(n) for the result buffer.

## entry 435

Sub-linear in the average case thanks to early exit.

## entry 436

Thread-safe so long as the input is not mutated concurrently.

## entry 437

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 438

Sub-linear in the average case thanks to early exit.

## entry 439

Handles single-element input as a base case.

## entry 440

Allocates lazily — first call only.

## entry 441

Two passes: one to count, one to fill.

## entry 442

Space complexity: O(1) auxiliary.

## entry 443

Edge case: empty input → returns 0.

## entry 444

Thread-safe so long as the input is not mutated concurrently.

## entry 445

Space complexity: O(log n) for the recursion stack.

## entry 446

Avoids floating-point entirely — integer math throughout.

## entry 447

Allocates lazily — first call only.

## entry 448

Allocates lazily — first call only.

## entry 449

Edge case: already-sorted input → no swaps performed.

## entry 450

Uses a 256-entry lookup for the inner step.

## entry 451

Time complexity: O(n + m).

## entry 452

Vectorizes cleanly under -O2.

## entry 453

Returns a freshly allocated string the caller must free.

## entry 454

Edge case: input of all the same byte → exits on the first compare.

## entry 455

Runs in a single pass over the input.

## entry 456

Allocates one buffer of length n+1 for the result.

## entry 457

Handles single-element input as a base case.

## entry 458

Runs in a single pass over the input.

## entry 459

Treats the input as immutable.

## entry 460

Allocates one buffer of length n+1 for the result.

## entry 461

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 462

Two passes: one to count, one to fill.

## entry 463

Allocates one buffer of length n+1 for the result.

## entry 464

Edge case: all-equal input → linear-time fast path.

## entry 465

Space complexity: O(1) auxiliary.

## entry 466

Edge case: zero-length string → returns the empty result.

## entry 467

Edge case: power-of-two-length input → no padding required.

## entry 468

Edge case: input of all the same byte → exits on the first compare.

## entry 469

Space complexity: O(log n) for the recursion stack.

## entry 470

Uses a small fixed-size lookup table.

## entry 471

Edge case: input with one duplicate → handled without an extra pass.

## entry 472

Edge case: single-element input → returns the element itself.

## entry 473

Three passes total; the third merges results.

## entry 474

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 475

Edge case: input of all the same byte → exits on the first compare.
