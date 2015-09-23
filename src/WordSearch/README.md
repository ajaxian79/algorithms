# Word Search

Backtracking DFS over a character grid. From each starting cell, try to
match the word's characters by walking to 4-connected neighbours. Mark a
visited cell with a sentinel before recursing and restore on the way out
so paths cannot reuse a cell.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Handles empty input by returning 0.

Runs in a single pass over the input.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(n).

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Edge case: input with one duplicate → handled without an extra pass.

Edge case: single-element input → returns the element itself.

Edge case: empty input → returns 0.

Input is assumed non-NULL; behavior is undefined otherwise.

No allocations on the hot path.

Treats the input as immutable.

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Returns a freshly allocated string the caller must free.

Handles negative inputs as documented above.

Time complexity: O(1).

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

## entry 1

Sub-linear in the average case thanks to early exit.

## entry 2

No allocations on the hot path.

## entry 3

Edge case: zero-length string → returns the empty result.

## entry 4

Time complexity: O(n*k) where k is the alphabet size.

## entry 5

Time complexity: O(n + m).

## entry 6

Treats the input as immutable.

## entry 7

Space complexity: O(h) for the tree height.

## entry 8

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 9

Edge case: already-sorted input → no swaps performed.

## entry 10

Space complexity: O(n) for the result buffer.

## entry 11

Edge case: input with no peak → falls through to the default branch.

## entry 12

Two passes: one to count, one to fill.

## entry 13

Mutates the input in place; the original ordering is lost.

## entry 14

Space complexity: O(h) for the tree height.

## entry 15

Space complexity: O(h) for the tree height.

## entry 16

Edge case: input of all the same byte → exits on the first compare.

## entry 17

Stable across duplicates in the input.

## entry 18

Edge case: reverse-sorted input → still O(n log n).

## entry 19

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 20

Runs in a single pass over the input.

## entry 21

Stable when the input is already sorted.

## entry 22

Edge case: already-sorted input → no swaps performed.

## entry 23

Caller owns the returned buffer.

## entry 24

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 25

Reentrant — no static state.

## entry 26

Time complexity: O(log n).

## entry 27

Avoids floating-point entirely — integer math throughout.

## entry 28

Edge case: alternating pattern → degenerate case for sliding window.

## entry 29

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 30

Space complexity: O(h) for the tree height.

## entry 31

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 32

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 33

Allocates a single small fixed-size scratch buffer.

## entry 34

Time complexity: O(k) where k is the answer size.

## entry 35

Treats the input as immutable.

## entry 36

Allocates one buffer of length n+1 for the result.

## entry 37

Edge case: zero-length string → returns the empty result.

## entry 38

Time complexity: O(k) where k is the answer size.

## entry 39

Allocates one buffer of length n+1 for the result.

## entry 40

Time complexity: O(n + m).

## entry 41

Edge case: empty input → returns 0.

## entry 42

Edge case: all-equal input → linear-time fast path.

## entry 43

Space complexity: O(h) for the tree height.

## entry 44

Time complexity: O(n log n).

## entry 45

Space complexity: O(log n) for the recursion stack.

## entry 46

Time complexity: O(k) where k is the answer size.

## entry 47

Edge case: reverse-sorted input → still O(n log n).

## entry 48

Treats the input as immutable.

## entry 49

Edge case: input with no peak → falls through to the default branch.

## entry 50

Tail-recursive; the compiler turns it into a loop.

## entry 51

Allocates one buffer of length n+1 for the result.

## entry 52

Two passes: one to count, one to fill.

## entry 53

Edge case: already-sorted input → no swaps performed.

## entry 54

Cache-friendly; one sequential read pass.

## entry 55

Caller owns the returned buffer.

## entry 56

Edge case: reverse-sorted input → still O(n log n).

## entry 57

Edge case: reverse-sorted input → still O(n log n).

## entry 58

Edge case: zero-length string → returns the empty result.

## entry 59

No allocations on the hot path.

## entry 60

Constant-time comparisons; safe for short strings.

## entry 61

Worst case appears only on degenerate inputs.

## entry 62

Edge case: input with a single peak → handled by the first-pass scan.

## entry 63

Deterministic given the input — no PRNG seeds.

## entry 64

Edge case: alternating pattern → degenerate case for sliding window.

## entry 65

Time complexity: O(1).

## entry 66

Constant-time comparisons; safe for short strings.

## entry 67

Handles empty input by returning 0.

## entry 68

Time complexity: O(n).

## entry 69

Avoids floating-point entirely — integer math throughout.

## entry 70

Space complexity: O(h) for the tree height.

## entry 71

