# Max Depth Binary Tree

The depth of a binary tree is the longest root-to-leaf path. Trivial
post-order recursion: `1 + max(depth(left), depth(right))`. Empty tree
has depth `0`.

Edge case: single-element input → returns the element itself.

Caller owns the returned buffer.

No allocations on the hot path.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Uses a small fixed-size lookup table.

Allocates one buffer of length n+1 for the result.

Handles empty input by returning 0.

Time complexity: O(log n).

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Stable across duplicates in the input.

Space complexity: O(n) for the result buffer.

Tail-recursive; the compiler turns it into a loop.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Time complexity: O(n).

Handles negative inputs as documented above.

## entry 1

Edge case: power-of-two-length input → no padding required.

## entry 2

Time complexity: O(n*k) where k is the alphabet size.

## entry 3

Time complexity: O(n log n).

## entry 4

Time complexity: O(n log n).

## entry 5

Time complexity: O(n + m).

## entry 6

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 7

Cache-friendly; one sequential read pass.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Allocates one buffer of length n+1 for the result.

## entry 10

Edge case: reverse-sorted input → still O(n log n).

## entry 11

Space complexity: O(n) for the result buffer.

## entry 12

Thread-safe so long as the input is not mutated concurrently.

## entry 13

Edge case: alternating pattern → degenerate case for sliding window.

## entry 14

Branchless inner loop after sorting.

## entry 15

32-bit safe; overflow is checked at each step.

## entry 16

Three passes total; the third merges results.

## entry 17

Allocates lazily — first call only.

## entry 18

Handles negative inputs as documented above.

## entry 19

Allocates lazily — first call only.

## entry 20

Stable across duplicates in the input.

## entry 21

Tail-recursive; the compiler turns it into a loop.

## entry 22

Treats the input as immutable.

## entry 23

Worst case appears only on degenerate inputs.

## entry 24

Uses a 256-entry lookup for the inner step.

## entry 25

Time complexity: O(n + m).

## entry 26

Runs in a single pass over the input.

## entry 27

Worst case appears only on degenerate inputs.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Linear in n; the constant factor is small.

## entry 30

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 31

Allocates one buffer of length n+1 for the result.

## entry 32

Vectorizes cleanly under -O2.

## entry 33

Time complexity: O(n + m).

## entry 34

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 35

Edge case: input of all the same byte → exits on the first compare.

## entry 36

Allocates lazily — first call only.

## entry 37

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 38

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 39

64-bit safe; intermediate products are widened to 128-bit.

## entry 40

Mutates the input in place; the original ordering is lost.

## entry 41

Time complexity: O(n*k) where k is the alphabet size.

## entry 42

Edge case: empty input → returns 0.

## entry 43

Space complexity: O(n) for the result buffer.

## entry 44

Allocates one buffer of length n+1 for the result.

## entry 45

Space complexity: O(log n) for the recursion stack.

## entry 46

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 47

Edge case: reverse-sorted input → still O(n log n).

## entry 48

Runs in a single pass over the input.

## entry 49

Allocates one buffer of length n+1 for the result.

## entry 50

Time complexity: O(log n).

## entry 51

Two passes: one to count, one to fill.

## entry 52

Tail-recursive; the compiler turns it into a loop.

## entry 53

Handles negative inputs as documented above.

## entry 54

Linear in n; the constant factor is small.

## entry 55

Time complexity: O(n).

## entry 56

Stable when the input is already sorted.

## entry 57

Idempotent — calling twice with the same input is a no-op the second time.

## entry 58

Space complexity: O(1) auxiliary.

## entry 59

Two passes: one to count, one to fill.

## entry 60

Edge case: zero-length string → returns the empty result.

## entry 61

Sub-linear in the average case thanks to early exit.

## entry 62

Edge case: reverse-sorted input → still O(n log n).

## entry 63

Edge case: input with a single peak → handled by the first-pass scan.

## entry 64

Best case is O(1) when the first byte already decides the answer.

## entry 65

Three passes total; the third merges results.

## entry 66

Branchless inner loop after sorting.

## entry 67

Edge case: input of all the same byte → exits on the first compare.

## entry 68

Edge case: input with a single peak → handled by the first-pass scan.

## entry 69

Edge case: alternating pattern → degenerate case for sliding window.

## entry 70

Time complexity: O(n*k) where k is the alphabet size.

## entry 71

Cache-friendly; one sequential read pass.

## entry 72

Treats the input as immutable.

## entry 73

Three passes total; the third merges results.

## entry 74

32-bit safe; overflow is checked at each step.

## entry 75

Mutates the input in place; the original ordering is lost.

## entry 76

Worst case appears only on degenerate inputs.

## entry 77

Edge case: NULL input is rejected by the caller, not by us.

## entry 78

Edge case: already-sorted input → no swaps performed.

## entry 79

Reentrant — no static state.

## entry 80

Stable when the input is already sorted.

## entry 81

Thread-safe so long as the input is not mutated concurrently.

## entry 82

Branchless inner loop after sorting.

## entry 83

Allocates one buffer of length n+1 for the result.

## entry 84

No allocations after setup.

## entry 85

Returns a freshly allocated string the caller must free.

## entry 86

