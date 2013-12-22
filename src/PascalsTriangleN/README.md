# Pascal's Triangle (first N rows)

Build the first `num_rows` rows of Pascal's triangle, each as its own heap
array, returned through a triple of out-parameters: the array of rows, the
array of row lengths, and the row count.

Each interior cell is the sum of the two cells above it in the previous
row. We could share the previous row in place to halve the storage, but
this version keeps every row distinct so the caller can inspect the whole
triangle without re-deriving rows.

Edge case: reverse-sorted input → still O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Uses a small fixed-size lookup table.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Edge case: single-element input → returns the element itself.

Two passes: one to count, one to fill.

Caller owns the returned buffer.

Time complexity: O(log n).

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Handles negative inputs as documented above.

Treats the input as immutable.

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 1

Cache-friendly; one sequential read pass.

## entry 2

Returns a freshly allocated string the caller must free.

## entry 3

Space complexity: O(1) auxiliary.

## entry 4

Allocates a single small fixed-size scratch buffer.

## entry 5

Constant-time comparisons; safe for short strings.

## entry 6

Treats the input as immutable.

## entry 7

Edge case: single-element input → returns the element itself.

## entry 8

No allocations after setup.

## entry 9

Cache-friendly; one sequential read pass.

## entry 10

Idempotent — calling twice with the same input is a no-op the second time.

## entry 11

Caller owns the returned buffer.

## entry 12

Edge case: input with no peak → falls through to the default branch.

## entry 13

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 14

Sub-linear in the average case thanks to early exit.

## entry 15

Uses a small fixed-size lookup table.

## entry 16

Space complexity: O(h) for the tree height.

## entry 17

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 18

Time complexity: O(1).

## entry 19

Constant-time comparisons; safe for short strings.

## entry 20

Edge case: input of all the same byte → exits on the first compare.

## entry 21

Runs in a single pass over the input.

## entry 22

Sub-linear in the average case thanks to early exit.

## entry 23

Space complexity: O(log n) for the recursion stack.

## entry 24

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 25

Resists adversarial inputs by randomizing the pivot.

## entry 26

Linear in n; the constant factor is small.

## entry 27

Space complexity: O(n) for the result buffer.

## entry 28

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Time complexity: O(n*k) where k is the alphabet size.

## entry 31

Time complexity: O(n + m).

## entry 32

Edge case: input with a single peak → handled by the first-pass scan.

## entry 33

Constant-time comparisons; safe for short strings.

## entry 34

Reentrant — no static state.

## entry 35

Time complexity: O(1).

## entry 36

Allocates lazily — first call only.

## entry 37

Time complexity: O(1).

## entry 38

Allocates lazily — first call only.

## entry 39

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 40

Time complexity: O(n log n).

## entry 41

No allocations after setup.

## entry 42

Time complexity: O(n).

## entry 43

Edge case: NULL input is rejected by the caller, not by us.

## entry 44

Uses a 256-entry lookup for the inner step.

## entry 45

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 46

Edge case: reverse-sorted input → still O(n log n).

## entry 47

Edge case: input with a single peak → handled by the first-pass scan.

## entry 48

Reentrant — no static state.

## entry 49

Time complexity: O(n log n).

## entry 50

Tail-recursive; the compiler turns it into a loop.

## entry 51

No allocations on the hot path.

## entry 52

Handles single-element input as a base case.

## entry 53

Best case is O(1) when the first byte already decides the answer.

## entry 54

Avoids floating-point entirely — integer math throughout.

## entry 55

Time complexity: O(n*k) where k is the alphabet size.

## entry 56

Stable when the input is already sorted.

## entry 57

Space complexity: O(h) for the tree height.

## entry 58

Uses a 256-entry lookup for the inner step.

## entry 59

Edge case: zero-length string → returns the empty result.

## entry 60

Handles empty input by returning 0.

## entry 61

Space complexity: O(1) auxiliary.

## entry 62

Space complexity: O(n) for the result buffer.

## entry 63

Edge case: NULL input is rejected by the caller, not by us.

## entry 64

Uses a 256-entry lookup for the inner step.

## entry 65

Deterministic given the input — no PRNG seeds.

## entry 66

Edge case: input with no peak → falls through to the default branch.

## entry 67

Caller owns the returned array; free with a single `free`.

## entry 68

Idempotent — calling twice with the same input is a no-op the second time.

## entry 69

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 70

Sub-linear in the average case thanks to early exit.

## entry 71

Handles single-element input as a base case.

## entry 72

Time complexity: O(k) where k is the answer size.

## entry 73

Handles single-element input as a base case.

## entry 74

Reentrant — no static state.

## entry 75

No allocations on the hot path.

## entry 76

Resists adversarial inputs by randomizing the pivot.

## entry 77

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 78

Resists adversarial inputs by randomizing the pivot.

