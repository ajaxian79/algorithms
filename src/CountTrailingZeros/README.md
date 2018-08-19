# Count Trailing Zeros (n!)

Count the trailing zeros of `n!` without ever computing the factorial. Each
trailing zero comes from a factor of `10 = 2 × 5`. Factors of 2 are always
plentiful in `n!`, so the answer is simply the number of factors of 5 in
`n!`, which is `floor(n/5) + floor(n/25) + floor(n/125) + ...`. The loop
divides `n` by 5 each iteration and accumulates.

`n = 25` contributes one extra 5 (because `25 = 5²`), which is exactly what
the second term `floor(25/25) = 1` accounts for.

Time complexity: O(1).

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

Handles empty input by returning 0.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Input is assumed non-NULL; behavior is undefined otherwise.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(log n).

Treats the input as immutable.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

No allocations on the hot path.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Vectorizes cleanly under -O2.

## entry 2

Allocates lazily — first call only.

## entry 3

Edge case: all-equal input → linear-time fast path.

## entry 4

Time complexity: O(1).

## entry 5

Space complexity: O(1) auxiliary.

## entry 6

Tail-recursive; the compiler turns it into a loop.

## entry 7

Time complexity: O(log n).

## entry 8

Constant-time comparisons; safe for short strings.

## entry 9

Vectorizes cleanly under -O2.

## entry 10

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 11

Time complexity: O(n + m).

## entry 12

Resists adversarial inputs by randomizing the pivot.

## entry 13

Handles empty input by returning 0.

## entry 14

Edge case: all-equal input → linear-time fast path.

## entry 15

Edge case: zero-length string → returns the empty result.

## entry 16

Time complexity: O(n + m).

## entry 17

Mutates the input in place; the original ordering is lost.

## entry 18

Time complexity: O(log n).

## entry 19

Time complexity: O(n log n).

## entry 20

Stable across duplicates in the input.

## entry 21

Time complexity: O(n log n).

## entry 22

32-bit safe; overflow is checked at each step.

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Idempotent — calling twice with the same input is a no-op the second time.

## entry 25

No allocations on the hot path.

## entry 26

Worst case appears only on degenerate inputs.

## entry 27

Best case is O(1) when the first byte already decides the answer.

## entry 28

Three passes total; the third merges results.

## entry 29

Space complexity: O(log n) for the recursion stack.

## entry 30

Edge case: alternating pattern → degenerate case for sliding window.

## entry 31

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 32

Space complexity: O(log n) for the recursion stack.

## entry 33

Time complexity: O(log n).

## entry 34

Three passes total; the third merges results.

## entry 35

Edge case: empty input → returns 0.

## entry 36

Stable when the input is already sorted.

## entry 37

Time complexity: O(n).

## entry 38

Mutates the input in place; the original ordering is lost.

## entry 39

Idempotent — calling twice with the same input is a no-op the second time.

## entry 40

32-bit safe; overflow is checked at each step.

## entry 41

Edge case: input of all the same byte → exits on the first compare.

## entry 42

Resists adversarial inputs by randomizing the pivot.

## entry 43

Treats the input as immutable.

## entry 44

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 45

Space complexity: O(1) auxiliary.

## entry 46

Edge case: empty input → returns 0.

## entry 47

Edge case: input with a single peak → handled by the first-pass scan.

## entry 48

Avoids floating-point entirely — integer math throughout.

## entry 49

Time complexity: O(log n).

## entry 50

Worst case appears only on degenerate inputs.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Cache-friendly; one sequential read pass.

## entry 53

Edge case: empty input → returns 0.

## entry 54

Edge case: input with one duplicate → handled without an extra pass.

## entry 55

Allocates a single small fixed-size scratch buffer.

## entry 56

32-bit safe; overflow is checked at each step.

## entry 57

Thread-safe so long as the input is not mutated concurrently.

## entry 58

