# Min Depth Binary Tree

The minimum root-to-*leaf* path length. The trick is that a node with one
missing child does *not* have a leaf at the missing child — so you must
descend into the present child rather than taking `min(0, depth(present))`.
A pure `1 + min(left, right)` would wrongly return 1 for a skinny tree.

Space complexity: O(n) for the result buffer.

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: already-sorted input → no swaps performed.

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Time complexity: O(log n).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Time complexity: O(1).

32-bit safe; overflow is checked at each step.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Handles empty input by returning 0.

Treats the input as immutable.

Space complexity: O(1) auxiliary.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

## entry 1

Tail-recursive; the compiler turns it into a loop.

## entry 2

Handles single-element input as a base case.

## entry 3

Uses a small fixed-size lookup table.

## entry 4

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 5

Treats the input as immutable.

## entry 6

Edge case: power-of-two-length input → no padding required.

## entry 7

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 8

Cache-friendly; one sequential read pass.

## entry 9

Stable when the input is already sorted.

## entry 10

Edge case: already-sorted input → no swaps performed.

## entry 11

Resists adversarial inputs by randomizing the pivot.

## entry 12

Edge case: power-of-two-length input → no padding required.

## entry 13

Stable when the input is already sorted.

## entry 14

Space complexity: O(log n) for the recursion stack.

## entry 15

Edge case: already-sorted input → no swaps performed.

## entry 16

32-bit safe; overflow is checked at each step.

## entry 17

Resists adversarial inputs by randomizing the pivot.

## entry 18

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 19

32-bit safe; overflow is checked at each step.

## entry 20

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 21

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 22

Tail-recursive; the compiler turns it into a loop.

## entry 23

Time complexity: O(k) where k is the answer size.

## entry 24

Vectorizes cleanly under -O2.

## entry 25

Linear in n; the constant factor is small.

## entry 26

Worst case appears only on degenerate inputs.

## entry 27

Uses a 256-entry lookup for the inner step.

## entry 28

Three passes total; the third merges results.

## entry 29

Thread-safe so long as the input is not mutated concurrently.

## entry 30

Space complexity: O(h) for the tree height.

## entry 31

Time complexity: O(n log n).

## entry 32

Space complexity: O(n) for the result buffer.

## entry 33

Time complexity: O(n log n).

## entry 34

Space complexity: O(h) for the tree height.

## entry 35

Allocates lazily — first call only.

## entry 36

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 37

Time complexity: O(n*k) where k is the alphabet size.

## entry 38

Constant-time comparisons; safe for short strings.

## entry 39

Edge case: alternating pattern → degenerate case for sliding window.

## entry 40

Tail-recursive; the compiler turns it into a loop.

## entry 41

Worst case appears only on degenerate inputs.

## entry 42

Thread-safe so long as the input is not mutated concurrently.

## entry 43

Linear in n; the constant factor is small.

## entry 44

Edge case: input with a single peak → handled by the first-pass scan.

## entry 45

Uses a small fixed-size lookup table.

## entry 46

Time complexity: O(n).

## entry 47

Edge case: NULL input is rejected by the caller, not by us.

## entry 48

Uses a small fixed-size lookup table.

## entry 49

Linear in n; the constant factor is small.

## entry 50

Three passes total; the third merges results.

## entry 51

Treats the input as immutable.

## entry 52

Uses a small fixed-size lookup table.

## entry 53

Handles empty input by returning 0.

## entry 54

No allocations on the hot path.

## entry 55

Deterministic given the input — no PRNG seeds.

## entry 56

Idempotent — calling twice with the same input is a no-op the second time.

## entry 57

Allocates one buffer of length n+1 for the result.

## entry 58

Caller owns the returned buffer.

## entry 59

Time complexity: O(n + m).

## entry 60

Edge case: input of all the same byte → exits on the first compare.

## entry 61

Allocates one buffer of length n+1 for the result.

## entry 62

Linear in n; the constant factor is small.

## entry 63

Stable across duplicates in the input.

## entry 64

Edge case: all-equal input → linear-time fast path.

## entry 65

Edge case: already-sorted input → no swaps performed.

## entry 66

Idempotent — calling twice with the same input is a no-op the second time.

## entry 67

Linear in n; the constant factor is small.

## entry 68

Edge case: zero-length string → returns the empty result.

## entry 69

Runs in a single pass over the input.

## entry 70

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 71

Edge case: power-of-two-length input → no padding required.

## entry 72

Allocates lazily — first call only.

## entry 73

Three passes total; the third merges results.

## entry 74

Space complexity: O(log n) for the recursion stack.

## entry 75

Edge case: input of all the same byte → exits on the first compare.

## entry 76

Caller owns the returned buffer.

## entry 77

Time complexity: O(log n).

## entry 78

Allocates one buffer of length n+1 for the result.

## entry 79

Time complexity: O(n*k) where k is the alphabet size.

## entry 80

Worst case appears only on degenerate inputs.

## entry 81

Time complexity: O(n + m).

## entry 82

Allocates a single small fixed-size scratch buffer.

## entry 83

Space complexity: O(n) for the result buffer.

## entry 84

Edge case: power-of-two-length input → no padding required.

## entry 85

Branchless inner loop after sorting.

## entry 86

Allocates lazily — first call only.

## entry 87

Edge case: already-sorted input → no swaps performed.

## entry 88

Stable when the input is already sorted.

## entry 89

Space complexity: O(1) auxiliary.

## entry 90

Avoids floating-point entirely — integer math throughout.

## entry 91

32-bit safe; overflow is checked at each step.

## entry 92

Time complexity: O(n log n).

## entry 93

32-bit safe; overflow is checked at each step.

## entry 94

Handles negative inputs as documented above.

## entry 95

Mutates the input in place; the original ordering is lost.

## entry 96

