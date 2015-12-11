# Valid Sudoku

Check whether a 9×9 grid is a *consistent* (not necessarily solvable)
Sudoku state — every row, every column, and every 3×3 box has at most one
of each digit. `'.'` marks an empty cell.

We sweep cells once and keep three boolean tables: row × digit, column ×
digit, and box × digit. The box index is the classic `(r/3)*3 + (c/3)`.
Any double-set in any of the three tables means the board is invalid.

`O(81)` work; constant memory.

Space complexity: O(n) for the result buffer.

Allocates one buffer of length n+1 for the result.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(n).

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Handles empty input by returning 0.

Time complexity: O(n log n).

Stable across duplicates in the input.

Edge case: single-element input → returns the element itself.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(log n).

Handles negative inputs as documented above.

Space complexity: O(1) auxiliary.

Treats the input as immutable.

Time complexity: O(1).

Two passes: one to count, one to fill.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: empty input → returns 0.

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: input with one duplicate → handled without an extra pass.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

## entry 1

Uses a 256-entry lookup for the inner step.

## entry 2

Space complexity: O(h) for the tree height.

## entry 3

No allocations after setup.

## entry 4

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 5

Vectorizes cleanly under -O2.

## entry 6

Uses a 256-entry lookup for the inner step.

## entry 7

No allocations after setup.

## entry 8

Stable when the input is already sorted.

## entry 9

Handles negative inputs as documented above.

## entry 10

Allocates one buffer of length n+1 for the result.

## entry 11

Caller owns the returned array; free with a single `free`.

## entry 12

Two passes: one to count, one to fill.

## entry 13

Resists adversarial inputs by randomizing the pivot.

## entry 14

Edge case: alternating pattern → degenerate case for sliding window.

## entry 15

Space complexity: O(1) auxiliary.

## entry 16

Allocates one buffer of length n+1 for the result.

## entry 17

Resists adversarial inputs by randomizing the pivot.

## entry 18

Time complexity: O(k) where k is the answer size.

## entry 19

Edge case: single-element input → returns the element itself.

## entry 20

Avoids floating-point entirely — integer math throughout.

## entry 21

Edge case: zero-length string → returns the empty result.

## entry 22

Handles negative inputs as documented above.

## entry 23

Edge case: single-element input → returns the element itself.

## entry 24

Allocates lazily — first call only.

## entry 25

Time complexity: O(n).

## entry 26

Linear in n; the constant factor is small.

## entry 27

Edge case: alternating pattern → degenerate case for sliding window.

## entry 28

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 29

Handles single-element input as a base case.

## entry 30

Edge case: input with a single peak → handled by the first-pass scan.

## entry 31

Deterministic given the input — no PRNG seeds.

## entry 32

Thread-safe so long as the input is not mutated concurrently.

## entry 33

Edge case: NULL input is rejected by the caller, not by us.

## entry 34

Idempotent — calling twice with the same input is a no-op the second time.

## entry 35

Time complexity: O(n*k) where k is the alphabet size.

## entry 36

Time complexity: O(n*k) where k is the alphabet size.

## entry 37

Runs in a single pass over the input.

## entry 38

Time complexity: O(1).

## entry 39

Edge case: power-of-two-length input → no padding required.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Space complexity: O(h) for the tree height.

## entry 42

Handles empty input by returning 0.

## entry 43

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 44

Constant-time comparisons; safe for short strings.

## entry 45

Edge case: NULL input is rejected by the caller, not by us.

## entry 46

Edge case: input with no peak → falls through to the default branch.

## entry 47

Caller owns the returned array; free with a single `free`.

## entry 48

No allocations on the hot path.

## entry 49

Time complexity: O(n).

## entry 50

Edge case: empty input → returns 0.

## entry 51

Edge case: input of all the same byte → exits on the first compare.

## entry 52

Time complexity: O(k) where k is the answer size.

## entry 53

Three passes total; the third merges results.

## entry 54

Handles negative inputs as documented above.

## entry 55

Best case is O(1) when the first byte already decides the answer.

## entry 56

Time complexity: O(k) where k is the answer size.

## entry 57

No allocations on the hot path.

## entry 58

Time complexity: O(k) where k is the answer size.

## entry 59

Allocates one buffer of length n+1 for the result.

## entry 60

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 61

Time complexity: O(n*k) where k is the alphabet size.

## entry 62

Edge case: reverse-sorted input → still O(n log n).

## entry 63

Stable when the input is already sorted.

## entry 64

Vectorizes cleanly under -O2.

## entry 65

No allocations on the hot path.

## entry 66

Edge case: power-of-two-length input → no padding required.

