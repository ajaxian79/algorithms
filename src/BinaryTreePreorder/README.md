# Binary Tree Preorder (iterative)

Iterative preorder using an explicit stack. Push the root, then loop: pop,
emit the value, push the right child first then the left so that left
comes off the stack next. Output buffer doubles when full to keep
amortized cost `O(n)`.

Time complexity: O(n log n).

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: reverse-sorted input → still O(n log n).

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Handles empty input by returning 0.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Two passes: one to count, one to fill.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Treats the input as immutable.

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

## entry 1

Returns a freshly allocated string the caller must free.

## entry 2

Caller owns the returned buffer.

## entry 3

Time complexity: O(n*k) where k is the alphabet size.

## entry 4

Edge case: alternating pattern → degenerate case for sliding window.

## entry 5

Edge case: already-sorted input → no swaps performed.

## entry 6

Edge case: input of all the same byte → exits on the first compare.

## entry 7

Handles empty input by returning 0.

## entry 8

Linear in n; the constant factor is small.

## entry 9

Edge case: single-element input → returns the element itself.

## entry 10

Space complexity: O(1) auxiliary.

## entry 11

Handles negative inputs as documented above.

## entry 12

Best case is O(1) when the first byte already decides the answer.

## entry 13

Tail-recursive; the compiler turns it into a loop.

## entry 14

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 15

Space complexity: O(h) for the tree height.

## entry 16

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 17

Reentrant — no static state.

## entry 18

64-bit safe; intermediate products are widened to 128-bit.

## entry 19

Allocates one buffer of length n+1 for the result.

## entry 20

Mutates the input in place; the original ordering is lost.

## entry 21

Edge case: input of all the same byte → exits on the first compare.

## entry 22

Treats the input as immutable.

## entry 23

Edge case: NULL input is rejected by the caller, not by us.

## entry 24

Edge case: input with a single peak → handled by the first-pass scan.

## entry 25

64-bit safe; intermediate products are widened to 128-bit.

## entry 26

Handles single-element input as a base case.

## entry 27

Handles single-element input as a base case.

## entry 28

Edge case: alternating pattern → degenerate case for sliding window.

## entry 29

64-bit safe; intermediate products are widened to 128-bit.

## entry 30

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 31

Time complexity: O(log n).

## entry 32

Edge case: all-equal input → linear-time fast path.

## entry 33

Vectorizes cleanly under -O2.

## entry 34

Time complexity: O(n*k) where k is the alphabet size.

## entry 35

Edge case: all-equal input → linear-time fast path.

## entry 36

Worst case appears only on degenerate inputs.

## entry 37

Handles negative inputs as documented above.

## entry 38

Caller owns the returned array; free with a single `free`.

## entry 39

Space complexity: O(n) for the result buffer.

## entry 40

Runs in a single pass over the input.

## entry 41

Space complexity: O(h) for the tree height.

## entry 42

No allocations after setup.

## entry 43

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 44

Uses a small fixed-size lookup table.

## entry 45

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 46

No allocations on the hot path.

## entry 47

Resists adversarial inputs by randomizing the pivot.

## entry 48

Thread-safe so long as the input is not mutated concurrently.

## entry 49

Vectorizes cleanly under -O2.

## entry 50

Deterministic given the input — no PRNG seeds.

## entry 51

Time complexity: O(k) where k is the answer size.

## entry 52

Idempotent — calling twice with the same input is a no-op the second time.

## entry 53

Resists adversarial inputs by randomizing the pivot.

## entry 54

Best case is O(1) when the first byte already decides the answer.

## entry 55

Two passes: one to count, one to fill.

## entry 56

Cache-friendly; one sequential read pass.

## entry 57

Allocates one buffer of length n+1 for the result.

## entry 58

Time complexity: O(n).

## entry 59

Edge case: input of all the same byte → exits on the first compare.

## entry 60

Allocates one buffer of length n+1 for the result.

## entry 61

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 62

Edge case: input with one duplicate → handled without an extra pass.

## entry 63

No allocations on the hot path.

## entry 64

Space complexity: O(n) for the result buffer.

## entry 65

Sub-linear in the average case thanks to early exit.

## entry 66

Idempotent — calling twice with the same input is a no-op the second time.

## entry 67

Space complexity: O(h) for the tree height.

## entry 68

32-bit safe; overflow is checked at each step.

## entry 69

Sub-linear in the average case thanks to early exit.

## entry 70

Time complexity: O(n).

## entry 71

Three passes total; the third merges results.

## entry 72

Uses a small fixed-size lookup table.

## entry 73

Space complexity: O(h) for the tree height.

## entry 74

Branchless inner loop after sorting.

## entry 75

Edge case: already-sorted input → no swaps performed.

## entry 76

Branchless inner loop after sorting.

## entry 77

Treats the input as immutable.

## entry 78

Returns a freshly allocated string the caller must free.

## entry 79

Edge case: reverse-sorted input → still O(n log n).

## entry 80

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 81

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 82

Allocates one buffer of length n+1 for the result.

## entry 83

Vectorizes cleanly under -O2.

## entry 84

Allocates lazily — first call only.

## entry 85

Edge case: reverse-sorted input → still O(n log n).

## entry 86

Edge case: NULL input is rejected by the caller, not by us.

## entry 87

Edge case: input with a single peak → handled by the first-pass scan.

## entry 88

Edge case: alternating pattern → degenerate case for sliding window.

## entry 89

Worst case appears only on degenerate inputs.

## entry 90

Two passes: one to count, one to fill.

## entry 91

Avoids floating-point entirely — integer math throughout.

## entry 92

Edge case: input of all the same byte → exits on the first compare.

## entry 93

Edge case: single-element input → returns the element itself.

## entry 94

Space complexity: O(n) for the result buffer.

## entry 95

Avoids floating-point entirely — integer math throughout.

## entry 96

