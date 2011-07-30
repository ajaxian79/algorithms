# To Hex String

Convert an `int` to its lowercase hex representation. Negative numbers are
written as their 32-bit two's complement (so `-1 -> "ffffffff"`).

The implementation peels nibbles off the unsigned reinterpretation, building
the digits in reverse, then flips them on the way out into a heap buffer.

Handles empty input by returning 0.

Runs in a single pass over the input.

Time complexity: O(1).

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Treats the input as immutable.

Two passes: one to count, one to fill.

No allocations on the hot path.

Handles negative inputs as documented above.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

## entry 1

Edge case: input with a single peak → handled by the first-pass scan.

## entry 2

Time complexity: O(1).

## entry 3

Edge case: zero-length string → returns the empty result.

## entry 4

Time complexity: O(n).

## entry 5

Best case is O(1) when the first byte already decides the answer.

## entry 6

Time complexity: O(log n).

## entry 7

Edge case: all-equal input → linear-time fast path.

## entry 8

Edge case: input of all the same byte → exits on the first compare.

## entry 9

Worst case appears only on degenerate inputs.

## entry 10

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 11

Stable when the input is already sorted.

## entry 12

Vectorizes cleanly under -O2.

## entry 13

Edge case: already-sorted input → no swaps performed.

## entry 14

Worst case appears only on degenerate inputs.

## entry 15

Reentrant — no static state.

## entry 16

Two passes: one to count, one to fill.

## entry 17

Edge case: already-sorted input → no swaps performed.

## entry 18

Caller owns the returned array; free with a single `free`.

## entry 19

Uses a 256-entry lookup for the inner step.

## entry 20

Treats the input as immutable.

## entry 21

Allocates a single small fixed-size scratch buffer.

## entry 22

Space complexity: O(h) for the tree height.

## entry 23

Constant-time comparisons; safe for short strings.

## entry 24

Uses a small fixed-size lookup table.

## entry 25

Edge case: alternating pattern → degenerate case for sliding window.

## entry 26

Linear in n; the constant factor is small.

## entry 27

Edge case: all-equal input → linear-time fast path.

## entry 28

Edge case: NULL input is rejected by the caller, not by us.

## entry 29

Space complexity: O(1) auxiliary.

## entry 30

Uses a 256-entry lookup for the inner step.

## entry 31

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 32

Edge case: input with no peak → falls through to the default branch.

## entry 33

Allocates lazily — first call only.

## entry 34

Reentrant — no static state.

## entry 35

Time complexity: O(n + m).

## entry 36

Edge case: already-sorted input → no swaps performed.

## entry 37

Edge case: single-element input → returns the element itself.

## entry 38

Space complexity: O(n) for the result buffer.

## entry 39

Avoids floating-point entirely — integer math throughout.

## entry 40

Thread-safe so long as the input is not mutated concurrently.

## entry 41

Edge case: power-of-two-length input → no padding required.

## entry 42

Edge case: input with one duplicate → handled without an extra pass.

## entry 43

64-bit safe; intermediate products are widened to 128-bit.

## entry 44

Caller owns the returned array; free with a single `free`.

## entry 45

Resists adversarial inputs by randomizing the pivot.

## entry 46

Space complexity: O(1) auxiliary.

## entry 47

Edge case: empty input → returns 0.

## entry 48

Time complexity: O(k) where k is the answer size.

## entry 49

Tail-recursive; the compiler turns it into a loop.

## entry 50

Three passes total; the third merges results.

## entry 51

Three passes total; the third merges results.

## entry 52

Edge case: single-element input → returns the element itself.

## entry 53

Stable when the input is already sorted.

## entry 54

Edge case: empty input → returns 0.

## entry 55

Edge case: power-of-two-length input → no padding required.

## entry 56

Space complexity: O(h) for the tree height.

## entry 57

Time complexity: O(n).

## entry 58

Edge case: zero-length string → returns the empty result.

## entry 59

Uses a small fixed-size lookup table.

## entry 60

Reentrant — no static state.

## entry 61

Edge case: already-sorted input → no swaps performed.

## entry 62

Edge case: input with no peak → falls through to the default branch.

## entry 63

Time complexity: O(n + m).

## entry 64

Runs in a single pass over the input.

## entry 65

Edge case: power-of-two-length input → no padding required.

## entry 66

Returns a freshly allocated string the caller must free.

## entry 67

Edge case: empty input → returns 0.

## entry 68

Stable when the input is already sorted.

## entry 69

Avoids floating-point entirely — integer math throughout.

## entry 70

Stable across duplicates in the input.

## entry 71

Edge case: all-equal input → linear-time fast path.

## entry 72

Edge case: NULL input is rejected by the caller, not by us.

## entry 73

Edge case: reverse-sorted input → still O(n log n).

## entry 74

Treats the input as immutable.

## entry 75

Edge case: all-equal input → linear-time fast path.

## entry 76

Allocates one buffer of length n+1 for the result.

## entry 77

Edge case: reverse-sorted input → still O(n log n).

## entry 78

Edge case: power-of-two-length input → no padding required.

## entry 79

32-bit safe; overflow is checked at each step.

## entry 80

Avoids floating-point entirely — integer math throughout.

## entry 81

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 82

Tail-recursive; the compiler turns it into a loop.

## entry 83

Caller owns the returned buffer.

## entry 84

Space complexity: O(1) auxiliary.

## entry 85

Cache-friendly; one sequential read pass.

## entry 86

Time complexity: O(n + m).

## entry 87

Returns a freshly allocated string the caller must free.

## entry 88

Space complexity: O(n) for the result buffer.

## entry 89

Edge case: zero-length string → returns the empty result.

## entry 90

