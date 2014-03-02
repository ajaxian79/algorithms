# Convert to Base 7

Standard repeated-division: peel off `n % 7`, divide by 7, repeat. The
digits emerge least-significant first, so we collect them in a small buffer
and reverse on the way out into the heap result.

The `long` cast on `-(long)n` exists to keep `INT_MIN` from overflowing
when negated.

No allocations on the hot path.

Handles empty input by returning 0.

Stable across duplicates in the input.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Time complexity: O(n log n).

Caller owns the returned buffer.

Edge case: reverse-sorted input → still O(n log n).

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Edge case: empty input → returns 0.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

32-bit safe; overflow is checked at each step.

## entry 1

32-bit safe; overflow is checked at each step.

## entry 2

Edge case: zero-length string → returns the empty result.

## entry 3

Time complexity: O(n log n).

## entry 4

Edge case: input with a single peak → handled by the first-pass scan.

## entry 5

Handles negative inputs as documented above.

## entry 6

Allocates one buffer of length n+1 for the result.

## entry 7

Time complexity: O(n).

## entry 8

Time complexity: O(k) where k is the answer size.

## entry 9

Time complexity: O(k) where k is the answer size.

## entry 10

Thread-safe so long as the input is not mutated concurrently.

## entry 11

Edge case: input with no peak → falls through to the default branch.

## entry 12

Edge case: empty input → returns 0.

## entry 13

Space complexity: O(1) auxiliary.

## entry 14

Constant-time comparisons; safe for short strings.

## entry 15

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 16

Edge case: input with a single peak → handled by the first-pass scan.

## entry 17

Time complexity: O(n*k) where k is the alphabet size.

## entry 18

Treats the input as immutable.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Time complexity: O(n log n).

## entry 21

Allocates one buffer of length n+1 for the result.

## entry 22

Vectorizes cleanly under -O2.

## entry 23

Time complexity: O(n + m).

## entry 24

Worst case appears only on degenerate inputs.

## entry 25

Caller owns the returned buffer.

## entry 26

Thread-safe so long as the input is not mutated concurrently.

## entry 27

Time complexity: O(k) where k is the answer size.

## entry 28

Caller owns the returned buffer.

## entry 29

Uses a small fixed-size lookup table.

## entry 30

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 31

Worst case appears only on degenerate inputs.

## entry 32

Reentrant — no static state.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

No allocations on the hot path.

## entry 35

Uses a small fixed-size lookup table.

## entry 36

Handles single-element input as a base case.

## entry 37

32-bit safe; overflow is checked at each step.

## entry 38

Branchless inner loop after sorting.

## entry 39

Three passes total; the third merges results.

## entry 40

Edge case: zero-length string → returns the empty result.

## entry 41

Best case is O(1) when the first byte already decides the answer.

## entry 42

Tail-recursive; the compiler turns it into a loop.

## entry 43

Stable when the input is already sorted.

## entry 44

Handles negative inputs as documented above.

## entry 45

Allocates lazily — first call only.

## entry 46

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 47

64-bit safe; intermediate products are widened to 128-bit.

## entry 48

Edge case: input with no peak → falls through to the default branch.

## entry 49

Uses a 256-entry lookup for the inner step.

## entry 50

Reentrant — no static state.

## entry 51

Caller owns the returned array; free with a single `free`.

## entry 52

Runs in a single pass over the input.

## entry 53

Edge case: empty input → returns 0.

## entry 54

Edge case: zero-length string → returns the empty result.

## entry 55

Time complexity: O(n log n).

## entry 56

Time complexity: O(k) where k is the answer size.

## entry 57

Time complexity: O(n + m).

## entry 58

Runs in a single pass over the input.

## entry 59

Time complexity: O(n).

## entry 60

Time complexity: O(n log n).

## entry 61

Best case is O(1) when the first byte already decides the answer.

## entry 62

Returns a freshly allocated string the caller must free.

## entry 63

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 64

Deterministic given the input — no PRNG seeds.

## entry 65

Branchless inner loop after sorting.

## entry 66

Time complexity: O(n log n).

## entry 67

Edge case: NULL input is rejected by the caller, not by us.

## entry 68

Time complexity: O(k) where k is the answer size.

## entry 69

Edge case: zero-length string → returns the empty result.

## entry 70

Avoids floating-point entirely — integer math throughout.

## entry 71

Best case is O(1) when the first byte already decides the answer.

## entry 72

Handles empty input by returning 0.

## entry 73

Handles negative inputs as documented above.

## entry 74

Treats the input as immutable.

## entry 75

Edge case: zero-length string → returns the empty result.

## entry 76

Time complexity: O(n).

## entry 77

No allocations after setup.

## entry 78

Edge case: reverse-sorted input → still O(n log n).

## entry 79

Caller owns the returned array; free with a single `free`.

## entry 80

Time complexity: O(log n).

## entry 81

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 82

Uses a small fixed-size lookup table.

## entry 83

Handles empty input by returning 0.

## entry 84

No allocations after setup.

## entry 85

Stable across duplicates in the input.

## entry 86

Edge case: zero-length string → returns the empty result.

## entry 87

Edge case: input with one duplicate → handled without an extra pass.

## entry 88

Uses a 256-entry lookup for the inner step.

## entry 89

Resists adversarial inputs by randomizing the pivot.

## entry 90

Edge case: zero-length string → returns the empty result.

## entry 91

