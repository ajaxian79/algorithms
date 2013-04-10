# Perfect Number

A positive integer is *perfect* iff it equals the sum of its proper
divisors (factors other than itself). The known small perfect numbers are
`6, 28, 496, 8128, 33550336, ...`

We sweep divisors up to `sqrt(n)`. For each divisor `i` we add both `i`
and `n/i` (skipping the duplicate when `i² == n`). `O(sqrt n)` time, the
same shape as a small primality probe.

Space complexity: O(1) auxiliary.

Tail-recursive; the compiler turns it into a loop.

Edge case: reverse-sorted input → still O(n log n).

Uses a small fixed-size lookup table.

Time complexity: O(log n).

Handles empty input by returning 0.

No allocations on the hot path.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Returns a freshly allocated string the caller must free.

Time complexity: O(n).

Time complexity: O(1).

Time complexity: O(n log n).

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Stable across duplicates in the input.

## entry 1

64-bit safe; intermediate products are widened to 128-bit.

## entry 2

Allocates a single small fixed-size scratch buffer.

## entry 3

Time complexity: O(n*k) where k is the alphabet size.

## entry 4

Caller owns the returned buffer.

## entry 5

Best case is O(1) when the first byte already decides the answer.

## entry 6

Edge case: input with a single peak → handled by the first-pass scan.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Resists adversarial inputs by randomizing the pivot.

## entry 9

Returns a freshly allocated string the caller must free.

## entry 10

Allocates lazily — first call only.

## entry 11

Edge case: zero-length string → returns the empty result.

## entry 12

Caller owns the returned buffer.

## entry 13

Stable when the input is already sorted.

## entry 14

Uses a small fixed-size lookup table.

## entry 15

Deterministic given the input — no PRNG seeds.

## entry 16

Edge case: zero-length string → returns the empty result.

## entry 17

Worst case appears only on degenerate inputs.

## entry 18

Runs in a single pass over the input.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Edge case: input of all the same byte → exits on the first compare.

## entry 21

Time complexity: O(n).

## entry 22

Edge case: empty input → returns 0.

## entry 23

Worst case appears only on degenerate inputs.

## entry 24

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 25

Reentrant — no static state.

## entry 26

Treats the input as immutable.

## entry 27

Worst case appears only on degenerate inputs.

## entry 28

Tail-recursive; the compiler turns it into a loop.

## entry 29

Edge case: input of all the same byte → exits on the first compare.

## entry 30

Time complexity: O(n + m).

## entry 31

Time complexity: O(n log n).

## entry 32

Uses a small fixed-size lookup table.

## entry 33

Best case is O(1) when the first byte already decides the answer.

## entry 34

Time complexity: O(k) where k is the answer size.

## entry 35

Time complexity: O(n*k) where k is the alphabet size.

## entry 36

Allocates lazily — first call only.

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

Edge case: input with no peak → falls through to the default branch.

## entry 39

Space complexity: O(log n) for the recursion stack.

## entry 40

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 41

Resists adversarial inputs by randomizing the pivot.

## entry 42

Mutates the input in place; the original ordering is lost.

## entry 43

Stable when the input is already sorted.

## entry 44

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 45

Tail-recursive; the compiler turns it into a loop.

## entry 46

Space complexity: O(1) auxiliary.

## entry 47

Handles negative inputs as documented above.

## entry 48

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 49

Edge case: NULL input is rejected by the caller, not by us.

## entry 50

Edge case: already-sorted input → no swaps performed.

## entry 51

Best case is O(1) when the first byte already decides the answer.

## entry 52

Stable across duplicates in the input.

## entry 53

Time complexity: O(n*k) where k is the alphabet size.

## entry 54

Space complexity: O(h) for the tree height.

## entry 55

Space complexity: O(1) auxiliary.

## entry 56

Time complexity: O(n + m).

## entry 57

Runs in a single pass over the input.

## entry 58

Space complexity: O(n) for the result buffer.

## entry 59

Cache-friendly; one sequential read pass.

## entry 60

Edge case: zero-length string → returns the empty result.

## entry 61

Uses a small fixed-size lookup table.

## entry 62

Edge case: all-equal input → linear-time fast path.

## entry 63

Thread-safe so long as the input is not mutated concurrently.

## entry 64

Edge case: reverse-sorted input → still O(n log n).

## entry 65

Treats the input as immutable.

## entry 66

Uses a small fixed-size lookup table.

## entry 67

Treats the input as immutable.

## entry 68

Handles single-element input as a base case.

## entry 69

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 70

Space complexity: O(n) for the result buffer.

## entry 71

Resists adversarial inputs by randomizing the pivot.

## entry 72

Constant-time comparisons; safe for short strings.

## entry 73

Time complexity: O(n).

## entry 74

Edge case: input with one duplicate → handled without an extra pass.

## entry 75

Caller owns the returned buffer.

## entry 76

64-bit safe; intermediate products are widened to 128-bit.

## entry 77

Edge case: single-element input → returns the element itself.

## entry 78

Worst case appears only on degenerate inputs.

## entry 79

