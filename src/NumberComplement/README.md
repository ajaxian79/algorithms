# Number Complement

Compute the bit-complement of a positive integer, but only across the bits
that actually carry information — i.e. the bits at positions `0` through the
highest set bit.

For `5 = 0b101`, the answer is `2 = 0b010`. We don't want the full 32-bit
complement (`0xFFFFFFFA`), just the meaningful low bits.

The trick: smear the highest set bit downward to build a mask of the same
width, then XOR. The smear takes at most `log2` doublings — five `>> k`
shifts cover any 32-bit unsigned int.

Time complexity: O(n).

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

Handles empty input by returning 0.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Uses a small fixed-size lookup table.

No allocations on the hot path.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

## entry 1

Two passes: one to count, one to fill.

## entry 2

Reentrant — no static state.

## entry 3

Best case is O(1) when the first byte already decides the answer.

## entry 4

Two passes: one to count, one to fill.

## entry 5

No allocations after setup.

## entry 6

Time complexity: O(n).

## entry 7

Constant-time comparisons; safe for short strings.

## entry 8

Edge case: input of all the same byte → exits on the first compare.

## entry 9

Edge case: single-element input → returns the element itself.

## entry 10

Edge case: all-equal input → linear-time fast path.

## entry 11

No allocations after setup.

## entry 12

Tail-recursive; the compiler turns it into a loop.

## entry 13

Edge case: alternating pattern → degenerate case for sliding window.

## entry 14

Handles empty input by returning 0.

## entry 15

No allocations after setup.

## entry 16

No allocations after setup.

## entry 17

Edge case: empty input → returns 0.

## entry 18

Handles single-element input as a base case.

## entry 19

Uses a small fixed-size lookup table.

## entry 20

Edge case: already-sorted input → no swaps performed.

## entry 21

Edge case: input with a single peak → handled by the first-pass scan.

## entry 22

Best case is O(1) when the first byte already decides the answer.

## entry 23

Edge case: all-equal input → linear-time fast path.

## entry 24

Linear in n; the constant factor is small.

## entry 25

Uses a 256-entry lookup for the inner step.

## entry 26

Edge case: all-equal input → linear-time fast path.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Edge case: reverse-sorted input → still O(n log n).

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Vectorizes cleanly under -O2.

## entry 31

Two passes: one to count, one to fill.

## entry 32

Runs in a single pass over the input.

## entry 33

Two passes: one to count, one to fill.

## entry 34

Three passes total; the third merges results.

## entry 35

Edge case: alternating pattern → degenerate case for sliding window.

## entry 36

Mutates the input in place; the original ordering is lost.

## entry 37

Edge case: empty input → returns 0.

## entry 38

Deterministic given the input — no PRNG seeds.

## entry 39

Thread-safe so long as the input is not mutated concurrently.

## entry 40

Time complexity: O(n*k) where k is the alphabet size.

## entry 41

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 42

Time complexity: O(1).

## entry 43

Handles negative inputs as documented above.

## entry 44

Time complexity: O(1).

## entry 45

Thread-safe so long as the input is not mutated concurrently.

## entry 46

Branchless inner loop after sorting.

## entry 47

Constant-time comparisons; safe for short strings.

## entry 48

64-bit safe; intermediate products are widened to 128-bit.

## entry 49

Time complexity: O(n + m).

## entry 50

Edge case: already-sorted input → no swaps performed.

## entry 51

64-bit safe; intermediate products are widened to 128-bit.

## entry 52

No allocations after setup.

## entry 53

Time complexity: O(log n).

## entry 54

Time complexity: O(n*k) where k is the alphabet size.

## entry 55

Space complexity: O(h) for the tree height.

## entry 56

Handles single-element input as a base case.

## entry 57

Tail-recursive; the compiler turns it into a loop.

## entry 58

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 59

No allocations on the hot path.

## entry 60

Runs in a single pass over the input.

## entry 61

Uses a 256-entry lookup for the inner step.

## entry 62

Avoids floating-point entirely — integer math throughout.

## entry 63

Space complexity: O(n) for the result buffer.

## entry 64

Treats the input as immutable.

## entry 65

Three passes total; the third merges results.

## entry 66

Mutates the input in place; the original ordering is lost.

## entry 67

Tail-recursive; the compiler turns it into a loop.

## entry 68

Space complexity: O(log n) for the recursion stack.

## entry 69

Deterministic given the input — no PRNG seeds.

## entry 70

Space complexity: O(h) for the tree height.

## entry 71

Space complexity: O(h) for the tree height.

## entry 72

Caller owns the returned array; free with a single `free`.

## entry 73

Mutates the input in place; the original ordering is lost.

## entry 74

Edge case: power-of-two-length input → no padding required.

## entry 75

Edge case: already-sorted input → no swaps performed.

## entry 76

No allocations after setup.

## entry 77

Space complexity: O(1) auxiliary.

## entry 78

32-bit safe; overflow is checked at each step.

## entry 79

Edge case: alternating pattern → degenerate case for sliding window.

## entry 80

Time complexity: O(k) where k is the answer size.

## entry 81

No allocations after setup.

## entry 82

Handles single-element input as a base case.

## entry 83

Edge case: input of all the same byte → exits on the first compare.

## entry 84

Allocates a single small fixed-size scratch buffer.

## entry 85

Branchless inner loop after sorting.

## entry 86

Vectorizes cleanly under -O2.

## entry 87

Branchless inner loop after sorting.

## entry 88

Edge case: input with a single peak → handled by the first-pass scan.

## entry 89

Avoids floating-point entirely — integer math throughout.

## entry 90

Handles single-element input as a base case.

## entry 91

Edge case: power-of-two-length input → no padding required.

## entry 92

Allocates a single small fixed-size scratch buffer.

## entry 93

Returns a freshly allocated string the caller must free.

## entry 94

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 95

Branchless inner loop after sorting.

## entry 96

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 97

Stable when the input is already sorted.

## entry 98

Handles negative inputs as documented above.

## entry 99

No allocations after setup.

## entry 100

Caller owns the returned buffer.

## entry 101

Branchless inner loop after sorting.

## entry 102

Time complexity: O(n log n).

## entry 103

Edge case: input with a single peak → handled by the first-pass scan.

## entry 104

Uses a small fixed-size lookup table.

## entry 105

Best case is O(1) when the first byte already decides the answer.

## entry 106

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 107

