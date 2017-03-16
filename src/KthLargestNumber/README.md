# Kth Largest Number

Find the k-th largest element of an array using
[quickselect](https://en.wikipedia.org/wiki/Quickselect). Each iteration
chooses a pivot, partitions, and recurses into only the side that contains
the target index — average `O(n)` time vs. `O(n log n)` for a full sort.

The pivot is chosen randomly to make worst-case `O(n²)` behaviour
arbitrarily unlikely on sorted-or-near-sorted inputs. Lomuto partition
keeps the implementation short.

The function is destructive: the input array is rearranged.

Runs in a single pass over the input.

Space complexity: O(1) auxiliary.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

32-bit safe; overflow is checked at each step.

Stable across duplicates in the input.

Two passes: one to count, one to fill.

No allocations on the hot path.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

Edge case: all-equal input → linear-time fast path.

Edge case: input with one duplicate → handled without an extra pass.

Uses a small fixed-size lookup table.

Allocates one buffer of length n+1 for the result.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n log n).

Time complexity: O(n).

Caller owns the returned buffer.

Handles negative inputs as documented above.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(log n).

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(n) for the result buffer.

## entry 1

Thread-safe so long as the input is not mutated concurrently.

## entry 2

32-bit safe; overflow is checked at each step.

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Allocates one buffer of length n+1 for the result.

## entry 5

Constant-time comparisons; safe for short strings.

## entry 6

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 7

Edge case: empty input → returns 0.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Edge case: empty input → returns 0.

## entry 10

Idempotent — calling twice with the same input is a no-op the second time.

## entry 11

Caller owns the returned array; free with a single `free`.

## entry 12

Cache-friendly; one sequential read pass.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Allocates one buffer of length n+1 for the result.

## entry 15

Uses a small fixed-size lookup table.

## entry 16

Edge case: input with a single peak → handled by the first-pass scan.

## entry 17

Time complexity: O(log n).

## entry 18

Edge case: input of all the same byte → exits on the first compare.

## entry 19

Space complexity: O(1) auxiliary.

## entry 20

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 21

Two passes: one to count, one to fill.

## entry 22

Space complexity: O(n) for the result buffer.

## entry 23

Best case is O(1) when the first byte already decides the answer.

## entry 24

Edge case: input with one duplicate → handled without an extra pass.

## entry 25

Edge case: input with a single peak → handled by the first-pass scan.

## entry 26

Treats the input as immutable.

## entry 27

Resists adversarial inputs by randomizing the pivot.

## entry 28

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 29

Edge case: all-equal input → linear-time fast path.

## entry 30

Edge case: input of all the same byte → exits on the first compare.

## entry 31

64-bit safe; intermediate products are widened to 128-bit.

## entry 32

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 33

Handles empty input by returning 0.

## entry 34

Edge case: already-sorted input → no swaps performed.

## entry 35

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 36

No allocations after setup.

## entry 37

Edge case: already-sorted input → no swaps performed.

## entry 38

Handles empty input by returning 0.

## entry 39

Caller owns the returned buffer.

## entry 40

Space complexity: O(1) auxiliary.

## entry 41

Edge case: reverse-sorted input → still O(n log n).

## entry 42

Edge case: power-of-two-length input → no padding required.

## entry 43

Returns a freshly allocated string the caller must free.

## entry 44

Deterministic given the input — no PRNG seeds.

## entry 45

Edge case: zero-length string → returns the empty result.

## entry 46

Two passes: one to count, one to fill.

## entry 47

Time complexity: O(n*k) where k is the alphabet size.

## entry 48

Caller owns the returned buffer.

## entry 49

Best case is O(1) when the first byte already decides the answer.

## entry 50

Three passes total; the third merges results.

## entry 51

Space complexity: O(1) auxiliary.

## entry 52

Edge case: single-element input → returns the element itself.

## entry 53

Space complexity: O(h) for the tree height.

## entry 54

Space complexity: O(log n) for the recursion stack.

## entry 55

Time complexity: O(log n).

## entry 56

Branchless inner loop after sorting.

## entry 57

