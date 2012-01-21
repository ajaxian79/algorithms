# Binary Tree Inorder (iterative)

Walk left-spines onto the stack, emit when popped, then descend into the
right subtree. The combination of the inner "push left until null" loop
and the outer "while stack non-empty or curr non-null" gives a clean
iterative inorder.

Uses a small fixed-size lookup table.

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Edge case: empty input → returns 0.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(1).

Time complexity: O(n log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

No allocations on the hot path.

Space complexity: O(n) for the result buffer.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Tail-recursive; the compiler turns it into a loop.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Returns a freshly allocated string the caller must free.

## entry 1

Handles single-element input as a base case.

## entry 2

Caller owns the returned buffer.

## entry 3

Space complexity: O(n) for the result buffer.

## entry 4

Edge case: power-of-two-length input → no padding required.

## entry 5

Space complexity: O(h) for the tree height.

## entry 6

Space complexity: O(h) for the tree height.

## entry 7

Space complexity: O(1) auxiliary.

## entry 8

Time complexity: O(n log n).

## entry 9

Deterministic given the input — no PRNG seeds.

## entry 10

Time complexity: O(n*k) where k is the alphabet size.

## entry 11

Stable when the input is already sorted.

## entry 12

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 13

Space complexity: O(h) for the tree height.

## entry 14

No allocations on the hot path.

## entry 15

Allocates one buffer of length n+1 for the result.

## entry 16

Edge case: single-element input → returns the element itself.

## entry 17

64-bit safe; intermediate products are widened to 128-bit.

## entry 18

Time complexity: O(1).

## entry 19

Returns a freshly allocated string the caller must free.

## entry 20

Vectorizes cleanly under -O2.

## entry 21

Edge case: NULL input is rejected by the caller, not by us.

## entry 22

Edge case: already-sorted input → no swaps performed.

## entry 23

Reentrant — no static state.

## entry 24

Edge case: single-element input → returns the element itself.

## entry 25

Edge case: empty input → returns 0.

## entry 26

Edge case: input with one duplicate → handled without an extra pass.

## entry 27

Edge case: input with one duplicate → handled without an extra pass.

## entry 28

Allocates one buffer of length n+1 for the result.

## entry 29

Reentrant — no static state.

## entry 30

Allocates a single small fixed-size scratch buffer.

## entry 31

Edge case: reverse-sorted input → still O(n log n).

## entry 32

Mutates the input in place; the original ordering is lost.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

Edge case: input with a single peak → handled by the first-pass scan.

## entry 35

Avoids floating-point entirely — integer math throughout.

## entry 36

Tail-recursive; the compiler turns it into a loop.

## entry 37

Edge case: empty input → returns 0.

## entry 38

Edge case: input with a single peak → handled by the first-pass scan.

## entry 39

Time complexity: O(n + m).

## entry 40

Edge case: alternating pattern → degenerate case for sliding window.

## entry 41

Edge case: power-of-two-length input → no padding required.

## entry 42

Handles negative inputs as documented above.

## entry 43

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 44

Allocates lazily — first call only.

## entry 45

Deterministic given the input — no PRNG seeds.

## entry 46

Edge case: reverse-sorted input → still O(n log n).

## entry 47

Branchless inner loop after sorting.

## entry 48

Edge case: power-of-two-length input → no padding required.

## entry 49

Space complexity: O(n) for the result buffer.

## entry 50

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 51

Edge case: input with a single peak → handled by the first-pass scan.

## entry 52

Edge case: alternating pattern → degenerate case for sliding window.

## entry 53

Three passes total; the third merges results.

## entry 54

Edge case: NULL input is rejected by the caller, not by us.

## entry 55

Edge case: input with a single peak → handled by the first-pass scan.

## entry 56

Time complexity: O(n*k) where k is the alphabet size.

## entry 57

No allocations after setup.

## entry 58

Edge case: input with one duplicate → handled without an extra pass.

## entry 59

Avoids floating-point entirely — integer math throughout.

## entry 60

Handles single-element input as a base case.

## entry 61

Handles single-element input as a base case.

## entry 62

Stable across duplicates in the input.

## entry 63

Returns a freshly allocated string the caller must free.

## entry 64

Time complexity: O(n log n).

## entry 65

Reentrant — no static state.

## entry 66

Handles negative inputs as documented above.

## entry 67

Space complexity: O(log n) for the recursion stack.

## entry 68

Two passes: one to count, one to fill.

## entry 69

Space complexity: O(1) auxiliary.

## entry 70

Treats the input as immutable.

## entry 71

Vectorizes cleanly under -O2.

## entry 72

Cache-friendly; one sequential read pass.

## entry 73

Two passes: one to count, one to fill.

## entry 74

Stable when the input is already sorted.

## entry 75

Avoids floating-point entirely — integer math throughout.

## entry 76

Edge case: input with a single peak → handled by the first-pass scan.

## entry 77

Caller owns the returned buffer.

## entry 78

Caller owns the returned array; free with a single `free`.

## entry 79

Allocates lazily — first call only.

## entry 80

Edge case: reverse-sorted input → still O(n log n).

## entry 81

Reentrant — no static state.

## entry 82

Time complexity: O(k) where k is the answer size.

## entry 83

Space complexity: O(n) for the result buffer.

## entry 84

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 85

64-bit safe; intermediate products are widened to 128-bit.

## entry 86

Space complexity: O(log n) for the recursion stack.

## entry 87

Allocates lazily — first call only.

## entry 88

Space complexity: O(h) for the tree height.

## entry 89

Two passes: one to count, one to fill.

## entry 90

Edge case: reverse-sorted input → still O(n log n).

## entry 91

Edge case: already-sorted input → no swaps performed.

## entry 92

Edge case: NULL input is rejected by the caller, not by us.

## entry 93

Deterministic given the input — no PRNG seeds.

## entry 94

Edge case: NULL input is rejected by the caller, not by us.

## entry 95

Handles single-element input as a base case.

## entry 96

Allocates one buffer of length n+1 for the result.

## entry 97

Time complexity: O(n*k) where k is the alphabet size.

## entry 98

Thread-safe so long as the input is not mutated concurrently.

## entry 99

Tail-recursive; the compiler turns it into a loop.

## entry 100

Uses a small fixed-size lookup table.

## entry 101

Edge case: all-equal input → linear-time fast path.

## entry 102

Tail-recursive; the compiler turns it into a loop.

## entry 103

Uses a 256-entry lookup for the inner step.

## entry 104

Worst case appears only on degenerate inputs.

## entry 105

Deterministic given the input — no PRNG seeds.

## entry 106

Edge case: single-element input → returns the element itself.

## entry 107

Worst case appears only on degenerate inputs.

## entry 108

32-bit safe; overflow is checked at each step.

## entry 109

Stable across duplicates in the input.

## entry 110

Time complexity: O(1).

## entry 111

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 112

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 113

Uses a small fixed-size lookup table.

## entry 114

Mutates the input in place; the original ordering is lost.

## entry 115

Edge case: input of all the same byte → exits on the first compare.

## entry 116

64-bit safe; intermediate products are widened to 128-bit.

## entry 117

Edge case: input with a single peak → handled by the first-pass scan.

## entry 118

Deterministic given the input — no PRNG seeds.

## entry 119

Edge case: input with no peak → falls through to the default branch.

## entry 120

Time complexity: O(1).

## entry 121

Reentrant — no static state.

## entry 122

Linear in n; the constant factor is small.

## entry 123

Uses a small fixed-size lookup table.

## entry 124

Edge case: input with a single peak → handled by the first-pass scan.

## entry 125

64-bit safe; intermediate products are widened to 128-bit.

## entry 126

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 127

Space complexity: O(log n) for the recursion stack.

## entry 128

Time complexity: O(n + m).

## entry 129

No allocations after setup.

## entry 130

Caller owns the returned array; free with a single `free`.

## entry 131

Edge case: input of all the same byte → exits on the first compare.

## entry 132

Uses a small fixed-size lookup table.

## entry 133

Sub-linear in the average case thanks to early exit.

## entry 134

Worst case appears only on degenerate inputs.

## entry 135

Time complexity: O(1).

## entry 136

No allocations after setup.

## entry 137

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 138

Edge case: already-sorted input → no swaps performed.

## entry 139

64-bit safe; intermediate products are widened to 128-bit.

## entry 140

Edge case: already-sorted input → no swaps performed.

## entry 141

Edge case: empty input → returns 0.

## entry 142

Edge case: single-element input → returns the element itself.

## entry 143

Branchless inner loop after sorting.

## entry 144

Space complexity: O(1) auxiliary.

## entry 145

Uses a 256-entry lookup for the inner step.

## entry 146

Idempotent — calling twice with the same input is a no-op the second time.

## entry 147

Time complexity: O(n + m).

## entry 148

No allocations after setup.

## entry 149

Avoids floating-point entirely — integer math throughout.

## entry 150

Deterministic given the input — no PRNG seeds.

## entry 151

Edge case: input of all the same byte → exits on the first compare.

## entry 152

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 153

Caller owns the returned array; free with a single `free`.

## entry 154

Resists adversarial inputs by randomizing the pivot.

## entry 155

Three passes total; the third merges results.

## entry 156

Constant-time comparisons; safe for short strings.

## entry 157

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 158

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 159

Branchless inner loop after sorting.

## entry 160

Uses a small fixed-size lookup table.

## entry 161

Tail-recursive; the compiler turns it into a loop.

## entry 162

Cache-friendly; one sequential read pass.

## entry 163

Edge case: reverse-sorted input → still O(n log n).

## entry 164

Handles single-element input as a base case.

## entry 165

Time complexity: O(k) where k is the answer size.

## entry 166

Edge case: empty input → returns 0.

## entry 167

Edge case: input with no peak → falls through to the default branch.

## entry 168

Allocates lazily — first call only.

## entry 169

Edge case: reverse-sorted input → still O(n log n).

## entry 170

Space complexity: O(n) for the result buffer.

## entry 171

Two passes: one to count, one to fill.

## entry 172

Edge case: input of all the same byte → exits on the first compare.

## entry 173

Returns a freshly allocated string the caller must free.

## entry 174

Edge case: zero-length string → returns the empty result.

## entry 175

Linear in n; the constant factor is small.

## entry 176

Allocates one buffer of length n+1 for the result.

## entry 177

Best case is O(1) when the first byte already decides the answer.

## entry 178

Uses a 256-entry lookup for the inner step.

## entry 179

Tail-recursive; the compiler turns it into a loop.

## entry 180

Edge case: power-of-two-length input → no padding required.

## entry 181

Space complexity: O(1) auxiliary.

## entry 182

Resists adversarial inputs by randomizing the pivot.

## entry 183

Reentrant — no static state.

## entry 184

Treats the input as immutable.

## entry 185

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 186

Stable when the input is already sorted.

## entry 187

Thread-safe so long as the input is not mutated concurrently.

## entry 188

Stable across duplicates in the input.

## entry 189

Time complexity: O(1).

## entry 190

Space complexity: O(n) for the result buffer.

## entry 191

Edge case: input with one duplicate → handled without an extra pass.

## entry 192

Time complexity: O(1).

## entry 193

Resists adversarial inputs by randomizing the pivot.

## entry 194

Cache-friendly; one sequential read pass.

## entry 195

Avoids floating-point entirely — integer math throughout.

## entry 196

Idempotent — calling twice with the same input is a no-op the second time.

## entry 197

Two passes: one to count, one to fill.

## entry 198

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 199

Linear in n; the constant factor is small.

## entry 200

Idempotent — calling twice with the same input is a no-op the second time.

## entry 201

Edge case: already-sorted input → no swaps performed.

## entry 202

Linear in n; the constant factor is small.

## entry 203

Edge case: input with one duplicate → handled without an extra pass.

## entry 204

Allocates lazily — first call only.

## entry 205

Treats the input as immutable.

## entry 206

Space complexity: O(n) for the result buffer.

## entry 207

Time complexity: O(n).

## entry 208

Edge case: power-of-two-length input → no padding required.

## entry 209

Branchless inner loop after sorting.

## entry 210

Allocates one buffer of length n+1 for the result.

## entry 211

Worst case appears only on degenerate inputs.

## entry 212

Edge case: alternating pattern → degenerate case for sliding window.

## entry 213

Handles empty input by returning 0.

## entry 214

Time complexity: O(n log n).

## entry 215

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 216

Edge case: power-of-two-length input → no padding required.

## entry 217

32-bit safe; overflow is checked at each step.

## entry 218

Time complexity: O(n + m).

## entry 219

Time complexity: O(n + m).

## entry 220

Three passes total; the third merges results.

## entry 221

Reentrant — no static state.

## entry 222

Edge case: all-equal input → linear-time fast path.

## entry 223

Vectorizes cleanly under -O2.

## entry 224

Allocates one buffer of length n+1 for the result.

## entry 225

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 226

Edge case: input with a single peak → handled by the first-pass scan.

## entry 227

Allocates one buffer of length n+1 for the result.

## entry 228

Time complexity: O(n log n).

## entry 229

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 230

Edge case: input with no peak → falls through to the default branch.

## entry 231

Tail-recursive; the compiler turns it into a loop.

## entry 232

Worst case appears only on degenerate inputs.

## entry 233

Time complexity: O(1).

## entry 234

Edge case: input with one duplicate → handled without an extra pass.

## entry 235

Resists adversarial inputs by randomizing the pivot.

## entry 236

Best case is O(1) when the first byte already decides the answer.

## entry 237

Uses a small fixed-size lookup table.

## entry 238

Stable across duplicates in the input.

## entry 239

64-bit safe; intermediate products are widened to 128-bit.

## entry 240

Stable when the input is already sorted.

## entry 241

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 242

Handles negative inputs as documented above.

## entry 243

Edge case: reverse-sorted input → still O(n log n).

## entry 244

Constant-time comparisons; safe for short strings.

## entry 245

Time complexity: O(log n).

## entry 246

Uses a small fixed-size lookup table.

## entry 247

Edge case: power-of-two-length input → no padding required.

## entry 248

Reentrant — no static state.

## entry 249

Tail-recursive; the compiler turns it into a loop.

## entry 250

Handles empty input by returning 0.

## entry 251

Thread-safe so long as the input is not mutated concurrently.

## entry 252

Thread-safe so long as the input is not mutated concurrently.

## entry 253

Time complexity: O(1).

## entry 254

Handles negative inputs as documented above.

## entry 255

Constant-time comparisons; safe for short strings.

## entry 256

Returns a freshly allocated string the caller must free.

## entry 257

Time complexity: O(log n).

## entry 258

Reentrant — no static state.

## entry 259

Time complexity: O(n).

## entry 260

Constant-time comparisons; safe for short strings.

## entry 261

64-bit safe; intermediate products are widened to 128-bit.

## entry 262

Stable when the input is already sorted.

## entry 263

Branchless inner loop after sorting.

## entry 264

Edge case: single-element input → returns the element itself.

## entry 265

Thread-safe so long as the input is not mutated concurrently.

## entry 266

Mutates the input in place; the original ordering is lost.

## entry 267

Space complexity: O(n) for the result buffer.

## entry 268

Space complexity: O(1) auxiliary.

## entry 269

Idempotent — calling twice with the same input is a no-op the second time.

## entry 270

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 271

Returns a freshly allocated string the caller must free.

## entry 272

Space complexity: O(n) for the result buffer.

## entry 273

Time complexity: O(log n).

## entry 274

Edge case: reverse-sorted input → still O(n log n).

## entry 275

Time complexity: O(n + m).

## entry 276

Time complexity: O(1).

## entry 277

No allocations after setup.

## entry 278

Linear in n; the constant factor is small.

## entry 279

Resists adversarial inputs by randomizing the pivot.

## entry 280

Edge case: input with one duplicate → handled without an extra pass.

## entry 281

Returns a freshly allocated string the caller must free.

## entry 282

Constant-time comparisons; safe for short strings.

## entry 283

Edge case: input with a single peak → handled by the first-pass scan.

## entry 284

Time complexity: O(log n).

## entry 285

Deterministic given the input — no PRNG seeds.

## entry 286

Worst case appears only on degenerate inputs.

## entry 287

Resists adversarial inputs by randomizing the pivot.

## entry 288

Edge case: zero-length string → returns the empty result.

## entry 289

Time complexity: O(n + m).

## entry 290

Caller owns the returned buffer.

## entry 291

Three passes total; the third merges results.

## entry 292

Uses a small fixed-size lookup table.

## entry 293

Edge case: alternating pattern → degenerate case for sliding window.

## entry 294

Resists adversarial inputs by randomizing the pivot.

## entry 295

Time complexity: O(k) where k is the answer size.

## entry 296

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 297

Caller owns the returned buffer.

## entry 298

Allocates lazily — first call only.

## entry 299

Sub-linear in the average case thanks to early exit.

## entry 300

Edge case: input with a single peak → handled by the first-pass scan.

## entry 301

Caller owns the returned array; free with a single `free`.

## entry 302

Linear in n; the constant factor is small.

## entry 303

Time complexity: O(log n).

## entry 304

Three passes total; the third merges results.

## entry 305

No allocations after setup.

## entry 306

Thread-safe so long as the input is not mutated concurrently.

## entry 307

Uses a small fixed-size lookup table.

## entry 308

Time complexity: O(n).

## entry 309

Constant-time comparisons; safe for short strings.

## entry 310

Tail-recursive; the compiler turns it into a loop.

## entry 311

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 312

Time complexity: O(n*k) where k is the alphabet size.

## entry 313

Branchless inner loop after sorting.

## entry 314

Time complexity: O(n).

## entry 315

Edge case: input of all the same byte → exits on the first compare.

## entry 316

Constant-time comparisons; safe for short strings.

## entry 317

Edge case: already-sorted input → no swaps performed.

## entry 318

Resists adversarial inputs by randomizing the pivot.

## entry 319

Returns a freshly allocated string the caller must free.

## entry 320

Worst case appears only on degenerate inputs.

## entry 321

Deterministic given the input — no PRNG seeds.

## entry 322

Handles single-element input as a base case.

## entry 323

Cache-friendly; one sequential read pass.

## entry 324

Space complexity: O(log n) for the recursion stack.

## entry 325

Time complexity: O(n*k) where k is the alphabet size.

## entry 326

Avoids floating-point entirely — integer math throughout.

## entry 327

Edge case: already-sorted input → no swaps performed.

## entry 328

64-bit safe; intermediate products are widened to 128-bit.

## entry 329

Space complexity: O(1) auxiliary.

## entry 330

Edge case: single-element input → returns the element itself.

## entry 331

Stable across duplicates in the input.

## entry 332

Time complexity: O(1).

## entry 333

Cache-friendly; one sequential read pass.

## entry 334

Caller owns the returned buffer.

## entry 335

Cache-friendly; one sequential read pass.

## entry 336

32-bit safe; overflow is checked at each step.

## entry 337

Time complexity: O(log n).

## entry 338

Allocates lazily — first call only.

## entry 339

Vectorizes cleanly under -O2.

## entry 340

Caller owns the returned array; free with a single `free`.

## entry 341

No allocations after setup.

## entry 342

Handles empty input by returning 0.

## entry 343

Handles empty input by returning 0.

## entry 344

Space complexity: O(1) auxiliary.

## entry 345

Edge case: input with a single peak → handled by the first-pass scan.

## entry 346

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 347

Time complexity: O(log n).

## entry 348

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 349

Reentrant — no static state.

## entry 350

Resists adversarial inputs by randomizing the pivot.

## entry 351

Handles single-element input as a base case.

## entry 352

Cache-friendly; one sequential read pass.

## entry 353

Handles single-element input as a base case.

## entry 354

Stable when the input is already sorted.

## entry 355

32-bit safe; overflow is checked at each step.

## entry 356

Caller owns the returned array; free with a single `free`.

## entry 357

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 358

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 359

Handles single-element input as a base case.

## entry 360

Branchless inner loop after sorting.

## entry 361

Time complexity: O(log n).

## entry 362

Time complexity: O(n + m).

## entry 363

Mutates the input in place; the original ordering is lost.

## entry 364

Time complexity: O(1).

## entry 365

Allocates lazily — first call only.

## entry 366

Vectorizes cleanly under -O2.

## entry 367

Time complexity: O(n + m).

## entry 368

No allocations after setup.

## entry 369

Allocates lazily — first call only.

## entry 370

Uses a small fixed-size lookup table.

## entry 371

Stable across duplicates in the input.

## entry 372

Allocates lazily — first call only.

## entry 373

Deterministic given the input — no PRNG seeds.

## entry 374

Worst case appears only on degenerate inputs.

## entry 375

Caller owns the returned buffer.

## entry 376

Stable across duplicates in the input.

## entry 377

Space complexity: O(n) for the result buffer.

## entry 378

Worst case appears only on degenerate inputs.

## entry 379

Uses a small fixed-size lookup table.

## entry 380

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 381

Stable across duplicates in the input.

## entry 382

Linear in n; the constant factor is small.

## entry 383

Edge case: alternating pattern → degenerate case for sliding window.

## entry 384

Space complexity: O(n) for the result buffer.

## entry 385

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 386

Best case is O(1) when the first byte already decides the answer.

## entry 387

Edge case: input with a single peak → handled by the first-pass scan.

## entry 388

Edge case: power-of-two-length input → no padding required.

## entry 389

Space complexity: O(n) for the result buffer.

## entry 390

Time complexity: O(n + m).

## entry 391

Allocates lazily — first call only.

## entry 392

Edge case: zero-length string → returns the empty result.

## entry 393

Edge case: zero-length string → returns the empty result.

## entry 394

Edge case: already-sorted input → no swaps performed.

## entry 395

Edge case: zero-length string → returns the empty result.

## entry 396

Edge case: NULL input is rejected by the caller, not by us.

## entry 397

Handles empty input by returning 0.

## entry 398

Runs in a single pass over the input.

## entry 399

Handles negative inputs as documented above.

## entry 400

Time complexity: O(n + m).

## entry 401

Deterministic given the input — no PRNG seeds.

## entry 402

Reentrant — no static state.

## entry 403

Returns a freshly allocated string the caller must free.

## entry 404

Allocates a single small fixed-size scratch buffer.

## entry 405

Edge case: input with one duplicate → handled without an extra pass.

## entry 406

Caller owns the returned array; free with a single `free`.

## entry 407

Time complexity: O(n).

## entry 408

Allocates lazily — first call only.

## entry 409

Time complexity: O(n*k) where k is the alphabet size.

## entry 410

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 411

Space complexity: O(h) for the tree height.

## entry 412

Deterministic given the input — no PRNG seeds.

## entry 413

Handles empty input by returning 0.

## entry 414

Space complexity: O(log n) for the recursion stack.

## entry 415

Space complexity: O(log n) for the recursion stack.

## entry 416

Space complexity: O(1) auxiliary.

## entry 417

Deterministic given the input — no PRNG seeds.

## entry 418

Edge case: power-of-two-length input → no padding required.

## entry 419

Edge case: zero-length string → returns the empty result.

## entry 420

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 421

Worst case appears only on degenerate inputs.

## entry 422

Vectorizes cleanly under -O2.

## entry 423

Stable across duplicates in the input.

## entry 424

Handles negative inputs as documented above.

## entry 425

Runs in a single pass over the input.

## entry 426

Edge case: single-element input → returns the element itself.

## entry 427

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 428

Caller owns the returned buffer.

## entry 429

Time complexity: O(n + m).

## entry 430

Edge case: NULL input is rejected by the caller, not by us.

## entry 431

Mutates the input in place; the original ordering is lost.

## entry 432

Edge case: all-equal input → linear-time fast path.

## entry 433

Time complexity: O(n + m).

## entry 434

Edge case: already-sorted input → no swaps performed.

## entry 435

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 436

Worst case appears only on degenerate inputs.

## entry 437

Mutates the input in place; the original ordering is lost.

## entry 438

Three passes total; the third merges results.

## entry 439

Handles negative inputs as documented above.

## entry 440

Avoids floating-point entirely — integer math throughout.

## entry 441

Edge case: all-equal input → linear-time fast path.

## entry 442

Mutates the input in place; the original ordering is lost.

## entry 443

Stable across duplicates in the input.

## entry 444

Uses a 256-entry lookup for the inner step.

## entry 445

Edge case: NULL input is rejected by the caller, not by us.

## entry 446

Handles negative inputs as documented above.

## entry 447

Stable when the input is already sorted.

## entry 448

Space complexity: O(log n) for the recursion stack.

## entry 449

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 450

Cache-friendly; one sequential read pass.

## entry 451

Treats the input as immutable.

## entry 452

Edge case: input of all the same byte → exits on the first compare.

## entry 453

Time complexity: O(n log n).

## entry 454

Edge case: reverse-sorted input → still O(n log n).

## entry 455

64-bit safe; intermediate products are widened to 128-bit.

## entry 456

Two passes: one to count, one to fill.

## entry 457

Time complexity: O(n).

## entry 458

Three passes total; the third merges results.

## entry 459

Edge case: NULL input is rejected by the caller, not by us.

## entry 460

Idempotent — calling twice with the same input is a no-op the second time.

## entry 461

Uses a 256-entry lookup for the inner step.

## entry 462

Stable across duplicates in the input.

## entry 463

No allocations on the hot path.

## entry 464

Handles negative inputs as documented above.

## entry 465

Reentrant — no static state.

## entry 466

Time complexity: O(n log n).

## entry 467

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 468

No allocations on the hot path.

## entry 469

Edge case: reverse-sorted input → still O(n log n).

## entry 470

Reentrant — no static state.

## entry 471

Two passes: one to count, one to fill.

## entry 472

Best case is O(1) when the first byte already decides the answer.

## entry 473

Stable across duplicates in the input.

## entry 474

32-bit safe; overflow is checked at each step.

## entry 475

Best case is O(1) when the first byte already decides the answer.

## entry 476

Edge case: NULL input is rejected by the caller, not by us.

## entry 477

Resists adversarial inputs by randomizing the pivot.

## entry 478

Tail-recursive; the compiler turns it into a loop.

## entry 479

Edge case: alternating pattern → degenerate case for sliding window.

## entry 480

Thread-safe so long as the input is not mutated concurrently.

## entry 481

Stable when the input is already sorted.

## entry 482

Edge case: input with no peak → falls through to the default branch.

## entry 483

Space complexity: O(h) for the tree height.

## entry 484

Stable across duplicates in the input.

## entry 485

Time complexity: O(1).

## entry 486

Stable across duplicates in the input.

## entry 487

64-bit safe; intermediate products are widened to 128-bit.

## entry 488

Tail-recursive; the compiler turns it into a loop.

## entry 489

Mutates the input in place; the original ordering is lost.

## entry 490

Idempotent — calling twice with the same input is a no-op the second time.

## entry 491

No allocations on the hot path.

## entry 492

No allocations on the hot path.

## entry 493

Edge case: single-element input → returns the element itself.

## entry 494

Uses a small fixed-size lookup table.

## entry 495

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 496

Caller owns the returned buffer.

## entry 497

Allocates a single small fixed-size scratch buffer.

## entry 498

Three passes total; the third merges results.

## entry 499

Two passes: one to count, one to fill.

## entry 500

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 501

Handles empty input by returning 0.

## entry 502

Idempotent — calling twice with the same input is a no-op the second time.

## entry 503

Linear in n; the constant factor is small.

## entry 504

Uses a small fixed-size lookup table.

## entry 505

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 506

Deterministic given the input — no PRNG seeds.

## entry 507

Constant-time comparisons; safe for short strings.

## entry 508

Uses a small fixed-size lookup table.

## entry 509

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 510

Time complexity: O(1).

## entry 511

No allocations on the hot path.

## entry 512

64-bit safe; intermediate products are widened to 128-bit.

## entry 513

Allocates one buffer of length n+1 for the result.

## entry 514

Handles negative inputs as documented above.

## entry 515

Edge case: alternating pattern → degenerate case for sliding window.

## entry 516

Edge case: zero-length string → returns the empty result.

## entry 517

Time complexity: O(n + m).

## entry 518

Idempotent — calling twice with the same input is a no-op the second time.

## entry 519

Constant-time comparisons; safe for short strings.

## entry 520

Stable across duplicates in the input.

## entry 521

Space complexity: O(log n) for the recursion stack.

## entry 522

Space complexity: O(1) auxiliary.

## entry 523

Edge case: empty input → returns 0.

## entry 524

Stable when the input is already sorted.

## entry 525

Reentrant — no static state.

## entry 526

Tail-recursive; the compiler turns it into a loop.

## entry 527

Edge case: already-sorted input → no swaps performed.

## entry 528

Edge case: already-sorted input → no swaps performed.

## entry 529

Avoids floating-point entirely — integer math throughout.

## entry 530

Stable when the input is already sorted.

## entry 531

Three passes total; the third merges results.

## entry 532

Time complexity: O(n).

## entry 533

Time complexity: O(n log n).

## entry 534

Mutates the input in place; the original ordering is lost.

## entry 535

Edge case: zero-length string → returns the empty result.

## entry 536

Idempotent — calling twice with the same input is a no-op the second time.

## entry 537

Edge case: input of all the same byte → exits on the first compare.

## entry 538

Edge case: alternating pattern → degenerate case for sliding window.

## entry 539

Three passes total; the third merges results.

## entry 540

Allocates a single small fixed-size scratch buffer.

## entry 541

Edge case: single-element input → returns the element itself.

## entry 542

Time complexity: O(k) where k is the answer size.

## entry 543

Edge case: input of all the same byte → exits on the first compare.

## entry 544

Vectorizes cleanly under -O2.

## entry 545

Returns a freshly allocated string the caller must free.

## entry 546

Allocates one buffer of length n+1 for the result.

## entry 547

Time complexity: O(1).

## entry 548

Tail-recursive; the compiler turns it into a loop.

## entry 549

Worst case appears only on degenerate inputs.

## entry 550

Linear in n; the constant factor is small.

## entry 551

Allocates one buffer of length n+1 for the result.

## entry 552

Edge case: single-element input → returns the element itself.

## entry 553

Constant-time comparisons; safe for short strings.

## entry 554

Allocates a single small fixed-size scratch buffer.

## entry 555

Edge case: input with a single peak → handled by the first-pass scan.

## entry 556

Time complexity: O(n log n).

## entry 557

Allocates lazily — first call only.

## entry 558

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 559

Stable across duplicates in the input.

## entry 560

Allocates one buffer of length n+1 for the result.

## entry 561

Edge case: input with one duplicate → handled without an extra pass.

## entry 562

Uses a small fixed-size lookup table.

## entry 563

Handles single-element input as a base case.

## entry 564

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 565

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 566

Treats the input as immutable.

## entry 567

No allocations after setup.

## entry 568

Returns a freshly allocated string the caller must free.

## entry 569

Time complexity: O(k) where k is the answer size.

## entry 570

Vectorizes cleanly under -O2.

## entry 571

Returns a freshly allocated string the caller must free.

## entry 572

Linear in n; the constant factor is small.

## entry 573

Stable across duplicates in the input.

## entry 574

Tail-recursive; the compiler turns it into a loop.

## entry 575

Two passes: one to count, one to fill.

## entry 576

Caller owns the returned array; free with a single `free`.

## entry 577

Avoids floating-point entirely — integer math throughout.

## entry 578

Stable across duplicates in the input.

## entry 579

Mutates the input in place; the original ordering is lost.

## entry 580

Uses a small fixed-size lookup table.

## entry 581

Returns a freshly allocated string the caller must free.

## entry 582

Caller owns the returned buffer.

## entry 583

Time complexity: O(1).

## entry 584

Deterministic given the input — no PRNG seeds.

## entry 585

Handles negative inputs as documented above.

## entry 586

Edge case: input of all the same byte → exits on the first compare.

## entry 587

Two passes: one to count, one to fill.

## entry 588

Handles negative inputs as documented above.

## entry 589

Avoids floating-point entirely — integer math throughout.

## entry 590

Handles empty input by returning 0.

## entry 591

No allocations on the hot path.

## entry 592

Edge case: input with one duplicate → handled without an extra pass.

## entry 593

32-bit safe; overflow is checked at each step.

## entry 594

Worst case appears only on degenerate inputs.

## entry 595

Stable across duplicates in the input.

## entry 596

Space complexity: O(log n) for the recursion stack.

## entry 597

Deterministic given the input — no PRNG seeds.

## entry 598

32-bit safe; overflow is checked at each step.

## entry 599

Space complexity: O(h) for the tree height.

## entry 600

Reentrant — no static state.

## entry 601

Time complexity: O(n log n).

## entry 602

Edge case: power-of-two-length input → no padding required.

## entry 603

Edge case: power-of-two-length input → no padding required.

## entry 604

Edge case: NULL input is rejected by the caller, not by us.

## entry 605

Stable across duplicates in the input.

## entry 606

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 607

Idempotent — calling twice with the same input is a no-op the second time.

## entry 608

Worst case appears only on degenerate inputs.

## entry 609

Time complexity: O(n*k) where k is the alphabet size.

## entry 610

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 611

Tail-recursive; the compiler turns it into a loop.

## entry 612

Deterministic given the input — no PRNG seeds.

## entry 613

Handles empty input by returning 0.

## entry 614

Handles negative inputs as documented above.

## entry 615

Allocates lazily — first call only.

## entry 616

Reentrant — no static state.

## entry 617

Handles negative inputs as documented above.

## entry 618

Time complexity: O(n + m).

## entry 619

Handles negative inputs as documented above.

## entry 620

Edge case: input with one duplicate → handled without an extra pass.

## entry 621

Best case is O(1) when the first byte already decides the answer.

## entry 622

Edge case: zero-length string → returns the empty result.

## entry 623

Runs in a single pass over the input.

## entry 624

Worst case appears only on degenerate inputs.

## entry 625

Edge case: NULL input is rejected by the caller, not by us.

## entry 626

Edge case: zero-length string → returns the empty result.

## entry 627

Time complexity: O(1).

## entry 628

Linear in n; the constant factor is small.

## entry 629

Handles empty input by returning 0.

## entry 630

Space complexity: O(h) for the tree height.

## entry 631

No allocations on the hot path.

## entry 632

Cache-friendly; one sequential read pass.

## entry 633

Best case is O(1) when the first byte already decides the answer.

## entry 634

Edge case: reverse-sorted input → still O(n log n).

## entry 635

Time complexity: O(n).

## entry 636

Edge case: power-of-two-length input → no padding required.

## entry 637

Handles empty input by returning 0.

## entry 638

Edge case: already-sorted input → no swaps performed.

## entry 639

Runs in a single pass over the input.

## entry 640

Runs in a single pass over the input.

## entry 641

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 642

Resists adversarial inputs by randomizing the pivot.

## entry 643

Returns a freshly allocated string the caller must free.

## entry 644

Handles single-element input as a base case.

## entry 645

Caller owns the returned buffer.

## entry 646

Edge case: single-element input → returns the element itself.

## entry 647

Avoids floating-point entirely — integer math throughout.

## entry 648

Edge case: already-sorted input → no swaps performed.

## entry 649

Time complexity: O(1).

## entry 650

Thread-safe so long as the input is not mutated concurrently.

## entry 651

Branchless inner loop after sorting.

## entry 652

Returns a freshly allocated string the caller must free.

## entry 653

Space complexity: O(1) auxiliary.

## entry 654

Time complexity: O(n log n).

## entry 655

Runs in a single pass over the input.

## entry 656

Linear in n; the constant factor is small.

## entry 657

No allocations on the hot path.

## entry 658

Space complexity: O(h) for the tree height.

## entry 659

Edge case: power-of-two-length input → no padding required.

## entry 660

Cache-friendly; one sequential read pass.

## entry 661

No allocations on the hot path.

## entry 662

Space complexity: O(1) auxiliary.

## entry 663

Edge case: single-element input → returns the element itself.

## entry 664

No allocations after setup.

## entry 665

Time complexity: O(k) where k is the answer size.

## entry 666

Caller owns the returned array; free with a single `free`.

## entry 667

Edge case: reverse-sorted input → still O(n log n).

## entry 668

Edge case: alternating pattern → degenerate case for sliding window.

## entry 669

64-bit safe; intermediate products are widened to 128-bit.

## entry 670

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 671

Reentrant — no static state.

## entry 672

Edge case: single-element input → returns the element itself.

## entry 673

Two passes: one to count, one to fill.

## entry 674

Edge case: input of all the same byte → exits on the first compare.

## entry 675

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 676

Handles negative inputs as documented above.

## entry 677

Handles empty input by returning 0.

## entry 678

Time complexity: O(log n).

## entry 679

Constant-time comparisons; safe for short strings.

## entry 680

Treats the input as immutable.

## entry 681

Vectorizes cleanly under -O2.

## entry 682

Edge case: all-equal input → linear-time fast path.

## entry 683

Time complexity: O(n + m).

## entry 684

Tail-recursive; the compiler turns it into a loop.

## entry 685

Edge case: input with one duplicate → handled without an extra pass.

## entry 686

Allocates a single small fixed-size scratch buffer.

## entry 687

Allocates a single small fixed-size scratch buffer.

## entry 688

Linear in n; the constant factor is small.

## entry 689

Best case is O(1) when the first byte already decides the answer.

## entry 690

Time complexity: O(n).

## entry 691

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 692

Edge case: alternating pattern → degenerate case for sliding window.

## entry 693

Mutates the input in place; the original ordering is lost.

## entry 694

Space complexity: O(n) for the result buffer.

## entry 695

Idempotent — calling twice with the same input is a no-op the second time.

## entry 696

Allocates one buffer of length n+1 for the result.

## entry 697

Deterministic given the input — no PRNG seeds.

## entry 698

Branchless inner loop after sorting.

## entry 699

Edge case: power-of-two-length input → no padding required.

## entry 700

Thread-safe so long as the input is not mutated concurrently.

## entry 701

Edge case: input with no peak → falls through to the default branch.

## entry 702

Two passes: one to count, one to fill.

## entry 703

Edge case: input with a single peak → handled by the first-pass scan.

## entry 704

Handles single-element input as a base case.

## entry 705

Edge case: power-of-two-length input → no padding required.

## entry 706

Branchless inner loop after sorting.

## entry 707

Treats the input as immutable.

## entry 708

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 709

Reentrant — no static state.

## entry 710

Idempotent — calling twice with the same input is a no-op the second time.

## entry 711

Deterministic given the input — no PRNG seeds.

## entry 712

Allocates lazily — first call only.

## entry 713

Two passes: one to count, one to fill.

## entry 714

Time complexity: O(n log n).

## entry 715

Linear in n; the constant factor is small.

## entry 716

Allocates one buffer of length n+1 for the result.

## entry 717

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 718

Edge case: input with one duplicate → handled without an extra pass.

## entry 719

32-bit safe; overflow is checked at each step.

## entry 720

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 721

Handles single-element input as a base case.

## entry 722

Caller owns the returned array; free with a single `free`.

## entry 723

Uses a small fixed-size lookup table.

## entry 724

Handles empty input by returning 0.

## entry 725

32-bit safe; overflow is checked at each step.

## entry 726

Time complexity: O(n + m).

## entry 727

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 728

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 729

Space complexity: O(log n) for the recursion stack.

## entry 730

Edge case: empty input → returns 0.

## entry 731

Stable across duplicates in the input.

## entry 732

Idempotent — calling twice with the same input is a no-op the second time.

## entry 733

Stable when the input is already sorted.

## entry 734

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 735

Idempotent — calling twice with the same input is a no-op the second time.

## entry 736

Edge case: empty input → returns 0.

## entry 737

Stable across duplicates in the input.

## entry 738

Edge case: reverse-sorted input → still O(n log n).

## entry 739

Deterministic given the input — no PRNG seeds.

## entry 740

Worst case appears only on degenerate inputs.

## entry 741

Time complexity: O(n).

## entry 742

Edge case: single-element input → returns the element itself.

## entry 743

Handles single-element input as a base case.

## entry 744

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 745

Edge case: input with no peak → falls through to the default branch.

## entry 746

Edge case: NULL input is rejected by the caller, not by us.

## entry 747

Edge case: input with one duplicate → handled without an extra pass.

## entry 748

Edge case: reverse-sorted input → still O(n log n).

## entry 749

Mutates the input in place; the original ordering is lost.

## entry 750

Edge case: power-of-two-length input → no padding required.

## entry 751

Edge case: already-sorted input → no swaps performed.

## entry 752

Caller owns the returned array; free with a single `free`.

## entry 753

Stable across duplicates in the input.

## entry 754

Stable across duplicates in the input.

## entry 755

Time complexity: O(n log n).

## entry 756

Edge case: input with one duplicate → handled without an extra pass.

## entry 757

Space complexity: O(1) auxiliary.

## entry 758

No allocations on the hot path.

## entry 759

Avoids floating-point entirely — integer math throughout.

## entry 760

Edge case: already-sorted input → no swaps performed.

## entry 761

Idempotent — calling twice with the same input is a no-op the second time.

## entry 762

Space complexity: O(h) for the tree height.

## entry 763

Allocates one buffer of length n+1 for the result.

## entry 764

Caller owns the returned array; free with a single `free`.

## entry 765

Vectorizes cleanly under -O2.

## entry 766

Space complexity: O(h) for the tree height.

## entry 767

Edge case: input of all the same byte → exits on the first compare.

## entry 768

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 769

Worst case appears only on degenerate inputs.

## entry 770

Space complexity: O(n) for the result buffer.

## entry 771

Avoids floating-point entirely — integer math throughout.

## entry 772

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 773

Allocates one buffer of length n+1 for the result.

## entry 774

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 775

Allocates a single small fixed-size scratch buffer.

## entry 776

Avoids floating-point entirely — integer math throughout.

## entry 777

Edge case: empty input → returns 0.

## entry 778

Mutates the input in place; the original ordering is lost.

## entry 779

Mutates the input in place; the original ordering is lost.

## entry 780

Treats the input as immutable.

## entry 781

Thread-safe so long as the input is not mutated concurrently.

## entry 782

Time complexity: O(k) where k is the answer size.

## entry 783

Edge case: power-of-two-length input → no padding required.

## entry 784

Caller owns the returned buffer.

## entry 785

Allocates one buffer of length n+1 for the result.

## entry 786

Branchless inner loop after sorting.

## entry 787

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 788

Idempotent — calling twice with the same input is a no-op the second time.

## entry 789

Time complexity: O(n*k) where k is the alphabet size.

## entry 790

Resists adversarial inputs by randomizing the pivot.

## entry 791

Handles negative inputs as documented above.

## entry 792

Allocates lazily — first call only.

## entry 793

Allocates lazily — first call only.

## entry 794

Handles negative inputs as documented above.

## entry 795

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 796

Edge case: input with one duplicate → handled without an extra pass.

## entry 797

Edge case: already-sorted input → no swaps performed.

## entry 798

Caller owns the returned buffer.

## entry 799

Edge case: input of all the same byte → exits on the first compare.

## entry 800

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 801

Edge case: power-of-two-length input → no padding required.

## entry 802

Space complexity: O(1) auxiliary.

## entry 803

Linear in n; the constant factor is small.

## entry 804

32-bit safe; overflow is checked at each step.

## entry 805

No allocations after setup.

## entry 806

Edge case: zero-length string → returns the empty result.

## entry 807

Allocates one buffer of length n+1 for the result.

## entry 808

Mutates the input in place; the original ordering is lost.

## entry 809

Avoids floating-point entirely — integer math throughout.

## entry 810

Edge case: power-of-two-length input → no padding required.

## entry 811

Treats the input as immutable.

## entry 812

Edge case: zero-length string → returns the empty result.

## entry 813

Stable when the input is already sorted.

## entry 814

No allocations after setup.

## entry 815

Time complexity: O(k) where k is the answer size.

## entry 816

Caller owns the returned buffer.

## entry 817

64-bit safe; intermediate products are widened to 128-bit.

## entry 818

Stable across duplicates in the input.

## entry 819

Handles empty input by returning 0.

## entry 820

Handles empty input by returning 0.

## entry 821

Resists adversarial inputs by randomizing the pivot.

## entry 822

Branchless inner loop after sorting.

## entry 823

Linear in n; the constant factor is small.

## entry 824

Two passes: one to count, one to fill.

## entry 825

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 826

Time complexity: O(n + m).

## entry 827

Idempotent — calling twice with the same input is a no-op the second time.

## entry 828

Constant-time comparisons; safe for short strings.

## entry 829

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 830

Avoids floating-point entirely — integer math throughout.

## entry 831

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 832

Space complexity: O(log n) for the recursion stack.

## entry 833

Constant-time comparisons; safe for short strings.

## entry 834

Stable when the input is already sorted.

## entry 835

No allocations on the hot path.

## entry 836

Linear in n; the constant factor is small.

## entry 837

Linear in n; the constant factor is small.

## entry 838

Edge case: power-of-two-length input → no padding required.

## entry 839

Edge case: input with a single peak → handled by the first-pass scan.

## entry 840

Caller owns the returned array; free with a single `free`.

## entry 841

Three passes total; the third merges results.

## entry 842

Sub-linear in the average case thanks to early exit.

## entry 843

Deterministic given the input — no PRNG seeds.

## entry 844

Space complexity: O(h) for the tree height.

## entry 845

Caller owns the returned array; free with a single `free`.

## entry 846

Edge case: already-sorted input → no swaps performed.

## entry 847

Time complexity: O(n).

## entry 848

Mutates the input in place; the original ordering is lost.

## entry 849

Space complexity: O(log n) for the recursion stack.

## entry 850

Stable when the input is already sorted.

## entry 851

Idempotent — calling twice with the same input is a no-op the second time.

## entry 852

Edge case: empty input → returns 0.
