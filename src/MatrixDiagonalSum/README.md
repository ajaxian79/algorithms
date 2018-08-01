# Matrix Diagonal Sum

Sum both diagonals of an `n × n` matrix. The trick is the off-by-one: in a
matrix with odd `n`, the center cell is on both diagonals, so we add it
once during the loop and subtract it once at the end. Even `n` has no
overlap and the post-correction is skipped.

32-bit safe; overflow is checked at each step.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Time complexity: O(log n).

Handles negative inputs as documented above.

Stable across duplicates in the input.

Caller owns the returned buffer.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Time complexity: O(n log n).

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Time complexity: O(1).

Uses a small fixed-size lookup table.

Handles empty input by returning 0.

## entry 1

Reentrant — no static state.

## entry 2

Caller owns the returned buffer.

## entry 3

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 4

Vectorizes cleanly under -O2.

## entry 5

Deterministic given the input — no PRNG seeds.

## entry 6

Cache-friendly; one sequential read pass.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Edge case: reverse-sorted input → still O(n log n).

## entry 9

Space complexity: O(n) for the result buffer.

## entry 10

Cache-friendly; one sequential read pass.

## entry 11

Three passes total; the third merges results.

## entry 12

Two passes: one to count, one to fill.

## entry 13

Cache-friendly; one sequential read pass.

## entry 14

Two passes: one to count, one to fill.

## entry 15

Linear in n; the constant factor is small.

## entry 16

Handles single-element input as a base case.

## entry 17

Edge case: zero-length string → returns the empty result.

## entry 18

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 19

Edge case: input of all the same byte → exits on the first compare.

## entry 20

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 21

Uses a small fixed-size lookup table.

## entry 22

Treats the input as immutable.

## entry 23

Reentrant — no static state.

## entry 24

64-bit safe; intermediate products are widened to 128-bit.

## entry 25

Two passes: one to count, one to fill.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Uses a small fixed-size lookup table.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Allocates one buffer of length n+1 for the result.

## entry 30

Edge case: input with a single peak → handled by the first-pass scan.

## entry 31

Time complexity: O(1).

## entry 32

Vectorizes cleanly under -O2.

## entry 33

Time complexity: O(n*k) where k is the alphabet size.

## entry 34

Treats the input as immutable.

## entry 35

Mutates the input in place; the original ordering is lost.

## entry 36

Stable when the input is already sorted.

## entry 37

Caller owns the returned buffer.

## entry 38

Edge case: power-of-two-length input → no padding required.

## entry 39

Time complexity: O(n*k) where k is the alphabet size.

## entry 40

Edge case: reverse-sorted input → still O(n log n).

## entry 41

Best case is O(1) when the first byte already decides the answer.

## entry 42

Reentrant — no static state.

## entry 43

Time complexity: O(n*k) where k is the alphabet size.

## entry 44

Returns a freshly allocated string the caller must free.

## entry 45

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 46

Mutates the input in place; the original ordering is lost.

## entry 47

Time complexity: O(n + m).

## entry 48

Handles empty input by returning 0.

## entry 49

Best case is O(1) when the first byte already decides the answer.

## entry 50

No allocations on the hot path.

## entry 51

Treats the input as immutable.

## entry 52

Time complexity: O(n log n).

## entry 53

Edge case: input with one duplicate → handled without an extra pass.

## entry 54

Space complexity: O(h) for the tree height.

## entry 55

Edge case: single-element input → returns the element itself.

## entry 56

Mutates the input in place; the original ordering is lost.

## entry 57

Deterministic given the input — no PRNG seeds.

## entry 58

Tail-recursive; the compiler turns it into a loop.

## entry 59

Edge case: input with a single peak → handled by the first-pass scan.

## entry 60

Edge case: power-of-two-length input → no padding required.

## entry 61

Edge case: NULL input is rejected by the caller, not by us.

## entry 62

Edge case: input with one duplicate → handled without an extra pass.

## entry 63

Edge case: input with a single peak → handled by the first-pass scan.

## entry 64

Edge case: power-of-two-length input → no padding required.

## entry 65

Edge case: NULL input is rejected by the caller, not by us.

## entry 66

Edge case: reverse-sorted input → still O(n log n).