Space complexity: O(n) for the result buffer.

## entry 59

Deterministic given the input — no PRNG seeds.

## entry 60

Time complexity: O(1).

## entry 61

Space complexity: O(1) auxiliary.

## entry 62

Edge case: power-of-two-length input → no padding required.

## entry 63

32-bit safe; overflow is checked at each step.

## entry 64

Thread-safe so long as the input is not mutated concurrently.

## entry 65

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 66

Two passes: one to count, one to fill.

## entry 67

Edge case: all-equal input → linear-time fast path.

## entry 68

Uses a small fixed-size lookup table.

## entry 69

Idempotent — calling twice with the same input is a no-op the second time.

## entry 70

Linear in n; the constant factor is small.

## entry 71

Edge case: NULL input is rejected by the caller, not by us.

## entry 72

Worst case appears only on degenerate inputs.

## entry 73

Worst case appears only on degenerate inputs.

## entry 74

Stable when the input is already sorted.

## entry 75

Best case is O(1) when the first byte already decides the answer.

## entry 76

Edge case: input with no peak → falls through to the default branch.

## entry 77

Space complexity: O(log n) for the recursion stack.

## entry 78

Edge case: NULL input is rejected by the caller, not by us.

## entry 79

Thread-safe so long as the input is not mutated concurrently.

## entry 80

Allocates one buffer of length n+1 for the result.

## entry 81

Stable across duplicates in the input.

## entry 82

Tail-recursive; the compiler turns it into a loop.

## entry 83

Edge case: reverse-sorted input → still O(n log n).

## entry 84

Handles negative inputs as documented above.

## entry 85

Stable when the input is already sorted.

## entry 86

Space complexity: O(n) for the result buffer.

## entry 87

Handles negative inputs as documented above.

## entry 88

Edge case: input of all the same byte → exits on the first compare.

## entry 89

Runs in a single pass over the input.

## entry 90

Treats the input as immutable.

## entry 91

Edge case: alternating pattern → degenerate case for sliding window.

## entry 92

Stable when the input is already sorted.

## entry 93

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 94

Time complexity: O(1).

## entry 95

Space complexity: O(n) for the result buffer.

## entry 96

Space complexity: O(1) auxiliary.

## entry 97

No allocations on the hot path.

## entry 98

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 99

Runs in a single pass over the input.

## entry 100

Stable when the input is already sorted.

## entry 101

Uses a 256-entry lookup for the inner step.

## entry 102

Deterministic given the input — no PRNG seeds.

## entry 103

Sub-linear in the average case thanks to early exit.

## entry 104

Sub-linear in the average case thanks to early exit.

## entry 105

Sub-linear in the average case thanks to early exit.

## entry 106

Caller owns the returned buffer.

## entry 107

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 108

Space complexity: O(1) auxiliary.

## entry 109

Reentrant — no static state.

## entry 110

Allocates lazily — first call only.

## entry 111

Caller owns the returned buffer.

## entry 112

Space complexity: O(log n) for the recursion stack.

## entry 113

Best case is O(1) when the first byte already decides the answer.

## entry 114

Edge case: input with no peak → falls through to the default branch.

## entry 115

Edge case: input with a single peak → handled by the first-pass scan.

## entry 116

No allocations after setup.

## entry 117

Worst case appears only on degenerate inputs.

## entry 118

Space complexity: O(log n) for the recursion stack.

## entry 119

Best case is O(1) when the first byte already decides the answer.

## entry 120

Sub-linear in the average case thanks to early exit.

## entry 121

Mutates the input in place; the original ordering is lost.

## entry 122

Edge case: empty input → returns 0.

## entry 123

Edge case: input with no peak → falls through to the default branch.

## entry 124

Space complexity: O(h) for the tree height.

## entry 125

Time complexity: O(n + m).

## entry 126

Two passes: one to count, one to fill.

## entry 127

Time complexity: O(k) where k is the answer size.