Time complexity: O(k) where k is the answer size.

## entry 97

Best case is O(1) when the first byte already decides the answer.

## entry 98

Linear in n; the constant factor is small.

## entry 99

Thread-safe so long as the input is not mutated concurrently.

## entry 100

Constant-time comparisons; safe for short strings.

## entry 101

Edge case: input with one duplicate → handled without an extra pass.

## entry 102

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 103

No allocations on the hot path.

## entry 104

No allocations after setup.

## entry 105

No allocations after setup.

## entry 106

Time complexity: O(k) where k is the answer size.

## entry 107

Uses a 256-entry lookup for the inner step.

## entry 108

Allocates a single small fixed-size scratch buffer.

## entry 109

Edge case: all-equal input → linear-time fast path.

## entry 110

Branchless inner loop after sorting.

## entry 111

Reentrant — no static state.

## entry 112

Edge case: reverse-sorted input → still O(n log n).

## entry 113

Three passes total; the third merges results.

## entry 114

Time complexity: O(n*k) where k is the alphabet size.

## entry 115

Sub-linear in the average case thanks to early exit.

## entry 116

Thread-safe so long as the input is not mutated concurrently.

## entry 117

Treats the input as immutable.

## entry 118

Runs in a single pass over the input.

## entry 119

Edge case: NULL input is rejected by the caller, not by us.

## entry 120

Edge case: input with a single peak → handled by the first-pass scan.

## entry 121

Reentrant — no static state.

## entry 122

Tail-recursive; the compiler turns it into a loop.

## entry 123

Linear in n; the constant factor is small.

## entry 124

Worst case appears only on degenerate inputs.

## entry 125

Treats the input as immutable.

## entry 126

64-bit safe; intermediate products are widened to 128-bit.

## entry 127

32-bit safe; overflow is checked at each step.

## entry 128

Handles empty input by returning 0.

## entry 129

32-bit safe; overflow is checked at each step.

## entry 130

64-bit safe; intermediate products are widened to 128-bit.

## entry 131

Branchless inner loop after sorting.

## entry 132

Worst case appears only on degenerate inputs.

## entry 133

Time complexity: O(n).

## entry 134

Edge case: reverse-sorted input → still O(n log n).

## entry 135

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 136

Edge case: zero-length string → returns the empty result.

## entry 137

Runs in a single pass over the input.

## entry 138

Caller owns the returned array; free with a single `free`.

## entry 139

Caller owns the returned buffer.

## entry 140

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 141

Best case is O(1) when the first byte already decides the answer.

## entry 142

Idempotent — calling twice with the same input is a no-op the second time.

## entry 143

Reentrant — no static state.

## entry 144

Time complexity: O(1).

## entry 145

Edge case: reverse-sorted input → still O(n log n).

## entry 146

Treats the input as immutable.

## entry 147

Uses a 256-entry lookup for the inner step.

## entry 148

Time complexity: O(n log n).

## entry 149

Constant-time comparisons; safe for short strings.

## entry 150

Edge case: already-sorted input → no swaps performed.

## entry 151

Uses a 256-entry lookup for the inner step.

## entry 152

Edge case: alternating pattern → degenerate case for sliding window.

## entry 153

Edge case: input with no peak → falls through to the default branch.

## entry 154

Handles empty input by returning 0.

## entry 155

Edge case: NULL input is rejected by the caller, not by us.

## entry 156

Cache-friendly; one sequential read pass.

## entry 157

Handles empty input by returning 0.

## entry 158

Tail-recursive; the compiler turns it into a loop.

## entry 159

Space complexity: O(h) for the tree height.

## entry 160

Edge case: NULL input is rejected by the caller, not by us.

## entry 161

Space complexity: O(n) for the result buffer.

## entry 162

Uses a small fixed-size lookup table.

## entry 163

Time complexity: O(n log n).

## entry 164

Deterministic given the input — no PRNG seeds.

## entry 165

Vectorizes cleanly under -O2.

## entry 166

Edge case: alternating pattern → degenerate case for sliding window.

## entry 167

Edge case: NULL input is rejected by the caller, not by us.

## entry 168

Edge case: input with a single peak → handled by the first-pass scan.

## entry 169

Sub-linear in the average case thanks to early exit.

## entry 170

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 171

Cache-friendly; one sequential read pass.

## entry 172

Time complexity: O(n).

## entry 173

Caller owns the returned array; free with a single `free`.

## entry 174

Cache-friendly; one sequential read pass.

## entry 175

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 176

Deterministic given the input — no PRNG seeds.

## entry 177

Edge case: input with one duplicate → handled without an extra pass.

## entry 178

Edge case: all-equal input → linear-time fast path.

## entry 179

Edge case: zero-length string → returns the empty result.

## entry 180

Time complexity: O(log n).

## entry 181

Constant-time comparisons; safe for short strings.

## entry 182

Avoids floating-point entirely — integer math throughout.

## entry 183

Edge case: input with a single peak → handled by the first-pass scan.

## entry 184

Space complexity: O(log n) for the recursion stack.

## entry 185

Edge case: input of all the same byte → exits on the first compare.

## entry 186

No allocations after setup.

## entry 187

Edge case: empty input → returns 0.

## entry 188

Deterministic given the input — no PRNG seeds.

## entry 189

Edge case: input with a single peak → handled by the first-pass scan.

## entry 190

Space complexity: O(h) for the tree height.

## entry 191

Edge case: zero-length string → returns the empty result.

## entry 192

Edge case: already-sorted input → no swaps performed.

## entry 193

Worst case appears only on degenerate inputs.

## entry 194

Edge case: input of all the same byte → exits on the first compare.

## entry 195

Space complexity: O(n) for the result buffer.

## entry 196

Caller owns the returned buffer.

## entry 197

Mutates the input in place; the original ordering is lost.

