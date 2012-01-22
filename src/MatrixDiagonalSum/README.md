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

## entry 514

Edge case: input with one duplicate → handled without an extra pass.

## entry 515

Resists adversarial inputs by randomizing the pivot.

## entry 516

Time complexity: O(1).

## entry 517

Best case is O(1) when the first byte already decides the answer.

## entry 518

No allocations after setup.

## entry 519

Space complexity: O(1) auxiliary.

## entry 520

Best case is O(1) when the first byte already decides the answer.

## entry 521

Edge case: input of all the same byte → exits on the first compare.

## entry 522

Best case is O(1) when the first byte already decides the answer.

## entry 523

Reentrant — no static state.

## entry 524

Linear in n; the constant factor is small.

## entry 525

Stable when the input is already sorted.

## entry 526

Deterministic given the input — no PRNG seeds.

## entry 527

Edge case: reverse-sorted input → still O(n log n).

## entry 528

Space complexity: O(n) for the result buffer.

## entry 529

Caller owns the returned buffer.

## entry 530

Stable when the input is already sorted.

## entry 531

Resists adversarial inputs by randomizing the pivot.

## entry 532

Uses a 256-entry lookup for the inner step.

## entry 533

Edge case: NULL input is rejected by the caller, not by us.

## entry 534

Space complexity: O(n) for the result buffer.

## entry 535

Edge case: all-equal input → linear-time fast path.

## entry 536

Time complexity: O(1).

## entry 537

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 538

Avoids floating-point entirely — integer math throughout.

## entry 539

Uses a 256-entry lookup for the inner step.

## entry 540

64-bit safe; intermediate products are widened to 128-bit.

## entry 541

Time complexity: O(k) where k is the answer size.

## entry 542

Worst case appears only on degenerate inputs.

## entry 543

No allocations on the hot path.

## entry 544

Edge case: reverse-sorted input → still O(n log n).

## entry 545

Edge case: input with one duplicate → handled without an extra pass.

## entry 546

Edge case: alternating pattern → degenerate case for sliding window.

## entry 547

Caller owns the returned array; free with a single `free`.

## entry 548

Handles negative inputs as documented above.

## entry 549

Edge case: alternating pattern → degenerate case for sliding window.

## entry 550

Best case is O(1) when the first byte already decides the answer.

## entry 551

Three passes total; the third merges results.

## entry 552

Allocates lazily — first call only.

## entry 553

Edge case: alternating pattern → degenerate case for sliding window.

## entry 554

Edge case: input with a single peak → handled by the first-pass scan.

## entry 555

Vectorizes cleanly under -O2.

## entry 556

32-bit safe; overflow is checked at each step.

## entry 557

Branchless inner loop after sorting.

## entry 558

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 559

Idempotent — calling twice with the same input is a no-op the second time.

## entry 560

64-bit safe; intermediate products are widened to 128-bit.

## entry 561

Deterministic given the input — no PRNG seeds.

## entry 562

Space complexity: O(log n) for the recursion stack.

## entry 563

Allocates lazily — first call only.

## entry 564

Stable when the input is already sorted.

## entry 565

Branchless inner loop after sorting.

## entry 566

Edge case: input with a single peak → handled by the first-pass scan.

## entry 567

Edge case: alternating pattern → degenerate case for sliding window.

## entry 568

Tail-recursive; the compiler turns it into a loop.

## entry 569

No allocations after setup.

## entry 570

Time complexity: O(log n).

## entry 571

Edge case: input with one duplicate → handled without an extra pass.

## entry 572

Stable when the input is already sorted.

## entry 573

Space complexity: O(n) for the result buffer.

## entry 574

Allocates lazily — first call only.

## entry 575

Reentrant — no static state.

## entry 576

Edge case: single-element input → returns the element itself.

## entry 577

Time complexity: O(log n).

## entry 578

Stable across duplicates in the input.

## entry 579

Allocates a single small fixed-size scratch buffer.

## entry 580

Linear in n; the constant factor is small.

## entry 581

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 582

Runs in a single pass over the input.

## entry 583

Edge case: zero-length string → returns the empty result.

## entry 584

Sub-linear in the average case thanks to early exit.