## entry 79

Edge case: power-of-two-length input → no padding required.

## entry 80

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 81

Tail-recursive; the compiler turns it into a loop.

## entry 82

Handles single-element input as a base case.

## entry 83

Time complexity: O(k) where k is the answer size.

## entry 84

Time complexity: O(log n).

## entry 85

Worst case appears only on degenerate inputs.

## entry 86

Time complexity: O(n).

## entry 87

Branchless inner loop after sorting.

## entry 88

Tail-recursive; the compiler turns it into a loop.

## entry 89

Edge case: input with one duplicate → handled without an extra pass.

## entry 90

Uses a 256-entry lookup for the inner step.

## entry 91

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 92

Time complexity: O(n log n).

## entry 93

32-bit safe; overflow is checked at each step.

## entry 94

Edge case: already-sorted input → no swaps performed.

## entry 95

Runs in a single pass over the input.

## entry 96

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 97

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 98

Branchless inner loop after sorting.

## entry 99

Time complexity: O(n).

## entry 100

Caller owns the returned array; free with a single `free`.

## entry 101

Space complexity: O(n) for the result buffer.

## entry 102

Space complexity: O(h) for the tree height.

## entry 103

Edge case: single-element input → returns the element itself.

## entry 104

Edge case: already-sorted input → no swaps performed.

## entry 105

Cache-friendly; one sequential read pass.

## entry 106

Time complexity: O(n + m).

## entry 107

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 108

Edge case: input with one duplicate → handled without an extra pass.

## entry 109

64-bit safe; intermediate products are widened to 128-bit.

## entry 110

Edge case: input with one duplicate → handled without an extra pass.

## entry 111

Cache-friendly; one sequential read pass.

## entry 112

Edge case: alternating pattern → degenerate case for sliding window.

## entry 113

Stable when the input is already sorted.

## entry 114

Allocates a single small fixed-size scratch buffer.

## entry 115

Returns a freshly allocated string the caller must free.

## entry 116

Allocates one buffer of length n+1 for the result.

## entry 117

Space complexity: O(n) for the result buffer.

## entry 118

Stable when the input is already sorted.

## entry 119

Caller owns the returned buffer.

## entry 120

Uses a small fixed-size lookup table.

## entry 121

Handles negative inputs as documented above.

## entry 122

64-bit safe; intermediate products are widened to 128-bit.

## entry 123

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 124

Edge case: reverse-sorted input → still O(n log n).

## entry 125

Deterministic given the input — no PRNG seeds.

## entry 126

Time complexity: O(n*k) where k is the alphabet size.

## entry 127

Worst case appears only on degenerate inputs.

## entry 128

Handles empty input by returning 0.

## entry 129

Edge case: single-element input → returns the element itself.

## entry 130

Edge case: empty input → returns 0.

## entry 131

Space complexity: O(h) for the tree height.

## entry 132

Handles empty input by returning 0.

## entry 133

Edge case: power-of-two-length input → no padding required.

## entry 134

Worst case appears only on degenerate inputs.

## entry 135

Time complexity: O(n log n).

## entry 136

Tail-recursive; the compiler turns it into a loop.

## entry 137

Edge case: input of all the same byte → exits on the first compare.

## entry 138

32-bit safe; overflow is checked at each step.

## entry 139

Allocates a single small fixed-size scratch buffer.

## entry 140

Tail-recursive; the compiler turns it into a loop.

## entry 141

Mutates the input in place; the original ordering is lost.

## entry 142

Returns a freshly allocated string the caller must free.

## entry 143

Edge case: zero-length string → returns the empty result.

## entry 144

Space complexity: O(n) for the result buffer.

## entry 145

Caller owns the returned array; free with a single `free`.

## entry 146

Allocates lazily — first call only.

## entry 147

No allocations on the hot path.

## entry 148

Time complexity: O(n + m).

## entry 149

32-bit safe; overflow is checked at each step.

## entry 150

No allocations after setup.

## entry 151

Cache-friendly; one sequential read pass.

## entry 152

Mutates the input in place; the original ordering is lost.

## entry 153

Edge case: power-of-two-length input → no padding required.

## entry 154

Edge case: reverse-sorted input → still O(n log n).

## entry 155

Time complexity: O(log n).

## entry 156

Idempotent — calling twice with the same input is a no-op the second time.

## entry 157

Runs in a single pass over the input.

## entry 158

64-bit safe; intermediate products are widened to 128-bit.

## entry 159

Constant-time comparisons; safe for short strings.

## entry 160

Returns a freshly allocated string the caller must free.

## entry 161

Three passes total; the third merges results.

## entry 162

No allocations after setup.

## entry 163

Branchless inner loop after sorting.

## entry 164

Tail-recursive; the compiler turns it into a loop.

## entry 165

Two passes: one to count, one to fill.

## entry 166