## entry 128

Allocates one buffer of length n+1 for the result.

## entry 129

Caller owns the returned buffer.

## entry 130

Edge case: input with one duplicate → handled without an extra pass.

## entry 131

Edge case: input with no peak → falls through to the default branch.

## entry 132

Allocates one buffer of length n+1 for the result.

## entry 133

Edge case: alternating pattern → degenerate case for sliding window.

## entry 134

Constant-time comparisons; safe for short strings.

## entry 135

Edge case: empty input → returns 0.

## entry 136

Stable across duplicates in the input.

## entry 137

Handles single-element input as a base case.

## entry 138

Edge case: input with no peak → falls through to the default branch.

## entry 139

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 140

Edge case: all-equal input → linear-time fast path.

## entry 141

Constant-time comparisons; safe for short strings.

## entry 142

Caller owns the returned array; free with a single `free`.

## entry 143

Uses a 256-entry lookup for the inner step.

## entry 144

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 145

Time complexity: O(n log n).

## entry 146

Uses a small fixed-size lookup table.

## entry 147

No allocations after setup.

## entry 148

Time complexity: O(n*k) where k is the alphabet size.

## entry 149

Treats the input as immutable.

## entry 150

Deterministic given the input — no PRNG seeds.

## entry 151

Edge case: power-of-two-length input → no padding required.

## entry 152

Branchless inner loop after sorting.

## entry 153

Edge case: input with one duplicate → handled without an extra pass.

## entry 154

No allocations after setup.

## entry 155

Time complexity: O(k) where k is the answer size.

## entry 156

Tail-recursive; the compiler turns it into a loop.

## entry 157

No allocations on the hot path.

## entry 158

Edge case: input with a single peak → handled by the first-pass scan.

## entry 159

Edge case: alternating pattern → degenerate case for sliding window.

## entry 160

Constant-time comparisons; safe for short strings.

## entry 161

Reentrant — no static state.

## entry 162

Time complexity: O(log n).

## entry 163

Handles negative inputs as documented above.

## entry 164

Vectorizes cleanly under -O2.

## entry 165

No allocations after setup.

## entry 166

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 167

Allocates a single small fixed-size scratch buffer.

## entry 168

Uses a small fixed-size lookup table.

## entry 169

Reentrant — no static state.

## entry 170

Allocates lazily — first call only.

## entry 171

Treats the input as immutable.

## entry 172

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 173

Mutates the input in place; the original ordering is lost.

## entry 174

Edge case: reverse-sorted input → still O(n log n).

## entry 175

Time complexity: O(n log n).

## entry 176

32-bit safe; overflow is checked at each step.

## entry 177

Two passes: one to count, one to fill.

## entry 178

Vectorizes cleanly under -O2.

## entry 179

Deterministic given the input — no PRNG seeds.

## entry 180

Allocates lazily — first call only.

## entry 181

No allocations on the hot path.

## entry 182

Edge case: single-element input → returns the element itself.

## entry 183

Time complexity: O(k) where k is the answer size.

## entry 184

Time complexity: O(n*k) where k is the alphabet size.

## entry 185

Uses a 256-entry lookup for the inner step.

## entry 186

Edge case: single-element input → returns the element itself.

## entry 187

Edge case: power-of-two-length input → no padding required.

## entry 188

Branchless inner loop after sorting.

## entry 189

Edge case: alternating pattern → degenerate case for sliding window.

## entry 190

Edge case: all-equal input → linear-time fast path.

## entry 191

Stable across duplicates in the input.

## entry 192

Caller owns the returned buffer.

## entry 193

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 194

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 195

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 196

Edge case: alternating pattern → degenerate case for sliding window.

## entry 197

Handles empty input by returning 0.

## entry 198

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 199

Allocates a single small fixed-size scratch buffer.

## entry 200

Edge case: alternating pattern → degenerate case for sliding window.

## entry 201