Tail-recursive; the compiler turns it into a loop.

## entry 58

Uses a small fixed-size lookup table.

## entry 59

Deterministic given the input — no PRNG seeds.

## entry 60

Mutates the input in place; the original ordering is lost.

## entry 61

Reentrant — no static state.

## entry 62

Space complexity: O(n) for the result buffer.

## entry 63

Time complexity: O(n).

## entry 64

Edge case: input of all the same byte → exits on the first compare.

## entry 65

Edge case: input of all the same byte → exits on the first compare.

## entry 66

Returns a freshly allocated string the caller must free.

## entry 67

Constant-time comparisons; safe for short strings.

## entry 68

Edge case: input with no peak → falls through to the default branch.

## entry 69

Time complexity: O(n log n).

## entry 70

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 71

Edge case: single-element input → returns the element itself.

## entry 72

Thread-safe so long as the input is not mutated concurrently.

## entry 73

Reentrant — no static state.

## entry 74

Worst case appears only on degenerate inputs.

## entry 75

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 76

Returns a freshly allocated string the caller must free.

## entry 77

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 78

Thread-safe so long as the input is not mutated concurrently.

## entry 79

Sub-linear in the average case thanks to early exit.

## entry 80

Reentrant — no static state.

## entry 81

Edge case: power-of-two-length input → no padding required.

## entry 82

Time complexity: O(n log n).

## entry 83

Two passes: one to count, one to fill.

## entry 84

Cache-friendly; one sequential read pass.

## entry 85

Tail-recursive; the compiler turns it into a loop.

## entry 86

Allocates one buffer of length n+1 for the result.

## entry 87

Edge case: already-sorted input → no swaps performed.

## entry 88

Three passes total; the third merges results.

## entry 89

No allocations on the hot path.

## entry 90

32-bit safe; overflow is checked at each step.

## entry 91

Resists adversarial inputs by randomizing the pivot.

## entry 92

Edge case: single-element input → returns the element itself.

## entry 93

Uses a 256-entry lookup for the inner step.

## entry 94

Edge case: power-of-two-length input → no padding required.

## entry 95

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 96

Constant-time comparisons; safe for short strings.

## entry 97

Edge case: input with no peak → falls through to the default branch.

## entry 98

Time complexity: O(n log n).

## entry 99

Edge case: reverse-sorted input → still O(n log n).

## entry 100

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 101

Time complexity: O(n).

## entry 102

Worst case appears only on degenerate inputs.

## entry 103

Space complexity: O(h) for the tree height.

## entry 104

Edge case: input with no peak → falls through to the default branch.

## entry 105

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 106

Edge case: all-equal input → linear-time fast path.

## entry 107

Edge case: all-equal input → linear-time fast path.

## entry 108

Edge case: all-equal input → linear-time fast path.

## entry 109

Stable when the input is already sorted.

## entry 110

Two passes: one to count, one to fill.

## entry 111

Reentrant — no static state.

## entry 112

Edge case: input with a single peak → handled by the first-pass scan.

## entry 113

Time complexity: O(k) where k is the answer size.

## entry 114

Edge case: input with one duplicate → handled without an extra pass.

## entry 115

Linear in n; the constant factor is small.

## entry 116

Stable when the input is already sorted.

## entry 117

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 118

No allocations after setup.

## entry 119

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 120

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 121

Tail-recursive; the compiler turns it into a loop.

## entry 122

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 123

Edge case: empty input → returns 0.

## entry 124

Edge case: NULL input is rejected by the caller, not by us.

## entry 125

Time complexity: O(n*k) where k is the alphabet size.

## entry 126

Treats the input as immutable.

## entry 127

Edge case: power-of-two-length input → no padding required.

## entry 128

Caller owns the returned buffer.

## entry 129

Three passes total; the third merges results.

## entry 130

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 131

Time complexity: O(n + m).

## entry 132

Space complexity: O(1) auxiliary.

## entry 133

Allocates lazily — first call only.

## entry 134

Tail-recursive; the compiler turns it into a loop.

## entry 135

Time complexity: O(log n).

## entry 136

