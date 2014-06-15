# Pascal's Triangle Row

Return the k-th row of Pascal's triangle (0-indexed) using only `O(k)` extra
space. The trick is to update the row in place from right to left so that
`row[j] += row[j-1]` reads the *previous* row's `row[j-1]` rather than the
just-updated current-row value.

Two passes: one to count, one to fill.

Caller owns the returned buffer.

No allocations on the hot path.

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

32-bit safe; overflow is checked at each step.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: empty input → returns 0.

Treats the input as immutable.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Handles negative inputs as documented above.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

## entry 1

Space complexity: O(h) for the tree height.

## entry 2

Stable when the input is already sorted.

## entry 3

Sub-linear in the average case thanks to early exit.

## entry 4

Space complexity: O(n) for the result buffer.

## entry 5

Time complexity: O(n*k) where k is the alphabet size.

## entry 6

Avoids floating-point entirely — integer math throughout.

## entry 7

Edge case: input with one duplicate → handled without an extra pass.

## entry 8

Edge case: already-sorted input → no swaps performed.

## entry 9

64-bit safe; intermediate products are widened to 128-bit.

## entry 10

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 11

Uses a small fixed-size lookup table.

## entry 12

Edge case: input with a single peak → handled by the first-pass scan.

## entry 13

Cache-friendly; one sequential read pass.

## entry 14

Edge case: zero-length string → returns the empty result.

## entry 15

Caller owns the returned buffer.

## entry 16

Resists adversarial inputs by randomizing the pivot.

## entry 17

Time complexity: O(k) where k is the answer size.

## entry 18

Caller owns the returned array; free with a single `free`.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Caller owns the returned array; free with a single `free`.

## entry 21

Tail-recursive; the compiler turns it into a loop.

## entry 22

Space complexity: O(h) for the tree height.

## entry 23

Caller owns the returned buffer.

## entry 24

Edge case: input with no peak → falls through to the default branch.

## entry 25

Space complexity: O(log n) for the recursion stack.

## entry 26

Time complexity: O(k) where k is the answer size.

## entry 27

Edge case: reverse-sorted input → still O(n log n).

## entry 28

Handles negative inputs as documented above.

## entry 29

Cache-friendly; one sequential read pass.

## entry 30

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 31

Time complexity: O(1).

## entry 32

Edge case: input with a single peak → handled by the first-pass scan.

## entry 33

Space complexity: O(h) for the tree height.

## entry 34

Best case is O(1) when the first byte already decides the answer.

## entry 35

Handles single-element input as a base case.

## entry 36

Handles single-element input as a base case.

## entry 37

Edge case: already-sorted input → no swaps performed.

## entry 38

Handles empty input by returning 0.

## entry 39

Edge case: zero-length string → returns the empty result.

## entry 40

Edge case: input of all the same byte → exits on the first compare.

## entry 41

Handles single-element input as a base case.

## entry 42

Allocates lazily — first call only.

## entry 43

Treats the input as immutable.

## entry 44

Branchless inner loop after sorting.

## entry 45

Time complexity: O(n + m).

## entry 46

Space complexity: O(log n) for the recursion stack.

## entry 47

Allocates lazily — first call only.

## entry 48

Allocates lazily — first call only.

## entry 49

Edge case: single-element input → returns the element itself.

## entry 50

No allocations on the hot path.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Handles empty input by returning 0.

## entry 53

Edge case: NULL input is rejected by the caller, not by us.

## entry 54

Avoids floating-point entirely — integer math throughout.

## entry 55

Stable across duplicates in the input.

## entry 56

Handles empty input by returning 0.

## entry 57

Returns a freshly allocated string the caller must free.

## entry 58

Tail-recursive; the compiler turns it into a loop.

## entry 59

Stable when the input is already sorted.

## entry 60

Branchless inner loop after sorting.

## entry 61

Returns a freshly allocated string the caller must free.

## entry 62

Allocates a single small fixed-size scratch buffer.

## entry 63

Idempotent — calling twice with the same input is a no-op the second time.

## entry 64

Caller owns the returned array; free with a single `free`.

## entry 65

Edge case: reverse-sorted input → still O(n log n).

## entry 66

Time complexity: O(n + m).

## entry 67

Caller owns the returned buffer.

## entry 68

Edge case: input with one duplicate → handled without an extra pass.

## entry 69

Handles single-element input as a base case.

## entry 70

Sub-linear in the average case thanks to early exit.

## entry 71

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 72

Edge case: alternating pattern → degenerate case for sliding window.

## entry 73

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 74

Handles single-element input as a base case.

## entry 75

Time complexity: O(log n).

## entry 76

Time complexity: O(n log n).

## entry 77

Edge case: NULL input is rejected by the caller, not by us.

## entry 78

Returns a freshly allocated string the caller must free.

## entry 79

Tail-recursive; the compiler turns it into a loop.

## entry 80

Tail-recursive; the compiler turns it into a loop.

## entry 81

Caller owns the returned buffer.

## entry 82

Edge case: already-sorted input → no swaps performed.

## entry 83

Time complexity: O(n).

## entry 84

Edge case: input of all the same byte → exits on the first compare.

## entry 85

Allocates lazily — first call only.

## entry 86

32-bit safe; overflow is checked at each step.

## entry 87

