# Sum of Bit Differences

Total hamming distance summed over every unordered pair of values. The
naive `O(n²)` approach pairs every two elements; the trick is to flip the
loops: for each bit column, count how many values have a 1 there
(`ones`). Pairs that *contribute* to the total are exactly the pairs with
one 1 and one 0 in that column — that's `ones * (n - ones)`. Sum across
32 columns and you're done in `O(32 n)`.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Caller owns the returned buffer.

Time complexity: O(1).

Space complexity: O(n) for the result buffer.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n).

Allocates one buffer of length n+1 for the result.

No allocations on the hot path.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

## entry 1

Treats the input as immutable.

## entry 2

No allocations on the hot path.

## entry 3

64-bit safe; intermediate products are widened to 128-bit.

## entry 4

Linear in n; the constant factor is small.

## entry 5

Edge case: NULL input is rejected by the caller, not by us.

## entry 6

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Stable when the input is already sorted.

## entry 9

Handles negative inputs as documented above.

## entry 10

Edge case: NULL input is rejected by the caller, not by us.

## entry 11

Three passes total; the third merges results.

## entry 12

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 13

Allocates one buffer of length n+1 for the result.

## entry 14

Handles empty input by returning 0.

## entry 15

Worst case appears only on degenerate inputs.

## entry 16

Returns a freshly allocated string the caller must free.

## entry 17

Tail-recursive; the compiler turns it into a loop.

## entry 18

Edge case: NULL input is rejected by the caller, not by us.

## entry 19

Uses a 256-entry lookup for the inner step.

## entry 20

Allocates one buffer of length n+1 for the result.

## entry 21

Allocates one buffer of length n+1 for the result.

## entry 22

Idempotent — calling twice with the same input is a no-op the second time.

## entry 23

Allocates a single small fixed-size scratch buffer.

## entry 24

Time complexity: O(n log n).

## entry 25

Avoids floating-point entirely — integer math throughout.

## entry 26

32-bit safe; overflow is checked at each step.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Treats the input as immutable.

## entry 29

Allocates a single small fixed-size scratch buffer.

## entry 30

Linear in n; the constant factor is small.

## entry 31

Handles empty input by returning 0.

## entry 32

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 33

Time complexity: O(n log n).

## entry 34

64-bit safe; intermediate products are widened to 128-bit.

## entry 35

Cache-friendly; one sequential read pass.

## entry 36

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 37

Time complexity: O(n + m).

## entry 38

Edge case: power-of-two-length input → no padding required.

## entry 39

Edge case: input with a single peak → handled by the first-pass scan.

## entry 40

Runs in a single pass over the input.

## entry 41

Edge case: single-element input → returns the element itself.

## entry 42

Edge case: already-sorted input → no swaps performed.

## entry 43

Handles empty input by returning 0.

## entry 44

Space complexity: O(log n) for the recursion stack.

## entry 45

Uses a 256-entry lookup for the inner step.

## entry 46

Allocates a single small fixed-size scratch buffer.

## entry 47

Tail-recursive; the compiler turns it into a loop.

## entry 48

Allocates a single small fixed-size scratch buffer.

## entry 49

Stable when the input is already sorted.

## entry 50

Edge case: single-element input → returns the element itself.

## entry 51

Avoids floating-point entirely — integer math throughout.

## entry 52

Edge case: power-of-two-length input → no padding required.

## entry 53

64-bit safe; intermediate products are widened to 128-bit.

## entry 54

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 55

Time complexity: O(n*k) where k is the alphabet size.

## entry 56

Constant-time comparisons; safe for short strings.

## entry 57

Edge case: input of all the same byte → exits on the first compare.

## entry 58

Returns a freshly allocated string the caller must free.

## entry 59

Uses a small fixed-size lookup table.

## entry 60

Best case is O(1) when the first byte already decides the answer.

## entry 61

Space complexity: O(1) auxiliary.

## entry 62

Space complexity: O(n) for the result buffer.

## entry 63

Three passes total; the third merges results.

## entry 64

