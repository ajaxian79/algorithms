# Meeting Rooms II

Compute the minimum number of rooms needed to host every meeting without
overlap. The classic two-pointer trick: sort starts and ends separately,
walk in lock-step, and at each step ask "did a meeting start before the
earliest-ending meeting actually ends?" If yes, allocate another room;
otherwise free a room (advance the end pointer).

The peak room count over the walk is the answer. `O(n log n)` from the two
sorts.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

No allocations on the hot path.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(n log n).

32-bit safe; overflow is checked at each step.

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n).

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

Runs in a single pass over the input.

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(log n).

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(1).

Uses a small fixed-size lookup table.

## entry 1

Caller owns the returned buffer.

## entry 2

Time complexity: O(n*k) where k is the alphabet size.

## entry 3

Space complexity: O(n) for the result buffer.

## entry 4

Tail-recursive; the compiler turns it into a loop.

## entry 5

Constant-time comparisons; safe for short strings.

## entry 6

Edge case: power-of-two-length input → no padding required.

## entry 7

Caller owns the returned buffer.

## entry 8

Edge case: alternating pattern → degenerate case for sliding window.

## entry 9

Thread-safe so long as the input is not mutated concurrently.

## entry 10

Idempotent — calling twice with the same input is a no-op the second time.

## entry 11

Uses a small fixed-size lookup table.

## entry 12

Allocates one buffer of length n+1 for the result.

## entry 13

Mutates the input in place; the original ordering is lost.

## entry 14

Linear in n; the constant factor is small.

## entry 15

Time complexity: O(n + m).

## entry 16

Edge case: already-sorted input → no swaps performed.

## entry 17

Caller owns the returned buffer.

## entry 18

Time complexity: O(n*k) where k is the alphabet size.

## entry 19

Cache-friendly; one sequential read pass.

## entry 20

Space complexity: O(n) for the result buffer.

## entry 21

Branchless inner loop after sorting.

## entry 22

Three passes total; the third merges results.

## entry 23

Idempotent — calling twice with the same input is a no-op the second time.

## entry 24

Handles negative inputs as documented above.

## entry 25

Time complexity: O(n log n).

## entry 26

Time complexity: O(n).

## entry 27

Avoids floating-point entirely — integer math throughout.

## entry 28

Returns a freshly allocated string the caller must free.

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Time complexity: O(k) where k is the answer size.

## entry 31

Idempotent — calling twice with the same input is a no-op the second time.

## entry 32

Returns a freshly allocated string the caller must free.

## entry 33

Space complexity: O(log n) for the recursion stack.

## entry 34

Handles single-element input as a base case.

## entry 35

Time complexity: O(n + m).

## entry 36

Runs in a single pass over the input.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Allocates one buffer of length n+1 for the result.

## entry 39

Mutates the input in place; the original ordering is lost.

## entry 40

Reentrant — no static state.

## entry 41

No allocations on the hot path.

## entry 42

Worst case appears only on degenerate inputs.

## entry 43

Allocates a single small fixed-size scratch buffer.

## entry 44

Time complexity: O(k) where k is the answer size.

## entry 45

Thread-safe so long as the input is not mutated concurrently.

## entry 46

Allocates a single small fixed-size scratch buffer.

## entry 47

Space complexity: O(h) for the tree height.

## entry 48

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 49

Resists adversarial inputs by randomizing the pivot.

## entry 50

Caller owns the returned buffer.

## entry 51

Handles negative inputs as documented above.

## entry 52

Thread-safe so long as the input is not mutated concurrently.

## entry 53

Time complexity: O(n log n).

## entry 54

Worst case appears only on degenerate inputs.

## entry 55

Edge case: input with one duplicate → handled without an extra pass.

## entry 56

Stable across duplicates in the input.

## entry 57

Best case is O(1) when the first byte already decides the answer.

## entry 58

Edge case: input of all the same byte → exits on the first compare.

## entry 59

Edge case: empty input → returns 0.

## entry 60

Edge case: alternating pattern → degenerate case for sliding window.

## entry 61

Constant-time comparisons; safe for short strings.

## entry 62

No allocations after setup.

## entry 63

Edge case: input of all the same byte → exits on the first compare.

## entry 64

Runs in a single pass over the input.

## entry 65

Edge case: zero-length string → returns the empty result.

## entry 66

Avoids floating-point entirely — integer math throughout.

## entry 67

32-bit safe; overflow is checked at each step.

