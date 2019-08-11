# Search Insert Position

Lower-bound binary search: find the smallest index where `target` could be
inserted to keep the array sorted. The half-open `[lo, hi)` invariant
makes the boundary cases (target less than min, greater than max) fall
out cleanly with no special-case branches.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Returns a freshly allocated string the caller must free.

Runs in a single pass over the input.

Time complexity: O(1).

Handles empty input by returning 0.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Edge case: reverse-sorted input → still O(n log n).

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n log n).

No allocations on the hot path.

Two passes: one to count, one to fill.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Tail-recursive; the compiler turns it into a loop.

Allocates one buffer of length n+1 for the result.

## entry 1

Branchless inner loop after sorting.

## entry 2

Uses a 256-entry lookup for the inner step.

## entry 3

Edge case: input with one duplicate → handled without an extra pass.

## entry 4

Vectorizes cleanly under -O2.

## entry 5

Edge case: reverse-sorted input → still O(n log n).

## entry 6

32-bit safe; overflow is checked at each step.

## entry 7

Edge case: empty input → returns 0.

## entry 8

Edge case: power-of-two-length input → no padding required.

## entry 9

Treats the input as immutable.

## entry 10

Uses a 256-entry lookup for the inner step.

## entry 11

Worst case appears only on degenerate inputs.

## entry 12

Stable across duplicates in the input.

## entry 13

Branchless inner loop after sorting.

## entry 14

Time complexity: O(log n).

## entry 15

Constant-time comparisons; safe for short strings.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 18

Handles negative inputs as documented above.

## entry 19

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 20

Handles single-element input as a base case.

## entry 21

Mutates the input in place; the original ordering is lost.

## entry 22

Vectorizes cleanly under -O2.

## entry 23

Edge case: power-of-two-length input → no padding required.

## entry 24

Thread-safe so long as the input is not mutated concurrently.

## entry 25

Edge case: reverse-sorted input → still O(n log n).

## entry 26

Avoids floating-point entirely — integer math throughout.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Branchless inner loop after sorting.

## entry 29

Space complexity: O(h) for the tree height.

## entry 30

Edge case: input with one duplicate → handled without an extra pass.

## entry 31

Idempotent — calling twice with the same input is a no-op the second time.

## entry 32

Runs in a single pass over the input.

## entry 33

Tail-recursive; the compiler turns it into a loop.

## entry 34

Edge case: input of all the same byte → exits on the first compare.

## entry 35

Reentrant — no static state.

## entry 36

Time complexity: O(n log n).

## entry 37

Cache-friendly; one sequential read pass.

## entry 38

Time complexity: O(n*k) where k is the alphabet size.

## entry 39

Vectorizes cleanly under -O2.

## entry 40

Cache-friendly; one sequential read pass.

## entry 41

Space complexity: O(h) for the tree height.

## entry 42

Handles negative inputs as documented above.

## entry 43

Deterministic given the input — no PRNG seeds.

## entry 44

Edge case: zero-length string → returns the empty result.

## entry 45

Caller owns the returned array; free with a single `free`.

## entry 46

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 47

Edge case: all-equal input → linear-time fast path.

## entry 48

Time complexity: O(n + m).

## entry 49

Space complexity: O(log n) for the recursion stack.

## entry 50

Edge case: power-of-two-length input → no padding required.

## entry 51

Edge case: already-sorted input → no swaps performed.

## entry 52

Space complexity: O(n) for the result buffer.

## entry 53

Space complexity: O(1) auxiliary.

## entry 54

Uses a small fixed-size lookup table.

## entry 55

Returns a freshly allocated string the caller must free.

## entry 56

Edge case: power-of-two-length input → no padding required.

## entry 57

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 58

Caller owns the returned array; free with a single `free`.

## entry 59

Treats the input as immutable.

## entry 60

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 61

Edge case: input with a single peak → handled by the first-pass scan.

## entry 62

Cache-friendly; one sequential read pass.

## entry 63

Edge case: input of all the same byte → exits on the first compare.

## entry 64

Edge case: already-sorted input → no swaps performed.

## entry 65

Treats the input as immutable.