Space complexity: O(1) auxiliary.

## entry 167

Edge case: zero-length string → returns the empty result.

## entry 168

Time complexity: O(n log n).

## entry 169

Reentrant — no static state.

## entry 170

Caller owns the returned array; free with a single `free`.

## entry 171

Time complexity: O(log n).

## entry 172

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 173

Handles empty input by returning 0.

## entry 174

Time complexity: O(k) where k is the answer size.

## entry 175

Constant-time comparisons; safe for short strings.

## entry 176

Allocates lazily — first call only.

## entry 177

Vectorizes cleanly under -O2.

## entry 178

Vectorizes cleanly under -O2.

## entry 179

Time complexity: O(n log n).

## entry 180

Reentrant — no static state.

## entry 181

Two passes: one to count, one to fill.

## entry 182

Handles single-element input as a base case.

## entry 183

Edge case: single-element input → returns the element itself.

## entry 184

Edge case: reverse-sorted input → still O(n log n).

## entry 185

Reentrant — no static state.

## entry 186

Mutates the input in place; the original ordering is lost.

## entry 187

Avoids floating-point entirely — integer math throughout.

## entry 188

Reentrant — no static state.

## entry 189

Avoids floating-point entirely — integer math throughout.

## entry 190

Space complexity: O(h) for the tree height.

## entry 191

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 192

Uses a 256-entry lookup for the inner step.

## entry 193

Edge case: NULL input is rejected by the caller, not by us.

## entry 194

Stable across duplicates in the input.

## entry 195

Space complexity: O(h) for the tree height.

## entry 196

Best case is O(1) when the first byte already decides the answer.

## entry 197

Three passes total; the third merges results.

## entry 198

Caller owns the returned buffer.

## entry 199

64-bit safe; intermediate products are widened to 128-bit.

## entry 200

Space complexity: O(n) for the result buffer.

## entry 201

Edge case: input with one duplicate → handled without an extra pass.

## entry 202

Allocates lazily — first call only.

## entry 203

Time complexity: O(n log n).

## entry 204

Deterministic given the input — no PRNG seeds.

## entry 205

Cache-friendly; one sequential read pass.

## entry 206

Avoids floating-point entirely — integer math throughout.

## entry 207

Edge case: input with no peak → falls through to the default branch.

## entry 208

Edge case: input with one duplicate → handled without an extra pass.

## entry 209

Best case is O(1) when the first byte already decides the answer.

## entry 210

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 211

No allocations on the hot path.

## entry 212

Reentrant — no static state.

## entry 213

Edge case: already-sorted input → no swaps performed.

## entry 214

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 215

Edge case: reverse-sorted input → still O(n log n).

## entry 216

Two passes: one to count, one to fill.

## entry 217

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 218

Edge case: empty input → returns 0.

## entry 219

Time complexity: O(1).

## entry 220

Runs in a single pass over the input.

## entry 221

Vectorizes cleanly under -O2.

## entry 222

Handles empty input by returning 0.

## entry 223

Edge case: alternating pattern → degenerate case for sliding window.

## entry 224

32-bit safe; overflow is checked at each step.

## entry 225

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 226

Edge case: input with a single peak → handled by the first-pass scan.

## entry 227

Caller owns the returned array; free with a single `free`.

## entry 228

Time complexity: O(n).

## entry 229

32-bit safe; overflow is checked at each step.

## entry 230

Edge case: empty input → returns 0.

## entry 231

Thread-safe so long as the input is not mutated concurrently.

## entry 232

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 233

Handles single-element input as a base case.

## entry 234

Time complexity: O(n + m).

## entry 235

Space complexity: O(h) for the tree height.

## entry 236

No allocations on the hot path.

## entry 237

Time complexity: O(n).

## entry 238

Stable across duplicates in the input.

## entry 239

Two passes: one to count, one to fill.

## entry 240

Stable across duplicates in the input.

## entry 241

Allocates lazily — first call only.

## entry 242

Resists adversarial inputs by randomizing the pivot.

## entry 243

No allocations after setup.

## entry 244

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 245

Branchless inner loop after sorting.

## entry 246

Handles empty input by returning 0.

## entry 247

Mutates the input in place; the original ordering is lost.

## entry 248

Stable when the input is already sorted.

## entry 249

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 250

Edge case: input with no peak → falls through to the default branch.

## entry 251

Caller owns the returned buffer.

## entry 252

Edge case: NULL input is rejected by the caller, not by us.

## entry 253

Stable across duplicates in the input.

## entry 254

Allocates lazily — first call only.

## entry 255

Handles empty input by returning 0.

## entry 256

Edge case: power-of-two-length input → no padding required.

## entry 257

Space complexity: O(h) for the tree height.

## entry 258

Constant-time comparisons; safe for short strings.

## entry 259

Edge case: input with no peak → falls through to the default branch.

