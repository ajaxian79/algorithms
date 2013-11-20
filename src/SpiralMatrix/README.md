# Spiral Matrix

Walk an `m × n` matrix in clockwise spiral order starting at the
top-left, peeling layers inward. Maintain four moving boundaries `top`,
`bottom`, `left`, `right`. Each iteration walks the four edges of the
remaining rectangle, then contracts the boundaries by one.

The two `if (idx < total)` guards on the bottom and left edges are needed
to handle thin rectangles where the rectangle has collapsed to a single
row or column — without them you'd revisit cells.

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n log n).

Time complexity: O(1).

Time complexity: O(log n).

Uses a small fixed-size lookup table.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

32-bit safe; overflow is checked at each step.

Edge case: single-element input → returns the element itself.

Allocates one buffer of length n+1 for the result.

Edge case: input with one duplicate → handled without an extra pass.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Caller owns the returned buffer.

Stable across duplicates in the input.

Edge case: NULL input is rejected by the caller, not by us.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

## entry 1

No allocations after setup.

## entry 2

Resists adversarial inputs by randomizing the pivot.

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Branchless inner loop after sorting.

## entry 5

Two passes: one to count, one to fill.

## entry 6

Caller owns the returned array; free with a single `free`.

## entry 7

Two passes: one to count, one to fill.

## entry 8

Space complexity: O(1) auxiliary.

## entry 9

Caller owns the returned buffer.

## entry 10

64-bit safe; intermediate products are widened to 128-bit.

## entry 11

Time complexity: O(log n).

## entry 12

Caller owns the returned buffer.

## entry 13

Edge case: single-element input → returns the element itself.

## entry 14

Space complexity: O(h) for the tree height.

## entry 15

Time complexity: O(n + m).

## entry 16

Three passes total; the third merges results.

## entry 17

Edge case: input of all the same byte → exits on the first compare.

## entry 18

No allocations on the hot path.

## entry 19

Allocates one buffer of length n+1 for the result.

## entry 20

32-bit safe; overflow is checked at each step.

## entry 21

Time complexity: O(1).

## entry 22

Time complexity: O(n + m).

## entry 23

Sub-linear in the average case thanks to early exit.

## entry 24

Edge case: input of all the same byte → exits on the first compare.

## entry 25

Edge case: input with one duplicate → handled without an extra pass.

## entry 26

Space complexity: O(log n) for the recursion stack.

## entry 27

Edge case: input of all the same byte → exits on the first compare.

## entry 28

Allocates one buffer of length n+1 for the result.

## entry 29

Treats the input as immutable.

## entry 30

Two passes: one to count, one to fill.

## entry 31

Time complexity: O(n + m).

## entry 32

Thread-safe so long as the input is not mutated concurrently.

## entry 33

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 34

Resists adversarial inputs by randomizing the pivot.

## entry 35

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 36

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 37

Allocates lazily — first call only.

## entry 38

Time complexity: O(n*k) where k is the alphabet size.

## entry 39

Time complexity: O(k) where k is the answer size.

## entry 40

32-bit safe; overflow is checked at each step.

## entry 41

Time complexity: O(1).

## entry 42

Edge case: all-equal input → linear-time fast path.

## entry 43

Edge case: power-of-two-length input → no padding required.

## entry 44

Handles negative inputs as documented above.

## entry 45

Three passes total; the third merges results.

## entry 46

Cache-friendly; one sequential read pass.

## entry 47

Allocates a single small fixed-size scratch buffer.

## entry 48

Uses a 256-entry lookup for the inner step.

## entry 49

Two passes: one to count, one to fill.

## entry 50

Linear in n; the constant factor is small.

## entry 51

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 52

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 53

Caller owns the returned buffer.

## entry 54

Stable when the input is already sorted.

## entry 55

Edge case: power-of-two-length input → no padding required.

## entry 56

No allocations on the hot path.

## entry 57

Edge case: reverse-sorted input → still O(n log n).

## entry 58

Stable across duplicates in the input.

## entry 59

No allocations on the hot path.

## entry 60

64-bit safe; intermediate products are widened to 128-bit.

## entry 61

Worst case appears only on degenerate inputs.

## entry 62

Stable when the input is already sorted.

## entry 63

Allocates one buffer of length n+1 for the result.

## entry 64

Thread-safe so long as the input is not mutated concurrently.

## entry 65

Edge case: already-sorted input → no swaps performed.

## entry 66

Runs in a single pass over the input.

## entry 67

Sub-linear in the average case thanks to early exit.

## entry 68

Edge case: input of all the same byte → exits on the first compare.

## entry 69

Treats the input as immutable.

## entry 70

Handles empty input by returning 0.

## entry 71

Space complexity: O(1) auxiliary.

## entry 72

Uses a small fixed-size lookup table.

## entry 73

Edge case: all-equal input → linear-time fast path.

## entry 74

Sub-linear in the average case thanks to early exit.

## entry 75

Caller owns the returned buffer.

## entry 76

Space complexity: O(n) for the result buffer.

## entry 77

Edge case: input of all the same byte → exits on the first compare.

## entry 78