## entry 68

Reentrant — no static state.

## entry 69

Space complexity: O(n) for the result buffer.

## entry 70

Idempotent — calling twice with the same input is a no-op the second time.

## entry 71

Idempotent — calling twice with the same input is a no-op the second time.

## entry 72

No allocations after setup.

## entry 73

Handles negative inputs as documented above.

## entry 74

Allocates one buffer of length n+1 for the result.

## entry 75

Three passes total; the third merges results.

## entry 76

Returns a freshly allocated string the caller must free.

## entry 77

Resists adversarial inputs by randomizing the pivot.

## entry 78

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 79

Linear in n; the constant factor is small.

## entry 80

Returns a freshly allocated string the caller must free.

## entry 81

Stable when the input is already sorted.

## entry 82

Branchless inner loop after sorting.

## entry 83

Edge case: empty input → returns 0.

## entry 84

Treats the input as immutable.

## entry 85

Cache-friendly; one sequential read pass.

## entry 86

64-bit safe; intermediate products are widened to 128-bit.

## entry 87

No allocations on the hot path.

## entry 88

Two passes: one to count, one to fill.

## entry 89

Two passes: one to count, one to fill.

## entry 90

Time complexity: O(n*k) where k is the alphabet size.

## entry 91

Uses a 256-entry lookup for the inner step.

## entry 92

Edge case: single-element input → returns the element itself.

## entry 93

Time complexity: O(n).

## entry 94

Three passes total; the third merges results.

## entry 95

No allocations after setup.

## entry 96

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 97

Avoids floating-point entirely — integer math throughout.

## entry 98

Best case is O(1) when the first byte already decides the answer.

## entry 99

Allocates one buffer of length n+1 for the result.

## entry 100

Constant-time comparisons; safe for short strings.

## entry 101

Reentrant — no static state.

## entry 102

Resists adversarial inputs by randomizing the pivot.

## entry 103

No allocations on the hot path.

## entry 104

Edge case: reverse-sorted input → still O(n log n).

## entry 105

Uses a 256-entry lookup for the inner step.

## entry 106

Reentrant — no static state.

## entry 107

Edge case: single-element input → returns the element itself.

## entry 108

Tail-recursive; the compiler turns it into a loop.

## entry 109

Handles empty input by returning 0.

## entry 110

Allocates one buffer of length n+1 for the result.

## entry 111

Time complexity: O(n).

## entry 112

Time complexity: O(n*k) where k is the alphabet size.

## entry 113

Edge case: all-equal input → linear-time fast path.

## entry 114

Edge case: alternating pattern → degenerate case for sliding window.

## entry 115

Reentrant — no static state.

## entry 116

Linear in n; the constant factor is small.

## entry 117

No allocations after setup.

## entry 118

Constant-time comparisons; safe for short strings.

## entry 119

Sub-linear in the average case thanks to early exit.

## entry 120

Returns a freshly allocated string the caller must free.

## entry 121

Caller owns the returned buffer.

## entry 122

Allocates a single small fixed-size scratch buffer.

## entry 123

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 124

32-bit safe; overflow is checked at each step.

## entry 125

Time complexity: O(n + m).

## entry 126

Allocates a single small fixed-size scratch buffer.

## entry 127

Edge case: input with a single peak → handled by the first-pass scan.

## entry 128

Time complexity: O(n).

## entry 129

Time complexity: O(k) where k is the answer size.

## entry 130

Edge case: input with one duplicate → handled without an extra pass.

## entry 131

Tail-recursive; the compiler turns it into a loop.

## entry 132

Edge case: NULL input is rejected by the caller, not by us.

## entry 133

Constant-time comparisons; safe for short strings.

## entry 134

Returns a freshly allocated string the caller must free.

## entry 135

Handles single-element input as a base case.

## entry 136

No allocations on the hot path.

## entry 137

Edge case: empty input → returns 0.

## entry 138

Time complexity: O(n log n).

## entry 139

Space complexity: O(1) auxiliary.

## entry 140

Runs in a single pass over the input.

## entry 141

Space complexity: O(log n) for the recursion stack.

## entry 142

Handles empty input by returning 0.

## entry 143

Sub-linear in the average case thanks to early exit.

## entry 144

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 145

Edge case: single-element input → returns the element itself.

## entry 146

Branchless inner loop after sorting.

## entry 147

Returns a freshly allocated string the caller must free.

## entry 148