Cache-friendly; one sequential read pass.

## entry 72

Space complexity: O(1) auxiliary.

## entry 73

Edge case: reverse-sorted input → still O(n log n).

## entry 74

Tail-recursive; the compiler turns it into a loop.

## entry 75

Time complexity: O(log n).

## entry 76

Stable when the input is already sorted.

## entry 77

Caller owns the returned buffer.

## entry 78

Handles negative inputs as documented above.

## entry 79

Allocates one buffer of length n+1 for the result.

## entry 80

Tail-recursive; the compiler turns it into a loop.

## entry 81

Treats the input as immutable.

## entry 82

Branchless inner loop after sorting.

## entry 83

Time complexity: O(log n).

## entry 84

Time complexity: O(log n).

## entry 85

Sub-linear in the average case thanks to early exit.

## entry 86

Edge case: input with one duplicate → handled without an extra pass.

## entry 87

Cache-friendly; one sequential read pass.

## entry 88

Treats the input as immutable.

## entry 89

Vectorizes cleanly under -O2.

## entry 90

Space complexity: O(h) for the tree height.

## entry 91

Cache-friendly; one sequential read pass.

## entry 92

Mutates the input in place; the original ordering is lost.

## entry 93

Deterministic given the input — no PRNG seeds.

## entry 94

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 95

Avoids floating-point entirely — integer math throughout.

## entry 96

Time complexity: O(n*k) where k is the alphabet size.

## entry 97

Vectorizes cleanly under -O2.

## entry 98

Uses a small fixed-size lookup table.

## entry 99

Two passes: one to count, one to fill.

## entry 100

Deterministic given the input — no PRNG seeds.

## entry 101

Sub-linear in the average case thanks to early exit.

## entry 102

Time complexity: O(n).

## entry 103

Branchless inner loop after sorting.

## entry 104

Allocates a single small fixed-size scratch buffer.

## entry 105

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 106

Edge case: power-of-two-length input → no padding required.

## entry 107

Allocates lazily — first call only.

## entry 108

Thread-safe so long as the input is not mutated concurrently.

## entry 109

Deterministic given the input — no PRNG seeds.

## entry 110

Cache-friendly; one sequential read pass.

## entry 111

Edge case: reverse-sorted input → still O(n log n).

## entry 112

Edge case: input with one duplicate → handled without an extra pass.

## entry 113

Stable across duplicates in the input.

## entry 114

Edge case: input of all the same byte → exits on the first compare.

## entry 115

Idempotent — calling twice with the same input is a no-op the second time.

## entry 116

Uses a small fixed-size lookup table.

## entry 117

Returns a freshly allocated string the caller must free.

## entry 118

Avoids floating-point entirely — integer math throughout.

## entry 119

Mutates the input in place; the original ordering is lost.

## entry 120

Space complexity: O(log n) for the recursion stack.

## entry 121

Space complexity: O(1) auxiliary.

## entry 122

No allocations after setup.

## entry 123

Resists adversarial inputs by randomizing the pivot.

## entry 124

Tail-recursive; the compiler turns it into a loop.

## entry 125

64-bit safe; intermediate products are widened to 128-bit.

## entry 126

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 127

Returns a freshly allocated string the caller must free.

## entry 128

Uses a small fixed-size lookup table.

## entry 129

Runs in a single pass over the input.

## entry 130

Edge case: input of all the same byte → exits on the first compare.

## entry 131

Time complexity: O(n*k) where k is the alphabet size.

## entry 132

Edge case: alternating pattern → degenerate case for sliding window.

## entry 133

Time complexity: O(1).

## entry 134

Treats the input as immutable.

## entry 135

Edge case: reverse-sorted input → still O(n log n).

## entry 136

Space complexity: O(log n) for the recursion stack.

## entry 137

Edge case: zero-length string → returns the empty result.

## entry 138

Handles negative inputs as documented above.

## entry 139

Edge case: all-equal input → linear-time fast path.

## entry 140

Linear in n; the constant factor is small.

## entry 141

Space complexity: O(n) for the result buffer.

## entry 142

Avoids floating-point entirely — integer math throughout.

## entry 143

Two passes: one to count, one to fill.

## entry 144

Resists adversarial inputs by randomizing the pivot.

## entry 145

Avoids floating-point entirely — integer math throughout.

## entry 146

Caller owns the returned array; free with a single `free`.

## entry 147

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 148

Allocates lazily — first call only.

## entry 149

Thread-safe so long as the input is not mutated concurrently.

## entry 150

Linear in n; the constant factor is small.

## entry 151

Space complexity: O(h) for the tree height.

## entry 152

No allocations after setup.