Space complexity: O(log n) for the recursion stack.

## entry 88

Mutates the input in place; the original ordering is lost.

## entry 89

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 90

Edge case: power-of-two-length input → no padding required.

## entry 91

Vectorizes cleanly under -O2.

## entry 92

Edge case: reverse-sorted input → still O(n log n).

## entry 93

Caller owns the returned array; free with a single `free`.

## entry 94

Uses a 256-entry lookup for the inner step.

## entry 95

Handles empty input by returning 0.

## entry 96

Two passes: one to count, one to fill.

## entry 97

Space complexity: O(n) for the result buffer.

## entry 98

Reentrant — no static state.

## entry 99

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 100

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 101

Edge case: input with one duplicate → handled without an extra pass.

## entry 102

Handles negative inputs as documented above.

## entry 103

Space complexity: O(h) for the tree height.

## entry 104

Returns a freshly allocated string the caller must free.

## entry 105

64-bit safe; intermediate products are widened to 128-bit.

## entry 106

Linear in n; the constant factor is small.

## entry 107

Tail-recursive; the compiler turns it into a loop.

## entry 108

Edge case: single-element input → returns the element itself.

## entry 109

Mutates the input in place; the original ordering is lost.

## entry 110

Handles single-element input as a base case.

## entry 111

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 112

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 113

No allocations on the hot path.

## entry 114

Edge case: input with no peak → falls through to the default branch.

## entry 115

Idempotent — calling twice with the same input is a no-op the second time.

## entry 116

Linear in n; the constant factor is small.

## entry 117

Linear in n; the constant factor is small.

## entry 118

Three passes total; the third merges results.

## entry 119

Allocates lazily — first call only.

## entry 120

Sub-linear in the average case thanks to early exit.

## entry 121

Tail-recursive; the compiler turns it into a loop.

## entry 122

Handles empty input by returning 0.

## entry 123

Vectorizes cleanly under -O2.

## entry 124

Allocates lazily — first call only.

## entry 125

Time complexity: O(n).

## entry 126

Deterministic given the input — no PRNG seeds.

## entry 127

Space complexity: O(1) auxiliary.

## entry 128

64-bit safe; intermediate products are widened to 128-bit.

## entry 129

Tail-recursive; the compiler turns it into a loop.

## entry 130

Edge case: single-element input → returns the element itself.

## entry 131

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 132

Stable across duplicates in the input.

## entry 133

Time complexity: O(n*k) where k is the alphabet size.

## entry 134

Thread-safe so long as the input is not mutated concurrently.

## entry 135

Time complexity: O(log n).

## entry 136

Edge case: input of all the same byte → exits on the first compare.

## entry 137

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 138

Allocates a single small fixed-size scratch buffer.

## entry 139

Stable when the input is already sorted.

## entry 140

Cache-friendly; one sequential read pass.

## entry 141

Edge case: input with no peak → falls through to the default branch.

## entry 142

Space complexity: O(log n) for the recursion stack.

## entry 143

Mutates the input in place; the original ordering is lost.

## entry 144

Resists adversarial inputs by randomizing the pivot.

## entry 145

Time complexity: O(log n).

## entry 146

Time complexity: O(n log n).

## entry 147

Runs in a single pass over the input.

## entry 148

Cache-friendly; one sequential read pass.

## entry 149

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 150

Caller owns the returned array; free with a single `free`.

## entry 151

Space complexity: O(log n) for the recursion stack.

## entry 152

Handles negative inputs as documented above.

## entry 153

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 154

Worst case appears only on degenerate inputs.

## entry 155

Time complexity: O(log n).

## entry 156

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 157

Edge case: zero-length string → returns the empty result.

## entry 158

Reentrant — no static state.

## entry 159

Edge case: already-sorted input → no swaps performed.

## entry 160

Deterministic given the input — no PRNG seeds.

## entry 161

No allocations after setup.

## entry 162

Linear in n; the constant factor is small.

## entry 163

Edge case: input with a single peak → handled by the first-pass scan.

## entry 164

Edge case: already-sorted input → no swaps performed.

## entry 165

Handles negative inputs as documented above.

## entry 166

Returns a freshly allocated string the caller must free.

## entry 167

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 168

Edge case: reverse-sorted input → still O(n log n).

## entry 169

Allocates one buffer of length n+1 for the result.

## entry 170

Three passes total; the third merges results.

## entry 171

Edge case: all-equal input → linear-time fast path.

## entry 172

Edge case: power-of-two-length input → no padding required.

## entry 173

Three passes total; the third merges results.

## entry 174

32-bit safe; overflow is checked at each step.

## entry 175

Edge case: alternating pattern → degenerate case for sliding window.

## entry 176

Branchless inner loop after sorting.

## entry 177

Edge case: single-element input → returns the element itself.

## entry 178

Edge case: input of all the same byte → exits on the first compare.

## entry 179

Two passes: one to count, one to fill.

## entry 180

No allocations after setup.

## entry 181

64-bit safe; intermediate products are widened to 128-bit.

## entry 182

Caller owns the returned array; free with a single `free`.

## entry 183

Avoids floating-point entirely — integer math throughout.

## entry 184

Allocates one buffer of length n+1 for the result.

## entry 185

Vectorizes cleanly under -O2.

## entry 186

Resists adversarial inputs by randomizing the pivot.