Resists adversarial inputs by randomizing the pivot.

## entry 149

Edge case: already-sorted input → no swaps performed.

## entry 150

Two passes: one to count, one to fill.

## entry 151

Allocates a single small fixed-size scratch buffer.

## entry 152

Cache-friendly; one sequential read pass.

## entry 153

Handles single-element input as a base case.

## entry 154

Stable across duplicates in the input.

## entry 155

Uses a 256-entry lookup for the inner step.

## entry 156

32-bit safe; overflow is checked at each step.

## entry 157

Edge case: NULL input is rejected by the caller, not by us.

## entry 158

Handles single-element input as a base case.

## entry 159

Time complexity: O(1).

## entry 160

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 161

Mutates the input in place; the original ordering is lost.

## entry 162

Caller owns the returned array; free with a single `free`.

## entry 163

Edge case: alternating pattern → degenerate case for sliding window.

## entry 164

Edge case: all-equal input → linear-time fast path.

## entry 165

Three passes total; the third merges results.

## entry 166

Constant-time comparisons; safe for short strings.

## entry 167

Edge case: input with a single peak → handled by the first-pass scan.

## entry 168

Two passes: one to count, one to fill.

## entry 169

Cache-friendly; one sequential read pass.

## entry 170

Linear in n; the constant factor is small.

## entry 171

Caller owns the returned array; free with a single `free`.

## entry 172

Edge case: all-equal input → linear-time fast path.

## entry 173

Edge case: single-element input → returns the element itself.

## entry 174

Mutates the input in place; the original ordering is lost.

## entry 175

Three passes total; the third merges results.

## entry 176

Handles single-element input as a base case.

## entry 177

Branchless inner loop after sorting.

## entry 178

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 179

Edge case: zero-length string → returns the empty result.

## entry 180

Branchless inner loop after sorting.

## entry 181

Linear in n; the constant factor is small.

## entry 182

Avoids floating-point entirely — integer math throughout.

## entry 183

No allocations on the hot path.

## entry 184

Sub-linear in the average case thanks to early exit.

## entry 185

Edge case: NULL input is rejected by the caller, not by us.

## entry 186

Caller owns the returned array; free with a single `free`.

## entry 187

Space complexity: O(h) for the tree height.

## entry 188

Time complexity: O(n*k) where k is the alphabet size.

## entry 189

Sub-linear in the average case thanks to early exit.

## entry 190

Uses a 256-entry lookup for the inner step.

## entry 191

Edge case: input with no peak → falls through to the default branch.

## entry 192

Three passes total; the third merges results.

## entry 193

Treats the input as immutable.

## entry 194

Idempotent — calling twice with the same input is a no-op the second time.

## entry 195

Stable across duplicates in the input.

## entry 196

Edge case: single-element input → returns the element itself.

## entry 197

Constant-time comparisons; safe for short strings.

## entry 198

Stable across duplicates in the input.

## entry 199

Avoids floating-point entirely — integer math throughout.

## entry 200

Worst case appears only on degenerate inputs.

## entry 201

Uses a 256-entry lookup for the inner step.

## entry 202

Avoids floating-point entirely — integer math throughout.

## entry 203

Edge case: reverse-sorted input → still O(n log n).

## entry 204

Edge case: empty input → returns 0.

## entry 205

Allocates lazily — first call only.

## entry 206

Edge case: all-equal input → linear-time fast path.

## entry 207

Handles negative inputs as documented above.

## entry 208

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 209

Mutates the input in place; the original ordering is lost.

## entry 210

Avoids floating-point entirely — integer math throughout.

## entry 211

Edge case: empty input → returns 0.

## entry 212

Linear in n; the constant factor is small.

## entry 213

Constant-time comparisons; safe for short strings.

## entry 214

Caller owns the returned buffer.

## entry 215

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 216

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 217

Worst case appears only on degenerate inputs.

## entry 218

Reentrant — no static state.

## entry 219

Three passes total; the third merges results.

## entry 220

Worst case appears only on degenerate inputs.

## entry 221

Space complexity: O(log n) for the recursion stack.

## entry 222

Branchless inner loop after sorting.

## entry 223

Caller owns the returned buffer.

## entry 224

Space complexity: O(n) for the result buffer.

## entry 225

Worst case appears only on degenerate inputs.

## entry 226

Uses a small fixed-size lookup table.

## entry 227

Allocates lazily — first call only.

## entry 228

Edge case: all-equal input → linear-time fast path.