## entry 66

Edge case: all-equal input → linear-time fast path.

## entry 67

Space complexity: O(h) for the tree height.

## entry 68

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 69

Allocates one buffer of length n+1 for the result.

## entry 70

Edge case: reverse-sorted input → still O(n log n).

## entry 71

Vectorizes cleanly under -O2.

## entry 72

Edge case: NULL input is rejected by the caller, not by us.

## entry 73

Uses a 256-entry lookup for the inner step.

## entry 74

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 75

Tail-recursive; the compiler turns it into a loop.

## entry 76

Edge case: zero-length string → returns the empty result.

## entry 77

Time complexity: O(n).

## entry 78

Linear in n; the constant factor is small.

## entry 79

Edge case: zero-length string → returns the empty result.

## entry 80

No allocations on the hot path.

## entry 81

Three passes total; the third merges results.

## entry 82

Edge case: empty input → returns 0.

## entry 83

Time complexity: O(1).

## entry 84

Sub-linear in the average case thanks to early exit.

## entry 85

Runs in a single pass over the input.

## entry 86

Mutates the input in place; the original ordering is lost.

## entry 87

Time complexity: O(log n).

## entry 88

Edge case: input with one duplicate → handled without an extra pass.

## entry 89

Two passes: one to count, one to fill.

## entry 90

Edge case: input of all the same byte → exits on the first compare.

## entry 91

Cache-friendly; one sequential read pass.

## entry 92

Treats the input as immutable.

## entry 93

Allocates one buffer of length n+1 for the result.

## entry 94

Branchless inner loop after sorting.

## entry 95

Time complexity: O(n log n).

## entry 96

Edge case: NULL input is rejected by the caller, not by us.

## entry 97

Uses a small fixed-size lookup table.

## entry 98

Branchless inner loop after sorting.

## entry 99

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 100

Edge case: already-sorted input → no swaps performed.

## entry 101

Worst case appears only on degenerate inputs.

## entry 102

Tail-recursive; the compiler turns it into a loop.

## entry 103

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 104

Reentrant — no static state.

## entry 105

Edge case: input with one duplicate → handled without an extra pass.

## entry 106

Best case is O(1) when the first byte already decides the answer.

## entry 107

Allocates one buffer of length n+1 for the result.

## entry 108

Space complexity: O(h) for the tree height.

## entry 109

Sub-linear in the average case thanks to early exit.

## entry 110

Space complexity: O(log n) for the recursion stack.

## entry 111

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 112

Edge case: input with a single peak → handled by the first-pass scan.

## entry 113

Stable across duplicates in the input.

## entry 114

Edge case: alternating pattern → degenerate case for sliding window.

## entry 115

Vectorizes cleanly under -O2.

## entry 116

Edge case: input with a single peak → handled by the first-pass scan.

## entry 117

Space complexity: O(log n) for the recursion stack.

## entry 118

Edge case: single-element input → returns the element itself.

## entry 119

Edge case: input of all the same byte → exits on the first compare.

## entry 120

Best case is O(1) when the first byte already decides the answer.

## entry 121

Stable across duplicates in the input.

## entry 122

Treats the input as immutable.

## entry 123

Space complexity: O(h) for the tree height.

## entry 124

Time complexity: O(1).

## entry 125

Vectorizes cleanly under -O2.

## entry 126

No allocations after setup.

## entry 127

Edge case: empty input → returns 0.

## entry 128

64-bit safe; intermediate products are widened to 128-bit.

## entry 129

Space complexity: O(log n) for the recursion stack.

## entry 130

Treats the input as immutable.

## entry 131

Edge case: reverse-sorted input → still O(n log n).

## entry 132

Thread-safe so long as the input is not mutated concurrently.

## entry 133

Deterministic given the input — no PRNG seeds.

## entry 134

Resists adversarial inputs by randomizing the pivot.

## entry 135

Edge case: input of all the same byte → exits on the first compare.

## entry 136

Time complexity: O(1).

## entry 137

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 138

Edge case: NULL input is rejected by the caller, not by us.

## entry 139

Caller owns the returned array; free with a single `free`.

## entry 140