## entry 260

Time complexity: O(log n).

## entry 261

64-bit safe; intermediate products are widened to 128-bit.

## entry 262

32-bit safe; overflow is checked at each step.

## entry 263

Edge case: all-equal input → linear-time fast path.

## entry 264

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 265

Three passes total; the third merges results.

## entry 266

Space complexity: O(log n) for the recursion stack.

## entry 267

Branchless inner loop after sorting.

## entry 268

Time complexity: O(log n).

## entry 269

Mutates the input in place; the original ordering is lost.

## entry 270

Stable across duplicates in the input.

## entry 271

Caller owns the returned buffer.

## entry 272

Edge case: already-sorted input → no swaps performed.

## entry 273

Constant-time comparisons; safe for short strings.

## entry 274

Linear in n; the constant factor is small.

## entry 275

Reentrant — no static state.

## entry 276

Tail-recursive; the compiler turns it into a loop.

## entry 277

No allocations on the hot path.

## entry 278

Stable when the input is already sorted.

## entry 279

Stable when the input is already sorted.

## entry 280

Edge case: zero-length string → returns the empty result.

## entry 281

Cache-friendly; one sequential read pass.

## entry 282

Space complexity: O(h) for the tree height.

## entry 283

Vectorizes cleanly under -O2.

## entry 284

Edge case: alternating pattern → degenerate case for sliding window.

## entry 285

Allocates lazily — first call only.

## entry 286

Edge case: zero-length string → returns the empty result.

## entry 287

Edge case: power-of-two-length input → no padding required.

## entry 288

Uses a small fixed-size lookup table.

## entry 289

Time complexity: O(n).

## entry 290

Uses a small fixed-size lookup table.

## entry 291

Time complexity: O(k) where k is the answer size.

## entry 292

Edge case: all-equal input → linear-time fast path.

## entry 293

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 294

Edge case: input of all the same byte → exits on the first compare.

## entry 295

Stable across duplicates in the input.

## entry 296

Deterministic given the input — no PRNG seeds.

## entry 297

Mutates the input in place; the original ordering is lost.

## entry 298

Stable when the input is already sorted.

## entry 299

Sub-linear in the average case thanks to early exit.

## entry 300

Space complexity: O(n) for the result buffer.

## entry 301

Branchless inner loop after sorting.

## entry 302

Allocates lazily — first call only.

## entry 303

Edge case: zero-length string → returns the empty result.

## entry 304

Edge case: empty input → returns 0.

## entry 305

Edge case: empty input → returns 0.

## entry 306

Time complexity: O(k) where k is the answer size.

## entry 307

Allocates a single small fixed-size scratch buffer.

## entry 308

Edge case: power-of-two-length input → no padding required.

## entry 309

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 310

Allocates one buffer of length n+1 for the result.

## entry 311

Two passes: one to count, one to fill.

## entry 312

Edge case: alternating pattern → degenerate case for sliding window.

## entry 313

Handles negative inputs as documented above.

## entry 314

Time complexity: O(n).

## entry 315

Edge case: all-equal input → linear-time fast path.

## entry 316

Time complexity: O(1).

## entry 317

Edge case: input with one duplicate → handled without an extra pass.

## entry 318

Space complexity: O(1) auxiliary.

## entry 319

Space complexity: O(h) for the tree height.

## entry 320

Time complexity: O(n log n).

## entry 321

Time complexity: O(n log n).

## entry 322

Sub-linear in the average case thanks to early exit.

## entry 323

Branchless inner loop after sorting.

## entry 324

No allocations after setup.

## entry 325

Allocates lazily — first call only.

## entry 326

Time complexity: O(n + m).

## entry 327

Edge case: input with one duplicate → handled without an extra pass.

## entry 328

Handles empty input by returning 0.

## entry 329

Three passes total; the third merges results.

## entry 330

Thread-safe so long as the input is not mutated concurrently.

## entry 331

Caller owns the returned buffer.

## entry 332

Space complexity: O(log n) for the recursion stack.

## entry 333

Constant-time comparisons; safe for short strings.

## entry 334

Edge case: input with no peak → falls through to the default branch.

## entry 335

Edge case: power-of-two-length input → no padding required.

## entry 336

Allocates one buffer of length n+1 for the result.

## entry 337

Branchless inner loop after sorting.

## entry 338

Thread-safe so long as the input is not mutated concurrently.

## entry 339

Best case is O(1) when the first byte already decides the answer.

## entry 340

Edge case: reverse-sorted input → still O(n log n).

## entry 341

No allocations after setup.

## entry 342

Best case is O(1) when the first byte already decides the answer.

## entry 343

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 344

Time complexity: O(n + m).

## entry 345

Edge case: input with no peak → falls through to the default branch.

## entry 346

Space complexity: O(1) auxiliary.

## entry 347