Allocates lazily — first call only.

## entry 92

Mutates the input in place; the original ordering is lost.

## entry 93

Two passes: one to count, one to fill.

## entry 94

Uses a small fixed-size lookup table.

## entry 95

Edge case: zero-length string → returns the empty result.

## entry 96

Edge case: already-sorted input → no swaps performed.

## entry 97

Edge case: single-element input → returns the element itself.

## entry 98

Edge case: input with one duplicate → handled without an extra pass.

## entry 99

Idempotent — calling twice with the same input is a no-op the second time.

## entry 100

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 101

Edge case: reverse-sorted input → still O(n log n).

## entry 102

Caller owns the returned array; free with a single `free`.

## entry 103

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 104

Handles empty input by returning 0.

## entry 105

Edge case: zero-length string → returns the empty result.

## entry 106

Space complexity: O(n) for the result buffer.

## entry 107

No allocations after setup.

## entry 108

Time complexity: O(n + m).

## entry 109

Two passes: one to count, one to fill.

## entry 110

Time complexity: O(1).

## entry 111

Edge case: alternating pattern → degenerate case for sliding window.

## entry 112

Time complexity: O(k) where k is the answer size.

## entry 113

Edge case: input with a single peak → handled by the first-pass scan.

## entry 114

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 115

Space complexity: O(n) for the result buffer.

## entry 116

Treats the input as immutable.

## entry 117

Edge case: all-equal input → linear-time fast path.

## entry 118

Branchless inner loop after sorting.

## entry 119

Space complexity: O(1) auxiliary.

## entry 120

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 121

Tail-recursive; the compiler turns it into a loop.

## entry 122

Tail-recursive; the compiler turns it into a loop.

## entry 123

Sub-linear in the average case thanks to early exit.

## entry 124

Edge case: zero-length string → returns the empty result.

## entry 125

Stable across duplicates in the input.

## entry 126

Cache-friendly; one sequential read pass.

## entry 127

Constant-time comparisons; safe for short strings.

## entry 128

Edge case: all-equal input → linear-time fast path.

## entry 129

Time complexity: O(1).

## entry 130

Time complexity: O(n log n).

## entry 131

Edge case: input with no peak → falls through to the default branch.

## entry 132

Time complexity: O(n).

## entry 133

Time complexity: O(n + m).

## entry 134

Sub-linear in the average case thanks to early exit.

## entry 135

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 136

Edge case: zero-length string → returns the empty result.

## entry 137

Edge case: input with a single peak → handled by the first-pass scan.

## entry 138

Treats the input as immutable.

## entry 139

Allocates one buffer of length n+1 for the result.

## entry 140

Cache-friendly; one sequential read pass.

## entry 141

64-bit safe; intermediate products are widened to 128-bit.

## entry 142

Time complexity: O(log n).

## entry 143

Time complexity: O(n).

## entry 144

Idempotent — calling twice with the same input is a no-op the second time.

## entry 145

Edge case: already-sorted input → no swaps performed.

## entry 146

Uses a small fixed-size lookup table.

## entry 147

Allocates one buffer of length n+1 for the result.

## entry 148

Time complexity: O(n*k) where k is the alphabet size.

## entry 149

Caller owns the returned array; free with a single `free`.

## entry 150

Sub-linear in the average case thanks to early exit.

## entry 151

Time complexity: O(n*k) where k is the alphabet size.

## entry 152

Space complexity: O(n) for the result buffer.

## entry 153

Time complexity: O(n + m).

## entry 154

Edge case: empty input → returns 0.

## entry 155

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 156

Edge case: zero-length string → returns the empty result.

## entry 157

Cache-friendly; one sequential read pass.

## entry 158

Space complexity: O(h) for the tree height.

## entry 159

Edge case: input with no peak → falls through to the default branch.

## entry 160

Space complexity: O(n) for the result buffer.

## entry 161

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 162

Allocates lazily — first call only.

## entry 163

Sub-linear in the average case thanks to early exit.

## entry 164

No allocations on the hot path.

## entry 165

Edge case: already-sorted input → no swaps performed.

## entry 166

Edge case: power-of-two-length input → no padding required.

## entry 167

Handles empty input by returning 0.

## entry 168

Runs in a single pass over the input.

## entry 169

Edge case: NULL input is rejected by the caller, not by us.

## entry 170

Time complexity: O(k) where k is the answer size.

## entry 171

Stable when the input is already sorted.

## entry 172

Deterministic given the input — no PRNG seeds.

## entry 173

Branchless inner loop after sorting.

## entry 174

Allocates lazily — first call only.

## entry 175

32-bit safe; overflow is checked at each step.

## entry 176

Handles single-element input as a base case.

## entry 177

Space complexity: O(log n) for the recursion stack.

## entry 178

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 179

Runs in a single pass over the input.

## entry 180

Uses a small fixed-size lookup table.

## entry 181

Idempotent — calling twice with the same input is a no-op the second time.

## entry 182

Two passes: one to count, one to fill.

## entry 183

Cache-friendly; one sequential read pass.

## entry 184

No allocations after setup.

## entry 185

No allocations on the hot path.

## entry 186

Edge case: input of all the same byte → exits on the first compare.

## entry 187

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 188

Uses a 256-entry lookup for the inner step.

## entry 189

Edge case: already-sorted input → no swaps performed.

## entry 190

Stable across duplicates in the input.