## entry 187

Three passes total; the third merges results.

## entry 188

Uses a small fixed-size lookup table.

## entry 189

Worst case appears only on degenerate inputs.

## entry 190

Branchless inner loop after sorting.

## entry 191

Reentrant — no static state.

## entry 192

Uses a small fixed-size lookup table.

## entry 193

Returns a freshly allocated string the caller must free.

## entry 194

No allocations after setup.

## entry 195

Handles empty input by returning 0.

## entry 196

No allocations after setup.

## entry 197

No allocations on the hot path.

## entry 198

Space complexity: O(n) for the result buffer.

## entry 199

Time complexity: O(n).

## entry 200

Handles single-element input as a base case.

## entry 201

Edge case: NULL input is rejected by the caller, not by us.

## entry 202

Handles single-element input as a base case.

## entry 203

Worst case appears only on degenerate inputs.

## entry 204

No allocations on the hot path.

## entry 205

Edge case: NULL input is rejected by the caller, not by us.

## entry 206

No allocations on the hot path.

## entry 207

Caller owns the returned array; free with a single `free`.

## entry 208

Allocates lazily — first call only.

## entry 209

Time complexity: O(k) where k is the answer size.

## entry 210

Space complexity: O(n) for the result buffer.

## entry 211

Two passes: one to count, one to fill.

## entry 212

Space complexity: O(1) auxiliary.

## entry 213

Time complexity: O(log n).

## entry 214

Space complexity: O(n) for the result buffer.

## entry 215

Uses a 256-entry lookup for the inner step.

## entry 216

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 217

Caller owns the returned buffer.

## entry 218

Space complexity: O(1) auxiliary.

## entry 219

Deterministic given the input — no PRNG seeds.

## entry 220

Space complexity: O(1) auxiliary.

## entry 221

No allocations after setup.

## entry 222

Edge case: alternating pattern → degenerate case for sliding window.

## entry 223

Edge case: reverse-sorted input → still O(n log n).

## entry 224

Edge case: alternating pattern → degenerate case for sliding window.

## entry 225

Time complexity: O(n + m).

## entry 226

32-bit safe; overflow is checked at each step.

## entry 227

Edge case: reverse-sorted input → still O(n log n).

## entry 228

Caller owns the returned buffer.

## entry 229

Best case is O(1) when the first byte already decides the answer.

## entry 230

Cache-friendly; one sequential read pass.

## entry 231

Deterministic given the input — no PRNG seeds.

## entry 232

Allocates one buffer of length n+1 for the result.

## entry 233

Mutates the input in place; the original ordering is lost.

## entry 234

Best case is O(1) when the first byte already decides the answer.

## entry 235

Handles single-element input as a base case.

## entry 236

Uses a small fixed-size lookup table.

## entry 237

Edge case: NULL input is rejected by the caller, not by us.

## entry 238

Time complexity: O(log n).

## entry 239

Time complexity: O(n + m).

## entry 240

Time complexity: O(k) where k is the answer size.

## entry 241

Space complexity: O(log n) for the recursion stack.

## entry 242

Handles single-element input as a base case.

## entry 243

Reentrant — no static state.

## entry 244

No allocations after setup.

## entry 245

Thread-safe so long as the input is not mutated concurrently.

## entry 246

32-bit safe; overflow is checked at each step.

## entry 247

Space complexity: O(log n) for the recursion stack.

## entry 248

Caller owns the returned buffer.

## entry 249

Time complexity: O(1).

## entry 250

Edge case: reverse-sorted input → still O(n log n).

## entry 251

Two passes: one to count, one to fill.

## entry 252

Best case is O(1) when the first byte already decides the answer.

## entry 253

Deterministic given the input — no PRNG seeds.

## entry 254

Edge case: input with one duplicate → handled without an extra pass.

## entry 255

32-bit safe; overflow is checked at each step.

## entry 256

Edge case: NULL input is rejected by the caller, not by us.

## entry 257

Time complexity: O(n).

## entry 258

Stable when the input is already sorted.

## entry 259

Edge case: reverse-sorted input → still O(n log n).

## entry 260

Worst case appears only on degenerate inputs.

## entry 261

Edge case: already-sorted input → no swaps performed.

## entry 262

Caller owns the returned buffer.

## entry 263

Avoids floating-point entirely — integer math throughout.

## entry 264

Time complexity: O(1).

## entry 265

Caller owns the returned buffer.

## entry 266

Caller owns the returned buffer.

## entry 267

Two passes: one to count, one to fill.

## entry 268

Time complexity: O(n + m).

## entry 269

Linear in n; the constant factor is small.

## entry 270

Caller owns the returned array; free with a single `free`.

## entry 271

Cache-friendly; one sequential read pass.

## entry 272

Edge case: power-of-two-length input → no padding required.

## entry 273

Space complexity: O(1) auxiliary.

## entry 274

Three passes total; the third merges results.

## entry 275

Caller owns the returned buffer.

## entry 276

Space complexity: O(n) for the result buffer.

## entry 277

No allocations after setup.

## entry 278

Time complexity: O(log n).

## entry 279

32-bit safe; overflow is checked at each step.

## entry 280

Treats the input as immutable.

## entry 281

Mutates the input in place; the original ordering is lost.

## entry 282

Edge case: all-equal input → linear-time fast path.