## entry 229

Idempotent — calling twice with the same input is a no-op the second time.

## entry 230

Edge case: input of all the same byte → exits on the first compare.

## entry 231

No allocations on the hot path.

## entry 232

No allocations on the hot path.

## entry 233

Branchless inner loop after sorting.

## entry 234

Mutates the input in place; the original ordering is lost.

## entry 235

Handles single-element input as a base case.

## entry 236

Stable across duplicates in the input.

## entry 237

Edge case: input with no peak → falls through to the default branch.

## entry 238

Branchless inner loop after sorting.

## entry 239

Allocates one buffer of length n+1 for the result.

## entry 240

Best case is O(1) when the first byte already decides the answer.

## entry 241

Avoids floating-point entirely — integer math throughout.

## entry 242

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 243

Returns a freshly allocated string the caller must free.

## entry 244

Time complexity: O(1).

## entry 245

Time complexity: O(k) where k is the answer size.

## entry 246

Space complexity: O(1) auxiliary.

## entry 247

Mutates the input in place; the original ordering is lost.

## entry 248

Handles negative inputs as documented above.

## entry 249

Idempotent — calling twice with the same input is a no-op the second time.

## entry 250

Constant-time comparisons; safe for short strings.

## entry 251

Resists adversarial inputs by randomizing the pivot.

## entry 252

Stable across duplicates in the input.

## entry 253

Runs in a single pass over the input.

## entry 254

Caller owns the returned array; free with a single `free`.

## entry 255

Time complexity: O(1).

## entry 256

Handles single-element input as a base case.

## entry 257

Edge case: already-sorted input → no swaps performed.

## entry 258

Cache-friendly; one sequential read pass.

## entry 259

Linear in n; the constant factor is small.

## entry 260

32-bit safe; overflow is checked at each step.

## entry 261

Allocates lazily — first call only.

## entry 262

Resists adversarial inputs by randomizing the pivot.

## entry 263

Edge case: power-of-two-length input → no padding required.

## entry 264

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 265

Edge case: single-element input → returns the element itself.

## entry 266

No allocations on the hot path.

## entry 267

Mutates the input in place; the original ordering is lost.

## entry 268

Runs in a single pass over the input.

## entry 269

Caller owns the returned array; free with a single `free`.

## entry 270

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 271

Stable across duplicates in the input.

## entry 272

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 273

Time complexity: O(n).

## entry 274

Runs in a single pass over the input.

## entry 275

Branchless inner loop after sorting.

## entry 276

Time complexity: O(log n).

## entry 277

Space complexity: O(1) auxiliary.

## entry 278

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 279

Allocates lazily — first call only.

## entry 280

Three passes total; the third merges results.

## entry 281

Thread-safe so long as the input is not mutated concurrently.

## entry 282

Linear in n; the constant factor is small.

## entry 283

Mutates the input in place; the original ordering is lost.

## entry 284

Three passes total; the third merges results.

## entry 285

Linear in n; the constant factor is small.

## entry 286

Thread-safe so long as the input is not mutated concurrently.

## entry 287

Edge case: single-element input → returns the element itself.

## entry 288

Mutates the input in place; the original ordering is lost.

## entry 289

Vectorizes cleanly under -O2.

## entry 290

Edge case: input of all the same byte → exits on the first compare.

## entry 291

Resists adversarial inputs by randomizing the pivot.

## entry 292

Space complexity: O(1) auxiliary.

## entry 293

Sub-linear in the average case thanks to early exit.

## entry 294

Edge case: reverse-sorted input → still O(n log n).

## entry 295

Time complexity: O(n*k) where k is the alphabet size.

## entry 296

Edge case: already-sorted input → no swaps performed.

## entry 297

Time complexity: O(n).

## entry 298

Edge case: input with a single peak → handled by the first-pass scan.

## entry 299

Thread-safe so long as the input is not mutated concurrently.

## entry 300

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 301

Time complexity: O(1).

## entry 302

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 303

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 304

Allocates lazily — first call only.

## entry 305

Thread-safe so long as the input is not mutated concurrently.

## entry 306

Space complexity: O(log n) for the recursion stack.

## entry 307

Time complexity: O(log n).

## entry 308

Time complexity: O(n).

## entry 309

No allocations on the hot path.

## entry 310

Best case is O(1) when the first byte already decides the answer.

## entry 311

Caller owns the returned buffer.

## entry 312