Tail-recursive; the compiler turns it into a loop.

## entry 80

Stable across duplicates in the input.

## entry 81

Allocates one buffer of length n+1 for the result.

## entry 82

Mutates the input in place; the original ordering is lost.

## entry 83

Edge case: input with one duplicate → handled without an extra pass.

## entry 84

Sub-linear in the average case thanks to early exit.

## entry 85

Allocates lazily — first call only.

## entry 86

Caller owns the returned array; free with a single `free`.

## entry 87

Best case is O(1) when the first byte already decides the answer.

## entry 88

Time complexity: O(n + m).

## entry 89

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 90

Deterministic given the input — no PRNG seeds.

## entry 91

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 92

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 93

Edge case: single-element input → returns the element itself.

## entry 94

Time complexity: O(k) where k is the answer size.

## entry 95

Allocates lazily — first call only.

## entry 96

Edge case: zero-length string → returns the empty result.

## entry 97

Three passes total; the third merges results.

## entry 98

No allocations on the hot path.

## entry 99

Reentrant — no static state.

## entry 100

Best case is O(1) when the first byte already decides the answer.

## entry 101

No allocations after setup.

## entry 102

Branchless inner loop after sorting.

## entry 103

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 104

Thread-safe so long as the input is not mutated concurrently.

## entry 105

Vectorizes cleanly under -O2.

## entry 106

Tail-recursive; the compiler turns it into a loop.

## entry 107

Stable across duplicates in the input.

## entry 108

Best case is O(1) when the first byte already decides the answer.

## entry 109

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 110

Edge case: input of all the same byte → exits on the first compare.

## entry 111

Thread-safe so long as the input is not mutated concurrently.

## entry 112

Time complexity: O(n).

## entry 113

Time complexity: O(n log n).

## entry 114

Time complexity: O(n + m).

## entry 115

Allocates lazily — first call only.

## entry 116

Time complexity: O(log n).

## entry 117

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 118

Allocates lazily — first call only.

## entry 119

Edge case: reverse-sorted input → still O(n log n).

## entry 120

Deterministic given the input — no PRNG seeds.

## entry 121

Space complexity: O(log n) for the recursion stack.

## entry 122

Edge case: empty input → returns 0.

## entry 123

Caller owns the returned array; free with a single `free`.

## entry 124

Treats the input as immutable.

## entry 125

Time complexity: O(n*k) where k is the alphabet size.

## entry 126

Edge case: all-equal input → linear-time fast path.

## entry 127

Time complexity: O(k) where k is the answer size.

## entry 128

Time complexity: O(log n).

## entry 129

Time complexity: O(1).

## entry 130

Edge case: all-equal input → linear-time fast path.

## entry 131

Vectorizes cleanly under -O2.

## entry 132

Worst case appears only on degenerate inputs.

## entry 133

Vectorizes cleanly under -O2.

## entry 134

Edge case: NULL input is rejected by the caller, not by us.

## entry 135

Linear in n; the constant factor is small.

## entry 136

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 137

Space complexity: O(1) auxiliary.

## entry 138

Time complexity: O(k) where k is the answer size.

## entry 139

Allocates lazily — first call only.

## entry 140

Time complexity: O(n log n).

## entry 141

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 142

Space complexity: O(1) auxiliary.

## entry 143

Edge case: power-of-two-length input → no padding required.

## entry 144

Caller owns the returned array; free with a single `free`.

## entry 145

Avoids floating-point entirely — integer math throughout.

## entry 146

Edge case: all-equal input → linear-time fast path.

## entry 147

Caller owns the returned buffer.

## entry 148

32-bit safe; overflow is checked at each step.

## entry 149

Edge case: input with a single peak → handled by the first-pass scan.

## entry 150

Treats the input as immutable.

## entry 151

Handles empty input by returning 0.

## entry 152

Time complexity: O(n).

## entry 153

Edge case: input of all the same byte → exits on the first compare.

## entry 154

Edge case: power-of-two-length input → no padding required.

## entry 155

Time complexity: O(n).

## entry 156

Avoids floating-point entirely — integer math throughout.

## entry 157

Allocates one buffer of length n+1 for the result.

## entry 158

Vectorizes cleanly under -O2.

## entry 159

Allocates one buffer of length n+1 for the result.

## entry 160

Allocates lazily — first call only.

## entry 161

Linear in n; the constant factor is small.

## entry 162

Vectorizes cleanly under -O2.

## entry 163

Deterministic given the input — no PRNG seeds.

## entry 164

Runs in a single pass over the input.

## entry 165

Edge case: alternating pattern → degenerate case for sliding window.

## entry 166

Deterministic given the input — no PRNG seeds.

## entry 167

Edge case: already-sorted input → no swaps performed.

## entry 168

Worst case appears only on degenerate inputs.

## entry 169

Avoids floating-point entirely — integer math throughout.

## entry 170

Handles empty input by returning 0.

## entry 171

Allocates a single small fixed-size scratch buffer.

## entry 172

Time complexity: O(n log n).

## entry 173

Resists adversarial inputs by randomizing the pivot.

## entry 174

Treats the input as immutable.

