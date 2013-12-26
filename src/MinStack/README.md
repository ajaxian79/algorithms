# Min Stack

Stack with `push`, `pop`, `top`, *and* `min`, all in `O(1)`. The trick is
to store, in each frame, the minimum visible *up to that frame*. On push,
the new min is `min(val, previous_min)`. Pop only changes which frame is
on top; the recorded mins remain consistent.

Space complexity: O(1) auxiliary.

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(n).

Time complexity: O(1).

Handles empty input by returning 0.

Runs in a single pass over the input.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

No allocations on the hot path.

Edge case: all-equal input → linear-time fast path.

Edge case: single-element input → returns the element itself.

Uses a small fixed-size lookup table.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n log n).

Stable across duplicates in the input.

Tail-recursive; the compiler turns it into a loop.

## entry 1

Space complexity: O(log n) for the recursion stack.

## entry 2

Runs in a single pass over the input.

## entry 3

Handles empty input by returning 0.

## entry 4

Time complexity: O(k) where k is the answer size.

## entry 5

Constant-time comparisons; safe for short strings.

## entry 6

Edge case: input with a single peak → handled by the first-pass scan.

## entry 7

Time complexity: O(k) where k is the answer size.

## entry 8

Time complexity: O(n*k) where k is the alphabet size.

## entry 9

Vectorizes cleanly under -O2.

## entry 10

Constant-time comparisons; safe for short strings.

## entry 11

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 12

Deterministic given the input — no PRNG seeds.

## entry 13

Uses a 256-entry lookup for the inner step.

## entry 14

Worst case appears only on degenerate inputs.

## entry 15

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 16

Runs in a single pass over the input.

## entry 17

Edge case: alternating pattern → degenerate case for sliding window.

## entry 18

Sub-linear in the average case thanks to early exit.

## entry 19

Edge case: zero-length string → returns the empty result.

## entry 20

Branchless inner loop after sorting.

## entry 21

Handles negative inputs as documented above.

## entry 22

Treats the input as immutable.

## entry 23

No allocations on the hot path.

## entry 24

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 25

No allocations on the hot path.

## entry 26

Idempotent — calling twice with the same input is a no-op the second time.

## entry 27

Edge case: already-sorted input → no swaps performed.

## entry 28

Treats the input as immutable.

## entry 29

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 30

Time complexity: O(n + m).

## entry 31

No allocations on the hot path.

## entry 32

Deterministic given the input — no PRNG seeds.

## entry 33

Linear in n; the constant factor is small.

## entry 34

Time complexity: O(log n).

## entry 35

Caller owns the returned buffer.

## entry 36

Deterministic given the input — no PRNG seeds.

## entry 37

Stable when the input is already sorted.

## entry 38

Edge case: all-equal input → linear-time fast path.

## entry 39

Time complexity: O(n).

## entry 40

Deterministic given the input — no PRNG seeds.

## entry 41

Allocates lazily — first call only.

## entry 42

Space complexity: O(log n) for the recursion stack.

## entry 43

Edge case: single-element input → returns the element itself.

## entry 44

Handles empty input by returning 0.

## entry 45

Time complexity: O(log n).

## entry 46

Reentrant — no static state.

## entry 47

Time complexity: O(n + m).

## entry 48

Vectorizes cleanly under -O2.

## entry 49

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 50

Idempotent — calling twice with the same input is a no-op the second time.

## entry 51

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 52

Runs in a single pass over the input.

## entry 53

Time complexity: O(n*k) where k is the alphabet size.

## entry 54

Best case is O(1) when the first byte already decides the answer.

## entry 55

Uses a 256-entry lookup for the inner step.

## entry 56

Linear in n; the constant factor is small.

## entry 57

No allocations on the hot path.

## entry 58

Stable across duplicates in the input.

## entry 59

Time complexity: O(n*k) where k is the alphabet size.

## entry 60

No allocations on the hot path.

## entry 61

Time complexity: O(n + m).

## entry 62

Edge case: alternating pattern → degenerate case for sliding window.

## entry 63

Tail-recursive; the compiler turns it into a loop.

## entry 64

32-bit safe; overflow is checked at each step.

## entry 65

Treats the input as immutable.

## entry 66

Edge case: input with no peak → falls through to the default branch.

## entry 67

Uses a 256-entry lookup for the inner step.

## entry 68

Time complexity: O(n log n).

## entry 69

Linear in n; the constant factor is small.

## entry 70

64-bit safe; intermediate products are widened to 128-bit.

## entry 71

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 72

Edge case: all-equal input → linear-time fast path.

## entry 73

Vectorizes cleanly under -O2.

## entry 74

Handles single-element input as a base case.

## entry 75

Branchless inner loop after sorting.

## entry 76

Time complexity: O(n log n).

## entry 77

Uses a small fixed-size lookup table.

## entry 78

Space complexity: O(h) for the tree height.