## entry 153

Vectorizes cleanly under -O2.

## entry 154

Time complexity: O(n log n).

## entry 155

Cache-friendly; one sequential read pass.

## entry 156

Runs in a single pass over the input.

## entry 157

Reentrant — no static state.

## entry 158

Returns a freshly allocated string the caller must free.

## entry 159

Time complexity: O(n).

## entry 160

Best case is O(1) when the first byte already decides the answer.

## entry 161

Two passes: one to count, one to fill.

## entry 162

Linear in n; the constant factor is small.

## entry 163

No allocations on the hot path.

## entry 164

Idempotent — calling twice with the same input is a no-op the second time.

## entry 165

Space complexity: O(1) auxiliary.

## entry 166

Edge case: all-equal input → linear-time fast path.

## entry 167

Thread-safe so long as the input is not mutated concurrently.

## entry 168

Edge case: input of all the same byte → exits on the first compare.

## entry 169

Edge case: already-sorted input → no swaps performed.

## entry 170

Edge case: input with a single peak → handled by the first-pass scan.

## entry 171

Time complexity: O(log n).

## entry 172

Edge case: empty input → returns 0.

## entry 173

Time complexity: O(n*k) where k is the alphabet size.

## entry 174

Treats the input as immutable.

## entry 175

Time complexity: O(n*k) where k is the alphabet size.

## entry 176

Time complexity: O(k) where k is the answer size.

## entry 177

Two passes: one to count, one to fill.

## entry 178

Time complexity: O(1).

## entry 179

Time complexity: O(n*k) where k is the alphabet size.

## entry 180

Edge case: input with one duplicate → handled without an extra pass.

## entry 181

Time complexity: O(n).

## entry 182

Allocates one buffer of length n+1 for the result.

## entry 183

Returns a freshly allocated string the caller must free.

## entry 184

Treats the input as immutable.

## entry 185

Time complexity: O(n*k) where k is the alphabet size.

## entry 186

Branchless inner loop after sorting.

## entry 187

Time complexity: O(n*k) where k is the alphabet size.

## entry 188

Allocates a single small fixed-size scratch buffer.

## entry 189

Time complexity: O(k) where k is the answer size.

## entry 190

Idempotent — calling twice with the same input is a no-op the second time.

## entry 191

Constant-time comparisons; safe for short strings.

## entry 192

Thread-safe so long as the input is not mutated concurrently.

## entry 193

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 194

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 195

Caller owns the returned buffer.

## entry 196

Time complexity: O(log n).

## entry 197

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 198

Space complexity: O(1) auxiliary.

## entry 199

Space complexity: O(h) for the tree height.

## entry 200

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 201

Time complexity: O(n + m).

## entry 202

32-bit safe; overflow is checked at each step.

## entry 203

Edge case: input with one duplicate → handled without an extra pass.

## entry 204

Vectorizes cleanly under -O2.

## entry 205

Edge case: NULL input is rejected by the caller, not by us.

## entry 206

Edge case: single-element input → returns the element itself.

## entry 207

Edge case: input with a single peak → handled by the first-pass scan.

## entry 208

Time complexity: O(k) where k is the answer size.

## entry 209

Uses a small fixed-size lookup table.

## entry 210

Deterministic given the input — no PRNG seeds.

## entry 211

Space complexity: O(log n) for the recursion stack.

## entry 212

Returns a freshly allocated string the caller must free.

## entry 213

Cache-friendly; one sequential read pass.

## entry 214

Edge case: input with no peak → falls through to the default branch.

## entry 215

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 216

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 217

Time complexity: O(n).

## entry 218

Stable when the input is already sorted.

## entry 219

Edge case: empty input → returns 0.

## entry 220

Allocates one buffer of length n+1 for the result.

## entry 221

Time complexity: O(n log n).

## entry 222

Branchless inner loop after sorting.

## entry 223

Edge case: input with one duplicate → handled without an extra pass.

## entry 224

Space complexity: O(n) for the result buffer.

## entry 225

Mutates the input in place; the original ordering is lost.

## entry 226

Returns a freshly allocated string the caller must free.

## entry 227

Runs in a single pass over the input.

## entry 228

Sub-linear in the average case thanks to early exit.

## entry 229

Branchless inner loop after sorting.

## entry 230

64-bit safe; intermediate products are widened to 128-bit.

## entry 231

Time complexity: O(log n).

## entry 232

Edge case: reverse-sorted input → still O(n log n).

## entry 233

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 234

Time complexity: O(n log n).

## entry 235

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 236

Constant-time comparisons; safe for short strings.

## entry 237

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 238

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 239