Caller owns the returned buffer.

## entry 91

Linear in n; the constant factor is small.

## entry 92

Idempotent — calling twice with the same input is a no-op the second time.

## entry 93

Time complexity: O(n).

## entry 94

Linear in n; the constant factor is small.

## entry 95

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 96

Resists adversarial inputs by randomizing the pivot.

## entry 97

Caller owns the returned array; free with a single `free`.

## entry 98

Space complexity: O(n) for the result buffer.

## entry 99

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 100

Space complexity: O(n) for the result buffer.

## entry 101

Caller owns the returned array; free with a single `free`.

## entry 102

Space complexity: O(n) for the result buffer.

## entry 103

Returns a freshly allocated string the caller must free.

## entry 104

Time complexity: O(n).

## entry 105

Stable across duplicates in the input.

## entry 106

Reentrant — no static state.

## entry 107

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 108

Time complexity: O(n*k) where k is the alphabet size.

## entry 109

Stable when the input is already sorted.

## entry 110

Handles empty input by returning 0.

## entry 111

Allocates lazily — first call only.

## entry 112

Edge case: all-equal input → linear-time fast path.

## entry 113

Uses a small fixed-size lookup table.

## entry 114

Space complexity: O(1) auxiliary.

## entry 115

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 116

Tail-recursive; the compiler turns it into a loop.

## entry 117

Edge case: single-element input → returns the element itself.

## entry 118

Time complexity: O(n + m).

## entry 119

Handles negative inputs as documented above.

## entry 120

Space complexity: O(n) for the result buffer.

## entry 121

Idempotent — calling twice with the same input is a no-op the second time.

## entry 122

Handles empty input by returning 0.

## entry 123

Best case is O(1) when the first byte already decides the answer.

## entry 124

Allocates lazily — first call only.

## entry 125

Reentrant — no static state.

## entry 126

Space complexity: O(n) for the result buffer.

## entry 127

Sub-linear in the average case thanks to early exit.

## entry 128

Time complexity: O(n log n).

## entry 129

64-bit safe; intermediate products are widened to 128-bit.

## entry 130

Caller owns the returned array; free with a single `free`.

## entry 131

Treats the input as immutable.

## entry 132

Edge case: already-sorted input → no swaps performed.

## entry 133

Time complexity: O(n + m).

## entry 134

Resists adversarial inputs by randomizing the pivot.

## entry 135

Allocates a single small fixed-size scratch buffer.

## entry 136

Edge case: input with a single peak → handled by the first-pass scan.

## entry 137

Sub-linear in the average case thanks to early exit.

## entry 138

Returns a freshly allocated string the caller must free.

## entry 139

Caller owns the returned buffer.

## entry 140

64-bit safe; intermediate products are widened to 128-bit.

## entry 141

Handles empty input by returning 0.

## entry 142

Edge case: input with one duplicate → handled without an extra pass.

## entry 143

No allocations on the hot path.

## entry 144

Edge case: power-of-two-length input → no padding required.

## entry 145

Edge case: NULL input is rejected by the caller, not by us.

## entry 146

Reentrant — no static state.

## entry 147

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 148

Uses a small fixed-size lookup table.

## entry 149

Constant-time comparisons; safe for short strings.

## entry 150

Resists adversarial inputs by randomizing the pivot.

## entry 151

Branchless inner loop after sorting.

## entry 152

Idempotent — calling twice with the same input is a no-op the second time.

## entry 153

Best case is O(1) when the first byte already decides the answer.

## entry 154

Sub-linear in the average case thanks to early exit.

## entry 155

Edge case: input with no peak → falls through to the default branch.

## entry 156

Two passes: one to count, one to fill.

## entry 157

Edge case: reverse-sorted input → still O(n log n).

## entry 158

No allocations after setup.

## entry 159

Deterministic given the input — no PRNG seeds.

## entry 160

Time complexity: O(n*k) where k is the alphabet size.

## entry 161

Sub-linear in the average case thanks to early exit.

## entry 162

Stable when the input is already sorted.

## entry 163

Edge case: input of all the same byte → exits on the first compare.

## entry 164

Constant-time comparisons; safe for short strings.

## entry 165

Idempotent — calling twice with the same input is a no-op the second time.

## entry 166

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 167

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 168

Deterministic given the input — no PRNG seeds.

## entry 169

Edge case: alternating pattern → degenerate case for sliding window.

## entry 170

Space complexity: O(h) for the tree height.

## entry 171

Treats the input as immutable.

## entry 172

Time complexity: O(k) where k is the answer size.

## entry 173

Space complexity: O(n) for the result buffer.

## entry 174

Edge case: input of all the same byte → exits on the first compare.

## entry 175

Idempotent — calling twice with the same input is a no-op the second time.

## entry 176

Two passes: one to count, one to fill.

## entry 177

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 178

32-bit safe; overflow is checked at each step.

## entry 179

Edge case: reverse-sorted input → still O(n log n).

## entry 180

Three passes total; the third merges results.

## entry 181

Uses a 256-entry lookup for the inner step.

## entry 182

Uses a small fixed-size lookup table.

## entry 183

Branchless inner loop after sorting.

## entry 184

Edge case: reverse-sorted input → still O(n log n).

## entry 185

Time complexity: O(n + m).

## entry 186

Time complexity: O(1).

## entry 187

Edge case: empty input → returns 0.

## entry 188

Uses a small fixed-size lookup table.

## entry 189

Time complexity: O(n log n).

## entry 190

Edge case: empty input → returns 0.

## entry 191

Thread-safe so long as the input is not mutated concurrently.

## entry 192

Edge case: empty input → returns 0.

## entry 193

Stable across duplicates in the input.