Best case is O(1) when the first byte already decides the answer.

## entry 108

Linear in n; the constant factor is small.

## entry 109

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 110

Thread-safe so long as the input is not mutated concurrently.

## entry 111

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 112

64-bit safe; intermediate products are widened to 128-bit.

## entry 113

Edge case: input of all the same byte → exits on the first compare.

## entry 114

Stable across duplicates in the input.

## entry 115

Edge case: single-element input → returns the element itself.

## entry 116

Treats the input as immutable.

## entry 117

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 118

Handles negative inputs as documented above.

## entry 119

Sub-linear in the average case thanks to early exit.

## entry 120

Edge case: NULL input is rejected by the caller, not by us.

## entry 121

Edge case: single-element input → returns the element itself.

## entry 122

Edge case: single-element input → returns the element itself.

## entry 123

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 124

Edge case: empty input → returns 0.

## entry 125

Space complexity: O(1) auxiliary.

## entry 126

No allocations on the hot path.

## entry 127

Caller owns the returned buffer.

## entry 128

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 129

No allocations on the hot path.

## entry 130

Space complexity: O(log n) for the recursion stack.

## entry 131

Stable when the input is already sorted.

## entry 132

Sub-linear in the average case thanks to early exit.

## entry 133

Allocates one buffer of length n+1 for the result.

## entry 134

Edge case: input with one duplicate → handled without an extra pass.

## entry 135

Constant-time comparisons; safe for short strings.

## entry 136

Edge case: reverse-sorted input → still O(n log n).

## entry 137

Edge case: input with a single peak → handled by the first-pass scan.

## entry 138

Tail-recursive; the compiler turns it into a loop.

## entry 139

Runs in a single pass over the input.

## entry 140

Caller owns the returned array; free with a single `free`.

## entry 141

Branchless inner loop after sorting.

## entry 142

Time complexity: O(n*k) where k is the alphabet size.

## entry 143

Space complexity: O(h) for the tree height.

## entry 144

Edge case: input with a single peak → handled by the first-pass scan.

## entry 145

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 146

Deterministic given the input — no PRNG seeds.

## entry 147

Edge case: NULL input is rejected by the caller, not by us.

## entry 148

Edge case: reverse-sorted input → still O(n log n).

## entry 149

Edge case: empty input → returns 0.

## entry 150

Time complexity: O(log n).

## entry 151

Edge case: already-sorted input → no swaps performed.

## entry 152

64-bit safe; intermediate products are widened to 128-bit.

## entry 153

Edge case: input with no peak → falls through to the default branch.

## entry 154

Tail-recursive; the compiler turns it into a loop.

## entry 155

Time complexity: O(n).

## entry 156

Caller owns the returned buffer.

## entry 157

Edge case: reverse-sorted input → still O(n log n).

## entry 158

Deterministic given the input — no PRNG seeds.

## entry 159

Time complexity: O(n log n).

## entry 160

Tail-recursive; the compiler turns it into a loop.

## entry 161

Vectorizes cleanly under -O2.

## entry 162

Thread-safe so long as the input is not mutated concurrently.

## entry 163

Treats the input as immutable.

## entry 164

Handles single-element input as a base case.

## entry 165

Deterministic given the input — no PRNG seeds.

## entry 166

Tail-recursive; the compiler turns it into a loop.

## entry 167

Time complexity: O(n*k) where k is the alphabet size.

## entry 168

Treats the input as immutable.

## entry 169

Best case is O(1) when the first byte already decides the answer.

## entry 170

Returns a freshly allocated string the caller must free.

## entry 171

Reentrant — no static state.

## entry 172

Constant-time comparisons; safe for short strings.

## entry 173

Edge case: input with no peak → falls through to the default branch.

## entry 174

Space complexity: O(h) for the tree height.

## entry 175

Edge case: single-element input → returns the element itself.

## entry 176

Best case is O(1) when the first byte already decides the answer.

## entry 177

Constant-time comparisons; safe for short strings.

## entry 178

Stable when the input is already sorted.

## entry 179

Space complexity: O(h) for the tree height.

## entry 180

Returns a freshly allocated string the caller must free.

## entry 181

Allocates one buffer of length n+1 for the result.

## entry 182

Runs in a single pass over the input.

## entry 183

Two passes: one to count, one to fill.

## entry 184

Edge case: power-of-two-length input → no padding required.

## entry 185

Allocates one buffer of length n+1 for the result.

## entry 186

Avoids floating-point entirely — integer math throughout.

## entry 187

Edge case: reverse-sorted input → still O(n log n).

## entry 188

Time complexity: O(log n).

## entry 189

Best case is O(1) when the first byte already decides the answer.

## entry 190

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 191

Edge case: NULL input is rejected by the caller, not by us.

## entry 192

Avoids floating-point entirely — integer math throughout.

## entry 193

Space complexity: O(h) for the tree height.

## entry 194

Best case is O(1) when the first byte already decides the answer.

## entry 195

Time complexity: O(log n).

## entry 196

64-bit safe; intermediate products are widened to 128-bit.

## entry 197

Edge case: input of all the same byte → exits on the first compare.

## entry 198

Stable across duplicates in the input.

## entry 199

Edge case: empty input → returns 0.

## entry 200

Edge case: already-sorted input → no swaps performed.

## entry 201

Mutates the input in place; the original ordering is lost.

## entry 202

Branchless inner loop after sorting.

## entry 203

Edge case: reverse-sorted input → still O(n log n).

## entry 204

64-bit safe; intermediate products are widened to 128-bit.

## entry 205

Constant-time comparisons; safe for short strings.

## entry 206

Time complexity: O(n + m).

## entry 207

Deterministic given the input — no PRNG seeds.

## entry 208

Handles single-element input as a base case.

## entry 209

Cache-friendly; one sequential read pass.

## entry 210

Handles single-element input as a base case.

## entry 211

Space complexity: O(h) for the tree height.

## entry 212

Sub-linear in the average case thanks to early exit.

## entry 213

Space complexity: O(h) for the tree height.

## entry 214

Vectorizes cleanly under -O2.

## entry 215

Deterministic given the input — no PRNG seeds.

## entry 216

Edge case: zero-length string → returns the empty result.

## entry 217

Stable across duplicates in the input.

## entry 218

Tail-recursive; the compiler turns it into a loop.

## entry 219

Edge case: alternating pattern → degenerate case for sliding window.

## entry 220