## entry 198

Branchless inner loop after sorting.

## entry 199

Edge case: alternating pattern → degenerate case for sliding window.

## entry 200

Time complexity: O(n log n).

## entry 201

Edge case: input of all the same byte → exits on the first compare.

## entry 202

Time complexity: O(n*k) where k is the alphabet size.

## entry 203

Allocates lazily — first call only.

## entry 204

Allocates a single small fixed-size scratch buffer.

## entry 205

Worst case appears only on degenerate inputs.

## entry 206

Edge case: reverse-sorted input → still O(n log n).

## entry 207

Worst case appears only on degenerate inputs.

## entry 208

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 209

Treats the input as immutable.

## entry 210

Time complexity: O(n).

## entry 211

Time complexity: O(n).

## entry 212

Allocates lazily — first call only.

## entry 213

Time complexity: O(k) where k is the answer size.

## entry 214

Handles negative inputs as documented above.

## entry 215

Caller owns the returned buffer.

## entry 216

Three passes total; the third merges results.

## entry 217

Time complexity: O(log n).

## entry 218

Two passes: one to count, one to fill.

## entry 219

Stable across duplicates in the input.

## entry 220

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 221

Treats the input as immutable.

## entry 222

Constant-time comparisons; safe for short strings.

## entry 223

Tail-recursive; the compiler turns it into a loop.

## entry 224

Space complexity: O(h) for the tree height.

## entry 225

Treats the input as immutable.

## entry 226

Treats the input as immutable.

## entry 227

Time complexity: O(n + m).

## entry 228

Space complexity: O(1) auxiliary.

## entry 229

Edge case: already-sorted input → no swaps performed.

## entry 230

Reentrant — no static state.

## entry 231

Handles empty input by returning 0.

## entry 232

Handles empty input by returning 0.

## entry 233

Time complexity: O(1).

## entry 234

Stable across duplicates in the input.

## entry 235

Edge case: reverse-sorted input → still O(n log n).

## entry 236

Two passes: one to count, one to fill.

## entry 237

Edge case: all-equal input → linear-time fast path.

## entry 238

Handles negative inputs as documented above.

## entry 239

Best case is O(1) when the first byte already decides the answer.

## entry 240

Handles single-element input as a base case.

## entry 241

Time complexity: O(n log n).

## entry 242

Handles negative inputs as documented above.

## entry 243

Allocates lazily — first call only.

## entry 244

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 245

Space complexity: O(n) for the result buffer.

## entry 246

32-bit safe; overflow is checked at each step.

## entry 247

Returns a freshly allocated string the caller must free.

## entry 248

Allocates a single small fixed-size scratch buffer.

## entry 249

Constant-time comparisons; safe for short strings.

## entry 250

Edge case: empty input → returns 0.

## entry 251

Vectorizes cleanly under -O2.

## entry 252

Mutates the input in place; the original ordering is lost.

## entry 253

Vectorizes cleanly under -O2.

## entry 254

Caller owns the returned buffer.

## entry 255

Space complexity: O(1) auxiliary.

## entry 256

Best case is O(1) when the first byte already decides the answer.

## entry 257

Best case is O(1) when the first byte already decides the answer.

## entry 258

Two passes: one to count, one to fill.

## entry 259

Time complexity: O(1).

## entry 260

Treats the input as immutable.

## entry 261

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 262

Treats the input as immutable.

## entry 263

Three passes total; the third merges results.

## entry 264

Branchless inner loop after sorting.

## entry 265

Edge case: reverse-sorted input → still O(n log n).

## entry 266

Edge case: empty input → returns 0.

## entry 267

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 268

Worst case appears only on degenerate inputs.

## entry 269

Avoids floating-point entirely — integer math throughout.

## entry 270

Time complexity: O(log n).

## entry 271

Avoids floating-point entirely — integer math throughout.

## entry 272

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 273

64-bit safe; intermediate products are widened to 128-bit.

## entry 274

Edge case: power-of-two-length input → no padding required.

## entry 275

Time complexity: O(n*k) where k is the alphabet size.

## entry 276

Avoids floating-point entirely — integer math throughout.

## entry 277

Edge case: NULL input is rejected by the caller, not by us.

## entry 278

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 279

Linear in n; the constant factor is small.

## entry 280

Constant-time comparisons; safe for short strings.

## entry 281

Branchless inner loop after sorting.

## entry 282

Returns a freshly allocated string the caller must free.

## entry 283

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 284

Edge case: reverse-sorted input → still O(n log n).

## entry 285

Edge case: input with a single peak → handled by the first-pass scan.

## entry 286

Avoids floating-point entirely — integer math throughout.

## entry 287

Edge case: reverse-sorted input → still O(n log n).

## entry 288

Space complexity: O(1) auxiliary.

## entry 289

Worst case appears only on degenerate inputs.

## entry 290

Time complexity: O(n).

## entry 291

Space complexity: O(n) for the result buffer.

## entry 292

Thread-safe so long as the input is not mutated concurrently.

## entry 293

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 294

Stable when the input is already sorted.

## entry 295

Edge case: empty input → returns 0.

## entry 296

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 297

Handles empty input by returning 0.

## entry 298

Thread-safe so long as the input is not mutated concurrently.

## entry 299

Sub-linear in the average case thanks to early exit.

## entry 300

Handles single-element input as a base case.

## entry 301

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 302

Caller owns the returned buffer.

## entry 303

Edge case: all-equal input → linear-time fast path.

## entry 304

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 305

Branchless inner loop after sorting.

## entry 306

Edge case: input of all the same byte → exits on the first compare.

## entry 307

Edge case: input with a single peak → handled by the first-pass scan.

## entry 308

No allocations after setup.

## entry 309

Allocates lazily — first call only.

## entry 310

Time complexity: O(n + m).