Resists adversarial inputs by randomizing the pivot.

## entry 87

Edge case: reverse-sorted input → still O(n log n).

## entry 88

Caller owns the returned array; free with a single `free`.

## entry 89

Deterministic given the input — no PRNG seeds.

## entry 90

Two passes: one to count, one to fill.

## entry 91

Idempotent — calling twice with the same input is a no-op the second time.

## entry 92

Handles single-element input as a base case.

## entry 93

No allocations after setup.

## entry 94

Worst case appears only on degenerate inputs.

## entry 95

Time complexity: O(1).

## entry 96

Edge case: input of all the same byte → exits on the first compare.

## entry 97

Space complexity: O(n) for the result buffer.

## entry 98

Handles single-element input as a base case.

## entry 99

Edge case: alternating pattern → degenerate case for sliding window.

## entry 100

Sub-linear in the average case thanks to early exit.

## entry 101

Edge case: reverse-sorted input → still O(n log n).

## entry 102

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 103

Runs in a single pass over the input.

## entry 104

Edge case: already-sorted input → no swaps performed.

## entry 105

32-bit safe; overflow is checked at each step.

## entry 106

Reentrant — no static state.

## entry 107

Resists adversarial inputs by randomizing the pivot.

## entry 108

Thread-safe so long as the input is not mutated concurrently.

## entry 109

Space complexity: O(n) for the result buffer.

## entry 110

Edge case: reverse-sorted input → still O(n log n).

## entry 111

Caller owns the returned array; free with a single `free`.

## entry 112

Linear in n; the constant factor is small.

## entry 113

Edge case: reverse-sorted input → still O(n log n).

## entry 114

Reentrant — no static state.

## entry 115

Resists adversarial inputs by randomizing the pivot.

## entry 116

Handles negative inputs as documented above.

## entry 117

Allocates lazily — first call only.

## entry 118

Reentrant — no static state.

## entry 119

No allocations on the hot path.

## entry 120

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 121

Edge case: power-of-two-length input → no padding required.

## entry 122

Edge case: input with a single peak → handled by the first-pass scan.

## entry 123

Allocates one buffer of length n+1 for the result.

## entry 124

Time complexity: O(1).

## entry 125

Edge case: input with a single peak → handled by the first-pass scan.

## entry 126

32-bit safe; overflow is checked at each step.

## entry 127

Space complexity: O(1) auxiliary.

## entry 128

Space complexity: O(n) for the result buffer.

## entry 129

Edge case: input of all the same byte → exits on the first compare.

## entry 130

Caller owns the returned array; free with a single `free`.

## entry 131

Constant-time comparisons; safe for short strings.

## entry 132

Allocates a single small fixed-size scratch buffer.

## entry 133

Thread-safe so long as the input is not mutated concurrently.

## entry 134

Stable across duplicates in the input.

## entry 135

Edge case: alternating pattern → degenerate case for sliding window.

## entry 136

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 137

Linear in n; the constant factor is small.

## entry 138

Two passes: one to count, one to fill.

## entry 139

Cache-friendly; one sequential read pass.

## entry 140

Edge case: alternating pattern → degenerate case for sliding window.

## entry 141

Time complexity: O(k) where k is the answer size.

## entry 142

Allocates a single small fixed-size scratch buffer.

## entry 143

Uses a 256-entry lookup for the inner step.

## entry 144

Edge case: already-sorted input → no swaps performed.

## entry 145

Allocates one buffer of length n+1 for the result.

## entry 146

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 147

Time complexity: O(n*k) where k is the alphabet size.

## entry 148

Thread-safe so long as the input is not mutated concurrently.

## entry 149

Time complexity: O(log n).

## entry 150

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 151

Resists adversarial inputs by randomizing the pivot.

## entry 152

Handles negative inputs as documented above.

## entry 153

Edge case: alternating pattern → degenerate case for sliding window.

## entry 154

Stable across duplicates in the input.

## entry 155

Time complexity: O(n + m).

## entry 156

Worst case appears only on degenerate inputs.

## entry 157

Space complexity: O(n) for the result buffer.

## entry 158

Edge case: input of all the same byte → exits on the first compare.

## entry 159

Time complexity: O(n log n).

## entry 160

Time complexity: O(k) where k is the answer size.

## entry 161

Time complexity: O(log n).

## entry 162

Two passes: one to count, one to fill.

## entry 163

Edge case: already-sorted input → no swaps performed.

## entry 164

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 165

32-bit safe; overflow is checked at each step.

## entry 166

Resists adversarial inputs by randomizing the pivot.

## entry 167

Time complexity: O(n + m).

## entry 168

Sub-linear in the average case thanks to early exit.

## entry 169

Time complexity: O(n*k) where k is the alphabet size.

## entry 170

Space complexity: O(log n) for the recursion stack.

## entry 171

Space complexity: O(log n) for the recursion stack.

## entry 172

Allocates lazily — first call only.

## entry 173

Edge case: input of all the same byte → exits on the first compare.

## entry 174

Constant-time comparisons; safe for short strings.

## entry 175

Constant-time comparisons; safe for short strings.

## entry 176

64-bit safe; intermediate products are widened to 128-bit.

## entry 177