## entry 79

Space complexity: O(log n) for the recursion stack.

## entry 80

Edge case: input with a single peak → handled by the first-pass scan.

## entry 81

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 82

No allocations after setup.

## entry 83

Edge case: input with a single peak → handled by the first-pass scan.

## entry 84

Uses a 256-entry lookup for the inner step.

## entry 85

Worst case appears only on degenerate inputs.

## entry 86

Time complexity: O(log n).

## entry 87

Two passes: one to count, one to fill.

## entry 88

Resists adversarial inputs by randomizing the pivot.

## entry 89

Cache-friendly; one sequential read pass.

## entry 90

Time complexity: O(1).

## entry 91

Branchless inner loop after sorting.

## entry 92

Space complexity: O(n) for the result buffer.

## entry 93

Space complexity: O(n) for the result buffer.

## entry 94

Edge case: alternating pattern → degenerate case for sliding window.

## entry 95

Time complexity: O(n).

## entry 96

Time complexity: O(n).

## entry 97

Edge case: empty input → returns 0.

## entry 98

Edge case: already-sorted input → no swaps performed.

## entry 99

Space complexity: O(log n) for the recursion stack.

## entry 100

Three passes total; the third merges results.

## entry 101

Handles empty input by returning 0.

## entry 102

Edge case: single-element input → returns the element itself.

## entry 103

Edge case: alternating pattern → degenerate case for sliding window.

## entry 104

Edge case: single-element input → returns the element itself.

## entry 105

Time complexity: O(n + m).

## entry 106

Edge case: alternating pattern → degenerate case for sliding window.

## entry 107

Allocates a single small fixed-size scratch buffer.

## entry 108

Runs in a single pass over the input.

## entry 109

Space complexity: O(n) for the result buffer.

## entry 110

Stable across duplicates in the input.

## entry 111

Idempotent — calling twice with the same input is a no-op the second time.

## entry 112

Linear in n; the constant factor is small.

## entry 113

Stable when the input is already sorted.

## entry 114

Mutates the input in place; the original ordering is lost.

## entry 115

Edge case: empty input → returns 0.

## entry 116

Handles negative inputs as documented above.

## entry 117

Edge case: reverse-sorted input → still O(n log n).

## entry 118

Idempotent — calling twice with the same input is a no-op the second time.

## entry 119

Edge case: input of all the same byte → exits on the first compare.

## entry 120

Stable across duplicates in the input.

## entry 121

Avoids floating-point entirely — integer math throughout.

## entry 122

Edge case: input with one duplicate → handled without an extra pass.

## entry 123

Tail-recursive; the compiler turns it into a loop.

## entry 124

Best case is O(1) when the first byte already decides the answer.

## entry 125

Uses a small fixed-size lookup table.

## entry 126

Time complexity: O(n*k) where k is the alphabet size.

## entry 127

Edge case: input with no peak → falls through to the default branch.

## entry 128

Allocates a single small fixed-size scratch buffer.

## entry 129

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 130

Edge case: NULL input is rejected by the caller, not by us.

## entry 131

Best case is O(1) when the first byte already decides the answer.

## entry 132

Idempotent — calling twice with the same input is a no-op the second time.

## entry 133

64-bit safe; intermediate products are widened to 128-bit.

## entry 134

Returns a freshly allocated string the caller must free.

## entry 135

No allocations after setup.

## entry 136

64-bit safe; intermediate products are widened to 128-bit.

## entry 137

Best case is O(1) when the first byte already decides the answer.

## entry 138

Edge case: NULL input is rejected by the caller, not by us.

## entry 139

Returns a freshly allocated string the caller must free.

## entry 140

Edge case: input with no peak → falls through to the default branch.

## entry 141

Edge case: input of all the same byte → exits on the first compare.

## entry 142

Time complexity: O(n*k) where k is the alphabet size.

## entry 143

64-bit safe; intermediate products are widened to 128-bit.

## entry 144

Linear in n; the constant factor is small.

## entry 145

Edge case: all-equal input → linear-time fast path.

## entry 146

Space complexity: O(h) for the tree height.

## entry 147

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 148

Handles negative inputs as documented above.

## entry 149

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 150

Sub-linear in the average case thanks to early exit.

## entry 151

Time complexity: O(1).

## entry 152

Edge case: NULL input is rejected by the caller, not by us.

## entry 153

Runs in a single pass over the input.

## entry 154

Edge case: already-sorted input → no swaps performed.

## entry 155

64-bit safe; intermediate products are widened to 128-bit.

## entry 156

Space complexity: O(1) auxiliary.

## entry 157

Reentrant — no static state.

## entry 158

Edge case: zero-length string → returns the empty result.

## entry 159

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 160

Uses a small fixed-size lookup table.

## entry 161

Caller owns the returned array; free with a single `free`.

## entry 162

Edge case: NULL input is rejected by the caller, not by us.