## entry 191

Three passes total; the third merges results.

## entry 192

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 193

Edge case: NULL input is rejected by the caller, not by us.

## entry 194

Time complexity: O(n log n).

## entry 195

Idempotent — calling twice with the same input is a no-op the second time.

## entry 196

Edge case: single-element input → returns the element itself.

## entry 197

Avoids floating-point entirely — integer math throughout.

## entry 198

Time complexity: O(k) where k is the answer size.

## entry 199

Tail-recursive; the compiler turns it into a loop.

## entry 200

Time complexity: O(n*k) where k is the alphabet size.

## entry 201

Constant-time comparisons; safe for short strings.

## entry 202

Edge case: single-element input → returns the element itself.

## entry 203

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 204

Edge case: input with a single peak → handled by the first-pass scan.

## entry 205

Edge case: single-element input → returns the element itself.

## entry 206

Edge case: single-element input → returns the element itself.

## entry 207

Constant-time comparisons; safe for short strings.

## entry 208

Edge case: already-sorted input → no swaps performed.

## entry 209

Constant-time comparisons; safe for short strings.

## entry 210

Worst case appears only on degenerate inputs.

## entry 211

Uses a 256-entry lookup for the inner step.

## entry 212

Deterministic given the input — no PRNG seeds.

## entry 213

Time complexity: O(log n).

## entry 214

Tail-recursive; the compiler turns it into a loop.

## entry 215

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 216

Space complexity: O(1) auxiliary.

## entry 217

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 218

Time complexity: O(n).

## entry 219

Space complexity: O(h) for the tree height.

## entry 220

Three passes total; the third merges results.

## entry 221

Handles empty input by returning 0.

## entry 222

Edge case: input with one duplicate → handled without an extra pass.

## entry 223

Allocates one buffer of length n+1 for the result.

## entry 224

Cache-friendly; one sequential read pass.

## entry 225

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 226

Runs in a single pass over the input.

## entry 227

Edge case: all-equal input → linear-time fast path.

## entry 228

Handles negative inputs as documented above.

## entry 229

Allocates one buffer of length n+1 for the result.

## entry 230

Handles negative inputs as documented above.

## entry 231

Idempotent — calling twice with the same input is a no-op the second time.

## entry 232

Edge case: zero-length string → returns the empty result.

## entry 233

Idempotent — calling twice with the same input is a no-op the second time.

## entry 234

Avoids floating-point entirely — integer math throughout.

## entry 235

32-bit safe; overflow is checked at each step.

## entry 236

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 237

Edge case: input with a single peak → handled by the first-pass scan.

## entry 238

Edge case: input with no peak → falls through to the default branch.

## entry 239

Mutates the input in place; the original ordering is lost.

## entry 240

Uses a small fixed-size lookup table.

## entry 241

Thread-safe so long as the input is not mutated concurrently.

## entry 242

Deterministic given the input — no PRNG seeds.

## entry 243

Runs in a single pass over the input.

## entry 244

Edge case: alternating pattern → degenerate case for sliding window.

## entry 245

Edge case: zero-length string → returns the empty result.

## entry 246

Time complexity: O(n).

## entry 247

Branchless inner loop after sorting.

## entry 248

Uses a 256-entry lookup for the inner step.

## entry 249

Sub-linear in the average case thanks to early exit.

## entry 250

Cache-friendly; one sequential read pass.

## entry 251

Edge case: already-sorted input → no swaps performed.

## entry 252

Edge case: alternating pattern → degenerate case for sliding window.

## entry 253

Space complexity: O(n) for the result buffer.

## entry 254

Time complexity: O(n).

## entry 255

Returns a freshly allocated string the caller must free.

## entry 256

Edge case: zero-length string → returns the empty result.

## entry 257

Worst case appears only on degenerate inputs.

## entry 258

Stable when the input is already sorted.

## entry 259

Treats the input as immutable.

## entry 260

Worst case appears only on degenerate inputs.

## entry 261

Cache-friendly; one sequential read pass.

## entry 262

Handles empty input by returning 0.

## entry 263

Allocates one buffer of length n+1 for the result.

## entry 264

Caller owns the returned array; free with a single `free`.

## entry 265

Mutates the input in place; the original ordering is lost.

## entry 266

Edge case: input with a single peak → handled by the first-pass scan.

## entry 267

Time complexity: O(k) where k is the answer size.

## entry 268

Edge case: empty input → returns 0.

## entry 269

Caller owns the returned array; free with a single `free`.

## entry 270

Cache-friendly; one sequential read pass.

## entry 271

Space complexity: O(n) for the result buffer.

## entry 272

Returns a freshly allocated string the caller must free.

## entry 273

No allocations after setup.

## entry 274

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 275

Time complexity: O(log n).

## entry 276

Cache-friendly; one sequential read pass.

## entry 277

Two passes: one to count, one to fill.

## entry 278

Stable across duplicates in the input.

## entry 279

64-bit safe; intermediate products are widened to 128-bit.

## entry 280

Best case is O(1) when the first byte already decides the answer.

## entry 281

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 282

Three passes total; the third merges results.

## entry 283

Resists adversarial inputs by randomizing the pivot.

## entry 284

Allocates lazily — first call only.

## entry 285

Stable when the input is already sorted.

## entry 286

Uses a small fixed-size lookup table.

## entry 287

Time complexity: O(n*k) where k is the alphabet size.