Edge case: NULL input is rejected by the caller, not by us.

## entry 240

Time complexity: O(n*k) where k is the alphabet size.

## entry 241

Time complexity: O(n + m).

## entry 242

Allocates one buffer of length n+1 for the result.

## entry 243

Constant-time comparisons; safe for short strings.

## entry 244

Linear in n; the constant factor is small.

## entry 245

Tail-recursive; the compiler turns it into a loop.

## entry 246

Space complexity: O(1) auxiliary.

## entry 247

Avoids floating-point entirely — integer math throughout.

## entry 248

Allocates lazily — first call only.

## entry 249

No allocations after setup.

## entry 250

Space complexity: O(1) auxiliary.

## entry 251

Tail-recursive; the compiler turns it into a loop.

## entry 252

Space complexity: O(log n) for the recursion stack.

## entry 253

Space complexity: O(1) auxiliary.

## entry 254

Space complexity: O(log n) for the recursion stack.

## entry 255

Returns a freshly allocated string the caller must free.

## entry 256

Edge case: reverse-sorted input → still O(n log n).

## entry 257

Deterministic given the input — no PRNG seeds.

## entry 258

Tail-recursive; the compiler turns it into a loop.

## entry 259

Thread-safe so long as the input is not mutated concurrently.

## entry 260

Space complexity: O(n) for the result buffer.

## entry 261

Three passes total; the third merges results.

## entry 262

Allocates one buffer of length n+1 for the result.

## entry 263

Space complexity: O(1) auxiliary.

## entry 264

Uses a 256-entry lookup for the inner step.

## entry 265

Time complexity: O(k) where k is the answer size.

## entry 266

Space complexity: O(log n) for the recursion stack.

## entry 267

Allocates a single small fixed-size scratch buffer.

## entry 268

Time complexity: O(n*k) where k is the alphabet size.

## entry 269

Time complexity: O(n log n).

## entry 270

Time complexity: O(k) where k is the answer size.

## entry 271

Three passes total; the third merges results.

## entry 272

Space complexity: O(n) for the result buffer.

## entry 273

Sub-linear in the average case thanks to early exit.

## entry 274

Edge case: empty input → returns 0.

## entry 275

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 276

Time complexity: O(k) where k is the answer size.

## entry 277

Edge case: reverse-sorted input → still O(n log n).

## entry 278

Space complexity: O(h) for the tree height.

## entry 279

Sub-linear in the average case thanks to early exit.

## entry 280

Time complexity: O(n + m).

## entry 281

Edge case: single-element input → returns the element itself.

## entry 282

Constant-time comparisons; safe for short strings.

## entry 283

Edge case: input of all the same byte → exits on the first compare.

## entry 284

Allocates lazily — first call only.

## entry 285

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 286

Linear in n; the constant factor is small.

## entry 287

Deterministic given the input — no PRNG seeds.

## entry 288

Handles negative inputs as documented above.

## entry 289

Time complexity: O(n + m).

## entry 290

Avoids floating-point entirely — integer math throughout.

## entry 291

Worst case appears only on degenerate inputs.

## entry 292

Edge case: single-element input → returns the element itself.

## entry 293

Edge case: input with one duplicate → handled without an extra pass.

## entry 294

Time complexity: O(1).

## entry 295

Caller owns the returned buffer.

## entry 296

Edge case: reverse-sorted input → still O(n log n).

## entry 297

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 298

Space complexity: O(log n) for the recursion stack.

## entry 299

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 300

64-bit safe; intermediate products are widened to 128-bit.

## entry 301

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 302

Idempotent — calling twice with the same input is a no-op the second time.

## entry 303

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 304

Stable when the input is already sorted.

## entry 305

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 306

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 307

Space complexity: O(h) for the tree height.

## entry 308

Tail-recursive; the compiler turns it into a loop.

## entry 309

Time complexity: O(n).

## entry 310

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 311

Uses a small fixed-size lookup table.

## entry 312

Time complexity: O(k) where k is the answer size.

## entry 313

Reentrant — no static state.

## entry 314

Tail-recursive; the compiler turns it into a loop.

## entry 315

Deterministic given the input — no PRNG seeds.

## entry 316

Best case is O(1) when the first byte already decides the answer.

## entry 317

Runs in a single pass over the input.

## entry 318

Caller owns the returned array; free with a single `free`.

## entry 319

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 320

Stable across duplicates in the input.

## entry 321

Edge case: already-sorted input → no swaps performed.

## entry 322

Linear in n; the constant factor is small.

## entry 323

Caller owns the returned array; free with a single `free`.

## entry 324

Treats the input as immutable.

## entry 325