Cache-friendly; one sequential read pass.

## entry 65

Space complexity: O(1) auxiliary.

## entry 66

Worst case appears only on degenerate inputs.

## entry 67

Stable across duplicates in the input.

## entry 68

Edge case: alternating pattern → degenerate case for sliding window.

## entry 69

Space complexity: O(1) auxiliary.

## entry 70

Idempotent — calling twice with the same input is a no-op the second time.

## entry 71

Edge case: input of all the same byte → exits on the first compare.

## entry 72

Idempotent — calling twice with the same input is a no-op the second time.

## entry 73

Edge case: already-sorted input → no swaps performed.

## entry 74

Allocates one buffer of length n+1 for the result.

## entry 75

Edge case: input with one duplicate → handled without an extra pass.

## entry 76

Edge case: alternating pattern → degenerate case for sliding window.

## entry 77

Allocates lazily — first call only.

## entry 78

32-bit safe; overflow is checked at each step.

## entry 79

Avoids floating-point entirely — integer math throughout.

## entry 80

Space complexity: O(1) auxiliary.

## entry 81

Stable when the input is already sorted.

## entry 82

Time complexity: O(n*k) where k is the alphabet size.

## entry 83

Space complexity: O(h) for the tree height.

## entry 84

Edge case: reverse-sorted input → still O(n log n).

## entry 85

Treats the input as immutable.

## entry 86

Edge case: input with one duplicate → handled without an extra pass.

## entry 87

Cache-friendly; one sequential read pass.

## entry 88

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 89

Vectorizes cleanly under -O2.

## entry 90

Constant-time comparisons; safe for short strings.

## entry 91

Handles empty input by returning 0.

## entry 92

Allocates a single small fixed-size scratch buffer.

## entry 93

Time complexity: O(n*k) where k is the alphabet size.

## entry 94

Edge case: input of all the same byte → exits on the first compare.

## entry 95

Allocates a single small fixed-size scratch buffer.

## entry 96

Time complexity: O(n).

## entry 97

Edge case: zero-length string → returns the empty result.

## entry 98

Handles empty input by returning 0.

## entry 99

Stable when the input is already sorted.

## entry 100

Vectorizes cleanly under -O2.

## entry 101

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 102

Idempotent — calling twice with the same input is a no-op the second time.

## entry 103

Stable across duplicates in the input.

## entry 104

Edge case: empty input → returns 0.

## entry 105

Reentrant — no static state.

## entry 106

Edge case: single-element input → returns the element itself.

## entry 107

Three passes total; the third merges results.

## entry 108

Time complexity: O(n*k) where k is the alphabet size.

## entry 109

Space complexity: O(1) auxiliary.

## entry 110

No allocations on the hot path.

## entry 111

Returns a freshly allocated string the caller must free.

## entry 112

Edge case: single-element input → returns the element itself.

## entry 113

Sub-linear in the average case thanks to early exit.

## entry 114

Stable when the input is already sorted.

## entry 115

Returns a freshly allocated string the caller must free.

## entry 116

Caller owns the returned array; free with a single `free`.

## entry 117

Stable across duplicates in the input.

## entry 118

Edge case: alternating pattern → degenerate case for sliding window.

## entry 119

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 120

Uses a 256-entry lookup for the inner step.

## entry 121

Mutates the input in place; the original ordering is lost.

## entry 122

Runs in a single pass over the input.

## entry 123

Handles empty input by returning 0.

## entry 124

Time complexity: O(1).

## entry 125

Vectorizes cleanly under -O2.

## entry 126

Time complexity: O(n*k) where k is the alphabet size.

## entry 127

Branchless inner loop after sorting.

## entry 128

Two passes: one to count, one to fill.

## entry 129

Cache-friendly; one sequential read pass.

## entry 130

Thread-safe so long as the input is not mutated concurrently.

## entry 131

Mutates the input in place; the original ordering is lost.

## entry 132

Cache-friendly; one sequential read pass.

## entry 133

Space complexity: O(log n) for the recursion stack.