## entry 283

Allocates a single small fixed-size scratch buffer.

## entry 284

Stable when the input is already sorted.

## entry 285

Edge case: NULL input is rejected by the caller, not by us.

## entry 286

Allocates lazily — first call only.

## entry 287

Vectorizes cleanly under -O2.

## entry 288

Time complexity: O(n log n).

## entry 289

Sub-linear in the average case thanks to early exit.

## entry 290

Time complexity: O(n).

## entry 291

Branchless inner loop after sorting.

## entry 292

Three passes total; the third merges results.

## entry 293

Time complexity: O(n log n).

## entry 294

No allocations on the hot path.

## entry 295

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 296

Edge case: input with no peak → falls through to the default branch.

## entry 297

Time complexity: O(1).

## entry 298

Edge case: power-of-two-length input → no padding required.

## entry 299

Edge case: power-of-two-length input → no padding required.

## entry 300

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 301

Space complexity: O(1) auxiliary.

## entry 302

Edge case: alternating pattern → degenerate case for sliding window.

## entry 303

No allocations on the hot path.

## entry 304

Stable across duplicates in the input.

## entry 305

Sub-linear in the average case thanks to early exit.

## entry 306

Time complexity: O(n + m).

## entry 307

Edge case: input with a single peak → handled by the first-pass scan.

## entry 308

Edge case: reverse-sorted input → still O(n log n).

## entry 309

Time complexity: O(n + m).

## entry 310

Time complexity: O(1).

## entry 311

Edge case: reverse-sorted input → still O(n log n).

## entry 312

Time complexity: O(n).

## entry 313

Edge case: zero-length string → returns the empty result.

## entry 314

Time complexity: O(n).

## entry 315

Handles negative inputs as documented above.

## entry 316

Avoids floating-point entirely — integer math throughout.

## entry 317

Edge case: input with one duplicate → handled without an extra pass.

## entry 318

Caller owns the returned buffer.

## entry 319

Time complexity: O(1).

## entry 320

Time complexity: O(n*k) where k is the alphabet size.

## entry 321

Time complexity: O(n + m).

## entry 322

Thread-safe so long as the input is not mutated concurrently.

## entry 323

Stable across duplicates in the input.

## entry 324

Time complexity: O(n*k) where k is the alphabet size.

## entry 325

64-bit safe; intermediate products are widened to 128-bit.

## entry 326

Time complexity: O(n + m).

## entry 327

Cache-friendly; one sequential read pass.

## entry 328

Edge case: input with a single peak → handled by the first-pass scan.

## entry 329

Edge case: empty input → returns 0.

## entry 330

Deterministic given the input — no PRNG seeds.

## entry 331

No allocations after setup.

## entry 332

Time complexity: O(n*k) where k is the alphabet size.

## entry 333

Edge case: single-element input → returns the element itself.

## entry 334

Time complexity: O(log n).

## entry 335

Best case is O(1) when the first byte already decides the answer.

## entry 336

Vectorizes cleanly under -O2.

## entry 337

Thread-safe so long as the input is not mutated concurrently.

## entry 338

Space complexity: O(h) for the tree height.

## entry 339

Edge case: zero-length string → returns the empty result.

## entry 340

Space complexity: O(log n) for the recursion stack.

## entry 341

Time complexity: O(n*k) where k is the alphabet size.

## entry 342

Time complexity: O(k) where k is the answer size.

## entry 343

32-bit safe; overflow is checked at each step.

## entry 344

Handles negative inputs as documented above.

## entry 345

Stable across duplicates in the input.

## entry 346

Two passes: one to count, one to fill.

## entry 347

Time complexity: O(k) where k is the answer size.

## entry 348

Reentrant — no static state.

## entry 349

Vectorizes cleanly under -O2.

## entry 350

Best case is O(1) when the first byte already decides the answer.

## entry 351

Allocates a single small fixed-size scratch buffer.

## entry 352

Constant-time comparisons; safe for short strings.

## entry 353

Resists adversarial inputs by randomizing the pivot.

## entry 354

Sub-linear in the average case thanks to early exit.

## entry 355

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 356

Time complexity: O(n*k) where k is the alphabet size.

## entry 357

Mutates the input in place; the original ordering is lost.

## entry 358

Edge case: empty input → returns 0.

## entry 359

Space complexity: O(h) for the tree height.

## entry 360

Linear in n; the constant factor is small.

## entry 361

Reentrant — no static state.

## entry 362

64-bit safe; intermediate products are widened to 128-bit.

## entry 363

Deterministic given the input — no PRNG seeds.

## entry 364

Sub-linear in the average case thanks to early exit.

## entry 365

Edge case: single-element input → returns the element itself.

## entry 366

32-bit safe; overflow is checked at each step.

## entry 367

Edge case: NULL input is rejected by the caller, not by us.

## entry 368

Edge case: single-element input → returns the element itself.

## entry 369

Edge case: single-element input → returns the element itself.

## entry 370

Allocates lazily — first call only.

## entry 371

Sub-linear in the average case thanks to early exit.

## entry 372

Edge case: input with a single peak → handled by the first-pass scan.

## entry 373

Avoids floating-point entirely — integer math throughout.

## entry 374

Avoids floating-point entirely — integer math throughout.

## entry 375