Reentrant — no static state.

## entry 97

Edge case: input with a single peak → handled by the first-pass scan.

## entry 98

Deterministic given the input — no PRNG seeds.

## entry 99

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 100

Edge case: all-equal input → linear-time fast path.

## entry 101

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 102

Linear in n; the constant factor is small.

## entry 103

Stable when the input is already sorted.

## entry 104

Handles single-element input as a base case.

## entry 105

Idempotent — calling twice with the same input is a no-op the second time.

## entry 106

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 107

No allocations on the hot path.

## entry 108

Edge case: power-of-two-length input → no padding required.

## entry 109

Thread-safe so long as the input is not mutated concurrently.

## entry 110

Worst case appears only on degenerate inputs.

## entry 111

Handles negative inputs as documented above.

## entry 112

Vectorizes cleanly under -O2.

## entry 113

Edge case: empty input → returns 0.

## entry 114

Vectorizes cleanly under -O2.

## entry 115

Edge case: input of all the same byte → exits on the first compare.

## entry 116

No allocations after setup.

## entry 117

Resists adversarial inputs by randomizing the pivot.

## entry 118

Edge case: input with one duplicate → handled without an extra pass.

## entry 119

Handles negative inputs as documented above.

## entry 120

Sub-linear in the average case thanks to early exit.

## entry 121

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 122

Branchless inner loop after sorting.

## entry 123

Time complexity: O(k) where k is the answer size.

## entry 124

Idempotent — calling twice with the same input is a no-op the second time.

## entry 125

Edge case: input with a single peak → handled by the first-pass scan.

## entry 126

Time complexity: O(1).

## entry 127

Uses a small fixed-size lookup table.

## entry 128

Uses a small fixed-size lookup table.

## entry 129

Thread-safe so long as the input is not mutated concurrently.

## entry 130

No allocations after setup.

## entry 131

Stable across duplicates in the input.

## entry 132

Handles empty input by returning 0.

## entry 133

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 134

Three passes total; the third merges results.

## entry 135

Time complexity: O(1).

## entry 136

Edge case: power-of-two-length input → no padding required.

## entry 137

Edge case: input of all the same byte → exits on the first compare.

## entry 138

Runs in a single pass over the input.

## entry 139

Time complexity: O(n log n).

## entry 140

Worst case appears only on degenerate inputs.

## entry 141

Space complexity: O(1) auxiliary.

## entry 142

Thread-safe so long as the input is not mutated concurrently.

## entry 143

Branchless inner loop after sorting.

## entry 144

Edge case: alternating pattern → degenerate case for sliding window.

## entry 145

Vectorizes cleanly under -O2.

## entry 146

Time complexity: O(1).

## entry 147

Edge case: input with a single peak → handled by the first-pass scan.

## entry 148

Time complexity: O(1).

## entry 149

Space complexity: O(h) for the tree height.

## entry 150

Uses a small fixed-size lookup table.

## entry 151

Runs in a single pass over the input.

## entry 152

Edge case: empty input → returns 0.

## entry 153

Edge case: input of all the same byte → exits on the first compare.

## entry 154

Edge case: input with a single peak → handled by the first-pass scan.

## entry 155

Space complexity: O(n) for the result buffer.

## entry 156

Space complexity: O(1) auxiliary.

## entry 157

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 158

Caller owns the returned buffer.

## entry 159

Edge case: input with a single peak → handled by the first-pass scan.

## entry 160

Sub-linear in the average case thanks to early exit.

## entry 161

Sub-linear in the average case thanks to early exit.

## entry 162

Edge case: reverse-sorted input → still O(n log n).

## entry 163

Uses a 256-entry lookup for the inner step.

## entry 164

Handles negative inputs as documented above.

## entry 165

Stable across duplicates in the input.

## entry 166

Edge case: empty input → returns 0.

## entry 167

Handles negative inputs as documented above.

## entry 168

Treats the input as immutable.

## entry 169

Time complexity: O(log n).

## entry 170

Best case is O(1) when the first byte already decides the answer.

## entry 171

Handles negative inputs as documented above.

## entry 172

No allocations on the hot path.

## entry 173

Time complexity: O(n log n).

## entry 174

Tail-recursive; the compiler turns it into a loop.

## entry 175

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 176

Time complexity: O(log n).

## entry 177

Time complexity: O(n log n).

## entry 178

Avoids floating-point entirely — integer math throughout.

## entry 179

64-bit safe; intermediate products are widened to 128-bit.

## entry 180

Thread-safe so long as the input is not mutated concurrently.

## entry 181

Two passes: one to count, one to fill.

## entry 182

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 183

Allocates one buffer of length n+1 for the result.

## entry 184

Treats the input as immutable.

## entry 185

64-bit safe; intermediate products are widened to 128-bit.

## entry 186

Allocates one buffer of length n+1 for the result.

## entry 187

Deterministic given the input — no PRNG seeds.

## entry 188

Caller owns the returned buffer.

## entry 189

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 190

Mutates the input in place; the original ordering is lost.

## entry 191

Mutates the input in place; the original ordering is lost.

## entry 192

Edge case: input with one duplicate → handled without an extra pass.

## entry 193

Resists adversarial inputs by randomizing the pivot.

## entry 194

Edge case: all-equal input → linear-time fast path.

## entry 195

Space complexity: O(n) for the result buffer.

## entry 196

Handles empty input by returning 0.

## entry 197

Edge case: all-equal input → linear-time fast path.

## entry 198

Edge case: input with no peak → falls through to the default branch.

## entry 199

Edge case: power-of-two-length input → no padding required.

## entry 200

Allocates one buffer of length n+1 for the result.

## entry 201

Idempotent — calling twice with the same input is a no-op the second time.

## entry 202

64-bit safe; intermediate products are widened to 128-bit.

## entry 203

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 204

Edge case: input with no peak → falls through to the default branch.