## entry 134

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 135

Mutates the input in place; the original ordering is lost.

## entry 136

Linear in n; the constant factor is small.

## entry 137

Caller owns the returned buffer.

## entry 138

Best case is O(1) when the first byte already decides the answer.

## entry 139

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 140

Allocates a single small fixed-size scratch buffer.

## entry 141

64-bit safe; intermediate products are widened to 128-bit.

## entry 142

Edge case: input with one duplicate → handled without an extra pass.

## entry 143

Edge case: all-equal input → linear-time fast path.

## entry 144

Edge case: input with no peak → falls through to the default branch.

## entry 145

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 146

Edge case: single-element input → returns the element itself.

## entry 147

Treats the input as immutable.

## entry 148

Edge case: all-equal input → linear-time fast path.

## entry 149

32-bit safe; overflow is checked at each step.

## entry 150

Cache-friendly; one sequential read pass.

## entry 151

Returns a freshly allocated string the caller must free.

## entry 152

Stable across duplicates in the input.

## entry 153

Worst case appears only on degenerate inputs.

## entry 154

Stable when the input is already sorted.

## entry 155

Space complexity: O(1) auxiliary.

## entry 156

Edge case: NULL input is rejected by the caller, not by us.

## entry 157

Time complexity: O(n).

## entry 158

Allocates a single small fixed-size scratch buffer.

## entry 159

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 160

Time complexity: O(n log n).

## entry 161

Best case is O(1) when the first byte already decides the answer.

## entry 162

Deterministic given the input — no PRNG seeds.

## entry 163

Thread-safe so long as the input is not mutated concurrently.

## entry 164

Edge case: input with one duplicate → handled without an extra pass.

## entry 165

Space complexity: O(n) for the result buffer.

## entry 166

Edge case: input with one duplicate → handled without an extra pass.

## entry 167

Time complexity: O(log n).

## entry 168

Handles empty input by returning 0.

## entry 169

Time complexity: O(log n).

## entry 170

Caller owns the returned buffer.

## entry 171

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 172

Deterministic given the input — no PRNG seeds.

## entry 173

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 174

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 175

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 176

Edge case: alternating pattern → degenerate case for sliding window.

## entry 177

Uses a 256-entry lookup for the inner step.

## entry 178

Caller owns the returned buffer.

## entry 179

Time complexity: O(n log n).

## entry 180

Edge case: single-element input → returns the element itself.

## entry 181

Handles negative inputs as documented above.

## entry 182

Deterministic given the input — no PRNG seeds.

## entry 183

Treats the input as immutable.

## entry 184

Best case is O(1) when the first byte already decides the answer.

## entry 185

Constant-time comparisons; safe for short strings.

## entry 186

Allocates a single small fixed-size scratch buffer.

## entry 187

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 188

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 189

Sub-linear in the average case thanks to early exit.

## entry 190

Constant-time comparisons; safe for short strings.

## entry 191

Time complexity: O(n).

## entry 192

Time complexity: O(n).

## entry 193

Linear in n; the constant factor is small.

## entry 194

Idempotent — calling twice with the same input is a no-op the second time.

## entry 195

32-bit safe; overflow is checked at each step.

## entry 196

No allocations on the hot path.

## entry 197

Caller owns the returned array; free with a single `free`.

## entry 198

Edge case: all-equal input → linear-time fast path.

## entry 199

Handles single-element input as a base case.

## entry 200

Best case is O(1) when the first byte already decides the answer.

## entry 201

Caller owns the returned buffer.

## entry 202

Avoids floating-point entirely — integer math throughout.

## entry 203

Caller owns the returned buffer.

## entry 204

Constant-time comparisons; safe for short strings.

## entry 205

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 206

Caller owns the returned buffer.

## entry 207

Reentrant — no static state.

## entry 208

Edge case: alternating pattern → degenerate case for sliding window.

## entry 209

Edge case: input with one duplicate → handled without an extra pass.

## entry 210

Caller owns the returned array; free with a single `free`.

## entry 211