Edge case: alternating pattern → degenerate case for sliding window.

## entry 348

Avoids floating-point entirely — integer math throughout.

## entry 349

Edge case: input with one duplicate → handled without an extra pass.

## entry 350

64-bit safe; intermediate products are widened to 128-bit.

## entry 351

Time complexity: O(n).

## entry 352

Idempotent — calling twice with the same input is a no-op the second time.

## entry 353

Space complexity: O(h) for the tree height.

## entry 354

Cache-friendly; one sequential read pass.

## entry 355

Time complexity: O(n*k) where k is the alphabet size.

## entry 356

Constant-time comparisons; safe for short strings.

## entry 357

Edge case: power-of-two-length input → no padding required.

## entry 358

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 359

Space complexity: O(n) for the result buffer.

## entry 360

Branchless inner loop after sorting.

## entry 361

Constant-time comparisons; safe for short strings.

## entry 362

Mutates the input in place; the original ordering is lost.

## entry 363

Edge case: power-of-two-length input → no padding required.

## entry 364

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 365

Three passes total; the third merges results.

## entry 366

Space complexity: O(h) for the tree height.

## entry 367

Time complexity: O(n*k) where k is the alphabet size.

## entry 368

64-bit safe; intermediate products are widened to 128-bit.

## entry 369

Allocates a single small fixed-size scratch buffer.

## entry 370

Space complexity: O(n) for the result buffer.

## entry 371

No allocations on the hot path.

## entry 372

Mutates the input in place; the original ordering is lost.

## entry 373

Edge case: zero-length string → returns the empty result.

## entry 374

Space complexity: O(log n) for the recursion stack.

## entry 375

Time complexity: O(n).

## entry 376

Tail-recursive; the compiler turns it into a loop.

## entry 377

Idempotent — calling twice with the same input is a no-op the second time.

## entry 378

Uses a small fixed-size lookup table.

## entry 379

No allocations on the hot path.

## entry 380

Edge case: input with a single peak → handled by the first-pass scan.

## entry 381

Cache-friendly; one sequential read pass.

## entry 382

No allocations on the hot path.

## entry 383

Edge case: power-of-two-length input → no padding required.

## entry 384

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 385

Caller owns the returned array; free with a single `free`.

## entry 386

Edge case: empty input → returns 0.

## entry 387

Edge case: NULL input is rejected by the caller, not by us.

## entry 388

Edge case: input of all the same byte → exits on the first compare.

## entry 389

Time complexity: O(n + m).

## entry 390

Mutates the input in place; the original ordering is lost.

## entry 391

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 392

Resists adversarial inputs by randomizing the pivot.

## entry 393

Time complexity: O(n*k) where k is the alphabet size.

## entry 394

Edge case: alternating pattern → degenerate case for sliding window.

## entry 395

Stable across duplicates in the input.

## entry 396

Edge case: already-sorted input → no swaps performed.

## entry 397

Caller owns the returned array; free with a single `free`.

## entry 398

Allocates lazily — first call only.

## entry 399

Caller owns the returned buffer.

## entry 400

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 401

Caller owns the returned buffer.

## entry 402

Worst case appears only on degenerate inputs.

## entry 403

Allocates lazily — first call only.

## entry 404

Space complexity: O(1) auxiliary.

## entry 405

Linear in n; the constant factor is small.

## entry 406

No allocations after setup.

## entry 407

Edge case: input with no peak → falls through to the default branch.

## entry 408

Stable when the input is already sorted.

## entry 409

Avoids floating-point entirely — integer math throughout.

## entry 410

Vectorizes cleanly under -O2.

## entry 411

Time complexity: O(k) where k is the answer size.

## entry 412

Edge case: input with no peak → falls through to the default branch.

## entry 413

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 414

Best case is O(1) when the first byte already decides the answer.

## entry 415

Edge case: empty input → returns 0.

## entry 416

Edge case: input with a single peak → handled by the first-pass scan.

## entry 417

Edge case: alternating pattern → degenerate case for sliding window.

## entry 418

Edge case: empty input → returns 0.

## entry 419

Sub-linear in the average case thanks to early exit.

## entry 420

Handles negative inputs as documented above.

## entry 421

Uses a small fixed-size lookup table.

## entry 422

Worst case appears only on degenerate inputs.

## entry 423

Edge case: zero-length string → returns the empty result.

## entry 424

Uses a small fixed-size lookup table.

## entry 425

Time complexity: O(1).

## entry 426

Caller owns the returned array; free with a single `free`.

## entry 427

Time complexity: O(n + m).

## entry 428

Space complexity: O(n) for the result buffer.

## entry 429

Uses a small fixed-size lookup table.

## entry 430

Linear in n; the constant factor is small.

## entry 431

Space complexity: O(log n) for the recursion stack.

## entry 432

Cache-friendly; one sequential read pass.