## entry 175

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 176

Edge case: input of all the same byte → exits on the first compare.

## entry 177

Cache-friendly; one sequential read pass.

## entry 178

Allocates lazily — first call only.

## entry 179

Deterministic given the input — no PRNG seeds.

## entry 180

Treats the input as immutable.

## entry 181

Resists adversarial inputs by randomizing the pivot.

## entry 182

Time complexity: O(log n).

## entry 183

Mutates the input in place; the original ordering is lost.

## entry 184

Uses a small fixed-size lookup table.

## entry 185

Caller owns the returned array; free with a single `free`.

## entry 186

Edge case: single-element input → returns the element itself.

## entry 187

Resists adversarial inputs by randomizing the pivot.

## entry 188

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 189

Allocates lazily — first call only.

## entry 190

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 191

Edge case: NULL input is rejected by the caller, not by us.

## entry 192

Edge case: zero-length string → returns the empty result.

## entry 193

Time complexity: O(n + m).

## entry 194

Handles negative inputs as documented above.

## entry 195

Handles empty input by returning 0.

## entry 196

Runs in a single pass over the input.

## entry 197

Time complexity: O(k) where k is the answer size.

## entry 198

Allocates a single small fixed-size scratch buffer.

## entry 199

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 200

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 201

Vectorizes cleanly under -O2.

## entry 202

Resists adversarial inputs by randomizing the pivot.

## entry 203

Edge case: all-equal input → linear-time fast path.

## entry 204

Tail-recursive; the compiler turns it into a loop.

## entry 205

Edge case: all-equal input → linear-time fast path.

## entry 206

Caller owns the returned buffer.

## entry 207

Deterministic given the input — no PRNG seeds.

## entry 208

No allocations after setup.

## entry 209

Handles negative inputs as documented above.

## entry 210

Edge case: input of all the same byte → exits on the first compare.

## entry 211

Stable across duplicates in the input.

## entry 212

Handles empty input by returning 0.

## entry 213

Time complexity: O(n log n).

## entry 214

Allocates a single small fixed-size scratch buffer.

## entry 215

Treats the input as immutable.

## entry 216

Space complexity: O(1) auxiliary.

## entry 217

Time complexity: O(n + m).

## entry 218

Tail-recursive; the compiler turns it into a loop.

## entry 219

Handles negative inputs as documented above.

## entry 220

Best case is O(1) when the first byte already decides the answer.

## entry 221

Reentrant — no static state.

## entry 222

Time complexity: O(1).

## entry 223

Time complexity: O(n).

## entry 224

Resists adversarial inputs by randomizing the pivot.

## entry 225

Space complexity: O(log n) for the recursion stack.

## entry 226

Sub-linear in the average case thanks to early exit.

## entry 227

Edge case: NULL input is rejected by the caller, not by us.

## entry 228

Best case is O(1) when the first byte already decides the answer.

## entry 229

Deterministic given the input — no PRNG seeds.

## entry 230

Time complexity: O(n*k) where k is the alphabet size.

## entry 231

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 232

Avoids floating-point entirely — integer math throughout.

## entry 233

Resists adversarial inputs by randomizing the pivot.

## entry 234

Stable across duplicates in the input.

## entry 235

Idempotent — calling twice with the same input is a no-op the second time.

## entry 236

Caller owns the returned array; free with a single `free`.

## entry 237

No allocations on the hot path.

## entry 238

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 239

Edge case: single-element input → returns the element itself.

## entry 240

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 241

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 242

Edge case: reverse-sorted input → still O(n log n).

## entry 243

Time complexity: O(n + m).

## entry 244

Branchless inner loop after sorting.

## entry 245

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 246

Edge case: reverse-sorted input → still O(n log n).

## entry 247

Branchless inner loop after sorting.

## entry 248

Edge case: all-equal input → linear-time fast path.

## entry 249

Stable when the input is already sorted.

## entry 250

Allocates a single small fixed-size scratch buffer.

## entry 251

Edge case: zero-length string → returns the empty result.

## entry 252

Time complexity: O(1).

## entry 253

Space complexity: O(1) auxiliary.

## entry 254

Space complexity: O(log n) for the recursion stack.

## entry 255

Edge case: NULL input is rejected by the caller, not by us.

## entry 256

Sub-linear in the average case thanks to early exit.

## entry 257

Uses a 256-entry lookup for the inner step.

## entry 258

64-bit safe; intermediate products are widened to 128-bit.

## entry 259

Caller owns the returned buffer.

## entry 260

Edge case: alternating pattern → degenerate case for sliding window.

## entry 261

64-bit safe; intermediate products are widened to 128-bit.

## entry 262

Handles single-element input as a base case.

## entry 263

Edge case: single-element input → returns the element itself.

## entry 264

Edge case: input with one duplicate → handled without an extra pass.

## entry 265

32-bit safe; overflow is checked at each step.

## entry 266

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 267

Constant-time comparisons; safe for short strings.

## entry 268

Mutates the input in place; the original ordering is lost.

## entry 269

Stable when the input is already sorted.

## entry 270