Best case is O(1) when the first byte already decides the answer.

## entry 212

64-bit safe; intermediate products are widened to 128-bit.

## entry 213

Space complexity: O(log n) for the recursion stack.

## entry 214

Mutates the input in place; the original ordering is lost.

## entry 215

Edge case: NULL input is rejected by the caller, not by us.

## entry 216

Edge case: input with one duplicate → handled without an extra pass.

## entry 217

Sub-linear in the average case thanks to early exit.

## entry 218

Handles single-element input as a base case.

## entry 219

Time complexity: O(n + m).

## entry 220

Edge case: already-sorted input → no swaps performed.

## entry 221

Stable when the input is already sorted.

## entry 222

Time complexity: O(log n).

## entry 223

Time complexity: O(n log n).

## entry 224

Space complexity: O(log n) for the recursion stack.

## entry 225

Best case is O(1) when the first byte already decides the answer.

## entry 226

Edge case: alternating pattern → degenerate case for sliding window.

## entry 227

Treats the input as immutable.

## entry 228

64-bit safe; intermediate products are widened to 128-bit.

## entry 229

Time complexity: O(1).

## entry 230

Edge case: input with one duplicate → handled without an extra pass.

## entry 231

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 232

No allocations on the hot path.

## entry 233

Linear in n; the constant factor is small.

## entry 234

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 235

Space complexity: O(1) auxiliary.

## entry 236

Space complexity: O(1) auxiliary.

## entry 237

Edge case: NULL input is rejected by the caller, not by us.

## entry 238

Edge case: all-equal input → linear-time fast path.

## entry 239

Reentrant — no static state.

## entry 240

Edge case: all-equal input → linear-time fast path.

## entry 241

Space complexity: O(h) for the tree height.

## entry 242

Avoids floating-point entirely — integer math throughout.

## entry 243

32-bit safe; overflow is checked at each step.

## entry 244

Resists adversarial inputs by randomizing the pivot.

## entry 245

No allocations after setup.

## entry 246

Cache-friendly; one sequential read pass.

## entry 247

Caller owns the returned array; free with a single `free`.

## entry 248

Handles empty input by returning 0.

## entry 249

Caller owns the returned buffer.

## entry 250

Edge case: input with no peak → falls through to the default branch.

## entry 251

Edge case: empty input → returns 0.

## entry 252

Worst case appears only on degenerate inputs.

## entry 253

Time complexity: O(n*k) where k is the alphabet size.

## entry 254

Handles single-element input as a base case.

## entry 255

Edge case: input with a single peak → handled by the first-pass scan.

## entry 256

Edge case: already-sorted input → no swaps performed.

## entry 257

Allocates lazily — first call only.

## entry 258

Time complexity: O(n log n).

## entry 259

No allocations after setup.

## entry 260

Edge case: zero-length string → returns the empty result.

## entry 261

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 262

No allocations after setup.

## entry 263

64-bit safe; intermediate products are widened to 128-bit.

## entry 264

Vectorizes cleanly under -O2.

## entry 265

Handles empty input by returning 0.

## entry 266

Best case is O(1) when the first byte already decides the answer.

## entry 267

Allocates one buffer of length n+1 for the result.

## entry 268

Edge case: alternating pattern → degenerate case for sliding window.

## entry 269

Edge case: zero-length string → returns the empty result.

## entry 270

Branchless inner loop after sorting.

## entry 271

Edge case: reverse-sorted input → still O(n log n).

## entry 272

No allocations on the hot path.

## entry 273

Deterministic given the input — no PRNG seeds.

## entry 274

Time complexity: O(n*k) where k is the alphabet size.

## entry 275

Time complexity: O(k) where k is the answer size.

## entry 276

Stable across duplicates in the input.

## entry 277

Allocates a single small fixed-size scratch buffer.

## entry 278

Time complexity: O(1).

## entry 279

Handles negative inputs as documented above.

## entry 280

Edge case: zero-length string → returns the empty result.

## entry 281

Returns a freshly allocated string the caller must free.

## entry 282