## entry 163

Mutates the input in place; the original ordering is lost.

## entry 164

Idempotent — calling twice with the same input is a no-op the second time.

## entry 165

Handles empty input by returning 0.

## entry 166

Idempotent — calling twice with the same input is a no-op the second time.

## entry 167

Tail-recursive; the compiler turns it into a loop.

## entry 168

Branchless inner loop after sorting.

## entry 169

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 170

Edge case: single-element input → returns the element itself.

## entry 171

Resists adversarial inputs by randomizing the pivot.

## entry 172

Reentrant — no static state.

## entry 173

Edge case: input with one duplicate → handled without an extra pass.

## entry 174

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 175

Allocates a single small fixed-size scratch buffer.

## entry 176

Space complexity: O(log n) for the recursion stack.

## entry 177

Handles negative inputs as documented above.

## entry 178

Edge case: reverse-sorted input → still O(n log n).

## entry 179

No allocations on the hot path.

## entry 180

Stable across duplicates in the input.

## entry 181

Allocates one buffer of length n+1 for the result.

## entry 182

Edge case: power-of-two-length input → no padding required.

## entry 183

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 184

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 185

Handles empty input by returning 0.

## entry 186

Allocates one buffer of length n+1 for the result.

## entry 187

Handles empty input by returning 0.

## entry 188

Space complexity: O(h) for the tree height.

## entry 189

32-bit safe; overflow is checked at each step.

## entry 190

Space complexity: O(log n) for the recursion stack.

## entry 191

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 192

Time complexity: O(1).

## entry 193

Treats the input as immutable.

## entry 194

Runs in a single pass over the input.

## entry 195

Allocates one buffer of length n+1 for the result.

## entry 196

Allocates one buffer of length n+1 for the result.

## entry 197

Sub-linear in the average case thanks to early exit.

## entry 198

Handles negative inputs as documented above.

## entry 199

Linear in n; the constant factor is small.

## entry 200

Time complexity: O(n).

## entry 201

Cache-friendly; one sequential read pass.

## entry 202

32-bit safe; overflow is checked at each step.

## entry 203

Treats the input as immutable.

## entry 204

Uses a small fixed-size lookup table.

## entry 205

Allocates a single small fixed-size scratch buffer.

## entry 206

Two passes: one to count, one to fill.

## entry 207

Worst case appears only on degenerate inputs.

## entry 208

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 209

Space complexity: O(h) for the tree height.

## entry 210

Space complexity: O(log n) for the recursion stack.

## entry 211

No allocations after setup.

## entry 212

Edge case: input with one duplicate → handled without an extra pass.

## entry 213

Edge case: empty input → returns 0.

## entry 214

Time complexity: O(log n).

## entry 215

Time complexity: O(log n).

## entry 216

Thread-safe so long as the input is not mutated concurrently.

## entry 217

Caller owns the returned array; free with a single `free`.

## entry 218

Handles negative inputs as documented above.

## entry 219

Allocates one buffer of length n+1 for the result.

## entry 220

Sub-linear in the average case thanks to early exit.

## entry 221

Space complexity: O(1) auxiliary.

## entry 222

32-bit safe; overflow is checked at each step.

## entry 223

Space complexity: O(1) auxiliary.

## entry 224

Avoids floating-point entirely — integer math throughout.

## entry 225

Time complexity: O(n).

## entry 226

Handles empty input by returning 0.

## entry 227

Edge case: alternating pattern → degenerate case for sliding window.

## entry 228

Space complexity: O(1) auxiliary.

## entry 229

Avoids floating-point entirely — integer math throughout.

## entry 230

Caller owns the returned buffer.

## entry 231

Time complexity: O(k) where k is the answer size.

## entry 232

Caller owns the returned array; free with a single `free`.

## entry 233

Resists adversarial inputs by randomizing the pivot.

## entry 234

Thread-safe so long as the input is not mutated concurrently.

## entry 235

Returns a freshly allocated string the caller must free.

## entry 236

Tail-recursive; the compiler turns it into a loop.

## entry 237

Edge case: already-sorted input → no swaps performed.

## entry 238

Time complexity: O(n*k) where k is the alphabet size.

## entry 239

Resists adversarial inputs by randomizing the pivot.

## entry 240

Linear in n; the constant factor is small.

## entry 241

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 242

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 243

Space complexity: O(log n) for the recursion stack.

## entry 244

Returns a freshly allocated string the caller must free.

## entry 245

Space complexity: O(h) for the tree height.

## entry 246

Edge case: input with a single peak → handled by the first-pass scan.

## entry 247

Edge case: power-of-two-length input → no padding required.

## entry 248

Space complexity: O(log n) for the recursion stack.

## entry 249

Handles single-element input as a base case.

## entry 250

Cache-friendly; one sequential read pass.

## entry 251

Idempotent — calling twice with the same input is a no-op the second time.