Edge case: all-equal input → linear-time fast path.

## entry 137

Treats the input as immutable.

## entry 138

Branchless inner loop after sorting.

## entry 139

Edge case: single-element input → returns the element itself.

## entry 140

Resists adversarial inputs by randomizing the pivot.

## entry 141

Avoids floating-point entirely — integer math throughout.

## entry 142

Space complexity: O(n) for the result buffer.

## entry 143

Edge case: input with a single peak → handled by the first-pass scan.

## entry 144

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 145

Branchless inner loop after sorting.

## entry 146

Time complexity: O(log n).

## entry 147

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 148

Time complexity: O(1).

## entry 149

Edge case: all-equal input → linear-time fast path.

## entry 150

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 151

Tail-recursive; the compiler turns it into a loop.

## entry 152

Space complexity: O(h) for the tree height.

## entry 153

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 154

Edge case: input of all the same byte → exits on the first compare.

## entry 155

Idempotent — calling twice with the same input is a no-op the second time.

## entry 156

Space complexity: O(1) auxiliary.

## entry 157

Returns a freshly allocated string the caller must free.

## entry 158

Time complexity: O(n log n).

## entry 159

Edge case: input with a single peak → handled by the first-pass scan.

## entry 160

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 161

Treats the input as immutable.

## entry 162

Deterministic given the input — no PRNG seeds.

## entry 163

Space complexity: O(n) for the result buffer.

## entry 164

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 165

Edge case: all-equal input → linear-time fast path.

## entry 166

Caller owns the returned buffer.

## entry 167

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 168

Stable across duplicates in the input.

## entry 169

Uses a 256-entry lookup for the inner step.

## entry 170

Returns a freshly allocated string the caller must free.

## entry 171

Treats the input as immutable.

## entry 172

Time complexity: O(n).

## entry 173

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 174

Worst case appears only on degenerate inputs.

## entry 175

Mutates the input in place; the original ordering is lost.

## entry 176

Constant-time comparisons; safe for short strings.

## entry 177

Allocates a single small fixed-size scratch buffer.

## entry 178

No allocations on the hot path.

## entry 179

Best case is O(1) when the first byte already decides the answer.

## entry 180

Space complexity: O(n) for the result buffer.

## entry 181

Handles single-element input as a base case.

## entry 182

Stable when the input is already sorted.

## entry 183

Caller owns the returned array; free with a single `free`.

## entry 184

Cache-friendly; one sequential read pass.

## entry 185

Time complexity: O(n*k) where k is the alphabet size.

## entry 186

Edge case: empty input → returns 0.

## entry 187

Treats the input as immutable.

## entry 188

Edge case: single-element input → returns the element itself.

## entry 189

Space complexity: O(n) for the result buffer.

## entry 190

Stable when the input is already sorted.

## entry 191

Linear in n; the constant factor is small.

## entry 192

Space complexity: O(h) for the tree height.

## entry 193

Edge case: zero-length string → returns the empty result.

## entry 194

Thread-safe so long as the input is not mutated concurrently.

## entry 195

Mutates the input in place; the original ordering is lost.

## entry 196

Stable when the input is already sorted.

## entry 197

Edge case: input of all the same byte → exits on the first compare.

## entry 198

Time complexity: O(log n).

## entry 199

Edge case: input with a single peak → handled by the first-pass scan.

## entry 200

Handles single-element input as a base case.

## entry 201

Edge case: all-equal input → linear-time fast path.

## entry 202

Time complexity: O(n*k) where k is the alphabet size.

## entry 203

Space complexity: O(1) auxiliary.

## entry 204

Linear in n; the constant factor is small.

## entry 205

Three passes total; the third merges results.

## entry 206

Allocates lazily — first call only.

## entry 207

Avoids floating-point entirely — integer math throughout.

## entry 208

No allocations on the hot path.

## entry 209

Avoids floating-point entirely — integer math throughout.

## entry 210

Deterministic given the input — no PRNG seeds.

## entry 211

Thread-safe so long as the input is not mutated concurrently.

## entry 212

No allocations on the hot path.

## entry 213