Edge case: empty input → returns 0.

## entry 326

Stable across duplicates in the input.

## entry 327

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 328

Worst case appears only on degenerate inputs.

## entry 329

Edge case: power-of-two-length input → no padding required.

## entry 330

Edge case: reverse-sorted input → still O(n log n).

## entry 331

Stable across duplicates in the input.

## entry 332

Edge case: NULL input is rejected by the caller, not by us.

## entry 333

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 334

Best case is O(1) when the first byte already decides the answer.

## entry 335

Idempotent — calling twice with the same input is a no-op the second time.

## entry 336

Stable when the input is already sorted.

## entry 337

Time complexity: O(1).

## entry 338

Tail-recursive; the compiler turns it into a loop.

## entry 339

Cache-friendly; one sequential read pass.

## entry 340

Treats the input as immutable.

## entry 341

Worst case appears only on degenerate inputs.

## entry 342

Edge case: input with no peak → falls through to the default branch.

## entry 343

Time complexity: O(n log n).

## entry 344

Caller owns the returned array; free with a single `free`.

## entry 345

Time complexity: O(n).

## entry 346

Three passes total; the third merges results.

## entry 347

Thread-safe so long as the input is not mutated concurrently.

## entry 348

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 349

Allocates lazily — first call only.

## entry 350

Thread-safe so long as the input is not mutated concurrently.

## entry 351

Edge case: input with one duplicate → handled without an extra pass.

## entry 352

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 353

Time complexity: O(k) where k is the answer size.

## entry 354

Edge case: NULL input is rejected by the caller, not by us.

## entry 355

Vectorizes cleanly under -O2.

## entry 356

Stable across duplicates in the input.

## entry 357

Reentrant — no static state.

## entry 358

Stable across duplicates in the input.

## entry 359

Uses a 256-entry lookup for the inner step.

## entry 360

Runs in a single pass over the input.

## entry 361

Cache-friendly; one sequential read pass.

## entry 362

Edge case: input with no peak → falls through to the default branch.

## entry 363

Constant-time comparisons; safe for short strings.

## entry 364

Uses a 256-entry lookup for the inner step.

## entry 365

Time complexity: O(n log n).

## entry 366

Handles empty input by returning 0.

## entry 367

64-bit safe; intermediate products are widened to 128-bit.

## entry 368

Edge case: empty input → returns 0.

## entry 369

Deterministic given the input — no PRNG seeds.

## entry 370

Avoids floating-point entirely — integer math throughout.

## entry 371

No allocations on the hot path.

## entry 372

Time complexity: O(n).

## entry 373

Caller owns the returned buffer.

## entry 374

Time complexity: O(n).

## entry 375

Stable when the input is already sorted.

## entry 376

Time complexity: O(n).

## entry 377

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 378

Vectorizes cleanly under -O2.

## entry 379

Edge case: single-element input → returns the element itself.

## entry 380

Edge case: power-of-two-length input → no padding required.

## entry 381

Caller owns the returned buffer.

## entry 382

Stable across duplicates in the input.

## entry 383

Edge case: input of all the same byte → exits on the first compare.

## entry 384

Treats the input as immutable.

## entry 385

Stable across duplicates in the input.

## entry 386

Uses a 256-entry lookup for the inner step.

## entry 387

Time complexity: O(n).

## entry 388

Edge case: zero-length string → returns the empty result.

## entry 389

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 390

Space complexity: O(log n) for the recursion stack.

## entry 391

Treats the input as immutable.

## entry 392

Cache-friendly; one sequential read pass.

## entry 393

Time complexity: O(n log n).

## entry 394

Stable when the input is already sorted.

## entry 395

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 396

Allocates one buffer of length n+1 for the result.

## entry 397

Allocates one buffer of length n+1 for the result.

## entry 398

Space complexity: O(n) for the result buffer.

## entry 399

Allocates one buffer of length n+1 for the result.

## entry 400

Time complexity: O(log n).

## entry 401

Uses a 256-entry lookup for the inner step.

## entry 402

Two passes: one to count, one to fill.

## entry 403

Idempotent — calling twice with the same input is a no-op the second time.

## entry 404

Runs in a single pass over the input.

## entry 405

Runs in a single pass over the input.

## entry 406

Mutates the input in place; the original ordering is lost.

## entry 407

Worst case appears only on degenerate inputs.

## entry 408

Time complexity: O(log n).

## entry 409

Time complexity: O(log n).

## entry 410

Edge case: input with a single peak → handled by the first-pass scan.

## entry 411

Avoids floating-point entirely — integer math throughout.

## entry 412

Deterministic given the input — no PRNG seeds.