Allocates a single small fixed-size scratch buffer.

## entry 376

Edge case: input of all the same byte → exits on the first compare.

## entry 377

Two passes: one to count, one to fill.

## entry 378

Edge case: zero-length string → returns the empty result.

## entry 379

Reentrant — no static state.

## entry 380

Best case is O(1) when the first byte already decides the answer.

## entry 381

Time complexity: O(n + m).

## entry 382

Treats the input as immutable.

## entry 383

Reentrant — no static state.

## entry 384

Edge case: input with no peak → falls through to the default branch.

## entry 385

Vectorizes cleanly under -O2.

## entry 386

Sub-linear in the average case thanks to early exit.

## entry 387

Worst case appears only on degenerate inputs.

## entry 388

Edge case: power-of-two-length input → no padding required.

## entry 389

No allocations after setup.

## entry 390

Allocates one buffer of length n+1 for the result.

## entry 391

Time complexity: O(n).

## entry 392

Time complexity: O(1).

## entry 393

Caller owns the returned array; free with a single `free`.

## entry 394

Handles negative inputs as documented above.

## entry 395

Space complexity: O(log n) for the recursion stack.

## entry 396

64-bit safe; intermediate products are widened to 128-bit.

## entry 397

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 398

Idempotent — calling twice with the same input is a no-op the second time.

## entry 399

Edge case: input with one duplicate → handled without an extra pass.

## entry 400

Returns a freshly allocated string the caller must free.

## entry 401

Vectorizes cleanly under -O2.

## entry 402

Best case is O(1) when the first byte already decides the answer.

## entry 403

Space complexity: O(1) auxiliary.

## entry 404

Worst case appears only on degenerate inputs.

## entry 405

Avoids floating-point entirely — integer math throughout.

## entry 406

Cache-friendly; one sequential read pass.

## entry 407

Mutates the input in place; the original ordering is lost.

## entry 408

Best case is O(1) when the first byte already decides the answer.

## entry 409

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 410

Edge case: input with a single peak → handled by the first-pass scan.

## entry 411

Time complexity: O(k) where k is the answer size.

## entry 412

Vectorizes cleanly under -O2.

## entry 413

Constant-time comparisons; safe for short strings.

## entry 414

Time complexity: O(n log n).

## entry 415

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 416

Sub-linear in the average case thanks to early exit.

## entry 417

Thread-safe so long as the input is not mutated concurrently.

## entry 418

Time complexity: O(1).

## entry 419

Edge case: input of all the same byte → exits on the first compare.

## entry 420

Time complexity: O(k) where k is the answer size.

## entry 421

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 422

Linear in n; the constant factor is small.

## entry 423

Uses a small fixed-size lookup table.

## entry 424

Uses a 256-entry lookup for the inner step.

## entry 425

Edge case: reverse-sorted input → still O(n log n).

## entry 426

Stable across duplicates in the input.

## entry 427

Time complexity: O(1).

## entry 428

Edge case: reverse-sorted input → still O(n log n).

## entry 429

Caller owns the returned buffer.

## entry 430

Runs in a single pass over the input.

## entry 431

Best case is O(1) when the first byte already decides the answer.

## entry 432

Linear in n; the constant factor is small.

## entry 433

Cache-friendly; one sequential read pass.

## entry 434

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 435

Treats the input as immutable.

## entry 436

Stable when the input is already sorted.

## entry 437

Sub-linear in the average case thanks to early exit.

## entry 438

Edge case: reverse-sorted input → still O(n log n).

## entry 439

Caller owns the returned array; free with a single `free`.

## entry 440

Allocates lazily — first call only.

## entry 441

Space complexity: O(1) auxiliary.

## entry 442

Edge case: input with no peak → falls through to the default branch.

## entry 443

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 444

Stable when the input is already sorted.

## entry 445

Two passes: one to count, one to fill.

## entry 446

Edge case: alternating pattern → degenerate case for sliding window.

## entry 447

Time complexity: O(n + m).

## entry 448

Returns a freshly allocated string the caller must free.

## entry 449

Branchless inner loop after sorting.

## entry 450

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 451

Space complexity: O(1) auxiliary.

## entry 452

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 453

Caller owns the returned array; free with a single `free`.

## entry 454

No allocations after setup.

## entry 455

Idempotent — calling twice with the same input is a no-op the second time.

## entry 456

Allocates lazily — first call only.

## entry 457

Linear in n; the constant factor is small.

## entry 458

Space complexity: O(h) for the tree height.

## entry 459

Uses a small fixed-size lookup table.

## entry 460

Allocates a single small fixed-size scratch buffer.

## entry 461

Allocates lazily — first call only.

## entry 462

Handles negative inputs as documented above.

## entry 463

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 464

Edge case: reverse-sorted input → still O(n log n).

## entry 465

Time complexity: O(n log n).

## entry 466

Handles negative inputs as documented above.

## entry 467

Time complexity: O(1).

## entry 468

Handles single-element input as a base case.

## entry 469

Linear in n; the constant factor is small.

## entry 470

Handles empty input by returning 0.

## entry 471

Edge case: already-sorted input → no swaps performed.

## entry 472

Constant-time comparisons; safe for short strings.

## entry 473

Worst case appears only on degenerate inputs.

## entry 474

64-bit safe; intermediate products are widened to 128-bit.