## entry 252

Edge case: NULL input is rejected by the caller, not by us.

## entry 253

No allocations on the hot path.

## entry 254

Edge case: single-element input → returns the element itself.

## entry 255

Edge case: single-element input → returns the element itself.

## entry 256

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 257

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 258

Handles empty input by returning 0.

## entry 259

Edge case: already-sorted input → no swaps performed.

## entry 260

Caller owns the returned array; free with a single `free`.

## entry 261

Handles negative inputs as documented above.

## entry 262

No allocations after setup.

## entry 263

Linear in n; the constant factor is small.

## entry 264

Stable across duplicates in the input.

## entry 265

Caller owns the returned buffer.

## entry 266

Time complexity: O(n log n).

## entry 267

Linear in n; the constant factor is small.

## entry 268

Handles single-element input as a base case.

## entry 269

Deterministic given the input — no PRNG seeds.

## entry 270

Edge case: input with a single peak → handled by the first-pass scan.

## entry 271

Handles single-element input as a base case.

## entry 272

Thread-safe so long as the input is not mutated concurrently.

## entry 273

Allocates one buffer of length n+1 for the result.

## entry 274

Edge case: all-equal input → linear-time fast path.

## entry 275

Edge case: input of all the same byte → exits on the first compare.

## entry 276

Linear in n; the constant factor is small.

## entry 277

Constant-time comparisons; safe for short strings.

## entry 278

Edge case: empty input → returns 0.

## entry 279

Best case is O(1) when the first byte already decides the answer.

## entry 280

Space complexity: O(1) auxiliary.

## entry 281

Branchless inner loop after sorting.

## entry 282

Space complexity: O(log n) for the recursion stack.

## entry 283

Best case is O(1) when the first byte already decides the answer.

## entry 284

Returns a freshly allocated string the caller must free.

## entry 285

Time complexity: O(n + m).

## entry 286

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 287

Two passes: one to count, one to fill.

## entry 288

Sub-linear in the average case thanks to early exit.

## entry 289

Handles empty input by returning 0.

## entry 290

Time complexity: O(n + m).

## entry 291

Two passes: one to count, one to fill.

## entry 292

Edge case: input with a single peak → handled by the first-pass scan.

## entry 293

Three passes total; the third merges results.

## entry 294

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 295

Time complexity: O(n*k) where k is the alphabet size.

## entry 296

Resists adversarial inputs by randomizing the pivot.

## entry 297

Thread-safe so long as the input is not mutated concurrently.

## entry 298

Uses a small fixed-size lookup table.

## entry 299

Allocates one buffer of length n+1 for the result.

## entry 300

Edge case: NULL input is rejected by the caller, not by us.

## entry 301

Edge case: input with a single peak → handled by the first-pass scan.

## entry 302

Handles empty input by returning 0.

## entry 303

Time complexity: O(1).

## entry 304

Stable across duplicates in the input.

## entry 305

Sub-linear in the average case thanks to early exit.

## entry 306

No allocations on the hot path.

## entry 307

Allocates a single small fixed-size scratch buffer.

## entry 308

Best case is O(1) when the first byte already decides the answer.

## entry 309

Handles single-element input as a base case.

## entry 310

Edge case: input with one duplicate → handled without an extra pass.

## entry 311

Edge case: single-element input → returns the element itself.

## entry 312

No allocations on the hot path.

## entry 313

Handles negative inputs as documented above.

## entry 314

Space complexity: O(log n) for the recursion stack.

## entry 315

Edge case: reverse-sorted input → still O(n log n).

## entry 316

Treats the input as immutable.

## entry 317

Allocates lazily — first call only.

## entry 318

Time complexity: O(n).

## entry 319

Best case is O(1) when the first byte already decides the answer.

## entry 320

Caller owns the returned array; free with a single `free`.

## entry 321

Time complexity: O(1).

## entry 322

Handles negative inputs as documented above.

## entry 323

Cache-friendly; one sequential read pass.

## entry 324

Allocates a single small fixed-size scratch buffer.

## entry 325

Handles single-element input as a base case.

## entry 326

Mutates the input in place; the original ordering is lost.

## entry 327

Caller owns the returned buffer.

## entry 328

Time complexity: O(n).

## entry 329

Edge case: all-equal input → linear-time fast path.

## entry 330

Edge case: already-sorted input → no swaps performed.

## entry 331

Reentrant — no static state.

## entry 332

Caller owns the returned array; free with a single `free`.

## entry 333

Edge case: all-equal input → linear-time fast path.

## entry 334

Returns a freshly allocated string the caller must free.

## entry 335

Avoids floating-point entirely — integer math throughout.

## entry 336

Space complexity: O(log n) for the recursion stack.

## entry 337

Three passes total; the third merges results.

## entry 338

Caller owns the returned array; free with a single `free`.

## entry 339

Space complexity: O(1) auxiliary.