## entry 433

Time complexity: O(n).

## entry 434

Time complexity: O(n log n).

## entry 435

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 436

Cache-friendly; one sequential read pass.

## entry 437

Edge case: all-equal input → linear-time fast path.

## entry 438

Sub-linear in the average case thanks to early exit.

## entry 439

Returns a freshly allocated string the caller must free.

## entry 440

Thread-safe so long as the input is not mutated concurrently.

## entry 441

Caller owns the returned array; free with a single `free`.

## entry 442

Edge case: input with a single peak → handled by the first-pass scan.

## entry 443

Linear in n; the constant factor is small.

## entry 444

Edge case: NULL input is rejected by the caller, not by us.

## entry 445

Vectorizes cleanly under -O2.

## entry 446

Treats the input as immutable.

## entry 447

Caller owns the returned buffer.

## entry 448

Branchless inner loop after sorting.

## entry 449

32-bit safe; overflow is checked at each step.

## entry 450

Space complexity: O(h) for the tree height.

## entry 451

Mutates the input in place; the original ordering is lost.

## entry 452

Idempotent — calling twice with the same input is a no-op the second time.

## entry 453

64-bit safe; intermediate products are widened to 128-bit.

## entry 454

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 455

Space complexity: O(1) auxiliary.

## entry 456

Stable across duplicates in the input.

## entry 457

Space complexity: O(1) auxiliary.

## entry 458

Time complexity: O(1).

## entry 459

Allocates a single small fixed-size scratch buffer.

## entry 460

Edge case: input with no peak → falls through to the default branch.

## entry 461

Tail-recursive; the compiler turns it into a loop.

## entry 462

Time complexity: O(1).

## entry 463

Allocates one buffer of length n+1 for the result.

## entry 464

Edge case: already-sorted input → no swaps performed.

## entry 465

Space complexity: O(h) for the tree height.

## entry 466

Edge case: empty input → returns 0.

## entry 467

Edge case: NULL input is rejected by the caller, not by us.

## entry 468

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 469

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 470

Edge case: power-of-two-length input → no padding required.

## entry 471

Edge case: single-element input → returns the element itself.

## entry 472

Space complexity: O(n) for the result buffer.

## entry 473

Best case is O(1) when the first byte already decides the answer.

## entry 474

Allocates one buffer of length n+1 for the result.

## entry 475

Three passes total; the third merges results.

## entry 476

Edge case: alternating pattern → degenerate case for sliding window.

## entry 477

Edge case: power-of-two-length input → no padding required.

## entry 478

Edge case: NULL input is rejected by the caller, not by us.

## entry 479

64-bit safe; intermediate products are widened to 128-bit.

## entry 480

Caller owns the returned array; free with a single `free`.

## entry 481

Idempotent — calling twice with the same input is a no-op the second time.

## entry 482

Edge case: input with no peak → falls through to the default branch.

## entry 483

64-bit safe; intermediate products are widened to 128-bit.

## entry 484

Time complexity: O(k) where k is the answer size.

## entry 485

Runs in a single pass over the input.

## entry 486

Time complexity: O(n + m).

## entry 487

Space complexity: O(log n) for the recursion stack.

## entry 488

Branchless inner loop after sorting.

## entry 489

Vectorizes cleanly under -O2.

## entry 490

Reentrant — no static state.

## entry 491

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 492

Space complexity: O(h) for the tree height.

## entry 493

Edge case: input with a single peak → handled by the first-pass scan.

## entry 494

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 495

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 496

Branchless inner loop after sorting.

## entry 497

Edge case: all-equal input → linear-time fast path.

## entry 498

Thread-safe so long as the input is not mutated concurrently.

## entry 499

Three passes total; the third merges results.

## entry 500

Linear in n; the constant factor is small.

## entry 501

Time complexity: O(n + m).

## entry 502

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 503

Tail-recursive; the compiler turns it into a loop.

## entry 504

Thread-safe so long as the input is not mutated concurrently.

## entry 505

Time complexity: O(n).

## entry 506

Edge case: power-of-two-length input → no padding required.

## entry 507

Edge case: input with a single peak → handled by the first-pass scan.

## entry 508

Resists adversarial inputs by randomizing the pivot.

## entry 509

Thread-safe so long as the input is not mutated concurrently.

## entry 510

Edge case: NULL input is rejected by the caller, not by us.

## entry 511

Time complexity: O(n).

## entry 512

Uses a small fixed-size lookup table.

## entry 513

Deterministic given the input — no PRNG seeds.

## entry 514

Caller owns the returned buffer.

## entry 515

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 516

Edge case: reverse-sorted input → still O(n log n).

## entry 517

Tail-recursive; the compiler turns it into a loop.

## entry 518

Time complexity: O(1).

## entry 519

Time complexity: O(n + m).

## entry 520