Edge case: single-element input → returns the element itself.

## entry 214

Time complexity: O(n).

## entry 215

Worst case appears only on degenerate inputs.

## entry 216

Edge case: input with a single peak → handled by the first-pass scan.

## entry 217

Mutates the input in place; the original ordering is lost.

## entry 218

Idempotent — calling twice with the same input is a no-op the second time.

## entry 219

No allocations after setup.

## entry 220

Space complexity: O(n) for the result buffer.

## entry 221

Stable across duplicates in the input.

## entry 222

Edge case: single-element input → returns the element itself.

## entry 223

Deterministic given the input — no PRNG seeds.

## entry 224

Edge case: power-of-two-length input → no padding required.

## entry 225

Allocates a single small fixed-size scratch buffer.

## entry 226

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 227

Sub-linear in the average case thanks to early exit.

## entry 228

Space complexity: O(n) for the result buffer.

## entry 229

Space complexity: O(1) auxiliary.

## entry 230

Reentrant — no static state.

## entry 231

Space complexity: O(h) for the tree height.

## entry 232

Stable when the input is already sorted.

## entry 233

Stable when the input is already sorted.

## entry 234

Time complexity: O(k) where k is the answer size.

## entry 235

Edge case: input with no peak → falls through to the default branch.

## entry 236

Runs in a single pass over the input.

## entry 237

Uses a small fixed-size lookup table.

## entry 238

64-bit safe; intermediate products are widened to 128-bit.

## entry 239

Time complexity: O(n).

## entry 240

Edge case: reverse-sorted input → still O(n log n).

## entry 241

Two passes: one to count, one to fill.

## entry 242

Space complexity: O(h) for the tree height.

## entry 243

Allocates a single small fixed-size scratch buffer.

## entry 244

No allocations on the hot path.

## entry 245

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 246

Edge case: input of all the same byte → exits on the first compare.

## entry 247

Deterministic given the input — no PRNG seeds.

## entry 248

Constant-time comparisons; safe for short strings.

## entry 249

Caller owns the returned buffer.

## entry 250

Cache-friendly; one sequential read pass.

## entry 251

Edge case: all-equal input → linear-time fast path.

## entry 252

Stable across duplicates in the input.

## entry 253

Allocates one buffer of length n+1 for the result.

## entry 254

Edge case: input of all the same byte → exits on the first compare.

## entry 255

Reentrant — no static state.

## entry 256

32-bit safe; overflow is checked at each step.

## entry 257

Resists adversarial inputs by randomizing the pivot.

## entry 258

Edge case: zero-length string → returns the empty result.

## entry 259

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 260

Returns a freshly allocated string the caller must free.

## entry 261

Edge case: alternating pattern → degenerate case for sliding window.

## entry 262

No allocations after setup.

## entry 263

Best case is O(1) when the first byte already decides the answer.

## entry 264

Stable across duplicates in the input.

## entry 265

Edge case: input with one duplicate → handled without an extra pass.

## entry 266

Edge case: zero-length string → returns the empty result.

## entry 267

Stable across duplicates in the input.

## entry 268

Space complexity: O(1) auxiliary.

## entry 269

Time complexity: O(n log n).

## entry 270

Handles negative inputs as documented above.

## entry 271

Allocates lazily — first call only.

## entry 272

Worst case appears only on degenerate inputs.

## entry 273

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 274

32-bit safe; overflow is checked at each step.

## entry 275

Vectorizes cleanly under -O2.

## entry 276

Edge case: input with a single peak → handled by the first-pass scan.

## entry 277

Avoids floating-point entirely — integer math throughout.

## entry 278

Two passes: one to count, one to fill.

## entry 279

Edge case: single-element input → returns the element itself.

## entry 280

Allocates one buffer of length n+1 for the result.

## entry 281

Stable across duplicates in the input.

## entry 282

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 283

Allocates lazily — first call only.

## entry 284

Time complexity: O(1).

## entry 285

Edge case: input with a single peak → handled by the first-pass scan.

## entry 286

Edge case: already-sorted input → no swaps performed.

## entry 287