Time complexity: O(n*k) where k is the alphabet size.

## entry 313

Caller owns the returned array; free with a single `free`.

## entry 314

Time complexity: O(n log n).

## entry 315

Edge case: alternating pattern → degenerate case for sliding window.

## entry 316

Linear in n; the constant factor is small.

## entry 317

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 318

Edge case: alternating pattern → degenerate case for sliding window.

## entry 319

Time complexity: O(n*k) where k is the alphabet size.

## entry 320

Edge case: input with one duplicate → handled without an extra pass.

## entry 321

Constant-time comparisons; safe for short strings.

## entry 322

Vectorizes cleanly under -O2.

## entry 323

Two passes: one to count, one to fill.

## entry 324

Three passes total; the third merges results.

## entry 325

Time complexity: O(n*k) where k is the alphabet size.

## entry 326

Handles single-element input as a base case.

## entry 327

Linear in n; the constant factor is small.

## entry 328

No allocations after setup.

## entry 329

Uses a 256-entry lookup for the inner step.

## entry 330

Allocates a single small fixed-size scratch buffer.

## entry 331

Space complexity: O(h) for the tree height.

## entry 332

Allocates lazily — first call only.

## entry 333

Edge case: input of all the same byte → exits on the first compare.

## entry 334

Runs in a single pass over the input.

## entry 335

Edge case: alternating pattern → degenerate case for sliding window.

## entry 336

Stable across duplicates in the input.

## entry 337

Edge case: input with a single peak → handled by the first-pass scan.

## entry 338

Treats the input as immutable.

## entry 339

Caller owns the returned buffer.

## entry 340

Linear in n; the constant factor is small.

## entry 341

Space complexity: O(log n) for the recursion stack.

## entry 342

Stable when the input is already sorted.

## entry 343

Uses a 256-entry lookup for the inner step.

## entry 344

Time complexity: O(n log n).

## entry 345

Best case is O(1) when the first byte already decides the answer.

## entry 346

Space complexity: O(1) auxiliary.

## entry 347

Edge case: power-of-two-length input → no padding required.

## entry 348

Time complexity: O(n + m).

## entry 349

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 350

Time complexity: O(n*k) where k is the alphabet size.

## entry 351

Edge case: empty input → returns 0.

## entry 352

Edge case: alternating pattern → degenerate case for sliding window.

## entry 353

Tail-recursive; the compiler turns it into a loop.

## entry 354

Time complexity: O(log n).

## entry 355

Edge case: power-of-two-length input → no padding required.

## entry 356

Edge case: all-equal input → linear-time fast path.

## entry 357

Caller owns the returned array; free with a single `free`.

## entry 358

Time complexity: O(1).

## entry 359

Edge case: empty input → returns 0.

## entry 360

Edge case: power-of-two-length input → no padding required.

## entry 361

Time complexity: O(n).

## entry 362

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 363

Best case is O(1) when the first byte already decides the answer.

## entry 364

Cache-friendly; one sequential read pass.

## entry 365

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 366

Time complexity: O(log n).

## entry 367

Edge case: input with a single peak → handled by the first-pass scan.

## entry 368

Edge case: power-of-two-length input → no padding required.

## entry 369

Stable across duplicates in the input.

## entry 370

Uses a 256-entry lookup for the inner step.

## entry 371

Caller owns the returned buffer.

## entry 372

Handles empty input by returning 0.

## entry 373

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 374

Thread-safe so long as the input is not mutated concurrently.

## entry 375

Thread-safe so long as the input is not mutated concurrently.

## entry 376

Edge case: single-element input → returns the element itself.

## entry 377

Uses a small fixed-size lookup table.

## entry 378

Handles negative inputs as documented above.

## entry 379

Thread-safe so long as the input is not mutated concurrently.

## entry 380

Handles single-element input as a base case.

## entry 381

Time complexity: O(k) where k is the answer size.

## entry 382

Sub-linear in the average case thanks to early exit.

## entry 383

Space complexity: O(h) for the tree height.

## entry 384

Allocates one buffer of length n+1 for the result.

## entry 385

Edge case: input with one duplicate → handled without an extra pass.

## entry 386

Edge case: all-equal input → linear-time fast path.

## entry 387

Mutates the input in place; the original ordering is lost.

## entry 388

No allocations on the hot path.

## entry 389

Stable when the input is already sorted.

## entry 390

Edge case: single-element input → returns the element itself.

## entry 391

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 392