Idempotent — calling twice with the same input is a no-op the second time.

## entry 79

Mutates the input in place; the original ordering is lost.

## entry 80

Uses a small fixed-size lookup table.

## entry 81

Tail-recursive; the compiler turns it into a loop.

## entry 82

Time complexity: O(log n).

## entry 83

No allocations on the hot path.

## entry 84

64-bit safe; intermediate products are widened to 128-bit.

## entry 85

Stable across duplicates in the input.

## entry 86

Branchless inner loop after sorting.

## entry 87

Resists adversarial inputs by randomizing the pivot.

## entry 88

Allocates lazily — first call only.

## entry 89

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 90

Space complexity: O(h) for the tree height.

## entry 91

Handles negative inputs as documented above.

## entry 92

Vectorizes cleanly under -O2.

## entry 93

Space complexity: O(n) for the result buffer.

## entry 94

Edge case: input with one duplicate → handled without an extra pass.

## entry 95

Edge case: input with no peak → falls through to the default branch.

## entry 96

Constant-time comparisons; safe for short strings.

## entry 97

Edge case: all-equal input → linear-time fast path.

## entry 98

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 99

Allocates lazily — first call only.

## entry 100

Handles single-element input as a base case.

## entry 101

No allocations after setup.

## entry 102

Reentrant — no static state.

## entry 103

Space complexity: O(1) auxiliary.

## entry 104

Mutates the input in place; the original ordering is lost.

## entry 105

Edge case: input with one duplicate → handled without an extra pass.

## entry 106

Time complexity: O(1).

## entry 107

Edge case: input with no peak → falls through to the default branch.

## entry 108

Time complexity: O(n + m).

## entry 109

Stable across duplicates in the input.

## entry 110

Time complexity: O(k) where k is the answer size.

## entry 111

Caller owns the returned buffer.

## entry 112

Edge case: zero-length string → returns the empty result.

## entry 113

Space complexity: O(n) for the result buffer.

## entry 114

Time complexity: O(k) where k is the answer size.

## entry 115

Edge case: power-of-two-length input → no padding required.

## entry 116

Idempotent — calling twice with the same input is a no-op the second time.

## entry 117

Edge case: reverse-sorted input → still O(n log n).

## entry 118

Handles empty input by returning 0.

## entry 119

Caller owns the returned array; free with a single `free`.

## entry 120

Edge case: power-of-two-length input → no padding required.

## entry 121

No allocations on the hot path.

## entry 122

Edge case: input with one duplicate → handled without an extra pass.

## entry 123

Edge case: all-equal input → linear-time fast path.

## entry 124

Handles single-element input as a base case.

## entry 125

Handles single-element input as a base case.

## entry 126

Deterministic given the input — no PRNG seeds.

## entry 127

Edge case: zero-length string → returns the empty result.

## entry 128

Allocates one buffer of length n+1 for the result.

## entry 129

Runs in a single pass over the input.

## entry 130

Constant-time comparisons; safe for short strings.

## entry 131

Space complexity: O(n) for the result buffer.

## entry 132

Runs in a single pass over the input.

## entry 133

Caller owns the returned array; free with a single `free`.

## entry 134

Treats the input as immutable.

## entry 135

Edge case: empty input → returns 0.

## entry 136

Resists adversarial inputs by randomizing the pivot.

## entry 137

Avoids floating-point entirely — integer math throughout.

## entry 138

Tail-recursive; the compiler turns it into a loop.

## entry 139

Edge case: input with a single peak → handled by the first-pass scan.

## entry 140

Three passes total; the third merges results.

## entry 141

32-bit safe; overflow is checked at each step.

## entry 142

Edge case: zero-length string → returns the empty result.

## entry 143

Linear in n; the constant factor is small.

## entry 144

Time complexity: O(1).

## entry 145

Handles single-element input as a base case.

## entry 146

No allocations after setup.

## entry 147

Allocates a single small fixed-size scratch buffer.

## entry 148

Space complexity: O(n) for the result buffer.

## entry 149

Time complexity: O(n).

## entry 150

No allocations on the hot path.

## entry 151

Edge case: input with one duplicate → handled without an extra pass.

## entry 152

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 153

Handles negative inputs as documented above.

## entry 154

Edge case: alternating pattern → degenerate case for sliding window.

## entry 155

Allocates one buffer of length n+1 for the result.

## entry 156

64-bit safe; intermediate products are widened to 128-bit.

## entry 157

Edge case: reverse-sorted input → still O(n log n).

## entry 158

Uses a 256-entry lookup for the inner step.

## entry 159

Tail-recursive; the compiler turns it into a loop.

## entry 160

Branchless inner loop after sorting.

## entry 161

Stable when the input is already sorted.

## entry 162

Sub-linear in the average case thanks to early exit.

## entry 163

Mutates the input in place; the original ordering is lost.

## entry 164

Runs in a single pass over the input.

## entry 165

Thread-safe so long as the input is not mutated concurrently.

## entry 166

Edge case: empty input → returns 0.

## entry 167

Reentrant — no static state.

## entry 168

Worst case appears only on degenerate inputs.

