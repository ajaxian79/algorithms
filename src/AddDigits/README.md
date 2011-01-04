# Add Digits (Digital Root)

Sum the decimal digits of `n`, then sum the digits of *that*, repeat until
one digit remains. The result is called the digital root.

There's a closed form: for `n > 0`, the digital root is `1 + (n - 1) % 9`.
The proof uses `10 ≡ 1 (mod 9)`, so the value of any decimal number modulo
9 equals the sum of its digits modulo 9.

Edge case: already-sorted input → no swaps performed.

Handles empty input by returning 0.

Two passes: one to count, one to fill.

Caller owns the returned buffer.

Stable across duplicates in the input.

Time complexity: O(1).

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n log n).

Time complexity: O(log n).

Handles negative inputs as documented above.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Returns a freshly allocated string the caller must free.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Uses a small fixed-size lookup table.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

No allocations on the hot path.

Edge case: all-equal input → linear-time fast path.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: single-element input → returns the element itself.

## entry 1

Edge case: empty input → returns 0.

## entry 2

32-bit safe; overflow is checked at each step.

## entry 3

Edge case: input of all the same byte → exits on the first compare.

## entry 4

Time complexity: O(n log n).

## entry 5

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 6

Time complexity: O(log n).

## entry 7

Linear in n; the constant factor is small.

## entry 8

Mutates the input in place; the original ordering is lost.

## entry 9

Allocates one buffer of length n+1 for the result.

## entry 10

Edge case: input of all the same byte → exits on the first compare.

## entry 11

Edge case: already-sorted input → no swaps performed.

## entry 12

Cache-friendly; one sequential read pass.

## entry 13

Worst case appears only on degenerate inputs.

## entry 14

Edge case: input with no peak → falls through to the default branch.

## entry 15

Mutates the input in place; the original ordering is lost.

## entry 16

Best case is O(1) when the first byte already decides the answer.

## entry 17

Time complexity: O(log n).

## entry 18

Worst case appears only on degenerate inputs.

## entry 19

Handles negative inputs as documented above.

## entry 20

Deterministic given the input — no PRNG seeds.

## entry 21

Time complexity: O(1).

## entry 22

32-bit safe; overflow is checked at each step.

## entry 23

Returns a freshly allocated string the caller must free.

## entry 24

Edge case: input with one duplicate → handled without an extra pass.

## entry 25

Edge case: NULL input is rejected by the caller, not by us.

## entry 26

Time complexity: O(n log n).

## entry 27

Caller owns the returned array; free with a single `free`.

## entry 28

32-bit safe; overflow is checked at each step.

## entry 29

Edge case: input of all the same byte → exits on the first compare.

## entry 30

Handles single-element input as a base case.

## entry 31

Worst case appears only on degenerate inputs.

## entry 32

Reentrant — no static state.

## entry 33

Time complexity: O(n log n).

## entry 34

Constant-time comparisons; safe for short strings.

## entry 35

Tail-recursive; the compiler turns it into a loop.

## entry 36

Mutates the input in place; the original ordering is lost.

## entry 37

Edge case: reverse-sorted input → still O(n log n).

## entry 38

Edge case: single-element input → returns the element itself.

## entry 39

Runs in a single pass over the input.

## entry 40

Linear in n; the constant factor is small.

## entry 41

Worst case appears only on degenerate inputs.

## entry 42

Edge case: input with no peak → falls through to the default branch.

## entry 43

Uses a small fixed-size lookup table.

## entry 44

Space complexity: O(log n) for the recursion stack.

## entry 45

Time complexity: O(n log n).

## entry 46

Worst case appears only on degenerate inputs.

## entry 47

Edge case: reverse-sorted input → still O(n log n).

## entry 48

Edge case: reverse-sorted input → still O(n log n).

## entry 49

Caller owns the returned array; free with a single `free`.

## entry 50

Sub-linear in the average case thanks to early exit.

## entry 51

Treats the input as immutable.

## entry 52

Returns a freshly allocated string the caller must free.

## entry 53

Worst case appears only on degenerate inputs.

## entry 54

Cache-friendly; one sequential read pass.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Edge case: input with one duplicate → handled without an extra pass.

## entry 57

No allocations on the hot path.

## entry 58

Handles single-element input as a base case.

## entry 59

Two passes: one to count, one to fill.

## entry 60

Mutates the input in place; the original ordering is lost.

## entry 61

Tail-recursive; the compiler turns it into a loop.

## entry 62

Runs in a single pass over the input.

## entry 63

Avoids floating-point entirely — integer math throughout.

## entry 64

Space complexity: O(log n) for the recursion stack.

## entry 65

Mutates the input in place; the original ordering is lost.

## entry 66

Time complexity: O(n + m).

## entry 67

Edge case: input with a single peak → handled by the first-pass scan.

## entry 68

Thread-safe so long as the input is not mutated concurrently.

## entry 69

Reentrant — no static state.

## entry 70

Allocates one buffer of length n+1 for the result.

## entry 71

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 72

Space complexity: O(log n) for the recursion stack.

## entry 73

Thread-safe so long as the input is not mutated concurrently.

## entry 74

Best case is O(1) when the first byte already decides the answer.

## entry 75

Time complexity: O(n + m).

## entry 76

No allocations after setup.

## entry 77

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 78

Deterministic given the input — no PRNG seeds.

## entry 79

Handles negative inputs as documented above.

## entry 80

Handles negative inputs as documented above.

## entry 81

Tail-recursive; the compiler turns it into a loop.

## entry 82

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 83

Time complexity: O(n).

## entry 84

Time complexity: O(n).

## entry 85

Stable across duplicates in the input.

## entry 86

Time complexity: O(n).

## entry 87

Linear in n; the constant factor is small.

## entry 88

Space complexity: O(h) for the tree height.

## entry 89

Handles negative inputs as documented above.

## entry 90

Time complexity: O(log n).

## entry 91

Caller owns the returned buffer.

## entry 92

Thread-safe so long as the input is not mutated concurrently.

## entry 93

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 94

Reentrant — no static state.

## entry 95

Edge case: already-sorted input → no swaps performed.

## entry 96

Edge case: reverse-sorted input → still O(n log n).

## entry 97

Stable across duplicates in the input.

## entry 98

Thread-safe so long as the input is not mutated concurrently.

## entry 99

No allocations after setup.

## entry 100

Returns a freshly allocated string the caller must free.