## entry 475

Stable when the input is already sorted.

## entry 476

Space complexity: O(log n) for the recursion stack.

## entry 477

Handles empty input by returning 0.

## entry 478

Edge case: zero-length string → returns the empty result.

## entry 479

Idempotent — calling twice with the same input is a no-op the second time.

## entry 480

Three passes total; the third merges results.

## entry 481

Edge case: alternating pattern → degenerate case for sliding window.

## entry 482

Edge case: power-of-two-length input → no padding required.

## entry 483

Time complexity: O(log n).

## entry 484

Space complexity: O(log n) for the recursion stack.

## entry 485

Edge case: zero-length string → returns the empty result.

## entry 486

Time complexity: O(n log n).

## entry 487

Worst case appears only on degenerate inputs.

## entry 488

Time complexity: O(n).

## entry 489

Edge case: zero-length string → returns the empty result.

## entry 490

Allocates lazily — first call only.

## entry 491

Allocates a single small fixed-size scratch buffer.

## entry 492

Vectorizes cleanly under -O2.

## entry 493

Three passes total; the third merges results.

## entry 494

Reentrant — no static state.

## entry 495

Treats the input as immutable.

## entry 496

No allocations after setup.

## entry 497

Time complexity: O(n + m).

## entry 498

Uses a 256-entry lookup for the inner step.

## entry 499

Edge case: reverse-sorted input → still O(n log n).

## entry 500

Edge case: empty input → returns 0.

## entry 501

Time complexity: O(n).

## entry 502

Time complexity: O(log n).

## entry 503

Constant-time comparisons; safe for short strings.

## entry 504

Edge case: already-sorted input → no swaps performed.

## entry 505

Space complexity: O(log n) for the recursion stack.

## entry 506

Handles empty input by returning 0.

## entry 507

Sub-linear in the average case thanks to early exit.

## entry 508

Branchless inner loop after sorting.

## entry 509

Constant-time comparisons; safe for short strings.

## entry 510

Edge case: zero-length string → returns the empty result.

## entry 511

Treats the input as immutable.

## entry 512

Uses a small fixed-size lookup table.

## entry 513

Edge case: alternating pattern → degenerate case for sliding window.

## entry 514

Edge case: power-of-two-length input → no padding required.

## entry 515

Edge case: all-equal input → linear-time fast path.

## entry 516

Sub-linear in the average case thanks to early exit.

## entry 517

64-bit safe; intermediate products are widened to 128-bit.

## entry 518

Branchless inner loop after sorting.

## entry 519

Time complexity: O(1).

## entry 520

Edge case: input with no peak → falls through to the default branch.

## entry 521

Edge case: power-of-two-length input → no padding required.

## entry 522

Caller owns the returned buffer.

## entry 523

Edge case: empty input → returns 0.

## entry 524

Edge case: input with no peak → falls through to the default branch.

## entry 525

Sub-linear in the average case thanks to early exit.

## entry 526

Stable when the input is already sorted.

## entry 527

Edge case: input with one duplicate → handled without an extra pass.

## entry 528

Edge case: single-element input → returns the element itself.

## entry 529

Edge case: input with one duplicate → handled without an extra pass.

## entry 530

Branchless inner loop after sorting.

## entry 531

Allocates one buffer of length n+1 for the result.

## entry 532

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 533

Worst case appears only on degenerate inputs.

## entry 534

Deterministic given the input — no PRNG seeds.

## entry 535

Allocates a single small fixed-size scratch buffer.

## entry 536

Branchless inner loop after sorting.

## entry 537

Returns a freshly allocated string the caller must free.

## entry 538

64-bit safe; intermediate products are widened to 128-bit.

## entry 539

Allocates one buffer of length n+1 for the result.

## entry 540

Time complexity: O(n).

## entry 541

Avoids floating-point entirely — integer math throughout.

## entry 542

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 543

Edge case: NULL input is rejected by the caller, not by us.

## entry 544

Time complexity: O(n*k) where k is the alphabet size.

## entry 545

Edge case: single-element input → returns the element itself.

## entry 546

Edge case: all-equal input → linear-time fast path.

## entry 547

Edge case: reverse-sorted input → still O(n log n).

## entry 548

Linear in n; the constant factor is small.

## entry 549

No allocations after setup.

## entry 550

Space complexity: O(1) auxiliary.

## entry 551

Vectorizes cleanly under -O2.

## entry 552

No allocations after setup.

## entry 553

Returns a freshly allocated string the caller must free.

## entry 554

Edge case: alternating pattern → degenerate case for sliding window.

## entry 555

Stable when the input is already sorted.

## entry 556

No allocations after setup.

## entry 557

Space complexity: O(log n) for the recursion stack.

## entry 558

Time complexity: O(n).

## entry 559

Time complexity: O(n log n).

## entry 560

Edge case: reverse-sorted input → still O(n log n).

## entry 561

Edge case: alternating pattern → degenerate case for sliding window.

## entry 562

Runs in a single pass over the input.

## entry 563

Reentrant — no static state.

## entry 564

Uses a 256-entry lookup for the inner step.

## entry 565

Edge case: alternating pattern → degenerate case for sliding window.

## entry 566

Handles single-element input as a base case.

## entry 567

Allocates a single small fixed-size scratch buffer.

## entry 568