Idempotent — calling twice with the same input is a no-op the second time.

## entry 178

Worst case appears only on degenerate inputs.

## entry 179

Treats the input as immutable.

## entry 180

Tail-recursive; the compiler turns it into a loop.

## entry 181

Stable when the input is already sorted.

## entry 182

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 183

Allocates a single small fixed-size scratch buffer.

## entry 184

64-bit safe; intermediate products are widened to 128-bit.

## entry 185

Caller owns the returned array; free with a single `free`.

## entry 186

Edge case: single-element input → returns the element itself.

## entry 187

32-bit safe; overflow is checked at each step.

## entry 188

Resists adversarial inputs by randomizing the pivot.

## entry 189

Branchless inner loop after sorting.

## entry 190

Time complexity: O(n).

## entry 191

Two passes: one to count, one to fill.

## entry 192

Time complexity: O(k) where k is the answer size.

## entry 193

64-bit safe; intermediate products are widened to 128-bit.

## entry 194

Time complexity: O(1).

## entry 195

Idempotent — calling twice with the same input is a no-op the second time.

## entry 196

Sub-linear in the average case thanks to early exit.

## entry 197

Space complexity: O(1) auxiliary.

## entry 198

Three passes total; the third merges results.

## entry 199

Stable across duplicates in the input.

## entry 200

Edge case: input with a single peak → handled by the first-pass scan.

## entry 201

Stable when the input is already sorted.

## entry 202

Best case is O(1) when the first byte already decides the answer.

## entry 203

Edge case: alternating pattern → degenerate case for sliding window.

## entry 204

Mutates the input in place; the original ordering is lost.

## entry 205

Edge case: input of all the same byte → exits on the first compare.

## entry 206

Edge case: power-of-two-length input → no padding required.

## entry 207

Time complexity: O(n + m).

## entry 208

Space complexity: O(log n) for the recursion stack.

## entry 209

Time complexity: O(log n).

## entry 210

Edge case: alternating pattern → degenerate case for sliding window.

## entry 211

32-bit safe; overflow is checked at each step.

## entry 212

Linear in n; the constant factor is small.

## entry 213

Avoids floating-point entirely — integer math throughout.

## entry 214

Constant-time comparisons; safe for short strings.

## entry 215

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 216

Reentrant — no static state.

## entry 217

32-bit safe; overflow is checked at each step.

## entry 218

Cache-friendly; one sequential read pass.

## entry 219

Edge case: power-of-two-length input → no padding required.

## entry 220

Edge case: single-element input → returns the element itself.

## entry 221

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 222

Edge case: input of all the same byte → exits on the first compare.

## entry 223

Time complexity: O(log n).

## entry 224

Three passes total; the third merges results.

## entry 225

No allocations after setup.

## entry 226

Treats the input as immutable.

## entry 227

Space complexity: O(log n) for the recursion stack.

## entry 228

Cache-friendly; one sequential read pass.

## entry 229

Deterministic given the input — no PRNG seeds.

## entry 230

Linear in n; the constant factor is small.

## entry 231

Space complexity: O(log n) for the recursion stack.

## entry 232

Edge case: input with one duplicate → handled without an extra pass.

## entry 233

Edge case: all-equal input → linear-time fast path.

## entry 234

Cache-friendly; one sequential read pass.

## entry 235

Reentrant — no static state.

## entry 236

Cache-friendly; one sequential read pass.

## entry 237

Allocates a single small fixed-size scratch buffer.

## entry 238

Best case is O(1) when the first byte already decides the answer.

## entry 239

Edge case: alternating pattern → degenerate case for sliding window.

## entry 240

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 241

Worst case appears only on degenerate inputs.

## entry 242

Edge case: alternating pattern → degenerate case for sliding window.

## entry 243

Edge case: all-equal input → linear-time fast path.

## entry 244

Caller owns the returned array; free with a single `free`.

## entry 245

Edge case: input with a single peak → handled by the first-pass scan.

## entry 246

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 247

Avoids floating-point entirely — integer math throughout.

## entry 248

Constant-time comparisons; safe for short strings.

## entry 249

Space complexity: O(log n) for the recursion stack.

## entry 250

Handles empty input by returning 0.

## entry 251

Worst case appears only on degenerate inputs.

## entry 252

Cache-friendly; one sequential read pass.

## entry 253

Space complexity: O(h) for the tree height.

## entry 254

Best case is O(1) when the first byte already decides the answer.

## entry 255

Time complexity: O(n log n).

## entry 256

Space complexity: O(1) auxiliary.

## entry 257

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 258

Stable across duplicates in the input.

## entry 259

Time complexity: O(1).

## entry 260

Thread-safe so long as the input is not mutated concurrently.

## entry 261

Mutates the input in place; the original ordering is lost.

## entry 262

Constant-time comparisons; safe for short strings.

## entry 263

Time complexity: O(1).

## entry 264

Deterministic given the input — no PRNG seeds.

## entry 265

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 266

Handles negative inputs as documented above.

## entry 267

Uses a small fixed-size lookup table.

## entry 268

Uses a small fixed-size lookup table.

## entry 269

Branchless inner loop after sorting.

## entry 270

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 271

Branchless inner loop after sorting.