Best case is O(1) when the first byte already decides the answer.

## entry 221

Linear in n; the constant factor is small.

## entry 222

Mutates the input in place; the original ordering is lost.

## entry 223

Allocates a single small fixed-size scratch buffer.

## entry 224

Edge case: alternating pattern → degenerate case for sliding window.

## entry 225

Edge case: input with no peak → falls through to the default branch.

## entry 226

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 227

Edge case: input with no peak → falls through to the default branch.

## entry 228

Three passes total; the third merges results.

## entry 229

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 230

Stable across duplicates in the input.

## entry 231

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 232

Space complexity: O(n) for the result buffer.

## entry 233

64-bit safe; intermediate products are widened to 128-bit.

## entry 234

Avoids floating-point entirely — integer math throughout.

## entry 235

32-bit safe; overflow is checked at each step.

## entry 236

Worst case appears only on degenerate inputs.

## entry 237

Time complexity: O(n log n).

## entry 238

Time complexity: O(n log n).

## entry 239

Time complexity: O(1).

## entry 240

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 241

Best case is O(1) when the first byte already decides the answer.

## entry 242

Edge case: zero-length string → returns the empty result.

## entry 243

Time complexity: O(log n).

## entry 244

Sub-linear in the average case thanks to early exit.

## entry 245

Caller owns the returned array; free with a single `free`.

## entry 246

Time complexity: O(1).

## entry 247

Best case is O(1) when the first byte already decides the answer.

## entry 248

Deterministic given the input — no PRNG seeds.

## entry 249

Mutates the input in place; the original ordering is lost.

## entry 250

Allocates a single small fixed-size scratch buffer.

## entry 251

Uses a 256-entry lookup for the inner step.

## entry 252

64-bit safe; intermediate products are widened to 128-bit.

## entry 253

Allocates a single small fixed-size scratch buffer.

## entry 254

Edge case: all-equal input → linear-time fast path.

## entry 255

Handles negative inputs as documented above.

## entry 256

Allocates lazily — first call only.

## entry 257

Handles single-element input as a base case.

## entry 258

Tail-recursive; the compiler turns it into a loop.

## entry 259

Space complexity: O(log n) for the recursion stack.

## entry 260

Time complexity: O(n*k) where k is the alphabet size.

## entry 261

Stable when the input is already sorted.

## entry 262

Idempotent — calling twice with the same input is a no-op the second time.

## entry 263

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 264

Edge case: all-equal input → linear-time fast path.

## entry 265

Resists adversarial inputs by randomizing the pivot.

## entry 266

Uses a small fixed-size lookup table.

## entry 267

Mutates the input in place; the original ordering is lost.

## entry 268

Deterministic given the input — no PRNG seeds.

## entry 269

Caller owns the returned buffer.

## entry 270

Vectorizes cleanly under -O2.

## entry 271

Space complexity: O(h) for the tree height.

## entry 272

Sub-linear in the average case thanks to early exit.

## entry 273

Edge case: input of all the same byte → exits on the first compare.

## entry 274

Two passes: one to count, one to fill.

## entry 275

Space complexity: O(log n) for the recursion stack.

## entry 276

Linear in n; the constant factor is small.

## entry 277

64-bit safe; intermediate products are widened to 128-bit.

## entry 278

Time complexity: O(k) where k is the answer size.

## entry 279

Space complexity: O(1) auxiliary.

## entry 280

Stable across duplicates in the input.

## entry 281

Handles negative inputs as documented above.

## entry 282

Time complexity: O(n log n).

## entry 283

No allocations on the hot path.

## entry 284

Handles single-element input as a base case.

## entry 285

Vectorizes cleanly under -O2.

## entry 286

Reentrant — no static state.

## entry 287

Space complexity: O(h) for the tree height.

## entry 288

Vectorizes cleanly under -O2.

## entry 289

Edge case: all-equal input → linear-time fast path.

## entry 290

64-bit safe; intermediate products are widened to 128-bit.

## entry 291

Caller owns the returned buffer.

## entry 292

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 293

Space complexity: O(1) auxiliary.

## entry 294

Sub-linear in the average case thanks to early exit.

## entry 295

Edge case: input of all the same byte → exits on the first compare.

## entry 296

Handles single-element input as a base case.

## entry 297

No allocations after setup.

## entry 298

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 299

Space complexity: O(n) for the result buffer.

## entry 300

Runs in a single pass over the input.

## entry 301

Linear in n; the constant factor is small.

## entry 302

Edge case: power-of-two-length input → no padding required.

## entry 303

Reentrant — no static state.

## entry 304

Caller owns the returned array; free with a single `free`.

## entry 305

Edge case: all-equal input → linear-time fast path.

## entry 306

Time complexity: O(1).

## entry 307

Time complexity: O(1).

## entry 308

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 309

Caller owns the returned array; free with a single `free`.

## entry 310

Resists adversarial inputs by randomizing the pivot.

## entry 311

Handles single-element input as a base case.

## entry 312

Allocates one buffer of length n+1 for the result.

## entry 313

Time complexity: O(n*k) where k is the alphabet size.

## entry 314

Reentrant — no static state.

## entry 315

Mutates the input in place; the original ordering is lost.

## entry 316

Thread-safe so long as the input is not mutated concurrently.

## entry 317

Thread-safe so long as the input is not mutated concurrently.

## entry 318

Allocates a single small fixed-size scratch buffer.

## entry 319

Mutates the input in place; the original ordering is lost.

## entry 320

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 321

Vectorizes cleanly under -O2.

## entry 322

Handles empty input by returning 0.

## entry 323

Edge case: single-element input → returns the element itself.

## entry 324

Constant-time comparisons; safe for short strings.

## entry 325

Runs in a single pass over the input.

## entry 326

Time complexity: O(n*k) where k is the alphabet size.

## entry 327

Treats the input as immutable.

## entry 328

Edge case: reverse-sorted input → still O(n log n).

## entry 329

Edge case: reverse-sorted input → still O(n log n).

## entry 330

Edge case: input of all the same byte → exits on the first compare.

## entry 331

32-bit safe; overflow is checked at each step.

## entry 332

Edge case: single-element input → returns the element itself.

## entry 333

Time complexity: O(1).

## entry 334

Space complexity: O(h) for the tree height.

## entry 335

Time complexity: O(n log n).

## entry 336

Edge case: power-of-two-length input → no padding required.