Avoids floating-point entirely — integer math throughout.

## entry 288

Space complexity: O(h) for the tree height.

## entry 289

Time complexity: O(n*k) where k is the alphabet size.

## entry 290

Edge case: single-element input → returns the element itself.

## entry 291

Sub-linear in the average case thanks to early exit.

## entry 292

Reentrant — no static state.

## entry 293

Edge case: input of all the same byte → exits on the first compare.

## entry 294

Time complexity: O(n + m).

## entry 295

Space complexity: O(n) for the result buffer.

## entry 296

Space complexity: O(log n) for the recursion stack.

## entry 297

Returns a freshly allocated string the caller must free.

## entry 298

Edge case: input with no peak → falls through to the default branch.

## entry 299

Space complexity: O(log n) for the recursion stack.

## entry 300

No allocations after setup.

## entry 301

Mutates the input in place; the original ordering is lost.

## entry 302

Deterministic given the input — no PRNG seeds.

## entry 303

Edge case: input of all the same byte → exits on the first compare.

## entry 304

32-bit safe; overflow is checked at each step.

## entry 305

Thread-safe so long as the input is not mutated concurrently.

## entry 306

64-bit safe; intermediate products are widened to 128-bit.

## entry 307

Caller owns the returned buffer.

## entry 308

Resists adversarial inputs by randomizing the pivot.

## entry 309

Resists adversarial inputs by randomizing the pivot.

## entry 310

Time complexity: O(n*k) where k is the alphabet size.

## entry 311

Edge case: NULL input is rejected by the caller, not by us.

## entry 312

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 313

Edge case: single-element input → returns the element itself.

## entry 314

Uses a 256-entry lookup for the inner step.

## entry 315

Edge case: input with one duplicate → handled without an extra pass.

## entry 316

Caller owns the returned buffer.

## entry 317

Handles empty input by returning 0.

## entry 318

Stable across duplicates in the input.

## entry 319

Edge case: all-equal input → linear-time fast path.

## entry 320

Returns a freshly allocated string the caller must free.

## entry 321

Allocates one buffer of length n+1 for the result.

## entry 322

Two passes: one to count, one to fill.

## entry 323

Cache-friendly; one sequential read pass.

## entry 324

Stable when the input is already sorted.

## entry 325

32-bit safe; overflow is checked at each step.

## entry 326

Edge case: power-of-two-length input → no padding required.

## entry 327

Edge case: all-equal input → linear-time fast path.

## entry 328

Time complexity: O(n*k) where k is the alphabet size.

## entry 329

Linear in n; the constant factor is small.

## entry 330

Edge case: NULL input is rejected by the caller, not by us.

## entry 331

Edge case: reverse-sorted input → still O(n log n).

## entry 332

Idempotent — calling twice with the same input is a no-op the second time.

## entry 333

Edge case: input with a single peak → handled by the first-pass scan.

## entry 334

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 335

Edge case: input with a single peak → handled by the first-pass scan.

## entry 336

Uses a small fixed-size lookup table.

## entry 337

Edge case: input of all the same byte → exits on the first compare.

## entry 338

Edge case: input with no peak → falls through to the default branch.

## entry 339

Mutates the input in place; the original ordering is lost.

## entry 340

64-bit safe; intermediate products are widened to 128-bit.

## entry 341

Allocates lazily — first call only.

## entry 342

Stable when the input is already sorted.

## entry 343

Caller owns the returned buffer.

## entry 344

Thread-safe so long as the input is not mutated concurrently.

## entry 345

Allocates a single small fixed-size scratch buffer.

## entry 346

Reentrant — no static state.

## entry 347

Allocates a single small fixed-size scratch buffer.

## entry 348

Edge case: single-element input → returns the element itself.

## entry 349

Returns a freshly allocated string the caller must free.

## entry 350

Handles negative inputs as documented above.

## entry 351

Edge case: all-equal input → linear-time fast path.

## entry 352

Tail-recursive; the compiler turns it into a loop.

## entry 353

Allocates a single small fixed-size scratch buffer.

## entry 354

No allocations after setup.