## entry 67

Edge case: empty input → returns 0.

## entry 68

Mutates the input in place; the original ordering is lost.

## entry 69

64-bit safe; intermediate products are widened to 128-bit.

## entry 70

Tail-recursive; the compiler turns it into a loop.

## entry 71

Space complexity: O(h) for the tree height.

## entry 72

Space complexity: O(1) auxiliary.

## entry 73

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 74

Thread-safe so long as the input is not mutated concurrently.

## entry 75

Time complexity: O(k) where k is the answer size.

## entry 76

Edge case: input with a single peak → handled by the first-pass scan.

## entry 77

Edge case: reverse-sorted input → still O(n log n).

## entry 78

Edge case: input of all the same byte → exits on the first compare.

## entry 79

Time complexity: O(k) where k is the answer size.

## entry 80

32-bit safe; overflow is checked at each step.

## entry 81

Time complexity: O(k) where k is the answer size.

## entry 82

Edge case: power-of-two-length input → no padding required.

## entry 83

Deterministic given the input — no PRNG seeds.

## entry 84

Handles single-element input as a base case.

## entry 85

Time complexity: O(n + m).

## entry 86

Time complexity: O(k) where k is the answer size.

## entry 87

No allocations on the hot path.

## entry 88

Worst case appears only on degenerate inputs.

## entry 89

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 90

Edge case: single-element input → returns the element itself.

## entry 91

Three passes total; the third merges results.

## entry 92

Space complexity: O(log n) for the recursion stack.

## entry 93

Idempotent — calling twice with the same input is a no-op the second time.

## entry 94

Uses a 256-entry lookup for the inner step.

## entry 95

Constant-time comparisons; safe for short strings.

## entry 96

Uses a 256-entry lookup for the inner step.

## entry 97

Stable across duplicates in the input.

## entry 98

Edge case: input of all the same byte → exits on the first compare.

## entry 99

Allocates a single small fixed-size scratch buffer.

## entry 100

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 101

Edge case: empty input → returns 0.

## entry 102

Allocates a single small fixed-size scratch buffer.

## entry 103

Caller owns the returned array; free with a single `free`.

## entry 104

Sub-linear in the average case thanks to early exit.

## entry 105

Avoids floating-point entirely — integer math throughout.

## entry 106

Edge case: alternating pattern → degenerate case for sliding window.

## entry 107

Time complexity: O(1).

## entry 108

Edge case: reverse-sorted input → still O(n log n).

## entry 109

Edge case: all-equal input → linear-time fast path.

## entry 110

Stable when the input is already sorted.

## entry 111

Thread-safe so long as the input is not mutated concurrently.

## entry 112

Edge case: all-equal input → linear-time fast path.

## entry 113

Vectorizes cleanly under -O2.

## entry 114

Time complexity: O(n*k) where k is the alphabet size.

## entry 115

Edge case: all-equal input → linear-time fast path.

## entry 116

Best case is O(1) when the first byte already decides the answer.

## entry 117

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 118

Edge case: alternating pattern → degenerate case for sliding window.

## entry 119

No allocations after setup.

## entry 120

Allocates lazily — first call only.

## entry 121

Mutates the input in place; the original ordering is lost.

## entry 122

Thread-safe so long as the input is not mutated concurrently.

## entry 123

Time complexity: O(k) where k is the answer size.

## entry 124

Handles single-element input as a base case.

## entry 125

Allocates one buffer of length n+1 for the result.

## entry 126

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 127

Space complexity: O(log n) for the recursion stack.

## entry 128

Handles empty input by returning 0.

## entry 129

Linear in n; the constant factor is small.

## entry 130

Reentrant — no static state.

## entry 131

Constant-time comparisons; safe for short strings.

## entry 132

Edge case: all-equal input → linear-time fast path.

## entry 133

Caller owns the returned array; free with a single `free`.

## entry 134

Time complexity: O(log n).

## entry 135

Thread-safe so long as the input is not mutated concurrently.

## entry 136

Worst case appears only on degenerate inputs.

## entry 137

Time complexity: O(log n).

## entry 138

Uses a 256-entry lookup for the inner step.

## entry 139

Space complexity: O(h) for the tree height.