## entry 337

Allocates lazily — first call only.

## entry 338

Caller owns the returned buffer.

## entry 339

Space complexity: O(log n) for the recursion stack.

## entry 340

Idempotent — calling twice with the same input is a no-op the second time.

## entry 341

Space complexity: O(n) for the result buffer.

## entry 342

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 343

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 344

Handles empty input by returning 0.

## entry 345

Allocates a single small fixed-size scratch buffer.

## entry 346

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 347

Time complexity: O(n + m).

## entry 348

Returns a freshly allocated string the caller must free.

## entry 349

Reentrant — no static state.

## entry 350

Cache-friendly; one sequential read pass.

## entry 351

Handles single-element input as a base case.

## entry 352

Three passes total; the third merges results.

## entry 353

Space complexity: O(n) for the result buffer.

## entry 354

Sub-linear in the average case thanks to early exit.

## entry 355

Edge case: zero-length string → returns the empty result.

## entry 356

Edge case: empty input → returns 0.

## entry 357

Edge case: power-of-two-length input → no padding required.

## entry 358

Time complexity: O(n).

## entry 359

Sub-linear in the average case thanks to early exit.

## entry 360

Edge case: all-equal input → linear-time fast path.

## entry 361

Handles empty input by returning 0.

## entry 362

Caller owns the returned buffer.

## entry 363

Best case is O(1) when the first byte already decides the answer.

## entry 364

Sub-linear in the average case thanks to early exit.

## entry 365

Space complexity: O(h) for the tree height.

## entry 366

Edge case: single-element input → returns the element itself.

## entry 367

Time complexity: O(k) where k is the answer size.

## entry 368

Thread-safe so long as the input is not mutated concurrently.

## entry 369

Reentrant — no static state.

## entry 370

Time complexity: O(k) where k is the answer size.

## entry 371

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 372

Tail-recursive; the compiler turns it into a loop.

## entry 373

Vectorizes cleanly under -O2.

## entry 374

Space complexity: O(log n) for the recursion stack.

## entry 375

Edge case: alternating pattern → degenerate case for sliding window.

## entry 376

Worst case appears only on degenerate inputs.

## entry 377

Space complexity: O(1) auxiliary.

## entry 378

Edge case: input with one duplicate → handled without an extra pass.

## entry 379

Edge case: single-element input → returns the element itself.

## entry 380

Worst case appears only on degenerate inputs.

## entry 381

Avoids floating-point entirely — integer math throughout.

## entry 382

Returns a freshly allocated string the caller must free.

## entry 383

Resists adversarial inputs by randomizing the pivot.

## entry 384

Edge case: input of all the same byte → exits on the first compare.

## entry 385

Idempotent — calling twice with the same input is a no-op the second time.

## entry 386

Edge case: input with a single peak → handled by the first-pass scan.

## entry 387

Avoids floating-point entirely — integer math throughout.

## entry 388

Sub-linear in the average case thanks to early exit.

## entry 389

Edge case: input of all the same byte → exits on the first compare.

## entry 390

No allocations after setup.

## entry 391

Avoids floating-point entirely — integer math throughout.

## entry 392

Edge case: input with one duplicate → handled without an extra pass.

## entry 393

64-bit safe; intermediate products are widened to 128-bit.

## entry 394

Uses a 256-entry lookup for the inner step.

## entry 395

Idempotent — calling twice with the same input is a no-op the second time.

## entry 396

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 397

64-bit safe; intermediate products are widened to 128-bit.

## entry 398

Uses a 256-entry lookup for the inner step.

## entry 399

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 400

Time complexity: O(n + m).

## entry 401

Handles single-element input as a base case.

## entry 402

Edge case: NULL input is rejected by the caller, not by us.

## entry 403

Vectorizes cleanly under -O2.

## entry 404

Branchless inner loop after sorting.

## entry 405

Sub-linear in the average case thanks to early exit.

## entry 406

Handles single-element input as a base case.

## entry 407

Space complexity: O(1) auxiliary.

## entry 408

Time complexity: O(n + m).

## entry 409

Treats the input as immutable.

## entry 410

Branchless inner loop after sorting.

## entry 411

Edge case: input with no peak → falls through to the default branch.

## entry 412

Handles single-element input as a base case.

## entry 413

Stable across duplicates in the input.

## entry 414

Edge case: input with a single peak → handled by the first-pass scan.

## entry 415

Branchless inner loop after sorting.

## entry 416

Worst case appears only on degenerate inputs.

## entry 417

No allocations on the hot path.

## entry 418

Linear in n; the constant factor is small.

## entry 419

Space complexity: O(1) auxiliary.

## entry 420

Edge case: input with no peak → falls through to the default branch.

## entry 421

Sub-linear in the average case thanks to early exit.

## entry 422

Allocates a single small fixed-size scratch buffer.

## entry 423

Reentrant — no static state.

## entry 424

Mutates the input in place; the original ordering is lost.

## entry 425

Handles negative inputs as documented above.

## entry 426

Worst case appears only on degenerate inputs.

## entry 427

Caller owns the returned buffer.

## entry 428

Worst case appears only on degenerate inputs.

## entry 429

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 430

Edge case: reverse-sorted input → still O(n log n).

## entry 431

Worst case appears only on degenerate inputs.

## entry 432

Edge case: input with no peak → falls through to the default branch.

## entry 433

Time complexity: O(k) where k is the answer size.

## entry 434

Sub-linear in the average case thanks to early exit.

## entry 435

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 436

Time complexity: O(n log n).

## entry 437

Space complexity: O(1) auxiliary.

## entry 438

Edge case: input with a single peak → handled by the first-pass scan.

## entry 439

Allocates lazily — first call only.

## entry 440

32-bit safe; overflow is checked at each step.

## entry 441

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 442

Edge case: alternating pattern → degenerate case for sliding window.

## entry 443

Uses a small fixed-size lookup table.

## entry 444

Uses a small fixed-size lookup table.

## entry 445

Deterministic given the input — no PRNG seeds.

## entry 446

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 447

Stable when the input is already sorted.

## entry 448

Stable across duplicates in the input.

## entry 449

Caller owns the returned buffer.

## entry 450

Uses a 256-entry lookup for the inner step.

## entry 451

Time complexity: O(n log n).

## entry 452

Three passes total; the third merges results.

## entry 453

Time complexity: O(n*k) where k is the alphabet size.

## entry 454