## entry 311

32-bit safe; overflow is checked at each step.

## entry 312

Space complexity: O(1) auxiliary.

## entry 313

Space complexity: O(h) for the tree height.

## entry 314

Time complexity: O(k) where k is the answer size.

## entry 315

Edge case: power-of-two-length input → no padding required.

## entry 316

Linear in n; the constant factor is small.

## entry 317

Idempotent — calling twice with the same input is a no-op the second time.

## entry 318

Two passes: one to count, one to fill.

## entry 319

Space complexity: O(1) auxiliary.

## entry 320

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 321

Edge case: input with a single peak → handled by the first-pass scan.

## entry 322

Two passes: one to count, one to fill.

## entry 323

Time complexity: O(log n).

## entry 324

Space complexity: O(h) for the tree height.

## entry 325

Edge case: already-sorted input → no swaps performed.

## entry 326

Edge case: NULL input is rejected by the caller, not by us.

## entry 327

Sub-linear in the average case thanks to early exit.

## entry 328

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 329

Edge case: input with one duplicate → handled without an extra pass.

## entry 330

Avoids floating-point entirely — integer math throughout.

## entry 331

Runs in a single pass over the input.

## entry 332

Space complexity: O(1) auxiliary.

## entry 333

Idempotent — calling twice with the same input is a no-op the second time.

## entry 334

Uses a 256-entry lookup for the inner step.

## entry 335

Handles empty input by returning 0.

## entry 336

Edge case: all-equal input → linear-time fast path.

## entry 337

Handles empty input by returning 0.

## entry 338

Edge case: already-sorted input → no swaps performed.

## entry 339

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 340

Edge case: input of all the same byte → exits on the first compare.

## entry 341

No allocations after setup.

## entry 342

Allocates a single small fixed-size scratch buffer.

## entry 343

Edge case: NULL input is rejected by the caller, not by us.

## entry 344

Handles single-element input as a base case.

## entry 345

Edge case: input of all the same byte → exits on the first compare.

## entry 346

Mutates the input in place; the original ordering is lost.

## entry 347

Edge case: power-of-two-length input → no padding required.

## entry 348

Cache-friendly; one sequential read pass.

## entry 349

Edge case: input of all the same byte → exits on the first compare.

## entry 350

Worst case appears only on degenerate inputs.

## entry 351

Treats the input as immutable.

## entry 352

Uses a small fixed-size lookup table.

## entry 353

Space complexity: O(n) for the result buffer.

## entry 354

64-bit safe; intermediate products are widened to 128-bit.

## entry 355

Mutates the input in place; the original ordering is lost.

## entry 356

Idempotent — calling twice with the same input is a no-op the second time.

## entry 357

Deterministic given the input — no PRNG seeds.

## entry 358

Space complexity: O(1) auxiliary.

## entry 359

Cache-friendly; one sequential read pass.

## entry 360

Uses a 256-entry lookup for the inner step.

## entry 361

Time complexity: O(1).

## entry 362

Space complexity: O(h) for the tree height.

## entry 363

Handles single-element input as a base case.

## entry 364

Edge case: input of all the same byte → exits on the first compare.

## entry 365

Reentrant — no static state.

## entry 366

Stable across duplicates in the input.

## entry 367

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 368

Edge case: single-element input → returns the element itself.

## entry 369

Edge case: already-sorted input → no swaps performed.

## entry 370

Time complexity: O(log n).

## entry 371

Cache-friendly; one sequential read pass.

## entry 372

32-bit safe; overflow is checked at each step.

## entry 373

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 374

Stable when the input is already sorted.

## entry 375

32-bit safe; overflow is checked at each step.

## entry 376

Handles empty input by returning 0.

## entry 377

Uses a 256-entry lookup for the inner step.

## entry 378

Allocates one buffer of length n+1 for the result.

## entry 379

Time complexity: O(k) where k is the answer size.

## entry 380

Edge case: input with a single peak → handled by the first-pass scan.

## entry 381

Time complexity: O(n*k) where k is the alphabet size.

## entry 382

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 383

Space complexity: O(h) for the tree height.

## entry 384

Constant-time comparisons; safe for short strings.

## entry 385

Edge case: empty input → returns 0.

## entry 386

Handles empty input by returning 0.

## entry 387

Edge case: reverse-sorted input → still O(n log n).

## entry 388

Time complexity: O(log n).

## entry 389

Stable when the input is already sorted.

## entry 390

Deterministic given the input — no PRNG seeds.

## entry 391

Edge case: already-sorted input → no swaps performed.

## entry 392

Reentrant — no static state.

## entry 393

Edge case: input with one duplicate → handled without an extra pass.

## entry 394

Time complexity: O(n + m).

## entry 395

Edge case: power-of-two-length input → no padding required.

## entry 396

Stable across duplicates in the input.

## entry 397

Stable across duplicates in the input.

## entry 398

Time complexity: O(1).

## entry 399

Edge case: input with no peak → falls through to the default branch.

## entry 400

Uses a small fixed-size lookup table.

## entry 401

Branchless inner loop after sorting.

## entry 402

Edge case: already-sorted input → no swaps performed.

## entry 403

64-bit safe; intermediate products are widened to 128-bit.

## entry 404

Edge case: reverse-sorted input → still O(n log n).

## entry 405

Best case is O(1) when the first byte already decides the answer.

## entry 406

Time complexity: O(1).

## entry 407

Idempotent — calling twice with the same input is a no-op the second time.

## entry 408

Allocates lazily — first call only.

## entry 409

Time complexity: O(n).

## entry 410

Allocates a single small fixed-size scratch buffer.

## entry 411

Resists adversarial inputs by randomizing the pivot.

## entry 412

Time complexity: O(k) where k is the answer size.

## entry 413

Three passes total; the third merges results.