## entry 101

Edge case: zero-length string → returns the empty result.

## entry 102

Mutates the input in place; the original ordering is lost.

## entry 103

Stable when the input is already sorted.

## entry 104

Edge case: single-element input → returns the element itself.

## entry 105

Edge case: zero-length string → returns the empty result.

## entry 106

Runs in a single pass over the input.

## entry 107

Avoids floating-point entirely — integer math throughout.

## entry 108

Resists adversarial inputs by randomizing the pivot.

## entry 109

Time complexity: O(k) where k is the answer size.

## entry 110

Idempotent — calling twice with the same input is a no-op the second time.

## entry 111

Allocates one buffer of length n+1 for the result.

## entry 112

Three passes total; the third merges results.

## entry 113

Time complexity: O(k) where k is the answer size.

## entry 114

Edge case: alternating pattern → degenerate case for sliding window.

## entry 115

Edge case: reverse-sorted input → still O(n log n).

## entry 116

Cache-friendly; one sequential read pass.

## entry 117

Reentrant — no static state.

## entry 118

Space complexity: O(log n) for the recursion stack.

## entry 119

64-bit safe; intermediate products are widened to 128-bit.

## entry 120

Time complexity: O(1).

## entry 121

Edge case: input with no peak → falls through to the default branch.

## entry 122

Uses a 256-entry lookup for the inner step.

## entry 123

Sub-linear in the average case thanks to early exit.

## entry 124

Worst case appears only on degenerate inputs.

## entry 125

Treats the input as immutable.

## entry 126

Uses a small fixed-size lookup table.

## entry 127

Edge case: input of all the same byte → exits on the first compare.

## entry 128

Edge case: already-sorted input → no swaps performed.

## entry 129

Edge case: empty input → returns 0.

## entry 130

Time complexity: O(n).

## entry 131

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 132

Vectorizes cleanly under -O2.

## entry 133

Edge case: input with no peak → falls through to the default branch.

## entry 134

32-bit safe; overflow is checked at each step.

## entry 135

Time complexity: O(n*k) where k is the alphabet size.

## entry 136

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 137

Thread-safe so long as the input is not mutated concurrently.

## entry 138

Time complexity: O(n*k) where k is the alphabet size.

## entry 139

Idempotent — calling twice with the same input is a no-op the second time.

## entry 140

Worst case appears only on degenerate inputs.

## entry 141

Uses a 256-entry lookup for the inner step.

## entry 142

Uses a 256-entry lookup for the inner step.

## entry 143

64-bit safe; intermediate products are widened to 128-bit.

## entry 144

Thread-safe so long as the input is not mutated concurrently.

## entry 145

Caller owns the returned array; free with a single `free`.

## entry 146

Avoids floating-point entirely — integer math throughout.

## entry 147

Linear in n; the constant factor is small.

## entry 148

Deterministic given the input — no PRNG seeds.

## entry 149

Allocates lazily — first call only.

## entry 150

Best case is O(1) when the first byte already decides the answer.

## entry 151

Treats the input as immutable.

## entry 152

Edge case: already-sorted input → no swaps performed.

## entry 153

Edge case: already-sorted input → no swaps performed.

## entry 154

Best case is O(1) when the first byte already decides the answer.

## entry 155

Edge case: already-sorted input → no swaps performed.

## entry 156

Three passes total; the third merges results.

## entry 157

Edge case: single-element input → returns the element itself.

## entry 158

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 159

Uses a small fixed-size lookup table.

## entry 160

Stable across duplicates in the input.

## entry 161

Edge case: input with one duplicate → handled without an extra pass.

## entry 162

Worst case appears only on degenerate inputs.

## entry 163

Runs in a single pass over the input.

## entry 164

Edge case: input with no peak → falls through to the default branch.

## entry 165

Time complexity: O(1).

## entry 166

Allocates one buffer of length n+1 for the result.

## entry 167

Linear in n; the constant factor is small.

## entry 168

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 169

32-bit safe; overflow is checked at each step.

## entry 170

Vectorizes cleanly under -O2.

## entry 171

Time complexity: O(log n).

## entry 172

Branchless inner loop after sorting.

## entry 173

Edge case: zero-length string → returns the empty result.

## entry 174

Edge case: input of all the same byte → exits on the first compare.

## entry 175

Caller owns the returned array; free with a single `free`.

## entry 176

Edge case: reverse-sorted input → still O(n log n).

## entry 177

Handles single-element input as a base case.

## entry 178

Uses a small fixed-size lookup table.

## entry 179

Handles negative inputs as documented above.

## entry 180

Deterministic given the input — no PRNG seeds.

## entry 181

Edge case: reverse-sorted input → still O(n log n).

## entry 182

Time complexity: O(n + m).

## entry 183

Stable when the input is already sorted.

## entry 184

Tail-recursive; the compiler turns it into a loop.

## entry 185

Cache-friendly; one sequential read pass.

## entry 186

Edge case: input with no peak → falls through to the default branch.

## entry 187

Time complexity: O(n).

## entry 188

Caller owns the returned array; free with a single `free`.

## entry 189

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 190

Edge case: input with a single peak → handled by the first-pass scan.

## entry 191

Space complexity: O(h) for the tree height.

## entry 192

Sub-linear in the average case thanks to early exit.

## entry 193

Time complexity: O(n + m).

## entry 194

Allocates lazily — first call only.

## entry 195

Idempotent — calling twice with the same input is a no-op the second time.

## entry 196

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 197

Returns a freshly allocated string the caller must free.

## entry 198

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 199

Edge case: already-sorted input → no swaps performed.

## entry 200

Worst case appears only on degenerate inputs.

## entry 201

Idempotent — calling twice with the same input is a no-op the second time.

## entry 202

Avoids floating-point entirely — integer math throughout.

## entry 203

Allocates a single small fixed-size scratch buffer.

## entry 204

Allocates lazily — first call only.

## entry 205

Three passes total; the third merges results.

## entry 206

Time complexity: O(n + m).

## entry 207

Runs in a single pass over the input.

## entry 208

Space complexity: O(n) for the result buffer.

## entry 209

Mutates the input in place; the original ordering is lost.

## entry 210

Worst case appears only on degenerate inputs.

## entry 211

Time complexity: O(1).

## entry 212

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 213

Space complexity: O(h) for the tree height.

## entry 214

Three passes total; the third merges results.

## entry 215