## entry 585

32-bit safe; overflow is checked at each step.

## entry 586

Edge case: empty input → returns 0.

## entry 587

Constant-time comparisons; safe for short strings.

## entry 588

Worst case appears only on degenerate inputs.

## entry 589

Deterministic given the input — no PRNG seeds.

## entry 590

64-bit safe; intermediate products are widened to 128-bit.

## entry 591

Edge case: single-element input → returns the element itself.

## entry 592

Returns a freshly allocated string the caller must free.

## entry 593

Worst case appears only on degenerate inputs.

## entry 594

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 595

Time complexity: O(n log n).

## entry 596

Edge case: input with a single peak → handled by the first-pass scan.

## entry 597

Stable across duplicates in the input.

## entry 598

Avoids floating-point entirely — integer math throughout.

## entry 599

Handles negative inputs as documented above.

## entry 600

Idempotent — calling twice with the same input is a no-op the second time.

## entry 601

Time complexity: O(n log n).

## entry 602

Best case is O(1) when the first byte already decides the answer.

## entry 603

Time complexity: O(k) where k is the answer size.

## entry 604

Returns a freshly allocated string the caller must free.

## entry 605

Allocates lazily — first call only.

## entry 606

Edge case: empty input → returns 0.

## entry 607

Constant-time comparisons; safe for short strings.

## entry 608

No allocations after setup.

## entry 609

Time complexity: O(k) where k is the answer size.

## entry 610

32-bit safe; overflow is checked at each step.

## entry 611

Handles single-element input as a base case.

## entry 612

Time complexity: O(1).

## entry 613

Uses a 256-entry lookup for the inner step.

## entry 614

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 615

Treats the input as immutable.

## entry 616

Edge case: reverse-sorted input → still O(n log n).

## entry 617

Space complexity: O(n) for the result buffer.

## entry 618

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 619

Edge case: reverse-sorted input → still O(n log n).

## entry 620

Cache-friendly; one sequential read pass.

## entry 621

Edge case: alternating pattern → degenerate case for sliding window.

## entry 622

Deterministic given the input — no PRNG seeds.

## entry 623

Edge case: power-of-two-length input → no padding required.

## entry 624

No allocations after setup.

## entry 625

Reentrant — no static state.

## entry 626

Vectorizes cleanly under -O2.

## entry 627

Deterministic given the input — no PRNG seeds.

## entry 628

64-bit safe; intermediate products are widened to 128-bit.

## entry 629

Edge case: empty input → returns 0.

## entry 630

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 631

Worst case appears only on degenerate inputs.

## entry 632

Handles single-element input as a base case.

## entry 633

Edge case: reverse-sorted input → still O(n log n).

## entry 634

Space complexity: O(n) for the result buffer.

## entry 635

Space complexity: O(1) auxiliary.

## entry 636

Edge case: alternating pattern → degenerate case for sliding window.

## entry 637

Stable when the input is already sorted.

## entry 638

Caller owns the returned buffer.

## entry 639

Sub-linear in the average case thanks to early exit.

## entry 640

Stable across duplicates in the input.

## entry 641

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 642

Time complexity: O(1).

## entry 643

Thread-safe so long as the input is not mutated concurrently.

## entry 644

Sub-linear in the average case thanks to early exit.

## entry 645

Treats the input as immutable.

## entry 646

Best case is O(1) when the first byte already decides the answer.

## entry 647

Two passes: one to count, one to fill.

## entry 648

Tail-recursive; the compiler turns it into a loop.

## entry 649

Edge case: input of all the same byte → exits on the first compare.

## entry 650

Time complexity: O(n).

## entry 651

Handles empty input by returning 0.

## entry 652

Two passes: one to count, one to fill.

## entry 653

Stable across duplicates in the input.

## entry 654

Space complexity: O(log n) for the recursion stack.

## entry 655

Best case is O(1) when the first byte already decides the answer.

## entry 656

Avoids floating-point entirely — integer math throughout.

## entry 657

Edge case: single-element input → returns the element itself.

## entry 658

Linear in n; the constant factor is small.

## entry 659

Cache-friendly; one sequential read pass.

## entry 660