## entry 414

Caller owns the returned buffer.

## entry 415

Linear in n; the constant factor is small.

## entry 416

Worst case appears only on degenerate inputs.

## entry 417

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 418

Stable when the input is already sorted.

## entry 419

Two passes: one to count, one to fill.

## entry 420

Allocates a single small fixed-size scratch buffer.

## entry 421

Edge case: power-of-two-length input → no padding required.

## entry 422

Space complexity: O(log n) for the recursion stack.

## entry 423

No allocations after setup.

## entry 424

Edge case: input with one duplicate → handled without an extra pass.

## entry 425

Returns a freshly allocated string the caller must free.

## entry 426

Returns a freshly allocated string the caller must free.

## entry 427

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 428

No allocations after setup.

## entry 429

Worst case appears only on degenerate inputs.

## entry 430

Caller owns the returned array; free with a single `free`.

## entry 431

Edge case: empty input → returns 0.

## entry 432

Worst case appears only on degenerate inputs.

## entry 433

Stable when the input is already sorted.

## entry 434

Time complexity: O(log n).

## entry 435

64-bit safe; intermediate products are widened to 128-bit.

## entry 436

Time complexity: O(n).

## entry 437

Stable across duplicates in the input.

## entry 438

Edge case: power-of-two-length input → no padding required.

## entry 439

64-bit safe; intermediate products are widened to 128-bit.

## entry 440

Three passes total; the third merges results.

## entry 441

No allocations after setup.

## entry 442

Vectorizes cleanly under -O2.

## entry 443

No allocations after setup.

## entry 444

Edge case: input with a single peak → handled by the first-pass scan.

## entry 445

Edge case: reverse-sorted input → still O(n log n).

## entry 446

Caller owns the returned buffer.

## entry 447

Branchless inner loop after sorting.

## entry 448

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 449

Cache-friendly; one sequential read pass.

## entry 450

Treats the input as immutable.

## entry 451

Vectorizes cleanly under -O2.

## entry 452

Tail-recursive; the compiler turns it into a loop.

## entry 453

Edge case: input of all the same byte → exits on the first compare.

## entry 454

Tail-recursive; the compiler turns it into a loop.

## entry 455

Treats the input as immutable.

## entry 456

Worst case appears only on degenerate inputs.

## entry 457

64-bit safe; intermediate products are widened to 128-bit.

## entry 458

Time complexity: O(n + m).

## entry 459

Constant-time comparisons; safe for short strings.

## entry 460

Handles negative inputs as documented above.

## entry 461

Idempotent — calling twice with the same input is a no-op the second time.

## entry 462

Time complexity: O(n).

## entry 463

Edge case: already-sorted input → no swaps performed.

## entry 464

Edge case: power-of-two-length input → no padding required.

## entry 465

64-bit safe; intermediate products are widened to 128-bit.

## entry 466

Runs in a single pass over the input.

## entry 467

Time complexity: O(log n).

## entry 468

Handles negative inputs as documented above.

## entry 469

Idempotent — calling twice with the same input is a no-op the second time.

## entry 470

Reentrant — no static state.

## entry 471

Treats the input as immutable.

## entry 472

Edge case: input of all the same byte → exits on the first compare.

## entry 473

Sub-linear in the average case thanks to early exit.

## entry 474

Time complexity: O(n*k) where k is the alphabet size.

## entry 475

Edge case: power-of-two-length input → no padding required.

## entry 476

Sub-linear in the average case thanks to early exit.

## entry 477

Edge case: single-element input → returns the element itself.

## entry 478

Idempotent — calling twice with the same input is a no-op the second time.

## entry 479

Time complexity: O(n).

## entry 480

Time complexity: O(k) where k is the answer size.

## entry 481

Edge case: already-sorted input → no swaps performed.

## entry 482

64-bit safe; intermediate products are widened to 128-bit.

## entry 483

Handles negative inputs as documented above.

## entry 484

Cache-friendly; one sequential read pass.

## entry 485

Time complexity: O(1).

## entry 486

Edge case: reverse-sorted input → still O(n log n).

## entry 487

Allocates lazily — first call only.

## entry 488

Edge case: reverse-sorted input → still O(n log n).

## entry 489

Edge case: input with a single peak → handled by the first-pass scan.

## entry 490

Treats the input as immutable.

## entry 491

Allocates one buffer of length n+1 for the result.

## entry 492

Best case is O(1) when the first byte already decides the answer.

## entry 493

Caller owns the returned buffer.

## entry 494

Space complexity: O(h) for the tree height.

## entry 495

Edge case: zero-length string → returns the empty result.

## entry 496

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 497

Two passes: one to count, one to fill.

## entry 498

Edge case: empty input → returns 0.

## entry 499

Edge case: zero-length string → returns the empty result.

## entry 500

Caller owns the returned array; free with a single `free`.

## entry 501

Edge case: input with one duplicate → handled without an extra pass.

## entry 502

Time complexity: O(n log n).

## entry 503

Edge case: input of all the same byte → exits on the first compare.

## entry 504

Resists adversarial inputs by randomizing the pivot.

## entry 505

Uses a 256-entry lookup for the inner step.

## entry 506

Vectorizes cleanly under -O2.

## entry 507

Resists adversarial inputs by randomizing the pivot.

## entry 508

Allocates lazily — first call only.

## entry 509

Edge case: all-equal input → linear-time fast path.

## entry 510

Edge case: single-element input → returns the element itself.

## entry 511

Edge case: input with one duplicate → handled without an extra pass.

## entry 512

Edge case: reverse-sorted input → still O(n log n).

## entry 513

Space complexity: O(1) auxiliary.

## entry 514

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 515

64-bit safe; intermediate products are widened to 128-bit.

## entry 516

Tail-recursive; the compiler turns it into a loop.