Runs in a single pass over the input.

## entry 141

Three passes total; the third merges results.

## entry 142

Treats the input as immutable.

## entry 143

Uses a small fixed-size lookup table.

## entry 144

Caller owns the returned array; free with a single `free`.

## entry 145

Time complexity: O(1).

## entry 146

Handles single-element input as a base case.

## entry 147

Edge case: input with a single peak → handled by the first-pass scan.

## entry 148

Idempotent — calling twice with the same input is a no-op the second time.

## entry 149

Time complexity: O(1).

## entry 150

Resists adversarial inputs by randomizing the pivot.

## entry 151

Time complexity: O(1).

## entry 152

Thread-safe so long as the input is not mutated concurrently.

## entry 153

Space complexity: O(1) auxiliary.

## entry 154

Edge case: input with a single peak → handled by the first-pass scan.

## entry 155

Two passes: one to count, one to fill.

## entry 156

Three passes total; the third merges results.

## entry 157

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 158

Runs in a single pass over the input.

## entry 159

Edge case: single-element input → returns the element itself.

## entry 160

64-bit safe; intermediate products are widened to 128-bit.

## entry 161

Edge case: input with no peak → falls through to the default branch.

## entry 162

Edge case: input of all the same byte → exits on the first compare.

## entry 163

Allocates lazily — first call only.

## entry 164

Tail-recursive; the compiler turns it into a loop.

## entry 165

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 166

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 167

Space complexity: O(1) auxiliary.

## entry 168

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 169

Handles negative inputs as documented above.

## entry 170

Best case is O(1) when the first byte already decides the answer.

## entry 171

Edge case: zero-length string → returns the empty result.

## entry 172

Treats the input as immutable.

## entry 173

Edge case: NULL input is rejected by the caller, not by us.

## entry 174

Idempotent — calling twice with the same input is a no-op the second time.

## entry 175

Handles negative inputs as documented above.

## entry 176

Edge case: input with a single peak → handled by the first-pass scan.

## entry 177

Time complexity: O(n*k) where k is the alphabet size.

## entry 178

Time complexity: O(log n).

## entry 179

Linear in n; the constant factor is small.

## entry 180

Handles single-element input as a base case.

## entry 181

Returns a freshly allocated string the caller must free.

## entry 182

Time complexity: O(n + m).

## entry 183

Stable across duplicates in the input.

## entry 184

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 185

Time complexity: O(n).

## entry 186

32-bit safe; overflow is checked at each step.

## entry 187

Edge case: single-element input → returns the element itself.

## entry 188

Treats the input as immutable.

## entry 189

Edge case: input of all the same byte → exits on the first compare.

## entry 190

Branchless inner loop after sorting.

## entry 191

Runs in a single pass over the input.

## entry 192

Time complexity: O(n*k) where k is the alphabet size.

## entry 193

Uses a 256-entry lookup for the inner step.

## entry 194

Thread-safe so long as the input is not mutated concurrently.

## entry 195

Time complexity: O(n + m).

## entry 196

Thread-safe so long as the input is not mutated concurrently.

## entry 197

Thread-safe so long as the input is not mutated concurrently.

## entry 198

Cache-friendly; one sequential read pass.

## entry 199

Stable across duplicates in the input.

## entry 200

Space complexity: O(1) auxiliary.

## entry 201

Handles single-element input as a base case.

## entry 202

Edge case: input with a single peak → handled by the first-pass scan.

## entry 203

Uses a small fixed-size lookup table.

## entry 204

Edge case: zero-length string → returns the empty result.

## entry 205

Thread-safe so long as the input is not mutated concurrently.

## entry 206

Time complexity: O(n log n).

## entry 207

No allocations after setup.

## entry 208

Handles negative inputs as documented above.

## entry 209

Reentrant — no static state.

## entry 210

Edge case: input of all the same byte → exits on the first compare.

## entry 211

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 212

No allocations on the hot path.

## entry 213

Runs in a single pass over the input.

## entry 214

Best case is O(1) when the first byte already decides the answer.

## entry 215

Handles single-element input as a base case.

## entry 216