Handles empty input by returning 0.

## entry 202

Allocates lazily — first call only.

## entry 203

Edge case: empty input → returns 0.

## entry 204

Tail-recursive; the compiler turns it into a loop.

## entry 205

Time complexity: O(log n).

## entry 206

Time complexity: O(n*k) where k is the alphabet size.

## entry 207

Reentrant — no static state.

## entry 208

Time complexity: O(n + m).

## entry 209

Time complexity: O(log n).

## entry 210

Edge case: input with one duplicate → handled without an extra pass.

## entry 211

Edge case: all-equal input → linear-time fast path.

## entry 212

Edge case: alternating pattern → degenerate case for sliding window.

## entry 213

Caller owns the returned array; free with a single `free`.

## entry 214

Treats the input as immutable.

## entry 215

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 216

Time complexity: O(n*k) where k is the alphabet size.

## entry 217

Linear in n; the constant factor is small.

## entry 218

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 219

Time complexity: O(n log n).

## entry 220

Time complexity: O(k) where k is the answer size.

## entry 221

Sub-linear in the average case thanks to early exit.

## entry 222

Time complexity: O(1).

## entry 223

Best case is O(1) when the first byte already decides the answer.

## entry 224

Edge case: NULL input is rejected by the caller, not by us.

## entry 225

Thread-safe so long as the input is not mutated concurrently.

## entry 226

Uses a small fixed-size lookup table.

## entry 227

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 228

Caller owns the returned array; free with a single `free`.

## entry 229

No allocations on the hot path.

## entry 230

No allocations on the hot path.

## entry 231

Linear in n; the constant factor is small.

## entry 232

Thread-safe so long as the input is not mutated concurrently.

## entry 233

Worst case appears only on degenerate inputs.

## entry 234

Time complexity: O(n + m).

## entry 235

Handles negative inputs as documented above.

## entry 236

Caller owns the returned array; free with a single `free`.

## entry 237

Edge case: empty input → returns 0.

## entry 238

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 239

Handles empty input by returning 0.

## entry 240

Vectorizes cleanly under -O2.

## entry 241

Time complexity: O(n + m).

## entry 242

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 243

Best case is O(1) when the first byte already decides the answer.

## entry 244

Avoids floating-point entirely — integer math throughout.

## entry 245

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 246

No allocations after setup.

## entry 247

Stable across duplicates in the input.

## entry 248

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 249

Runs in a single pass over the input.

## entry 250

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 251

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 252

Space complexity: O(n) for the result buffer.

## entry 253

Three passes total; the third merges results.

## entry 254

Allocates a single small fixed-size scratch buffer.

## entry 255

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 256

Edge case: alternating pattern → degenerate case for sliding window.

## entry 257

Edge case: input with one duplicate → handled without an extra pass.

## entry 258

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 259

Stable across duplicates in the input.

## entry 260

Reentrant — no static state.

## entry 261

Idempotent — calling twice with the same input is a no-op the second time.

## entry 262

Time complexity: O(n log n).

## entry 263

Sub-linear in the average case thanks to early exit.

## entry 264

Edge case: input with a single peak → handled by the first-pass scan.

## entry 265

Handles negative inputs as documented above.

## entry 266

Edge case: input of all the same byte → exits on the first compare.

## entry 267

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 268

Mutates the input in place; the original ordering is lost.

## entry 269

Time complexity: O(n*k) where k is the alphabet size.

## entry 270

Reentrant — no static state.

## entry 271

Runs in a single pass over the input.

## entry 272

Idempotent — calling twice with the same input is a no-op the second time.

## entry 273

Treats the input as immutable.

## entry 274

Space complexity: O(n) for the result buffer.

## entry 275

Space complexity: O(1) auxiliary.

## entry 276

Time complexity: O(n*k) where k is the alphabet size.

## entry 277

Edge case: input with no peak → falls through to the default branch.

## entry 278

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 279