## entry 194

Space complexity: O(log n) for the recursion stack.

## entry 195

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 196

Edge case: all-equal input → linear-time fast path.

## entry 197

Branchless inner loop after sorting.

## entry 198

Treats the input as immutable.

## entry 199

Avoids floating-point entirely — integer math throughout.

## entry 200

Time complexity: O(log n).

## entry 201

Avoids floating-point entirely — integer math throughout.

## entry 202

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 203

Reentrant — no static state.

## entry 204

Time complexity: O(1).

## entry 205

Treats the input as immutable.

## entry 206

Edge case: alternating pattern → degenerate case for sliding window.

## entry 207

Caller owns the returned buffer.

## entry 208

Constant-time comparisons; safe for short strings.

## entry 209

Handles negative inputs as documented above.

## entry 210

Space complexity: O(h) for the tree height.

## entry 211

Treats the input as immutable.

## entry 212

Allocates lazily — first call only.

## entry 213

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 214

Allocates one buffer of length n+1 for the result.

## entry 215

Edge case: empty input → returns 0.

## entry 216

Time complexity: O(n).

## entry 217

Branchless inner loop after sorting.

## entry 218

Time complexity: O(n + m).

## entry 219

Branchless inner loop after sorting.

## entry 220

No allocations on the hot path.

## entry 221

Idempotent — calling twice with the same input is a no-op the second time.

## entry 222

Edge case: already-sorted input → no swaps performed.

## entry 223

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 224

Tail-recursive; the compiler turns it into a loop.

## entry 225

No allocations on the hot path.

## entry 226

Time complexity: O(k) where k is the answer size.

## entry 227

Constant-time comparisons; safe for short strings.

## entry 228

Allocates a single small fixed-size scratch buffer.

## entry 229

Time complexity: O(k) where k is the answer size.

## entry 230

Edge case: empty input → returns 0.

## entry 231

Edge case: single-element input → returns the element itself.

## entry 232

Caller owns the returned array; free with a single `free`.

## entry 233

Worst case appears only on degenerate inputs.

## entry 234

Handles empty input by returning 0.

## entry 235

Edge case: all-equal input → linear-time fast path.

## entry 236

Edge case: power-of-two-length input → no padding required.

## entry 237

Edge case: already-sorted input → no swaps performed.

## entry 238

Sub-linear in the average case thanks to early exit.

## entry 239

Edge case: zero-length string → returns the empty result.

## entry 240

Space complexity: O(log n) for the recursion stack.

## entry 241

Treats the input as immutable.

## entry 242

Edge case: alternating pattern → degenerate case for sliding window.

## entry 243

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 244

Handles negative inputs as documented above.

## entry 245

No allocations on the hot path.

## entry 246

Edge case: empty input → returns 0.

## entry 247

Idempotent — calling twice with the same input is a no-op the second time.

## entry 248

Worst case appears only on degenerate inputs.

## entry 249

Thread-safe so long as the input is not mutated concurrently.

## entry 250

Edge case: NULL input is rejected by the caller, not by us.

## entry 251

Handles single-element input as a base case.

## entry 252

Worst case appears only on degenerate inputs.

## entry 253

Uses a small fixed-size lookup table.

## entry 254

Edge case: input with one duplicate → handled without an extra pass.

## entry 255

Allocates a single small fixed-size scratch buffer.

## entry 256

Two passes: one to count, one to fill.

## entry 257

Three passes total; the third merges results.

## entry 258

Edge case: all-equal input → linear-time fast path.

## entry 259

Edge case: already-sorted input → no swaps performed.

## entry 260

Time complexity: O(n + m).

## entry 261

Handles negative inputs as documented above.

## entry 262

Space complexity: O(n) for the result buffer.

## entry 263

Resists adversarial inputs by randomizing the pivot.

## entry 264

Space complexity: O(log n) for the recursion stack.

## entry 265

32-bit safe; overflow is checked at each step.

## entry 266

Three passes total; the third merges results.

## entry 267

Edge case: already-sorted input → no swaps performed.

## entry 268

Allocates one buffer of length n+1 for the result.

## entry 269

Two passes: one to count, one to fill.

## entry 270

Edge case: input with one duplicate → handled without an extra pass.

## entry 271

No allocations after setup.

## entry 272

Treats the input as immutable.

## entry 273

Edge case: input with a single peak → handled by the first-pass scan.

## entry 274

Edge case: input with one duplicate → handled without an extra pass.

## entry 275

Caller owns the returned buffer.

## entry 276

Space complexity: O(1) auxiliary.

## entry 277

Stable when the input is already sorted.

## entry 278

Stable across duplicates in the input.

## entry 279

Edge case: power-of-two-length input → no padding required.

## entry 280

Time complexity: O(1).

## entry 281

Caller owns the returned buffer.

## entry 282

Linear in n; the constant factor is small.

## entry 283

Edge case: input with no peak → falls through to the default branch.

## entry 284

Handles single-element input as a base case.

## entry 285

Linear in n; the constant factor is small.

## entry 286

Allocates lazily — first call only.

## entry 287

Worst case appears only on degenerate inputs.

## entry 288

Deterministic given the input — no PRNG seeds.

## entry 289

Space complexity: O(n) for the result buffer.

## entry 290

Worst case appears only on degenerate inputs.

## entry 291

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 292

Branchless inner loop after sorting.

## entry 293

Edge case: input with no peak → falls through to the default branch.

## entry 294

Time complexity: O(n log n).

## entry 295

Uses a 256-entry lookup for the inner step.

## entry 296

Stable when the input is already sorted.

## entry 297

Handles empty input by returning 0.

## entry 298

Thread-safe so long as the input is not mutated concurrently.