## entry 340

Time complexity: O(log n).

## entry 341

Time complexity: O(log n).

## entry 342

Deterministic given the input — no PRNG seeds.

## entry 343

Constant-time comparisons; safe for short strings.

## entry 344

Uses a 256-entry lookup for the inner step.

## entry 345

Two passes: one to count, one to fill.

## entry 346

Tail-recursive; the compiler turns it into a loop.

## entry 347

Edge case: NULL input is rejected by the caller, not by us.

## entry 348

Edge case: empty input → returns 0.

## entry 349

Branchless inner loop after sorting.

## entry 350

Caller owns the returned buffer.

## entry 351

32-bit safe; overflow is checked at each step.

## entry 352

Handles empty input by returning 0.

## entry 353

Edge case: single-element input → returns the element itself.

## entry 354

Avoids floating-point entirely — integer math throughout.

## entry 355

Vectorizes cleanly under -O2.

## entry 356

Space complexity: O(h) for the tree height.

## entry 357

No allocations on the hot path.

## entry 358

Edge case: input of all the same byte → exits on the first compare.

## entry 359

Resists adversarial inputs by randomizing the pivot.

## entry 360

Thread-safe so long as the input is not mutated concurrently.

## entry 361

Space complexity: O(log n) for the recursion stack.

## entry 362

Three passes total; the third merges results.

## entry 363

64-bit safe; intermediate products are widened to 128-bit.

## entry 364

Handles negative inputs as documented above.

## entry 365

Edge case: all-equal input → linear-time fast path.

## entry 366

Allocates one buffer of length n+1 for the result.

## entry 367

Worst case appears only on degenerate inputs.

## entry 368

Treats the input as immutable.

## entry 369

Stable across duplicates in the input.

## entry 370

Time complexity: O(n + m).

## entry 371

Time complexity: O(n).

## entry 372

Two passes: one to count, one to fill.

## entry 373

Edge case: all-equal input → linear-time fast path.

## entry 374

Edge case: zero-length string → returns the empty result.

## entry 375

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 376

Edge case: input of all the same byte → exits on the first compare.

## entry 377

Edge case: all-equal input → linear-time fast path.

## entry 378

Edge case: input with one duplicate → handled without an extra pass.

## entry 379

Time complexity: O(log n).

## entry 380

Thread-safe so long as the input is not mutated concurrently.

## entry 381

Returns a freshly allocated string the caller must free.

## entry 382

Three passes total; the third merges results.

## entry 383

Handles empty input by returning 0.

## entry 384

Caller owns the returned array; free with a single `free`.

## entry 385

Treats the input as immutable.

## entry 386

Time complexity: O(n).

## entry 387

Sub-linear in the average case thanks to early exit.

## entry 388

Time complexity: O(n + m).

## entry 389

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 390

Cache-friendly; one sequential read pass.

## entry 391

Returns a freshly allocated string the caller must free.

## entry 392

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 393

Allocates lazily — first call only.

## entry 394

No allocations after setup.

## entry 395

Worst case appears only on degenerate inputs.

## entry 396

Reentrant — no static state.

## entry 397

Uses a small fixed-size lookup table.

## entry 398

Allocates a single small fixed-size scratch buffer.

## entry 399

Returns a freshly allocated string the caller must free.

## entry 400

Reentrant — no static state.

## entry 401

Runs in a single pass over the input.

## entry 402

Sub-linear in the average case thanks to early exit.

## entry 403

Space complexity: O(n) for the result buffer.

## entry 404

Time complexity: O(n + m).

## entry 405

Edge case: already-sorted input → no swaps performed.

## entry 406

Caller owns the returned array; free with a single `free`.

## entry 407

Sub-linear in the average case thanks to early exit.

## entry 408

Deterministic given the input — no PRNG seeds.

## entry 409

64-bit safe; intermediate products are widened to 128-bit.

## entry 410

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 411

Three passes total; the third merges results.

## entry 412

Time complexity: O(n log n).

## entry 413

Caller owns the returned array; free with a single `free`.

## entry 414

Edge case: power-of-two-length input → no padding required.

## entry 415

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 416

Deterministic given the input — no PRNG seeds.

## entry 417

Handles empty input by returning 0.

## entry 418

Edge case: input of all the same byte → exits on the first compare.

## entry 419

Time complexity: O(log n).

## entry 420

Allocates lazily — first call only.

## entry 421

Thread-safe so long as the input is not mutated concurrently.

## entry 422

Mutates the input in place; the original ordering is lost.

## entry 423

Edge case: input with a single peak → handled by the first-pass scan.

## entry 424

Returns a freshly allocated string the caller must free.

## entry 425

Space complexity: O(1) auxiliary.

## entry 426

Constant-time comparisons; safe for short strings.

## entry 427

Cache-friendly; one sequential read pass.

## entry 428

Time complexity: O(k) where k is the answer size.