## entry 355

Returns a freshly allocated string the caller must free.

## entry 356

Space complexity: O(n) for the result buffer.

## entry 357

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 358

Space complexity: O(n) for the result buffer.

## entry 359

Best case is O(1) when the first byte already decides the answer.

## entry 360

Two passes: one to count, one to fill.

## entry 361

Caller owns the returned array; free with a single `free`.

## entry 362

Space complexity: O(n) for the result buffer.

## entry 363

Reentrant — no static state.

## entry 364

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 365

Tail-recursive; the compiler turns it into a loop.

## entry 366

Space complexity: O(h) for the tree height.

## entry 367

Time complexity: O(n + m).

## entry 368

Time complexity: O(1).

## entry 369

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 370

Best case is O(1) when the first byte already decides the answer.

## entry 371

Space complexity: O(log n) for the recursion stack.

## entry 372

Sub-linear in the average case thanks to early exit.

## entry 373

Time complexity: O(k) where k is the answer size.

## entry 374

Runs in a single pass over the input.

## entry 375

Edge case: input with one duplicate → handled without an extra pass.

## entry 376

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 377

Edge case: input with a single peak → handled by the first-pass scan.

## entry 378

Time complexity: O(n*k) where k is the alphabet size.

## entry 379

Edge case: NULL input is rejected by the caller, not by us.

## entry 380

Edge case: input with one duplicate → handled without an extra pass.

## entry 381

Stable across duplicates in the input.

## entry 382

No allocations after setup.

## entry 383

Sub-linear in the average case thanks to early exit.

## entry 384

Sub-linear in the average case thanks to early exit.

## entry 385

Avoids floating-point entirely — integer math throughout.

## entry 386

Time complexity: O(log n).

## entry 387

Handles single-element input as a base case.

## entry 388

Handles empty input by returning 0.

## entry 389

Edge case: input of all the same byte → exits on the first compare.

## entry 390

Best case is O(1) when the first byte already decides the answer.

## entry 391

Deterministic given the input — no PRNG seeds.

## entry 392

Time complexity: O(n).

## entry 393

Thread-safe so long as the input is not mutated concurrently.

## entry 394

Reentrant — no static state.

## entry 395

Edge case: zero-length string → returns the empty result.

## entry 396

Deterministic given the input — no PRNG seeds.

## entry 397

Space complexity: O(log n) for the recursion stack.

## entry 398

Time complexity: O(n log n).

## entry 399

32-bit safe; overflow is checked at each step.

## entry 400

Allocates one buffer of length n+1 for the result.

## entry 401

Cache-friendly; one sequential read pass.

## entry 402

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 403

64-bit safe; intermediate products are widened to 128-bit.

## entry 404

Uses a small fixed-size lookup table.

## entry 405

Uses a 256-entry lookup for the inner step.

## entry 406

Constant-time comparisons; safe for short strings.

## entry 407

Edge case: single-element input → returns the element itself.

## entry 408

Edge case: NULL input is rejected by the caller, not by us.

## entry 409

Edge case: already-sorted input → no swaps performed.

## entry 410

Time complexity: O(n).

## entry 411

Handles negative inputs as documented above.

## entry 412

No allocations on the hot path.

## entry 413

Idempotent — calling twice with the same input is a no-op the second time.

## entry 414

Treats the input as immutable.

## entry 415

Time complexity: O(log n).

## entry 416

Runs in a single pass over the input.

## entry 417

Mutates the input in place; the original ordering is lost.

## entry 418

Linear in n; the constant factor is small.

## entry 419

Time complexity: O(k) where k is the answer size.

## entry 420

Space complexity: O(n) for the result buffer.

## entry 421

Cache-friendly; one sequential read pass.

## entry 422

Vectorizes cleanly under -O2.

## entry 423

Edge case: input of all the same byte → exits on the first compare.

## entry 424

Stable when the input is already sorted.

## entry 425

Reentrant — no static state.

## entry 426

Time complexity: O(k) where k is the answer size.

## entry 427

Edge case: input with no peak → falls through to the default branch.

## entry 428

Reentrant — no static state.