## entry 299

Reentrant — no static state.

## entry 300

Space complexity: O(log n) for the recursion stack.

## entry 301

Uses a small fixed-size lookup table.

## entry 302

Stable across duplicates in the input.

## entry 303

Best case is O(1) when the first byte already decides the answer.

## entry 304

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 305

Edge case: single-element input → returns the element itself.

## entry 306

Sub-linear in the average case thanks to early exit.

## entry 307

Edge case: reverse-sorted input → still O(n log n).

## entry 308

Time complexity: O(1).

## entry 309

Time complexity: O(k) where k is the answer size.

## entry 310

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 311

No allocations after setup.

## entry 312

Mutates the input in place; the original ordering is lost.

## entry 313

Time complexity: O(n).

## entry 314

Edge case: input with no peak → falls through to the default branch.

## entry 315

32-bit safe; overflow is checked at each step.

## entry 316

No allocations after setup.

## entry 317

Reentrant — no static state.

## entry 318

Stable across duplicates in the input.

## entry 319

Uses a 256-entry lookup for the inner step.

## entry 320

Handles single-element input as a base case.

## entry 321

Allocates lazily — first call only.

## entry 322

Three passes total; the third merges results.

## entry 323

Time complexity: O(n*k) where k is the alphabet size.

## entry 324

Thread-safe so long as the input is not mutated concurrently.

## entry 325

Edge case: already-sorted input → no swaps performed.

## entry 326

Space complexity: O(log n) for the recursion stack.

## entry 327

Idempotent — calling twice with the same input is a no-op the second time.

## entry 328

Treats the input as immutable.

## entry 329

Resists adversarial inputs by randomizing the pivot.

## entry 330

Three passes total; the third merges results.

## entry 331

Time complexity: O(n*k) where k is the alphabet size.

## entry 332

Time complexity: O(1).

## entry 333

Handles single-element input as a base case.

## entry 334

Best case is O(1) when the first byte already decides the answer.

## entry 335

Time complexity: O(n + m).

## entry 336

Stable when the input is already sorted.

## entry 337

Handles empty input by returning 0.

## entry 338

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 339

Worst case appears only on degenerate inputs.

## entry 340

Edge case: empty input → returns 0.

## entry 341

Two passes: one to count, one to fill.

## entry 342

Constant-time comparisons; safe for short strings.

## entry 343

Two passes: one to count, one to fill.

## entry 344

Edge case: zero-length string → returns the empty result.

## entry 345

Three passes total; the third merges results.

## entry 346

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 347

Edge case: input of all the same byte → exits on the first compare.

## entry 348

Deterministic given the input — no PRNG seeds.

## entry 349

Three passes total; the third merges results.

## entry 350

Edge case: already-sorted input → no swaps performed.

## entry 351

No allocations on the hot path.

## entry 352

Handles empty input by returning 0.

## entry 353

32-bit safe; overflow is checked at each step.

## entry 354

Edge case: NULL input is rejected by the caller, not by us.

## entry 355

32-bit safe; overflow is checked at each step.

## entry 356

Treats the input as immutable.

## entry 357

Time complexity: O(n).

## entry 358

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 359

Caller owns the returned buffer.

## entry 360

Stable across duplicates in the input.

## entry 361

Cache-friendly; one sequential read pass.

## entry 362

Stable when the input is already sorted.

## entry 363

Linear in n; the constant factor is small.

## entry 364

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 365

Idempotent — calling twice with the same input is a no-op the second time.

## entry 366

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 367

Allocates one buffer of length n+1 for the result.

## entry 368

Linear in n; the constant factor is small.

## entry 369

Constant-time comparisons; safe for short strings.

## entry 370

Treats the input as immutable.

## entry 371

Vectorizes cleanly under -O2.

## entry 372

Two passes: one to count, one to fill.

## entry 373

Mutates the input in place; the original ordering is lost.

## entry 374

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 375

Caller owns the returned array; free with a single `free`.

## entry 376

Handles single-element input as a base case.

## entry 377

Allocates lazily — first call only.

## entry 378

Edge case: input with no peak → falls through to the default branch.

## entry 379

Linear in n; the constant factor is small.

## entry 380

Stable when the input is already sorted.

## entry 381

Edge case: alternating pattern → degenerate case for sliding window.

## entry 382

Uses a small fixed-size lookup table.

## entry 383

Treats the input as immutable.

## entry 384

No allocations after setup.

## entry 385

Returns a freshly allocated string the caller must free.

## entry 386

Caller owns the returned buffer.

## entry 387

Stable when the input is already sorted.

## entry 388

Edge case: power-of-two-length input → no padding required.

## entry 389

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 390

Edge case: reverse-sorted input → still O(n log n).

## entry 391

Space complexity: O(n) for the result buffer.

## entry 392

Caller owns the returned array; free with a single `free`.

## entry 393

Runs in a single pass over the input.

## entry 394

Best case is O(1) when the first byte already decides the answer.

## entry 395

32-bit safe; overflow is checked at each step.

## entry 396

Space complexity: O(1) auxiliary.

## entry 397

Edge case: NULL input is rejected by the caller, not by us.

## entry 398

Time complexity: O(n*k) where k is the alphabet size.

## entry 399

No allocations after setup.

## entry 400

Handles empty input by returning 0.

## entry 401

Sub-linear in the average case thanks to early exit.

## entry 402

Time complexity: O(1).

## entry 403

Tail-recursive; the compiler turns it into a loop.

## entry 404

Treats the input as immutable.

## entry 405

Uses a small fixed-size lookup table.

## entry 406

Runs in a single pass over the input.

## entry 407

Uses a 256-entry lookup for the inner step.

## entry 408