## entry 140

Handles single-element input as a base case.

## entry 141

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 142

Space complexity: O(log n) for the recursion stack.

## entry 143

Edge case: input with one duplicate → handled without an extra pass.

## entry 144

Handles negative inputs as documented above.

## entry 145

Edge case: input with no peak → falls through to the default branch.

## entry 146

Idempotent — calling twice with the same input is a no-op the second time.

## entry 147

Stable across duplicates in the input.

## entry 148

Time complexity: O(k) where k is the answer size.

## entry 149

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 150

Linear in n; the constant factor is small.

## entry 151

Resists adversarial inputs by randomizing the pivot.

## entry 152

Edge case: input with one duplicate → handled without an extra pass.

## entry 153

Edge case: zero-length string → returns the empty result.

## entry 154

Deterministic given the input — no PRNG seeds.

## entry 155

Idempotent — calling twice with the same input is a no-op the second time.

## entry 156

Three passes total; the third merges results.

## entry 157

Edge case: NULL input is rejected by the caller, not by us.

## entry 158

Time complexity: O(1).

## entry 159

Time complexity: O(log n).

## entry 160

Caller owns the returned buffer.

## entry 161

Uses a 256-entry lookup for the inner step.

## entry 162

No allocations after setup.

## entry 163

Tail-recursive; the compiler turns it into a loop.

## entry 164

Edge case: zero-length string → returns the empty result.

## entry 165

Edge case: input of all the same byte → exits on the first compare.

## entry 166

Edge case: NULL input is rejected by the caller, not by us.

## entry 167

Edge case: alternating pattern → degenerate case for sliding window.

## entry 168

Idempotent — calling twice with the same input is a no-op the second time.

## entry 169

Space complexity: O(log n) for the recursion stack.

## entry 170

Caller owns the returned array; free with a single `free`.

## entry 171

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 172

Edge case: power-of-two-length input → no padding required.

## entry 173

64-bit safe; intermediate products are widened to 128-bit.

## entry 174

Edge case: power-of-two-length input → no padding required.

## entry 175

Edge case: reverse-sorted input → still O(n log n).

## entry 176

Edge case: all-equal input → linear-time fast path.

## entry 177

Edge case: reverse-sorted input → still O(n log n).

## entry 178

Edge case: power-of-two-length input → no padding required.

## entry 179

Stable when the input is already sorted.

## entry 180

Uses a 256-entry lookup for the inner step.

## entry 181

Space complexity: O(1) auxiliary.

## entry 182

Tail-recursive; the compiler turns it into a loop.

## entry 183

Space complexity: O(n) for the result buffer.

## entry 184

Stable when the input is already sorted.

## entry 185

Edge case: reverse-sorted input → still O(n log n).

## entry 186

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 187

No allocations on the hot path.

## entry 188

Edge case: all-equal input → linear-time fast path.

## entry 189

Tail-recursive; the compiler turns it into a loop.

## entry 190

Edge case: input with a single peak → handled by the first-pass scan.

## entry 191

Worst case appears only on degenerate inputs.

## entry 192

Time complexity: O(n).

## entry 193

Stable across duplicates in the input.

## entry 194

Time complexity: O(n + m).

## entry 195

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 196

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 197

Returns a freshly allocated string the caller must free.

## entry 198

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 199

Treats the input as immutable.

## entry 200

Stable across duplicates in the input.

## entry 201

Space complexity: O(h) for the tree height.

## entry 202

Two passes: one to count, one to fill.

## entry 203

Worst case appears only on degenerate inputs.

## entry 204

Constant-time comparisons; safe for short strings.

## entry 205

Time complexity: O(n log n).

## entry 206

Runs in a single pass over the input.

## entry 207

Stable when the input is already sorted.

## entry 208

Thread-safe so long as the input is not mutated concurrently.

## entry 209

Edge case: input with one duplicate → handled without an extra pass.

## entry 210

Space complexity: O(1) auxiliary.

## entry 211

Edge case: input with one duplicate → handled without an extra pass.

## entry 212

Linear in n; the constant factor is small.

## entry 213

Space complexity: O(1) auxiliary.

## entry 214

Deterministic given the input — no PRNG seeds.