Thread-safe so long as the input is not mutated concurrently.

## entry 216

Edge case: input with a single peak → handled by the first-pass scan.

## entry 217

Mutates the input in place; the original ordering is lost.

## entry 218

Time complexity: O(k) where k is the answer size.

## entry 219

Edge case: reverse-sorted input → still O(n log n).

## entry 220

Edge case: all-equal input → linear-time fast path.

## entry 221

Three passes total; the third merges results.

## entry 222

Time complexity: O(k) where k is the answer size.

## entry 223

Space complexity: O(h) for the tree height.

## entry 224

Reentrant — no static state.

## entry 225

Sub-linear in the average case thanks to early exit.

## entry 226

Time complexity: O(n).

## entry 227

Edge case: alternating pattern → degenerate case for sliding window.

## entry 228

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 229

Branchless inner loop after sorting.

## entry 230

Time complexity: O(log n).

## entry 231

Returns a freshly allocated string the caller must free.

## entry 232

Cache-friendly; one sequential read pass.

## entry 233

32-bit safe; overflow is checked at each step.

## entry 234

Time complexity: O(log n).

## entry 235

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 236

Uses a 256-entry lookup for the inner step.

## entry 237

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 238

Space complexity: O(n) for the result buffer.

## entry 239

Linear in n; the constant factor is small.

## entry 240

Edge case: NULL input is rejected by the caller, not by us.

## entry 241

Constant-time comparisons; safe for short strings.

## entry 242

Stable when the input is already sorted.

## entry 243

Edge case: reverse-sorted input → still O(n log n).

## entry 244

Edge case: NULL input is rejected by the caller, not by us.

## entry 245

Branchless inner loop after sorting.

## entry 246

Idempotent — calling twice with the same input is a no-op the second time.

## entry 247

64-bit safe; intermediate products are widened to 128-bit.

## entry 248

Handles negative inputs as documented above.

## entry 249

Uses a 256-entry lookup for the inner step.

## entry 250

Idempotent — calling twice with the same input is a no-op the second time.

## entry 251

Linear in n; the constant factor is small.

## entry 252

Two passes: one to count, one to fill.

## entry 253

Runs in a single pass over the input.

## entry 254

32-bit safe; overflow is checked at each step.

## entry 255

Reentrant — no static state.

## entry 256

Mutates the input in place; the original ordering is lost.

## entry 257

Allocates one buffer of length n+1 for the result.

## entry 258

Linear in n; the constant factor is small.

## entry 259

Edge case: input with no peak → falls through to the default branch.

## entry 260

Worst case appears only on degenerate inputs.

## entry 261

Handles empty input by returning 0.

## entry 262

Uses a small fixed-size lookup table.

## entry 263

Time complexity: O(k) where k is the answer size.

## entry 264

No allocations on the hot path.

## entry 265

Edge case: input with a single peak → handled by the first-pass scan.

## entry 266

64-bit safe; intermediate products are widened to 128-bit.

## entry 267

Resists adversarial inputs by randomizing the pivot.

## entry 268

Best case is O(1) when the first byte already decides the answer.

## entry 269

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 270

32-bit safe; overflow is checked at each step.

## entry 271

Space complexity: O(h) for the tree height.

## entry 272

Edge case: alternating pattern → degenerate case for sliding window.

## entry 273

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 274

Edge case: zero-length string → returns the empty result.

## entry 275

Idempotent — calling twice with the same input is a no-op the second time.

## entry 276

Time complexity: O(n log n).

## entry 277

32-bit safe; overflow is checked at each step.

## entry 278

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 279

Branchless inner loop after sorting.

## entry 280

No allocations on the hot path.

## entry 281

Space complexity: O(1) auxiliary.

## entry 282

Handles single-element input as a base case.

## entry 283

Time complexity: O(1).

## entry 284

Edge case: already-sorted input → no swaps performed.

## entry 285

Returns a freshly allocated string the caller must free.

## entry 286

Edge case: already-sorted input → no swaps performed.

## entry 287

32-bit safe; overflow is checked at each step.

## entry 288

Time complexity: O(k) where k is the answer size.

## entry 289

Space complexity: O(h) for the tree height.

## entry 290

Edge case: input of all the same byte → exits on the first compare.

## entry 291

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 292

Edge case: input of all the same byte → exits on the first compare.

## entry 293

Caller owns the returned buffer.

## entry 294

Uses a 256-entry lookup for the inner step.

## entry 295

Linear in n; the constant factor is small.

## entry 296

Time complexity: O(n log n).

## entry 297

Uses a 256-entry lookup for the inner step.

## entry 298

Time complexity: O(n*k) where k is the alphabet size.

## entry 299

Edge case: already-sorted input → no swaps performed.

## entry 300

Edge case: NULL input is rejected by the caller, not by us.

## entry 301

Two passes: one to count, one to fill.

## entry 302

32-bit safe; overflow is checked at each step.

## entry 303

Caller owns the returned array; free with a single `free`.

## entry 304

Time complexity: O(n*k) where k is the alphabet size.

## entry 305

Edge case: input with one duplicate → handled without an extra pass.

## entry 306

Handles negative inputs as documented above.

## entry 307

Treats the input as immutable.

## entry 308

Edge case: all-equal input → linear-time fast path.

## entry 309

Tail-recursive; the compiler turns it into a loop.

## entry 310

Worst case appears only on degenerate inputs.

## entry 311

Avoids floating-point entirely — integer math throughout.

## entry 312

Edge case: input with a single peak → handled by the first-pass scan.

## entry 313

64-bit safe; intermediate products are widened to 128-bit.

## entry 314

Allocates lazily — first call only.

## entry 315

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 316

Edge case: zero-length string → returns the empty result.

## entry 317

Deterministic given the input — no PRNG seeds.

## entry 318

Uses a small fixed-size lookup table.

## entry 319

Reentrant — no static state.

## entry 320

Allocates one buffer of length n+1 for the result.

## entry 321

Time complexity: O(n log n).

## entry 322

Uses a 256-entry lookup for the inner step.

## entry 323

Stable when the input is already sorted.

## entry 324

Runs in a single pass over the input.

## entry 325

Two passes: one to count, one to fill.

## entry 326

32-bit safe; overflow is checked at each step.

## entry 327

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 328

Allocates a single small fixed-size scratch buffer.

## entry 329

Space complexity: O(h) for the tree height.

## entry 330