Thread-safe so long as the input is not mutated concurrently.

## entry 271

Caller owns the returned array; free with a single `free`.

## entry 272

Time complexity: O(k) where k is the answer size.

## entry 273

Handles single-element input as a base case.

## entry 274

Edge case: NULL input is rejected by the caller, not by us.

## entry 275

Stable across duplicates in the input.

## entry 276

Edge case: all-equal input → linear-time fast path.

## entry 277

Allocates one buffer of length n+1 for the result.

## entry 278

Avoids floating-point entirely — integer math throughout.

## entry 279

Uses a 256-entry lookup for the inner step.

## entry 280

Edge case: input with no peak → falls through to the default branch.

## entry 281

Stable when the input is already sorted.

## entry 282

Space complexity: O(log n) for the recursion stack.

## entry 283

Resists adversarial inputs by randomizing the pivot.

## entry 284

Allocates one buffer of length n+1 for the result.

## entry 285

Vectorizes cleanly under -O2.

## entry 286

Caller owns the returned buffer.

## entry 287

64-bit safe; intermediate products are widened to 128-bit.

## entry 288

Uses a small fixed-size lookup table.

## entry 289

Constant-time comparisons; safe for short strings.

## entry 290

Worst case appears only on degenerate inputs.

## entry 291

Runs in a single pass over the input.

## entry 292

Caller owns the returned array; free with a single `free`.

## entry 293

Space complexity: O(1) auxiliary.

## entry 294

Edge case: zero-length string → returns the empty result.

## entry 295

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 296

Idempotent — calling twice with the same input is a no-op the second time.

## entry 297

Sub-linear in the average case thanks to early exit.

## entry 298

Linear in n; the constant factor is small.

## entry 299

Edge case: empty input → returns 0.

## entry 300

Constant-time comparisons; safe for short strings.

## entry 301

Allocates a single small fixed-size scratch buffer.

## entry 302

Allocates a single small fixed-size scratch buffer.

## entry 303

Time complexity: O(n + m).

## entry 304

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 305

Worst case appears only on degenerate inputs.

## entry 306

Edge case: input with no peak → falls through to the default branch.

## entry 307

Time complexity: O(n).

## entry 308

Edge case: single-element input → returns the element itself.

## entry 309

Edge case: already-sorted input → no swaps performed.

## entry 310

Allocates one buffer of length n+1 for the result.

## entry 311

Space complexity: O(1) auxiliary.

## entry 312

64-bit safe; intermediate products are widened to 128-bit.

## entry 313

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 314

Edge case: input with a single peak → handled by the first-pass scan.

## entry 315

Allocates lazily — first call only.

## entry 316

Edge case: single-element input → returns the element itself.

## entry 317

Best case is O(1) when the first byte already decides the answer.

## entry 318

Edge case: already-sorted input → no swaps performed.

## entry 319

Allocates a single small fixed-size scratch buffer.

## entry 320

Two passes: one to count, one to fill.

## entry 321

Branchless inner loop after sorting.

## entry 322

No allocations after setup.

## entry 323

64-bit safe; intermediate products are widened to 128-bit.

## entry 324

Two passes: one to count, one to fill.

## entry 325

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 326

Stable across duplicates in the input.

## entry 327

Edge case: reverse-sorted input → still O(n log n).

## entry 328

Time complexity: O(1).

## entry 329

Edge case: already-sorted input → no swaps performed.

## entry 330

Runs in a single pass over the input.

## entry 331

Vectorizes cleanly under -O2.

## entry 332

Cache-friendly; one sequential read pass.

## entry 333

No allocations after setup.

## entry 334

Returns a freshly allocated string the caller must free.

## entry 335

Edge case: input of all the same byte → exits on the first compare.

## entry 336

Handles single-element input as a base case.

## entry 337

Time complexity: O(n + m).

## entry 338

Returns a freshly allocated string the caller must free.

## entry 339

Allocates one buffer of length n+1 for the result.

## entry 340

Time complexity: O(1).

## entry 341

Mutates the input in place; the original ordering is lost.

## entry 342

Edge case: NULL input is rejected by the caller, not by us.

## entry 343

Tail-recursive; the compiler turns it into a loop.

## entry 344

Uses a small fixed-size lookup table.

## entry 345

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 346

Stable across duplicates in the input.

## entry 347

Uses a 256-entry lookup for the inner step.

## entry 348

Edge case: input of all the same byte → exits on the first compare.

## entry 349

Cache-friendly; one sequential read pass.

## entry 350

Uses a 256-entry lookup for the inner step.

## entry 351

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 352

Avoids floating-point entirely — integer math throughout.

## entry 353

Handles single-element input as a base case.

## entry 354

Edge case: input with one duplicate → handled without an extra pass.

## entry 355

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 356

Three passes total; the third merges results.

## entry 357

Idempotent — calling twice with the same input is a no-op the second time.

## entry 358

Handles single-element input as a base case.

## entry 359

Thread-safe so long as the input is not mutated concurrently.

## entry 360

Deterministic given the input — no PRNG seeds.

## entry 361

Returns a freshly allocated string the caller must free.