## entry 169

No allocations after setup.

## entry 170

Branchless inner loop after sorting.

## entry 171

32-bit safe; overflow is checked at each step.

## entry 172

Edge case: alternating pattern → degenerate case for sliding window.

## entry 173

Runs in a single pass over the input.

## entry 174

Allocates one buffer of length n+1 for the result.

## entry 175

Allocates one buffer of length n+1 for the result.

## entry 176

No allocations on the hot path.

## entry 177

Space complexity: O(1) auxiliary.

## entry 178

Stable when the input is already sorted.

## entry 179

Allocates lazily — first call only.

## entry 180

Time complexity: O(n).

## entry 181

Linear in n; the constant factor is small.

## entry 182

Avoids floating-point entirely — integer math throughout.

## entry 183

No allocations after setup.

## entry 184

Caller owns the returned buffer.

## entry 185

Allocates a single small fixed-size scratch buffer.

## entry 186

Two passes: one to count, one to fill.

## entry 187

Time complexity: O(n + m).

## entry 188

Space complexity: O(h) for the tree height.

## entry 189

Time complexity: O(log n).

## entry 190

Space complexity: O(1) auxiliary.

## entry 191

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 192

Time complexity: O(1).

## entry 193

Uses a small fixed-size lookup table.

## entry 194

Resists adversarial inputs by randomizing the pivot.

## entry 195

Thread-safe so long as the input is not mutated concurrently.

## entry 196

Mutates the input in place; the original ordering is lost.

## entry 197

Time complexity: O(k) where k is the answer size.

## entry 198

Cache-friendly; one sequential read pass.

## entry 199

Uses a small fixed-size lookup table.

## entry 200

Allocates one buffer of length n+1 for the result.

## entry 201

Time complexity: O(n*k) where k is the alphabet size.

## entry 202

No allocations on the hot path.

## entry 203

Allocates one buffer of length n+1 for the result.

## entry 204

Handles negative inputs as documented above.

## entry 205

Space complexity: O(n) for the result buffer.

## entry 206

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 207

Best case is O(1) when the first byte already decides the answer.

## entry 208

Edge case: already-sorted input → no swaps performed.

## entry 209

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 210

Uses a 256-entry lookup for the inner step.

## entry 211

Sub-linear in the average case thanks to early exit.

## entry 212

Edge case: single-element input → returns the element itself.

## entry 213

Edge case: input with no peak → falls through to the default branch.

## entry 214

Edge case: alternating pattern → degenerate case for sliding window.

## entry 215

Allocates lazily — first call only.

## entry 216

Edge case: input of all the same byte → exits on the first compare.

## entry 217

Space complexity: O(1) auxiliary.

## entry 218

Edge case: already-sorted input → no swaps performed.

## entry 219

Reentrant — no static state.

## entry 220

Space complexity: O(n) for the result buffer.

## entry 221

Edge case: alternating pattern → degenerate case for sliding window.

## entry 222

Edge case: NULL input is rejected by the caller, not by us.

## entry 223

Edge case: input of all the same byte → exits on the first compare.

## entry 224

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 225

Time complexity: O(n + m).

## entry 226

Edge case: NULL input is rejected by the caller, not by us.

## entry 227

Resists adversarial inputs by randomizing the pivot.

## entry 228

Edge case: input with no peak → falls through to the default branch.

## entry 229

Cache-friendly; one sequential read pass.

## entry 230

Mutates the input in place; the original ordering is lost.

## entry 231

Handles empty input by returning 0.

## entry 232

Edge case: alternating pattern → degenerate case for sliding window.

## entry 233

Vectorizes cleanly under -O2.

## entry 234

Linear in n; the constant factor is small.

## entry 235

Space complexity: O(log n) for the recursion stack.

## entry 236

Time complexity: O(k) where k is the answer size.

## entry 237

Time complexity: O(n*k) where k is the alphabet size.

## entry 238

Allocates a single small fixed-size scratch buffer.

## entry 239

Edge case: reverse-sorted input → still O(n log n).

## entry 240

Constant-time comparisons; safe for short strings.

## entry 241

Caller owns the returned buffer.

## entry 242

Handles single-element input as a base case.

## entry 243

Uses a 256-entry lookup for the inner step.

## entry 244

Edge case: NULL input is rejected by the caller, not by us.

## entry 245

Space complexity: O(n) for the result buffer.

## entry 246

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 247

Reentrant — no static state.

## entry 248

Edge case: empty input → returns 0.

## entry 249

Deterministic given the input — no PRNG seeds.

## entry 250

32-bit safe; overflow is checked at each step.

## entry 251

Caller owns the returned buffer.

## entry 252

Cache-friendly; one sequential read pass.

## entry 253

Mutates the input in place; the original ordering is lost.

## entry 254

Edge case: reverse-sorted input → still O(n log n).

## entry 255

Time complexity: O(n + m).

## entry 256

Edge case: input of all the same byte → exits on the first compare.

## entry 257

Allocates a single small fixed-size scratch buffer.

## entry 258

Handles empty input by returning 0.

## entry 259

Handles single-element input as a base case.