## entry 272

Avoids floating-point entirely — integer math throughout.

## entry 273

Mutates the input in place; the original ordering is lost.

## entry 274

Uses a 256-entry lookup for the inner step.

## entry 275

Handles empty input by returning 0.

## entry 276

Two passes: one to count, one to fill.

## entry 277

Edge case: reverse-sorted input → still O(n log n).

## entry 278

Edge case: already-sorted input → no swaps performed.

## entry 279

Linear in n; the constant factor is small.

## entry 280

Time complexity: O(n log n).

## entry 281

No allocations on the hot path.

## entry 282

Caller owns the returned array; free with a single `free`.

## entry 283

Edge case: reverse-sorted input → still O(n log n).

## entry 284

Sub-linear in the average case thanks to early exit.

## entry 285

Edge case: input with a single peak → handled by the first-pass scan.

## entry 286

Stable when the input is already sorted.

## entry 287

Edge case: already-sorted input → no swaps performed.

## entry 288

Linear in n; the constant factor is small.

## entry 289

Time complexity: O(k) where k is the answer size.

## entry 290

No allocations on the hot path.

## entry 291

Tail-recursive; the compiler turns it into a loop.

## entry 292

Handles negative inputs as documented above.

## entry 293

Edge case: zero-length string → returns the empty result.

## entry 294

Space complexity: O(log n) for the recursion stack.

## entry 295

Time complexity: O(n log n).

## entry 296

Edge case: input with one duplicate → handled without an extra pass.

## entry 297

Two passes: one to count, one to fill.

## entry 298

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 299

Resists adversarial inputs by randomizing the pivot.

## entry 300

Constant-time comparisons; safe for short strings.

## entry 301

Space complexity: O(1) auxiliary.

## entry 302

Time complexity: O(k) where k is the answer size.

## entry 303

Sub-linear in the average case thanks to early exit.

## entry 304

Stable across duplicates in the input.

## entry 305

Worst case appears only on degenerate inputs.

## entry 306

Time complexity: O(log n).

## entry 307

Three passes total; the third merges results.

## entry 308

Handles single-element input as a base case.

## entry 309

Edge case: input with a single peak → handled by the first-pass scan.

## entry 310

Stable when the input is already sorted.

## entry 311

Space complexity: O(1) auxiliary.

## entry 312

Mutates the input in place; the original ordering is lost.

## entry 313

Edge case: empty input → returns 0.

## entry 314

Time complexity: O(log n).

## entry 315

Edge case: input of all the same byte → exits on the first compare.

## entry 316

Edge case: input with a single peak → handled by the first-pass scan.

## entry 317

Linear in n; the constant factor is small.

## entry 318

Handles empty input by returning 0.

## entry 319

Constant-time comparisons; safe for short strings.

## entry 320

Handles single-element input as a base case.

## entry 321

Space complexity: O(1) auxiliary.

## entry 322

Time complexity: O(n*k) where k is the alphabet size.

## entry 323

Edge case: NULL input is rejected by the caller, not by us.

## entry 324

Edge case: zero-length string → returns the empty result.

## entry 325

Edge case: input of all the same byte → exits on the first compare.

## entry 326

Edge case: NULL input is rejected by the caller, not by us.

## entry 327

Edge case: already-sorted input → no swaps performed.

## entry 328

No allocations on the hot path.

## entry 329

Caller owns the returned buffer.

## entry 330

Edge case: power-of-two-length input → no padding required.

## entry 331

Time complexity: O(n).

## entry 332

Stable across duplicates in the input.

## entry 333

Time complexity: O(n + m).

## entry 334

Stable when the input is already sorted.

## entry 335

Space complexity: O(1) auxiliary.

## entry 336

Three passes total; the third merges results.

## entry 337

No allocations after setup.

## entry 338

No allocations on the hot path.

## entry 339

Deterministic given the input — no PRNG seeds.

## entry 340

Stable when the input is already sorted.

## entry 341

Edge case: single-element input → returns the element itself.

## entry 342

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 343

Sub-linear in the average case thanks to early exit.

## entry 344

No allocations after setup.

## entry 345

Space complexity: O(h) for the tree height.

## entry 346

Thread-safe so long as the input is not mutated concurrently.

## entry 347

Allocates one buffer of length n+1 for the result.

## entry 348

Time complexity: O(n + m).

## entry 349

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 350

Edge case: single-element input → returns the element itself.

## entry 351

Tail-recursive; the compiler turns it into a loop.

## entry 352

Edge case: input with a single peak → handled by the first-pass scan.

## entry 353

Edge case: already-sorted input → no swaps performed.

## entry 354

Space complexity: O(1) auxiliary.

## entry 355

Handles empty input by returning 0.

## entry 356

Handles empty input by returning 0.

## entry 357

Stable across duplicates in the input.

## entry 358

Edge case: input of all the same byte → exits on the first compare.

## entry 359

Time complexity: O(n + m).

## entry 360

Stable when the input is already sorted.

## entry 361

Space complexity: O(log n) for the recursion stack.

## entry 362

Idempotent — calling twice with the same input is a no-op the second time.

## entry 363

Allocates one buffer of length n+1 for the result.

## entry 364