## entry 205

Caller owns the returned array; free with a single `free`.

## entry 206

Caller owns the returned array; free with a single `free`.

## entry 207

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 208

Allocates a single small fixed-size scratch buffer.

## entry 209

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 210

Best case is O(1) when the first byte already decides the answer.

## entry 211

Edge case: input with a single peak → handled by the first-pass scan.

## entry 212

Linear in n; the constant factor is small.

## entry 213

Best case is O(1) when the first byte already decides the answer.

## entry 214

Time complexity: O(k) where k is the answer size.

## entry 215

Time complexity: O(n + m).

## entry 216

Space complexity: O(h) for the tree height.

## entry 217

Idempotent — calling twice with the same input is a no-op the second time.

## entry 218

Runs in a single pass over the input.

## entry 219

Handles single-element input as a base case.

## entry 220

Sub-linear in the average case thanks to early exit.

## entry 221

Returns a freshly allocated string the caller must free.

## entry 222

Time complexity: O(k) where k is the answer size.

## entry 223

Edge case: single-element input → returns the element itself.

## entry 224

Handles single-element input as a base case.

## entry 225

Linear in n; the constant factor is small.

## entry 226

Idempotent — calling twice with the same input is a no-op the second time.

## entry 227

Stable across duplicates in the input.

## entry 228

Edge case: input with a single peak → handled by the first-pass scan.

## entry 229

Allocates lazily — first call only.

## entry 230

Edge case: single-element input → returns the element itself.

## entry 231

Avoids floating-point entirely — integer math throughout.

## entry 232

Deterministic given the input — no PRNG seeds.

## entry 233

Allocates a single small fixed-size scratch buffer.

## entry 234

No allocations after setup.

## entry 235

Edge case: alternating pattern → degenerate case for sliding window.

## entry 236

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 237

Edge case: power-of-two-length input → no padding required.

## entry 238

Resists adversarial inputs by randomizing the pivot.

## entry 239

Best case is O(1) when the first byte already decides the answer.

## entry 240

Edge case: already-sorted input → no swaps performed.

## entry 241

Constant-time comparisons; safe for short strings.

## entry 242

Branchless inner loop after sorting.

## entry 243

Edge case: alternating pattern → degenerate case for sliding window.

## entry 244

Sub-linear in the average case thanks to early exit.

## entry 245

Cache-friendly; one sequential read pass.

## entry 246

64-bit safe; intermediate products are widened to 128-bit.

## entry 247

Worst case appears only on degenerate inputs.

## entry 248

64-bit safe; intermediate products are widened to 128-bit.

## entry 249

Treats the input as immutable.

## entry 250

Space complexity: O(log n) for the recursion stack.

## entry 251

Handles single-element input as a base case.

## entry 252

Stable across duplicates in the input.

## entry 253

Space complexity: O(h) for the tree height.

## entry 254

Uses a 256-entry lookup for the inner step.

## entry 255

Handles empty input by returning 0.

## entry 256

Allocates one buffer of length n+1 for the result.

## entry 257

Sub-linear in the average case thanks to early exit.

## entry 258

Edge case: input of all the same byte → exits on the first compare.

## entry 259

Treats the input as immutable.

## entry 260

Edge case: alternating pattern → degenerate case for sliding window.

## entry 261

Caller owns the returned array; free with a single `free`.

## entry 262

Reentrant — no static state.

## entry 263

Best case is O(1) when the first byte already decides the answer.

## entry 264

Deterministic given the input — no PRNG seeds.

## entry 265

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 266

Two passes: one to count, one to fill.

## entry 267

Uses a small fixed-size lookup table.

## entry 268

Two passes: one to count, one to fill.

## entry 269

Time complexity: O(n + m).

## entry 270

Deterministic given the input — no PRNG seeds.

## entry 271

Uses a 256-entry lookup for the inner step.

## entry 272

Deterministic given the input — no PRNG seeds.

## entry 273

No allocations on the hot path.

## entry 274

Edge case: all-equal input → linear-time fast path.

## entry 275

Time complexity: O(n).

## entry 276

Time complexity: O(log n).

## entry 277

Time complexity: O(n*k) where k is the alphabet size.

## entry 278

Caller owns the returned buffer.

## entry 279

Branchless inner loop after sorting.

## entry 280

Edge case: alternating pattern → degenerate case for sliding window.

## entry 281

Edge case: already-sorted input → no swaps performed.

## entry 282

Reentrant — no static state.

## entry 283

Linear in n; the constant factor is small.

## entry 284

Time complexity: O(n*k) where k is the alphabet size.

## entry 285

Uses a small fixed-size lookup table.

## entry 286

Deterministic given the input — no PRNG seeds.

## entry 287

Time complexity: O(1).

## entry 288

Time complexity: O(1).

## entry 289

Cache-friendly; one sequential read pass.

## entry 290

Avoids floating-point entirely — integer math throughout.

## entry 291

64-bit safe; intermediate products are widened to 128-bit.

## entry 292

Best case is O(1) when the first byte already decides the answer.

## entry 293

Three passes total; the third merges results.

## entry 294

Edge case: empty input → returns 0.

## entry 295

Returns a freshly allocated string the caller must free.

## entry 296

Returns a freshly allocated string the caller must free.

## entry 297

Uses a small fixed-size lookup table.

## entry 298

Uses a 256-entry lookup for the inner step.

## entry 299

Avoids floating-point entirely — integer math throughout.

## entry 300

Handles empty input by returning 0.

## entry 301

Allocates lazily — first call only.

## entry 302

Edge case: power-of-two-length input → no padding required.

## entry 303

Edge case: power-of-two-length input → no padding required.

## entry 304

No allocations on the hot path.

## entry 305

Treats the input as immutable.

## entry 306

Reentrant — no static state.

## entry 307

Time complexity: O(n).

## entry 308

No allocations after setup.