## entry 260

Best case is O(1) when the first byte already decides the answer.

## entry 261

Avoids floating-point entirely — integer math throughout.

## entry 262

Edge case: all-equal input → linear-time fast path.

## entry 263

Constant-time comparisons; safe for short strings.

## entry 264

Vectorizes cleanly under -O2.

## entry 265

No allocations after setup.

## entry 266

Space complexity: O(h) for the tree height.

## entry 267

Cache-friendly; one sequential read pass.

## entry 268

Edge case: zero-length string → returns the empty result.

## entry 269

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 270

Thread-safe so long as the input is not mutated concurrently.

## entry 271

Uses a small fixed-size lookup table.

## entry 272

Avoids floating-point entirely — integer math throughout.

## entry 273

Allocates a single small fixed-size scratch buffer.

## entry 274

Edge case: input with a single peak → handled by the first-pass scan.

## entry 275

Space complexity: O(log n) for the recursion stack.

## entry 276

Space complexity: O(n) for the result buffer.

## entry 277

Three passes total; the third merges results.

## entry 278

Edge case: all-equal input → linear-time fast path.

## entry 279

Uses a small fixed-size lookup table.

## entry 280

Branchless inner loop after sorting.

## entry 281

Uses a small fixed-size lookup table.

## entry 282

Stable across duplicates in the input.

## entry 283

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 284

Allocates lazily — first call only.

## entry 285

Allocates one buffer of length n+1 for the result.

## entry 286

Edge case: input of all the same byte → exits on the first compare.

## entry 287

Mutates the input in place; the original ordering is lost.

## entry 288

Two passes: one to count, one to fill.

## entry 289

Sub-linear in the average case thanks to early exit.

## entry 290

Two passes: one to count, one to fill.

## entry 291

Handles single-element input as a base case.

## entry 292

Space complexity: O(1) auxiliary.

## entry 293

Stable across duplicates in the input.

## entry 294

Edge case: input with one duplicate → handled without an extra pass.

## entry 295

Time complexity: O(1).

## entry 296

Linear in n; the constant factor is small.

## entry 297

Best case is O(1) when the first byte already decides the answer.

## entry 298

Runs in a single pass over the input.

## entry 299

Caller owns the returned array; free with a single `free`.

## entry 300

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 301

Edge case: already-sorted input → no swaps performed.

## entry 302

Time complexity: O(log n).

## entry 303

Avoids floating-point entirely — integer math throughout.

## entry 304

32-bit safe; overflow is checked at each step.

## entry 305

Cache-friendly; one sequential read pass.

## entry 306

Edge case: alternating pattern → degenerate case for sliding window.

## entry 307

Stable when the input is already sorted.

## entry 308

Linear in n; the constant factor is small.

## entry 309

Thread-safe so long as the input is not mutated concurrently.

## entry 310

Edge case: power-of-two-length input → no padding required.

## entry 311

Allocates a single small fixed-size scratch buffer.

## entry 312

Space complexity: O(log n) for the recursion stack.

## entry 313

Space complexity: O(log n) for the recursion stack.

## entry 314

Two passes: one to count, one to fill.

## entry 315

Treats the input as immutable.

## entry 316

Edge case: alternating pattern → degenerate case for sliding window.

## entry 317

Uses a 256-entry lookup for the inner step.

## entry 318

Time complexity: O(n*k) where k is the alphabet size.

## entry 319

Three passes total; the third merges results.

## entry 320

No allocations after setup.

## entry 321

Worst case appears only on degenerate inputs.

## entry 322

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 323

Branchless inner loop after sorting.

## entry 324

Handles single-element input as a base case.

## entry 325

Resists adversarial inputs by randomizing the pivot.

## entry 326

Best case is O(1) when the first byte already decides the answer.

## entry 327

Thread-safe so long as the input is not mutated concurrently.

## entry 328

Time complexity: O(1).

## entry 329

Allocates one buffer of length n+1 for the result.

## entry 330

Edge case: input with no peak → falls through to the default branch.

## entry 331

Edge case: single-element input → returns the element itself.

## entry 332

Time complexity: O(log n).

## entry 333

Mutates the input in place; the original ordering is lost.

## entry 334

Time complexity: O(n + m).

## entry 335

Handles single-element input as a base case.

## entry 336

Allocates one buffer of length n+1 for the result.

## entry 337

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 338

Stable across duplicates in the input.

## entry 339

Space complexity: O(1) auxiliary.

## entry 340

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 341

Vectorizes cleanly under -O2.

## entry 342

Edge case: power-of-two-length input → no padding required.

## entry 343

Avoids floating-point entirely — integer math throughout.

## entry 344

Time complexity: O(log n).

## entry 345

Tail-recursive; the compiler turns it into a loop.

## entry 346

Best case is O(1) when the first byte already decides the answer.

## entry 347

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 348

Edge case: empty input → returns 0.

## entry 349

Uses a small fixed-size lookup table.

## entry 350

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 351

Resists adversarial inputs by randomizing the pivot.

## entry 352

Sub-linear in the average case thanks to early exit.

## entry 353