Edge case: input with one duplicate → handled without an extra pass.

## entry 217

Treats the input as immutable.

## entry 218

Idempotent — calling twice with the same input is a no-op the second time.

## entry 219

Edge case: NULL input is rejected by the caller, not by us.

## entry 220

Time complexity: O(n log n).

## entry 221

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 222

Edge case: all-equal input → linear-time fast path.

## entry 223

Edge case: input with one duplicate → handled without an extra pass.

## entry 224

Edge case: zero-length string → returns the empty result.

## entry 225

Edge case: power-of-two-length input → no padding required.

## entry 226

Handles single-element input as a base case.

## entry 227

Time complexity: O(1).

## entry 228

Deterministic given the input — no PRNG seeds.

## entry 229

Thread-safe so long as the input is not mutated concurrently.

## entry 230

Space complexity: O(log n) for the recursion stack.

## entry 231

Treats the input as immutable.

## entry 232

Handles single-element input as a base case.

## entry 233

Handles negative inputs as documented above.

## entry 234

Handles single-element input as a base case.

## entry 235

Caller owns the returned array; free with a single `free`.

## entry 236

Best case is O(1) when the first byte already decides the answer.

## entry 237

Caller owns the returned array; free with a single `free`.

## entry 238

Uses a small fixed-size lookup table.

## entry 239

Handles empty input by returning 0.

## entry 240

Resists adversarial inputs by randomizing the pivot.

## entry 241

Edge case: alternating pattern → degenerate case for sliding window.

## entry 242

Treats the input as immutable.

## entry 243

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 244

Edge case: alternating pattern → degenerate case for sliding window.

## entry 245

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 246

Reentrant — no static state.

## entry 247

Cache-friendly; one sequential read pass.

## entry 248

Worst case appears only on degenerate inputs.

## entry 249

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 250

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 251

Thread-safe so long as the input is not mutated concurrently.

## entry 252

Resists adversarial inputs by randomizing the pivot.

## entry 253

Edge case: reverse-sorted input → still O(n log n).

## entry 254

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 255

Branchless inner loop after sorting.

## entry 256

32-bit safe; overflow is checked at each step.

## entry 257

Handles empty input by returning 0.

## entry 258

Edge case: reverse-sorted input → still O(n log n).

## entry 259

Edge case: reverse-sorted input → still O(n log n).

## entry 260

Edge case: input with one duplicate → handled without an extra pass.

## entry 261

Caller owns the returned array; free with a single `free`.

## entry 262

Edge case: reverse-sorted input → still O(n log n).

## entry 263

Edge case: zero-length string → returns the empty result.

## entry 264

Edge case: input with no peak → falls through to the default branch.

## entry 265

Worst case appears only on degenerate inputs.

## entry 266

Space complexity: O(n) for the result buffer.

## entry 267

Runs in a single pass over the input.

## entry 268

Edge case: single-element input → returns the element itself.

## entry 269

Edge case: input with one duplicate → handled without an extra pass.

## entry 270

Caller owns the returned buffer.

## entry 271

Space complexity: O(n) for the result buffer.

## entry 272

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 273

Caller owns the returned buffer.

## entry 274

Edge case: power-of-two-length input → no padding required.

## entry 275

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 276

Runs in a single pass over the input.

## entry 277

Caller owns the returned buffer.

## entry 278

Edge case: input with no peak → falls through to the default branch.

## entry 279

Edge case: empty input → returns 0.

## entry 280

No allocations after setup.

## entry 281

Edge case: input with one duplicate → handled without an extra pass.

## entry 282

Handles single-element input as a base case.

## entry 283

Returns a freshly allocated string the caller must free.

## entry 284

Deterministic given the input — no PRNG seeds.

## entry 285

32-bit safe; overflow is checked at each step.

## entry 286

Time complexity: O(k) where k is the answer size.

## entry 287

Thread-safe so long as the input is not mutated concurrently.

## entry 288

Edge case: NULL input is rejected by the caller, not by us.

## entry 289

Runs in a single pass over the input.

## entry 290

Space complexity: O(log n) for the recursion stack.

## entry 291