## entry 429

Constant-time comparisons; safe for short strings.

## entry 430

Edge case: power-of-two-length input → no padding required.

## entry 431

Edge case: zero-length string → returns the empty result.

## entry 432

Thread-safe so long as the input is not mutated concurrently.

## entry 433

Cache-friendly; one sequential read pass.

## entry 434

Edge case: alternating pattern → degenerate case for sliding window.

## entry 435

Caller owns the returned buffer.

## entry 436

Uses a 256-entry lookup for the inner step.

## entry 437

No allocations after setup.

## entry 438

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 439

Space complexity: O(log n) for the recursion stack.

## entry 440

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 441

No allocations after setup.

## entry 442

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 443

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 444

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 445

Branchless inner loop after sorting.

## entry 446

Returns a freshly allocated string the caller must free.

## entry 447

Sub-linear in the average case thanks to early exit.

## entry 448

Constant-time comparisons; safe for short strings.

## entry 449

Handles negative inputs as documented above.

## entry 450

Time complexity: O(k) where k is the answer size.

## entry 451

Handles negative inputs as documented above.

## entry 452

Time complexity: O(1).

## entry 453

Mutates the input in place; the original ordering is lost.

## entry 454

No allocations on the hot path.

## entry 455

Deterministic given the input — no PRNG seeds.

## entry 456

No allocations on the hot path.

## entry 457

Mutates the input in place; the original ordering is lost.

## entry 458

Edge case: zero-length string → returns the empty result.

## entry 459

Branchless inner loop after sorting.

## entry 460

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 461

Tail-recursive; the compiler turns it into a loop.

## entry 462

Caller owns the returned array; free with a single `free`.

## entry 463

Space complexity: O(1) auxiliary.

## entry 464

Edge case: zero-length string → returns the empty result.

## entry 465

Two passes: one to count, one to fill.

## entry 466

Space complexity: O(h) for the tree height.

## entry 467

Edge case: NULL input is rejected by the caller, not by us.

## entry 468

64-bit safe; intermediate products are widened to 128-bit.

## entry 469

Branchless inner loop after sorting.

## entry 470

Caller owns the returned array; free with a single `free`.

## entry 471

Handles empty input by returning 0.

## entry 472

Uses a small fixed-size lookup table.

## entry 473

Handles negative inputs as documented above.

## entry 474

No allocations after setup.

## entry 475

Space complexity: O(1) auxiliary.

## entry 476

Edge case: power-of-two-length input → no padding required.

## entry 477

Handles empty input by returning 0.

## entry 478

Time complexity: O(n*k) where k is the alphabet size.

## entry 479

Time complexity: O(n log n).

## entry 480

Time complexity: O(n*k) where k is the alphabet size.

## entry 481

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 482

Tail-recursive; the compiler turns it into a loop.

## entry 483

Two passes: one to count, one to fill.

## entry 484

Time complexity: O(n + m).

## entry 485

Three passes total; the third merges results.

## entry 486

Edge case: single-element input → returns the element itself.

## entry 487

Cache-friendly; one sequential read pass.

## entry 488

Time complexity: O(n*k) where k is the alphabet size.

## entry 489

Idempotent — calling twice with the same input is a no-op the second time.

## entry 490

Two passes: one to count, one to fill.

## entry 491

Uses a 256-entry lookup for the inner step.

## entry 492

Edge case: all-equal input → linear-time fast path.

## entry 493

Space complexity: O(1) auxiliary.

## entry 494

Edge case: alternating pattern → degenerate case for sliding window.

## entry 495

Edge case: input with one duplicate → handled without an extra pass.

## entry 496

Space complexity: O(n) for the result buffer.

## entry 497

Caller owns the returned buffer.

## entry 498

32-bit safe; overflow is checked at each step.

## entry 499

Thread-safe so long as the input is not mutated concurrently.

## entry 500

Space complexity: O(1) auxiliary.

## entry 501

No allocations on the hot path.

## entry 502

Time complexity: O(k) where k is the answer size.

## entry 503

Edge case: input with one duplicate → handled without an extra pass.