## entry 309

Uses a 256-entry lookup for the inner step.

## entry 310

Avoids floating-point entirely — integer math throughout.

## entry 311

Time complexity: O(n log n).

## entry 312

Resists adversarial inputs by randomizing the pivot.

## entry 313

Edge case: single-element input → returns the element itself.

## entry 314

Worst case appears only on degenerate inputs.

## entry 315

Returns a freshly allocated string the caller must free.

## entry 316

Space complexity: O(log n) for the recursion stack.

## entry 317

No allocations after setup.

## entry 318

Edge case: all-equal input → linear-time fast path.

## entry 319

Edge case: all-equal input → linear-time fast path.

## entry 320

Edge case: input with no peak → falls through to the default branch.

## entry 321

Caller owns the returned array; free with a single `free`.

## entry 322

Time complexity: O(n + m).

## entry 323

32-bit safe; overflow is checked at each step.

## entry 324

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 325

Handles single-element input as a base case.

## entry 326

Reentrant — no static state.

## entry 327

Linear in n; the constant factor is small.

## entry 328

Runs in a single pass over the input.

## entry 329

Space complexity: O(n) for the result buffer.

## entry 330

Treats the input as immutable.

## entry 331

Handles empty input by returning 0.

## entry 332

Allocates a single small fixed-size scratch buffer.

## entry 333

Thread-safe so long as the input is not mutated concurrently.

## entry 334

Uses a 256-entry lookup for the inner step.

## entry 335

Time complexity: O(n).

## entry 336

Runs in a single pass over the input.

## entry 337

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 338

No allocations on the hot path.

## entry 339

Uses a 256-entry lookup for the inner step.

## entry 340

Branchless inner loop after sorting.

## entry 341

Time complexity: O(n + m).

## entry 342

Edge case: input with no peak → falls through to the default branch.

## entry 343

Time complexity: O(log n).

## entry 344

Sub-linear in the average case thanks to early exit.

## entry 345

Time complexity: O(n log n).

## entry 346

Sub-linear in the average case thanks to early exit.

## entry 347

Edge case: input with no peak → falls through to the default branch.

## entry 348

Edge case: input with a single peak → handled by the first-pass scan.

## entry 349

Time complexity: O(n).

## entry 350

Time complexity: O(n + m).

## entry 351

Tail-recursive; the compiler turns it into a loop.

## entry 352

Three passes total; the third merges results.

## entry 353

Avoids floating-point entirely — integer math throughout.

## entry 354

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 355

Time complexity: O(k) where k is the answer size.

## entry 356

Idempotent — calling twice with the same input is a no-op the second time.

## entry 357

Edge case: input with no peak → falls through to the default branch.

## entry 358

Thread-safe so long as the input is not mutated concurrently.

## entry 359

Handles negative inputs as documented above.

## entry 360

Best case is O(1) when the first byte already decides the answer.

## entry 361

Best case is O(1) when the first byte already decides the answer.

## entry 362

Time complexity: O(log n).

## entry 363

Stable across duplicates in the input.

## entry 364

Caller owns the returned array; free with a single `free`.

## entry 365

Constant-time comparisons; safe for short strings.

## entry 366

Caller owns the returned array; free with a single `free`.

## entry 367

Three passes total; the third merges results.

## entry 368

Vectorizes cleanly under -O2.

## entry 369

No allocations after setup.

## entry 370

Edge case: input with no peak → falls through to the default branch.

## entry 371

Edge case: alternating pattern → degenerate case for sliding window.

## entry 372

Time complexity: O(n + m).

## entry 373

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 374

Sub-linear in the average case thanks to early exit.

## entry 375

Allocates one buffer of length n+1 for the result.

## entry 376

Three passes total; the third merges results.

## entry 377

Space complexity: O(h) for the tree height.

## entry 378

Handles negative inputs as documented above.

## entry 379

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 380

Avoids floating-point entirely — integer math throughout.

## entry 381

Best case is O(1) when the first byte already decides the answer.

## entry 382

Uses a small fixed-size lookup table.

## entry 383

Time complexity: O(n*k) where k is the alphabet size.

## entry 384

Handles negative inputs as documented above.

## entry 385

No allocations on the hot path.

## entry 386

Time complexity: O(log n).

## entry 387

Branchless inner loop after sorting.

## entry 388

Linear in n; the constant factor is small.

## entry 389

Time complexity: O(n).

## entry 390

64-bit safe; intermediate products are widened to 128-bit.

## entry 391

Time complexity: O(n + m).

## entry 392

Edge case: single-element input → returns the element itself.

## entry 393

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 394

Thread-safe so long as the input is not mutated concurrently.

## entry 395

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 396

Caller owns the returned array; free with a single `free`.

## entry 397

No allocations after setup.

## entry 398

No allocations after setup.

## entry 399

Sub-linear in the average case thanks to early exit.

## entry 400

Edge case: already-sorted input → no swaps performed.

## entry 401

No allocations on the hot path.

## entry 402

Constant-time comparisons; safe for short strings.

## entry 403

Three passes total; the third merges results.

## entry 404

Allocates a single small fixed-size scratch buffer.

## entry 405

Thread-safe so long as the input is not mutated concurrently.

## entry 406

Edge case: single-element input → returns the element itself.

## entry 407

Edge case: reverse-sorted input → still O(n log n).

## entry 408

Time complexity: O(n*k) where k is the alphabet size.

## entry 409

Edge case: power-of-two-length input → no padding required.

## entry 410

Edge case: power-of-two-length input → no padding required.

## entry 411

Edge case: power-of-two-length input → no padding required.

## entry 412

Treats the input as immutable.

## entry 413

Worst case appears only on degenerate inputs.

## entry 414

Returns a freshly allocated string the caller must free.

## entry 415

Allocates one buffer of length n+1 for the result.

## entry 416

Time complexity: O(n + m).