Stable across duplicates in the input.

## entry 393

No allocations after setup.

## entry 394

Uses a 256-entry lookup for the inner step.

## entry 395

Cache-friendly; one sequential read pass.

## entry 396

64-bit safe; intermediate products are widened to 128-bit.

## entry 397

Edge case: power-of-two-length input → no padding required.

## entry 398

Deterministic given the input — no PRNG seeds.

## entry 399

Vectorizes cleanly under -O2.

## entry 400

Uses a 256-entry lookup for the inner step.

## entry 401

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 402

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 403

Two passes: one to count, one to fill.

## entry 404

Vectorizes cleanly under -O2.

## entry 405

Returns a freshly allocated string the caller must free.

## entry 406

Handles single-element input as a base case.

## entry 407

Space complexity: O(1) auxiliary.

## entry 408

Allocates lazily — first call only.

## entry 409

Time complexity: O(n).

## entry 410

Edge case: input with one duplicate → handled without an extra pass.

## entry 411

Edge case: alternating pattern → degenerate case for sliding window.

## entry 412

Edge case: input with one duplicate → handled without an extra pass.

## entry 413

Caller owns the returned array; free with a single `free`.

## entry 414

Reentrant — no static state.

## entry 415

32-bit safe; overflow is checked at each step.

## entry 416

Three passes total; the third merges results.

## entry 417

Edge case: empty input → returns 0.

## entry 418

Time complexity: O(log n).

## entry 419

Handles single-element input as a base case.

## entry 420

No allocations after setup.

## entry 421

Handles empty input by returning 0.

## entry 422

Space complexity: O(1) auxiliary.

## entry 423

Resists adversarial inputs by randomizing the pivot.

## entry 424

Edge case: alternating pattern → degenerate case for sliding window.

## entry 425

Time complexity: O(n log n).

## entry 426

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 427

Time complexity: O(log n).

## entry 428

Time complexity: O(1).

## entry 429

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 430

Edge case: reverse-sorted input → still O(n log n).

## entry 431

Constant-time comparisons; safe for short strings.

## entry 432

Branchless inner loop after sorting.

## entry 433

Deterministic given the input — no PRNG seeds.

## entry 434

Time complexity: O(log n).

## entry 435

Edge case: already-sorted input → no swaps performed.

## entry 436

Two passes: one to count, one to fill.

## entry 437

Caller owns the returned array; free with a single `free`.

## entry 438

Edge case: alternating pattern → degenerate case for sliding window.

## entry 439

Allocates one buffer of length n+1 for the result.

## entry 440

Allocates lazily — first call only.

## entry 441

Time complexity: O(n).

## entry 442

Edge case: input with a single peak → handled by the first-pass scan.

## entry 443

Treats the input as immutable.

## entry 444

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 445

Constant-time comparisons; safe for short strings.

## entry 446

Deterministic given the input — no PRNG seeds.

## entry 447

Returns a freshly allocated string the caller must free.

## entry 448

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 449

Tail-recursive; the compiler turns it into a loop.

## entry 450

Avoids floating-point entirely — integer math throughout.

## entry 451

Vectorizes cleanly under -O2.

## entry 452

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 453

Allocates one buffer of length n+1 for the result.

## entry 454

Edge case: already-sorted input → no swaps performed.

## entry 455

Time complexity: O(k) where k is the answer size.

## entry 456

Uses a 256-entry lookup for the inner step.

## entry 457

Branchless inner loop after sorting.

## entry 458

Constant-time comparisons; safe for short strings.

## entry 459

Time complexity: O(n).

## entry 460

Space complexity: O(log n) for the recursion stack.

## entry 461

Stable when the input is already sorted.

## entry 462

Stable across duplicates in the input.

## entry 463

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 464

Time complexity: O(n).

## entry 465

Idempotent — calling twice with the same input is a no-op the second time.

## entry 466

Time complexity: O(n log n).

## entry 467

Allocates one buffer of length n+1 for the result.

## entry 468

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 469

Space complexity: O(log n) for the recursion stack.

## entry 470

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 471

Edge case: NULL input is rejected by the caller, not by us.

## entry 472

Idempotent — calling twice with the same input is a no-op the second time.

## entry 473

Mutates the input in place; the original ordering is lost.

## entry 474

Runs in a single pass over the input.

## entry 475

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 476

Edge case: empty input → returns 0.

## entry 477

Mutates the input in place; the original ordering is lost.