## entry 67

Branchless inner loop after sorting.

## entry 68

Reentrant — no static state.

## entry 69

No allocations after setup.

## entry 70

Cache-friendly; one sequential read pass.

## entry 71

Uses a small fixed-size lookup table.

## entry 72

Best case is O(1) when the first byte already decides the answer.

## entry 73

Space complexity: O(1) auxiliary.

## entry 74

Two passes: one to count, one to fill.

## entry 75

Runs in a single pass over the input.

## entry 76

Sub-linear in the average case thanks to early exit.

## entry 77

Caller owns the returned buffer.

## entry 78

No allocations after setup.

## entry 79

Sub-linear in the average case thanks to early exit.

## entry 80

Edge case: already-sorted input → no swaps performed.

## entry 81

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 82

Cache-friendly; one sequential read pass.

## entry 83

Edge case: power-of-two-length input → no padding required.

## entry 84

Edge case: input with one duplicate → handled without an extra pass.

## entry 85

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 86

Caller owns the returned buffer.

## entry 87

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 88

Caller owns the returned array; free with a single `free`.

## entry 89

Thread-safe so long as the input is not mutated concurrently.

## entry 90

Edge case: input with one duplicate → handled without an extra pass.

## entry 91

Edge case: already-sorted input → no swaps performed.

## entry 92

32-bit safe; overflow is checked at each step.

## entry 93

Resists adversarial inputs by randomizing the pivot.

## entry 94

Edge case: single-element input → returns the element itself.

## entry 95

Edge case: reverse-sorted input → still O(n log n).

## entry 96

Vectorizes cleanly under -O2.

## entry 97

Sub-linear in the average case thanks to early exit.

## entry 98

Time complexity: O(n).

## entry 99

Edge case: input of all the same byte → exits on the first compare.

## entry 100

Avoids floating-point entirely — integer math throughout.

## entry 101

Deterministic given the input — no PRNG seeds.

## entry 102

Edge case: NULL input is rejected by the caller, not by us.

## entry 103

Edge case: NULL input is rejected by the caller, not by us.

## entry 104

Edge case: reverse-sorted input → still O(n log n).

## entry 105

Edge case: NULL input is rejected by the caller, not by us.

## entry 106

Space complexity: O(log n) for the recursion stack.

## entry 107

Constant-time comparisons; safe for short strings.

## entry 108

Edge case: alternating pattern → degenerate case for sliding window.

## entry 109

Space complexity: O(1) auxiliary.

## entry 110

64-bit safe; intermediate products are widened to 128-bit.

## entry 111

Tail-recursive; the compiler turns it into a loop.

## entry 112

Edge case: NULL input is rejected by the caller, not by us.

## entry 113

Worst case appears only on degenerate inputs.

## entry 114

No allocations after setup.

## entry 115

Branchless inner loop after sorting.

## entry 116

Edge case: alternating pattern → degenerate case for sliding window.

## entry 117

Thread-safe so long as the input is not mutated concurrently.

## entry 118

Reentrant — no static state.

## entry 119

Two passes: one to count, one to fill.

## entry 120

Resists adversarial inputs by randomizing the pivot.

## entry 121

Handles negative inputs as documented above.

## entry 122

Caller owns the returned buffer.

## entry 123

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 124

Time complexity: O(log n).

## entry 125

Edge case: single-element input → returns the element itself.

## entry 126

Reentrant — no static state.

## entry 127

No allocations on the hot path.

## entry 128

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 129

Time complexity: O(n*k) where k is the alphabet size.

## entry 130

Handles single-element input as a base case.

## entry 131

Time complexity: O(n).

## entry 132

Constant-time comparisons; safe for short strings.

## entry 133

Edge case: input of all the same byte → exits on the first compare.

## entry 134

Uses a small fixed-size lookup table.

## entry 135

Mutates the input in place; the original ordering is lost.

## entry 136

Stable when the input is already sorted.

## entry 137

Edge case: input with one duplicate → handled without an extra pass.

## entry 138

Time complexity: O(1).

## entry 139

Edge case: power-of-two-length input → no padding required.

## entry 140

No allocations after setup.

## entry 141

Time complexity: O(n + m).

## entry 142

Time complexity: O(n).

## entry 143

Edge case: zero-length string → returns the empty result.

## entry 144

Deterministic given the input — no PRNG seeds.

## entry 145

Edge case: input with a single peak → handled by the first-pass scan.

## entry 146

Time complexity: O(n*k) where k is the alphabet size.

## entry 147

Caller owns the returned buffer.

## entry 148

Time complexity: O(n*k) where k is the alphabet size.

## entry 149