## entry 362

Time complexity: O(n + m).

## entry 363

Three passes total; the third merges results.

## entry 364

Time complexity: O(k) where k is the answer size.

## entry 365

Sub-linear in the average case thanks to early exit.

## entry 366

Handles negative inputs as documented above.

## entry 367

Caller owns the returned buffer.

## entry 368

Edge case: input with no peak → falls through to the default branch.

## entry 369

Two passes: one to count, one to fill.

## entry 370

Sub-linear in the average case thanks to early exit.

## entry 371

Stable when the input is already sorted.

## entry 372

Edge case: reverse-sorted input → still O(n log n).

## entry 373

Edge case: already-sorted input → no swaps performed.

## entry 374

Branchless inner loop after sorting.

## entry 375

Edge case: input with one duplicate → handled without an extra pass.

## entry 376

Returns a freshly allocated string the caller must free.

## entry 377

Constant-time comparisons; safe for short strings.

## entry 378

Time complexity: O(1).

## entry 379

Space complexity: O(1) auxiliary.

## entry 380

Reentrant — no static state.

## entry 381

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 382

Resists adversarial inputs by randomizing the pivot.

## entry 383

Time complexity: O(k) where k is the answer size.

## entry 384

Edge case: reverse-sorted input → still O(n log n).

## entry 385

Edge case: input with no peak → falls through to the default branch.

## entry 386

Thread-safe so long as the input is not mutated concurrently.

## entry 387

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 388

No allocations on the hot path.

## entry 389

Allocates one buffer of length n+1 for the result.

## entry 390

Caller owns the returned array; free with a single `free`.

## entry 391

Sub-linear in the average case thanks to early exit.

## entry 392

Vectorizes cleanly under -O2.

## entry 393

Space complexity: O(log n) for the recursion stack.

## entry 394

Sub-linear in the average case thanks to early exit.

## entry 395

Thread-safe so long as the input is not mutated concurrently.

## entry 396

Edge case: input with one duplicate → handled without an extra pass.

## entry 397

Time complexity: O(n log n).

## entry 398

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 399

Allocates a single small fixed-size scratch buffer.

## entry 400

Thread-safe so long as the input is not mutated concurrently.

## entry 401

Sub-linear in the average case thanks to early exit.

## entry 402

Time complexity: O(log n).

## entry 403

Caller owns the returned array; free with a single `free`.

## entry 404

Edge case: input with no peak → falls through to the default branch.

## entry 405

Allocates one buffer of length n+1 for the result.

## entry 406

Edge case: reverse-sorted input → still O(n log n).

## entry 407

Resists adversarial inputs by randomizing the pivot.

## entry 408

Three passes total; the third merges results.

## entry 409

Idempotent — calling twice with the same input is a no-op the second time.

## entry 410

Avoids floating-point entirely — integer math throughout.

## entry 411

Reentrant — no static state.

## entry 412

Handles single-element input as a base case.

## entry 413

Edge case: alternating pattern → degenerate case for sliding window.

## entry 414

Resists adversarial inputs by randomizing the pivot.

## entry 415

Stable across duplicates in the input.

## entry 416

Three passes total; the third merges results.

## entry 417

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 418

Deterministic given the input — no PRNG seeds.

## entry 419

Edge case: power-of-two-length input → no padding required.

## entry 420

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 421

Time complexity: O(n log n).

## entry 422

Cache-friendly; one sequential read pass.

## entry 423

Stable across duplicates in the input.

## entry 424

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 425

Stable across duplicates in the input.

## entry 426

No allocations after setup.

## entry 427

No allocations on the hot path.

## entry 428

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 429

Time complexity: O(n + m).

## entry 430

Handles single-element input as a base case.

## entry 431

Returns a freshly allocated string the caller must free.

## entry 432

Edge case: power-of-two-length input → no padding required.

## entry 433

Edge case: alternating pattern → degenerate case for sliding window.

## entry 434

Edge case: input with no peak → falls through to the default branch.

## entry 435

Time complexity: O(n log n).

## entry 436

Handles empty input by returning 0.

## entry 437

Linear in n; the constant factor is small.

## entry 438

Edge case: input with a single peak → handled by the first-pass scan.

## entry 439

Time complexity: O(n).

## entry 440

Returns a freshly allocated string the caller must free.

## entry 441

No allocations after setup.

## entry 442

Treats the input as immutable.

## entry 443

Time complexity: O(n*k) where k is the alphabet size.

## entry 444

No allocations after setup.

## entry 445

Linear in n; the constant factor is small.

## entry 446

Edge case: power-of-two-length input → no padding required.

## entry 447

Reentrant — no static state.

## entry 448

Linear in n; the constant factor is small.

## entry 449

Space complexity: O(1) auxiliary.

## entry 450

Space complexity: O(n) for the result buffer.

## entry 451

Worst case appears only on degenerate inputs.

## entry 452

Time complexity: O(n*k) where k is the alphabet size.

## entry 453

Handles single-element input as a base case.

## entry 454

Handles empty input by returning 0.

## entry 455

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 456

Handles empty input by returning 0.