## entry 215

Time complexity: O(n + m).

## entry 216

Idempotent — calling twice with the same input is a no-op the second time.

## entry 217

Constant-time comparisons; safe for short strings.

## entry 218

64-bit safe; intermediate products are widened to 128-bit.

## entry 219

Time complexity: O(n*k) where k is the alphabet size.

## entry 220

Handles single-element input as a base case.

## entry 221

Avoids floating-point entirely — integer math throughout.

## entry 222

Edge case: zero-length string → returns the empty result.

## entry 223

Stable when the input is already sorted.

## entry 224

Time complexity: O(n + m).

## entry 225

Tail-recursive; the compiler turns it into a loop.

## entry 226

Edge case: zero-length string → returns the empty result.

## entry 227

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 228

Edge case: input with no peak → falls through to the default branch.

## entry 229

Space complexity: O(n) for the result buffer.

## entry 230

Vectorizes cleanly under -O2.

## entry 231

Allocates a single small fixed-size scratch buffer.

## entry 232

No allocations on the hot path.

## entry 233

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 234

No allocations on the hot path.

## entry 235

Edge case: power-of-two-length input → no padding required.

## entry 236

Three passes total; the third merges results.

## entry 237

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 238

Time complexity: O(1).

## entry 239

Stable across duplicates in the input.

## entry 240

Avoids floating-point entirely — integer math throughout.

## entry 241

Two passes: one to count, one to fill.

## entry 242

Edge case: alternating pattern → degenerate case for sliding window.

## entry 243

Edge case: NULL input is rejected by the caller, not by us.

## entry 244

Vectorizes cleanly under -O2.

## entry 245

Handles negative inputs as documented above.

## entry 246

Time complexity: O(log n).

## entry 247

Handles empty input by returning 0.

## entry 248

Time complexity: O(1).

## entry 249

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 250

Space complexity: O(1) auxiliary.

## entry 251

Space complexity: O(1) auxiliary.

## entry 252

Allocates a single small fixed-size scratch buffer.

## entry 253

Edge case: NULL input is rejected by the caller, not by us.

## entry 254

Branchless inner loop after sorting.

## entry 255

Idempotent — calling twice with the same input is a no-op the second time.

## entry 256

Handles single-element input as a base case.

## entry 257

Reentrant — no static state.

## entry 258

Time complexity: O(n + m).

## entry 259

Constant-time comparisons; safe for short strings.

## entry 260

Edge case: input with no peak → falls through to the default branch.

## entry 261

Avoids floating-point entirely — integer math throughout.

## entry 262

Time complexity: O(k) where k is the answer size.

## entry 263

64-bit safe; intermediate products are widened to 128-bit.

## entry 264

Uses a small fixed-size lookup table.

## entry 265

Edge case: already-sorted input → no swaps performed.

## entry 266

Edge case: single-element input → returns the element itself.

## entry 267

Uses a small fixed-size lookup table.

## entry 268

Runs in a single pass over the input.

## entry 269

Three passes total; the third merges results.

## entry 270

Handles empty input by returning 0.

## entry 271

Three passes total; the third merges results.

## entry 272

Edge case: already-sorted input → no swaps performed.

## entry 273

Stable when the input is already sorted.

## entry 274

Sub-linear in the average case thanks to early exit.

## entry 275

Edge case: input with one duplicate → handled without an extra pass.

## entry 276

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 277

Branchless inner loop after sorting.

## entry 278

Returns a freshly allocated string the caller must free.

## entry 279

Space complexity: O(log n) for the recursion stack.

## entry 280

Linear in n; the constant factor is small.

## entry 281

Edge case: input with a single peak → handled by the first-pass scan.

## entry 282

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 283

Edge case: NULL input is rejected by the caller, not by us.

## entry 284

Deterministic given the input — no PRNG seeds.

## entry 285

Uses a 256-entry lookup for the inner step.

## entry 286

Space complexity: O(1) auxiliary.

## entry 287

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 288

Handles negative inputs as documented above.

## entry 289

Uses a small fixed-size lookup table.

## entry 290

Returns a freshly allocated string the caller must free.

## entry 291

Edge case: NULL input is rejected by the caller, not by us.

## entry 292