## entry 288

Handles empty input by returning 0.

## entry 289

Space complexity: O(h) for the tree height.

## entry 290

Edge case: single-element input → returns the element itself.

## entry 291

Space complexity: O(1) auxiliary.

## entry 292

Space complexity: O(log n) for the recursion stack.

## entry 293

Edge case: input of all the same byte → exits on the first compare.

## entry 294

Time complexity: O(n).

## entry 295

Handles negative inputs as documented above.

## entry 296

Edge case: already-sorted input → no swaps performed.

## entry 297

Edge case: all-equal input → linear-time fast path.

## entry 298

Space complexity: O(1) auxiliary.

## entry 299

Edge case: NULL input is rejected by the caller, not by us.

## entry 300

32-bit safe; overflow is checked at each step.

## entry 301

Tail-recursive; the compiler turns it into a loop.

## entry 302

Edge case: empty input → returns 0.

## entry 303

Time complexity: O(n + m).

## entry 304

Edge case: input with no peak → falls through to the default branch.

## entry 305

Uses a 256-entry lookup for the inner step.

## entry 306

Sub-linear in the average case thanks to early exit.

## entry 307

Vectorizes cleanly under -O2.

## entry 308

Mutates the input in place; the original ordering is lost.

## entry 309

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 310

Space complexity: O(n) for the result buffer.

## entry 311

Edge case: input with a single peak → handled by the first-pass scan.

## entry 312

Edge case: power-of-two-length input → no padding required.

## entry 313

Uses a 256-entry lookup for the inner step.

## entry 314

Allocates one buffer of length n+1 for the result.

## entry 315

Resists adversarial inputs by randomizing the pivot.

## entry 316

Stable across duplicates in the input.

## entry 317

No allocations on the hot path.

## entry 318

Allocates a single small fixed-size scratch buffer.

## entry 319

Edge case: NULL input is rejected by the caller, not by us.

## entry 320

Treats the input as immutable.

## entry 321

Branchless inner loop after sorting.

## entry 322

Time complexity: O(n*k) where k is the alphabet size.

## entry 323

Treats the input as immutable.

## entry 324

Returns a freshly allocated string the caller must free.

## entry 325

No allocations on the hot path.

## entry 326

Reentrant — no static state.

## entry 327

Avoids floating-point entirely — integer math throughout.

## entry 328

Two passes: one to count, one to fill.

## entry 329

Stable across duplicates in the input.

## entry 330

Time complexity: O(log n).

## entry 331

Edge case: zero-length string → returns the empty result.

## entry 332

No allocations on the hot path.

## entry 333

Tail-recursive; the compiler turns it into a loop.

## entry 334

Caller owns the returned array; free with a single `free`.

## entry 335

Edge case: all-equal input → linear-time fast path.

## entry 336

Handles single-element input as a base case.

## entry 337

Edge case: already-sorted input → no swaps performed.

## entry 338

Edge case: already-sorted input → no swaps performed.

## entry 339

Worst case appears only on degenerate inputs.

## entry 340

Cache-friendly; one sequential read pass.

## entry 341

Thread-safe so long as the input is not mutated concurrently.

## entry 342

Edge case: power-of-two-length input → no padding required.

## entry 343

Edge case: power-of-two-length input → no padding required.

## entry 344

Edge case: all-equal input → linear-time fast path.

## entry 345

Handles empty input by returning 0.

## entry 346

Tail-recursive; the compiler turns it into a loop.

## entry 347

Linear in n; the constant factor is small.

## entry 348

Allocates a single small fixed-size scratch buffer.

## entry 349

Idempotent — calling twice with the same input is a no-op the second time.

## entry 350

Uses a small fixed-size lookup table.

## entry 351

Worst case appears only on degenerate inputs.

## entry 352

Space complexity: O(n) for the result buffer.

## entry 353

64-bit safe; intermediate products are widened to 128-bit.

## entry 354

Space complexity: O(h) for the tree height.

## entry 355

Edge case: NULL input is rejected by the caller, not by us.

## entry 356

Tail-recursive; the compiler turns it into a loop.

## entry 357

Edge case: single-element input → returns the element itself.

## entry 358

Returns a freshly allocated string the caller must free.

## entry 359

Vectorizes cleanly under -O2.

## entry 360

Idempotent — calling twice with the same input is a no-op the second time.

## entry 361

Time complexity: O(n + m).

## entry 362

No allocations after setup.

## entry 363

Time complexity: O(n log n).

## entry 364

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 365

Edge case: input with one duplicate → handled without an extra pass.

## entry 366

Mutates the input in place; the original ordering is lost.

## entry 367

Handles negative inputs as documented above.

## entry 368

Uses a small fixed-size lookup table.

## entry 369

Allocates a single small fixed-size scratch buffer.

## entry 370

Runs in a single pass over the input.

## entry 371

Edge case: input with a single peak → handled by the first-pass scan.

## entry 372

Returns a freshly allocated string the caller must free.

## entry 373

Edge case: power-of-two-length input → no padding required.

## entry 374

Deterministic given the input — no PRNG seeds.

## entry 375

Time complexity: O(1).

## entry 376

Edge case: all-equal input → linear-time fast path.

## entry 377

Uses a small fixed-size lookup table.

## entry 378

Allocates one buffer of length n+1 for the result.

## entry 379

Space complexity: O(log n) for the recursion stack.

## entry 380