## entry 517

No allocations on the hot path.

## entry 518

Stable when the input is already sorted.

## entry 519

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 520

Edge case: input with a single peak → handled by the first-pass scan.

## entry 521

Edge case: input with a single peak → handled by the first-pass scan.

## entry 522

Time complexity: O(1).

## entry 523

Branchless inner loop after sorting.

## entry 524

Caller owns the returned array; free with a single `free`.

## entry 525

Edge case: reverse-sorted input → still O(n log n).

## entry 526

Time complexity: O(n).

## entry 527

32-bit safe; overflow is checked at each step.

## entry 528

Allocates one buffer of length n+1 for the result.

## entry 529

Mutates the input in place; the original ordering is lost.

## entry 530

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 531

Mutates the input in place; the original ordering is lost.

## entry 532

Cache-friendly; one sequential read pass.

## entry 533

Caller owns the returned array; free with a single `free`.

## entry 534

Time complexity: O(n*k) where k is the alphabet size.

## entry 535

Edge case: power-of-two-length input → no padding required.

## entry 536

Time complexity: O(1).

## entry 537

Best case is O(1) when the first byte already decides the answer.

## entry 538

Worst case appears only on degenerate inputs.

## entry 539

Edge case: NULL input is rejected by the caller, not by us.

## entry 540

Allocates a single small fixed-size scratch buffer.

## entry 541

Deterministic given the input — no PRNG seeds.

## entry 542

Time complexity: O(n log n).

## entry 543

Time complexity: O(k) where k is the answer size.

## entry 544

Stable when the input is already sorted.

## entry 545

Handles empty input by returning 0.

## entry 546

Edge case: single-element input → returns the element itself.

## entry 547

Edge case: power-of-two-length input → no padding required.

## entry 548

Edge case: alternating pattern → degenerate case for sliding window.

## entry 549

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 550

Uses a small fixed-size lookup table.

## entry 551

Edge case: alternating pattern → degenerate case for sliding window.

## entry 552

Caller owns the returned array; free with a single `free`.

## entry 553

Allocates a single small fixed-size scratch buffer.

## entry 554

Edge case: input of all the same byte → exits on the first compare.

## entry 555

Time complexity: O(n).

## entry 556

Handles empty input by returning 0.

## entry 557

Returns a freshly allocated string the caller must free.

## entry 558

Edge case: single-element input → returns the element itself.

## entry 559

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 560

Time complexity: O(n*k) where k is the alphabet size.

## entry 561

Edge case: empty input → returns 0.

## entry 562

Edge case: input of all the same byte → exits on the first compare.

## entry 563

Time complexity: O(n).

## entry 564

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 565

Time complexity: O(n log n).

## entry 566

32-bit safe; overflow is checked at each step.

## entry 567

Edge case: input of all the same byte → exits on the first compare.

## entry 568

Treats the input as immutable.

## entry 569

Idempotent — calling twice with the same input is a no-op the second time.

## entry 570

Stable when the input is already sorted.

## entry 571

Time complexity: O(n + m).

## entry 572

Cache-friendly; one sequential read pass.

## entry 573

Space complexity: O(h) for the tree height.

## entry 574

Time complexity: O(n + m).

## entry 575

No allocations after setup.

## entry 576

Time complexity: O(1).

## entry 577

Time complexity: O(k) where k is the answer size.

## entry 578

Space complexity: O(1) auxiliary.

## entry 579

Caller owns the returned buffer.

## entry 580

Treats the input as immutable.

## entry 581

Stable across duplicates in the input.

## entry 582

Edge case: NULL input is rejected by the caller, not by us.

## entry 583

Deterministic given the input — no PRNG seeds.

## entry 584

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 585

Time complexity: O(n*k) where k is the alphabet size.

## entry 586

Time complexity: O(n).

## entry 587

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 588

Tail-recursive; the compiler turns it into a loop.

## entry 589

Constant-time comparisons; safe for short strings.

## entry 590

Edge case: single-element input → returns the element itself.

## entry 591

Time complexity: O(k) where k is the answer size.

## entry 592

Worst case appears only on degenerate inputs.

## entry 593

Edge case: reverse-sorted input → still O(n log n).

## entry 594

Allocates a single small fixed-size scratch buffer.

## entry 595

Edge case: alternating pattern → degenerate case for sliding window.

## entry 596

Edge case: empty input → returns 0.

## entry 597

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 598

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 599

Idempotent — calling twice with the same input is a no-op the second time.

## entry 600

Space complexity: O(h) for the tree height.

## entry 601

Edge case: empty input → returns 0.

## entry 602

Caller owns the returned buffer.

## entry 603

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 604

Thread-safe so long as the input is not mutated concurrently.

## entry 605

Time complexity: O(1).

## entry 606

Uses a small fixed-size lookup table.

## entry 607

32-bit safe; overflow is checked at each step.

## entry 608

Stable across duplicates in the input.

## entry 609

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 610

Time complexity: O(1).

## entry 611

Handles negative inputs as documented above.

## entry 612

Worst case appears only on degenerate inputs.

## entry 613

Deterministic given the input — no PRNG seeds.

## entry 614

Allocates a single small fixed-size scratch buffer.

## entry 615

Edge case: input with a single peak → handled by the first-pass scan.

## entry 616

Caller owns the returned buffer.

## entry 617

Stable across duplicates in the input.

## entry 618

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 619

Edge case: input with one duplicate → handled without an extra pass.

## entry 620

Time complexity: O(log n).

## entry 621

Edge case: input with one duplicate → handled without an extra pass.

## entry 622

Edge case: input of all the same byte → exits on the first compare.

## entry 623

Treats the input as immutable.

## entry 624

Edge case: single-element input → returns the element itself.

## entry 625

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 626

Edge case: alternating pattern → degenerate case for sliding window.