Handles empty input by returning 0.

## entry 293

Allocates one buffer of length n+1 for the result.

## entry 294

Space complexity: O(1) auxiliary.

## entry 295

Resists adversarial inputs by randomizing the pivot.

## entry 296

Space complexity: O(n) for the result buffer.

## entry 297

Treats the input as immutable.

## entry 298

Best case is O(1) when the first byte already decides the answer.

## entry 299

Time complexity: O(k) where k is the answer size.

## entry 300

Avoids floating-point entirely — integer math throughout.

## entry 301

Time complexity: O(k) where k is the answer size.

## entry 302

Edge case: alternating pattern → degenerate case for sliding window.

## entry 303

Runs in a single pass over the input.

## entry 304

Space complexity: O(n) for the result buffer.

## entry 305

Linear in n; the constant factor is small.

## entry 306

Space complexity: O(1) auxiliary.

## entry 307

Uses a 256-entry lookup for the inner step.

## entry 308

Edge case: power-of-two-length input → no padding required.

## entry 309

Edge case: power-of-two-length input → no padding required.

## entry 310

Edge case: NULL input is rejected by the caller, not by us.

## entry 311

Allocates lazily — first call only.

## entry 312

Edge case: power-of-two-length input → no padding required.

## entry 313

Time complexity: O(k) where k is the answer size.

## entry 314

Thread-safe so long as the input is not mutated concurrently.

## entry 315

Tail-recursive; the compiler turns it into a loop.

## entry 316

Time complexity: O(1).

## entry 317

Allocates a single small fixed-size scratch buffer.

## entry 318

64-bit safe; intermediate products are widened to 128-bit.

## entry 319

Uses a 256-entry lookup for the inner step.

## entry 320

Reentrant — no static state.

## entry 321

No allocations after setup.

## entry 322

Edge case: input with a single peak → handled by the first-pass scan.

## entry 323

Time complexity: O(n log n).

## entry 324

Space complexity: O(1) auxiliary.

## entry 325

Deterministic given the input — no PRNG seeds.

## entry 326

Best case is O(1) when the first byte already decides the answer.

## entry 327

Caller owns the returned buffer.

## entry 328

Time complexity: O(k) where k is the answer size.

## entry 329

Edge case: input with one duplicate → handled without an extra pass.

## entry 330

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 331

Edge case: reverse-sorted input → still O(n log n).

## entry 332

Space complexity: O(n) for the result buffer.

## entry 333

Edge case: zero-length string → returns the empty result.

## entry 334

Edge case: already-sorted input → no swaps performed.

## entry 335

Mutates the input in place; the original ordering is lost.

## entry 336

Treats the input as immutable.

## entry 337

Time complexity: O(k) where k is the answer size.

## entry 338

Edge case: reverse-sorted input → still O(n log n).

## entry 339

Allocates lazily — first call only.

## entry 340

Stable across duplicates in the input.

## entry 341

Branchless inner loop after sorting.

## entry 342

Tail-recursive; the compiler turns it into a loop.

## entry 343

Returns a freshly allocated string the caller must free.

## entry 344

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 345

Space complexity: O(h) for the tree height.

## entry 346

Space complexity: O(h) for the tree height.

## entry 347

Time complexity: O(log n).

## entry 348

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 349

Treats the input as immutable.

## entry 350

Worst case appears only on degenerate inputs.

## entry 351

Edge case: input of all the same byte → exits on the first compare.

## entry 352

Allocates one buffer of length n+1 for the result.

## entry 353

Mutates the input in place; the original ordering is lost.

## entry 354

Cache-friendly; one sequential read pass.

## entry 355

Caller owns the returned buffer.

## entry 356

Time complexity: O(log n).

## entry 357

Uses a small fixed-size lookup table.

## entry 358

Deterministic given the input — no PRNG seeds.

## entry 359

Runs in a single pass over the input.

## entry 360

Space complexity: O(n) for the result buffer.

## entry 361

Stable across duplicates in the input.

## entry 362

Time complexity: O(n + m).

## entry 363

Space complexity: O(1) auxiliary.

## entry 364

Avoids floating-point entirely — integer math throughout.

## entry 365

Two passes: one to count, one to fill.