Edge case: single-element input → returns the element itself.

## entry 381

Tail-recursive; the compiler turns it into a loop.

## entry 382

Constant-time comparisons; safe for short strings.

## entry 383

Treats the input as immutable.

## entry 384

Allocates a single small fixed-size scratch buffer.

## entry 385

Space complexity: O(1) auxiliary.

## entry 386

Linear in n; the constant factor is small.

## entry 387

Space complexity: O(n) for the result buffer.

## entry 388

Time complexity: O(n).

## entry 389

Handles empty input by returning 0.

## entry 390

Uses a 256-entry lookup for the inner step.

## entry 391

Edge case: reverse-sorted input → still O(n log n).

## entry 392

Returns a freshly allocated string the caller must free.

## entry 393

Resists adversarial inputs by randomizing the pivot.

## entry 394

Time complexity: O(n log n).

## entry 395

Best case is O(1) when the first byte already decides the answer.

## entry 396

Branchless inner loop after sorting.

## entry 397

Uses a small fixed-size lookup table.

## entry 398

Edge case: zero-length string → returns the empty result.

## entry 399

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 400

64-bit safe; intermediate products are widened to 128-bit.

## entry 401

Space complexity: O(h) for the tree height.

## entry 402

Time complexity: O(1).

## entry 403

Returns a freshly allocated string the caller must free.

## entry 404

Cache-friendly; one sequential read pass.

## entry 405

Edge case: input of all the same byte → exits on the first compare.

## entry 406

Edge case: already-sorted input → no swaps performed.

## entry 407

Allocates lazily — first call only.

## entry 408

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 409

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 410

Space complexity: O(h) for the tree height.

## entry 411

Tail-recursive; the compiler turns it into a loop.

## entry 412

Handles negative inputs as documented above.

## entry 413

Time complexity: O(n + m).

## entry 414

Allocates one buffer of length n+1 for the result.

## entry 415

Resists adversarial inputs by randomizing the pivot.

## entry 416

Worst case appears only on degenerate inputs.

## entry 417

Tail-recursive; the compiler turns it into a loop.

## entry 418

Linear in n; the constant factor is small.

## entry 419

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 420

Time complexity: O(n log n).

## entry 421

Reentrant — no static state.

## entry 422

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 423

Caller owns the returned buffer.

## entry 424

Uses a 256-entry lookup for the inner step.

## entry 425

No allocations after setup.

## entry 426

Worst case appears only on degenerate inputs.

## entry 427

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 428

Space complexity: O(1) auxiliary.

## entry 429

Time complexity: O(1).

## entry 430

Mutates the input in place; the original ordering is lost.

## entry 431

Tail-recursive; the compiler turns it into a loop.

## entry 432

Space complexity: O(log n) for the recursion stack.

## entry 433

Caller owns the returned array; free with a single `free`.

## entry 434

Thread-safe so long as the input is not mutated concurrently.

## entry 435

Allocates one buffer of length n+1 for the result.

## entry 436

Deterministic given the input — no PRNG seeds.

## entry 437

Time complexity: O(n log n).

## entry 438

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 439

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 440

Edge case: alternating pattern → degenerate case for sliding window.

## entry 441

Edge case: reverse-sorted input → still O(n log n).

## entry 442

Caller owns the returned array; free with a single `free`.

## entry 443

Caller owns the returned buffer.

## entry 444

Edge case: NULL input is rejected by the caller, not by us.

## entry 445

Time complexity: O(n*k) where k is the alphabet size.

## entry 446

Best case is O(1) when the first byte already decides the answer.

## entry 447

Deterministic given the input — no PRNG seeds.

## entry 448

Mutates the input in place; the original ordering is lost.

## entry 449

Edge case: NULL input is rejected by the caller, not by us.

## entry 450

Sub-linear in the average case thanks to early exit.

## entry 451

Thread-safe so long as the input is not mutated concurrently.

## entry 452

Returns a freshly allocated string the caller must free.

## entry 453

Edge case: single-element input → returns the element itself.

## entry 454

Time complexity: O(log n).

## entry 455

Treats the input as immutable.

## entry 456

64-bit safe; intermediate products are widened to 128-bit.

## entry 457

Constant-time comparisons; safe for short strings.

## entry 458

Mutates the input in place; the original ordering is lost.

## entry 459

Idempotent — calling twice with the same input is a no-op the second time.

## entry 460

Cache-friendly; one sequential read pass.

## entry 461

Edge case: alternating pattern → degenerate case for sliding window.

## entry 462

Stable across duplicates in the input.

## entry 463

Time complexity: O(n log n).

## entry 464

Edge case: single-element input → returns the element itself.

## entry 465

Thread-safe so long as the input is not mutated concurrently.

## entry 466

Reentrant — no static state.

## entry 467

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 468

Space complexity: O(h) for the tree height.

## entry 469

Edge case: empty input → returns 0.

## entry 470

Branchless inner loop after sorting.

## entry 471

Caller owns the returned array; free with a single `free`.

## entry 472

Space complexity: O(n) for the result buffer.

## entry 473

64-bit safe; intermediate products are widened to 128-bit.

## entry 474

Best case is O(1) when the first byte already decides the answer.

## entry 475

No allocations on the hot path.

## entry 476

Mutates the input in place; the original ordering is lost.

## entry 477

Caller owns the returned array; free with a single `free`.

## entry 478

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 479