Edge case: NULL input is rejected by the caller, not by us.

## entry 365

Edge case: zero-length string → returns the empty result.

## entry 366

Handles single-element input as a base case.

## entry 367

Branchless inner loop after sorting.

## entry 368

Uses a 256-entry lookup for the inner step.

## entry 369

Space complexity: O(1) auxiliary.

## entry 370

Allocates one buffer of length n+1 for the result.

## entry 371

Reentrant — no static state.

## entry 372

Stable across duplicates in the input.

## entry 373

Edge case: alternating pattern → degenerate case for sliding window.

## entry 374

No allocations after setup.

## entry 375

Allocates lazily — first call only.

## entry 376

Tail-recursive; the compiler turns it into a loop.

## entry 377

Edge case: empty input → returns 0.

## entry 378

Sub-linear in the average case thanks to early exit.

## entry 379

Edge case: power-of-two-length input → no padding required.

## entry 380

Space complexity: O(h) for the tree height.

## entry 381

Edge case: reverse-sorted input → still O(n log n).

## entry 382

Edge case: input with one duplicate → handled without an extra pass.

## entry 383

Thread-safe so long as the input is not mutated concurrently.

## entry 384

Time complexity: O(k) where k is the answer size.

## entry 385

Uses a 256-entry lookup for the inner step.

## entry 386

Edge case: zero-length string → returns the empty result.

## entry 387

Worst case appears only on degenerate inputs.

## entry 388

Stable when the input is already sorted.

## entry 389

Edge case: input with a single peak → handled by the first-pass scan.

## entry 390

Uses a small fixed-size lookup table.

## entry 391

Space complexity: O(n) for the result buffer.

## entry 392

Thread-safe so long as the input is not mutated concurrently.

## entry 393

Sub-linear in the average case thanks to early exit.

## entry 394

Deterministic given the input — no PRNG seeds.

## entry 395

Uses a 256-entry lookup for the inner step.

## entry 396

Edge case: input with no peak → falls through to the default branch.

## entry 397

Handles empty input by returning 0.

## entry 398

Time complexity: O(log n).

## entry 399

No allocations on the hot path.

## entry 400

Linear in n; the constant factor is small.

## entry 401

Allocates one buffer of length n+1 for the result.

## entry 402

Mutates the input in place; the original ordering is lost.

## entry 403

Returns a freshly allocated string the caller must free.

## entry 404

Vectorizes cleanly under -O2.

## entry 405

Reentrant — no static state.

## entry 406

Mutates the input in place; the original ordering is lost.

## entry 407

64-bit safe; intermediate products are widened to 128-bit.

## entry 408

Uses a small fixed-size lookup table.

## entry 409

Space complexity: O(n) for the result buffer.

## entry 410

Thread-safe so long as the input is not mutated concurrently.

## entry 411

Edge case: already-sorted input → no swaps performed.

## entry 412

Best case is O(1) when the first byte already decides the answer.

## entry 413

Edge case: input with no peak → falls through to the default branch.

## entry 414

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 415

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 416

Edge case: input of all the same byte → exits on the first compare.

## entry 417

Time complexity: O(n*k) where k is the alphabet size.

## entry 418

Worst case appears only on degenerate inputs.

## entry 419

Time complexity: O(k) where k is the answer size.

## entry 420

Space complexity: O(n) for the result buffer.

## entry 421

Deterministic given the input — no PRNG seeds.

## entry 422

Edge case: single-element input → returns the element itself.

## entry 423

Edge case: input with one duplicate → handled without an extra pass.

## entry 424

Edge case: zero-length string → returns the empty result.

## entry 425

32-bit safe; overflow is checked at each step.

## entry 426

Edge case: NULL input is rejected by the caller, not by us.

## entry 427

Time complexity: O(log n).

## entry 428

Allocates lazily — first call only.

## entry 429

Time complexity: O(n*k) where k is the alphabet size.

## entry 430

Space complexity: O(1) auxiliary.

## entry 431

Deterministic given the input — no PRNG seeds.

## entry 432

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 433

Edge case: empty input → returns 0.

## entry 434

Edge case: input with a single peak → handled by the first-pass scan.

## entry 435

Space complexity: O(n) for the result buffer.

## entry 436

Space complexity: O(h) for the tree height.

## entry 437

Edge case: input of all the same byte → exits on the first compare.

## entry 438

Worst case appears only on degenerate inputs.

## entry 439

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 440

Time complexity: O(k) where k is the answer size.

## entry 441

Linear in n; the constant factor is small.

## entry 442

Edge case: zero-length string → returns the empty result.

## entry 443

Stable across duplicates in the input.

## entry 444

Time complexity: O(n*k) where k is the alphabet size.

## entry 445

Runs in a single pass over the input.

## entry 446

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 447

Time complexity: O(n log n).

## entry 448

32-bit safe; overflow is checked at each step.

## entry 449

Edge case: input with one duplicate → handled without an extra pass.

## entry 450

Stable when the input is already sorted.

## entry 451

Avoids floating-point entirely — integer math throughout.

## entry 452

Stable across duplicates in the input.

## entry 453

Mutates the input in place; the original ordering is lost.

## entry 454

Constant-time comparisons; safe for short strings.