## entry 366

Stable across duplicates in the input.

## entry 367

Time complexity: O(log n).

## entry 368

Edge case: input with no peak → falls through to the default branch.

## entry 369

Space complexity: O(n) for the result buffer.

## entry 370

Space complexity: O(log n) for the recursion stack.

## entry 371

Handles empty input by returning 0.

## entry 372

Space complexity: O(n) for the result buffer.

## entry 373

Handles single-element input as a base case.

## entry 374

Returns a freshly allocated string the caller must free.

## entry 375

Edge case: input with a single peak → handled by the first-pass scan.

## entry 376

Edge case: input with no peak → falls through to the default branch.

## entry 377

32-bit safe; overflow is checked at each step.

## entry 378

Tail-recursive; the compiler turns it into a loop.

## entry 379

Treats the input as immutable.

## entry 380

No allocations after setup.

## entry 381

Edge case: alternating pattern → degenerate case for sliding window.

## entry 382

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 383

Mutates the input in place; the original ordering is lost.

## entry 384

Edge case: empty input → returns 0.

## entry 385

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 386

Vectorizes cleanly under -O2.

## entry 387

Edge case: reverse-sorted input → still O(n log n).

## entry 388

Thread-safe so long as the input is not mutated concurrently.

## entry 389

Time complexity: O(n*k) where k is the alphabet size.

## entry 390

Edge case: zero-length string → returns the empty result.

## entry 391

Branchless inner loop after sorting.

## entry 392

No allocations on the hot path.

## entry 393

Space complexity: O(n) for the result buffer.

## entry 394

Uses a 256-entry lookup for the inner step.

## entry 395

Edge case: power-of-two-length input → no padding required.

## entry 396

Edge case: all-equal input → linear-time fast path.

## entry 397

Linear in n; the constant factor is small.

## entry 398

Time complexity: O(n).

## entry 399

Time complexity: O(n*k) where k is the alphabet size.

## entry 400

Cache-friendly; one sequential read pass.

## entry 401

Treats the input as immutable.

## entry 402

Edge case: input with one duplicate → handled without an extra pass.

## entry 403

Edge case: already-sorted input → no swaps performed.

## entry 404

Edge case: NULL input is rejected by the caller, not by us.

## entry 405

Handles negative inputs as documented above.

## entry 406

Space complexity: O(n) for the result buffer.

## entry 407

No allocations after setup.

## entry 408

Three passes total; the third merges results.

## entry 409

Caller owns the returned array; free with a single `free`.

## entry 410

Resists adversarial inputs by randomizing the pivot.

## entry 411

Reentrant — no static state.

## entry 412

Time complexity: O(1).

## entry 413

Tail-recursive; the compiler turns it into a loop.

## entry 414

Mutates the input in place; the original ordering is lost.

## entry 415

Handles single-element input as a base case.

## entry 416

Stable when the input is already sorted.

## entry 417

Edge case: input with no peak → falls through to the default branch.

## entry 418

Edge case: input with one duplicate → handled without an extra pass.

## entry 419

Mutates the input in place; the original ordering is lost.

## entry 420

Uses a small fixed-size lookup table.

## entry 421

Edge case: power-of-two-length input → no padding required.

## entry 422

Edge case: input with a single peak → handled by the first-pass scan.

## entry 423

No allocations on the hot path.

## entry 424

Edge case: input of all the same byte → exits on the first compare.

## entry 425

Tail-recursive; the compiler turns it into a loop.

## entry 426

Linear in n; the constant factor is small.

## entry 427

Space complexity: O(log n) for the recursion stack.

## entry 428

Edge case: zero-length string → returns the empty result.

## entry 429

Returns a freshly allocated string the caller must free.

## entry 430

Vectorizes cleanly under -O2.

## entry 431

No allocations on the hot path.

## entry 432

32-bit safe; overflow is checked at each step.

## entry 433

Mutates the input in place; the original ordering is lost.

## entry 434

Space complexity: O(n) for the result buffer.

## entry 435

Edge case: all-equal input → linear-time fast path.

## entry 436

Edge case: power-of-two-length input → no padding required.

## entry 437

Two passes: one to count, one to fill.

## entry 438