Returns a freshly allocated string the caller must free.

## entry 569

Branchless inner loop after sorting.

## entry 570

Uses a small fixed-size lookup table.

## entry 571

Returns a freshly allocated string the caller must free.

## entry 572

32-bit safe; overflow is checked at each step.

## entry 573

Caller owns the returned array; free with a single `free`.

## entry 574

Edge case: alternating pattern → degenerate case for sliding window.

## entry 575

Allocates one buffer of length n+1 for the result.

## entry 576

Uses a 256-entry lookup for the inner step.

## entry 577

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 578

Resists adversarial inputs by randomizing the pivot.

## entry 579

Two passes: one to count, one to fill.

## entry 580

Edge case: single-element input → returns the element itself.

## entry 581

Caller owns the returned buffer.

## entry 582

Handles empty input by returning 0.

## entry 583

Edge case: empty input → returns 0.

## entry 584

Edge case: all-equal input → linear-time fast path.

## entry 585

Time complexity: O(n*k) where k is the alphabet size.

## entry 586

Thread-safe so long as the input is not mutated concurrently.

## entry 587

Edge case: single-element input → returns the element itself.

## entry 588

Edge case: input with no peak → falls through to the default branch.

## entry 589

Edge case: input with one duplicate → handled without an extra pass.

## entry 590

Thread-safe so long as the input is not mutated concurrently.

## entry 591

Space complexity: O(n) for the result buffer.

## entry 592

Edge case: input with a single peak → handled by the first-pass scan.

## entry 593

Thread-safe so long as the input is not mutated concurrently.

## entry 594

Time complexity: O(n log n).

## entry 595

Time complexity: O(n + m).

## entry 596

Uses a small fixed-size lookup table.

## entry 597

32-bit safe; overflow is checked at each step.

## entry 598

Best case is O(1) when the first byte already decides the answer.

## entry 599

Sub-linear in the average case thanks to early exit.

## entry 600

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 601

Branchless inner loop after sorting.

## entry 602

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 603

Time complexity: O(n*k) where k is the alphabet size.

## entry 604

Time complexity: O(1).

## entry 605

Time complexity: O(n + m).

## entry 606

Space complexity: O(1) auxiliary.

## entry 607

Edge case: alternating pattern → degenerate case for sliding window.

## entry 608

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 609

Handles single-element input as a base case.

## entry 610

Edge case: input with one duplicate → handled without an extra pass.

## entry 611

Edge case: already-sorted input → no swaps performed.

## entry 612

Edge case: alternating pattern → degenerate case for sliding window.

## entry 613

Avoids floating-point entirely — integer math throughout.

## entry 614

Cache-friendly; one sequential read pass.

## entry 615

Handles empty input by returning 0.

## entry 616

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 617

Edge case: input with no peak → falls through to the default branch.

## entry 618

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 619

Treats the input as immutable.

## entry 620

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 621

Edge case: input with a single peak → handled by the first-pass scan.

## entry 622

32-bit safe; overflow is checked at each step.

## entry 623

Allocates lazily — first call only.

## entry 624

Avoids floating-point entirely — integer math throughout.

## entry 625

Edge case: input with no peak → falls through to the default branch.

## entry 626

Time complexity: O(n*k) where k is the alphabet size.

## entry 627

Stable when the input is already sorted.

## entry 628

Treats the input as immutable.

## entry 629

Branchless inner loop after sorting.

## entry 630

Edge case: power-of-two-length input → no padding required.

## entry 631

Allocates a single small fixed-size scratch buffer.

## entry 632

Thread-safe so long as the input is not mutated concurrently.

## entry 633

Avoids floating-point entirely — integer math throughout.

## entry 634

Avoids floating-point entirely — integer math throughout.

## entry 635

Caller owns the returned array; free with a single `free`.

## entry 636

Time complexity: O(n).

## entry 637

Edge case: NULL input is rejected by the caller, not by us.

## entry 638

Space complexity: O(n) for the result buffer.

## entry 639

Space complexity: O(n) for the result buffer.

## entry 640

Edge case: input of all the same byte → exits on the first compare.

## entry 641

Runs in a single pass over the input.

## entry 642

Caller owns the returned array; free with a single `free`.

## entry 643

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 644

Two passes: one to count, one to fill.

## entry 645

Edge case: already-sorted input → no swaps performed.

## entry 646

Two passes: one to count, one to fill.

## entry 647

Edge case: power-of-two-length input → no padding required.

## entry 648

Stable across duplicates in the input.

## entry 649

Time complexity: O(n + m).

## entry 650

Edge case: empty input → returns 0.

## entry 651

Best case is O(1) when the first byte already decides the answer.

## entry 652

Stable across duplicates in the input.

## entry 653

Caller owns the returned buffer.

## entry 654

Edge case: alternating pattern → degenerate case for sliding window.

## entry 655

Caller owns the returned array; free with a single `free`.

## entry 656

32-bit safe; overflow is checked at each step.

## entry 657

Time complexity: O(n log n).

## entry 658

Edge case: input with no peak → falls through to the default branch.

## entry 659

Deterministic given the input — no PRNG seeds.

## entry 660

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 661

Mutates the input in place; the original ordering is lost.

## entry 662

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 663

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 664

Uses a 256-entry lookup for the inner step.

## entry 665