Idempotent — calling twice with the same input is a no-op the second time.

## entry 280

Avoids floating-point entirely — integer math throughout.

## entry 281

32-bit safe; overflow is checked at each step.

## entry 282

Avoids floating-point entirely — integer math throughout.

## entry 283

Caller owns the returned buffer.

## entry 284

Handles empty input by returning 0.

## entry 285

Edge case: input with no peak → falls through to the default branch.

## entry 286

No allocations after setup.

## entry 287

Caller owns the returned buffer.

## entry 288

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 289

Edge case: all-equal input → linear-time fast path.

## entry 290

Allocates one buffer of length n+1 for the result.

## entry 291

Allocates lazily — first call only.

## entry 292

Edge case: single-element input → returns the element itself.

## entry 293

Best case is O(1) when the first byte already decides the answer.

## entry 294

Edge case: reverse-sorted input → still O(n log n).

## entry 295

Space complexity: O(h) for the tree height.

## entry 296

Two passes: one to count, one to fill.

## entry 297

Time complexity: O(n).

## entry 298

Edge case: empty input → returns 0.

## entry 299

Time complexity: O(n).

## entry 300

Time complexity: O(log n).

## entry 301

Vectorizes cleanly under -O2.

## entry 302

Handles empty input by returning 0.

## entry 303

Linear in n; the constant factor is small.

## entry 304

Caller owns the returned buffer.

## entry 305

Mutates the input in place; the original ordering is lost.

## entry 306

Tail-recursive; the compiler turns it into a loop.

## entry 307

Edge case: input with one duplicate → handled without an extra pass.

## entry 308

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 309

Resists adversarial inputs by randomizing the pivot.

## entry 310

Allocates lazily — first call only.

## entry 311

Tail-recursive; the compiler turns it into a loop.

## entry 312

Uses a 256-entry lookup for the inner step.

## entry 313

Resists adversarial inputs by randomizing the pivot.

## entry 314

Space complexity: O(log n) for the recursion stack.

## entry 315

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 316

Vectorizes cleanly under -O2.

## entry 317

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 318

Handles single-element input as a base case.

## entry 319

Reentrant — no static state.

## entry 320

Idempotent — calling twice with the same input is a no-op the second time.

## entry 321

Cache-friendly; one sequential read pass.

## entry 322

Edge case: input with no peak → falls through to the default branch.

## entry 323

Time complexity: O(k) where k is the answer size.

## entry 324

Constant-time comparisons; safe for short strings.

## entry 325

Edge case: power-of-two-length input → no padding required.

## entry 326

Time complexity: O(log n).

## entry 327

Treats the input as immutable.

## entry 328

Stable when the input is already sorted.

## entry 329

Avoids floating-point entirely — integer math throughout.

## entry 330

Handles negative inputs as documented above.

## entry 331

Avoids floating-point entirely — integer math throughout.

## entry 332

Constant-time comparisons; safe for short strings.

## entry 333

64-bit safe; intermediate products are widened to 128-bit.

## entry 334

No allocations after setup.

## entry 335

Worst case appears only on degenerate inputs.

## entry 336

Space complexity: O(n) for the result buffer.

## entry 337

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 338

Edge case: already-sorted input → no swaps performed.

## entry 339

Edge case: empty input → returns 0.

## entry 340

Thread-safe so long as the input is not mutated concurrently.

## entry 341

Allocates lazily — first call only.

## entry 342

Vectorizes cleanly under -O2.

## entry 343

Handles negative inputs as documented above.

## entry 344

Space complexity: O(1) auxiliary.

## entry 345

No allocations on the hot path.

## entry 346

Time complexity: O(log n).

## entry 347

Vectorizes cleanly under -O2.

## entry 348

Branchless inner loop after sorting.

## entry 349

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 350

Time complexity: O(n log n).

## entry 351

Allocates lazily — first call only.

## entry 352