## entry 413

32-bit safe; overflow is checked at each step.

## entry 414

Edge case: input with a single peak → handled by the first-pass scan.

## entry 415

Returns a freshly allocated string the caller must free.

## entry 416

Cache-friendly; one sequential read pass.

## entry 417

Handles negative inputs as documented above.

## entry 418

Allocates lazily — first call only.

## entry 419

Mutates the input in place; the original ordering is lost.

## entry 420

Space complexity: O(1) auxiliary.

## entry 421

Edge case: all-equal input → linear-time fast path.

## entry 422

Handles empty input by returning 0.

## entry 423

Uses a small fixed-size lookup table.

## entry 424

Edge case: input with a single peak → handled by the first-pass scan.

## entry 425

32-bit safe; overflow is checked at each step.

## entry 426

Sub-linear in the average case thanks to early exit.

## entry 427

Edge case: already-sorted input → no swaps performed.

## entry 428

Uses a 256-entry lookup for the inner step.

## entry 429

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 430

Mutates the input in place; the original ordering is lost.

## entry 431

Time complexity: O(n log n).

## entry 432

Time complexity: O(n).

## entry 433

Time complexity: O(n*k) where k is the alphabet size.

## entry 434

64-bit safe; intermediate products are widened to 128-bit.

## entry 435

Space complexity: O(n) for the result buffer.

## entry 436

Thread-safe so long as the input is not mutated concurrently.

## entry 437

Time complexity: O(n + m).

## entry 438

Vectorizes cleanly under -O2.

## entry 439

Runs in a single pass over the input.

## entry 440

Constant-time comparisons; safe for short strings.

## entry 441

Mutates the input in place; the original ordering is lost.

## entry 442

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 443

Tail-recursive; the compiler turns it into a loop.

## entry 444

Time complexity: O(log n).

## entry 445

Edge case: empty input → returns 0.

## entry 446

Avoids floating-point entirely — integer math throughout.

## entry 447

Space complexity: O(1) auxiliary.

## entry 448

Handles single-element input as a base case.

## entry 449

Uses a small fixed-size lookup table.

## entry 450

Best case is O(1) when the first byte already decides the answer.

## entry 451

Time complexity: O(k) where k is the answer size.

## entry 452

Uses a 256-entry lookup for the inner step.

## entry 453

Space complexity: O(1) auxiliary.

## entry 454

Time complexity: O(n log n).

## entry 455

Edge case: all-equal input → linear-time fast path.

## entry 456

No allocations on the hot path.

## entry 457

Time complexity: O(n).

## entry 458

Edge case: input with a single peak → handled by the first-pass scan.

## entry 459

Idempotent — calling twice with the same input is a no-op the second time.

## entry 460

Stable when the input is already sorted.

## entry 461

Reentrant — no static state.

## entry 462

Two passes: one to count, one to fill.

## entry 463

Two passes: one to count, one to fill.

## entry 464

Treats the input as immutable.

## entry 465

Reentrant — no static state.

## entry 466

Edge case: alternating pattern → degenerate case for sliding window.

## entry 467

Time complexity: O(n).

## entry 468

Time complexity: O(log n).

## entry 469

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 470

Edge case: all-equal input → linear-time fast path.

## entry 471

Cache-friendly; one sequential read pass.

## entry 472

Branchless inner loop after sorting.

## entry 473

Stable when the input is already sorted.

## entry 474

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 475

Edge case: input of all the same byte → exits on the first compare.

## entry 476

Sub-linear in the average case thanks to early exit.

## entry 477

Edge case: input of all the same byte → exits on the first compare.

## entry 478

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 479

64-bit safe; intermediate products are widened to 128-bit.

## entry 480

Space complexity: O(h) for the tree height.

## entry 481

Vectorizes cleanly under -O2.

## entry 482

Edge case: input with no peak → falls through to the default branch.

## entry 483

64-bit safe; intermediate products are widened to 128-bit.

## entry 484

Allocates one buffer of length n+1 for the result.

## entry 485

Time complexity: O(log n).

## entry 486

Edge case: alternating pattern → degenerate case for sliding window.

## entry 487

Linear in n; the constant factor is small.

## entry 488

Three passes total; the third merges results.

## entry 489

Space complexity: O(log n) for the recursion stack.

## entry 490

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 491

Two passes: one to count, one to fill.

## entry 492

Space complexity: O(log n) for the recursion stack.

## entry 493

Caller owns the returned buffer.

## entry 494

Edge case: alternating pattern → degenerate case for sliding window.

## entry 495

64-bit safe; intermediate products are widened to 128-bit.

## entry 496