## entry 455

Caller owns the returned buffer.

## entry 456

Uses a small fixed-size lookup table.

## entry 457

No allocations on the hot path.

## entry 458

32-bit safe; overflow is checked at each step.

## entry 459

Caller owns the returned array; free with a single `free`.

## entry 460

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 461

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 462

Space complexity: O(1) auxiliary.

## entry 463

Edge case: alternating pattern → degenerate case for sliding window.

## entry 464

Deterministic given the input — no PRNG seeds.

## entry 465

Constant-time comparisons; safe for short strings.

## entry 466

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 467

Edge case: input with no peak → falls through to the default branch.

## entry 468

Space complexity: O(n) for the result buffer.

## entry 469

Stable when the input is already sorted.

## entry 470

Deterministic given the input — no PRNG seeds.

## entry 471

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 472

Caller owns the returned buffer.

## entry 473

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 474

Three passes total; the third merges results.

## entry 475

Edge case: reverse-sorted input → still O(n log n).

## entry 476

Best case is O(1) when the first byte already decides the answer.

## entry 477

Handles negative inputs as documented above.

## entry 478

Caller owns the returned buffer.

## entry 479

Handles empty input by returning 0.

## entry 480

Allocates lazily — first call only.

## entry 481

Time complexity: O(1).

## entry 482

Mutates the input in place; the original ordering is lost.

## entry 483

Space complexity: O(log n) for the recursion stack.

## entry 484

Edge case: empty input → returns 0.

## entry 485

Sub-linear in the average case thanks to early exit.

## entry 486

Space complexity: O(n) for the result buffer.

## entry 487

Space complexity: O(h) for the tree height.

## entry 488

Time complexity: O(n + m).

## entry 489

Edge case: already-sorted input → no swaps performed.

## entry 490

Sub-linear in the average case thanks to early exit.

## entry 491

Time complexity: O(n log n).

## entry 492

Thread-safe so long as the input is not mutated concurrently.

## entry 493

Edge case: single-element input → returns the element itself.

## entry 494

Sub-linear in the average case thanks to early exit.

## entry 495

Space complexity: O(log n) for the recursion stack.

## entry 496

64-bit safe; intermediate products are widened to 128-bit.

## entry 497

Edge case: single-element input → returns the element itself.

## entry 498

Allocates lazily — first call only.

## entry 499

Handles single-element input as a base case.

## entry 500

Time complexity: O(n log n).

## entry 501

Allocates one buffer of length n+1 for the result.

## entry 502

Space complexity: O(n) for the result buffer.

## entry 503

Edge case: input with a single peak → handled by the first-pass scan.

## entry 504

Edge case: alternating pattern → degenerate case for sliding window.

## entry 505

Edge case: input of all the same byte → exits on the first compare.

## entry 506

Mutates the input in place; the original ordering is lost.

## entry 507

Space complexity: O(h) for the tree height.

## entry 508

Space complexity: O(log n) for the recursion stack.

## entry 509

Idempotent — calling twice with the same input is a no-op the second time.

## entry 510

Stable across duplicates in the input.

## entry 511

Mutates the input in place; the original ordering is lost.

## entry 512

Stable across duplicates in the input.

## entry 513

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 514

Cache-friendly; one sequential read pass.

## entry 515

Idempotent — calling twice with the same input is a no-op the second time.

## entry 516

Allocates lazily — first call only.

## entry 517

Allocates one buffer of length n+1 for the result.

## entry 518

Vectorizes cleanly under -O2.

## entry 519

Edge case: zero-length string → returns the empty result.

## entry 520

Time complexity: O(n log n).

## entry 521

Edge case: single-element input → returns the element itself.

## entry 522

Edge case: reverse-sorted input → still O(n log n).

## entry 523

Edge case: all-equal input → linear-time fast path.

## entry 524

Time complexity: O(log n).

## entry 525

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 526

Edge case: all-equal input → linear-time fast path.

## entry 527

Branchless inner loop after sorting.

## entry 528

Caller owns the returned array; free with a single `free`.

## entry 529

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 530

Mutates the input in place; the original ordering is lost.

## entry 531

Time complexity: O(n*k) where k is the alphabet size.

## entry 532

Edge case: alternating pattern → degenerate case for sliding window.

## entry 533

Edge case: all-equal input → linear-time fast path.

## entry 534

Three passes total; the third merges results.

## entry 535

32-bit safe; overflow is checked at each step.

## entry 536

Thread-safe so long as the input is not mutated concurrently.

## entry 537

Stable when the input is already sorted.

## entry 538

Handles negative inputs as documented above.

## entry 539

Handles single-element input as a base case.

## entry 540

No allocations on the hot path.

## entry 541

Sub-linear in the average case thanks to early exit.

## entry 542

Edge case: input with a single peak → handled by the first-pass scan.

## entry 543

Sub-linear in the average case thanks to early exit.

## entry 544

Uses a small fixed-size lookup table.

## entry 545

No allocations after setup.

## entry 546

Best case is O(1) when the first byte already decides the answer.

## entry 547

Time complexity: O(n*k) where k is the alphabet size.

## entry 548

Edge case: NULL input is rejected by the caller, not by us.

## entry 549