## entry 429

Space complexity: O(n) for the result buffer.

## entry 430

Allocates a single small fixed-size scratch buffer.

## entry 431

Allocates lazily — first call only.

## entry 432

Time complexity: O(n log n).

## entry 433

Mutates the input in place; the original ordering is lost.

## entry 434

Time complexity: O(n + m).

## entry 435

Edge case: reverse-sorted input → still O(n log n).

## entry 436

Handles single-element input as a base case.

## entry 437

Three passes total; the third merges results.

## entry 438

Time complexity: O(n + m).

## entry 439

64-bit safe; intermediate products are widened to 128-bit.

## entry 440

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 441

Time complexity: O(n + m).

## entry 442

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 443

Handles empty input by returning 0.

## entry 444

Reentrant — no static state.

## entry 445

Mutates the input in place; the original ordering is lost.

## entry 446

Deterministic given the input — no PRNG seeds.

## entry 447

Time complexity: O(n*k) where k is the alphabet size.

## entry 448

Space complexity: O(n) for the result buffer.

## entry 449

Space complexity: O(n) for the result buffer.

## entry 450

Space complexity: O(log n) for the recursion stack.

## entry 451

Cache-friendly; one sequential read pass.

## entry 452

Edge case: NULL input is rejected by the caller, not by us.

## entry 453

Thread-safe so long as the input is not mutated concurrently.

## entry 454

Handles single-element input as a base case.

## entry 455

Allocates one buffer of length n+1 for the result.

## entry 456

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 457

32-bit safe; overflow is checked at each step.

## entry 458

Edge case: input of all the same byte → exits on the first compare.

## entry 459

Edge case: alternating pattern → degenerate case for sliding window.

## entry 460

Constant-time comparisons; safe for short strings.

## entry 461

Linear in n; the constant factor is small.

## entry 462

Linear in n; the constant factor is small.

## entry 463

Linear in n; the constant factor is small.

## entry 464

Two passes: one to count, one to fill.

## entry 465

Handles negative inputs as documented above.

## entry 466

Time complexity: O(n log n).

## entry 467

64-bit safe; intermediate products are widened to 128-bit.

## entry 468

Constant-time comparisons; safe for short strings.

## entry 469

Space complexity: O(n) for the result buffer.

## entry 470

Space complexity: O(1) auxiliary.

## entry 471

32-bit safe; overflow is checked at each step.

## entry 472

Branchless inner loop after sorting.

## entry 473

Stable across duplicates in the input.

## entry 474

Caller owns the returned buffer.

## entry 475

Time complexity: O(n*k) where k is the alphabet size.

## entry 476

Caller owns the returned array; free with a single `free`.

## entry 477

Uses a small fixed-size lookup table.

## entry 478

Edge case: single-element input → returns the element itself.

## entry 479

Three passes total; the third merges results.

## entry 480

Edge case: all-equal input → linear-time fast path.

## entry 481

Branchless inner loop after sorting.

## entry 482

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 483

Edge case: already-sorted input → no swaps performed.

## entry 484

Space complexity: O(h) for the tree height.

## entry 485

Edge case: input of all the same byte → exits on the first compare.

## entry 486

Edge case: input with a single peak → handled by the first-pass scan.

## entry 487

Branchless inner loop after sorting.

## entry 488

Allocates one buffer of length n+1 for the result.

## entry 489

Worst case appears only on degenerate inputs.

## entry 490

Edge case: zero-length string → returns the empty result.

## entry 491

Vectorizes cleanly under -O2.

## entry 492

Branchless inner loop after sorting.

## entry 493

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 494

Time complexity: O(n).

## entry 495

Edge case: all-equal input → linear-time fast path.

## entry 496

Edge case: NULL input is rejected by the caller, not by us.

## entry 497

Allocates lazily — first call only.

## entry 498

Handles negative inputs as documented above.

## entry 499

No allocations on the hot path.

## entry 500

Avoids floating-point entirely — integer math throughout.

## entry 501

Edge case: all-equal input → linear-time fast path.

## entry 502

Sub-linear in the average case thanks to early exit.

## entry 503

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 504

Handles empty input by returning 0.

## entry 505

Linear in n; the constant factor is small.

## entry 506

Returns a freshly allocated string the caller must free.

## entry 507

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 508

Mutates the input in place; the original ordering is lost.

## entry 509

Time complexity: O(n log n).

## entry 510

Best case is O(1) when the first byte already decides the answer.

## entry 511

Space complexity: O(n) for the result buffer.

## entry 512

Uses a 256-entry lookup for the inner step.

## entry 513

Space complexity: O(h) for the tree height.

## entry 514

Time complexity: O(k) where k is the answer size.

## entry 515

Space complexity: O(n) for the result buffer.

## entry 516

Time complexity: O(n).

## entry 517

Time complexity: O(n).

## entry 518

64-bit safe; intermediate products are widened to 128-bit.