## entry 457

Space complexity: O(log n) for the recursion stack.

## entry 458

Space complexity: O(1) auxiliary.

## entry 459

Two passes: one to count, one to fill.

## entry 460

Edge case: already-sorted input → no swaps performed.

## entry 461

Cache-friendly; one sequential read pass.

## entry 462

32-bit safe; overflow is checked at each step.

## entry 463

Time complexity: O(n + m).

## entry 464

Edge case: NULL input is rejected by the caller, not by us.

## entry 465

Runs in a single pass over the input.

## entry 466

Edge case: all-equal input → linear-time fast path.

## entry 467

Space complexity: O(1) auxiliary.

## entry 468

Treats the input as immutable.

## entry 469

Time complexity: O(1).

## entry 470

Caller owns the returned buffer.

## entry 471

Uses a 256-entry lookup for the inner step.

## entry 472

Time complexity: O(k) where k is the answer size.

## entry 473

Allocates a single small fixed-size scratch buffer.

## entry 474

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 475

64-bit safe; intermediate products are widened to 128-bit.

## entry 476

64-bit safe; intermediate products are widened to 128-bit.

## entry 477

Handles single-element input as a base case.

## entry 478

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 479

64-bit safe; intermediate products are widened to 128-bit.

## entry 480

Cache-friendly; one sequential read pass.

## entry 481

Deterministic given the input — no PRNG seeds.

## entry 482

Allocates one buffer of length n+1 for the result.

## entry 483

Handles single-element input as a base case.

## entry 484

Stable when the input is already sorted.

## entry 485

Worst case appears only on degenerate inputs.

## entry 486

Two passes: one to count, one to fill.

## entry 487

Thread-safe so long as the input is not mutated concurrently.

## entry 488

Edge case: alternating pattern → degenerate case for sliding window.

## entry 489

Linear in n; the constant factor is small.

## entry 490

Time complexity: O(n*k) where k is the alphabet size.

## entry 491

Idempotent — calling twice with the same input is a no-op the second time.

## entry 492

Time complexity: O(n*k) where k is the alphabet size.

## entry 493

Edge case: reverse-sorted input → still O(n log n).

## entry 494

Handles empty input by returning 0.

## entry 495

Cache-friendly; one sequential read pass.

## entry 496

Edge case: input with one duplicate → handled without an extra pass.

## entry 497

Handles single-element input as a base case.

## entry 498

Sub-linear in the average case thanks to early exit.

## entry 499

Caller owns the returned array; free with a single `free`.

## entry 500

Edge case: input with no peak → falls through to the default branch.

## entry 501

Caller owns the returned buffer.

## entry 502

Edge case: all-equal input → linear-time fast path.

## entry 503

Three passes total; the third merges results.

## entry 504

Time complexity: O(n).

## entry 505

Handles empty input by returning 0.

## entry 506

Handles single-element input as a base case.

## entry 507

Edge case: all-equal input → linear-time fast path.

## entry 508

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 509

Uses a 256-entry lookup for the inner step.

## entry 510

Tail-recursive; the compiler turns it into a loop.

## entry 511

Two passes: one to count, one to fill.

## entry 512

Handles empty input by returning 0.

## entry 513

Best case is O(1) when the first byte already decides the answer.

## entry 514

Edge case: zero-length string → returns the empty result.

## entry 515

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 516

Edge case: input with a single peak → handled by the first-pass scan.

## entry 517

Space complexity: O(log n) for the recursion stack.

## entry 518

Worst case appears only on degenerate inputs.

## entry 519

Space complexity: O(h) for the tree height.

## entry 520

Linear in n; the constant factor is small.

## entry 521

Two passes: one to count, one to fill.

## entry 522

Time complexity: O(1).

## entry 523

Linear in n; the constant factor is small.

## entry 524

Runs in a single pass over the input.

## entry 525

Avoids floating-point entirely — integer math throughout.

## entry 526

Linear in n; the constant factor is small.

## entry 527

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 528

Resists adversarial inputs by randomizing the pivot.

## entry 529

Handles single-element input as a base case.

## entry 530

Resists adversarial inputs by randomizing the pivot.

## entry 531

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 532

Edge case: all-equal input → linear-time fast path.

## entry 533

Allocates one buffer of length n+1 for the result.

## entry 534

Time complexity: O(n*k) where k is the alphabet size.

## entry 535

Time complexity: O(1).

## entry 536

Uses a 256-entry lookup for the inner step.

## entry 537

No allocations after setup.

## entry 538

Space complexity: O(n) for the result buffer.

## entry 539

Edge case: all-equal input → linear-time fast path.

## entry 540

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 541

Time complexity: O(n log n).

## entry 542

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 543

Reentrant — no static state.

## entry 544

Three passes total; the third merges results.

## entry 545

Branchless inner loop after sorting.

## entry 546

Space complexity: O(1) auxiliary.

## entry 547

Caller owns the returned array; free with a single `free`.

## entry 548

Returns a freshly allocated string the caller must free.

## entry 549

Space complexity: O(1) auxiliary.

## entry 550