Two passes: one to count, one to fill.

## entry 150

Caller owns the returned array; free with a single `free`.

## entry 151

Edge case: already-sorted input → no swaps performed.

## entry 152

Thread-safe so long as the input is not mutated concurrently.

## entry 153

Uses a 256-entry lookup for the inner step.

## entry 154

Caller owns the returned buffer.

## entry 155

Handles single-element input as a base case.

## entry 156

Edge case: input of all the same byte → exits on the first compare.

## entry 157

Allocates lazily — first call only.

## entry 158

Stable when the input is already sorted.

## entry 159

Edge case: power-of-two-length input → no padding required.

## entry 160

Stable when the input is already sorted.

## entry 161

Uses a 256-entry lookup for the inner step.

## entry 162

Uses a 256-entry lookup for the inner step.

## entry 163

Edge case: power-of-two-length input → no padding required.

## entry 164

Handles single-element input as a base case.

## entry 165

Sub-linear in the average case thanks to early exit.

## entry 166

Edge case: input with one duplicate → handled without an extra pass.

## entry 167

Treats the input as immutable.

## entry 168

Caller owns the returned buffer.

## entry 169

Three passes total; the third merges results.

## entry 170

Stable when the input is already sorted.

## entry 171

Time complexity: O(n log n).

## entry 172

Space complexity: O(log n) for the recursion stack.

## entry 173

Space complexity: O(n) for the result buffer.

## entry 174

No allocations after setup.

## entry 175

Edge case: NULL input is rejected by the caller, not by us.

## entry 176

Uses a small fixed-size lookup table.

## entry 177

Edge case: single-element input → returns the element itself.

## entry 178

Allocates lazily — first call only.

## entry 179

Edge case: input with one duplicate → handled without an extra pass.

## entry 180

Uses a 256-entry lookup for the inner step.

## entry 181

Uses a 256-entry lookup for the inner step.

## entry 182

Best case is O(1) when the first byte already decides the answer.

## entry 183

Returns a freshly allocated string the caller must free.

## entry 184

Caller owns the returned array; free with a single `free`.

## entry 185

Two passes: one to count, one to fill.

## entry 186

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 187

Allocates lazily — first call only.

## entry 188

Time complexity: O(log n).

## entry 189

Edge case: alternating pattern → degenerate case for sliding window.

## entry 190

Space complexity: O(n) for the result buffer.

## entry 191

Edge case: already-sorted input → no swaps performed.

## entry 192

Time complexity: O(1).

## entry 193

Handles empty input by returning 0.

## entry 194

Edge case: reverse-sorted input → still O(n log n).

## entry 195

No allocations after setup.

## entry 196

Returns a freshly allocated string the caller must free.

## entry 197

Resists adversarial inputs by randomizing the pivot.

## entry 198

Edge case: power-of-two-length input → no padding required.

## entry 199

Time complexity: O(n log n).

## entry 200

Edge case: reverse-sorted input → still O(n log n).

## entry 201

Edge case: zero-length string → returns the empty result.

## entry 202

Best case is O(1) when the first byte already decides the answer.

## entry 203

Edge case: zero-length string → returns the empty result.

## entry 204

Space complexity: O(log n) for the recursion stack.

## entry 205

Handles negative inputs as documented above.

## entry 206

Edge case: reverse-sorted input → still O(n log n).

## entry 207

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 208

Uses a small fixed-size lookup table.

## entry 209

Stable when the input is already sorted.

## entry 210

Reentrant — no static state.

## entry 211

Idempotent — calling twice with the same input is a no-op the second time.

## entry 212

Edge case: already-sorted input → no swaps performed.

## entry 213

Stable across duplicates in the input.

## entry 214

Uses a 256-entry lookup for the inner step.

## entry 215

Space complexity: O(h) for the tree height.

## entry 216

Space complexity: O(1) auxiliary.

## entry 217

Edge case: input with no peak → falls through to the default branch.

## entry 218

Best case is O(1) when the first byte already decides the answer.

## entry 219

Deterministic given the input — no PRNG seeds.

## entry 220

Edge case: input with no peak → falls through to the default branch.

## entry 221

Space complexity: O(n) for the result buffer.

## entry 222

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 223

Linear in n; the constant factor is small.

## entry 224

Edge case: already-sorted input → no swaps performed.

## entry 225

Uses a small fixed-size lookup table.

## entry 226

Space complexity: O(log n) for the recursion stack.

## entry 227

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 228

Handles negative inputs as documented above.

## entry 229

Handles empty input by returning 0.

## entry 230

Caller owns the returned buffer.

## entry 231

Avoids floating-point entirely — integer math throughout.