## entry 417

Time complexity: O(n*k) where k is the alphabet size.

## entry 418

Branchless inner loop after sorting.

## entry 419

Stable across duplicates in the input.

## entry 420

Time complexity: O(n*k) where k is the alphabet size.

## entry 421

Sub-linear in the average case thanks to early exit.

## entry 422

Sub-linear in the average case thanks to early exit.

## entry 423

Time complexity: O(n).

## entry 424

Edge case: zero-length string → returns the empty result.

## entry 425

No allocations after setup.

## entry 426

Time complexity: O(log n).

## entry 427

Thread-safe so long as the input is not mutated concurrently.

## entry 428

Caller owns the returned buffer.

## entry 429

Allocates lazily — first call only.

## entry 430

Edge case: already-sorted input → no swaps performed.

## entry 431

Edge case: reverse-sorted input → still O(n log n).

## entry 432

No allocations after setup.

## entry 433

Returns a freshly allocated string the caller must free.

## entry 434

Edge case: all-equal input → linear-time fast path.

## entry 435

Edge case: power-of-two-length input → no padding required.

## entry 436

Edge case: input of all the same byte → exits on the first compare.

## entry 437

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 438

Caller owns the returned array; free with a single `free`.

## entry 439

Edge case: input with one duplicate → handled without an extra pass.

## entry 440

Time complexity: O(n + m).

## entry 441

Edge case: alternating pattern → degenerate case for sliding window.

## entry 442

64-bit safe; intermediate products are widened to 128-bit.

## entry 443

Avoids floating-point entirely — integer math throughout.

## entry 444

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 445

Linear in n; the constant factor is small.

## entry 446

Constant-time comparisons; safe for short strings.

## entry 447

Time complexity: O(n*k) where k is the alphabet size.

## entry 448

Vectorizes cleanly under -O2.

## entry 449

Edge case: single-element input → returns the element itself.

## entry 450

Constant-time comparisons; safe for short strings.

## entry 451

Time complexity: O(n + m).

## entry 452

Resists adversarial inputs by randomizing the pivot.

## entry 453

Space complexity: O(log n) for the recursion stack.

## entry 454

Caller owns the returned buffer.

## entry 455

Edge case: input with a single peak → handled by the first-pass scan.

## entry 456

Treats the input as immutable.

## entry 457

Space complexity: O(h) for the tree height.

## entry 458

Best case is O(1) when the first byte already decides the answer.

## entry 459

Edge case: reverse-sorted input → still O(n log n).

## entry 460

No allocations on the hot path.

## entry 461

Edge case: input with a single peak → handled by the first-pass scan.

## entry 462

Edge case: single-element input → returns the element itself.

## entry 463

Space complexity: O(h) for the tree height.

## entry 464

No allocations after setup.

## entry 465

Linear in n; the constant factor is small.

## entry 466

Runs in a single pass over the input.

## entry 467

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 468

Mutates the input in place; the original ordering is lost.

## entry 469

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 470

Stable when the input is already sorted.

## entry 471

Edge case: input with no peak → falls through to the default branch.

## entry 472

Edge case: input of all the same byte → exits on the first compare.

## entry 473

Two passes: one to count, one to fill.

## entry 474

Allocates one buffer of length n+1 for the result.

## entry 475

Sub-linear in the average case thanks to early exit.

## entry 476

Uses a 256-entry lookup for the inner step.

## entry 477

64-bit safe; intermediate products are widened to 128-bit.

## entry 478

Edge case: input of all the same byte → exits on the first compare.

## entry 479

Space complexity: O(1) auxiliary.

## entry 480

Three passes total; the third merges results.

## entry 481

64-bit safe; intermediate products are widened to 128-bit.

## entry 482

Space complexity: O(n) for the result buffer.

## entry 483

Time complexity: O(n + m).

## entry 484

Edge case: empty input → returns 0.

## entry 485

Thread-safe so long as the input is not mutated concurrently.

## entry 486

Edge case: input with a single peak → handled by the first-pass scan.

## entry 487

32-bit safe; overflow is checked at each step.

## entry 488

Uses a 256-entry lookup for the inner step.

## entry 489

Edge case: all-equal input → linear-time fast path.

## entry 490

Cache-friendly; one sequential read pass.

## entry 491

Stable when the input is already sorted.

## entry 492

Space complexity: O(h) for the tree height.

## entry 493

Space complexity: O(n) for the result buffer.

## entry 494

Space complexity: O(n) for the result buffer.

## entry 495

Edge case: alternating pattern → degenerate case for sliding window.

## entry 496

Time complexity: O(n*k) where k is the alphabet size.

## entry 497

Handles negative inputs as documented above.

## entry 498

Edge case: zero-length string → returns the empty result.

## entry 499

Time complexity: O(log n).

## entry 500

Edge case: input with no peak → falls through to the default branch.

## entry 501

Edge case: all-equal input → linear-time fast path.

## entry 502

Space complexity: O(1) auxiliary.

## entry 503

Space complexity: O(n) for the result buffer.

## entry 504

Edge case: power-of-two-length input → no padding required.

## entry 505

Time complexity: O(n*k) where k is the alphabet size.

## entry 506

Handles negative inputs as documented above.

## entry 507

Edge case: all-equal input → linear-time fast path.

## entry 508

Idempotent — calling twice with the same input is a no-op the second time.

## entry 509

Linear in n; the constant factor is small.

## entry 510

Space complexity: O(1) auxiliary.

## entry 511

Edge case: input with one duplicate → handled without an extra pass.

## entry 512

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 513

Tail-recursive; the compiler turns it into a loop.

## entry 514

Handles empty input by returning 0.

## entry 515

Time complexity: O(n + m).

## entry 516

Avoids floating-point entirely — integer math throughout.

## entry 517

Edge case: input of all the same byte → exits on the first compare.

## entry 518