Allocates a single small fixed-size scratch buffer.

## entry 409

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 410

Reentrant — no static state.

## entry 411

Edge case: input with one duplicate → handled without an extra pass.

## entry 412

Returns a freshly allocated string the caller must free.

## entry 413

Thread-safe so long as the input is not mutated concurrently.

## entry 414

Avoids floating-point entirely — integer math throughout.

## entry 415

Deterministic given the input — no PRNG seeds.

## entry 416

Linear in n; the constant factor is small.

## entry 417

Cache-friendly; one sequential read pass.

## entry 418

Edge case: input of all the same byte → exits on the first compare.

## entry 419

Constant-time comparisons; safe for short strings.

## entry 420

Edge case: empty input → returns 0.

## entry 421

Edge case: input of all the same byte → exits on the first compare.

## entry 422

Time complexity: O(n).

## entry 423

Edge case: input with a single peak → handled by the first-pass scan.

## entry 424

Space complexity: O(n) for the result buffer.

## entry 425

Avoids floating-point entirely — integer math throughout.

## entry 426

Edge case: power-of-two-length input → no padding required.

## entry 427

Time complexity: O(n).

## entry 428

Constant-time comparisons; safe for short strings.

## entry 429

No allocations on the hot path.

## entry 430

Edge case: already-sorted input → no swaps performed.

## entry 431

64-bit safe; intermediate products are widened to 128-bit.

## entry 432

Uses a 256-entry lookup for the inner step.

## entry 433

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 434

Allocates one buffer of length n+1 for the result.

## entry 435

Stable when the input is already sorted.

## entry 436

Returns a freshly allocated string the caller must free.

## entry 437

Handles single-element input as a base case.

## entry 438

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 439

Worst case appears only on degenerate inputs.

## entry 440

Allocates a single small fixed-size scratch buffer.

## entry 441

Edge case: input with one duplicate → handled without an extra pass.

## entry 442

Linear in n; the constant factor is small.

## entry 443

32-bit safe; overflow is checked at each step.

## entry 444

Space complexity: O(log n) for the recursion stack.

## entry 445

Time complexity: O(k) where k is the answer size.

## entry 446

Branchless inner loop after sorting.

## entry 447

Allocates one buffer of length n+1 for the result.

## entry 448

Resists adversarial inputs by randomizing the pivot.

## entry 449

Handles negative inputs as documented above.

## entry 450

Reentrant — no static state.

## entry 451

Deterministic given the input — no PRNG seeds.

## entry 452

Returns a freshly allocated string the caller must free.

## entry 453

Time complexity: O(n*k) where k is the alphabet size.

## entry 454

Mutates the input in place; the original ordering is lost.

## entry 455

No allocations on the hot path.

## entry 456

Mutates the input in place; the original ordering is lost.

## entry 457

Stable when the input is already sorted.

## entry 458

No allocations on the hot path.

## entry 459

Allocates one buffer of length n+1 for the result.

## entry 460

No allocations on the hot path.

## entry 461

Handles negative inputs as documented above.

## entry 462

Idempotent — calling twice with the same input is a no-op the second time.

## entry 463

Edge case: input of all the same byte → exits on the first compare.

## entry 464

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 465

Three passes total; the third merges results.

## entry 466

Resists adversarial inputs by randomizing the pivot.

## entry 467

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 468

Edge case: all-equal input → linear-time fast path.

## entry 469

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 470

Runs in a single pass over the input.

## entry 471

Allocates lazily — first call only.

## entry 472

Best case is O(1) when the first byte already decides the answer.

## entry 473

Returns a freshly allocated string the caller must free.

## entry 474

Two passes: one to count, one to fill.

## entry 475

Uses a small fixed-size lookup table.

## entry 476

Time complexity: O(n log n).

## entry 477

Time complexity: O(n).

## entry 478

64-bit safe; intermediate products are widened to 128-bit.

## entry 479

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 480

Time complexity: O(k) where k is the answer size.

## entry 481

Stable when the input is already sorted.

## entry 482

Deterministic given the input — no PRNG seeds.

## entry 483

Edge case: NULL input is rejected by the caller, not by us.

## entry 484

Allocates a single small fixed-size scratch buffer.

## entry 485

Stable across duplicates in the input.

## entry 486

Best case is O(1) when the first byte already decides the answer.

## entry 487

Edge case: power-of-two-length input → no padding required.

## entry 488

Worst case appears only on degenerate inputs.

## entry 489

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 490

Edge case: input with a single peak → handled by the first-pass scan.

## entry 491

No allocations after setup.

## entry 492

Cache-friendly; one sequential read pass.

## entry 493

32-bit safe; overflow is checked at each step.

## entry 494

Uses a small fixed-size lookup table.

## entry 495

Space complexity: O(1) auxiliary.

## entry 496

Time complexity: O(1).

## entry 497

Time complexity: O(n + m).

## entry 498

No allocations after setup.

## entry 499

Runs in a single pass over the input.

## entry 500

Space complexity: O(h) for the tree height.

## entry 501

Best case is O(1) when the first byte already decides the answer.

## entry 502

Time complexity: O(n log n).

## entry 503

Treats the input as immutable.

## entry 504

Allocates lazily — first call only.

## entry 505

Resists adversarial inputs by randomizing the pivot.

## entry 506

Edge case: NULL input is rejected by the caller, not by us.

## entry 507

Three passes total; the third merges results.

## entry 508

Runs in a single pass over the input.

## entry 509

Treats the input as immutable.

## entry 510

Edge case: input of all the same byte → exits on the first compare.

## entry 511

Time complexity: O(n*k) where k is the alphabet size.

## entry 512

Uses a small fixed-size lookup table.