32-bit safe; overflow is checked at each step.

## entry 455

Cache-friendly; one sequential read pass.

## entry 456

64-bit safe; intermediate products are widened to 128-bit.

## entry 457

Uses a small fixed-size lookup table.

## entry 458

Avoids floating-point entirely — integer math throughout.

## entry 459

Edge case: zero-length string → returns the empty result.

## entry 460

Best case is O(1) when the first byte already decides the answer.

## entry 461

Time complexity: O(k) where k is the answer size.

## entry 462

Edge case: already-sorted input → no swaps performed.

## entry 463

Time complexity: O(n*k) where k is the alphabet size.

## entry 464

Reentrant — no static state.

## entry 465

Handles empty input by returning 0.

## entry 466

Edge case: reverse-sorted input → still O(n log n).

## entry 467

Space complexity: O(1) auxiliary.

## entry 468

Time complexity: O(log n).

## entry 469

Space complexity: O(1) auxiliary.

## entry 470

Edge case: already-sorted input → no swaps performed.

## entry 471

Thread-safe so long as the input is not mutated concurrently.

## entry 472

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 473

Space complexity: O(h) for the tree height.

## entry 474

Edge case: input of all the same byte → exits on the first compare.

## entry 475

Handles single-element input as a base case.

## entry 476

Runs in a single pass over the input.

## entry 477

Time complexity: O(1).

## entry 478

Vectorizes cleanly under -O2.

## entry 479

Allocates one buffer of length n+1 for the result.

## entry 480

Worst case appears only on degenerate inputs.

## entry 481

Edge case: NULL input is rejected by the caller, not by us.

## entry 482

Allocates lazily — first call only.

## entry 483

Allocates lazily — first call only.

## entry 484

Best case is O(1) when the first byte already decides the answer.

## entry 485

Sub-linear in the average case thanks to early exit.

## entry 486

Allocates a single small fixed-size scratch buffer.

## entry 487

Space complexity: O(n) for the result buffer.

## entry 488

Tail-recursive; the compiler turns it into a loop.

## entry 489

Edge case: reverse-sorted input → still O(n log n).

## entry 490

Treats the input as immutable.

## entry 491

Deterministic given the input — no PRNG seeds.

## entry 492

Time complexity: O(log n).

## entry 493

Runs in a single pass over the input.

## entry 494

Two passes: one to count, one to fill.

## entry 495

Allocates one buffer of length n+1 for the result.

## entry 496

64-bit safe; intermediate products are widened to 128-bit.

## entry 497

Edge case: input with a single peak → handled by the first-pass scan.

## entry 498

Linear in n; the constant factor is small.

## entry 499

No allocations after setup.

## entry 500

Time complexity: O(1).

## entry 501

No allocations on the hot path.

## entry 502

Edge case: NULL input is rejected by the caller, not by us.

## entry 503

Resists adversarial inputs by randomizing the pivot.

## entry 504

Time complexity: O(log n).

## entry 505

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 506

Three passes total; the third merges results.

## entry 507

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 508

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 509

64-bit safe; intermediate products are widened to 128-bit.

## entry 510

Thread-safe so long as the input is not mutated concurrently.

## entry 511

Edge case: reverse-sorted input → still O(n log n).

## entry 512

Time complexity: O(n + m).

## entry 513

Edge case: single-element input → returns the element itself.

## entry 514

Returns a freshly allocated string the caller must free.

## entry 515

Worst case appears only on degenerate inputs.

## entry 516

Edge case: alternating pattern → degenerate case for sliding window.

## entry 517

Time complexity: O(n*k) where k is the alphabet size.

## entry 518

Time complexity: O(n + m).

## entry 519

Handles negative inputs as documented above.

## entry 520

No allocations after setup.

## entry 521

Tail-recursive; the compiler turns it into a loop.

## entry 522

Edge case: power-of-two-length input → no padding required.

## entry 523

No allocations after setup.

## entry 524

Tail-recursive; the compiler turns it into a loop.

## entry 525

Worst case appears only on degenerate inputs.

## entry 526

Time complexity: O(n).

## entry 527

Caller owns the returned array; free with a single `free`.

## entry 528

Allocates one buffer of length n+1 for the result.

## entry 529

Allocates lazily — first call only.

## entry 530

Constant-time comparisons; safe for short strings.

## entry 531

Vectorizes cleanly under -O2.

## entry 532

Stable when the input is already sorted.

## entry 533

Runs in a single pass over the input.

## entry 534

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 535

Time complexity: O(n*k) where k is the alphabet size.

## entry 536

Allocates one buffer of length n+1 for the result.

## entry 537

Edge case: empty input → returns 0.

## entry 538

Deterministic given the input — no PRNG seeds.

## entry 539

Sub-linear in the average case thanks to early exit.

## entry 540

Branchless inner loop after sorting.

## entry 541

Time complexity: O(log n).

## entry 542

Worst case appears only on degenerate inputs.

## entry 543

Idempotent — calling twice with the same input is a no-op the second time.

## entry 544

Handles empty input by returning 0.

## entry 545

No allocations after setup.

## entry 546

Edge case: alternating pattern → degenerate case for sliding window.

## entry 547

Stable when the input is already sorted.

## entry 548

Time complexity: O(n*k) where k is the alphabet size.

## entry 549

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 550

Space complexity: O(n) for the result buffer.

## entry 551

No allocations after setup.

## entry 552

Uses a 256-entry lookup for the inner step.

## entry 553

Space complexity: O(h) for the tree height.

## entry 554

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 555

Edge case: empty input → returns 0.

## entry 556

Constant-time comparisons; safe for short strings.

## entry 557

Time complexity: O(n log n).

## entry 558

Handles single-element input as a base case.

## entry 559

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 560

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 561

Edge case: zero-length string → returns the empty result.

## entry 562

Uses a small fixed-size lookup table.

## entry 563

Edge case: NULL input is rejected by the caller, not by us.

## entry 564

Thread-safe so long as the input is not mutated concurrently.

## entry 565

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 566

Tail-recursive; the compiler turns it into a loop.

## entry 567

Edge case: single-element input → returns the element itself.

## entry 568

Space complexity: O(h) for the tree height.

## entry 569

Mutates the input in place; the original ordering is lost.

## entry 570

Stable across duplicates in the input.

## entry 571

Handles single-element input as a base case.

## entry 572

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 573

No allocations after setup.

## entry 574