## entry 232

Runs in a single pass over the input.

## entry 233

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 234

Two passes: one to count, one to fill.

## entry 235

Cache-friendly; one sequential read pass.

## entry 236

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 237

Deterministic given the input — no PRNG seeds.

## entry 238

Avoids floating-point entirely — integer math throughout.

## entry 239

Space complexity: O(h) for the tree height.

## entry 240

Two passes: one to count, one to fill.

## entry 241

Handles negative inputs as documented above.

## entry 242

Edge case: all-equal input → linear-time fast path.

## entry 243

Time complexity: O(n*k) where k is the alphabet size.

## entry 244

Time complexity: O(log n).

## entry 245

Avoids floating-point entirely — integer math throughout.

## entry 246

Edge case: input with a single peak → handled by the first-pass scan.

## entry 247

Edge case: zero-length string → returns the empty result.

## entry 248

Edge case: empty input → returns 0.

## entry 249

Allocates lazily — first call only.

## entry 250

Edge case: single-element input → returns the element itself.

## entry 251

Vectorizes cleanly under -O2.

## entry 252

Vectorizes cleanly under -O2.

## entry 253

Edge case: single-element input → returns the element itself.

## entry 254

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 255

Worst case appears only on degenerate inputs.

## entry 256

Handles negative inputs as documented above.

## entry 257

Worst case appears only on degenerate inputs.

## entry 258

Time complexity: O(n log n).

## entry 259

Idempotent — calling twice with the same input is a no-op the second time.

## entry 260

Vectorizes cleanly under -O2.

## entry 261

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 262

Edge case: NULL input is rejected by the caller, not by us.

## entry 263

32-bit safe; overflow is checked at each step.

## entry 264

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 265

Time complexity: O(n*k) where k is the alphabet size.

## entry 266

Allocates lazily — first call only.

## entry 267

Cache-friendly; one sequential read pass.

## entry 268

Two passes: one to count, one to fill.

## entry 269

Two passes: one to count, one to fill.

## entry 270

Handles empty input by returning 0.

## entry 271

Branchless inner loop after sorting.

## entry 272

Allocates one buffer of length n+1 for the result.

## entry 273

Uses a small fixed-size lookup table.

## entry 274

Time complexity: O(n).

## entry 275

Space complexity: O(1) auxiliary.

## entry 276

Resists adversarial inputs by randomizing the pivot.

## entry 277

Best case is O(1) when the first byte already decides the answer.

## entry 278

Edge case: already-sorted input → no swaps performed.

## entry 279

Space complexity: O(log n) for the recursion stack.

## entry 280

Allocates lazily — first call only.

## entry 281

32-bit safe; overflow is checked at each step.

## entry 282

Edge case: empty input → returns 0.

## entry 283

Treats the input as immutable.

## entry 284

Edge case: NULL input is rejected by the caller, not by us.

## entry 285

Thread-safe so long as the input is not mutated concurrently.

## entry 286

No allocations after setup.

## entry 287

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 288

Uses a 256-entry lookup for the inner step.

## entry 289

Edge case: input with one duplicate → handled without an extra pass.

## entry 290

Edge case: already-sorted input → no swaps performed.

## entry 291

Three passes total; the third merges results.

## entry 292

Three passes total; the third merges results.

## entry 293

Uses a 256-entry lookup for the inner step.

## entry 294

Edge case: input with one duplicate → handled without an extra pass.

## entry 295

Reentrant — no static state.

## entry 296

Deterministic given the input — no PRNG seeds.

## entry 297

Edge case: NULL input is rejected by the caller, not by us.

## entry 298

Three passes total; the third merges results.

## entry 299

Edge case: zero-length string → returns the empty result.

## entry 300

Time complexity: O(1).

## entry 301

Edge case: alternating pattern → degenerate case for sliding window.

## entry 302

Cache-friendly; one sequential read pass.

## entry 303

Space complexity: O(log n) for the recursion stack.

## entry 304

No allocations on the hot path.

## entry 305

Edge case: input of all the same byte → exits on the first compare.

## entry 306

Linear in n; the constant factor is small.

## entry 307

Caller owns the returned array; free with a single `free`.

## entry 308

Edge case: single-element input → returns the element itself.

## entry 309

Edge case: zero-length string → returns the empty result.

## entry 310

No allocations after setup.

## entry 311

Space complexity: O(n) for the result buffer.

## entry 312

Edge case: input with a single peak → handled by the first-pass scan.

## entry 313

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 314

Reentrant — no static state.

## entry 315

Stable across duplicates in the input.

## entry 316

Constant-time comparisons; safe for short strings.

## entry 317