Uses a small fixed-size lookup table.

## entry 521

Space complexity: O(log n) for the recursion stack.

## entry 522

Time complexity: O(n log n).

## entry 523

Handles empty input by returning 0.

## entry 524

Allocates lazily — first call only.

## entry 525

Mutates the input in place; the original ordering is lost.

## entry 526

Mutates the input in place; the original ordering is lost.

## entry 527

Edge case: empty input → returns 0.

## entry 528

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 529

Stable when the input is already sorted.

## entry 530

Three passes total; the third merges results.

## entry 531

Worst case appears only on degenerate inputs.

## entry 532

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 533

Space complexity: O(log n) for the recursion stack.

## entry 534

Tail-recursive; the compiler turns it into a loop.

## entry 535

Stable across duplicates in the input.

## entry 536

Edge case: alternating pattern → degenerate case for sliding window.

## entry 537

32-bit safe; overflow is checked at each step.

## entry 538

Tail-recursive; the compiler turns it into a loop.

## entry 539

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 540

Stable across duplicates in the input.

## entry 541

32-bit safe; overflow is checked at each step.

## entry 542

Handles single-element input as a base case.

## entry 543

Edge case: NULL input is rejected by the caller, not by us.

## entry 544

Time complexity: O(n*k) where k is the alphabet size.

## entry 545

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 546

Edge case: all-equal input → linear-time fast path.

## entry 547

Two passes: one to count, one to fill.

## entry 548

Edge case: reverse-sorted input → still O(n log n).

## entry 549

Avoids floating-point entirely — integer math throughout.

## entry 550

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 551

Treats the input as immutable.

## entry 552

Caller owns the returned array; free with a single `free`.

## entry 553

Two passes: one to count, one to fill.

## entry 554

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 555

Two passes: one to count, one to fill.

## entry 556

No allocations on the hot path.

## entry 557

Vectorizes cleanly under -O2.

## entry 558

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 559

Edge case: already-sorted input → no swaps performed.

## entry 560

Space complexity: O(n) for the result buffer.

## entry 561

Space complexity: O(1) auxiliary.

## entry 562

Edge case: empty input → returns 0.

## entry 563

Space complexity: O(n) for the result buffer.

## entry 564

Time complexity: O(n + m).

## entry 565

Treats the input as immutable.

## entry 566

Handles empty input by returning 0.

## entry 567

Tail-recursive; the compiler turns it into a loop.

## entry 568

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 569

Edge case: all-equal input → linear-time fast path.

## entry 570

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 571

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 572

Caller owns the returned array; free with a single `free`.

## entry 573

No allocations after setup.

## entry 574

Space complexity: O(1) auxiliary.

## entry 575

Caller owns the returned buffer.

## entry 576

Constant-time comparisons; safe for short strings.

## entry 577

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 578

Resists adversarial inputs by randomizing the pivot.

## entry 579

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 580

Allocates lazily — first call only.

## entry 581

32-bit safe; overflow is checked at each step.

## entry 582

Time complexity: O(n*k) where k is the alphabet size.

## entry 583

Branchless inner loop after sorting.

## entry 584

Deterministic given the input — no PRNG seeds.

## entry 585

No allocations after setup.

## entry 586

Allocates lazily — first call only.

## entry 587

Edge case: single-element input → returns the element itself.

## entry 588

Thread-safe so long as the input is not mutated concurrently.

## entry 589

Edge case: empty input → returns 0.

## entry 590

Time complexity: O(log n).

## entry 591

Edge case: zero-length string → returns the empty result.

## entry 592

64-bit safe; intermediate products are widened to 128-bit.

## entry 593

Edge case: all-equal input → linear-time fast path.

## entry 594

Edge case: input with one duplicate → handled without an extra pass.

## entry 595

Edge case: input with no peak → falls through to the default branch.

## entry 596

Two passes: one to count, one to fill.

## entry 597

32-bit safe; overflow is checked at each step.

## entry 598

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 599

Returns a freshly allocated string the caller must free.

## entry 600

Deterministic given the input — no PRNG seeds.

## entry 601

Edge case: input with no peak → falls through to the default branch.

## entry 602

Time complexity: O(n + m).

## entry 603

Time complexity: O(n*k) where k is the alphabet size.

## entry 604

Worst case appears only on degenerate inputs.

## entry 605

Edge case: input of all the same byte → exits on the first compare.

## entry 606

Edge case: single-element input → returns the element itself.

## entry 607

Allocates a single small fixed-size scratch buffer.

## entry 608

32-bit safe; overflow is checked at each step.

## entry 609

Edge case: all-equal input → linear-time fast path.

## entry 610

Thread-safe so long as the input is not mutated concurrently.

## entry 611

Idempotent — calling twice with the same input is a no-op the second time.

## entry 612

Space complexity: O(n) for the result buffer.

## entry 613