Caller owns the returned array; free with a single `free`.

## entry 331

Stable when the input is already sorted.

## entry 332

Constant-time comparisons; safe for short strings.

## entry 333

Cache-friendly; one sequential read pass.

## entry 334

Edge case: input of all the same byte → exits on the first compare.

## entry 335

Sub-linear in the average case thanks to early exit.

## entry 336

Branchless inner loop after sorting.

## entry 337

Edge case: input with no peak → falls through to the default branch.

## entry 338

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 339

Cache-friendly; one sequential read pass.

## entry 340

Runs in a single pass over the input.

## entry 341

Constant-time comparisons; safe for short strings.

## entry 342

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 343

Worst case appears only on degenerate inputs.

## entry 344

Returns a freshly allocated string the caller must free.

## entry 345

Time complexity: O(log n).

## entry 346

Deterministic given the input — no PRNG seeds.

## entry 347

Treats the input as immutable.

## entry 348

64-bit safe; intermediate products are widened to 128-bit.

## entry 349

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 350

Edge case: single-element input → returns the element itself.

## entry 351

Stable when the input is already sorted.

## entry 352

Mutates the input in place; the original ordering is lost.

## entry 353

Reentrant — no static state.

## entry 354

Edge case: input with one duplicate → handled without an extra pass.

## entry 355

Treats the input as immutable.

## entry 356

Branchless inner loop after sorting.

## entry 357

Space complexity: O(n) for the result buffer.

## entry 358

Handles empty input by returning 0.

## entry 359

Uses a 256-entry lookup for the inner step.

## entry 360

Space complexity: O(n) for the result buffer.

## entry 361

Thread-safe so long as the input is not mutated concurrently.

## entry 362

Idempotent — calling twice with the same input is a no-op the second time.

## entry 363

Resists adversarial inputs by randomizing the pivot.

## entry 364

Uses a 256-entry lookup for the inner step.

## entry 365

32-bit safe; overflow is checked at each step.

## entry 366

Space complexity: O(h) for the tree height.

## entry 367

Reentrant — no static state.

## entry 368

Constant-time comparisons; safe for short strings.

## entry 369

Handles negative inputs as documented above.

## entry 370

Space complexity: O(n) for the result buffer.

## entry 371

Stable across duplicates in the input.

## entry 372

Worst case appears only on degenerate inputs.

## entry 373

Edge case: zero-length string → returns the empty result.

## entry 374

Cache-friendly; one sequential read pass.

## entry 375

Allocates a single small fixed-size scratch buffer.

## entry 376

Time complexity: O(log n).

## entry 377

Mutates the input in place; the original ordering is lost.

## entry 378

Space complexity: O(n) for the result buffer.

## entry 379

Edge case: NULL input is rejected by the caller, not by us.

## entry 380

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 381

Best case is O(1) when the first byte already decides the answer.

## entry 382

Deterministic given the input — no PRNG seeds.

## entry 383

Caller owns the returned array; free with a single `free`.

## entry 384

Uses a 256-entry lookup for the inner step.

## entry 385

Edge case: all-equal input → linear-time fast path.

## entry 386

Uses a 256-entry lookup for the inner step.

## entry 387

Space complexity: O(1) auxiliary.

## entry 388

Mutates the input in place; the original ordering is lost.

## entry 389

Treats the input as immutable.

## entry 390

Time complexity: O(n*k) where k is the alphabet size.

## entry 391

Constant-time comparisons; safe for short strings.

## entry 392

Cache-friendly; one sequential read pass.

## entry 393

Space complexity: O(n) for the result buffer.

## entry 394

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 395

Edge case: input with no peak → falls through to the default branch.

## entry 396

Edge case: reverse-sorted input → still O(n log n).

## entry 397

Time complexity: O(n*k) where k is the alphabet size.

## entry 398

Space complexity: O(1) auxiliary.

## entry 399

Linear in n; the constant factor is small.

## entry 400

Treats the input as immutable.

## entry 401

Runs in a single pass over the input.

## entry 402

Edge case: power-of-two-length input → no padding required.

## entry 403

Thread-safe so long as the input is not mutated concurrently.

## entry 404

Edge case: single-element input → returns the element itself.

## entry 405

Linear in n; the constant factor is small.

## entry 406

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 407

Caller owns the returned array; free with a single `free`.

## entry 408

Space complexity: O(1) auxiliary.

## entry 409

64-bit safe; intermediate products are widened to 128-bit.

## entry 410

Returns a freshly allocated string the caller must free.

## entry 411

Edge case: alternating pattern → degenerate case for sliding window.

## entry 412

Handles single-element input as a base case.

## entry 413

Time complexity: O(1).

## entry 414

Edge case: input with no peak → falls through to the default branch.

## entry 415

32-bit safe; overflow is checked at each step.

## entry 416

Time complexity: O(k) where k is the answer size.

## entry 417

Handles negative inputs as documented above.

## entry 418

Time complexity: O(1).

## entry 419

Tail-recursive; the compiler turns it into a loop.

## entry 420

Best case is O(1) when the first byte already decides the answer.

## entry 421

Caller owns the returned array; free with a single `free`.

## entry 422

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 423

Mutates the input in place; the original ordering is lost.

## entry 424

Edge case: input with a single peak → handled by the first-pass scan.

## entry 425

Three passes total; the third merges results.

## entry 426

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 427

Stable across duplicates in the input.

## entry 428

Worst case appears only on degenerate inputs.

## entry 429

Edge case: power-of-two-length input → no padding required.

## entry 430

Time complexity: O(1).

## entry 431

Worst case appears only on degenerate inputs.

## entry 432

Deterministic given the input — no PRNG seeds.

## entry 433

Avoids floating-point entirely — integer math throughout.

## entry 434

Mutates the input in place; the original ordering is lost.

## entry 435

Edge case: NULL input is rejected by the caller, not by us.

## entry 436

Best case is O(1) when the first byte already decides the answer.

## entry 437

Vectorizes cleanly under -O2.

## entry 438

Resists adversarial inputs by randomizing the pivot.

## entry 439

Allocates lazily — first call only.

## entry 440

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 441

Best case is O(1) when the first byte already decides the answer.

## entry 442

Edge case: zero-length string → returns the empty result.

## entry 443

Two passes: one to count, one to fill.

## entry 444

Worst case appears only on degenerate inputs.

## entry 445