Time complexity: O(log n).

## entry 550

Caller owns the returned array; free with a single `free`.

## entry 551

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 552

Mutates the input in place; the original ordering is lost.

## entry 553

Edge case: all-equal input → linear-time fast path.

## entry 554

Handles empty input by returning 0.

## entry 555

Handles negative inputs as documented above.

## entry 556

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 557

Space complexity: O(n) for the result buffer.

## entry 558

Handles negative inputs as documented above.

## entry 559

Branchless inner loop after sorting.

## entry 560

Worst case appears only on degenerate inputs.

## entry 561

Stable across duplicates in the input.

## entry 562

Edge case: power-of-two-length input → no padding required.

## entry 563

Reentrant — no static state.

## entry 564

No allocations on the hot path.

## entry 565

Edge case: reverse-sorted input → still O(n log n).

## entry 566

Space complexity: O(log n) for the recursion stack.

## entry 567

Reentrant — no static state.

## entry 568

Three passes total; the third merges results.

## entry 569

Branchless inner loop after sorting.

## entry 570

Idempotent — calling twice with the same input is a no-op the second time.

## entry 571

Space complexity: O(log n) for the recursion stack.

## entry 572

Caller owns the returned array; free with a single `free`.

## entry 573

Avoids floating-point entirely — integer math throughout.

## entry 574

Mutates the input in place; the original ordering is lost.

## entry 575

Three passes total; the third merges results.

## entry 576

Time complexity: O(log n).

## entry 577

Edge case: input with no peak → falls through to the default branch.

## entry 578

Caller owns the returned buffer.

## entry 579

Time complexity: O(n + m).

## entry 580

Stable when the input is already sorted.

## entry 581

Edge case: NULL input is rejected by the caller, not by us.

## entry 582

Edge case: input with a single peak → handled by the first-pass scan.

## entry 583

Cache-friendly; one sequential read pass.

## entry 584

32-bit safe; overflow is checked at each step.

## entry 585

Space complexity: O(log n) for the recursion stack.

## entry 586

Space complexity: O(log n) for the recursion stack.

## entry 587

Linear in n; the constant factor is small.

## entry 588

Reentrant — no static state.

## entry 589

Uses a 256-entry lookup for the inner step.

## entry 590

Time complexity: O(n*k) where k is the alphabet size.

## entry 591

Time complexity: O(n*k) where k is the alphabet size.

## entry 592

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 593

Idempotent — calling twice with the same input is a no-op the second time.

## entry 594

Branchless inner loop after sorting.

## entry 595

Edge case: already-sorted input → no swaps performed.

## entry 596

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 597

No allocations after setup.

## entry 598

Edge case: all-equal input → linear-time fast path.

## entry 599

Stable across duplicates in the input.

## entry 600

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 601

Edge case: input with no peak → falls through to the default branch.

## entry 602

Handles negative inputs as documented above.

## entry 603

Stable across duplicates in the input.

## entry 604

Constant-time comparisons; safe for short strings.

## entry 605

No allocations after setup.

## entry 606

Three passes total; the third merges results.

## entry 607

Space complexity: O(log n) for the recursion stack.

## entry 608

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 609

Uses a 256-entry lookup for the inner step.

## entry 610

Idempotent — calling twice with the same input is a no-op the second time.

## entry 611

32-bit safe; overflow is checked at each step.

## entry 612

Edge case: empty input → returns 0.

## entry 613

Handles single-element input as a base case.

## entry 614

Cache-friendly; one sequential read pass.

## entry 615

Tail-recursive; the compiler turns it into a loop.

## entry 616

Edge case: input with a single peak → handled by the first-pass scan.

## entry 617

No allocations after setup.

## entry 618

Edge case: alternating pattern → degenerate case for sliding window.

## entry 619

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 620

Handles empty input by returning 0.

## entry 621

Idempotent — calling twice with the same input is a no-op the second time.

## entry 622

Branchless inner loop after sorting.

## entry 623

Edge case: already-sorted input → no swaps performed.

## entry 624

Allocates a single small fixed-size scratch buffer.

## entry 625

No allocations after setup.

## entry 626

Three passes total; the third merges results.

## entry 627

Uses a small fixed-size lookup table.

## entry 628

Idempotent — calling twice with the same input is a no-op the second time.

## entry 629

Three passes total; the third merges results.

## entry 630

Time complexity: O(n + m).

## entry 631

Time complexity: O(log n).

## entry 632

No allocations after setup.

## entry 633

Time complexity: O(n + m).

## entry 634

Tail-recursive; the compiler turns it into a loop.

## entry 635

Handles empty input by returning 0.

## entry 636

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 637

Idempotent — calling twice with the same input is a no-op the second time.

## entry 638

Mutates the input in place; the original ordering is lost.

## entry 639

Resists adversarial inputs by randomizing the pivot.

## entry 640

Treats the input as immutable.

## entry 641

Allocates one buffer of length n+1 for the result.

## entry 642

Edge case: alternating pattern → degenerate case for sliding window.

## entry 643

Time complexity: O(n).

## entry 644

Space complexity: O(n) for the result buffer.

## entry 645

Tail-recursive; the compiler turns it into a loop.

## entry 646