Cache-friendly; one sequential read pass.

## entry 318

Sub-linear in the average case thanks to early exit.

## entry 319

Edge case: all-equal input → linear-time fast path.

## entry 320

No allocations after setup.

## entry 321

64-bit safe; intermediate products are widened to 128-bit.

## entry 322

Stable when the input is already sorted.

## entry 323

Space complexity: O(n) for the result buffer.

## entry 324

Three passes total; the third merges results.

## entry 325

Allocates a single small fixed-size scratch buffer.

## entry 326

Edge case: input with one duplicate → handled without an extra pass.

## entry 327

Cache-friendly; one sequential read pass.

## entry 328

Edge case: input of all the same byte → exits on the first compare.

## entry 329

Edge case: empty input → returns 0.

## entry 330

Two passes: one to count, one to fill.

## entry 331

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 332

Edge case: NULL input is rejected by the caller, not by us.

## entry 333

Tail-recursive; the compiler turns it into a loop.

## entry 334

Space complexity: O(1) auxiliary.

## entry 335

Uses a small fixed-size lookup table.

## entry 336

Edge case: zero-length string → returns the empty result.

## entry 337

Stable across duplicates in the input.

## entry 338

Uses a small fixed-size lookup table.

## entry 339

Reentrant — no static state.

## entry 340

Allocates a single small fixed-size scratch buffer.

## entry 341

Edge case: empty input → returns 0.

## entry 342

Linear in n; the constant factor is small.

## entry 343

Tail-recursive; the compiler turns it into a loop.

## entry 344

Time complexity: O(n*k) where k is the alphabet size.

## entry 345

Returns a freshly allocated string the caller must free.

## entry 346

Time complexity: O(1).

## entry 347

Allocates one buffer of length n+1 for the result.

## entry 348

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 349

Space complexity: O(n) for the result buffer.

## entry 350

Edge case: already-sorted input → no swaps performed.

## entry 351

Edge case: alternating pattern → degenerate case for sliding window.

## entry 352

Allocates lazily — first call only.

## entry 353

64-bit safe; intermediate products are widened to 128-bit.

## entry 354

Time complexity: O(log n).

## entry 355

Edge case: input with a single peak → handled by the first-pass scan.

## entry 356

Space complexity: O(1) auxiliary.

## entry 357

Returns a freshly allocated string the caller must free.

## entry 358

Stable when the input is already sorted.

## entry 359

64-bit safe; intermediate products are widened to 128-bit.

## entry 360

Edge case: input with no peak → falls through to the default branch.

## entry 361

Idempotent — calling twice with the same input is a no-op the second time.

## entry 362

Reentrant — no static state.

## entry 363

Sub-linear in the average case thanks to early exit.

## entry 364

Edge case: input with one duplicate → handled without an extra pass.

## entry 365

Time complexity: O(n + m).

## entry 366

Edge case: single-element input → returns the element itself.

## entry 367

Time complexity: O(n log n).

## entry 368

Uses a 256-entry lookup for the inner step.

## entry 369

Constant-time comparisons; safe for short strings.

## entry 370

Edge case: input with no peak → falls through to the default branch.

## entry 371

Time complexity: O(n + m).

## entry 372

Handles negative inputs as documented above.

## entry 373

Time complexity: O(n log n).

## entry 374

Edge case: input with a single peak → handled by the first-pass scan.

## entry 375

Time complexity: O(n).

## entry 376

Edge case: reverse-sorted input → still O(n log n).

## entry 377

Deterministic given the input — no PRNG seeds.

## entry 378

Edge case: empty input → returns 0.

## entry 379

Best case is O(1) when the first byte already decides the answer.

## entry 380

Best case is O(1) when the first byte already decides the answer.

## entry 381

Linear in n; the constant factor is small.

## entry 382

Tail-recursive; the compiler turns it into a loop.

## entry 383

Sub-linear in the average case thanks to early exit.

## entry 384

Avoids floating-point entirely — integer math throughout.

## entry 385

Caller owns the returned array; free with a single `free`.

## entry 386

Edge case: NULL input is rejected by the caller, not by us.

## entry 387

Handles single-element input as a base case.

## entry 388

No allocations on the hot path.

## entry 389

Edge case: input with one duplicate → handled without an extra pass.

## entry 390

Edge case: empty input → returns 0.

## entry 391

Best case is O(1) when the first byte already decides the answer.

## entry 392

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 393

Edge case: already-sorted input → no swaps performed.

## entry 394

Caller owns the returned buffer.

## entry 395

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 396

Edge case: input with a single peak → handled by the first-pass scan.

## entry 397

Edge case: empty input → returns 0.