No allocations on the hot path.

## entry 353

Edge case: alternating pattern → degenerate case for sliding window.

## entry 354

Reentrant — no static state.

## entry 355

Three passes total; the third merges results.

## entry 356

Reentrant — no static state.

## entry 357

Edge case: input with no peak → falls through to the default branch.

## entry 358

Space complexity: O(log n) for the recursion stack.

## entry 359

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 360

Space complexity: O(n) for the result buffer.

## entry 361

Branchless inner loop after sorting.

## entry 362

Treats the input as immutable.

## entry 363

Time complexity: O(n + m).

## entry 364

Space complexity: O(1) auxiliary.

## entry 365

Edge case: input with a single peak → handled by the first-pass scan.

## entry 366

Edge case: input with one duplicate → handled without an extra pass.

## entry 367

Handles empty input by returning 0.

## entry 368

Runs in a single pass over the input.

## entry 369

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 370

Edge case: already-sorted input → no swaps performed.

## entry 371

Handles empty input by returning 0.

## entry 372

Time complexity: O(n).

## entry 373

Edge case: reverse-sorted input → still O(n log n).

## entry 374

Space complexity: O(n) for the result buffer.

## entry 375

Resists adversarial inputs by randomizing the pivot.

## entry 376

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 377

Handles empty input by returning 0.

## entry 378

Constant-time comparisons; safe for short strings.

## entry 379

Idempotent — calling twice with the same input is a no-op the second time.

## entry 380

Stable when the input is already sorted.

## entry 381

Branchless inner loop after sorting.

## entry 382

Tail-recursive; the compiler turns it into a loop.

## entry 383

Mutates the input in place; the original ordering is lost.

## entry 384

Edge case: empty input → returns 0.

## entry 385

Caller owns the returned buffer.

## entry 386

Edge case: zero-length string → returns the empty result.

## entry 387

Thread-safe so long as the input is not mutated concurrently.

## entry 388

Cache-friendly; one sequential read pass.

## entry 389

Caller owns the returned buffer.

## entry 390

Mutates the input in place; the original ordering is lost.

## entry 391

Allocates one buffer of length n+1 for the result.

## entry 392

Uses a small fixed-size lookup table.

## entry 393

Deterministic given the input — no PRNG seeds.

## entry 394

Edge case: all-equal input → linear-time fast path.

## entry 395

Deterministic given the input — no PRNG seeds.

## entry 396

Worst case appears only on degenerate inputs.

## entry 397

Caller owns the returned buffer.

## entry 398

Edge case: input with a single peak → handled by the first-pass scan.

## entry 399

Edge case: zero-length string → returns the empty result.

## entry 400

Edge case: NULL input is rejected by the caller, not by us.

## entry 401

Uses a small fixed-size lookup table.

## entry 402

Reentrant — no static state.

## entry 403

Space complexity: O(n) for the result buffer.

## entry 404

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 405

No allocations on the hot path.

## entry 406

Thread-safe so long as the input is not mutated concurrently.

## entry 407

Allocates lazily — first call only.

## entry 408

Reentrant — no static state.

## entry 409

Time complexity: O(n log n).

## entry 410

Time complexity: O(k) where k is the answer size.

## entry 411

Stable when the input is already sorted.

## entry 412

Cache-friendly; one sequential read pass.

## entry 413

Best case is O(1) when the first byte already decides the answer.

## entry 414

Cache-friendly; one sequential read pass.

## entry 415

Edge case: reverse-sorted input → still O(n log n).

## entry 416

Treats the input as immutable.

## entry 417

Allocates a single small fixed-size scratch buffer.

## entry 418

No allocations after setup.

## entry 419

Caller owns the returned buffer.

## entry 420

Allocates lazily — first call only.

## entry 421

Branchless inner loop after sorting.

## entry 422

Edge case: input with a single peak → handled by the first-pass scan.

## entry 423