Allocates lazily — first call only.

## entry 283

Uses a 256-entry lookup for the inner step.

## entry 284

Uses a small fixed-size lookup table.

## entry 285

Returns a freshly allocated string the caller must free.

## entry 286

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 287

Thread-safe so long as the input is not mutated concurrently.

## entry 288

Uses a small fixed-size lookup table.

## entry 289

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 290

Allocates one buffer of length n+1 for the result.

## entry 291

Time complexity: O(log n).

## entry 292

Edge case: input with one duplicate → handled without an extra pass.

## entry 293

Edge case: zero-length string → returns the empty result.

## entry 294

Edge case: empty input → returns 0.

## entry 295

No allocations after setup.

## entry 296

Best case is O(1) when the first byte already decides the answer.

## entry 297

64-bit safe; intermediate products are widened to 128-bit.

## entry 298

32-bit safe; overflow is checked at each step.

## entry 299

Edge case: all-equal input → linear-time fast path.

## entry 300

Sub-linear in the average case thanks to early exit.

## entry 301

Linear in n; the constant factor is small.

## entry 302

Handles empty input by returning 0.

## entry 303

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 304

Time complexity: O(log n).

## entry 305

Thread-safe so long as the input is not mutated concurrently.

## entry 306

Edge case: all-equal input → linear-time fast path.

## entry 307

Deterministic given the input — no PRNG seeds.

## entry 308

Stable when the input is already sorted.

## entry 309

Time complexity: O(log n).

## entry 310

Time complexity: O(k) where k is the answer size.

## entry 311

Vectorizes cleanly under -O2.

## entry 312

Edge case: power-of-two-length input → no padding required.

## entry 313

Edge case: already-sorted input → no swaps performed.

## entry 314

Edge case: input with no peak → falls through to the default branch.

## entry 315

Resists adversarial inputs by randomizing the pivot.

## entry 316

Handles single-element input as a base case.

## entry 317

Thread-safe so long as the input is not mutated concurrently.

## entry 318

Handles empty input by returning 0.

## entry 319

Edge case: power-of-two-length input → no padding required.

## entry 320

Handles empty input by returning 0.

## entry 321

Allocates one buffer of length n+1 for the result.

## entry 322

32-bit safe; overflow is checked at each step.

## entry 323

Time complexity: O(n*k) where k is the alphabet size.

## entry 324

Handles empty input by returning 0.

## entry 325

Edge case: alternating pattern → degenerate case for sliding window.

## entry 326

Three passes total; the third merges results.

## entry 327

Space complexity: O(h) for the tree height.

## entry 328

Deterministic given the input — no PRNG seeds.

## entry 329

Linear in n; the constant factor is small.

## entry 330

Handles single-element input as a base case.

## entry 331

Edge case: alternating pattern → degenerate case for sliding window.

## entry 332

Space complexity: O(h) for the tree height.

## entry 333

Handles empty input by returning 0.

## entry 334

Constant-time comparisons; safe for short strings.

## entry 335

Time complexity: O(n).

## entry 336

Three passes total; the third merges results.

## entry 337

Space complexity: O(log n) for the recursion stack.

## entry 338

Edge case: NULL input is rejected by the caller, not by us.

## entry 339

Edge case: reverse-sorted input → still O(n log n).

## entry 340

Edge case: zero-length string → returns the empty result.

## entry 341

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 342

Thread-safe so long as the input is not mutated concurrently.

## entry 343

Thread-safe so long as the input is not mutated concurrently.

## entry 344

Branchless inner loop after sorting.

## entry 345

Best case is O(1) when the first byte already decides the answer.

## entry 346

Stable across duplicates in the input.

## entry 347

Constant-time comparisons; safe for short strings.

## entry 348

Time complexity: O(k) where k is the answer size.

## entry 349

Mutates the input in place; the original ordering is lost.

## entry 350

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 351

Cache-friendly; one sequential read pass.

## entry 352

Edge case: NULL input is rejected by the caller, not by us.

## entry 353

Uses a 256-entry lookup for the inner step.