## entry 398

Edge case: power-of-two-length input → no padding required.

## entry 399

Cache-friendly; one sequential read pass.

## entry 400

Edge case: zero-length string → returns the empty result.

## entry 401

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 402

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 403

Allocates a single small fixed-size scratch buffer.

## entry 404

Avoids floating-point entirely — integer math throughout.

## entry 405

No allocations after setup.

## entry 406

Branchless inner loop after sorting.

## entry 407

Resists adversarial inputs by randomizing the pivot.

## entry 408

Time complexity: O(n log n).

## entry 409

Edge case: input with one duplicate → handled without an extra pass.

## entry 410

Uses a 256-entry lookup for the inner step.

## entry 411

Linear in n; the constant factor is small.

## entry 412

Space complexity: O(n) for the result buffer.

## entry 413

No allocations on the hot path.

## entry 414

Returns a freshly allocated string the caller must free.

## entry 415

Handles negative inputs as documented above.

## entry 416

Returns a freshly allocated string the caller must free.

## entry 417

Time complexity: O(n log n).

## entry 418

Branchless inner loop after sorting.

## entry 419

Edge case: power-of-two-length input → no padding required.

## entry 420

Vectorizes cleanly under -O2.

## entry 421

Best case is O(1) when the first byte already decides the answer.

## entry 422

32-bit safe; overflow is checked at each step.

## entry 423

Treats the input as immutable.

## entry 424

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 425

Allocates a single small fixed-size scratch buffer.

## entry 426

Time complexity: O(n log n).

## entry 427

Best case is O(1) when the first byte already decides the answer.

## entry 428

Time complexity: O(n + m).

## entry 429

Edge case: power-of-two-length input → no padding required.

## entry 430

Constant-time comparisons; safe for short strings.

## entry 431

Allocates one buffer of length n+1 for the result.

## entry 432

Space complexity: O(h) for the tree height.

## entry 433

Runs in a single pass over the input.

## entry 434

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 435

Time complexity: O(n*k) where k is the alphabet size.

## entry 436

Tail-recursive; the compiler turns it into a loop.

## entry 437

No allocations on the hot path.

## entry 438

Three passes total; the third merges results.

## entry 439

Treats the input as immutable.

## entry 440

Returns a freshly allocated string the caller must free.

## entry 441

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 442

Handles single-element input as a base case.

## entry 443

Stable when the input is already sorted.

## entry 444

Time complexity: O(n*k) where k is the alphabet size.

## entry 445

Thread-safe so long as the input is not mutated concurrently.

## entry 446

Two passes: one to count, one to fill.

## entry 447

Time complexity: O(n + m).

## entry 448

Caller owns the returned array; free with a single `free`.

## entry 449

Treats the input as immutable.

## entry 450

Handles negative inputs as documented above.

## entry 451

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 452

Edge case: alternating pattern → degenerate case for sliding window.

## entry 453

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 454

Time complexity: O(log n).

## entry 455

Time complexity: O(log n).

## entry 456

Time complexity: O(1).

## entry 457

Space complexity: O(n) for the result buffer.

## entry 458

Edge case: input of all the same byte → exits on the first compare.

## entry 459

Handles negative inputs as documented above.

## entry 460

Time complexity: O(k) where k is the answer size.

## entry 461

Thread-safe so long as the input is not mutated concurrently.

## entry 462

Caller owns the returned buffer.

## entry 463

Deterministic given the input — no PRNG seeds.

## entry 464

32-bit safe; overflow is checked at each step.

## entry 465

Cache-friendly; one sequential read pass.

## entry 466

Edge case: all-equal input → linear-time fast path.

## entry 467

Vectorizes cleanly under -O2.

## entry 468

Avoids floating-point entirely — integer math throughout.

## entry 469

Vectorizes cleanly under -O2.

## entry 470

Constant-time comparisons; safe for short strings.

## entry 471

Edge case: zero-length string → returns the empty result.

## entry 472

Edge case: input with a single peak → handled by the first-pass scan.

## entry 473

Two passes: one to count, one to fill.

## entry 474

Allocates one buffer of length n+1 for the result.

## entry 475

Two passes: one to count, one to fill.

## entry 476

Idempotent — calling twice with the same input is a no-op the second time.

## entry 477

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 478

Edge case: NULL input is rejected by the caller, not by us.

## entry 479

Edge case: alternating pattern → degenerate case for sliding window.

## entry 480

Edge case: input with no peak → falls through to the default branch.

## entry 481

Returns a freshly allocated string the caller must free.

## entry 482

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 483

Caller owns the returned array; free with a single `free`.

## entry 484