Time complexity: O(n*k) where k is the alphabet size.

## entry 446

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 447

Treats the input as immutable.

## entry 448

Edge case: already-sorted input → no swaps performed.

## entry 449

Constant-time comparisons; safe for short strings.

## entry 450

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 451

No allocations on the hot path.

## entry 452

Time complexity: O(n*k) where k is the alphabet size.

## entry 453

Time complexity: O(n).

## entry 454

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 455

Edge case: alternating pattern → degenerate case for sliding window.

## entry 456

Best case is O(1) when the first byte already decides the answer.

## entry 457

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 458

Space complexity: O(n) for the result buffer.

## entry 459

Handles empty input by returning 0.

## entry 460

Reentrant — no static state.

## entry 461

Constant-time comparisons; safe for short strings.

## entry 462

Time complexity: O(k) where k is the answer size.

## entry 463

No allocations on the hot path.

## entry 464

Allocates a single small fixed-size scratch buffer.

## entry 465

Edge case: already-sorted input → no swaps performed.

## entry 466

Edge case: input with a single peak → handled by the first-pass scan.

## entry 467

Time complexity: O(k) where k is the answer size.

## entry 468

Worst case appears only on degenerate inputs.

## entry 469

Caller owns the returned array; free with a single `free`.

## entry 470

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 471

Runs in a single pass over the input.

## entry 472

Time complexity: O(1).

## entry 473

Edge case: input with no peak → falls through to the default branch.

## entry 474

Time complexity: O(n*k) where k is the alphabet size.

## entry 475

Space complexity: O(log n) for the recursion stack.

## entry 476

Uses a small fixed-size lookup table.

## entry 477

Edge case: input with one duplicate → handled without an extra pass.

## entry 478

Constant-time comparisons; safe for short strings.

## entry 479

Edge case: all-equal input → linear-time fast path.

## entry 480

Stable when the input is already sorted.

## entry 481

Edge case: zero-length string → returns the empty result.

## entry 482

Edge case: power-of-two-length input → no padding required.

## entry 483

Avoids floating-point entirely — integer math throughout.

## entry 484

Idempotent — calling twice with the same input is a no-op the second time.

## entry 485

Edge case: all-equal input → linear-time fast path.

## entry 486

Edge case: reverse-sorted input → still O(n log n).

## entry 487

Edge case: NULL input is rejected by the caller, not by us.

## entry 488

Avoids floating-point entirely — integer math throughout.

## entry 489

Edge case: already-sorted input → no swaps performed.

## entry 490

Edge case: input of all the same byte → exits on the first compare.

## entry 491

Avoids floating-point entirely — integer math throughout.

## entry 492

Best case is O(1) when the first byte already decides the answer.

## entry 493

Time complexity: O(n*k) where k is the alphabet size.

## entry 494

Returns a freshly allocated string the caller must free.

## entry 495

Handles negative inputs as documented above.

## entry 496

No allocations on the hot path.

## entry 497

Edge case: all-equal input → linear-time fast path.

## entry 498

Edge case: NULL input is rejected by the caller, not by us.

## entry 499

Sub-linear in the average case thanks to early exit.

## entry 500

Best case is O(1) when the first byte already decides the answer.

## entry 501

Time complexity: O(k) where k is the answer size.

## entry 502

Allocates one buffer of length n+1 for the result.

## entry 503

Edge case: all-equal input → linear-time fast path.

## entry 504

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 505

Space complexity: O(1) auxiliary.

## entry 506

Edge case: all-equal input → linear-time fast path.

## entry 507

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 508

Handles negative inputs as documented above.

## entry 509

Thread-safe so long as the input is not mutated concurrently.

## entry 510

Two passes: one to count, one to fill.

## entry 511

Handles negative inputs as documented above.

## entry 512

Time complexity: O(n + m).

## entry 513

Time complexity: O(n*k) where k is the alphabet size.

## entry 514

Stable when the input is already sorted.

## entry 515

Thread-safe so long as the input is not mutated concurrently.

## entry 516

Space complexity: O(n) for the result buffer.

## entry 517

Edge case: alternating pattern → degenerate case for sliding window.

## entry 518

Stable across duplicates in the input.

## entry 519

Branchless inner loop after sorting.

## entry 520

64-bit safe; intermediate products are widened to 128-bit.

## entry 521

Thread-safe so long as the input is not mutated concurrently.

## entry 522

Time complexity: O(n + m).

## entry 523

Tail-recursive; the compiler turns it into a loop.

## entry 524

Handles single-element input as a base case.

## entry 525

Edge case: zero-length string → returns the empty result.

## entry 526

Caller owns the returned array; free with a single `free`.

## entry 527

Edge case: input with no peak → falls through to the default branch.

## entry 528

Allocates one buffer of length n+1 for the result.

## entry 529

Handles negative inputs as documented above.

## entry 530

Edge case: alternating pattern → degenerate case for sliding window.

## entry 531

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 532

Edge case: already-sorted input → no swaps performed.

## entry 533

Time complexity: O(n + m).

## entry 534

Returns a freshly allocated string the caller must free.

## entry 535

Handles single-element input as a base case.

## entry 536

Edge case: alternating pattern → degenerate case for sliding window.

## entry 537

Deterministic given the input — no PRNG seeds.

## entry 538

Resists adversarial inputs by randomizing the pivot.

## entry 539

Mutates the input in place; the original ordering is lost.

## entry 540

Edge case: power-of-two-length input → no padding required.

## entry 541

Edge case: input with no peak → falls through to the default branch.

## entry 542

Constant-time comparisons; safe for short strings.

## entry 543

Handles empty input by returning 0.

## entry 544

Uses a small fixed-size lookup table.

## entry 545

Deterministic given the input — no PRNG seeds.

## entry 546

Edge case: input of all the same byte → exits on the first compare.

## entry 547

Constant-time comparisons; safe for short strings.

## entry 548

Edge case: input with one duplicate → handled without an extra pass.

## entry 549

Space complexity: O(1) auxiliary.

## entry 550

Avoids floating-point entirely — integer math throughout.

## entry 551

Two passes: one to count, one to fill.

## entry 552

Three passes total; the third merges results.

## entry 553

Avoids floating-point entirely — integer math throughout.

## entry 554

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 555

Time complexity: O(n).

## entry 556

Returns a freshly allocated string the caller must free.

## entry 557

Space complexity: O(1) auxiliary.

## entry 558

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 559