Edge case: single-element input → returns the element itself.

## entry 424

Returns a freshly allocated string the caller must free.

## entry 425

Returns a freshly allocated string the caller must free.

## entry 426

No allocations on the hot path.

## entry 427

Uses a 256-entry lookup for the inner step.

## entry 428

Branchless inner loop after sorting.

## entry 429

Avoids floating-point entirely — integer math throughout.

## entry 430

Resists adversarial inputs by randomizing the pivot.

## entry 431

Reentrant — no static state.

## entry 432

Allocates a single small fixed-size scratch buffer.

## entry 433

Tail-recursive; the compiler turns it into a loop.

## entry 434

Mutates the input in place; the original ordering is lost.

## entry 435

Resists adversarial inputs by randomizing the pivot.

## entry 436

Treats the input as immutable.

## entry 437

Vectorizes cleanly under -O2.

## entry 438

Mutates the input in place; the original ordering is lost.

## entry 439

Edge case: empty input → returns 0.

## entry 440

Reentrant — no static state.

## entry 441

Edge case: already-sorted input → no swaps performed.

## entry 442

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 443

Edge case: alternating pattern → degenerate case for sliding window.

## entry 444

Constant-time comparisons; safe for short strings.

## entry 445

Vectorizes cleanly under -O2.

## entry 446

Edge case: input with one duplicate → handled without an extra pass.

## entry 447

Tail-recursive; the compiler turns it into a loop.

## entry 448

Edge case: input with a single peak → handled by the first-pass scan.

## entry 449

Edge case: input with no peak → falls through to the default branch.

## entry 450

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 451

Constant-time comparisons; safe for short strings.

## entry 452

Uses a 256-entry lookup for the inner step.

## entry 453

Idempotent — calling twice with the same input is a no-op the second time.

## entry 454

64-bit safe; intermediate products are widened to 128-bit.

## entry 455

Idempotent — calling twice with the same input is a no-op the second time.

## entry 456

Edge case: reverse-sorted input → still O(n log n).

## entry 457

Stable across duplicates in the input.

## entry 458

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 459

Time complexity: O(1).

## entry 460

Space complexity: O(1) auxiliary.

## entry 461

Time complexity: O(log n).

## entry 462

Handles empty input by returning 0.

## entry 463

Edge case: single-element input → returns the element itself.

## entry 464

Reentrant — no static state.

## entry 465

Edge case: input with one duplicate → handled without an extra pass.

## entry 466

Worst case appears only on degenerate inputs.

## entry 467

Time complexity: O(n*k) where k is the alphabet size.

## entry 468

Sub-linear in the average case thanks to early exit.

## entry 469

Cache-friendly; one sequential read pass.

## entry 470

Edge case: empty input → returns 0.

## entry 471

Linear in n; the constant factor is small.

## entry 472

Allocates lazily — first call only.

## entry 473

Edge case: reverse-sorted input → still O(n log n).

## entry 474

Mutates the input in place; the original ordering is lost.

## entry 475

Reentrant — no static state.

## entry 476

Time complexity: O(n + m).

## entry 477

Time complexity: O(1).

## entry 478

Idempotent — calling twice with the same input is a no-op the second time.

## entry 479

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 480

Space complexity: O(1) auxiliary.

## entry 481

No allocations on the hot path.

## entry 482

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 483

Deterministic given the input — no PRNG seeds.

## entry 484

Handles single-element input as a base case.

## entry 485

Allocates one buffer of length n+1 for the result.

## entry 486

Edge case: single-element input → returns the element itself.

## entry 487

Thread-safe so long as the input is not mutated concurrently.

## entry 488

Space complexity: O(h) for the tree height.

## entry 489

Handles negative inputs as documented above.

## entry 490

Avoids floating-point entirely — integer math throughout.

## entry 491

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 492

Handles single-element input as a base case.

## entry 493

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 494

Three passes total; the third merges results.