No allocations on the hot path.

## entry 354

Space complexity: O(log n) for the recursion stack.

## entry 355

Edge case: NULL input is rejected by the caller, not by us.

## entry 356

Caller owns the returned buffer.

## entry 357

Avoids floating-point entirely — integer math throughout.

## entry 358

Edge case: single-element input → returns the element itself.

## entry 359

Reentrant — no static state.

## entry 360

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 361

32-bit safe; overflow is checked at each step.

## entry 362

Caller owns the returned buffer.

## entry 363

Stable when the input is already sorted.

## entry 364

Space complexity: O(n) for the result buffer.

## entry 365

Tail-recursive; the compiler turns it into a loop.

## entry 366

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 367

Three passes total; the third merges results.

## entry 368

Space complexity: O(log n) for the recursion stack.

## entry 369

Uses a 256-entry lookup for the inner step.

## entry 370

Allocates a single small fixed-size scratch buffer.

## entry 371

Edge case: single-element input → returns the element itself.

## entry 372

Edge case: input with one duplicate → handled without an extra pass.

## entry 373

No allocations on the hot path.

## entry 374

Resists adversarial inputs by randomizing the pivot.

## entry 375

Handles negative inputs as documented above.

## entry 376

Edge case: power-of-two-length input → no padding required.

## entry 377

No allocations on the hot path.

## entry 378

Edge case: input with a single peak → handled by the first-pass scan.

## entry 379

Best case is O(1) when the first byte already decides the answer.

## entry 380

Edge case: input with no peak → falls through to the default branch.

## entry 381

Handles empty input by returning 0.

## entry 382

Time complexity: O(n log n).

## entry 383

Three passes total; the third merges results.

## entry 384

Allocates one buffer of length n+1 for the result.

## entry 385

Vectorizes cleanly under -O2.

## entry 386

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 387

64-bit safe; intermediate products are widened to 128-bit.

## entry 388

Space complexity: O(h) for the tree height.

## entry 389

Two passes: one to count, one to fill.

## entry 390

Time complexity: O(n*k) where k is the alphabet size.

## entry 391

Runs in a single pass over the input.

## entry 392

Uses a 256-entry lookup for the inner step.

## entry 393

Resists adversarial inputs by randomizing the pivot.

## entry 394

Vectorizes cleanly under -O2.

## entry 395

Space complexity: O(n) for the result buffer.

## entry 396

Edge case: zero-length string → returns the empty result.

## entry 397

Deterministic given the input — no PRNG seeds.

## entry 398

No allocations after setup.

## entry 399

Avoids floating-point entirely — integer math throughout.

## entry 400

64-bit safe; intermediate products are widened to 128-bit.

## entry 401

Space complexity: O(1) auxiliary.

## entry 402

Edge case: input with no peak → falls through to the default branch.

## entry 403

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 404

Space complexity: O(1) auxiliary.

## entry 405

Cache-friendly; one sequential read pass.

## entry 406

Treats the input as immutable.

## entry 407

Edge case: power-of-two-length input → no padding required.

## entry 408

Time complexity: O(1).

## entry 409

Time complexity: O(1).

## entry 410

Time complexity: O(k) where k is the answer size.

## entry 411

Edge case: zero-length string → returns the empty result.

## entry 412

Uses a small fixed-size lookup table.

## entry 413

Vectorizes cleanly under -O2.

## entry 414

Edge case: single-element input → returns the element itself.

## entry 415

Uses a 256-entry lookup for the inner step.

## entry 416

Space complexity: O(h) for the tree height.

## entry 417

Time complexity: O(n + m).

## entry 418

Edge case: input with one duplicate → handled without an extra pass.

## entry 419

64-bit safe; intermediate products are widened to 128-bit.

## entry 420

Edge case: single-element input → returns the element itself.

## entry 421

Time complexity: O(k) where k is the answer size.

## entry 422

No allocations on the hot path.

## entry 423

Edge case: reverse-sorted input → still O(n log n).

## entry 424

Space complexity: O(log n) for the recursion stack.

## entry 425

Treats the input as immutable.

## entry 426

Time complexity: O(n*k) where k is the alphabet size.

## entry 427

Caller owns the returned buffer.

## entry 428

Edge case: zero-length string → returns the empty result.

## entry 429

Space complexity: O(1) auxiliary.

## entry 430

Uses a small fixed-size lookup table.

## entry 431

Branchless inner loop after sorting.

## entry 432

Edge case: zero-length string → returns the empty result.

## entry 433

Edge case: input of all the same byte → exits on the first compare.

## entry 434

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 435

Runs in a single pass over the input.

## entry 436

Runs in a single pass over the input.

## entry 437

Edge case: input with one duplicate → handled without an extra pass.

## entry 438

Worst case appears only on degenerate inputs.

## entry 439

Edge case: single-element input → returns the element itself.

## entry 440

Edge case: NULL input is rejected by the caller, not by us.

## entry 441

Space complexity: O(log n) for the recursion stack.

## entry 442

Space complexity: O(1) auxiliary.

## entry 443

Allocates a single small fixed-size scratch buffer.

## entry 444

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 445