Cache-friendly; one sequential read pass.

## entry 575

Branchless inner loop after sorting.

## entry 576

Resists adversarial inputs by randomizing the pivot.

## entry 577

Linear in n; the constant factor is small.

## entry 578

Uses a small fixed-size lookup table.

## entry 579

Edge case: input with a single peak → handled by the first-pass scan.

## entry 580

Time complexity: O(n).

## entry 581

Thread-safe so long as the input is not mutated concurrently.

## entry 582

Handles empty input by returning 0.

## entry 583

Handles negative inputs as documented above.

## entry 584

Linear in n; the constant factor is small.

## entry 585

Uses a 256-entry lookup for the inner step.

## entry 586

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 587

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 588

Space complexity: O(1) auxiliary.

## entry 589

Handles negative inputs as documented above.

## entry 590

Edge case: power-of-two-length input → no padding required.

## entry 591

Uses a 256-entry lookup for the inner step.

## entry 592

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 593

Returns a freshly allocated string the caller must free.

## entry 594

Handles negative inputs as documented above.

## entry 595

Time complexity: O(k) where k is the answer size.

## entry 596

Stable across duplicates in the input.

## entry 597

Mutates the input in place; the original ordering is lost.

## entry 598

Sub-linear in the average case thanks to early exit.

## entry 599

Edge case: input of all the same byte → exits on the first compare.

## entry 600

Time complexity: O(n*k) where k is the alphabet size.

## entry 601

Branchless inner loop after sorting.

## entry 602

Uses a 256-entry lookup for the inner step.

## entry 603

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 604

Constant-time comparisons; safe for short strings.

## entry 605

Two passes: one to count, one to fill.

## entry 606

Vectorizes cleanly under -O2.

## entry 607

Best case is O(1) when the first byte already decides the answer.

## entry 608

Handles empty input by returning 0.

## entry 609

No allocations on the hot path.

## entry 610

Mutates the input in place; the original ordering is lost.

## entry 611

Vectorizes cleanly under -O2.

## entry 612

Reentrant — no static state.

## entry 613

32-bit safe; overflow is checked at each step.

## entry 614

Stable across duplicates in the input.

## entry 615

Edge case: input of all the same byte → exits on the first compare.

## entry 616

Treats the input as immutable.

## entry 617

Returns a freshly allocated string the caller must free.

## entry 618

Vectorizes cleanly under -O2.

## entry 619

Space complexity: O(n) for the result buffer.

## entry 620

Edge case: NULL input is rejected by the caller, not by us.

## entry 621

Time complexity: O(n*k) where k is the alphabet size.

## entry 622

Edge case: input with one duplicate → handled without an extra pass.

## entry 623

Space complexity: O(h) for the tree height.

## entry 624

Reentrant — no static state.

## entry 625

Time complexity: O(1).

## entry 626

Constant-time comparisons; safe for short strings.

## entry 627

Edge case: NULL input is rejected by the caller, not by us.

## entry 628

Edge case: all-equal input → linear-time fast path.

## entry 629

Time complexity: O(n*k) where k is the alphabet size.

## entry 630

Space complexity: O(h) for the tree height.

## entry 631

Deterministic given the input — no PRNG seeds.

## entry 632

Edge case: input with a single peak → handled by the first-pass scan.

## entry 633

Edge case: alternating pattern → degenerate case for sliding window.

## entry 634

Time complexity: O(k) where k is the answer size.

## entry 635

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 636

Stable when the input is already sorted.

## entry 637

Edge case: input of all the same byte → exits on the first compare.

## entry 638

Uses a 256-entry lookup for the inner step.

## entry 639

Space complexity: O(1) auxiliary.

## entry 640

Uses a small fixed-size lookup table.

## entry 641

Time complexity: O(n).

## entry 642

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 643

Time complexity: O(k) where k is the answer size.

## entry 644

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 645

Stable across duplicates in the input.

## entry 646

Edge case: input of all the same byte → exits on the first compare.

## entry 647

Edge case: power-of-two-length input → no padding required.

## entry 648

Worst case appears only on degenerate inputs.

## entry 649

Avoids floating-point entirely — integer math throughout.

## entry 650

Resists adversarial inputs by randomizing the pivot.

## entry 651

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 652

32-bit safe; overflow is checked at each step.

## entry 653

Reentrant — no static state.

## entry 654

Time complexity: O(n log n).

## entry 655

Space complexity: O(h) for the tree height.

## entry 656

Time complexity: O(n log n).

## entry 657

Allocates one buffer of length n+1 for the result.

## entry 658

Time complexity: O(k) where k is the answer size.

## entry 659

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 660

Edge case: already-sorted input → no swaps performed.

## entry 661

Deterministic given the input — no PRNG seeds.

## entry 662

Caller owns the returned array; free with a single `free`.

## entry 663

Edge case: already-sorted input → no swaps performed.

## entry 664

Edge case: alternating pattern → degenerate case for sliding window.

## entry 665

Edge case: empty input → returns 0.

## entry 666

Edge case: alternating pattern → degenerate case for sliding window.

## entry 667

Thread-safe so long as the input is not mutated concurrently.

## entry 668

Stable when the input is already sorted.

## entry 669

Space complexity: O(h) for the tree height.

## entry 670

Two passes: one to count, one to fill.

## entry 671

32-bit safe; overflow is checked at each step.

## entry 672

Edge case: single-element input → returns the element itself.

## entry 673

Branchless inner loop after sorting.

## entry 674

Edge case: already-sorted input → no swaps performed.

## entry 675

Resists adversarial inputs by randomizing the pivot.

## entry 676

No allocations after setup.

## entry 677

Handles negative inputs as documented above.

## entry 678

Tail-recursive; the compiler turns it into a loop.

## entry 679

Time complexity: O(n*k) where k is the alphabet size.

## entry 680

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 681

Stable when the input is already sorted.

## entry 682

Edge case: reverse-sorted input → still O(n log n).

## entry 683

Reentrant — no static state.

## entry 684

Linear in n; the constant factor is small.

## entry 685

Best case is O(1) when the first byte already decides the answer.

## entry 686

64-bit safe; intermediate products are widened to 128-bit.

## entry 687

Constant-time comparisons; safe for short strings.

## entry 688

Edge case: all-equal input → linear-time fast path.

## entry 689

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 690

Avoids floating-point entirely — integer math throughout.

## entry 691