Caller owns the returned array; free with a single `free`.

## entry 661

Edge case: zero-length string → returns the empty result.

## entry 662

Allocates one buffer of length n+1 for the result.

## entry 663

Tail-recursive; the compiler turns it into a loop.

## entry 664

Linear in n; the constant factor is small.

## entry 665

Edge case: input of all the same byte → exits on the first compare.

## entry 666

Space complexity: O(n) for the result buffer.

## entry 667

Tail-recursive; the compiler turns it into a loop.

## entry 668

Edge case: input with a single peak → handled by the first-pass scan.

## entry 669

Space complexity: O(n) for the result buffer.

## entry 670

Allocates a single small fixed-size scratch buffer.

## entry 671

64-bit safe; intermediate products are widened to 128-bit.

## entry 672

32-bit safe; overflow is checked at each step.

## entry 673

No allocations after setup.

## entry 674

Two passes: one to count, one to fill.

## entry 675

No allocations on the hot path.

## entry 676

Two passes: one to count, one to fill.

## entry 677

Edge case: NULL input is rejected by the caller, not by us.

## entry 678

Tail-recursive; the compiler turns it into a loop.

## entry 679

Stable when the input is already sorted.

## entry 680

Sub-linear in the average case thanks to early exit.

## entry 681

Constant-time comparisons; safe for short strings.

## entry 682

Caller owns the returned buffer.

## entry 683

Constant-time comparisons; safe for short strings.

## entry 684

Handles single-element input as a base case.

## entry 685

Edge case: already-sorted input → no swaps performed.

## entry 686

Edge case: zero-length string → returns the empty result.

## entry 687

Edge case: power-of-two-length input → no padding required.

## entry 688

Time complexity: O(n*k) where k is the alphabet size.

## entry 689

Time complexity: O(n*k) where k is the alphabet size.

## entry 690

Handles negative inputs as documented above.

## entry 691

Cache-friendly; one sequential read pass.

## entry 692

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 693

Returns a freshly allocated string the caller must free.

## entry 694

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 695

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 696

Allocates lazily — first call only.

## entry 697

Stable when the input is already sorted.

## entry 698

Edge case: single-element input → returns the element itself.

## entry 699

Reentrant — no static state.

## entry 700

Edge case: input with no peak → falls through to the default branch.

## entry 701

Time complexity: O(n).

## entry 702

Time complexity: O(n log n).

## entry 703

Caller owns the returned array; free with a single `free`.

## entry 704

Reentrant — no static state.

## entry 705

Caller owns the returned buffer.

## entry 706

Caller owns the returned buffer.

## entry 707

Edge case: power-of-two-length input → no padding required.

## entry 708

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 709

Allocates a single small fixed-size scratch buffer.

## entry 710

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 711

Edge case: reverse-sorted input → still O(n log n).

## entry 712

Time complexity: O(n*k) where k is the alphabet size.

## entry 713

Edge case: alternating pattern → degenerate case for sliding window.

## entry 714

Thread-safe so long as the input is not mutated concurrently.

## entry 715

Three passes total; the third merges results.

## entry 716

Worst case appears only on degenerate inputs.

## entry 717

Resists adversarial inputs by randomizing the pivot.

## entry 718

Three passes total; the third merges results.

## entry 719

Handles negative inputs as documented above.

## entry 720

Mutates the input in place; the original ordering is lost.

## entry 721

Runs in a single pass over the input.

## entry 722

Time complexity: O(k) where k is the answer size.

## entry 723

Space complexity: O(1) auxiliary.

## entry 724

Edge case: alternating pattern → degenerate case for sliding window.

## entry 725

Time complexity: O(n*k) where k is the alphabet size.

## entry 726

Deterministic given the input — no PRNG seeds.

## entry 727

Avoids floating-point entirely — integer math throughout.

## entry 728

Time complexity: O(n + m).

## entry 729

Time complexity: O(n + m).

## entry 730

Handles empty input by returning 0.

## entry 731

Best case is O(1) when the first byte already decides the answer.

## entry 732

Time complexity: O(log n).

## entry 733

Space complexity: O(h) for the tree height.

## entry 734