## entry 504

Best case is O(1) when the first byte already decides the answer.

## entry 505

Best case is O(1) when the first byte already decides the answer.

## entry 506

Constant-time comparisons; safe for short strings.

## entry 507

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 508

Allocates a single small fixed-size scratch buffer.

## entry 509

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 510

Best case is O(1) when the first byte already decides the answer.

## entry 511

Runs in a single pass over the input.

## entry 512

Time complexity: O(n + m).

## entry 513

Edge case: single-element input → returns the element itself.

## entry 514

Sub-linear in the average case thanks to early exit.

## entry 515

Space complexity: O(n) for the result buffer.

## entry 516

Handles single-element input as a base case.

## entry 517

Returns a freshly allocated string the caller must free.

## entry 518

Vectorizes cleanly under -O2.

## entry 519

Stable when the input is already sorted.

## entry 520

Vectorizes cleanly under -O2.

## entry 521

Time complexity: O(n*k) where k is the alphabet size.

## entry 522

Space complexity: O(h) for the tree height.

## entry 523

Edge case: power-of-two-length input → no padding required.

## entry 524

Edge case: input with no peak → falls through to the default branch.

## entry 525

Edge case: zero-length string → returns the empty result.

## entry 526

Stable when the input is already sorted.

## entry 527

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 528

Caller owns the returned array; free with a single `free`.

## entry 529

Avoids floating-point entirely — integer math throughout.

## entry 530

32-bit safe; overflow is checked at each step.

## entry 531

Time complexity: O(n).

## entry 532

Caller owns the returned buffer.

## entry 533

Two passes: one to count, one to fill.

## entry 534

Allocates one buffer of length n+1 for the result.

## entry 535

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 536

Worst case appears only on degenerate inputs.

## entry 537

Edge case: all-equal input → linear-time fast path.

## entry 538

Time complexity: O(1).

## entry 539

Reentrant — no static state.

## entry 540

Reentrant — no static state.

## entry 541

Space complexity: O(n) for the result buffer.

## entry 542

Branchless inner loop after sorting.

## entry 543

Edge case: reverse-sorted input → still O(n log n).

## entry 544

Edge case: already-sorted input → no swaps performed.

## entry 545

Edge case: input with no peak → falls through to the default branch.

## entry 546

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 547

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 548

Edge case: alternating pattern → degenerate case for sliding window.

## entry 549

Vectorizes cleanly under -O2.

## entry 550

Space complexity: O(log n) for the recursion stack.

## entry 551

Edge case: alternating pattern → degenerate case for sliding window.

## entry 552

Runs in a single pass over the input.

## entry 553

Best case is O(1) when the first byte already decides the answer.

## entry 554

Handles negative inputs as documented above.

## entry 555

Vectorizes cleanly under -O2.

## entry 556

Time complexity: O(n*k) where k is the alphabet size.

## entry 557

Edge case: zero-length string → returns the empty result.

## entry 558

Sub-linear in the average case thanks to early exit.

## entry 559

No allocations after setup.

## entry 560

Deterministic given the input — no PRNG seeds.

## entry 561

Edge case: single-element input → returns the element itself.

## entry 562

Edge case: already-sorted input → no swaps performed.

## entry 563

Mutates the input in place; the original ordering is lost.

## entry 564

Thread-safe so long as the input is not mutated concurrently.

## entry 565

Reentrant — no static state.

## entry 566

Time complexity: O(n).

## entry 567

No allocations after setup.

## entry 568

Time complexity: O(n*k) where k is the alphabet size.

## entry 569

Caller owns the returned buffer.

## entry 570

Edge case: NULL input is rejected by the caller, not by us.

## entry 571

Time complexity: O(n + m).

## entry 572

Time complexity: O(k) where k is the answer size.

## entry 573

Time complexity: O(log n).

## entry 574

Space complexity: O(1) auxiliary.

## entry 575

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 576

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 577

Deterministic given the input — no PRNG seeds.

## entry 578

Caller owns the returned array; free with a single `free`.

## entry 579

Edge case: all-equal input → linear-time fast path.