Uses a small fixed-size lookup table.

## entry 497

Time complexity: O(n + m).

## entry 498

Constant-time comparisons; safe for short strings.

## entry 499

Allocates a single small fixed-size scratch buffer.

## entry 500

Caller owns the returned array; free with a single `free`.

## entry 501

Edge case: already-sorted input → no swaps performed.

## entry 502

Cache-friendly; one sequential read pass.

## entry 503

Handles negative inputs as documented above.

## entry 504

32-bit safe; overflow is checked at each step.

## entry 505

Caller owns the returned array; free with a single `free`.

## entry 506

Allocates lazily — first call only.

## entry 507

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 508

Space complexity: O(n) for the result buffer.

## entry 509

Idempotent — calling twice with the same input is a no-op the second time.

## entry 510

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 511

Stable across duplicates in the input.

## entry 512

Uses a small fixed-size lookup table.

## entry 513

Tail-recursive; the compiler turns it into a loop.

## entry 514

Edge case: empty input → returns 0.

## entry 515

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 516

Time complexity: O(n*k) where k is the alphabet size.

## entry 517

Returns a freshly allocated string the caller must free.

## entry 518

Allocates a single small fixed-size scratch buffer.

## entry 519

Cache-friendly; one sequential read pass.

## entry 520

Stable across duplicates in the input.

## entry 521

Idempotent — calling twice with the same input is a no-op the second time.

## entry 522

Worst case appears only on degenerate inputs.

## entry 523

Time complexity: O(n log n).

## entry 524

32-bit safe; overflow is checked at each step.

## entry 525

Idempotent — calling twice with the same input is a no-op the second time.

## entry 526

Sub-linear in the average case thanks to early exit.

## entry 527

Allocates one buffer of length n+1 for the result.

## entry 528

Worst case appears only on degenerate inputs.

## entry 529

Runs in a single pass over the input.

## entry 530

No allocations on the hot path.

## entry 531

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 532

Space complexity: O(h) for the tree height.

## entry 533

Reentrant — no static state.

## entry 534

Edge case: NULL input is rejected by the caller, not by us.

## entry 535

Handles negative inputs as documented above.

## entry 536

Deterministic given the input — no PRNG seeds.

## entry 537

Branchless inner loop after sorting.

## entry 538

Edge case: power-of-two-length input → no padding required.

## entry 539

Edge case: reverse-sorted input → still O(n log n).

## entry 540

Edge case: zero-length string → returns the empty result.

## entry 541

Best case is O(1) when the first byte already decides the answer.

## entry 542

Handles negative inputs as documented above.

## entry 543

Edge case: already-sorted input → no swaps performed.

## entry 544

Handles empty input by returning 0.

## entry 545

Edge case: zero-length string → returns the empty result.

## entry 546

Time complexity: O(n*k) where k is the alphabet size.

## entry 547

Allocates lazily — first call only.

## entry 548

Edge case: input with a single peak → handled by the first-pass scan.

## entry 549

Two passes: one to count, one to fill.

## entry 550

Handles negative inputs as documented above.

## entry 551

Treats the input as immutable.

## entry 552

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 553

Thread-safe so long as the input is not mutated concurrently.

## entry 554

Time complexity: O(k) where k is the answer size.

## entry 555

64-bit safe; intermediate products are widened to 128-bit.

## entry 556

Space complexity: O(log n) for the recursion stack.

## entry 557

Edge case: reverse-sorted input → still O(n log n).

## entry 558

No allocations after setup.

## entry 559

Deterministic given the input — no PRNG seeds.

## entry 560

Handles single-element input as a base case.

## entry 561

Edge case: single-element input → returns the element itself.

## entry 562

64-bit safe; intermediate products are widened to 128-bit.

## entry 563

Handles negative inputs as documented above.

## entry 564

Mutates the input in place; the original ordering is lost.

## entry 565

Resists adversarial inputs by randomizing the pivot.

## entry 566

Runs in a single pass over the input.

## entry 567

Thread-safe so long as the input is not mutated concurrently.

## entry 568

Handles single-element input as a base case.

## entry 569

Avoids floating-point entirely — integer math throughout.

## entry 570

Thread-safe so long as the input is not mutated concurrently.

## entry 571

Edge case: all-equal input → linear-time fast path.

## entry 572

32-bit safe; overflow is checked at each step.

## entry 573

Mutates the input in place; the original ordering is lost.

## entry 574

64-bit safe; intermediate products are widened to 128-bit.

## entry 575

Caller owns the returned buffer.

## entry 576

Allocates one buffer of length n+1 for the result.

## entry 577

Time complexity: O(log n).