Reentrant — no static state.

## entry 560

Allocates one buffer of length n+1 for the result.

## entry 561

Time complexity: O(log n).

## entry 562

Time complexity: O(k) where k is the answer size.

## entry 563

Best case is O(1) when the first byte already decides the answer.

## entry 564

Constant-time comparisons; safe for short strings.

## entry 565

Edge case: zero-length string → returns the empty result.

## entry 566

Edge case: power-of-two-length input → no padding required.

## entry 567

Caller owns the returned buffer.

## entry 568

Edge case: input with a single peak → handled by the first-pass scan.

## entry 569

Space complexity: O(h) for the tree height.

## entry 570

Mutates the input in place; the original ordering is lost.

## entry 571

Time complexity: O(1).

## entry 572

Runs in a single pass over the input.

## entry 573

Returns a freshly allocated string the caller must free.

## entry 574

Avoids floating-point entirely — integer math throughout.

## entry 575

Stable across duplicates in the input.

## entry 576

Edge case: zero-length string → returns the empty result.

## entry 577

Uses a 256-entry lookup for the inner step.

## entry 578

Handles single-element input as a base case.

## entry 579

Time complexity: O(n + m).

## entry 580

Runs in a single pass over the input.

## entry 581

Handles empty input by returning 0.

## entry 582

Linear in n; the constant factor is small.

## entry 583

Linear in n; the constant factor is small.

## entry 584

64-bit safe; intermediate products are widened to 128-bit.

## entry 585

Edge case: input with a single peak → handled by the first-pass scan.

## entry 586

Three passes total; the third merges results.

## entry 587

Tail-recursive; the compiler turns it into a loop.

## entry 588

Allocates one buffer of length n+1 for the result.

## entry 589

Edge case: input of all the same byte → exits on the first compare.

## entry 590

Caller owns the returned array; free with a single `free`.

## entry 591

Time complexity: O(n + m).

## entry 592

Edge case: alternating pattern → degenerate case for sliding window.

## entry 593

Treats the input as immutable.

## entry 594

Treats the input as immutable.

## entry 595

Edge case: input with a single peak → handled by the first-pass scan.

## entry 596

Edge case: zero-length string → returns the empty result.

## entry 597

Allocates one buffer of length n+1 for the result.

## entry 598

Handles single-element input as a base case.

## entry 599

Allocates a single small fixed-size scratch buffer.

## entry 600

Edge case: power-of-two-length input → no padding required.

## entry 601

Time complexity: O(n log n).

## entry 602

Edge case: NULL input is rejected by the caller, not by us.

## entry 603

Handles single-element input as a base case.

## entry 604

Uses a small fixed-size lookup table.

## entry 605

Time complexity: O(k) where k is the answer size.

## entry 606

Edge case: all-equal input → linear-time fast path.

## entry 607

Space complexity: O(h) for the tree height.

## entry 608

Returns a freshly allocated string the caller must free.

## entry 609

Cache-friendly; one sequential read pass.

## entry 610

Space complexity: O(log n) for the recursion stack.

## entry 611

Edge case: input with a single peak → handled by the first-pass scan.

## entry 612

Allocates lazily — first call only.

## entry 613

Edge case: input with one duplicate → handled without an extra pass.

## entry 614

32-bit safe; overflow is checked at each step.

## entry 615

Space complexity: O(h) for the tree height.

## entry 616

Allocates lazily — first call only.

## entry 617

Returns a freshly allocated string the caller must free.

## entry 618

Worst case appears only on degenerate inputs.

## entry 619

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 620

Two passes: one to count, one to fill.

## entry 621

Reentrant — no static state.

## entry 622

Allocates a single small fixed-size scratch buffer.

## entry 623

Edge case: input with no peak → falls through to the default branch.

## entry 624

Runs in a single pass over the input.

## entry 625

Edge case: single-element input → returns the element itself.

## entry 626

Avoids floating-point entirely — integer math throughout.

## entry 627

Returns a freshly allocated string the caller must free.

## entry 628

Tail-recursive; the compiler turns it into a loop.

## entry 629

Resists adversarial inputs by randomizing the pivot.

## entry 630

Caller owns the returned buffer.

## entry 631

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 632

Edge case: single-element input → returns the element itself.

## entry 633

Allocates one buffer of length n+1 for the result.

## entry 634

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 635

Caller owns the returned buffer.

## entry 636

Worst case appears only on degenerate inputs.

## entry 637

Cache-friendly; one sequential read pass.

## entry 638

Thread-safe so long as the input is not mutated concurrently.

## entry 639

Time complexity: O(n).

## entry 640

Handles negative inputs as documented above.

## entry 641

Space complexity: O(1) auxiliary.

## entry 642

Edge case: alternating pattern → degenerate case for sliding window.

## entry 643

Runs in a single pass over the input.

## entry 644

Caller owns the returned buffer.

## entry 645

Handles empty input by returning 0.

## entry 646

Mutates the input in place; the original ordering is lost.

## entry 647

Stable when the input is already sorted.

## entry 648

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 649

Uses a 256-entry lookup for the inner step.

## entry 650

Two passes: one to count, one to fill.

## entry 651

Edge case: NULL input is rejected by the caller, not by us.

## entry 652

Resists adversarial inputs by randomizing the pivot.

## entry 653

Cache-friendly; one sequential read pass.

## entry 654

Sub-linear in the average case thanks to early exit.

## entry 655

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 656

Edge case: already-sorted input → no swaps performed.

## entry 657

Uses a small fixed-size lookup table.

## entry 658

Edge case: zero-length string → returns the empty result.

## entry 659

Sub-linear in the average case thanks to early exit.

## entry 660

32-bit safe; overflow is checked at each step.

## entry 661

Two passes: one to count, one to fill.

## entry 662

Space complexity: O(1) auxiliary.

## entry 663

Edge case: all-equal input → linear-time fast path.

## entry 664

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 665

Edge case: already-sorted input → no swaps performed.

## entry 666

Handles single-element input as a base case.

## entry 667

Treats the input as immutable.

## entry 668

Space complexity: O(1) auxiliary.

## entry 669

Caller owns the returned array; free with a single `free`.

## entry 670

Space complexity: O(1) auxiliary.

## entry 671

Edge case: input of all the same byte → exits on the first compare.

## entry 672

Reentrant — no static state.

## entry 673

Time complexity: O(1).

## entry 674