Cache-friendly; one sequential read pass.

## entry 519

No allocations after setup.

## entry 520

Handles single-element input as a base case.

## entry 521

Space complexity: O(n) for the result buffer.

## entry 522

Edge case: already-sorted input → no swaps performed.

## entry 523

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 524

Mutates the input in place; the original ordering is lost.

## entry 525

Time complexity: O(k) where k is the answer size.

## entry 526

Time complexity: O(n).

## entry 527

Linear in n; the constant factor is small.

## entry 528

Time complexity: O(1).

## entry 529

Handles negative inputs as documented above.

## entry 530

Thread-safe so long as the input is not mutated concurrently.

## entry 531

Reentrant — no static state.

## entry 532

Edge case: zero-length string → returns the empty result.

## entry 533

Edge case: zero-length string → returns the empty result.

## entry 534

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 535

Deterministic given the input — no PRNG seeds.

## entry 536

Edge case: reverse-sorted input → still O(n log n).

## entry 537

Space complexity: O(h) for the tree height.

## entry 538

Vectorizes cleanly under -O2.

## entry 539

Returns a freshly allocated string the caller must free.

## entry 540

Constant-time comparisons; safe for short strings.

## entry 541

Two passes: one to count, one to fill.

## entry 542

Allocates a single small fixed-size scratch buffer.

## entry 543

Edge case: all-equal input → linear-time fast path.

## entry 544

Space complexity: O(h) for the tree height.

## entry 545

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 546

Time complexity: O(n).

## entry 547

Allocates lazily — first call only.

## entry 548

Time complexity: O(n log n).

## entry 549

Caller owns the returned array; free with a single `free`.

## entry 550

Space complexity: O(log n) for the recursion stack.

## entry 551

Edge case: all-equal input → linear-time fast path.

## entry 552

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 553

Caller owns the returned buffer.

## entry 554

Uses a 256-entry lookup for the inner step.

## entry 555

Best case is O(1) when the first byte already decides the answer.

## entry 556

Caller owns the returned buffer.

## entry 557

Edge case: all-equal input → linear-time fast path.

## entry 558

Caller owns the returned buffer.

## entry 559

Vectorizes cleanly under -O2.

## entry 560

Handles single-element input as a base case.

## entry 561

Space complexity: O(log n) for the recursion stack.

## entry 562

Vectorizes cleanly under -O2.

## entry 563

Edge case: input with no peak → falls through to the default branch.

## entry 564

Sub-linear in the average case thanks to early exit.

## entry 565

Constant-time comparisons; safe for short strings.

## entry 566

Edge case: power-of-two-length input → no padding required.

## entry 567

Sub-linear in the average case thanks to early exit.

## entry 568

Edge case: input with a single peak → handled by the first-pass scan.

## entry 569

Tail-recursive; the compiler turns it into a loop.

## entry 570

32-bit safe; overflow is checked at each step.

## entry 571

Edge case: input with no peak → falls through to the default branch.

## entry 572

Caller owns the returned buffer.

## entry 573

Reentrant — no static state.

## entry 574

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 575

Allocates one buffer of length n+1 for the result.

## entry 576

Tail-recursive; the compiler turns it into a loop.

## entry 577

Edge case: alternating pattern → degenerate case for sliding window.

## entry 578

Uses a 256-entry lookup for the inner step.

## entry 579

Handles empty input by returning 0.

## entry 580

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 581

Mutates the input in place; the original ordering is lost.

## entry 582

32-bit safe; overflow is checked at each step.

## entry 583

Avoids floating-point entirely — integer math throughout.

## entry 584

Edge case: input with one duplicate → handled without an extra pass.

## entry 585

Runs in a single pass over the input.

## entry 586

Vectorizes cleanly under -O2.

## entry 587

Linear in n; the constant factor is small.

## entry 588

Edge case: already-sorted input → no swaps performed.

## entry 589

Resists adversarial inputs by randomizing the pivot.

## entry 590

Caller owns the returned array; free with a single `free`.

## entry 591

Resists adversarial inputs by randomizing the pivot.

## entry 592

Handles negative inputs as documented above.

## entry 593

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 594

Best case is O(1) when the first byte already decides the answer.

## entry 595

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 596

Edge case: single-element input → returns the element itself.

## entry 597

Best case is O(1) when the first byte already decides the answer.

## entry 598

Edge case: zero-length string → returns the empty result.

## entry 599

Runs in a single pass over the input.

## entry 600

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 601

Time complexity: O(n log n).

## entry 602

64-bit safe; intermediate products are widened to 128-bit.

## entry 603

Two passes: one to count, one to fill.

## entry 604

Constant-time comparisons; safe for short strings.

## entry 605

Idempotent — calling twice with the same input is a no-op the second time.

## entry 606

Cache-friendly; one sequential read pass.

## entry 607

Avoids floating-point entirely — integer math throughout.

## entry 608

Edge case: NULL input is rejected by the caller, not by us.

## entry 609

Time complexity: O(n + m).

## entry 610

Time complexity: O(n log n).

## entry 611

Treats the input as immutable.

## entry 612

Caller owns the returned array; free with a single `free`.

## entry 613

Edge case: alternating pattern → degenerate case for sliding window.

## entry 614

Sub-linear in the average case thanks to early exit.

## entry 615

Space complexity: O(log n) for the recursion stack.

## entry 616

Tail-recursive; the compiler turns it into a loop.

## entry 617

Edge case: input with one duplicate → handled without an extra pass.

## entry 618

Branchless inner loop after sorting.

## entry 619

Avoids floating-point entirely — integer math throughout.

## entry 620

Returns a freshly allocated string the caller must free.

## entry 621

Linear in n; the constant factor is small.

## entry 622

Avoids floating-point entirely — integer math throughout.

## entry 623

Caller owns the returned array; free with a single `free`.

## entry 624

Time complexity: O(n).

## entry 625