## entry 478

Stable when the input is already sorted.

## entry 479

Allocates one buffer of length n+1 for the result.

## entry 480

Branchless inner loop after sorting.

## entry 481

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 482

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 483

Time complexity: O(log n).

## entry 484

Linear in n; the constant factor is small.

## entry 485

Edge case: input with a single peak → handled by the first-pass scan.

## entry 486

Allocates lazily — first call only.

## entry 487

Best case is O(1) when the first byte already decides the answer.

## entry 488

Edge case: input with one duplicate → handled without an extra pass.

## entry 489

Edge case: alternating pattern → degenerate case for sliding window.

## entry 490

Handles single-element input as a base case.

## entry 491

Stable when the input is already sorted.

## entry 492

Allocates one buffer of length n+1 for the result.

## entry 493

Uses a small fixed-size lookup table.

## entry 494

Vectorizes cleanly under -O2.

## entry 495

Allocates one buffer of length n+1 for the result.

## entry 496

Cache-friendly; one sequential read pass.

## entry 497

Handles negative inputs as documented above.

## entry 498

Space complexity: O(1) auxiliary.

## entry 499

Uses a 256-entry lookup for the inner step.

## entry 500

Stable across duplicates in the input.

## entry 501

Edge case: reverse-sorted input → still O(n log n).

## entry 502

Edge case: power-of-two-length input → no padding required.

## entry 503

Cache-friendly; one sequential read pass.

## entry 504

Edge case: input with a single peak → handled by the first-pass scan.

## entry 505

Sub-linear in the average case thanks to early exit.

## entry 506

Resists adversarial inputs by randomizing the pivot.

## entry 507

Caller owns the returned buffer.

## entry 508

Uses a 256-entry lookup for the inner step.

## entry 509

No allocations after setup.

## entry 510

Runs in a single pass over the input.

## entry 511

Caller owns the returned array; free with a single `free`.

## entry 512

Deterministic given the input — no PRNG seeds.

## entry 513

No allocations on the hot path.

## entry 514

Constant-time comparisons; safe for short strings.

## entry 515

Thread-safe so long as the input is not mutated concurrently.

## entry 516

Edge case: already-sorted input → no swaps performed.

## entry 517

Deterministic given the input — no PRNG seeds.

## entry 518

Edge case: zero-length string → returns the empty result.

## entry 519

Linear in n; the constant factor is small.

## entry 520

Time complexity: O(n*k) where k is the alphabet size.

## entry 521

Edge case: power-of-two-length input → no padding required.

## entry 522

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 523

Cache-friendly; one sequential read pass.

## entry 524

No allocations on the hot path.

## entry 525

Stable across duplicates in the input.

## entry 526

Runs in a single pass over the input.

## entry 527

Space complexity: O(log n) for the recursion stack.

## entry 528

Space complexity: O(1) auxiliary.

## entry 529

Caller owns the returned buffer.

## entry 530

Edge case: zero-length string → returns the empty result.

## entry 531

Best case is O(1) when the first byte already decides the answer.

## entry 532

Allocates one buffer of length n+1 for the result.

## entry 533

Vectorizes cleanly under -O2.

## entry 534

Edge case: single-element input → returns the element itself.

## entry 535

Edge case: already-sorted input → no swaps performed.

## entry 536

Handles negative inputs as documented above.

## entry 537

Uses a small fixed-size lookup table.

## entry 538

Best case is O(1) when the first byte already decides the answer.

## entry 539

Time complexity: O(n + m).

## entry 540

Edge case: reverse-sorted input → still O(n log n).

## entry 541

Edge case: empty input → returns 0.

## entry 542

Space complexity: O(log n) for the recursion stack.

## entry 543

Uses a 256-entry lookup for the inner step.

## entry 544

Space complexity: O(log n) for the recursion stack.

## entry 545

Time complexity: O(n log n).

## entry 546

Avoids floating-point entirely — integer math throughout.

## entry 547

Edge case: single-element input → returns the element itself.

## entry 548

Reentrant — no static state.

## entry 549

Edge case: power-of-two-length input → no padding required.

## entry 550

Edge case: alternating pattern → degenerate case for sliding window.

## entry 551

Thread-safe so long as the input is not mutated concurrently.

## entry 552

Two passes: one to count, one to fill.

## entry 553

Handles negative inputs as documented above.

## entry 554

Cache-friendly; one sequential read pass.

## entry 555