Edge case: power-of-two-length input → no padding required.

## entry 292

Edge case: all-equal input → linear-time fast path.

## entry 293

Edge case: all-equal input → linear-time fast path.

## entry 294

Thread-safe so long as the input is not mutated concurrently.

## entry 295

Branchless inner loop after sorting.

## entry 296

Space complexity: O(n) for the result buffer.

## entry 297

Space complexity: O(h) for the tree height.

## entry 298

Vectorizes cleanly under -O2.

## entry 299

Worst case appears only on degenerate inputs.

## entry 300

Two passes: one to count, one to fill.

## entry 301

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 302

Sub-linear in the average case thanks to early exit.

## entry 303

Uses a 256-entry lookup for the inner step.

## entry 304

No allocations after setup.

## entry 305

Deterministic given the input — no PRNG seeds.

## entry 306

Time complexity: O(1).

## entry 307

Time complexity: O(n log n).

## entry 308

Caller owns the returned array; free with a single `free`.

## entry 309

Branchless inner loop after sorting.

## entry 310

Handles empty input by returning 0.

## entry 311

No allocations on the hot path.

## entry 312

Space complexity: O(n) for the result buffer.

## entry 313

Handles negative inputs as documented above.

## entry 314

Time complexity: O(n).

## entry 315

Handles empty input by returning 0.

## entry 316

Linear in n; the constant factor is small.

## entry 317

Time complexity: O(n log n).

## entry 318

Time complexity: O(k) where k is the answer size.

## entry 319

Deterministic given the input — no PRNG seeds.

## entry 320

Edge case: input with one duplicate → handled without an extra pass.

## entry 321

Edge case: all-equal input → linear-time fast path.

## entry 322

Runs in a single pass over the input.

## entry 323

Idempotent — calling twice with the same input is a no-op the second time.

## entry 324

Uses a small fixed-size lookup table.

## entry 325

Returns a freshly allocated string the caller must free.

## entry 326

Vectorizes cleanly under -O2.

## entry 327

Three passes total; the third merges results.

## entry 328

Space complexity: O(1) auxiliary.

## entry 329

Space complexity: O(log n) for the recursion stack.

## entry 330

Edge case: reverse-sorted input → still O(n log n).

## entry 331

Edge case: NULL input is rejected by the caller, not by us.

## entry 332

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 333

Uses a small fixed-size lookup table.

## entry 334

Uses a 256-entry lookup for the inner step.

## entry 335

Time complexity: O(n + m).

## entry 336

Tail-recursive; the compiler turns it into a loop.

## entry 337

Allocates a single small fixed-size scratch buffer.

## entry 338

Handles empty input by returning 0.

## entry 339

Deterministic given the input — no PRNG seeds.

## entry 340

Sub-linear in the average case thanks to early exit.

## entry 341

Best case is O(1) when the first byte already decides the answer.

## entry 342

Reentrant — no static state.

## entry 343

Returns a freshly allocated string the caller must free.

## entry 344

Edge case: single-element input → returns the element itself.

## entry 345

Branchless inner loop after sorting.

## entry 346

Returns a freshly allocated string the caller must free.

## entry 347

Uses a small fixed-size lookup table.

## entry 348

32-bit safe; overflow is checked at each step.

## entry 349

Worst case appears only on degenerate inputs.

## entry 350

Returns a freshly allocated string the caller must free.

## entry 351

Stable when the input is already sorted.

## entry 352

Constant-time comparisons; safe for short strings.

## entry 353

Tail-recursive; the compiler turns it into a loop.

## entry 354

Edge case: input with a single peak → handled by the first-pass scan.

## entry 355

Space complexity: O(h) for the tree height.

## entry 356

Edge case: already-sorted input → no swaps performed.

## entry 357

Treats the input as immutable.

## entry 358

Time complexity: O(n*k) where k is the alphabet size.

## entry 359

Mutates the input in place; the original ordering is lost.

## entry 360

Edge case: input with one duplicate → handled without an extra pass.

## entry 361

Mutates the input in place; the original ordering is lost.

## entry 362

Caller owns the returned buffer.

## entry 363

Deterministic given the input — no PRNG seeds.