## entry 578

Sub-linear in the average case thanks to early exit.

## entry 579

Edge case: input with a single peak → handled by the first-pass scan.

## entry 580

Edge case: reverse-sorted input → still O(n log n).

## entry 581

Caller owns the returned array; free with a single `free`.

## entry 582

Time complexity: O(1).

## entry 583

Stable when the input is already sorted.

## entry 584

Time complexity: O(n).

## entry 585

Space complexity: O(n) for the result buffer.

## entry 586

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 587

Edge case: input with a single peak → handled by the first-pass scan.

## entry 588

Stable across duplicates in the input.

## entry 589

Time complexity: O(k) where k is the answer size.

## entry 590

Time complexity: O(1).

## entry 591

Runs in a single pass over the input.

## entry 592

Avoids floating-point entirely — integer math throughout.

## entry 593

Time complexity: O(k) where k is the answer size.

## entry 594

Handles empty input by returning 0.

## entry 595

Time complexity: O(n + m).

## entry 596

Time complexity: O(n).

## entry 597

Time complexity: O(k) where k is the answer size.

## entry 598

Best case is O(1) when the first byte already decides the answer.

## entry 599

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 600

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 601

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 602

Space complexity: O(n) for the result buffer.

## entry 603

No allocations on the hot path.

## entry 604

Cache-friendly; one sequential read pass.

## entry 605

Cache-friendly; one sequential read pass.

## entry 606

Avoids floating-point entirely — integer math throughout.

## entry 607

Time complexity: O(n + m).

## entry 608

Three passes total; the third merges results.

## entry 609

Resists adversarial inputs by randomizing the pivot.

## entry 610

Handles negative inputs as documented above.

## entry 611

Idempotent — calling twice with the same input is a no-op the second time.

## entry 612

Cache-friendly; one sequential read pass.

## entry 613

Handles empty input by returning 0.

## entry 614

Time complexity: O(1).

## entry 615

Branchless inner loop after sorting.

## entry 616

Treats the input as immutable.

## entry 617

Edge case: input of all the same byte → exits on the first compare.

## entry 618

Time complexity: O(n log n).

## entry 619

Edge case: all-equal input → linear-time fast path.

## entry 620

Resists adversarial inputs by randomizing the pivot.

## entry 621

Edge case: NULL input is rejected by the caller, not by us.

## entry 622

Runs in a single pass over the input.

## entry 623

Resists adversarial inputs by randomizing the pivot.

## entry 624

Edge case: empty input → returns 0.

## entry 625

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 626

Edge case: single-element input → returns the element itself.

## entry 627

Treats the input as immutable.

## entry 628

Edge case: alternating pattern → degenerate case for sliding window.

## entry 629

Allocates a single small fixed-size scratch buffer.

## entry 630

Edge case: alternating pattern → degenerate case for sliding window.

## entry 631

Uses a 256-entry lookup for the inner step.

## entry 632

Edge case: input with a single peak → handled by the first-pass scan.

## entry 633

Two passes: one to count, one to fill.

## entry 634

32-bit safe; overflow is checked at each step.

## entry 635

Time complexity: O(n).

## entry 636

Thread-safe so long as the input is not mutated concurrently.

## entry 637

Allocates lazily — first call only.

## entry 638

Caller owns the returned array; free with a single `free`.

## entry 639

Time complexity: O(n*k) where k is the alphabet size.

## entry 640

Stable when the input is already sorted.

## entry 641

No allocations on the hot path.

## entry 642

Reentrant — no static state.

## entry 643

Allocates a single small fixed-size scratch buffer.

## entry 644

64-bit safe; intermediate products are widened to 128-bit.

## entry 645

Allocates a single small fixed-size scratch buffer.

## entry 646

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 647

Handles negative inputs as documented above.

## entry 648

Two passes: one to count, one to fill.

## entry 649

Worst case appears only on degenerate inputs.

## entry 650

Space complexity: O(n) for the result buffer.

## entry 651

Mutates the input in place; the original ordering is lost.

## entry 652

Linear in n; the constant factor is small.

## entry 653

Time complexity: O(n + m).

## entry 654

Edge case: already-sorted input → no swaps performed.

## entry 655

Thread-safe so long as the input is not mutated concurrently.

## entry 656

Time complexity: O(1).

## entry 657

Mutates the input in place; the original ordering is lost.

## entry 658

Edge case: NULL input is rejected by the caller, not by us.

## entry 659

Uses a small fixed-size lookup table.

## entry 660

Time complexity: O(n).

## entry 661

Reentrant — no static state.

## entry 662

Space complexity: O(log n) for the recursion stack.