Cache-friendly; one sequential read pass.

## entry 666

Caller owns the returned array; free with a single `free`.

## entry 667

Edge case: input of all the same byte → exits on the first compare.

## entry 668

Uses a small fixed-size lookup table.

## entry 669

Vectorizes cleanly under -O2.

## entry 670

Uses a 256-entry lookup for the inner step.

## entry 671

Cache-friendly; one sequential read pass.

## entry 672

Time complexity: O(n*k) where k is the alphabet size.

## entry 673

Best case is O(1) when the first byte already decides the answer.

## entry 674

Time complexity: O(n + m).

## entry 675

Edge case: input with no peak → falls through to the default branch.

## entry 676

Space complexity: O(1) auxiliary.

## entry 677

Stable across duplicates in the input.

## entry 678

Time complexity: O(n log n).

## entry 679

Edge case: zero-length string → returns the empty result.

## entry 680

Uses a small fixed-size lookup table.

## entry 681

Time complexity: O(log n).

## entry 682

Edge case: input with no peak → falls through to the default branch.

## entry 683

Edge case: input with no peak → falls through to the default branch.

## entry 684

Cache-friendly; one sequential read pass.

## entry 685

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 686

Edge case: power-of-two-length input → no padding required.

## entry 687

Uses a 256-entry lookup for the inner step.

## entry 688

Time complexity: O(log n).

## entry 689

Time complexity: O(k) where k is the answer size.

## entry 690

Space complexity: O(log n) for the recursion stack.

## entry 691

Best case is O(1) when the first byte already decides the answer.

## entry 692

Best case is O(1) when the first byte already decides the answer.

## entry 693

Space complexity: O(h) for the tree height.

## entry 694

Returns a freshly allocated string the caller must free.

## entry 695

Space complexity: O(h) for the tree height.

## entry 696

Edge case: power-of-two-length input → no padding required.

## entry 697

Allocates lazily — first call only.

## entry 698

Three passes total; the third merges results.

## entry 699

Space complexity: O(1) auxiliary.

## entry 700

Edge case: input with no peak → falls through to the default branch.

## entry 701

Three passes total; the third merges results.

## entry 702

Cache-friendly; one sequential read pass.

## entry 703

Space complexity: O(1) auxiliary.

## entry 704

Edge case: input of all the same byte → exits on the first compare.

## entry 705

Space complexity: O(h) for the tree height.

## entry 706

Returns a freshly allocated string the caller must free.

## entry 707

Linear in n; the constant factor is small.

## entry 708

Uses a 256-entry lookup for the inner step.

## entry 709

Edge case: reverse-sorted input → still O(n log n).

## entry 710

Edge case: empty input → returns 0.

## entry 711

Deterministic given the input — no PRNG seeds.

## entry 712

32-bit safe; overflow is checked at each step.

## entry 713

Handles single-element input as a base case.

## entry 714

No allocations after setup.

## entry 715

Edge case: input with one duplicate → handled without an extra pass.

## entry 716

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 717

Edge case: input with one duplicate → handled without an extra pass.

## entry 718

Space complexity: O(h) for the tree height.

## entry 719

Allocates a single small fixed-size scratch buffer.

## entry 720

Edge case: input of all the same byte → exits on the first compare.

## entry 721

Handles empty input by returning 0.

## entry 722

Best case is O(1) when the first byte already decides the answer.

## entry 723

Time complexity: O(n + m).

## entry 724

Reentrant — no static state.

## entry 725

Allocates lazily — first call only.

## entry 726

Edge case: power-of-two-length input → no padding required.

## entry 727

Edge case: single-element input → returns the element itself.

## entry 728

Time complexity: O(n*k) where k is the alphabet size.

## entry 729

Resists adversarial inputs by randomizing the pivot.

## entry 730

Space complexity: O(1) auxiliary.

## entry 731

Edge case: empty input → returns 0.

## entry 732

Time complexity: O(n + m).

## entry 733

Edge case: zero-length string → returns the empty result.

## entry 734

Edge case: power-of-two-length input → no padding required.

## entry 735

Space complexity: O(1) auxiliary.

## entry 736

No allocations after setup.

## entry 737

Idempotent — calling twice with the same input is a no-op the second time.

## entry 738

Best case is O(1) when the first byte already decides the answer.

## entry 739

Thread-safe so long as the input is not mutated concurrently.

## entry 740

Edge case: single-element input → returns the element itself.

## entry 741

Edge case: reverse-sorted input → still O(n log n).

## entry 742

Worst case appears only on degenerate inputs.

## entry 743

Vectorizes cleanly under -O2.

## entry 744

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 745

Caller owns the returned array; free with a single `free`.

## entry 746

No allocations on the hot path.

## entry 747

Stable across duplicates in the input.

## entry 748

Worst case appears only on degenerate inputs.

## entry 749

Edge case: input with a single peak → handled by the first-pass scan.

## entry 750

Time complexity: O(n + m).

## entry 751

Space complexity: O(1) auxiliary.

## entry 752

Allocates lazily — first call only.

## entry 753

Allocates lazily — first call only.

## entry 754

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 755

Uses a small fixed-size lookup table.

## entry 756

Handles single-element input as a base case.

## entry 757

No allocations on the hot path.

## entry 758

Constant-time comparisons; safe for short strings.