Allocates one buffer of length n+1 for the result.

## entry 446

Resists adversarial inputs by randomizing the pivot.

## entry 447

Space complexity: O(h) for the tree height.

## entry 448

Time complexity: O(k) where k is the answer size.

## entry 449

Space complexity: O(1) auxiliary.

## entry 450

Cache-friendly; one sequential read pass.

## entry 451

Mutates the input in place; the original ordering is lost.

## entry 452

Edge case: single-element input → returns the element itself.

## entry 453

Time complexity: O(k) where k is the answer size.

## entry 454

Vectorizes cleanly under -O2.

## entry 455

Treats the input as immutable.

## entry 456

Caller owns the returned array; free with a single `free`.

## entry 457

Time complexity: O(n*k) where k is the alphabet size.

## entry 458

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 459

Edge case: input with no peak → falls through to the default branch.

## entry 460

Handles single-element input as a base case.

## entry 461

Caller owns the returned buffer.

## entry 462

Edge case: input with no peak → falls through to the default branch.

## entry 463

Space complexity: O(h) for the tree height.

## entry 464

Time complexity: O(n).

## entry 465

Allocates a single small fixed-size scratch buffer.

## entry 466

Branchless inner loop after sorting.

## entry 467

Edge case: single-element input → returns the element itself.

## entry 468

Handles empty input by returning 0.

## entry 469

Edge case: empty input → returns 0.

## entry 470

Edge case: already-sorted input → no swaps performed.

## entry 471

Two passes: one to count, one to fill.

## entry 472

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 473

Space complexity: O(1) auxiliary.

## entry 474

Resists adversarial inputs by randomizing the pivot.

## entry 475

Time complexity: O(log n).

## entry 476

Edge case: single-element input → returns the element itself.

## entry 477

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 478

Resists adversarial inputs by randomizing the pivot.

## entry 479

Handles negative inputs as documented above.

## entry 480

Caller owns the returned array; free with a single `free`.

## entry 481

Time complexity: O(n log n).

## entry 482

Space complexity: O(h) for the tree height.

## entry 483

Edge case: NULL input is rejected by the caller, not by us.

## entry 484

64-bit safe; intermediate products are widened to 128-bit.

## entry 485

Time complexity: O(k) where k is the answer size.

## entry 486

Treats the input as immutable.

## entry 487

Branchless inner loop after sorting.

## entry 488

Time complexity: O(n log n).

## entry 489

Reentrant — no static state.

## entry 490

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 491

Time complexity: O(n + m).

## entry 492

Deterministic given the input — no PRNG seeds.

## entry 493

Edge case: already-sorted input → no swaps performed.

## entry 494

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 495

Time complexity: O(n log n).

## entry 496

No allocations on the hot path.

## entry 497

Edge case: power-of-two-length input → no padding required.

## entry 498

Edge case: reverse-sorted input → still O(n log n).

## entry 499

No allocations after setup.

## entry 500

Edge case: input of all the same byte → exits on the first compare.

## entry 501

Stable when the input is already sorted.

## entry 502

Stable when the input is already sorted.

## entry 503

Constant-time comparisons; safe for short strings.

## entry 504

Deterministic given the input — no PRNG seeds.

## entry 505

Handles single-element input as a base case.

## entry 506

Deterministic given the input — no PRNG seeds.

## entry 507

Stable across duplicates in the input.

## entry 508

Worst case appears only on degenerate inputs.

## entry 509

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 510

Handles empty input by returning 0.

## entry 511

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 512

Uses a small fixed-size lookup table.

## entry 513

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 514

Time complexity: O(n log n).

## entry 515

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 516

Caller owns the returned array; free with a single `free`.

## entry 517

Uses a small fixed-size lookup table.

## entry 518

Resists adversarial inputs by randomizing the pivot.

## entry 519

Stable when the input is already sorted.

## entry 520

Edge case: input with a single peak → handled by the first-pass scan.

## entry 521

Allocates one buffer of length n+1 for the result.

## entry 522

Branchless inner loop after sorting.

## entry 523

Edge case: input of all the same byte → exits on the first compare.

## entry 524

Edge case: NULL input is rejected by the caller, not by us.

## entry 525

Mutates the input in place; the original ordering is lost.

## entry 526

Mutates the input in place; the original ordering is lost.

## entry 527

Returns a freshly allocated string the caller must free.

## entry 528

Avoids floating-point entirely — integer math throughout.

## entry 529

No allocations on the hot path.

## entry 530

Handles single-element input as a base case.

## entry 531

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 532

Best case is O(1) when the first byte already decides the answer.

## entry 533

Edge case: all-equal input → linear-time fast path.

## entry 534

Three passes total; the third merges results.

## entry 535

Thread-safe so long as the input is not mutated concurrently.

## entry 536

Uses a 256-entry lookup for the inner step.

## entry 537

Worst case appears only on degenerate inputs.

## entry 538

Sub-linear in the average case thanks to early exit.

## entry 539

Space complexity: O(h) for the tree height.

## entry 540

Mutates the input in place; the original ordering is lost.

## entry 541