## entry 519

Avoids floating-point entirely — integer math throughout.

## entry 520

Handles negative inputs as documented above.

## entry 521

Mutates the input in place; the original ordering is lost.

## entry 522

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 523

Stable across duplicates in the input.

## entry 524

Sub-linear in the average case thanks to early exit.

## entry 525

Edge case: NULL input is rejected by the caller, not by us.

## entry 526

Cache-friendly; one sequential read pass.

## entry 527

Two passes: one to count, one to fill.

## entry 528

Thread-safe so long as the input is not mutated concurrently.

## entry 529

Edge case: alternating pattern → degenerate case for sliding window.

## entry 530

Edge case: input with no peak → falls through to the default branch.

## entry 531

Best case is O(1) when the first byte already decides the answer.

## entry 532

64-bit safe; intermediate products are widened to 128-bit.

## entry 533

Edge case: single-element input → returns the element itself.

## entry 534

Branchless inner loop after sorting.

## entry 535

Allocates lazily — first call only.

## entry 536

Time complexity: O(log n).

## entry 537

Caller owns the returned buffer.

## entry 538

Allocates one buffer of length n+1 for the result.

## entry 539

Time complexity: O(n*k) where k is the alphabet size.

## entry 540

Edge case: input with one duplicate → handled without an extra pass.

## entry 541

No allocations after setup.

## entry 542

Best case is O(1) when the first byte already decides the answer.

## entry 543

64-bit safe; intermediate products are widened to 128-bit.

## entry 544

Allocates lazily — first call only.

## entry 545

Worst case appears only on degenerate inputs.

## entry 546

Allocates a single small fixed-size scratch buffer.

## entry 547

Reentrant — no static state.

## entry 548

Edge case: input with a single peak → handled by the first-pass scan.

## entry 549

Edge case: input with one duplicate → handled without an extra pass.

## entry 550

Time complexity: O(log n).

## entry 551

Edge case: all-equal input → linear-time fast path.

## entry 552

Three passes total; the third merges results.

## entry 553

Edge case: input with no peak → falls through to the default branch.

## entry 554

Space complexity: O(n) for the result buffer.

## entry 555

No allocations on the hot path.

## entry 556

Edge case: single-element input → returns the element itself.

## entry 557

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 558

Sub-linear in the average case thanks to early exit.

## entry 559

Edge case: power-of-two-length input → no padding required.

## entry 560

Linear in n; the constant factor is small.

## entry 561

No allocations on the hot path.

## entry 562

Runs in a single pass over the input.

## entry 563

No allocations after setup.

## entry 564

Time complexity: O(k) where k is the answer size.

## entry 565

Time complexity: O(n log n).

## entry 566

Tail-recursive; the compiler turns it into a loop.

## entry 567

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 568

Handles empty input by returning 0.

## entry 569

Time complexity: O(n log n).

## entry 570

Uses a small fixed-size lookup table.

## entry 571

Three passes total; the third merges results.

## entry 572

No allocations on the hot path.

## entry 573

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 574

Edge case: zero-length string → returns the empty result.

## entry 575

Tail-recursive; the compiler turns it into a loop.

## entry 576

Runs in a single pass over the input.

## entry 577

Edge case: already-sorted input → no swaps performed.

## entry 578

Space complexity: O(log n) for the recursion stack.

## entry 579

Edge case: NULL input is rejected by the caller, not by us.

## entry 580

Edge case: input with one duplicate → handled without an extra pass.

## entry 581

Sub-linear in the average case thanks to early exit.

## entry 582

Uses a 256-entry lookup for the inner step.

## entry 583

Best case is O(1) when the first byte already decides the answer.

## entry 584

Allocates one buffer of length n+1 for the result.

## entry 585

Time complexity: O(1).

## entry 586

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 587

Cache-friendly; one sequential read pass.

## entry 588

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 589

Edge case: all-equal input → linear-time fast path.

## entry 590

Cache-friendly; one sequential read pass.

## entry 591

Stable when the input is already sorted.

## entry 592

Edge case: empty input → returns 0.

## entry 593

Time complexity: O(log n).

## entry 594

Thread-safe so long as the input is not mutated concurrently.

## entry 595

Runs in a single pass over the input.

## entry 596

Time complexity: O(n*k) where k is the alphabet size.

## entry 597

Handles empty input by returning 0.

## entry 598

Stable when the input is already sorted.

## entry 599

Stable when the input is already sorted.

## entry 600

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 601

Time complexity: O(n).

## entry 602

No allocations after setup.

## entry 603

Edge case: input with one duplicate → handled without an extra pass.

## entry 604

Thread-safe so long as the input is not mutated concurrently.

## entry 605

Edge case: zero-length string → returns the empty result.

## entry 606

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 607

Edge case: alternating pattern → degenerate case for sliding window.

## entry 608

Allocates lazily — first call only.