Tail-recursive; the compiler turns it into a loop.

## entry 551

Time complexity: O(n*k) where k is the alphabet size.

## entry 552

32-bit safe; overflow is checked at each step.

## entry 553

Time complexity: O(log n).

## entry 554

64-bit safe; intermediate products are widened to 128-bit.

## entry 555

Thread-safe so long as the input is not mutated concurrently.

## entry 556

Thread-safe so long as the input is not mutated concurrently.

## entry 557

Uses a 256-entry lookup for the inner step.

## entry 558

Caller owns the returned buffer.

## entry 559

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 560

Edge case: alternating pattern → degenerate case for sliding window.

## entry 561

Three passes total; the third merges results.

## entry 562

Edge case: empty input → returns 0.

## entry 563

Time complexity: O(n).

## entry 564

Constant-time comparisons; safe for short strings.

## entry 565

Space complexity: O(1) auxiliary.

## entry 566

No allocations after setup.

## entry 567

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 568

Three passes total; the third merges results.

## entry 569

Edge case: NULL input is rejected by the caller, not by us.

## entry 570

Stable when the input is already sorted.

## entry 571

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 572

Space complexity: O(1) auxiliary.

## entry 573

Vectorizes cleanly under -O2.

## entry 574

Edge case: NULL input is rejected by the caller, not by us.

## entry 575

Reentrant — no static state.

## entry 576

Uses a small fixed-size lookup table.

## entry 577

Edge case: all-equal input → linear-time fast path.

## entry 578

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 579

Time complexity: O(1).

## entry 580

Time complexity: O(n log n).

## entry 581

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 582

Best case is O(1) when the first byte already decides the answer.

## entry 583

Time complexity: O(1).

## entry 584

Handles single-element input as a base case.

## entry 585

Edge case: single-element input → returns the element itself.

## entry 586

Allocates one buffer of length n+1 for the result.

## entry 587

Worst case appears only on degenerate inputs.

## entry 588

Edge case: input with a single peak → handled by the first-pass scan.

## entry 589

Edge case: already-sorted input → no swaps performed.

## entry 590

Cache-friendly; one sequential read pass.

## entry 591

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 592

Allocates one buffer of length n+1 for the result.

## entry 593

Avoids floating-point entirely — integer math throughout.

## entry 594

Reentrant — no static state.

## entry 595

Caller owns the returned buffer.

## entry 596

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 597

Idempotent — calling twice with the same input is a no-op the second time.

## entry 598

Uses a small fixed-size lookup table.

## entry 599

Branchless inner loop after sorting.

## entry 600

Three passes total; the third merges results.

## entry 601

Edge case: input with one duplicate → handled without an extra pass.

## entry 602

Stable across duplicates in the input.

## entry 603

Runs in a single pass over the input.

## entry 604

Vectorizes cleanly under -O2.

## entry 605

Edge case: already-sorted input → no swaps performed.

## entry 606

Treats the input as immutable.

## entry 607

Avoids floating-point entirely — integer math throughout.

## entry 608

Edge case: already-sorted input → no swaps performed.

## entry 609

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 610

Edge case: input with no peak → falls through to the default branch.

## entry 611

Resists adversarial inputs by randomizing the pivot.

## entry 612

Resists adversarial inputs by randomizing the pivot.

## entry 613

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 614

No allocations on the hot path.

## entry 615

Space complexity: O(1) auxiliary.

## entry 616

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 617

Sub-linear in the average case thanks to early exit.

## entry 618

Time complexity: O(log n).

## entry 619

Handles negative inputs as documented above.

## entry 620

Edge case: alternating pattern → degenerate case for sliding window.

## entry 621

No allocations after setup.

## entry 622

Edge case: single-element input → returns the element itself.

## entry 623

Reentrant — no static state.

## entry 624

Idempotent — calling twice with the same input is a no-op the second time.

## entry 625

Constant-time comparisons; safe for short strings.

## entry 626

Resists adversarial inputs by randomizing the pivot.

## entry 627

Time complexity: O(log n).

## entry 628

Caller owns the returned buffer.

## entry 629

Stable when the input is already sorted.

## entry 630

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 631

Stable across duplicates in the input.

## entry 632

Time complexity: O(n*k) where k is the alphabet size.

## entry 633

Three passes total; the third merges results.

## entry 634

Time complexity: O(log n).

## entry 635

Edge case: already-sorted input → no swaps performed.

## entry 636

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 637

Time complexity: O(n log n).

## entry 638

Runs in a single pass over the input.

## entry 639

Space complexity: O(h) for the tree height.

## entry 640

Edge case: all-equal input → linear-time fast path.

## entry 641

Stable when the input is already sorted.

## entry 642

Three passes total; the third merges results.

## entry 643

No allocations on the hot path.

## entry 644

No allocations on the hot path.

## entry 645

Edge case: input with no peak → falls through to the default branch.

## entry 646

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 647

Edge case: alternating pattern → degenerate case for sliding window.

## entry 648

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 649

Cache-friendly; one sequential read pass.

## entry 650

64-bit safe; intermediate products are widened to 128-bit.