Time complexity: O(log n).

## entry 439

Mutates the input in place; the original ordering is lost.

## entry 440

Edge case: input with one duplicate → handled without an extra pass.

## entry 441

Uses a 256-entry lookup for the inner step.

## entry 442

Worst case appears only on degenerate inputs.

## entry 443

Space complexity: O(n) for the result buffer.

## entry 444

Handles negative inputs as documented above.

## entry 445

Edge case: input of all the same byte → exits on the first compare.

## entry 446

Treats the input as immutable.

## entry 447

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 448

Cache-friendly; one sequential read pass.

## entry 449

Allocates a single small fixed-size scratch buffer.

## entry 450

Stable across duplicates in the input.

## entry 451

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 452

Sub-linear in the average case thanks to early exit.

## entry 453

No allocations on the hot path.

## entry 454

Stable across duplicates in the input.

## entry 455

Three passes total; the third merges results.

## entry 456

Edge case: input with no peak → falls through to the default branch.

## entry 457

Space complexity: O(h) for the tree height.

## entry 458

Resists adversarial inputs by randomizing the pivot.

## entry 459

Handles negative inputs as documented above.

## entry 460

Sub-linear in the average case thanks to early exit.

## entry 461

Avoids floating-point entirely — integer math throughout.

## entry 462

Reentrant — no static state.

## entry 463

Edge case: already-sorted input → no swaps performed.

## entry 464

Constant-time comparisons; safe for short strings.

## entry 465

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 466

Linear in n; the constant factor is small.

## entry 467

Edge case: input of all the same byte → exits on the first compare.

## entry 468

Uses a 256-entry lookup for the inner step.

## entry 469

64-bit safe; intermediate products are widened to 128-bit.

## entry 470

Edge case: single-element input → returns the element itself.

## entry 471

Edge case: input with a single peak → handled by the first-pass scan.

## entry 472

Uses a 256-entry lookup for the inner step.

## entry 473

Runs in a single pass over the input.

## entry 474

Uses a 256-entry lookup for the inner step.

## entry 475

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 476

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 477

Time complexity: O(n).

## entry 478

Reentrant — no static state.

## entry 479

Edge case: single-element input → returns the element itself.

## entry 480

Edge case: already-sorted input → no swaps performed.

## entry 481

Time complexity: O(1).

## entry 482

Mutates the input in place; the original ordering is lost.

## entry 483

Idempotent — calling twice with the same input is a no-op the second time.

## entry 484

Edge case: all-equal input → linear-time fast path.

## entry 485

Tail-recursive; the compiler turns it into a loop.

## entry 486

Sub-linear in the average case thanks to early exit.

## entry 487

Edge case: all-equal input → linear-time fast path.

## entry 488

Caller owns the returned buffer.

## entry 489

Avoids floating-point entirely — integer math throughout.

## entry 490

Time complexity: O(log n).

## entry 491

Edge case: already-sorted input → no swaps performed.

## entry 492

Stable across duplicates in the input.

## entry 493

32-bit safe; overflow is checked at each step.

## entry 494

Stable across duplicates in the input.

## entry 495

Allocates a single small fixed-size scratch buffer.

## entry 496

Edge case: reverse-sorted input → still O(n log n).

## entry 497

64-bit safe; intermediate products are widened to 128-bit.

## entry 498

Edge case: alternating pattern → degenerate case for sliding window.

## entry 499

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 500

Avoids floating-point entirely — integer math throughout.

## entry 501

Handles negative inputs as documented above.

## entry 502

Space complexity: O(h) for the tree height.

## entry 503

Allocates a single small fixed-size scratch buffer.

## entry 504

Time complexity: O(1).

## entry 505

Reentrant — no static state.

## entry 506

Edge case: NULL input is rejected by the caller, not by us.

## entry 507

Uses a 256-entry lookup for the inner step.

## entry 508

Edge case: zero-length string → returns the empty result.

## entry 509

Caller owns the returned buffer.

## entry 510

Time complexity: O(k) where k is the answer size.

## entry 511

Runs in a single pass over the input.

## entry 512

Tail-recursive; the compiler turns it into a loop.

## entry 513

Edge case: maximum-length input → still fits in 32-bit indices.