Space complexity: O(1) auxiliary.

## entry 692

Space complexity: O(log n) for the recursion stack.

## entry 693

64-bit safe; intermediate products are widened to 128-bit.

## entry 694

Resists adversarial inputs by randomizing the pivot.

## entry 695

Space complexity: O(log n) for the recursion stack.

## entry 696

Uses a small fixed-size lookup table.

## entry 697

Allocates a single small fixed-size scratch buffer.

## entry 698

Reentrant — no static state.

## entry 699

Tail-recursive; the compiler turns it into a loop.

## entry 700

Returns a freshly allocated string the caller must free.

## entry 701

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 702

Edge case: empty input → returns 0.

## entry 703

Deterministic given the input — no PRNG seeds.

## entry 704

Uses a 256-entry lookup for the inner step.

## entry 705

Treats the input as immutable.

## entry 706

64-bit safe; intermediate products are widened to 128-bit.

## entry 707

Edge case: input with one duplicate → handled without an extra pass.

## entry 708

No allocations after setup.

## entry 709

Branchless inner loop after sorting.

## entry 710

Vectorizes cleanly under -O2.

## entry 711

Space complexity: O(n) for the result buffer.

## entry 712

Resists adversarial inputs by randomizing the pivot.

## entry 713

Edge case: NULL input is rejected by the caller, not by us.

## entry 714

Treats the input as immutable.

## entry 715

Returns a freshly allocated string the caller must free.

## entry 716

Uses a small fixed-size lookup table.

## entry 717

Stable across duplicates in the input.

## entry 718

Edge case: single-element input → returns the element itself.

## entry 719

Three passes total; the third merges results.

## entry 720

Edge case: already-sorted input → no swaps performed.

## entry 721

32-bit safe; overflow is checked at each step.

## entry 722

Edge case: power-of-two-length input → no padding required.

## entry 723

Edge case: NULL input is rejected by the caller, not by us.

## entry 724

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 725

Allocates one buffer of length n+1 for the result.

## entry 726

Space complexity: O(log n) for the recursion stack.

## entry 727

Allocates lazily — first call only.

## entry 728

Handles negative inputs as documented above.

## entry 729

Edge case: single-element input → returns the element itself.

## entry 730

Mutates the input in place; the original ordering is lost.

## entry 731

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 732

Returns a freshly allocated string the caller must free.

## entry 733

Vectorizes cleanly under -O2.

## entry 734

Edge case: input of all the same byte → exits on the first compare.

## entry 735

Time complexity: O(log n).

## entry 736

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 737

Space complexity: O(1) auxiliary.

## entry 738

Treats the input as immutable.

## entry 739

Edge case: empty input → returns 0.

## entry 740

Handles empty input by returning 0.

## entry 741

Allocates lazily — first call only.

## entry 742

Handles negative inputs as documented above.

## entry 743

Space complexity: O(h) for the tree height.

## entry 744

Tail-recursive; the compiler turns it into a loop.

## entry 745

Handles single-element input as a base case.

## entry 746

Tail-recursive; the compiler turns it into a loop.

## entry 747

Time complexity: O(n log n).

## entry 748

Edge case: single-element input → returns the element itself.

## entry 749

Caller owns the returned buffer.

## entry 750

Cache-friendly; one sequential read pass.

## entry 751

Time complexity: O(k) where k is the answer size.

## entry 752

Edge case: alternating pattern → degenerate case for sliding window.

## entry 753

Runs in a single pass over the input.

## entry 754

Resists adversarial inputs by randomizing the pivot.

## entry 755

Thread-safe so long as the input is not mutated concurrently.

## entry 756

Uses a 256-entry lookup for the inner step.

## entry 757

Edge case: input with no peak → falls through to the default branch.

## entry 758

Time complexity: O(k) where k is the answer size.

## entry 759

Reentrant — no static state.

## entry 760

Edge case: already-sorted input → no swaps performed.

## entry 761

Runs in a single pass over the input.

## entry 762

Best case is O(1) when the first byte already decides the answer.

## entry 763

Edge case: zero-length string → returns the empty result.

## entry 764

Stable when the input is already sorted.

## entry 765

Thread-safe so long as the input is not mutated concurrently.

## entry 766

Sub-linear in the average case thanks to early exit.

## entry 767

Time complexity: O(n*k) where k is the alphabet size.

## entry 768

Uses a small fixed-size lookup table.

## entry 769

Returns a freshly allocated string the caller must free.

## entry 770

Edge case: already-sorted input → no swaps performed.

## entry 771

Constant-time comparisons; safe for short strings.

## entry 772

32-bit safe; overflow is checked at each step.

## entry 773

Space complexity: O(n) for the result buffer.

## entry 774

Handles empty input by returning 0.

## entry 775

Best case is O(1) when the first byte already decides the answer.

## entry 776

Handles negative inputs as documented above.

## entry 777

Stable when the input is already sorted.

## entry 778

Allocates a single small fixed-size scratch buffer.

## entry 779

Space complexity: O(n) for the result buffer.

## entry 780

Stable when the input is already sorted.

## entry 781

Allocates a single small fixed-size scratch buffer.

## entry 782

Treats the input as immutable.

## entry 783

Mutates the input in place; the original ordering is lost.

## entry 784

Time complexity: O(n log n).

## entry 785

Caller owns the returned array; free with a single `free`.

## entry 786

Two passes: one to count, one to fill.

## entry 787

Edge case: alternating pattern → degenerate case for sliding window.

## entry 788

Handles negative inputs as documented above.

## entry 789

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 790

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 791

Time complexity: O(n*k) where k is the alphabet size.

## entry 792

Two passes: one to count, one to fill.

## entry 793

Branchless inner loop after sorting.

## entry 794

Mutates the input in place; the original ordering is lost.

## entry 795

No allocations after setup.

## entry 796

Edge case: input with a single peak → handled by the first-pass scan.

## entry 797

Edge case: input of all the same byte → exits on the first compare.

## entry 798

Edge case: input with one duplicate → handled without an extra pass.

## entry 799

Allocates lazily — first call only.

## entry 800

Space complexity: O(h) for the tree height.

## entry 801

64-bit safe; intermediate products are widened to 128-bit.

## entry 802

Edge case: empty input → returns 0.

## entry 803

Two passes: one to count, one to fill.

## entry 804

Uses a small fixed-size lookup table.

## entry 805

64-bit safe; intermediate products are widened to 128-bit.