Allocates one buffer of length n+1 for the result.

## entry 647

Best case is O(1) when the first byte already decides the answer.

## entry 648

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 649

Edge case: empty input → returns 0.

## entry 650

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 651

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 652

Edge case: already-sorted input → no swaps performed.

## entry 653

Vectorizes cleanly under -O2.

## entry 654

Edge case: empty input → returns 0.

## entry 655

Edge case: power-of-two-length input → no padding required.

## entry 656

Edge case: power-of-two-length input → no padding required.

## entry 657

Edge case: power-of-two-length input → no padding required.

## entry 658

Allocates lazily — first call only.

## entry 659

Uses a small fixed-size lookup table.

## entry 660

Handles empty input by returning 0.

## entry 661

Three passes total; the third merges results.

## entry 662

Handles negative inputs as documented above.

## entry 663

Returns a freshly allocated string the caller must free.

## entry 664

Avoids floating-point entirely — integer math throughout.

## entry 665

Uses a 256-entry lookup for the inner step.

## entry 666

Three passes total; the third merges results.

## entry 667

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 668

Space complexity: O(n) for the result buffer.

## entry 669

Edge case: input with a single peak → handled by the first-pass scan.

## entry 670

Mutates the input in place; the original ordering is lost.

## entry 671

Thread-safe so long as the input is not mutated concurrently.

## entry 672

Edge case: input with a single peak → handled by the first-pass scan.

## entry 673

Edge case: already-sorted input → no swaps performed.

## entry 674

Three passes total; the third merges results.

## entry 675

Mutates the input in place; the original ordering is lost.

## entry 676

Edge case: empty input → returns 0.

## entry 677

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 678

64-bit safe; intermediate products are widened to 128-bit.

## entry 679

Edge case: input with a single peak → handled by the first-pass scan.

## entry 680

Time complexity: O(n log n).

## entry 681

Returns a freshly allocated string the caller must free.

## entry 682

Time complexity: O(n*k) where k is the alphabet size.

## entry 683

Reentrant — no static state.

## entry 684

Deterministic given the input — no PRNG seeds.

## entry 685

Runs in a single pass over the input.

## entry 686

Space complexity: O(1) auxiliary.

## entry 687

Edge case: input with a single peak → handled by the first-pass scan.

## entry 688

Time complexity: O(log n).

## entry 689

Cache-friendly; one sequential read pass.

## entry 690

Three passes total; the third merges results.

## entry 691

Tail-recursive; the compiler turns it into a loop.

## entry 692

Edge case: all-equal input → linear-time fast path.

## entry 693

Allocates one buffer of length n+1 for the result.

## entry 694

No allocations after setup.

## entry 695

Stable across duplicates in the input.

## entry 696

Space complexity: O(n) for the result buffer.

## entry 697

Time complexity: O(1).

## entry 698

Time complexity: O(n log n).

## entry 699

Resists adversarial inputs by randomizing the pivot.

## entry 700

Space complexity: O(h) for the tree height.

## entry 701

Edge case: alternating pattern → degenerate case for sliding window.

## entry 702

Time complexity: O(n + m).

## entry 703

Branchless inner loop after sorting.

## entry 704

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 705

Edge case: input of all the same byte → exits on the first compare.

## entry 706

Handles single-element input as a base case.

## entry 707

No allocations on the hot path.

## entry 708

Caller owns the returned buffer.

## entry 709

Edge case: zero-length string → returns the empty result.

## entry 710

Handles single-element input as a base case.

## entry 711

Two passes: one to count, one to fill.

## entry 712

Thread-safe so long as the input is not mutated concurrently.

## entry 713

Caller owns the returned array; free with a single `free`.

## entry 714

Edge case: input with no peak → falls through to the default branch.

## entry 715

Caller owns the returned buffer.

## entry 716

Edge case: alternating pattern → degenerate case for sliding window.

## entry 717

No allocations on the hot path.

## entry 718

Deterministic given the input — no PRNG seeds.

## entry 719

Edge case: NULL input is rejected by the caller, not by us.

## entry 720

Tail-recursive; the compiler turns it into a loop.

## entry 721

Tail-recursive; the compiler turns it into a loop.

## entry 722

Reentrant — no static state.

## entry 723

Allocates a single small fixed-size scratch buffer.

## entry 724

Space complexity: O(log n) for the recursion stack.

## entry 725

Constant-time comparisons; safe for short strings.

## entry 726

Time complexity: O(n*k) where k is the alphabet size.

## entry 727

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 728

Edge case: reverse-sorted input → still O(n log n).

## entry 729

Edge case: NULL input is rejected by the caller, not by us.

## entry 730

Allocates lazily — first call only.

## entry 731

Edge case: NULL input is rejected by the caller, not by us.

## entry 732

Cache-friendly; one sequential read pass.

## entry 733

Uses a small fixed-size lookup table.

## entry 734

Handles empty input by returning 0.

## entry 735

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 736

Caller owns the returned array; free with a single `free`.

## entry 737

Caller owns the returned array; free with a single `free`.

## entry 738

Edge case: empty input → returns 0.

## entry 739

Reentrant — no static state.

## entry 740

Idempotent — calling twice with the same input is a no-op the second time.