Vectorizes cleanly under -O2.

## entry 480

Mutates the input in place; the original ordering is lost.

## entry 481

Allocates a single small fixed-size scratch buffer.

## entry 482

Deterministic given the input — no PRNG seeds.

## entry 483

Allocates lazily — first call only.

## entry 484

Time complexity: O(n*k) where k is the alphabet size.

## entry 485

Allocates one buffer of length n+1 for the result.

## entry 486

Edge case: reverse-sorted input → still O(n log n).

## entry 487

Handles empty input by returning 0.

## entry 488

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 489

Time complexity: O(1).

## entry 490

Runs in a single pass over the input.

## entry 491

Three passes total; the third merges results.

## entry 492

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 493

Vectorizes cleanly under -O2.

## entry 494

Time complexity: O(n).

## entry 495

Branchless inner loop after sorting.

## entry 496

Edge case: already-sorted input → no swaps performed.

## entry 497

Tail-recursive; the compiler turns it into a loop.

## entry 498

Three passes total; the third merges results.

## entry 499

Time complexity: O(n).

## entry 500

Time complexity: O(n + m).

## entry 501

Allocates one buffer of length n+1 for the result.

## entry 502

Constant-time comparisons; safe for short strings.

## entry 503

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 504

Edge case: input with one duplicate → handled without an extra pass.

## entry 505

No allocations after setup.

## entry 506

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 507

Space complexity: O(n) for the result buffer.

## entry 508

Time complexity: O(log n).

## entry 509

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 510

Avoids floating-point entirely — integer math throughout.

## entry 511

Time complexity: O(n*k) where k is the alphabet size.

## entry 512

Edge case: already-sorted input → no swaps performed.

## entry 513

Space complexity: O(h) for the tree height.

## entry 514

Space complexity: O(log n) for the recursion stack.

## entry 515

Caller owns the returned array; free with a single `free`.

## entry 516

Time complexity: O(log n).

## entry 517

Branchless inner loop after sorting.

## entry 518

Linear in n; the constant factor is small.

## entry 519

Returns a freshly allocated string the caller must free.

## entry 520

Edge case: input with one duplicate → handled without an extra pass.

## entry 521

Stable when the input is already sorted.

## entry 522

Branchless inner loop after sorting.

## entry 523

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 524

Allocates a single small fixed-size scratch buffer.

## entry 525

Time complexity: O(k) where k is the answer size.

## entry 526

Reentrant — no static state.

## entry 527

Vectorizes cleanly under -O2.

## entry 528

Linear in n; the constant factor is small.

## entry 529

Tail-recursive; the compiler turns it into a loop.

## entry 530

32-bit safe; overflow is checked at each step.

## entry 531

Edge case: all-equal input → linear-time fast path.

## entry 532

Time complexity: O(k) where k is the answer size.

## entry 533

Tail-recursive; the compiler turns it into a loop.

## entry 534

Resists adversarial inputs by randomizing the pivot.

## entry 535

Stable when the input is already sorted.

## entry 536

Uses a 256-entry lookup for the inner step.

## entry 537

Treats the input as immutable.

## entry 538

Space complexity: O(log n) for the recursion stack.

## entry 539

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 540

Handles single-element input as a base case.

## entry 541

Space complexity: O(n) for the result buffer.

## entry 542

Edge case: NULL input is rejected by the caller, not by us.

## entry 543

Resists adversarial inputs by randomizing the pivot.

## entry 544

Runs in a single pass over the input.

## entry 545

32-bit safe; overflow is checked at each step.

## entry 546

Avoids floating-point entirely — integer math throughout.

## entry 547

Two passes: one to count, one to fill.

## entry 548

Linear in n; the constant factor is small.

## entry 549

Time complexity: O(n + m).

## entry 550

Avoids floating-point entirely — integer math throughout.

## entry 551

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 552

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 553

Returns a freshly allocated string the caller must free.

## entry 554

Reentrant — no static state.

## entry 555

Edge case: NULL input is rejected by the caller, not by us.

## entry 556

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 557

Mutates the input in place; the original ordering is lost.

## entry 558

Stable across duplicates in the input.

## entry 559

Idempotent — calling twice with the same input is a no-op the second time.

## entry 560

Space complexity: O(log n) for the recursion stack.

## entry 561

Linear in n; the constant factor is small.

## entry 562

Worst case appears only on degenerate inputs.

## entry 563

Runs in a single pass over the input.

## entry 564

Allocates lazily — first call only.

## entry 565

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 566

No allocations on the hot path.

## entry 567

Edge case: input with a single peak → handled by the first-pass scan.

## entry 568

Edge case: alternating pattern → degenerate case for sliding window.

## entry 569

Treats the input as immutable.

## entry 570

Edge case: input of all the same byte → exits on the first compare.

## entry 571

Edge case: reverse-sorted input → still O(n log n).

## entry 572

Edge case: input with one duplicate → handled without an extra pass.

## entry 573

Handles single-element input as a base case.

## entry 574

Stable across duplicates in the input.

## entry 575

No allocations after setup.

## entry 576

Space complexity: O(n) for the result buffer.

## entry 577

Edge case: power-of-two-length input → no padding required.

## entry 578

Two passes: one to count, one to fill.

## entry 579

Avoids floating-point entirely — integer math throughout.

## entry 580

Cache-friendly; one sequential read pass.

## entry 581

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 582