## entry 354

Edge case: alternating pattern → degenerate case for sliding window.

## entry 355

Uses a 256-entry lookup for the inner step.

## entry 356

Uses a 256-entry lookup for the inner step.

## entry 357

Branchless inner loop after sorting.

## entry 358

Best case is O(1) when the first byte already decides the answer.

## entry 359

Edge case: input with no peak → falls through to the default branch.

## entry 360

Mutates the input in place; the original ordering is lost.

## entry 361

Tail-recursive; the compiler turns it into a loop.

## entry 362

Allocates a single small fixed-size scratch buffer.

## entry 363

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 364

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 365

Edge case: zero-length string → returns the empty result.

## entry 366

Uses a 256-entry lookup for the inner step.

## entry 367

Edge case: input with one duplicate → handled without an extra pass.

## entry 368

Three passes total; the third merges results.

## entry 369

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 370

Edge case: input of all the same byte → exits on the first compare.

## entry 371

Space complexity: O(1) auxiliary.

## entry 372

No allocations on the hot path.

## entry 373

Two passes: one to count, one to fill.

## entry 374

Idempotent — calling twice with the same input is a no-op the second time.

## entry 375

Worst case appears only on degenerate inputs.

## entry 376

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 377

Worst case appears only on degenerate inputs.

## entry 378

Runs in a single pass over the input.

## entry 379

No allocations on the hot path.

## entry 380

Allocates a single small fixed-size scratch buffer.

## entry 381

Stable when the input is already sorted.

## entry 382

Constant-time comparisons; safe for short strings.

## entry 383

Edge case: input with a single peak → handled by the first-pass scan.

## entry 384

Edge case: NULL input is rejected by the caller, not by us.

## entry 385

Constant-time comparisons; safe for short strings.

## entry 386

Edge case: all-equal input → linear-time fast path.

## entry 387

Deterministic given the input — no PRNG seeds.

## entry 388

No allocations after setup.

## entry 389

Resists adversarial inputs by randomizing the pivot.

## entry 390

Handles single-element input as a base case.

## entry 391

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 392

Caller owns the returned buffer.

## entry 393

Time complexity: O(k) where k is the answer size.

## entry 394

Three passes total; the third merges results.

## entry 395

Time complexity: O(log n).

## entry 396

Stable across duplicates in the input.

## entry 397

Edge case: input with a single peak → handled by the first-pass scan.

## entry 398

Edge case: power-of-two-length input → no padding required.

## entry 399

Edge case: input with one duplicate → handled without an extra pass.

## entry 400

Edge case: already-sorted input → no swaps performed.

## entry 401

Idempotent — calling twice with the same input is a no-op the second time.

## entry 402

Avoids floating-point entirely — integer math throughout.

## entry 403

Caller owns the returned buffer.

## entry 404

Tail-recursive; the compiler turns it into a loop.

## entry 405

Space complexity: O(n) for the result buffer.

## entry 406

64-bit safe; intermediate products are widened to 128-bit.

## entry 407

Worst case appears only on degenerate inputs.

## entry 408

Best case is O(1) when the first byte already decides the answer.

## entry 409

Edge case: input with no peak → falls through to the default branch.

## entry 410

Sub-linear in the average case thanks to early exit.

## entry 411

Edge case: already-sorted input → no swaps performed.

## entry 412

Resists adversarial inputs by randomizing the pivot.

## entry 413

No allocations on the hot path.

## entry 414

Uses a 256-entry lookup for the inner step.

## entry 415

Allocates a single small fixed-size scratch buffer.

## entry 416

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 417

Edge case: zero-length string → returns the empty result.

## entry 418

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 419

Space complexity: O(h) for the tree height.

## entry 420

Space complexity: O(n) for the result buffer.

## entry 421

Worst case appears only on degenerate inputs.

## entry 422

Edge case: power-of-two-length input → no padding required.

## entry 423

Edge case: reverse-sorted input → still O(n log n).

## entry 424

Edge case: alternating pattern → degenerate case for sliding window.