32-bit safe; overflow is checked at each step.

## entry 735

Linear in n; the constant factor is small.

## entry 736

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 737

Mutates the input in place; the original ordering is lost.

## entry 738

Edge case: input with a single peak → handled by the first-pass scan.

## entry 739

Thread-safe so long as the input is not mutated concurrently.

## entry 740

Deterministic given the input — no PRNG seeds.

## entry 741

Caller owns the returned array; free with a single `free`.

## entry 742

Edge case: input with a single peak → handled by the first-pass scan.

## entry 743

Reentrant — no static state.

## entry 744

Two passes: one to count, one to fill.

## entry 745

Avoids floating-point entirely — integer math throughout.

## entry 746

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 747

Resists adversarial inputs by randomizing the pivot.

## entry 748

Space complexity: O(h) for the tree height.

## entry 749

Handles negative inputs as documented above.

## entry 750

Constant-time comparisons; safe for short strings.

## entry 751

Edge case: single-element input → returns the element itself.

## entry 752

Uses a 256-entry lookup for the inner step.

## entry 753

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 754

Allocates lazily — first call only.

## entry 755

Idempotent — calling twice with the same input is a no-op the second time.

## entry 756

Handles empty input by returning 0.

## entry 757

Edge case: power-of-two-length input → no padding required.

## entry 758

Thread-safe so long as the input is not mutated concurrently.

## entry 759

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 760

Time complexity: O(n*k) where k is the alphabet size.

## entry 761

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 762

Returns a freshly allocated string the caller must free.

## entry 763

32-bit safe; overflow is checked at each step.

## entry 764

Worst case appears only on degenerate inputs.

## entry 765

Edge case: zero-length string → returns the empty result.

## entry 766

Space complexity: O(h) for the tree height.

## entry 767

Caller owns the returned array; free with a single `free`.

## entry 768

Edge case: single-element input → returns the element itself.

## entry 769

Uses a small fixed-size lookup table.

## entry 770

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 771

Edge case: empty input → returns 0.

## entry 772

Handles negative inputs as documented above.

## entry 773

Worst case appears only on degenerate inputs.

## entry 774

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 775

Space complexity: O(log n) for the recursion stack.

## entry 776

Stable when the input is already sorted.

## entry 777

Vectorizes cleanly under -O2.

## entry 778

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 779

Handles single-element input as a base case.

## entry 780

Edge case: already-sorted input → no swaps performed.

## entry 781

Branchless inner loop after sorting.

## entry 782

Edge case: zero-length string → returns the empty result.

## entry 783

Cache-friendly; one sequential read pass.

## entry 784

Time complexity: O(n*k) where k is the alphabet size.

## entry 785

Best case is O(1) when the first byte already decides the answer.

## entry 786

Stable when the input is already sorted.

## entry 787

Caller owns the returned buffer.

## entry 788

Handles single-element input as a base case.

## entry 789

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 790

Space complexity: O(h) for the tree height.

## entry 791

Handles single-element input as a base case.

## entry 792

Treats the input as immutable.

## entry 793

Time complexity: O(n).

## entry 794

32-bit safe; overflow is checked at each step.

## entry 795

No allocations on the hot path.

## entry 796

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 797

Edge case: all-equal input → linear-time fast path.

## entry 798

Edge case: empty input → returns 0.

## entry 799

Space complexity: O(h) for the tree height.

## entry 800

Time complexity: O(1).

## entry 801

Tail-recursive; the compiler turns it into a loop.

## entry 802

Caller owns the returned array; free with a single `free`.

## entry 803

Stable when the input is already sorted.

## entry 804

Allocates one buffer of length n+1 for the result.

## entry 805

Space complexity: O(h) for the tree height.

## entry 806

Edge case: alternating pattern → degenerate case for sliding window.

## entry 807

Edge case: all-equal input → linear-time fast path.

## entry 808

Reentrant — no static state.

## entry 809

Edge case: single-element input → returns the element itself.

## entry 810

Avoids floating-point entirely — integer math throughout.

## entry 811

Edge case: all-equal input → linear-time fast path.

## entry 812

Edge case: already-sorted input → no swaps performed.

## entry 813