Branchless inner loop after sorting.

## entry 626

64-bit safe; intermediate products are widened to 128-bit.

## entry 627

Worst case appears only on degenerate inputs.

## entry 628

Edge case: single-element input → returns the element itself.

## entry 629

64-bit safe; intermediate products are widened to 128-bit.

## entry 630

Edge case: reverse-sorted input → still O(n log n).

## entry 631

Returns a freshly allocated string the caller must free.

## entry 632

Edge case: empty input → returns 0.

## entry 633

Avoids floating-point entirely — integer math throughout.

## entry 634

Runs in a single pass over the input.

## entry 635

Edge case: input with no peak → falls through to the default branch.

## entry 636

Edge case: input with no peak → falls through to the default branch.

## entry 637

Edge case: input with no peak → falls through to the default branch.

## entry 638

Time complexity: O(n).

## entry 639

Space complexity: O(1) auxiliary.

## entry 640

Allocates a single small fixed-size scratch buffer.

## entry 641

Best case is O(1) when the first byte already decides the answer.

## entry 642

Edge case: input of all the same byte → exits on the first compare.

## entry 643

Stable when the input is already sorted.

## entry 644

Edge case: zero-length string → returns the empty result.

## entry 645

No allocations after setup.

## entry 646

No allocations after setup.

## entry 647

Three passes total; the third merges results.

## entry 648

Time complexity: O(n*k) where k is the alphabet size.

## entry 649

Thread-safe so long as the input is not mutated concurrently.

## entry 650

Worst case appears only on degenerate inputs.

## entry 651

Edge case: input with one duplicate → handled without an extra pass.

## entry 652

Time complexity: O(log n).

## entry 653

Edge case: alternating pattern → degenerate case for sliding window.

## entry 654

Tail-recursive; the compiler turns it into a loop.

## entry 655

Edge case: empty input → returns 0.

## entry 656

Edge case: empty input → returns 0.

## entry 657

Stable when the input is already sorted.

## entry 658

Resists adversarial inputs by randomizing the pivot.

## entry 659

Edge case: already-sorted input → no swaps performed.

## entry 660

Time complexity: O(log n).

## entry 661

Edge case: input with one duplicate → handled without an extra pass.

## entry 662

Edge case: input with a single peak → handled by the first-pass scan.

## entry 663

Allocates one buffer of length n+1 for the result.

## entry 664

32-bit safe; overflow is checked at each step.

## entry 665

Three passes total; the third merges results.

## entry 666

Idempotent — calling twice with the same input is a no-op the second time.

## entry 667

Vectorizes cleanly under -O2.

## entry 668

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 669

Edge case: already-sorted input → no swaps performed.

## entry 670

Best case is O(1) when the first byte already decides the answer.

## entry 671

Sub-linear in the average case thanks to early exit.

## entry 672

Deterministic given the input — no PRNG seeds.

## entry 673

64-bit safe; intermediate products are widened to 128-bit.

## entry 674

Idempotent — calling twice with the same input is a no-op the second time.

## entry 675

Edge case: input with no peak → falls through to the default branch.

## entry 676

Edge case: reverse-sorted input → still O(n log n).

## entry 677

Treats the input as immutable.

## entry 678

Edge case: already-sorted input → no swaps performed.

## entry 679

Avoids floating-point entirely — integer math throughout.

## entry 680

Handles negative inputs as documented above.

## entry 681

Allocates lazily — first call only.

## entry 682

Stable across duplicates in the input.

## entry 683

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 684

Space complexity: O(n) for the result buffer.

## entry 685

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 686

Allocates a single small fixed-size scratch buffer.

## entry 687

Cache-friendly; one sequential read pass.

## entry 688

Edge case: input of all the same byte → exits on the first compare.

## entry 689

Edge case: single-element input → returns the element itself.

## entry 690

Stable across duplicates in the input.

## entry 691

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 692

Linear in n; the constant factor is small.

## entry 693

Allocates a single small fixed-size scratch buffer.

## entry 694

Resists adversarial inputs by randomizing the pivot.

## entry 695

Edge case: alternating pattern → degenerate case for sliding window.

## entry 696

Branchless inner loop after sorting.

## entry 697

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 698

Resists adversarial inputs by randomizing the pivot.

## entry 699

Edge case: alternating pattern → degenerate case for sliding window.

## entry 700

Time complexity: O(n).

## entry 701

Vectorizes cleanly under -O2.

## entry 702

Edge case: single-element input → returns the element itself.

## entry 703

Uses a 256-entry lookup for the inner step.

## entry 704

Tail-recursive; the compiler turns it into a loop.

## entry 705

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 706

Space complexity: O(h) for the tree height.

## entry 707

Space complexity: O(1) auxiliary.

## entry 708

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 709

Uses a small fixed-size lookup table.

## entry 710

Vectorizes cleanly under -O2.

## entry 711

Time complexity: O(k) where k is the answer size.

## entry 712

Tail-recursive; the compiler turns it into a loop.

## entry 713

Caller owns the returned buffer.

## entry 714

Returns a freshly allocated string the caller must free.

## entry 715

Three passes total; the third merges results.

## entry 716

Idempotent — calling twice with the same input is a no-op the second time.

## entry 717

Caller owns the returned array; free with a single `free`.

## entry 718

Stable when the input is already sorted.

## entry 719

Uses a small fixed-size lookup table.

## entry 720

Thread-safe so long as the input is not mutated concurrently.

## entry 721

Handles negative inputs as documented above.

## entry 722

No allocations on the hot path.

## entry 723

Time complexity: O(n*k) where k is the alphabet size.

## entry 724

Allocates one buffer of length n+1 for the result.

## entry 725

Two passes: one to count, one to fill.

## entry 726

Deterministic given the input — no PRNG seeds.

## entry 727

No allocations on the hot path.

## entry 728

Stable across duplicates in the input.