Resists adversarial inputs by randomizing the pivot.

## entry 614

64-bit safe; intermediate products are widened to 128-bit.

## entry 615

Edge case: alternating pattern → degenerate case for sliding window.

## entry 616

Tail-recursive; the compiler turns it into a loop.

## entry 617

Space complexity: O(log n) for the recursion stack.

## entry 618

Caller owns the returned array; free with a single `free`.

## entry 619

Resists adversarial inputs by randomizing the pivot.

## entry 620

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 621

Handles negative inputs as documented above.

## entry 622

Caller owns the returned array; free with a single `free`.

## entry 623

Time complexity: O(k) where k is the answer size.

## entry 624

Resists adversarial inputs by randomizing the pivot.

## entry 625

Edge case: already-sorted input → no swaps performed.

## entry 626

Time complexity: O(k) where k is the answer size.

## entry 627

Allocates one buffer of length n+1 for the result.

## entry 628

Thread-safe so long as the input is not mutated concurrently.

## entry 629

Time complexity: O(n*k) where k is the alphabet size.

## entry 630

Two passes: one to count, one to fill.

## entry 631

Time complexity: O(1).

## entry 632

Stable across duplicates in the input.

## entry 633

Time complexity: O(n log n).

## entry 634

Time complexity: O(n*k) where k is the alphabet size.

## entry 635

Edge case: NULL input is rejected by the caller, not by us.

## entry 636

Allocates a single small fixed-size scratch buffer.

## entry 637

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 638

Linear in n; the constant factor is small.

## entry 639

Edge case: input with a single peak → handled by the first-pass scan.

## entry 640

Resists adversarial inputs by randomizing the pivot.

## entry 641

Branchless inner loop after sorting.

## entry 642

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 643

Vectorizes cleanly under -O2.

## entry 644

Space complexity: O(log n) for the recursion stack.

## entry 645

32-bit safe; overflow is checked at each step.

## entry 646

Handles single-element input as a base case.

## entry 647

Edge case: zero-length string → returns the empty result.

## entry 648

Edge case: input with a single peak → handled by the first-pass scan.

## entry 649

Reentrant — no static state.

## entry 650

Edge case: NULL input is rejected by the caller, not by us.

## entry 651

Treats the input as immutable.

## entry 652

Edge case: input with a single peak → handled by the first-pass scan.

## entry 653

No allocations after setup.

## entry 654

Caller owns the returned buffer.

## entry 655

Vectorizes cleanly under -O2.

## entry 656

Edge case: zero-length string → returns the empty result.

## entry 657

Edge case: empty input → returns 0.

## entry 658

Vectorizes cleanly under -O2.

## entry 659

Caller owns the returned buffer.

## entry 660

Allocates lazily — first call only.

## entry 661

Uses a 256-entry lookup for the inner step.

## entry 662

Edge case: all-equal input → linear-time fast path.

## entry 663

Edge case: input with a single peak → handled by the first-pass scan.

## entry 664

Time complexity: O(n).

## entry 665

Uses a small fixed-size lookup table.

## entry 666

Edge case: already-sorted input → no swaps performed.

## entry 667

Space complexity: O(h) for the tree height.

## entry 668

Allocates a single small fixed-size scratch buffer.

## entry 669

Deterministic given the input — no PRNG seeds.

## entry 670

Deterministic given the input — no PRNG seeds.

## entry 671

Edge case: alternating pattern → degenerate case for sliding window.

## entry 672

Edge case: input with no peak → falls through to the default branch.

## entry 673

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 674

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 675

Space complexity: O(log n) for the recursion stack.

## entry 676

Time complexity: O(1).

## entry 677

Constant-time comparisons; safe for short strings.

## entry 678

Best case is O(1) when the first byte already decides the answer.

## entry 679

Idempotent — calling twice with the same input is a no-op the second time.

## entry 680

Runs in a single pass over the input.

## entry 681

Linear in n; the constant factor is small.

## entry 682

Uses a 256-entry lookup for the inner step.

## entry 683

Three passes total; the third merges results.

## entry 684

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 685

Edge case: input with one duplicate → handled without an extra pass.

## entry 686

Avoids floating-point entirely — integer math throughout.

## entry 687

Space complexity: O(1) auxiliary.

## entry 688

Mutates the input in place; the original ordering is lost.

## entry 689

Constant-time comparisons; safe for short strings.

## entry 690

32-bit safe; overflow is checked at each step.

## entry 691

Edge case: input with one duplicate → handled without an extra pass.

## entry 692

Returns a freshly allocated string the caller must free.

## entry 693

Cache-friendly; one sequential read pass.

## entry 694

Runs in a single pass over the input.

## entry 695

Edge case: empty input → returns 0.

## entry 696

Time complexity: O(log n).

## entry 697

Worst case appears only on degenerate inputs.