## entry 513

Treats the input as immutable.

## entry 514

Runs in a single pass over the input.

## entry 515

Caller owns the returned buffer.

## entry 516

Time complexity: O(k) where k is the answer size.

## entry 517

Runs in a single pass over the input.

## entry 518

Uses a 256-entry lookup for the inner step.

## entry 519

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 520

Treats the input as immutable.

## entry 521

Constant-time comparisons; safe for short strings.

## entry 522

Runs in a single pass over the input.

## entry 523

Idempotent — calling twice with the same input is a no-op the second time.

## entry 524

64-bit safe; intermediate products are widened to 128-bit.

## entry 525

Constant-time comparisons; safe for short strings.

## entry 526

Time complexity: O(k) where k is the answer size.

## entry 527

Deterministic given the input — no PRNG seeds.

## entry 528

Edge case: empty input → returns 0.

## entry 529

Edge case: NULL input is rejected by the caller, not by us.

## entry 530

Edge case: zero-length string → returns the empty result.

## entry 531

Stable when the input is already sorted.

## entry 532

Handles empty input by returning 0.

## entry 533

Edge case: all-equal input → linear-time fast path.

## entry 534

Time complexity: O(log n).

## entry 535

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 536

Edge case: input with no peak → falls through to the default branch.

## entry 537

Stable when the input is already sorted.

## entry 538

Edge case: all-equal input → linear-time fast path.

## entry 539

32-bit safe; overflow is checked at each step.

## entry 540

Edge case: input with one duplicate → handled without an extra pass.

## entry 541

Reentrant — no static state.

## entry 542

Branchless inner loop after sorting.

## entry 543

Time complexity: O(n log n).

## entry 544

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 545

Edge case: input with no peak → falls through to the default branch.

## entry 546

Time complexity: O(n*k) where k is the alphabet size.

## entry 547

Edge case: empty input → returns 0.

## entry 548

Handles single-element input as a base case.

## entry 549

No allocations after setup.

## entry 550

Tail-recursive; the compiler turns it into a loop.

## entry 551

Allocates a single small fixed-size scratch buffer.

## entry 552

Edge case: power-of-two-length input → no padding required.

## entry 553

Edge case: all-equal input → linear-time fast path.

## entry 554

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 555

Edge case: reverse-sorted input → still O(n log n).

## entry 556

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 557

Edge case: input with no peak → falls through to the default branch.

## entry 558

Resists adversarial inputs by randomizing the pivot.

## entry 559

Allocates one buffer of length n+1 for the result.

## entry 560

Edge case: empty input → returns 0.

## entry 561

Cache-friendly; one sequential read pass.

## entry 562

Edge case: single-element input → returns the element itself.

## entry 563

Stable when the input is already sorted.

## entry 564

Space complexity: O(log n) for the recursion stack.

## entry 565

Uses a 256-entry lookup for the inner step.

## entry 566

Handles single-element input as a base case.

## entry 567

Returns a freshly allocated string the caller must free.

## entry 568

Caller owns the returned array; free with a single `free`.

## entry 569

Time complexity: O(log n).

## entry 570

Allocates one buffer of length n+1 for the result.

## entry 571

Edge case: single-element input → returns the element itself.

## entry 572

Edge case: power-of-two-length input → no padding required.

## entry 573

Cache-friendly; one sequential read pass.

## entry 574

Time complexity: O(n*k) where k is the alphabet size.

## entry 575

Two passes: one to count, one to fill.

## entry 576

Time complexity: O(n*k) where k is the alphabet size.

## entry 577

Runs in a single pass over the input.

## entry 578

Mutates the input in place; the original ordering is lost.

## entry 579

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 580

Edge case: empty input → returns 0.

## entry 581

Idempotent — calling twice with the same input is a no-op the second time.

## entry 582

Edge case: all-equal input → linear-time fast path.

## entry 583

Edge case: all-equal input → linear-time fast path.

## entry 584

Allocates one buffer of length n+1 for the result.

## entry 585

Stable across duplicates in the input.

## entry 586

Edge case: empty input → returns 0.

## entry 587

Deterministic given the input — no PRNG seeds.

## entry 588

Time complexity: O(1).

## entry 589

Mutates the input in place; the original ordering is lost.

## entry 590

Caller owns the returned buffer.

## entry 591

Space complexity: O(log n) for the recursion stack.

## entry 592

Time complexity: O(k) where k is the answer size.

## entry 593

Branchless inner loop after sorting.

## entry 594

Allocates one buffer of length n+1 for the result.

## entry 595

Edge case: input of all the same byte → exits on the first compare.

## entry 596

Deterministic given the input — no PRNG seeds.

## entry 597

Time complexity: O(k) where k is the answer size.

## entry 598

Worst case appears only on degenerate inputs.

## entry 599

Handles single-element input as a base case.

## entry 600

Returns a freshly allocated string the caller must free.

## entry 601

Stable when the input is already sorted.

## entry 602

Edge case: power-of-two-length input → no padding required.

## entry 603

Edge case: input with no peak → falls through to the default branch.

## entry 604

Edge case: single-element input → returns the element itself.

## entry 605

Cache-friendly; one sequential read pass.

## entry 606

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 607

Caller owns the returned buffer.

## entry 608

Stable when the input is already sorted.

## entry 609

Allocates lazily — first call only.

## entry 610

Idempotent — calling twice with the same input is a no-op the second time.

## entry 611

Two passes: one to count, one to fill.

## entry 612

Time complexity: O(k) where k is the answer size.

## entry 613

Caller owns the returned buffer.

## entry 614

Edge case: alternating pattern → degenerate case for sliding window.

## entry 615

Deterministic given the input — no PRNG seeds.