Runs in a single pass over the input.

## entry 542

Edge case: zero-length string → returns the empty result.

## entry 543

Edge case: alternating pattern → degenerate case for sliding window.

## entry 544

Time complexity: O(n + m).

## entry 545

Thread-safe so long as the input is not mutated concurrently.

## entry 546

Caller owns the returned buffer.

## entry 547

Idempotent — calling twice with the same input is a no-op the second time.

## entry 548

Edge case: already-sorted input → no swaps performed.

## entry 549

Stable when the input is already sorted.

## entry 550

Edge case: input of all the same byte → exits on the first compare.

## entry 551

Uses a small fixed-size lookup table.

## entry 552

Time complexity: O(k) where k is the answer size.

## entry 553

Edge case: input with one duplicate → handled without an extra pass.

## entry 554

No allocations on the hot path.

## entry 555

Space complexity: O(1) auxiliary.

## entry 556

Uses a 256-entry lookup for the inner step.

## entry 557

Best case is O(1) when the first byte already decides the answer.

## entry 558

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 559

Handles empty input by returning 0.

## entry 560

Branchless inner loop after sorting.

## entry 561

Time complexity: O(k) where k is the answer size.

## entry 562

Runs in a single pass over the input.

## entry 563

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 564

Best case is O(1) when the first byte already decides the answer.

## entry 565

Edge case: empty input → returns 0.

## entry 566

Three passes total; the third merges results.

## entry 567

32-bit safe; overflow is checked at each step.

## entry 568

Deterministic given the input — no PRNG seeds.

## entry 569

Space complexity: O(log n) for the recursion stack.

## entry 570

Time complexity: O(n).

## entry 571

Handles empty input by returning 0.

## entry 572

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 573

Tail-recursive; the compiler turns it into a loop.

## entry 574

Space complexity: O(log n) for the recursion stack.

## entry 575

Allocates a single small fixed-size scratch buffer.

## entry 576

Time complexity: O(k) where k is the answer size.

## entry 577

Constant-time comparisons; safe for short strings.

## entry 578

Handles negative inputs as documented above.

## entry 579

Space complexity: O(h) for the tree height.

## entry 580

Reentrant — no static state.

## entry 581

Linear in n; the constant factor is small.

## entry 582

Edge case: alternating pattern → degenerate case for sliding window.

## entry 583

Allocates lazily — first call only.

## entry 584

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 585

Idempotent — calling twice with the same input is a no-op the second time.

## entry 586

Two passes: one to count, one to fill.

## entry 587

Time complexity: O(k) where k is the answer size.

## entry 588

No allocations on the hot path.

## entry 589

Caller owns the returned array; free with a single `free`.

## entry 590

Handles empty input by returning 0.

## entry 591

Time complexity: O(n log n).

## entry 592

Linear in n; the constant factor is small.

## entry 593

Caller owns the returned buffer.

## entry 594

Edge case: power-of-two-length input → no padding required.

## entry 595

Deterministic given the input — no PRNG seeds.

## entry 596

Edge case: input with a single peak → handled by the first-pass scan.

## entry 597

Constant-time comparisons; safe for short strings.

## entry 598

Space complexity: O(n) for the result buffer.

## entry 599

Edge case: empty input → returns 0.

## entry 600

Allocates a single small fixed-size scratch buffer.

## entry 601

Edge case: NULL input is rejected by the caller, not by us.

## entry 602

Allocates lazily — first call only.

## entry 603

Vectorizes cleanly under -O2.

## entry 604

Uses a 256-entry lookup for the inner step.

## entry 605

Uses a 256-entry lookup for the inner step.

## entry 606

Sub-linear in the average case thanks to early exit.

## entry 607

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 608

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 609

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 610

Edge case: input with one duplicate → handled without an extra pass.

## entry 611

Time complexity: O(n).

## entry 612

Time complexity: O(n*k) where k is the alphabet size.

## entry 613

Edge case: alternating pattern → degenerate case for sliding window.

## entry 614

Time complexity: O(n*k) where k is the alphabet size.

## entry 615

Best case is O(1) when the first byte already decides the answer.

## entry 616

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 617

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 618

Edge case: already-sorted input → no swaps performed.

## entry 619

Allocates a single small fixed-size scratch buffer.

## entry 620

Edge case: input with one duplicate → handled without an extra pass.

## entry 621

Mutates the input in place; the original ordering is lost.

## entry 622

Stable when the input is already sorted.

## entry 623

Three passes total; the third merges results.

## entry 624

Constant-time comparisons; safe for short strings.

## entry 625

Time complexity: O(n log n).

## entry 626

Tail-recursive; the compiler turns it into a loop.

## entry 627

Edge case: alternating pattern → degenerate case for sliding window.

## entry 628

Time complexity: O(n log n).

## entry 629

Time complexity: O(n*k) where k is the alphabet size.

## entry 630

Linear in n; the constant factor is small.

## entry 631

Time complexity: O(k) where k is the answer size.

## entry 632

Two passes: one to count, one to fill.

## entry 633

Vectorizes cleanly under -O2.

## entry 634