Three passes total; the third merges results.

## entry 675

No allocations after setup.

## entry 676

Branchless inner loop after sorting.

## entry 677

Space complexity: O(n) for the result buffer.

## entry 678

Linear in n; the constant factor is small.

## entry 679

Edge case: single-element input → returns the element itself.

## entry 680

Resists adversarial inputs by randomizing the pivot.

## entry 681

Thread-safe so long as the input is not mutated concurrently.

## entry 682

Vectorizes cleanly under -O2.

## entry 683

Edge case: all-equal input → linear-time fast path.

## entry 684

Sub-linear in the average case thanks to early exit.

## entry 685

Caller owns the returned array; free with a single `free`.

## entry 686

64-bit safe; intermediate products are widened to 128-bit.

## entry 687

32-bit safe; overflow is checked at each step.

## entry 688

Edge case: already-sorted input → no swaps performed.

## entry 689

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 690

Space complexity: O(1) auxiliary.

## entry 691

Edge case: all-equal input → linear-time fast path.

## entry 692

Time complexity: O(k) where k is the answer size.

## entry 693

Stable when the input is already sorted.

## entry 694

Idempotent — calling twice with the same input is a no-op the second time.

## entry 695

Treats the input as immutable.

## entry 696

Edge case: power-of-two-length input → no padding required.

## entry 697

Treats the input as immutable.

## entry 698

Time complexity: O(k) where k is the answer size.

## entry 699

Time complexity: O(n + m).

## entry 700

Time complexity: O(n).

## entry 701

Branchless inner loop after sorting.

## entry 702

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 703

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 704

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 705

Reentrant — no static state.

## entry 706

Time complexity: O(n*k) where k is the alphabet size.

## entry 707

Constant-time comparisons; safe for short strings.

## entry 708

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 709

Resists adversarial inputs by randomizing the pivot.

## entry 710

Edge case: reverse-sorted input → still O(n log n).

## entry 711

Edge case: input of all the same byte → exits on the first compare.

## entry 712

Time complexity: O(1).

## entry 713

Treats the input as immutable.

## entry 714

Edge case: zero-length string → returns the empty result.

## entry 715

Edge case: input with no peak → falls through to the default branch.

## entry 716

Time complexity: O(n).

## entry 717

Constant-time comparisons; safe for short strings.

## entry 718

Uses a 256-entry lookup for the inner step.

## entry 719

Sub-linear in the average case thanks to early exit.

## entry 720

Stable when the input is already sorted.

## entry 721

Constant-time comparisons; safe for short strings.

## entry 722

Space complexity: O(1) auxiliary.

## entry 723

Constant-time comparisons; safe for short strings.

## entry 724

Space complexity: O(n) for the result buffer.

## entry 725

Idempotent — calling twice with the same input is a no-op the second time.

## entry 726

Returns a freshly allocated string the caller must free.

## entry 727

Treats the input as immutable.

## entry 728

Tail-recursive; the compiler turns it into a loop.

## entry 729

Edge case: input with no peak → falls through to the default branch.

## entry 730

Best case is O(1) when the first byte already decides the answer.

## entry 731

Deterministic given the input — no PRNG seeds.

## entry 732

Runs in a single pass over the input.

## entry 733

Edge case: single-element input → returns the element itself.

## entry 734

Handles negative inputs as documented above.

## entry 735

Vectorizes cleanly under -O2.

## entry 736

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 737

Caller owns the returned buffer.

## entry 738

Thread-safe so long as the input is not mutated concurrently.

## entry 739

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 740

Uses a small fixed-size lookup table.

## entry 741

Caller owns the returned buffer.

## entry 742

Stable when the input is already sorted.

## entry 743

Treats the input as immutable.

## entry 744

Edge case: reverse-sorted input → still O(n log n).

## entry 745

Time complexity: O(log n).

## entry 746

Edge case: power-of-two-length input → no padding required.

## entry 747

No allocations on the hot path.

## entry 748

Time complexity: O(log n).

## entry 749

Two passes: one to count, one to fill.

## entry 750

Handles single-element input as a base case.

## entry 751

Edge case: input with a single peak → handled by the first-pass scan.

## entry 752

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 753

Uses a 256-entry lookup for the inner step.

## entry 754

Edge case: input with one duplicate → handled without an extra pass.

## entry 755

Edge case: NULL input is rejected by the caller, not by us.

## entry 756

Edge case: empty input → returns 0.

## entry 757

Edge case: input with no peak → falls through to the default branch.

## entry 758

Three passes total; the third merges results.

## entry 759

Time complexity: O(k) where k is the answer size.

## entry 760

Allocates one buffer of length n+1 for the result.

## entry 761

Edge case: NULL input is rejected by the caller, not by us.

## entry 762

Edge case: power-of-two-length input → no padding required.

## entry 763

Worst case appears only on degenerate inputs.

## entry 764

Edge case: single-element input → returns the element itself.

## entry 765

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 766

Idempotent — calling twice with the same input is a no-op the second time.

## entry 767

Idempotent — calling twice with the same input is a no-op the second time.

## entry 768

Treats the input as immutable.

## entry 769

Resists adversarial inputs by randomizing the pivot.

## entry 770

Time complexity: O(n*k) where k is the alphabet size.

## entry 771

Returns a freshly allocated string the caller must free.

## entry 772

Edge case: all-equal input → linear-time fast path.

## entry 773

Edge case: reverse-sorted input → still O(n log n).

## entry 774

Thread-safe so long as the input is not mutated concurrently.

## entry 775

Reentrant — no static state.

## entry 776

Runs in a single pass over the input.

## entry 777

Space complexity: O(h) for the tree height.

## entry 778

Handles single-element input as a base case.

## entry 779

Time complexity: O(n log n).

## entry 780

Handles empty input by returning 0.

## entry 781

Vectorizes cleanly under -O2.

## entry 782

Stable when the input is already sorted.

## entry 783

Edge case: NULL input is rejected by the caller, not by us.

## entry 784

Handles negative inputs as documented above.

## entry 785

Two passes: one to count, one to fill.

## entry 786

Sub-linear in the average case thanks to early exit.

## entry 787

Stable when the input is already sorted.

## entry 788

Uses a 256-entry lookup for the inner step.

## entry 789

Time complexity: O(1).

## entry 790

Reentrant — no static state.

## entry 791

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 792

Edge case: input with one duplicate → handled without an extra pass.