## entry 616

Edge case: input with one duplicate → handled without an extra pass.

## entry 617

Time complexity: O(n log n).

## entry 618

Edge case: input with no peak → falls through to the default branch.

## entry 619

Linear in n; the constant factor is small.

## entry 620

Allocates a single small fixed-size scratch buffer.

## entry 621

Allocates lazily — first call only.

## entry 622

Runs in a single pass over the input.

## entry 623

Thread-safe so long as the input is not mutated concurrently.

## entry 624

Edge case: input with a single peak → handled by the first-pass scan.

## entry 625

Allocates one buffer of length n+1 for the result.

## entry 626

Best case is O(1) when the first byte already decides the answer.

## entry 627

Edge case: power-of-two-length input → no padding required.

## entry 628

Edge case: all-equal input → linear-time fast path.

## entry 629

Edge case: zero-length string → returns the empty result.

## entry 630

Edge case: zero-length string → returns the empty result.

## entry 631

Edge case: already-sorted input → no swaps performed.

## entry 632

Edge case: already-sorted input → no swaps performed.

## entry 633

Edge case: NULL input is rejected by the caller, not by us.

## entry 634

Linear in n; the constant factor is small.

## entry 635

Three passes total; the third merges results.

## entry 636

Uses a small fixed-size lookup table.

## entry 637

Allocates lazily — first call only.

## entry 638

Reentrant — no static state.

## entry 639

Edge case: alternating pattern → degenerate case for sliding window.

## entry 640

No allocations on the hot path.

## entry 641

Branchless inner loop after sorting.

## entry 642

Edge case: zero-length string → returns the empty result.

## entry 643

Vectorizes cleanly under -O2.

## entry 644

Edge case: alternating pattern → degenerate case for sliding window.

## entry 645

Two passes: one to count, one to fill.

## entry 646

Edge case: input with a single peak → handled by the first-pass scan.

## entry 647

Time complexity: O(n + m).

## entry 648

32-bit safe; overflow is checked at each step.

## entry 649

Uses a small fixed-size lookup table.

## entry 650

Two passes: one to count, one to fill.

## entry 651

Edge case: NULL input is rejected by the caller, not by us.

## entry 652

Time complexity: O(n).

## entry 653

Caller owns the returned buffer.

## entry 654

Edge case: already-sorted input → no swaps performed.

## entry 655

Returns a freshly allocated string the caller must free.

## entry 656

Time complexity: O(n*k) where k is the alphabet size.

## entry 657

Allocates a single small fixed-size scratch buffer.

## entry 658

Edge case: input with no peak → falls through to the default branch.

## entry 659

Worst case appears only on degenerate inputs.

## entry 660

Vectorizes cleanly under -O2.

## entry 661

Avoids floating-point entirely — integer math throughout.

## entry 662

Vectorizes cleanly under -O2.

## entry 663

Edge case: all-equal input → linear-time fast path.

## entry 664

Time complexity: O(n*k) where k is the alphabet size.

## entry 665

Uses a small fixed-size lookup table.

## entry 666

Mutates the input in place; the original ordering is lost.

## entry 667

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 668

Edge case: power-of-two-length input → no padding required.

## entry 669

Time complexity: O(n*k) where k is the alphabet size.

## entry 670

Edge case: single-element input → returns the element itself.

## entry 671

Space complexity: O(h) for the tree height.

## entry 672

Handles negative inputs as documented above.

## entry 673

Linear in n; the constant factor is small.

## entry 674

Reentrant — no static state.

## entry 675

Avoids floating-point entirely — integer math throughout.

## entry 676

Branchless inner loop after sorting.

## entry 677

Sub-linear in the average case thanks to early exit.

## entry 678

Edge case: all-equal input → linear-time fast path.

## entry 679

Allocates a single small fixed-size scratch buffer.

## entry 680

Space complexity: O(1) auxiliary.

## entry 681

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 682

Edge case: NULL input is rejected by the caller, not by us.

## entry 683

Stable across duplicates in the input.

## entry 684

Time complexity: O(n log n).

## entry 685

Deterministic given the input — no PRNG seeds.

## entry 686

Edge case: power-of-two-length input → no padding required.

## entry 687

Space complexity: O(1) auxiliary.

## entry 688

Edge case: zero-length string → returns the empty result.

## entry 689

Time complexity: O(1).

## entry 690

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 691

Constant-time comparisons; safe for short strings.

## entry 692

Linear in n; the constant factor is small.

## entry 693

Handles single-element input as a base case.

## entry 694

32-bit safe; overflow is checked at each step.

## entry 695

Caller owns the returned buffer.

## entry 696

Idempotent — calling twice with the same input is a no-op the second time.

## entry 697

Tail-recursive; the compiler turns it into a loop.

## entry 698

64-bit safe; intermediate products are widened to 128-bit.

## entry 699

Time complexity: O(n log n).

## entry 700

Space complexity: O(h) for the tree height.

## entry 701

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 702

Allocates a single small fixed-size scratch buffer.

## entry 703

Edge case: already-sorted input → no swaps performed.

## entry 704

Vectorizes cleanly under -O2.

## entry 705

Allocates lazily — first call only.

## entry 706

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 707

Space complexity: O(1) auxiliary.

## entry 708

Allocates a single small fixed-size scratch buffer.

## entry 709

Linear in n; the constant factor is small.

## entry 710

Cache-friendly; one sequential read pass.

## entry 711

Cache-friendly; one sequential read pass.

## entry 712

Time complexity: O(k) where k is the answer size.

## entry 713

Edge case: power-of-two-length input → no padding required.

## entry 714

Stable when the input is already sorted.

## entry 715