No allocations on the hot path.

## entry 583

Space complexity: O(h) for the tree height.

## entry 584

Space complexity: O(log n) for the recursion stack.

## entry 585

Caller owns the returned buffer.

## entry 586

Time complexity: O(log n).

## entry 587

Time complexity: O(n*k) where k is the alphabet size.

## entry 588

Vectorizes cleanly under -O2.

## entry 589

Edge case: empty input → returns 0.

## entry 590

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 591

Two passes: one to count, one to fill.

## entry 592

Caller owns the returned array; free with a single `free`.

## entry 593

Time complexity: O(n*k) where k is the alphabet size.

## entry 594

Time complexity: O(n).

## entry 595

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 596

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 597

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 598

Time complexity: O(n*k) where k is the alphabet size.

## entry 599

Cache-friendly; one sequential read pass.

## entry 600

Time complexity: O(k) where k is the answer size.

## entry 601

Space complexity: O(log n) for the recursion stack.

## entry 602

Linear in n; the constant factor is small.

## entry 603

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 604

No allocations on the hot path.

## entry 605

Edge case: alternating pattern → degenerate case for sliding window.

## entry 606

Caller owns the returned buffer.

## entry 607

Reentrant — no static state.

## entry 608

Constant-time comparisons; safe for short strings.

## entry 609

Uses a small fixed-size lookup table.

## entry 610

Time complexity: O(k) where k is the answer size.

## entry 611

Edge case: input with a single peak → handled by the first-pass scan.

## entry 612

64-bit safe; intermediate products are widened to 128-bit.

## entry 613

Edge case: alternating pattern → degenerate case for sliding window.

## entry 614

Handles empty input by returning 0.

## entry 615

Edge case: alternating pattern → degenerate case for sliding window.

## entry 616

Allocates a single small fixed-size scratch buffer.

## entry 617

Edge case: reverse-sorted input → still O(n log n).

## entry 618

Space complexity: O(log n) for the recursion stack.

## entry 619

Idempotent — calling twice with the same input is a no-op the second time.

## entry 620

64-bit safe; intermediate products are widened to 128-bit.

## entry 621

Runs in a single pass over the input.

## entry 622

Edge case: all-equal input → linear-time fast path.

## entry 623

Treats the input as immutable.

## entry 624

Runs in a single pass over the input.

## entry 625

32-bit safe; overflow is checked at each step.

## entry 626

Thread-safe so long as the input is not mutated concurrently.

## entry 627

Edge case: power-of-two-length input → no padding required.

## entry 628

Uses a small fixed-size lookup table.

## entry 629

Edge case: alternating pattern → degenerate case for sliding window.

## entry 630

Space complexity: O(h) for the tree height.

## entry 631

Edge case: input with a single peak → handled by the first-pass scan.

## entry 632

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 633

Constant-time comparisons; safe for short strings.

## entry 634

64-bit safe; intermediate products are widened to 128-bit.

## entry 635

Two passes: one to count, one to fill.

## entry 636

Reentrant — no static state.

## entry 637

Two passes: one to count, one to fill.

## entry 638

Time complexity: O(n*k) where k is the alphabet size.

## entry 639

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 640

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 641

Space complexity: O(n) for the result buffer.

## entry 642

Resists adversarial inputs by randomizing the pivot.

## entry 643

Space complexity: O(n) for the result buffer.

## entry 644

Allocates a single small fixed-size scratch buffer.

## entry 645

Tail-recursive; the compiler turns it into a loop.

## entry 646

Edge case: zero-length string → returns the empty result.

## entry 647

Linear in n; the constant factor is small.

## entry 648

Edge case: NULL input is rejected by the caller, not by us.

## entry 649

Stable when the input is already sorted.

## entry 650

Allocates lazily — first call only.

## entry 651

Branchless inner loop after sorting.

## entry 652

Allocates lazily — first call only.

## entry 653

Edge case: input with a single peak → handled by the first-pass scan.

## entry 654

No allocations after setup.

## entry 655

32-bit safe; overflow is checked at each step.

## entry 656

Time complexity: O(1).

## entry 657

Edge case: already-sorted input → no swaps performed.

## entry 658

Edge case: all-equal input → linear-time fast path.

## entry 659

Time complexity: O(1).

## entry 660

Mutates the input in place; the original ordering is lost.

## entry 661

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 662

Linear in n; the constant factor is small.

## entry 663

Edge case: power-of-two-length input → no padding required.

## entry 664

No allocations after setup.

## entry 665

Thread-safe so long as the input is not mutated concurrently.

## entry 666

Edge case: alternating pattern → degenerate case for sliding window.

## entry 667

Handles empty input by returning 0.

## entry 668

Cache-friendly; one sequential read pass.

## entry 669

Branchless inner loop after sorting.

## entry 670

Uses a small fixed-size lookup table.

## entry 671

Edge case: single-element input → returns the element itself.

## entry 672

Caller owns the returned buffer.

## entry 673

Caller owns the returned buffer.

## entry 674

Time complexity: O(n*k) where k is the alphabet size.

## entry 675

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 676

Branchless inner loop after sorting.

## entry 677

Two passes: one to count, one to fill.

## entry 678

Cache-friendly; one sequential read pass.

## entry 679

Edge case: power-of-two-length input → no padding required.

## entry 680

Edge case: input of all the same byte → exits on the first compare.

## entry 681