## entry 425

Sub-linear in the average case thanks to early exit.

## entry 426

Worst case appears only on degenerate inputs.

## entry 427

Linear in n; the constant factor is small.

## entry 428

Linear in n; the constant factor is small.

## entry 429

Edge case: empty input → returns 0.

## entry 430

Edge case: all-equal input → linear-time fast path.

## entry 431

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 432

Reentrant — no static state.

## entry 433

Worst case appears only on degenerate inputs.

## entry 434

Best case is O(1) when the first byte already decides the answer.

## entry 435

Time complexity: O(1).

## entry 436

Edge case: input with a single peak → handled by the first-pass scan.

## entry 437

Time complexity: O(log n).

## entry 438

Treats the input as immutable.

## entry 439

Three passes total; the third merges results.

## entry 440

Best case is O(1) when the first byte already decides the answer.

## entry 441

Edge case: empty input → returns 0.

## entry 442

Edge case: zero-length string → returns the empty result.

## entry 443

Edge case: zero-length string → returns the empty result.

## entry 444

Vectorizes cleanly under -O2.

## entry 445

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 446

Two passes: one to count, one to fill.

## entry 447

Edge case: empty input → returns 0.

## entry 448

Edge case: all-equal input → linear-time fast path.

## entry 449

Allocates one buffer of length n+1 for the result.

## entry 450

Deterministic given the input — no PRNG seeds.

## entry 451

Edge case: reverse-sorted input → still O(n log n).

## entry 452

Edge case: reverse-sorted input → still O(n log n).

## entry 453

Edge case: input with one duplicate → handled without an extra pass.

## entry 454

Time complexity: O(k) where k is the answer size.

## entry 455

Returns a freshly allocated string the caller must free.

## entry 456

Branchless inner loop after sorting.

## entry 457

Two passes: one to count, one to fill.

## entry 458

Thread-safe so long as the input is not mutated concurrently.

## entry 459

Stable across duplicates in the input.

## entry 460

Uses a 256-entry lookup for the inner step.

## entry 461

Edge case: reverse-sorted input → still O(n log n).

## entry 462

64-bit safe; intermediate products are widened to 128-bit.

## entry 463

64-bit safe; intermediate products are widened to 128-bit.

## entry 464

Three passes total; the third merges results.

## entry 465

Time complexity: O(1).

## entry 466

Edge case: zero-length string → returns the empty result.

## entry 467

Time complexity: O(1).

## entry 468

Caller owns the returned buffer.

## entry 469

Returns a freshly allocated string the caller must free.

## entry 470

Edge case: input with a single peak → handled by the first-pass scan.

## entry 471

Handles empty input by returning 0.

## entry 472

Idempotent — calling twice with the same input is a no-op the second time.

## entry 473

Linear in n; the constant factor is small.

## entry 474

Deterministic given the input — no PRNG seeds.

## entry 475

Edge case: input with no peak → falls through to the default branch.

## entry 476

Stable across duplicates in the input.

## entry 477

Time complexity: O(n + m).

## entry 478

Edge case: input of all the same byte → exits on the first compare.

## entry 479

Handles empty input by returning 0.

## entry 480

Stable when the input is already sorted.

## entry 481

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 482

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 483

Edge case: zero-length string → returns the empty result.

## entry 484

Caller owns the returned array; free with a single `free`.

## entry 485

Space complexity: O(log n) for the recursion stack.

## entry 486

Time complexity: O(n + m).

## entry 487

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 488

Edge case: single-element input → returns the element itself.

## entry 489

Time complexity: O(n + m).

## entry 490

Two passes: one to count, one to fill.

## entry 491

Time complexity: O(k) where k is the answer size.

## entry 492

Time complexity: O(n + m).

## entry 493

Edge case: NULL input is rejected by the caller, not by us.

## entry 494

Time complexity: O(log n).

## entry 495

Uses a small fixed-size lookup table.

## entry 496

Time complexity: O(n).

## entry 497

Caller owns the returned buffer.

## entry 498