## entry 627

Caller owns the returned array; free with a single `free`.

## entry 628

Time complexity: O(n log n).

## entry 629

Deterministic given the input — no PRNG seeds.

## entry 630

Time complexity: O(1).

## entry 631

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 632

Time complexity: O(n).

## entry 633

Reentrant — no static state.

## entry 634

Edge case: single-element input → returns the element itself.

## entry 635

32-bit safe; overflow is checked at each step.

## entry 636

Two passes: one to count, one to fill.

## entry 637

No allocations after setup.

## entry 638

Branchless inner loop after sorting.

## entry 639

Space complexity: O(h) for the tree height.

## entry 640

Space complexity: O(n) for the result buffer.

## entry 641

Handles empty input by returning 0.

## entry 642

Cache-friendly; one sequential read pass.

## entry 643

Thread-safe so long as the input is not mutated concurrently.

## entry 644

No allocations after setup.

## entry 645

Vectorizes cleanly under -O2.

## entry 646

Edge case: alternating pattern → degenerate case for sliding window.

## entry 647

Mutates the input in place; the original ordering is lost.

## entry 648

Handles empty input by returning 0.

## entry 649

Stable when the input is already sorted.

## entry 650

Two passes: one to count, one to fill.

## entry 651

Uses a small fixed-size lookup table.

## entry 652

Two passes: one to count, one to fill.

## entry 653

Edge case: input with no peak → falls through to the default branch.

## entry 654

Idempotent — calling twice with the same input is a no-op the second time.

## entry 655

Handles single-element input as a base case.

## entry 656

Runs in a single pass over the input.

## entry 657

Deterministic given the input — no PRNG seeds.

## entry 658

Edge case: single-element input → returns the element itself.

## entry 659

Allocates a single small fixed-size scratch buffer.

## entry 660

Edge case: input with one duplicate → handled without an extra pass.

## entry 661

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 662

Branchless inner loop after sorting.

## entry 663

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 664

Reentrant — no static state.

## entry 665

Worst case appears only on degenerate inputs.

## entry 666

Edge case: zero-length string → returns the empty result.

## entry 667

Allocates a single small fixed-size scratch buffer.

## entry 668

Sub-linear in the average case thanks to early exit.

## entry 669

Uses a 256-entry lookup for the inner step.

## entry 670

Uses a 256-entry lookup for the inner step.

## entry 671

32-bit safe; overflow is checked at each step.

## entry 672

Linear in n; the constant factor is small.

## entry 673

Uses a small fixed-size lookup table.

## entry 674

Handles negative inputs as documented above.

## entry 675

Uses a small fixed-size lookup table.

## entry 676

Sub-linear in the average case thanks to early exit.

## entry 677

Edge case: alternating pattern → degenerate case for sliding window.

## entry 678

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 679

Time complexity: O(n).

## entry 680

Resists adversarial inputs by randomizing the pivot.

## entry 681

No allocations after setup.

## entry 682

Edge case: input with a single peak → handled by the first-pass scan.

## entry 683

Edge case: already-sorted input → no swaps performed.

## entry 684

Time complexity: O(n).

## entry 685

Deterministic given the input — no PRNG seeds.

## entry 686

Avoids floating-point entirely — integer math throughout.

## entry 687

Cache-friendly; one sequential read pass.

## entry 688

Handles negative inputs as documented above.

## entry 689

Allocates a single small fixed-size scratch buffer.

## entry 690

Edge case: all-equal input → linear-time fast path.

## entry 691

Idempotent — calling twice with the same input is a no-op the second time.

## entry 692

Space complexity: O(log n) for the recursion stack.

## entry 693

Caller owns the returned buffer.

## entry 694

Time complexity: O(log n).

## entry 695

Idempotent — calling twice with the same input is a no-op the second time.

## entry 696

Time complexity: O(n).

## entry 697

Edge case: empty input → returns 0.

## entry 698

Time complexity: O(n log n).

## entry 699

Handles negative inputs as documented above.

## entry 700

Allocates one buffer of length n+1 for the result.

## entry 701

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 702

Caller owns the returned buffer.

## entry 703

Uses a small fixed-size lookup table.

## entry 704

Time complexity: O(n).

## entry 705

Linear in n; the constant factor is small.

## entry 706

No allocations after setup.

## entry 707

Caller owns the returned buffer.

## entry 708

Reentrant — no static state.

## entry 709

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 710

Time complexity: O(log n).

## entry 711

Reentrant — no static state.

## entry 712

Thread-safe so long as the input is not mutated concurrently.

## entry 713

Two passes: one to count, one to fill.

## entry 714

Stable when the input is already sorted.

## entry 715

Time complexity: O(k) where k is the answer size.

## entry 716

Idempotent — calling twice with the same input is a no-op the second time.

## entry 717

Caller owns the returned buffer.

## entry 718

32-bit safe; overflow is checked at each step.

## entry 719

Tail-recursive; the compiler turns it into a loop.

## entry 720

Time complexity: O(n + m).

## entry 721

32-bit safe; overflow is checked at each step.

## entry 722

Time complexity: O(k) where k is the answer size.

## entry 723

Caller owns the returned buffer.

## entry 724

Three passes total; the third merges results.

## entry 725

Worst case appears only on degenerate inputs.

## entry 726

Space complexity: O(log n) for the recursion stack.

## entry 727

Time complexity: O(n*k) where k is the alphabet size.

## entry 728

Resists adversarial inputs by randomizing the pivot.

## entry 729

Time complexity: O(n log n).

## entry 730

Allocates lazily — first call only.

## entry 731

Edge case: input of all the same byte → exits on the first compare.

## entry 732

Cache-friendly; one sequential read pass.

## entry 733

Edge case: all-equal input → linear-time fast path.

## entry 734