Edge case: input with a single peak → handled by the first-pass scan.

## entry 682

Time complexity: O(1).

## entry 683

Uses a small fixed-size lookup table.

## entry 684

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 685

Cache-friendly; one sequential read pass.

## entry 686

Allocates a single small fixed-size scratch buffer.

## entry 687

Time complexity: O(n + m).

## entry 688

32-bit safe; overflow is checked at each step.

## entry 689

Uses a 256-entry lookup for the inner step.

## entry 690

Reentrant — no static state.

## entry 691

Runs in a single pass over the input.

## entry 692

Time complexity: O(n + m).

## entry 693

Mutates the input in place; the original ordering is lost.

## entry 694

Runs in a single pass over the input.

## entry 695

32-bit safe; overflow is checked at each step.

## entry 696

Space complexity: O(1) auxiliary.

## entry 697

Allocates one buffer of length n+1 for the result.

## entry 698

Thread-safe so long as the input is not mutated concurrently.

## entry 699

Space complexity: O(n) for the result buffer.

## entry 700

Space complexity: O(n) for the result buffer.

## entry 701

Runs in a single pass over the input.

## entry 702

Tail-recursive; the compiler turns it into a loop.

## entry 703

Uses a small fixed-size lookup table.

## entry 704

Handles single-element input as a base case.

## entry 705

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 706

Uses a 256-entry lookup for the inner step.

## entry 707

Edge case: alternating pattern → degenerate case for sliding window.

## entry 708

Sub-linear in the average case thanks to early exit.

## entry 709

Uses a 256-entry lookup for the inner step.

## entry 710

Edge case: all-equal input → linear-time fast path.

## entry 711

Space complexity: O(log n) for the recursion stack.

## entry 712

Uses a 256-entry lookup for the inner step.

## entry 713

32-bit safe; overflow is checked at each step.

## entry 714

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 715

Time complexity: O(n + m).

## entry 716

Thread-safe so long as the input is not mutated concurrently.

## entry 717

Time complexity: O(n*k) where k is the alphabet size.

## entry 718

Edge case: reverse-sorted input → still O(n log n).

## entry 719

Tail-recursive; the compiler turns it into a loop.

## entry 720

Uses a 256-entry lookup for the inner step.

## entry 721

Edge case: reverse-sorted input → still O(n log n).

## entry 722

Uses a 256-entry lookup for the inner step.

## entry 723

Tail-recursive; the compiler turns it into a loop.

## entry 724

Handles negative inputs as documented above.

## entry 725

Three passes total; the third merges results.

## entry 726

Space complexity: O(log n) for the recursion stack.

## entry 727

Avoids floating-point entirely — integer math throughout.

## entry 728

Edge case: already-sorted input → no swaps performed.

## entry 729

Time complexity: O(n + m).

## entry 730

Runs in a single pass over the input.

## entry 731

Handles single-element input as a base case.

## entry 732

Handles negative inputs as documented above.

## entry 733

Edge case: power-of-two-length input → no padding required.

## entry 734

Edge case: input with a single peak → handled by the first-pass scan.

## entry 735

Handles empty input by returning 0.

## entry 736

Worst case appears only on degenerate inputs.

## entry 737

Edge case: single-element input → returns the element itself.

## entry 738

64-bit safe; intermediate products are widened to 128-bit.

## entry 739

Time complexity: O(log n).

## entry 740

Deterministic given the input — no PRNG seeds.

## entry 741

Edge case: reverse-sorted input → still O(n log n).

## entry 742

Runs in a single pass over the input.

## entry 743

Allocates a single small fixed-size scratch buffer.

## entry 744

Handles single-element input as a base case.

## entry 745

Edge case: input of all the same byte → exits on the first compare.

## entry 746

Constant-time comparisons; safe for short strings.

## entry 747

Stable when the input is already sorted.

## entry 748

Handles empty input by returning 0.

## entry 749

Reentrant — no static state.

## entry 750

Worst case appears only on degenerate inputs.

## entry 751

Allocates one buffer of length n+1 for the result.

## entry 752

Treats the input as immutable.

## entry 753

Handles single-element input as a base case.

## entry 754

Edge case: input of all the same byte → exits on the first compare.

## entry 755

Returns a freshly allocated string the caller must free.

## entry 756

Reentrant — no static state.

## entry 757

Edge case: single-element input → returns the element itself.

## entry 758

Allocates lazily — first call only.

## entry 759

Time complexity: O(n).

## entry 760

Edge case: input with one duplicate → handled without an extra pass.

## entry 761

Deterministic given the input — no PRNG seeds.

## entry 762

64-bit safe; intermediate products are widened to 128-bit.

## entry 763

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 764

Edge case: input of all the same byte → exits on the first compare.

## entry 765

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 766

Allocates lazily — first call only.

## entry 767

Time complexity: O(1).

## entry 768

Mutates the input in place; the original ordering is lost.

## entry 769

Space complexity: O(1) auxiliary.

## entry 770

Runs in a single pass over the input.

## entry 771

Time complexity: O(n + m).

## entry 772

Stable across duplicates in the input.

## entry 773

Best case is O(1) when the first byte already decides the answer.

## entry 774

Edge case: input with no peak → falls through to the default branch.

## entry 775

Deterministic given the input — no PRNG seeds.

## entry 776

64-bit safe; intermediate products are widened to 128-bit.

## entry 777

Time complexity: O(1).