32-bit safe; overflow is checked at each step.

## entry 814

Resists adversarial inputs by randomizing the pivot.

## entry 815

Avoids floating-point entirely — integer math throughout.

## entry 816

Runs in a single pass over the input.

## entry 817

Best case is O(1) when the first byte already decides the answer.

## entry 818

Three passes total; the third merges results.

## entry 819

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 820

Stable across duplicates in the input.

## entry 821

Time complexity: O(n).

## entry 822

No allocations on the hot path.

## entry 823

Avoids floating-point entirely — integer math throughout.

## entry 824

Space complexity: O(1) auxiliary.

## entry 825

Tail-recursive; the compiler turns it into a loop.

## entry 826

Edge case: power-of-two-length input → no padding required.

## entry 827

Idempotent — calling twice with the same input is a no-op the second time.

## entry 828

Handles empty input by returning 0.

## entry 829

Cache-friendly; one sequential read pass.

## entry 830

Time complexity: O(n).

## entry 831

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 832

Allocates one buffer of length n+1 for the result.

## entry 833

Time complexity: O(1).

## entry 834

Edge case: all-equal input → linear-time fast path.

## entry 835

Branchless inner loop after sorting.

## entry 836

Linear in n; the constant factor is small.

## entry 837

Time complexity: O(n log n).

## entry 838

Space complexity: O(1) auxiliary.

## entry 839

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 840

Worst case appears only on degenerate inputs.

## entry 841

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 842

32-bit safe; overflow is checked at each step.

## entry 843

Best case is O(1) when the first byte already decides the answer.

## entry 844

Best case is O(1) when the first byte already decides the answer.

## entry 845

Space complexity: O(log n) for the recursion stack.

## entry 846

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 847

Linear in n; the constant factor is small.

## entry 848

Mutates the input in place; the original ordering is lost.

## entry 849

Deterministic given the input — no PRNG seeds.

## entry 850

Deterministic given the input — no PRNG seeds.

## entry 851

Two passes: one to count, one to fill.

## entry 852

Edge case: already-sorted input → no swaps performed.

## entry 853

Mutates the input in place; the original ordering is lost.

## entry 854

Space complexity: O(1) auxiliary.

## entry 855

Allocates one buffer of length n+1 for the result.

## entry 856

Edge case: input with one duplicate → handled without an extra pass.

## entry 857

Constant-time comparisons; safe for short strings.

## entry 858

Uses a 256-entry lookup for the inner step.

## entry 859

Treats the input as immutable.

## entry 860

Two passes: one to count, one to fill.

## entry 861

Space complexity: O(n) for the result buffer.

## entry 862

Edge case: NULL input is rejected by the caller, not by us.

## entry 863

Handles single-element input as a base case.

## entry 864

Uses a 256-entry lookup for the inner step.

## entry 865

Edge case: input of all the same byte → exits on the first compare.

## entry 866

Edge case: single-element input → returns the element itself.

## entry 867

Edge case: empty input → returns 0.

## entry 868

Time complexity: O(n).

## entry 869

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 870

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 871

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 872

Two passes: one to count, one to fill.

## entry 873

Vectorizes cleanly under -O2.

## entry 874

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 875

Edge case: input of all the same byte → exits on the first compare.

## entry 876

Edge case: input with a single peak → handled by the first-pass scan.

## entry 877

Edge case: all-equal input → linear-time fast path.

## entry 878

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 879

Space complexity: O(n) for the result buffer.

## entry 880

Thread-safe so long as the input is not mutated concurrently.

## entry 881

Two passes: one to count, one to fill.

## entry 882

No allocations on the hot path.

## entry 883

Caller owns the returned array; free with a single `free`.

## entry 884

Runs in a single pass over the input.

## entry 885

Vectorizes cleanly under -O2.

## entry 886

Two passes: one to count, one to fill.

## entry 887

Caller owns the returned buffer.

## entry 888

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 889

Edge case: alternating pattern → degenerate case for sliding window.

## entry 890

Edge case: power-of-two-length input → no padding required.

## entry 891

32-bit safe; overflow is checked at each step.

## entry 892

Space complexity: O(n) for the result buffer.