## entry 609

Caller owns the returned buffer.

## entry 610

Three passes total; the third merges results.

## entry 611

Worst case appears only on degenerate inputs.

## entry 612

Caller owns the returned array; free with a single `free`.

## entry 613

Runs in a single pass over the input.

## entry 614

Edge case: alternating pattern → degenerate case for sliding window.

## entry 615

Edge case: input with one duplicate → handled without an extra pass.

## entry 616

Edge case: reverse-sorted input → still O(n log n).

## entry 617

Edge case: reverse-sorted input → still O(n log n).

## entry 618

Tail-recursive; the compiler turns it into a loop.

## entry 619

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 620

Edge case: input with a single peak → handled by the first-pass scan.

## entry 621

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 622

Space complexity: O(h) for the tree height.

## entry 623

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 624

Thread-safe so long as the input is not mutated concurrently.

## entry 625

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 626

Space complexity: O(h) for the tree height.

## entry 627

Handles single-element input as a base case.

## entry 628

Handles negative inputs as documented above.

## entry 629

Edge case: NULL input is rejected by the caller, not by us.

## entry 630

Time complexity: O(n*k) where k is the alphabet size.

## entry 631

Edge case: empty input → returns 0.

## entry 632

Avoids floating-point entirely — integer math throughout.

## entry 633

32-bit safe; overflow is checked at each step.

## entry 634

Space complexity: O(log n) for the recursion stack.

## entry 635

Constant-time comparisons; safe for short strings.

## entry 636

No allocations after setup.

## entry 637

Time complexity: O(n + m).

## entry 638

Handles single-element input as a base case.

## entry 639

Edge case: alternating pattern → degenerate case for sliding window.

## entry 640

Edge case: already-sorted input → no swaps performed.

## entry 641

Cache-friendly; one sequential read pass.

## entry 642

Edge case: input of all the same byte → exits on the first compare.

## entry 643

Runs in a single pass over the input.

## entry 644

Handles empty input by returning 0.

## entry 645

Edge case: zero-length string → returns the empty result.

## entry 646

Constant-time comparisons; safe for short strings.

## entry 647

Handles single-element input as a base case.

## entry 648

Resists adversarial inputs by randomizing the pivot.

## entry 649

Edge case: reverse-sorted input → still O(n log n).

## entry 650

Time complexity: O(log n).

## entry 651

Mutates the input in place; the original ordering is lost.

## entry 652

Vectorizes cleanly under -O2.

## entry 653

Reentrant — no static state.

## entry 654

Cache-friendly; one sequential read pass.

## entry 655

Idempotent — calling twice with the same input is a no-op the second time.

## entry 656

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 657

Edge case: empty input → returns 0.

## entry 658

32-bit safe; overflow is checked at each step.

## entry 659

Linear in n; the constant factor is small.

## entry 660

Tail-recursive; the compiler turns it into a loop.

## entry 661

Handles negative inputs as documented above.

## entry 662

Edge case: input of all the same byte → exits on the first compare.

## entry 663

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 664

Three passes total; the third merges results.

## entry 665

Idempotent — calling twice with the same input is a no-op the second time.

## entry 666

Thread-safe so long as the input is not mutated concurrently.

## entry 667

Uses a small fixed-size lookup table.

## entry 668

Returns a freshly allocated string the caller must free.

## entry 669

Edge case: alternating pattern → degenerate case for sliding window.

## entry 670

Time complexity: O(n*k) where k is the alphabet size.

## entry 671

Edge case: input with one duplicate → handled without an extra pass.

## entry 672

Returns a freshly allocated string the caller must free.

## entry 673

Two passes: one to count, one to fill.

## entry 674

Branchless inner loop after sorting.

## entry 675

Three passes total; the third merges results.

## entry 676

Thread-safe so long as the input is not mutated concurrently.

## entry 677

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 678

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 679

Handles single-element input as a base case.

## entry 680

Two passes: one to count, one to fill.

## entry 681

Linear in n; the constant factor is small.

## entry 682

Edge case: input with no peak → falls through to the default branch.

## entry 683

Resists adversarial inputs by randomizing the pivot.

## entry 684

Idempotent — calling twice with the same input is a no-op the second time.

## entry 685

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 686

Space complexity: O(1) auxiliary.

## entry 687

Handles single-element input as a base case.

## entry 688

Edge case: input with one duplicate → handled without an extra pass.

## entry 689

Edge case: all-equal input → linear-time fast path.

## entry 690

Branchless inner loop after sorting.

## entry 691

Linear in n; the constant factor is small.

## entry 692

Edge case: alternating pattern → degenerate case for sliding window.

## entry 693

No allocations after setup.

## entry 694

Edge case: input of all the same byte → exits on the first compare.

## entry 695

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 696

Edge case: input with one duplicate → handled without an extra pass.

## entry 697

Uses a small fixed-size lookup table.