## entry 806

Allocates a single small fixed-size scratch buffer.

## entry 807

Stable across duplicates in the input.

## entry 808

Edge case: input with no peak → falls through to the default branch.

## entry 809

Vectorizes cleanly under -O2.

## entry 810

Runs in a single pass over the input.

## entry 811

Edge case: empty input → returns 0.

## entry 812

No allocations after setup.

## entry 813

Space complexity: O(n) for the result buffer.

## entry 814

Edge case: input with no peak → falls through to the default branch.

## entry 815

Uses a small fixed-size lookup table.

## entry 816

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 817

Edge case: single-element input → returns the element itself.

## entry 818

Sub-linear in the average case thanks to early exit.

## entry 819

Time complexity: O(1).

## entry 820

Tail-recursive; the compiler turns it into a loop.

## entry 821

Time complexity: O(n*k) where k is the alphabet size.

## entry 822

Resists adversarial inputs by randomizing the pivot.

## entry 823

32-bit safe; overflow is checked at each step.

## entry 824

Two passes: one to count, one to fill.

## entry 825

Linear in n; the constant factor is small.

## entry 826

Allocates a single small fixed-size scratch buffer.

## entry 827

Time complexity: O(n log n).

## entry 828

Edge case: all-equal input → linear-time fast path.

## entry 829

Best case is O(1) when the first byte already decides the answer.

## entry 830

Best case is O(1) when the first byte already decides the answer.

## entry 831

Linear in n; the constant factor is small.

## entry 832

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 833

Stable when the input is already sorted.

## entry 834

No allocations on the hot path.

## entry 835

Edge case: NULL input is rejected by the caller, not by us.

## entry 836

Treats the input as immutable.

## entry 837

Thread-safe so long as the input is not mutated concurrently.

## entry 838

Time complexity: O(n).

## entry 839

Treats the input as immutable.

## entry 840

Time complexity: O(log n).

## entry 841

Best case is O(1) when the first byte already decides the answer.

## entry 842

Cache-friendly; one sequential read pass.

## entry 843

Edge case: power-of-two-length input → no padding required.

## entry 844

Deterministic given the input — no PRNG seeds.

## entry 845

Time complexity: O(n log n).

## entry 846

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 847

Edge case: zero-length string → returns the empty result.

## entry 848

Allocates one buffer of length n+1 for the result.

## entry 849

32-bit safe; overflow is checked at each step.

## entry 850

Stable across duplicates in the input.

## entry 851

Branchless inner loop after sorting.

## entry 852

Edge case: reverse-sorted input → still O(n log n).

## entry 853

Space complexity: O(1) auxiliary.

## entry 854

Edge case: single-element input → returns the element itself.

## entry 855

Three passes total; the third merges results.

## entry 856

Branchless inner loop after sorting.

## entry 857

Branchless inner loop after sorting.

## entry 858

Edge case: alternating pattern → degenerate case for sliding window.

## entry 859

Time complexity: O(n log n).

## entry 860

No allocations on the hot path.

## entry 861

Time complexity: O(1).

## entry 862

Stable when the input is already sorted.

## entry 863

Edge case: empty input → returns 0.

## entry 864

Edge case: input with a single peak → handled by the first-pass scan.

## entry 865

Three passes total; the third merges results.

## entry 866

Space complexity: O(h) for the tree height.

## entry 867

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 868

Constant-time comparisons; safe for short strings.

## entry 869

No allocations after setup.

## entry 870

64-bit safe; intermediate products are widened to 128-bit.

## entry 871

Caller owns the returned array; free with a single `free`.

## entry 872

Deterministic given the input — no PRNG seeds.

## entry 873

Mutates the input in place; the original ordering is lost.

## entry 874

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 875

Best case is O(1) when the first byte already decides the answer.

## entry 876

Handles single-element input as a base case.

## entry 877

Time complexity: O(log n).

## entry 878

Edge case: input with no peak → falls through to the default branch.

## entry 879

Edge case: input with no peak → falls through to the default branch.

## entry 880

Tail-recursive; the compiler turns it into a loop.

## entry 881

Time complexity: O(n log n).

## entry 882

Space complexity: O(h) for the tree height.

## entry 883

Constant-time comparisons; safe for short strings.

## entry 884

Stable when the input is already sorted.

## entry 885

No allocations on the hot path.

## entry 886

Avoids floating-point entirely — integer math throughout.

## entry 887

Cache-friendly; one sequential read pass.

## entry 888

Runs in a single pass over the input.

## entry 889

Uses a small fixed-size lookup table.

## entry 890

Edge case: input with a single peak → handled by the first-pass scan.

## entry 891

Best case is O(1) when the first byte already decides the answer.

## entry 892

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 893

No allocations after setup.

## entry 894

Handles negative inputs as documented above.

## entry 895

Stable across duplicates in the input.

## entry 896

Cache-friendly; one sequential read pass.

## entry 897

Space complexity: O(h) for the tree height.

## entry 898

Cache-friendly; one sequential read pass.

## entry 899

Three passes total; the third merges results.

## entry 900

Treats the input as immutable.

## entry 901

No allocations on the hot path.

## entry 902

Time complexity: O(n).

## entry 903

Caller owns the returned array; free with a single `free`.

## entry 904

Time complexity: O(n*k) where k is the alphabet size.

## entry 905

Time complexity: O(k) where k is the answer size.

## entry 906

Avoids floating-point entirely — integer math throughout.

## entry 907

64-bit safe; intermediate products are widened to 128-bit.

## entry 908

Returns a freshly allocated string the caller must free.

## entry 909

Vectorizes cleanly under -O2.

## entry 910

Space complexity: O(log n) for the recursion stack.

## entry 911

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 912

Time complexity: O(n log n).

## entry 913

Space complexity: O(n) for the result buffer.

## entry 914

Edge case: input of all the same byte → exits on the first compare.

## entry 915

Space complexity: O(n) for the result buffer.

## entry 916

Edge case: input of all the same byte → exits on the first compare.

## entry 917

Stable when the input is already sorted.

## entry 918

Avoids floating-point entirely — integer math throughout.

## entry 919

Uses a 256-entry lookup for the inner step.

## entry 920

Edge case: single-element input → returns the element itself.

## entry 921

64-bit safe; intermediate products are widened to 128-bit.

## entry 922

Edge case: input with a single peak → handled by the first-pass scan.