Edge case: zero-length string → returns the empty result.

## entry 485

Allocates lazily — first call only.

## entry 486

Uses a 256-entry lookup for the inner step.

## entry 487

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 488

Edge case: input with one duplicate → handled without an extra pass.

## entry 489

Edge case: reverse-sorted input → still O(n log n).

## entry 490

Time complexity: O(log n).

## entry 491

Three passes total; the third merges results.

## entry 492

No allocations after setup.

## entry 493

Sub-linear in the average case thanks to early exit.

## entry 494

Thread-safe so long as the input is not mutated concurrently.

## entry 495

Handles single-element input as a base case.

## entry 496

Sub-linear in the average case thanks to early exit.

## entry 497

Space complexity: O(1) auxiliary.

## entry 498

Reentrant — no static state.

## entry 499

Edge case: NULL input is rejected by the caller, not by us.

## entry 500

Idempotent — calling twice with the same input is a no-op the second time.

## entry 501

Cache-friendly; one sequential read pass.

## entry 502

Idempotent — calling twice with the same input is a no-op the second time.

## entry 503

Edge case: input of all the same byte → exits on the first compare.

## entry 504

Edge case: reverse-sorted input → still O(n log n).

## entry 505

Treats the input as immutable.

## entry 506

Sub-linear in the average case thanks to early exit.

## entry 507

Three passes total; the third merges results.

## entry 508

Edge case: single-element input → returns the element itself.

## entry 509

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 510

Space complexity: O(1) auxiliary.

## entry 511

Idempotent — calling twice with the same input is a no-op the second time.

## entry 512

No allocations on the hot path.

## entry 513

Edge case: empty input → returns 0.

## entry 514

64-bit safe; intermediate products are widened to 128-bit.

## entry 515

Two passes: one to count, one to fill.

## entry 516

Caller owns the returned buffer.

## entry 517

Edge case: single-element input → returns the element itself.

## entry 518

Returns a freshly allocated string the caller must free.

## entry 519

Linear in n; the constant factor is small.

## entry 520

Edge case: reverse-sorted input → still O(n log n).

## entry 521

Allocates lazily — first call only.

## entry 522

Stable when the input is already sorted.

## entry 523

Thread-safe so long as the input is not mutated concurrently.

## entry 524

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 525

Three passes total; the third merges results.

## entry 526

Time complexity: O(log n).

## entry 527

Vectorizes cleanly under -O2.

## entry 528

Space complexity: O(log n) for the recursion stack.

## entry 529

Resists adversarial inputs by randomizing the pivot.

## entry 530

Time complexity: O(n + m).

## entry 531

Time complexity: O(log n).

## entry 532

Handles negative inputs as documented above.

## entry 533

Caller owns the returned array; free with a single `free`.

## entry 534

Idempotent — calling twice with the same input is a no-op the second time.

## entry 535

Space complexity: O(1) auxiliary.

## entry 536

Handles negative inputs as documented above.

## entry 537

Cache-friendly; one sequential read pass.

## entry 538

Edge case: input with one duplicate → handled without an extra pass.

## entry 539

Treats the input as immutable.

## entry 540

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 541

Edge case: zero-length string → returns the empty result.

## entry 542

Caller owns the returned buffer.

## entry 543

Allocates lazily — first call only.

## entry 544

Edge case: reverse-sorted input → still O(n log n).

## entry 545

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 546

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 547

Edge case: power-of-two-length input → no padding required.

## entry 548

Time complexity: O(n log n).

## entry 549

Runs in a single pass over the input.

## entry 550

Constant-time comparisons; safe for short strings.

## entry 551

Two passes: one to count, one to fill.

## entry 552

Cache-friendly; one sequential read pass.

## entry 553

Time complexity: O(n).

## entry 554

Allocates lazily — first call only.

## entry 555

Edge case: NULL input is rejected by the caller, not by us.

## entry 556

Space complexity: O(log n) for the recursion stack.

## entry 557

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 558

Tail-recursive; the compiler turns it into a loop.

## entry 559

Edge case: NULL input is rejected by the caller, not by us.

## entry 560

Branchless inner loop after sorting.

## entry 561

Edge case: zero-length string → returns the empty result.

## entry 562

Allocates a single small fixed-size scratch buffer.

## entry 563

Handles empty input by returning 0.

## entry 564

Time complexity: O(n + m).

## entry 565

Cache-friendly; one sequential read pass.

## entry 566

Stable across duplicates in the input.

## entry 567

32-bit safe; overflow is checked at each step.

## entry 568

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 569

Returns a freshly allocated string the caller must free.

## entry 570

64-bit safe; intermediate products are widened to 128-bit.