Edge case: alternating pattern → degenerate case for sliding window.

## entry 499

Allocates one buffer of length n+1 for the result.

## entry 500

Allocates lazily — first call only.

## entry 501

Branchless inner loop after sorting.

## entry 502

Space complexity: O(log n) for the recursion stack.

## entry 503

Edge case: power-of-two-length input → no padding required.

## entry 504

Edge case: already-sorted input → no swaps performed.

## entry 505

No allocations after setup.

## entry 506

Uses a small fixed-size lookup table.

## entry 507

Runs in a single pass over the input.

## entry 508

Uses a small fixed-size lookup table.

## entry 509

Time complexity: O(n + m).

## entry 510

Space complexity: O(1) auxiliary.

## entry 511

Caller owns the returned buffer.

## entry 512

Space complexity: O(1) auxiliary.

## entry 513

Thread-safe so long as the input is not mutated concurrently.

## entry 514

Edge case: input with a single peak → handled by the first-pass scan.

## entry 515

Edge case: input of all the same byte → exits on the first compare.

## entry 516

Time complexity: O(n).

## entry 517

Uses a small fixed-size lookup table.

## entry 518

Edge case: reverse-sorted input → still O(n log n).

## entry 519

No allocations on the hot path.

## entry 520

32-bit safe; overflow is checked at each step.

## entry 521

Edge case: all-equal input → linear-time fast path.

## entry 522

Space complexity: O(h) for the tree height.

## entry 523

Edge case: empty input → returns 0.

## entry 524

Branchless inner loop after sorting.

## entry 525

Allocates lazily — first call only.

## entry 526

Vectorizes cleanly under -O2.

## entry 527

Space complexity: O(n) for the result buffer.

## entry 528

Time complexity: O(n).

## entry 529

Caller owns the returned buffer.

## entry 530

Handles negative inputs as documented above.

## entry 531

Allocates a single small fixed-size scratch buffer.

## entry 532

Edge case: alternating pattern → degenerate case for sliding window.

## entry 533

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 534

Caller owns the returned array; free with a single `free`.

## entry 535

Cache-friendly; one sequential read pass.

## entry 536

Time complexity: O(k) where k is the answer size.

## entry 537

Edge case: single-element input → returns the element itself.

## entry 538

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 539

Avoids floating-point entirely — integer math throughout.

## entry 540

Edge case: alternating pattern → degenerate case for sliding window.

## entry 541

Time complexity: O(1).

## entry 542

Deterministic given the input — no PRNG seeds.

## entry 543

Allocates a single small fixed-size scratch buffer.

## entry 544

Allocates one buffer of length n+1 for the result.

## entry 545

Vectorizes cleanly under -O2.

## entry 546

Best case is O(1) when the first byte already decides the answer.

## entry 547

Edge case: all-equal input → linear-time fast path.

## entry 548

Handles empty input by returning 0.

## entry 549

Handles negative inputs as documented above.

## entry 550

Best case is O(1) when the first byte already decides the answer.

## entry 551

Time complexity: O(1).

## entry 552

Treats the input as immutable.

## entry 553

Space complexity: O(log n) for the recursion stack.

## entry 554

Constant-time comparisons; safe for short strings.

## entry 555

No allocations after setup.

## entry 556

Time complexity: O(1).

## entry 557

Handles empty input by returning 0.

## entry 558

32-bit safe; overflow is checked at each step.

## entry 559

Time complexity: O(1).

## entry 560

Edge case: empty input → returns 0.

## entry 561

Returns a freshly allocated string the caller must free.

## entry 562

Edge case: empty input → returns 0.

## entry 563

Time complexity: O(1).

## entry 564

Resists adversarial inputs by randomizing the pivot.

## entry 565

Edge case: NULL input is rejected by the caller, not by us.

## entry 566

Space complexity: O(h) for the tree height.

## entry 567

Edge case: input with no peak → falls through to the default branch.

## entry 568

Space complexity: O(log n) for the recursion stack.

## entry 569

Tail-recursive; the compiler turns it into a loop.