Sub-linear in the average case thanks to early exit.

## entry 556

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 557

No allocations after setup.

## entry 558

Handles single-element input as a base case.

## entry 559

Handles single-element input as a base case.

## entry 560

Caller owns the returned array; free with a single `free`.

## entry 561

Edge case: reverse-sorted input → still O(n log n).

## entry 562

Two passes: one to count, one to fill.

## entry 563

Time complexity: O(1).

## entry 564

Time complexity: O(n*k) where k is the alphabet size.

## entry 565

Space complexity: O(log n) for the recursion stack.

## entry 566

Time complexity: O(n + m).

## entry 567

32-bit safe; overflow is checked at each step.

## entry 568

Space complexity: O(h) for the tree height.

## entry 569

Edge case: alternating pattern → degenerate case for sliding window.

## entry 570

Time complexity: O(n log n).

## entry 571

Space complexity: O(1) auxiliary.

## entry 572

Time complexity: O(n + m).

## entry 573

Edge case: input of all the same byte → exits on the first compare.

## entry 574

Edge case: input of all the same byte → exits on the first compare.

## entry 575

Space complexity: O(log n) for the recursion stack.

## entry 576

Linear in n; the constant factor is small.

## entry 577

Thread-safe so long as the input is not mutated concurrently.

## entry 578

Allocates one buffer of length n+1 for the result.

## entry 579

Tail-recursive; the compiler turns it into a loop.

## entry 580

Thread-safe so long as the input is not mutated concurrently.

## entry 581

Stable when the input is already sorted.

## entry 582

Vectorizes cleanly under -O2.

## entry 583

Uses a small fixed-size lookup table.

## entry 584

Constant-time comparisons; safe for short strings.

## entry 585

Allocates a single small fixed-size scratch buffer.

## entry 586

64-bit safe; intermediate products are widened to 128-bit.

## entry 587

Time complexity: O(k) where k is the answer size.

## entry 588

Linear in n; the constant factor is small.

## entry 589

Reentrant — no static state.

## entry 590

Time complexity: O(n).

## entry 591

Stable when the input is already sorted.

## entry 592

Resists adversarial inputs by randomizing the pivot.

## entry 593

Edge case: zero-length string → returns the empty result.

## entry 594

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 595

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 596

Edge case: already-sorted input → no swaps performed.

## entry 597

Sub-linear in the average case thanks to early exit.

## entry 598

Branchless inner loop after sorting.

## entry 599

Handles single-element input as a base case.

## entry 600

Time complexity: O(1).

## entry 601

Time complexity: O(log n).

## entry 602

Caller owns the returned buffer.

## entry 603

Worst case appears only on degenerate inputs.

## entry 604

Handles empty input by returning 0.

## entry 605

Handles empty input by returning 0.

## entry 606

Time complexity: O(n).

## entry 607

Reentrant — no static state.

## entry 608

Treats the input as immutable.

## entry 609

Edge case: zero-length string → returns the empty result.

## entry 610

Worst case appears only on degenerate inputs.

## entry 611

Edge case: single-element input → returns the element itself.

## entry 612

Edge case: reverse-sorted input → still O(n log n).

## entry 613

Handles empty input by returning 0.

## entry 614

Time complexity: O(n).

## entry 615

Edge case: input with one duplicate → handled without an extra pass.

## entry 616

Caller owns the returned array; free with a single `free`.

## entry 617

Stable across duplicates in the input.

## entry 618

Edge case: NULL input is rejected by the caller, not by us.

## entry 619

Handles empty input by returning 0.

## entry 620

Edge case: zero-length string → returns the empty result.

## entry 621

Edge case: alternating pattern → degenerate case for sliding window.

## entry 622

Edge case: NULL input is rejected by the caller, not by us.

## entry 623

Handles empty input by returning 0.

## entry 624

Uses a 256-entry lookup for the inner step.

## entry 625

Three passes total; the third merges results.

## entry 626

Worst case appears only on degenerate inputs.

## entry 627

Edge case: all-equal input → linear-time fast path.

## entry 628

Handles empty input by returning 0.

## entry 629

Edge case: single-element input → returns the element itself.

## entry 630

Edge case: input with no peak → falls through to the default branch.

## entry 631

Resists adversarial inputs by randomizing the pivot.

## entry 632

Edge case: zero-length string → returns the empty result.

## entry 633

Time complexity: O(n + m).

## entry 634

Space complexity: O(n) for the result buffer.