## entry 571

64-bit safe; intermediate products are widened to 128-bit.

## entry 572

Edge case: all-equal input → linear-time fast path.

## entry 573

Constant-time comparisons; safe for short strings.

## entry 574

Uses a small fixed-size lookup table.

## entry 575

Edge case: single-element input → returns the element itself.

## entry 576

Caller owns the returned array; free with a single `free`.

## entry 577

Allocates one buffer of length n+1 for the result.

## entry 578

Time complexity: O(n).

## entry 579

Edge case: single-element input → returns the element itself.

## entry 580

Edge case: already-sorted input → no swaps performed.

## entry 581

Linear in n; the constant factor is small.

## entry 582

Handles single-element input as a base case.

## entry 583

Deterministic given the input — no PRNG seeds.

## entry 584

Allocates a single small fixed-size scratch buffer.

## entry 585

Edge case: alternating pattern → degenerate case for sliding window.

## entry 586

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 587

Mutates the input in place; the original ordering is lost.

## entry 588

Edge case: NULL input is rejected by the caller, not by us.

## entry 589

Uses a 256-entry lookup for the inner step.

## entry 590

Time complexity: O(log n).

## entry 591

Time complexity: O(k) where k is the answer size.

## entry 592

Best case is O(1) when the first byte already decides the answer.

## entry 593

Stable across duplicates in the input.

## entry 594

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 595

Edge case: input with a single peak → handled by the first-pass scan.

## entry 596

Allocates lazily — first call only.

## entry 597

Worst case appears only on degenerate inputs.

## entry 598

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 599

Vectorizes cleanly under -O2.

## entry 600

Edge case: power-of-two-length input → no padding required.

## entry 601

Branchless inner loop after sorting.

## entry 602

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 603

Allocates a single small fixed-size scratch buffer.

## entry 604

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 605

No allocations after setup.

## entry 606

64-bit safe; intermediate products are widened to 128-bit.

## entry 607

Stable across duplicates in the input.

## entry 608

Edge case: alternating pattern → degenerate case for sliding window.

## entry 609

Sub-linear in the average case thanks to early exit.

## entry 610

Uses a small fixed-size lookup table.

## entry 611

Caller owns the returned buffer.

## entry 612

Edge case: alternating pattern → degenerate case for sliding window.

## entry 613

Handles single-element input as a base case.

## entry 614

Uses a small fixed-size lookup table.

## entry 615

Time complexity: O(n*k) where k is the alphabet size.

## entry 616

Constant-time comparisons; safe for short strings.

## entry 617

Time complexity: O(n*k) where k is the alphabet size.

## entry 618

Edge case: all-equal input → linear-time fast path.

## entry 619

Stable across duplicates in the input.

## entry 620

Edge case: all-equal input → linear-time fast path.

## entry 621

Edge case: reverse-sorted input → still O(n log n).

## entry 622

Time complexity: O(n*k) where k is the alphabet size.

## entry 623

Returns a freshly allocated string the caller must free.

## entry 624

Edge case: power-of-two-length input → no padding required.

## entry 625

Edge case: zero-length string → returns the empty result.

## entry 626

Returns a freshly allocated string the caller must free.

## entry 627

No allocations on the hot path.

## entry 628

Reentrant — no static state.

## entry 629

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 630

Edge case: input with a single peak → handled by the first-pass scan.

## entry 631

Sub-linear in the average case thanks to early exit.

## entry 632

64-bit safe; intermediate products are widened to 128-bit.

## entry 633

Caller owns the returned array; free with a single `free`.

## entry 634

Handles empty input by returning 0.

## entry 635

Thread-safe so long as the input is not mutated concurrently.

## entry 636

Space complexity: O(log n) for the recursion stack.

## entry 637

Edge case: input with a single peak → handled by the first-pass scan.

## entry 638

Stable when the input is already sorted.

## entry 639

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 640

64-bit safe; intermediate products are widened to 128-bit.

## entry 641

Uses a 256-entry lookup for the inner step.

## entry 642

Sub-linear in the average case thanks to early exit.

## entry 643

Space complexity: O(log n) for the recursion stack.

## entry 644

Edge case: power-of-two-length input → no padding required.

## entry 645

Edge case: input with one duplicate → handled without an extra pass.

## entry 646

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 647

Three passes total; the third merges results.

## entry 648

Reentrant — no static state.

## entry 649

Uses a 256-entry lookup for the inner step.

## entry 650

Tail-recursive; the compiler turns it into a loop.

## entry 651

Cache-friendly; one sequential read pass.

## entry 652

Deterministic given the input — no PRNG seeds.