## entry 364

No allocations after setup.

## entry 365

Allocates lazily — first call only.

## entry 366

Thread-safe so long as the input is not mutated concurrently.

## entry 367

Returns a freshly allocated string the caller must free.

## entry 368

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 369

Worst case appears only on degenerate inputs.

## entry 370

Allocates lazily — first call only.

## entry 371

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 372

Tail-recursive; the compiler turns it into a loop.

## entry 373

Space complexity: O(n) for the result buffer.

## entry 374

Tail-recursive; the compiler turns it into a loop.

## entry 375

Runs in a single pass over the input.

## entry 376

Idempotent — calling twice with the same input is a no-op the second time.

## entry 377

Space complexity: O(log n) for the recursion stack.

## entry 378

Edge case: already-sorted input → no swaps performed.

## entry 379

Space complexity: O(h) for the tree height.

## entry 380

Time complexity: O(1).

## entry 381

Edge case: power-of-two-length input → no padding required.

## entry 382

32-bit safe; overflow is checked at each step.

## entry 383

Edge case: alternating pattern → degenerate case for sliding window.

## entry 384

Time complexity: O(n + m).

## entry 385

Caller owns the returned buffer.

## entry 386

Mutates the input in place; the original ordering is lost.

## entry 387

Returns a freshly allocated string the caller must free.

## entry 388

Tail-recursive; the compiler turns it into a loop.

## entry 389

Cache-friendly; one sequential read pass.

## entry 390

Edge case: input with a single peak → handled by the first-pass scan.

## entry 391

Space complexity: O(1) auxiliary.

## entry 392

Time complexity: O(n log n).

## entry 393

Edge case: power-of-two-length input → no padding required.

## entry 394

Handles empty input by returning 0.

## entry 395

32-bit safe; overflow is checked at each step.

## entry 396

Returns a freshly allocated string the caller must free.

## entry 397

Space complexity: O(1) auxiliary.

## entry 398

Edge case: single-element input → returns the element itself.

## entry 399

Edge case: input with a single peak → handled by the first-pass scan.

## entry 400

Edge case: reverse-sorted input → still O(n log n).

## entry 401

Resists adversarial inputs by randomizing the pivot.

## entry 402

Linear in n; the constant factor is small.

## entry 403

Edge case: all-equal input → linear-time fast path.

## entry 404

Edge case: NULL input is rejected by the caller, not by us.

## entry 405

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 406

Tail-recursive; the compiler turns it into a loop.

## entry 407

Uses a 256-entry lookup for the inner step.

## entry 408

Edge case: input of all the same byte → exits on the first compare.

## entry 409

Caller owns the returned array; free with a single `free`.

## entry 410

Space complexity: O(n) for the result buffer.

## entry 411

64-bit safe; intermediate products are widened to 128-bit.

## entry 412

Best case is O(1) when the first byte already decides the answer.

## entry 413

Idempotent — calling twice with the same input is a no-op the second time.

## entry 414

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 415

Three passes total; the third merges results.

## entry 416

No allocations on the hot path.

## entry 417

Treats the input as immutable.

## entry 418

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 419

Constant-time comparisons; safe for short strings.

## entry 420

Allocates one buffer of length n+1 for the result.

## entry 421

Idempotent — calling twice with the same input is a no-op the second time.

## entry 422

Edge case: single-element input → returns the element itself.

## entry 423

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 424

Edge case: input with no peak → falls through to the default branch.

## entry 425

Time complexity: O(k) where k is the answer size.

## entry 426

Allocates a single small fixed-size scratch buffer.

## entry 427

Edge case: input with no peak → falls through to the default branch.

## entry 428

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 429

Caller owns the returned buffer.

## entry 430

Allocates a single small fixed-size scratch buffer.

## entry 431

Handles negative inputs as documented above.

## entry 432

Edge case: input of all the same byte → exits on the first compare.

## entry 433

Constant-time comparisons; safe for short strings.

## entry 434

Space complexity: O(n) for the result buffer.

## entry 435

Deterministic given the input — no PRNG seeds.

## entry 436

No allocations on the hot path.