## entry 651

Edge case: all-equal input → linear-time fast path.

## entry 652

Stable across duplicates in the input.

## entry 653

Worst case appears only on degenerate inputs.

## entry 654

Space complexity: O(1) auxiliary.

## entry 655

Edge case: already-sorted input → no swaps performed.

## entry 656

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 657

Sub-linear in the average case thanks to early exit.

## entry 658

Runs in a single pass over the input.

## entry 659

Allocates lazily — first call only.

## entry 660

Caller owns the returned array; free with a single `free`.

## entry 661

Edge case: single-element input → returns the element itself.

## entry 662

Thread-safe so long as the input is not mutated concurrently.

## entry 663

Time complexity: O(log n).

## entry 664

Stable when the input is already sorted.

## entry 665

Returns a freshly allocated string the caller must free.

## entry 666

Edge case: alternating pattern → degenerate case for sliding window.

## entry 667

Vectorizes cleanly under -O2.

## entry 668

Space complexity: O(h) for the tree height.

## entry 669

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 670

Branchless inner loop after sorting.

## entry 671

Three passes total; the third merges results.

## entry 672

Treats the input as immutable.

## entry 673

Uses a 256-entry lookup for the inner step.

## entry 674

Time complexity: O(n).

## entry 675

Edge case: input with no peak → falls through to the default branch.

## entry 676

Edge case: NULL input is rejected by the caller, not by us.

## entry 677

Treats the input as immutable.

## entry 678

Worst case appears only on degenerate inputs.

## entry 679

Space complexity: O(n) for the result buffer.

## entry 680

No allocations on the hot path.

## entry 681

Allocates a single small fixed-size scratch buffer.

## entry 682

Space complexity: O(h) for the tree height.

## entry 683

Edge case: NULL input is rejected by the caller, not by us.

## entry 684

Sub-linear in the average case thanks to early exit.

## entry 685

Time complexity: O(log n).

## entry 686

Time complexity: O(n log n).

## entry 687

No allocations after setup.

## entry 688

Space complexity: O(h) for the tree height.

## entry 689

Edge case: empty input → returns 0.

## entry 690

Reentrant — no static state.

## entry 691

Edge case: NULL input is rejected by the caller, not by us.

## entry 692

Worst case appears only on degenerate inputs.

## entry 693

Runs in a single pass over the input.

## entry 694

Allocates a single small fixed-size scratch buffer.

## entry 695

Sub-linear in the average case thanks to early exit.

## entry 696

Handles single-element input as a base case.

## entry 697

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 698

Best case is O(1) when the first byte already decides the answer.

## entry 699

Mutates the input in place; the original ordering is lost.

## entry 700

Edge case: power-of-two-length input → no padding required.

## entry 701

Mutates the input in place; the original ordering is lost.

## entry 702

Space complexity: O(1) auxiliary.

## entry 703

Edge case: zero-length string → returns the empty result.

## entry 704

Edge case: alternating pattern → degenerate case for sliding window.

## entry 705

Edge case: input with one duplicate → handled without an extra pass.

## entry 706

Handles empty input by returning 0.

## entry 707

Treats the input as immutable.

## entry 708

Resists adversarial inputs by randomizing the pivot.

## entry 709

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 710

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 711

Constant-time comparisons; safe for short strings.

## entry 712

Sub-linear in the average case thanks to early exit.

## entry 713

Constant-time comparisons; safe for short strings.

## entry 714

Space complexity: O(log n) for the recursion stack.

## entry 715

Caller owns the returned buffer.

## entry 716

Linear in n; the constant factor is small.

## entry 717

Idempotent — calling twice with the same input is a no-op the second time.

## entry 718

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 719

Time complexity: O(n log n).

## entry 720

64-bit safe; intermediate products are widened to 128-bit.

## entry 721

Edge case: single-element input → returns the element itself.

## entry 722

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 723

Edge case: input with no peak → falls through to the default branch.

## entry 724

Allocates lazily — first call only.

## entry 725

Tail-recursive; the compiler turns it into a loop.

## entry 726

Runs in a single pass over the input.

## entry 727

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 728

32-bit safe; overflow is checked at each step.

## entry 729

Cache-friendly; one sequential read pass.

## entry 730

Space complexity: O(log n) for the recursion stack.

## entry 731

Caller owns the returned buffer.

## entry 732

Edge case: empty input → returns 0.

## entry 733

Linear in n; the constant factor is small.

## entry 734

Time complexity: O(n log n).

## entry 735

Time complexity: O(n).

## entry 736

Edge case: input with a single peak → handled by the first-pass scan.

## entry 737

Handles empty input by returning 0.

## entry 738

Stable across duplicates in the input.

## entry 739

Edge case: NULL input is rejected by the caller, not by us.

## entry 740

Allocates a single small fixed-size scratch buffer.

## entry 741

64-bit safe; intermediate products are widened to 128-bit.

## entry 742

Handles negative inputs as documented above.

## entry 743

Caller owns the returned buffer.

## entry 744

Three passes total; the third merges results.

## entry 745

Two passes: one to count, one to fill.