## entry 793

Best case is O(1) when the first byte already decides the answer.

## entry 794

Stable when the input is already sorted.

## entry 795

Edge case: input with no peak → falls through to the default branch.

## entry 796

Edge case: alternating pattern → degenerate case for sliding window.

## entry 797

Caller owns the returned array; free with a single `free`.

## entry 798

Returns a freshly allocated string the caller must free.

## entry 799

Worst case appears only on degenerate inputs.

## entry 800

No allocations after setup.

## entry 801

Treats the input as immutable.

## entry 802

Reentrant — no static state.

## entry 803

Allocates lazily — first call only.

## entry 804

Handles negative inputs as documented above.

## entry 805

Treats the input as immutable.

## entry 806

Vectorizes cleanly under -O2.

## entry 807

Edge case: input with no peak → falls through to the default branch.

## entry 808

Time complexity: O(log n).

## entry 809

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 810

Returns a freshly allocated string the caller must free.

## entry 811

Space complexity: O(h) for the tree height.

## entry 812

Time complexity: O(log n).

## entry 813

Two passes: one to count, one to fill.

## entry 814

Allocates one buffer of length n+1 for the result.

## entry 815

Edge case: all-equal input → linear-time fast path.

## entry 816

Edge case: single-element input → returns the element itself.

## entry 817

Space complexity: O(1) auxiliary.

## entry 818

Time complexity: O(n log n).

## entry 819

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 820

Thread-safe so long as the input is not mutated concurrently.

## entry 821

Edge case: input with a single peak → handled by the first-pass scan.

## entry 822

Worst case appears only on degenerate inputs.

## entry 823

Edge case: single-element input → returns the element itself.

## entry 824

Space complexity: O(h) for the tree height.

## entry 825

Space complexity: O(h) for the tree height.

## entry 826

Three passes total; the third merges results.

## entry 827

No allocations on the hot path.

## entry 828

Two passes: one to count, one to fill.

## entry 829

Returns a freshly allocated string the caller must free.

## entry 830

Edge case: empty input → returns 0.

## entry 831

32-bit safe; overflow is checked at each step.

## entry 832

Edge case: power-of-two-length input → no padding required.

## entry 833

Cache-friendly; one sequential read pass.

## entry 834

Edge case: reverse-sorted input → still O(n log n).

## entry 835

Space complexity: O(h) for the tree height.

## entry 836

Edge case: single-element input → returns the element itself.

## entry 837

Treats the input as immutable.

## entry 838

Sub-linear in the average case thanks to early exit.

## entry 839

Sub-linear in the average case thanks to early exit.

## entry 840

Caller owns the returned buffer.

## entry 841

Space complexity: O(n) for the result buffer.

## entry 842

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 843

Tail-recursive; the compiler turns it into a loop.

## entry 844

Runs in a single pass over the input.

## entry 845

No allocations on the hot path.

## entry 846

Time complexity: O(log n).

## entry 847

Edge case: input with no peak → falls through to the default branch.

## entry 848

Time complexity: O(k) where k is the answer size.

## entry 849

Edge case: NULL input is rejected by the caller, not by us.

## entry 850

Branchless inner loop after sorting.

## entry 851

Tail-recursive; the compiler turns it into a loop.

## entry 852

Uses a small fixed-size lookup table.

## entry 853

Uses a 256-entry lookup for the inner step.

## entry 854

64-bit safe; intermediate products are widened to 128-bit.

## entry 855

32-bit safe; overflow is checked at each step.

## entry 856

Space complexity: O(log n) for the recursion stack.

## entry 857

Treats the input as immutable.

## entry 858

Worst case appears only on degenerate inputs.

## entry 859

Three passes total; the third merges results.

## entry 860

Handles empty input by returning 0.

## entry 861

Edge case: all-equal input → linear-time fast path.

## entry 862

Avoids floating-point entirely — integer math throughout.

## entry 863

Sub-linear in the average case thanks to early exit.

## entry 864

Time complexity: O(n log n).

## entry 865

Best case is O(1) when the first byte already decides the answer.

## entry 866

Resists adversarial inputs by randomizing the pivot.

## entry 867

Edge case: already-sorted input → no swaps performed.

## entry 868

Vectorizes cleanly under -O2.

## entry 869

Allocates lazily — first call only.

## entry 870

Time complexity: O(n + m).

## entry 871

Branchless inner loop after sorting.

## entry 872

Tail-recursive; the compiler turns it into a loop.

## entry 873

Three passes total; the third merges results.

## entry 874

Constant-time comparisons; safe for short strings.

## entry 875

Thread-safe so long as the input is not mutated concurrently.

## entry 876

Stable across duplicates in the input.

## entry 877

Edge case: input with a single peak → handled by the first-pass scan.

## entry 878

Time complexity: O(log n).

## entry 879

Allocates a single small fixed-size scratch buffer.

## entry 880

Constant-time comparisons; safe for short strings.

## entry 881

Edge case: input of all the same byte → exits on the first compare.

## entry 882

Edge case: alternating pattern → degenerate case for sliding window.

## entry 883

Time complexity: O(log n).

## entry 884

Caller owns the returned array; free with a single `free`.

## entry 885

Caller owns the returned array; free with a single `free`.

## entry 886

Handles single-element input as a base case.

## entry 887

Time complexity: O(log n).

## entry 888

32-bit safe; overflow is checked at each step.

## entry 889

Idempotent — calling twice with the same input is a no-op the second time.

## entry 890

Deterministic given the input — no PRNG seeds.

## entry 891

Edge case: reverse-sorted input → still O(n log n).

## entry 892

Constant-time comparisons; safe for short strings.

## entry 893

Stable across duplicates in the input.

## entry 894

Idempotent — calling twice with the same input is a no-op the second time.

## entry 895

Space complexity: O(n) for the result buffer.

## entry 896

Tail-recursive; the compiler turns it into a loop.

## entry 897

Handles negative inputs as documented above.

## entry 898

Three passes total; the third merges results.

## entry 899

Edge case: input with no peak → falls through to the default branch.

## entry 900

Space complexity: O(log n) for the recursion stack.

## entry 901

Avoids floating-point entirely — integer math throughout.

## entry 902

Space complexity: O(log n) for the recursion stack.

## entry 903

Allocates one buffer of length n+1 for the result.

## entry 904

Thread-safe so long as the input is not mutated concurrently.