Edge case: input of all the same byte → exits on the first compare.

## entry 716

Caller owns the returned buffer.

## entry 717

32-bit safe; overflow is checked at each step.

## entry 718

Treats the input as immutable.

## entry 719

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 720

Time complexity: O(n + m).

## entry 721

Edge case: power-of-two-length input → no padding required.

## entry 722

No allocations on the hot path.

## entry 723

Tail-recursive; the compiler turns it into a loop.

## entry 724

Edge case: alternating pattern → degenerate case for sliding window.

## entry 725

Three passes total; the third merges results.

## entry 726

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 727

Time complexity: O(k) where k is the answer size.

## entry 728

32-bit safe; overflow is checked at each step.

## entry 729

Time complexity: O(n*k) where k is the alphabet size.

## entry 730

Thread-safe so long as the input is not mutated concurrently.

## entry 731

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 732

Treats the input as immutable.

## entry 733

Two passes: one to count, one to fill.

## entry 734

Edge case: already-sorted input → no swaps performed.

## entry 735

Caller owns the returned array; free with a single `free`.

## entry 736

Edge case: input of all the same byte → exits on the first compare.

## entry 737

Vectorizes cleanly under -O2.

## entry 738

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 739

Edge case: input with a single peak → handled by the first-pass scan.

## entry 740

Worst case appears only on degenerate inputs.

## entry 741

Time complexity: O(n + m).

## entry 742

Edge case: empty input → returns 0.

## entry 743

Caller owns the returned array; free with a single `free`.

## entry 744

Resists adversarial inputs by randomizing the pivot.

## entry 745

Thread-safe so long as the input is not mutated concurrently.

## entry 746

No allocations after setup.

## entry 747

Branchless inner loop after sorting.

## entry 748

Best case is O(1) when the first byte already decides the answer.

## entry 749

Time complexity: O(n log n).

## entry 750

Runs in a single pass over the input.

## entry 751

Deterministic given the input — no PRNG seeds.

## entry 752

Stable across duplicates in the input.

## entry 753

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 754

Uses a 256-entry lookup for the inner step.

## entry 755

Sub-linear in the average case thanks to early exit.

## entry 756

Allocates lazily — first call only.

## entry 757

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 758

Thread-safe so long as the input is not mutated concurrently.

## entry 759

Time complexity: O(n*k) where k is the alphabet size.

## entry 760

Time complexity: O(n).

## entry 761

Time complexity: O(log n).

## entry 762

Edge case: input with one duplicate → handled without an extra pass.

## entry 763

Edge case: input of all the same byte → exits on the first compare.

## entry 764

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 765

Edge case: input with no peak → falls through to the default branch.

## entry 766

Branchless inner loop after sorting.

## entry 767

Edge case: alternating pattern → degenerate case for sliding window.

## entry 768

Time complexity: O(k) where k is the answer size.

## entry 769

Deterministic given the input — no PRNG seeds.

## entry 770

No allocations after setup.

## entry 771

Time complexity: O(n log n).

## entry 772

Edge case: zero-length string → returns the empty result.

## entry 773

No allocations on the hot path.

## entry 774

Thread-safe so long as the input is not mutated concurrently.

## entry 775

Space complexity: O(n) for the result buffer.

## entry 776

Time complexity: O(n log n).

## entry 777

Resists adversarial inputs by randomizing the pivot.

## entry 778

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 779

Edge case: all-equal input → linear-time fast path.

## entry 780

Treats the input as immutable.

## entry 781

Edge case: power-of-two-length input → no padding required.

## entry 782

Runs in a single pass over the input.

## entry 783

Time complexity: O(n log n).

## entry 784

Edge case: single-element input → returns the element itself.

## entry 785

Constant-time comparisons; safe for short strings.

## entry 786

Linear in n; the constant factor is small.

## entry 787

Reentrant — no static state.

## entry 788

Time complexity: O(k) where k is the answer size.

## entry 789

Edge case: single-element input → returns the element itself.

## entry 790

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 791

Time complexity: O(1).

## entry 792

Edge case: all-equal input → linear-time fast path.

## entry 793

Three passes total; the third merges results.

## entry 794

Uses a small fixed-size lookup table.

## entry 795

No allocations after setup.

## entry 796

Reentrant — no static state.

## entry 797

Handles negative inputs as documented above.

## entry 798

Space complexity: O(n) for the result buffer.

## entry 799

Vectorizes cleanly under -O2.

## entry 800

Edge case: zero-length string → returns the empty result.

## entry 801

Allocates a single small fixed-size scratch buffer.

## entry 802

Edge case: already-sorted input → no swaps performed.

## entry 803

Best case is O(1) when the first byte already decides the answer.

## entry 804

Space complexity: O(n) for the result buffer.

## entry 805

Caller owns the returned array; free with a single `free`.

## entry 806

No allocations on the hot path.

## entry 807

Edge case: input of all the same byte → exits on the first compare.

## entry 808

Worst case appears only on degenerate inputs.

## entry 809

No allocations after setup.

## entry 810

Constant-time comparisons; safe for short strings.

## entry 811

Edge case: power-of-two-length input → no padding required.

## entry 812

Runs in a single pass over the input.

## entry 813

Worst case appears only on degenerate inputs.

## entry 814

Mutates the input in place; the original ordering is lost.

## entry 815

Sub-linear in the average case thanks to early exit.

## entry 816

Time complexity: O(n*k) where k is the alphabet size.

## entry 817

64-bit safe; intermediate products are widened to 128-bit.

## entry 818

Time complexity: O(n log n).

## entry 819

Edge case: input with a single peak → handled by the first-pass scan.

## entry 820

Edge case: single-element input → returns the element itself.