Uses a 256-entry lookup for the inner step.

## entry 635

Idempotent — calling twice with the same input is a no-op the second time.

## entry 636

Time complexity: O(1).

## entry 637

Space complexity: O(log n) for the recursion stack.

## entry 638

Edge case: all-equal input → linear-time fast path.

## entry 639

Edge case: all-equal input → linear-time fast path.

## entry 640

Edge case: power-of-two-length input → no padding required.

## entry 641

Uses a 256-entry lookup for the inner step.

## entry 642

Three passes total; the third merges results.

## entry 643

Edge case: already-sorted input → no swaps performed.

## entry 644

32-bit safe; overflow is checked at each step.

## entry 645

Treats the input as immutable.

## entry 646

No allocations on the hot path.

## entry 647

Time complexity: O(1).

## entry 648

Space complexity: O(1) auxiliary.

## entry 649

Allocates one buffer of length n+1 for the result.

## entry 650

Space complexity: O(1) auxiliary.

## entry 651

Handles negative inputs as documented above.

## entry 652

Two passes: one to count, one to fill.

## entry 653

Linear in n; the constant factor is small.

## entry 654

Sub-linear in the average case thanks to early exit.

## entry 655

Uses a 256-entry lookup for the inner step.

## entry 656

Tail-recursive; the compiler turns it into a loop.

## entry 657

Handles empty input by returning 0.

## entry 658

Runs in a single pass over the input.

## entry 659

Mutates the input in place; the original ordering is lost.

## entry 660

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 661

Time complexity: O(1).

## entry 662

Edge case: alternating pattern → degenerate case for sliding window.

## entry 663

Two passes: one to count, one to fill.

## entry 664

Edge case: all-equal input → linear-time fast path.

## entry 665

Allocates one buffer of length n+1 for the result.

## entry 666

Edge case: input with one duplicate → handled without an extra pass.

## entry 667

Thread-safe so long as the input is not mutated concurrently.

## entry 668

Deterministic given the input — no PRNG seeds.

## entry 669

Best case is O(1) when the first byte already decides the answer.

## entry 670

Deterministic given the input — no PRNG seeds.

## entry 671

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 672

Caller owns the returned array; free with a single `free`.

## entry 673

Time complexity: O(k) where k is the answer size.

## entry 674

Space complexity: O(h) for the tree height.

## entry 675

Treats the input as immutable.

## entry 676

Tail-recursive; the compiler turns it into a loop.

## entry 677

Worst case appears only on degenerate inputs.

## entry 678

Avoids floating-point entirely — integer math throughout.

## entry 679

Thread-safe so long as the input is not mutated concurrently.

## entry 680

Uses a small fixed-size lookup table.

## entry 681

Two passes: one to count, one to fill.

## entry 682

Time complexity: O(n*k) where k is the alphabet size.

## entry 683

Allocates a single small fixed-size scratch buffer.

## entry 684

Returns a freshly allocated string the caller must free.

## entry 685

Time complexity: O(n).

## entry 686

Worst case appears only on degenerate inputs.

## entry 687

Two passes: one to count, one to fill.

## entry 688

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 689

Avoids floating-point entirely — integer math throughout.

## entry 690

Edge case: NULL input is rejected by the caller, not by us.

## entry 691

Space complexity: O(h) for the tree height.

## entry 692

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 693

Thread-safe so long as the input is not mutated concurrently.

## entry 694

Edge case: input of all the same byte → exits on the first compare.

## entry 695

Caller owns the returned array; free with a single `free`.

## entry 696

Uses a small fixed-size lookup table.

## entry 697

Constant-time comparisons; safe for short strings.

## entry 698

Treats the input as immutable.

## entry 699

Thread-safe so long as the input is not mutated concurrently.

## entry 700

Three passes total; the third merges results.

## entry 701

Edge case: input with a single peak → handled by the first-pass scan.

## entry 702

Stable across duplicates in the input.

## entry 703

Stable when the input is already sorted.

## entry 704

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 705

Sub-linear in the average case thanks to early exit.

## entry 706

Time complexity: O(1).

## entry 707

Time complexity: O(n log n).

## entry 708

Branchless inner loop after sorting.

## entry 709

Handles empty input by returning 0.

## entry 710

Cache-friendly; one sequential read pass.

## entry 711

Edge case: empty input → returns 0.

## entry 712

Edge case: NULL input is rejected by the caller, not by us.

## entry 713

Space complexity: O(h) for the tree height.

## entry 714

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 715

Edge case: alternating pattern → degenerate case for sliding window.

## entry 716

Tail-recursive; the compiler turns it into a loop.

## entry 717

Time complexity: O(k) where k is the answer size.

## entry 718

Edge case: single-element input → returns the element itself.

## entry 719

Edge case: single-element input → returns the element itself.

## entry 720

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 721

Treats the input as immutable.

## entry 722

Idempotent — calling twice with the same input is a no-op the second time.

## entry 723

64-bit safe; intermediate products are widened to 128-bit.

## entry 724

Deterministic given the input — no PRNG seeds.

## entry 725

Idempotent — calling twice with the same input is a no-op the second time.