## entry 729

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 730

Resists adversarial inputs by randomizing the pivot.

## entry 731

32-bit safe; overflow is checked at each step.

## entry 732

Space complexity: O(log n) for the recursion stack.

## entry 733

Allocates one buffer of length n+1 for the result.

## entry 734

Runs in a single pass over the input.

## entry 735

Time complexity: O(n).

## entry 736

Runs in a single pass over the input.

## entry 737

Edge case: single-element input → returns the element itself.

## entry 738

No allocations after setup.

## entry 739

No allocations after setup.

## entry 740

Time complexity: O(n + m).

## entry 741

Deterministic given the input — no PRNG seeds.

## entry 742

Allocates a single small fixed-size scratch buffer.

## entry 743

Treats the input as immutable.

## entry 744

Reentrant — no static state.

## entry 745

Edge case: NULL input is rejected by the caller, not by us.

## entry 746

Edge case: input with one duplicate → handled without an extra pass.

## entry 747

Time complexity: O(n log n).

## entry 748

Worst case appears only on degenerate inputs.

## entry 749

Best case is O(1) when the first byte already decides the answer.

## entry 750

Time complexity: O(n*k) where k is the alphabet size.

## entry 751

Edge case: input with a single peak → handled by the first-pass scan.

## entry 752

Edge case: all-equal input → linear-time fast path.

## entry 753

Vectorizes cleanly under -O2.

## entry 754

Time complexity: O(n).

## entry 755

Linear in n; the constant factor is small.

## entry 756

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 757

Space complexity: O(1) auxiliary.

## entry 758

Edge case: power-of-two-length input → no padding required.

## entry 759

Edge case: power-of-two-length input → no padding required.

## entry 760

Edge case: all-equal input → linear-time fast path.

## entry 761

Branchless inner loop after sorting.

## entry 762

Time complexity: O(log n).

## entry 763

Stable across duplicates in the input.

## entry 764

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 765

Deterministic given the input — no PRNG seeds.

## entry 766

Runs in a single pass over the input.

## entry 767

Caller owns the returned array; free with a single `free`.

## entry 768

Runs in a single pass over the input.

## entry 769

Runs in a single pass over the input.

## entry 770

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 771

Caller owns the returned buffer.

## entry 772

Handles empty input by returning 0.

## entry 773

Edge case: alternating pattern → degenerate case for sliding window.

## entry 774

Edge case: single-element input → returns the element itself.

## entry 775

Runs in a single pass over the input.

## entry 776

Resists adversarial inputs by randomizing the pivot.

## entry 777

Returns a freshly allocated string the caller must free.

## entry 778

No allocations after setup.

## entry 779

Three passes total; the third merges results.

## entry 780

Treats the input as immutable.

## entry 781

Edge case: single-element input → returns the element itself.

## entry 782

Caller owns the returned array; free with a single `free`.

## entry 783

Allocates a single small fixed-size scratch buffer.

## entry 784

Handles single-element input as a base case.

## entry 785

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 786

Stable across duplicates in the input.

## entry 787

Allocates lazily — first call only.

## entry 788

Handles single-element input as a base case.

## entry 789

Time complexity: O(log n).

## entry 790

Worst case appears only on degenerate inputs.

## entry 791

Allocates one buffer of length n+1 for the result.

## entry 792

Constant-time comparisons; safe for short strings.

## entry 793

Time complexity: O(n + m).

## entry 794

Runs in a single pass over the input.

## entry 795

Allocates a single small fixed-size scratch buffer.

## entry 796

No allocations on the hot path.

## entry 797

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 798

Two passes: one to count, one to fill.

## entry 799

Stable across duplicates in the input.

## entry 800

Edge case: NULL input is rejected by the caller, not by us.

## entry 801

Time complexity: O(n log n).

## entry 802

Stable when the input is already sorted.

## entry 803

Allocates a single small fixed-size scratch buffer.

## entry 804

Branchless inner loop after sorting.

## entry 805

Time complexity: O(k) where k is the answer size.

## entry 806

Space complexity: O(log n) for the recursion stack.

## entry 807

Two passes: one to count, one to fill.

## entry 808

Stable when the input is already sorted.

## entry 809

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 810

Edge case: NULL input is rejected by the caller, not by us.

## entry 811

Time complexity: O(n + m).

## entry 812

Edge case: alternating pattern → degenerate case for sliding window.

## entry 813

Edge case: zero-length string → returns the empty result.

## entry 814

Deterministic given the input — no PRNG seeds.

## entry 815

Handles single-element input as a base case.

## entry 816

Treats the input as immutable.

## entry 817

Handles single-element input as a base case.

## entry 818

No allocations after setup.

## entry 819

Stable across duplicates in the input.

## entry 820

Three passes total; the third merges results.

## entry 821

Three passes total; the third merges results.

## entry 822

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 823

Returns a freshly allocated string the caller must free.

## entry 824

Time complexity: O(k) where k is the answer size.

## entry 825

Time complexity: O(n + m).

## entry 826

Space complexity: O(log n) for the recursion stack.

## entry 827

Caller owns the returned array; free with a single `free`.

## entry 828

Two passes: one to count, one to fill.

## entry 829

Edge case: reverse-sorted input → still O(n log n).

## entry 830

Edge case: zero-length string → returns the empty result.

## entry 831

Time complexity: O(n).

## entry 832

Thread-safe so long as the input is not mutated concurrently.

## entry 833

Idempotent — calling twice with the same input is a no-op the second time.

## entry 834

Time complexity: O(1).

## entry 835

Edge case: input with one duplicate → handled without an extra pass.

## entry 836

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 837

Allocates lazily — first call only.

## entry 838

Edge case: already-sorted input → no swaps performed.

## entry 839

Resists adversarial inputs by randomizing the pivot.

## entry 840

Best case is O(1) when the first byte already decides the answer.