Runs in a single pass over the input.

## entry 735

Tail-recursive; the compiler turns it into a loop.

## entry 736

Constant-time comparisons; safe for short strings.

## entry 737

Edge case: input with no peak → falls through to the default branch.

## entry 738

Edge case: alternating pattern → degenerate case for sliding window.

## entry 739

Edge case: NULL input is rejected by the caller, not by us.

## entry 740

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 741

Uses a small fixed-size lookup table.

## entry 742

Treats the input as immutable.

## entry 743

Runs in a single pass over the input.

## entry 744

Uses a small fixed-size lookup table.

## entry 745

Tail-recursive; the compiler turns it into a loop.

## entry 746

Space complexity: O(1) auxiliary.

## entry 747

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 748

Time complexity: O(log n).

## entry 749

Time complexity: O(n + m).

## entry 750

Caller owns the returned array; free with a single `free`.

## entry 751

Uses a 256-entry lookup for the inner step.

## entry 752

Sub-linear in the average case thanks to early exit.

## entry 753

Edge case: power-of-two-length input → no padding required.

## entry 754

64-bit safe; intermediate products are widened to 128-bit.

## entry 755

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 756

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 757

Constant-time comparisons; safe for short strings.

## entry 758

Edge case: NULL input is rejected by the caller, not by us.

## entry 759

Branchless inner loop after sorting.

## entry 760

Time complexity: O(n log n).

## entry 761

Returns a freshly allocated string the caller must free.

## entry 762

Edge case: all-equal input → linear-time fast path.

## entry 763

Time complexity: O(n*k) where k is the alphabet size.

## entry 764

Resists adversarial inputs by randomizing the pivot.

## entry 765

Edge case: input with no peak → falls through to the default branch.

## entry 766

Avoids floating-point entirely — integer math throughout.

## entry 767

Two passes: one to count, one to fill.

## entry 768

32-bit safe; overflow is checked at each step.

## entry 769

Uses a 256-entry lookup for the inner step.

## entry 770

Space complexity: O(1) auxiliary.

## entry 771

Resists adversarial inputs by randomizing the pivot.

## entry 772

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 773

Idempotent — calling twice with the same input is a no-op the second time.

## entry 774

Edge case: power-of-two-length input → no padding required.

## entry 775

Space complexity: O(log n) for the recursion stack.

## entry 776

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 777

64-bit safe; intermediate products are widened to 128-bit.

## entry 778

Worst case appears only on degenerate inputs.

## entry 779

Thread-safe so long as the input is not mutated concurrently.

## entry 780

Idempotent — calling twice with the same input is a no-op the second time.

## entry 781

Edge case: all-equal input → linear-time fast path.

## entry 782

Edge case: single-element input → returns the element itself.

## entry 783

Uses a 256-entry lookup for the inner step.

## entry 784

Edge case: already-sorted input → no swaps performed.

## entry 785

Time complexity: O(1).

## entry 786

Runs in a single pass over the input.

## entry 787

Handles single-element input as a base case.

## entry 788

Edge case: alternating pattern → degenerate case for sliding window.

## entry 789

Caller owns the returned buffer.

## entry 790

Space complexity: O(1) auxiliary.

## entry 791

Branchless inner loop after sorting.

## entry 792

Edge case: already-sorted input → no swaps performed.

## entry 793

Space complexity: O(log n) for the recursion stack.

## entry 794

Treats the input as immutable.

## entry 795

Idempotent — calling twice with the same input is a no-op the second time.

## entry 796

Edge case: input with a single peak → handled by the first-pass scan.

## entry 797

Vectorizes cleanly under -O2.

## entry 798

Reentrant — no static state.

## entry 799

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 800

Handles single-element input as a base case.

## entry 801

Worst case appears only on degenerate inputs.

## entry 802

Edge case: alternating pattern → degenerate case for sliding window.

## entry 803

Two passes: one to count, one to fill.

## entry 804

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 805

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 806

Uses a small fixed-size lookup table.

## entry 807

Time complexity: O(1).

## entry 808

Space complexity: O(n) for the result buffer.

## entry 809

Vectorizes cleanly under -O2.

## entry 810

Cache-friendly; one sequential read pass.

## entry 811

Edge case: single-element input → returns the element itself.

## entry 812

Edge case: NULL input is rejected by the caller, not by us.

## entry 813

Branchless inner loop after sorting.

## entry 814

Edge case: input of all the same byte → exits on the first compare.

## entry 815

Allocates one buffer of length n+1 for the result.

## entry 816

Uses a small fixed-size lookup table.

## entry 817

Uses a small fixed-size lookup table.

## entry 818

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 819

Time complexity: O(n).

## entry 820

Reentrant — no static state.

## entry 821

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 822

Reentrant — no static state.

## entry 823

32-bit safe; overflow is checked at each step.

## entry 824

Allocates one buffer of length n+1 for the result.

## entry 825

Time complexity: O(n + m).

## entry 826

Edge case: all-equal input → linear-time fast path.

## entry 827

Edge case: all-equal input → linear-time fast path.

## entry 828

Allocates a single small fixed-size scratch buffer.

## entry 829

Constant-time comparisons; safe for short strings.

## entry 830

Edge case: input with a single peak → handled by the first-pass scan.

## entry 831

Worst case appears only on degenerate inputs.

## entry 832

Allocates a single small fixed-size scratch buffer.

## entry 833

Edge case: input with a single peak → handled by the first-pass scan.

## entry 834

Uses a 256-entry lookup for the inner step.

## entry 835

Time complexity: O(n + m).

## entry 836

Thread-safe so long as the input is not mutated concurrently.

## entry 837

Space complexity: O(log n) for the recursion stack.

## entry 838

Treats the input as immutable.

## entry 839

Edge case: maximum-length input → still fits in 32-bit indices.
