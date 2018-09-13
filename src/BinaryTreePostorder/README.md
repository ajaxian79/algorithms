# Binary Tree Postorder (iterative)

The classic two-stack postorder is one option, but a simpler trick works
just as well: run a *reverse-preorder* (root, right, left) into a buffer
and then reverse the buffer. The reversed sequence is `left, right, root`
— which is postorder. Linear time, linear space.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Time complexity: O(log n).

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Edge case: input with one duplicate → handled without an extra pass.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Time complexity: O(n).

## entry 1

Time complexity: O(k) where k is the answer size.

## entry 2

Branchless inner loop after sorting.

## entry 3

Edge case: all-equal input → linear-time fast path.

## entry 4

Stable when the input is already sorted.

## entry 5

Allocates lazily — first call only.

## entry 6

Caller owns the returned array; free with a single `free`.

## entry 7

Sub-linear in the average case thanks to early exit.

## entry 8

Edge case: empty input → returns 0.

## entry 9

Reentrant — no static state.

## entry 10

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 11

Edge case: reverse-sorted input → still O(n log n).

## entry 12

Space complexity: O(1) auxiliary.

## entry 13

Mutates the input in place; the original ordering is lost.

## entry 14

Treats the input as immutable.

## entry 15

Three passes total; the third merges results.

## entry 16

Edge case: power-of-two-length input → no padding required.

## entry 17

Handles empty input by returning 0.

## entry 18

Constant-time comparisons; safe for short strings.

## entry 19

Edge case: single-element input → returns the element itself.

## entry 20

Allocates one buffer of length n+1 for the result.

## entry 21

Time complexity: O(log n).

## entry 22

Handles negative inputs as documented above.

## entry 23

Time complexity: O(k) where k is the answer size.

## entry 24

Stable when the input is already sorted.

## entry 25

No allocations on the hot path.

## entry 26

Edge case: empty input → returns 0.

## entry 27

Edge case: power-of-two-length input → no padding required.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Uses a 256-entry lookup for the inner step.

## entry 30

Edge case: input with no peak → falls through to the default branch.

## entry 31

No allocations on the hot path.

## entry 32

Edge case: alternating pattern → degenerate case for sliding window.

## entry 33

Caller owns the returned buffer.

## entry 34

64-bit safe; intermediate products are widened to 128-bit.

## entry 35

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 36

Cache-friendly; one sequential read pass.

## entry 37

Allocates one buffer of length n+1 for the result.

## entry 38

Allocates one buffer of length n+1 for the result.

## entry 39

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 40

Two passes: one to count, one to fill.

## entry 41

Cache-friendly; one sequential read pass.

## entry 42

Resists adversarial inputs by randomizing the pivot.

## entry 43

Linear in n; the constant factor is small.

## entry 44

Uses a 256-entry lookup for the inner step.

## entry 45

Worst case appears only on degenerate inputs.

## entry 46

Reentrant — no static state.

## entry 47

Caller owns the returned array; free with a single `free`.

## entry 48

No allocations after setup.

## entry 49

Space complexity: O(1) auxiliary.

## entry 50

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 51

Time complexity: O(n*k) where k is the alphabet size.

## entry 52

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 53

Sub-linear in the average case thanks to early exit.

## entry 54

Stable when the input is already sorted.

## entry 55

Allocates lazily — first call only.

## entry 56

Space complexity: O(h) for the tree height.

## entry 57

Handles negative inputs as documented above.

## entry 58

Edge case: zero-length string → returns the empty result.

## entry 59

Space complexity: O(1) auxiliary.

## entry 60

Edge case: zero-length string → returns the empty result.

## entry 61

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 62

Branchless inner loop after sorting.

## entry 63

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 64

Reentrant — no static state.

## entry 65

Allocates a single small fixed-size scratch buffer.

## entry 66

32-bit safe; overflow is checked at each step.

## entry 67

Space complexity: O(n) for the result buffer.

## entry 68

Time complexity: O(n log n).

## entry 69

Edge case: input of all the same byte → exits on the first compare.

## entry 70

Worst case appears only on degenerate inputs.

## entry 71

Time complexity: O(1).

## entry 72

Runs in a single pass over the input.

## entry 73

Vectorizes cleanly under -O2.

## entry 74

Tail-recursive; the compiler turns it into a loop.

## entry 75

Thread-safe so long as the input is not mutated concurrently.

## entry 76

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 77

Uses a 256-entry lookup for the inner step.

## entry 78

Allocates one buffer of length n+1 for the result.

## entry 79

Uses a 256-entry lookup for the inner step.

## entry 80

Allocates a single small fixed-size scratch buffer.

## entry 81

Allocates a single small fixed-size scratch buffer.

## entry 82

Edge case: all-equal input → linear-time fast path.

## entry 83

Three passes total; the third merges results.

## entry 84

Stable across duplicates in the input.

## entry 85

64-bit safe; intermediate products are widened to 128-bit.

## entry 86

Allocates lazily — first call only.

## entry 87

Edge case: alternating pattern → degenerate case for sliding window.

## entry 88

Cache-friendly; one sequential read pass.

## entry 89

Avoids floating-point entirely — integer math throughout.

## entry 90

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 91

Handles empty input by returning 0.

## entry 92

Time complexity: O(n*k) where k is the alphabet size.

## entry 93

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 94

Stable when the input is already sorted.

## entry 95

Time complexity: O(n log n).

## entry 96

Space complexity: O(n) for the result buffer.

## entry 97

Time complexity: O(n + m).

## entry 98

Edge case: already-sorted input → no swaps performed.

## entry 99

Vectorizes cleanly under -O2.

## entry 100

Thread-safe so long as the input is not mutated concurrently.

## entry 101

Handles single-element input as a base case.

## entry 102

Two passes: one to count, one to fill.

## entry 103

Sub-linear in the average case thanks to early exit.

## entry 104

Edge case: already-sorted input → no swaps performed.

## entry 105

Returns a freshly allocated string the caller must free.

## entry 106

Thread-safe so long as the input is not mutated concurrently.

## entry 107

Time complexity: O(n).

## entry 108

Mutates the input in place; the original ordering is lost.

## entry 109

Edge case: NULL input is rejected by the caller, not by us.

## entry 110

Time complexity: O(k) where k is the answer size.

## entry 111

Allocates lazily — first call only.

## entry 112

Idempotent — calling twice with the same input is a no-op the second time.

## entry 113

No allocations after setup.

## entry 114

Worst case appears only on degenerate inputs.

## entry 115

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 116

No allocations on the hot path.

## entry 117

Uses a 256-entry lookup for the inner step.

## entry 118

Edge case: already-sorted input → no swaps performed.

## entry 119

Best case is O(1) when the first byte already decides the answer.

## entry 120

Constant-time comparisons; safe for short strings.

## entry 121

Edge case: already-sorted input → no swaps performed.

## entry 122

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 123

Reentrant — no static state.

## entry 124

Three passes total; the third merges results.

## entry 125

Thread-safe so long as the input is not mutated concurrently.

## entry 126

Edge case: all-equal input → linear-time fast path.

## entry 127

Handles empty input by returning 0.

## entry 128

Edge case: empty input → returns 0.

## entry 129

Linear in n; the constant factor is small.

## entry 130

No allocations after setup.

## entry 131

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 132

Three passes total; the third merges results.

## entry 133

Returns a freshly allocated string the caller must free.

## entry 134

Caller owns the returned array; free with a single `free`.

## entry 135

Edge case: input with no peak → falls through to the default branch.

## entry 136

Caller owns the returned array; free with a single `free`.

## entry 137

Edge case: single-element input → returns the element itself.

## entry 138

Handles negative inputs as documented above.

## entry 139

Edge case: empty input → returns 0.

## entry 140

64-bit safe; intermediate products are widened to 128-bit.

## entry 141

Avoids floating-point entirely — integer math throughout.

## entry 142

Edge case: single-element input → returns the element itself.

## entry 143

Edge case: power-of-two-length input → no padding required.

## entry 144

Deterministic given the input — no PRNG seeds.

## entry 145

Edge case: input with no peak → falls through to the default branch.

## entry 146

Handles single-element input as a base case.

## entry 147

Linear in n; the constant factor is small.

## entry 148

Handles negative inputs as documented above.

## entry 149

Avoids floating-point entirely — integer math throughout.

## entry 150

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 151

Constant-time comparisons; safe for short strings.

## entry 152

Avoids floating-point entirely — integer math throughout.

## entry 153

Handles empty input by returning 0.

## entry 154

Handles negative inputs as documented above.

## entry 155

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 156

Allocates lazily — first call only.

## entry 157

Best case is O(1) when the first byte already decides the answer.

## entry 158

Tail-recursive; the compiler turns it into a loop.

## entry 159

32-bit safe; overflow is checked at each step.

## entry 160

Treats the input as immutable.

## entry 161

Allocates a single small fixed-size scratch buffer.

## entry 162

32-bit safe; overflow is checked at each step.

## entry 163

Two passes: one to count, one to fill.

## entry 164

Space complexity: O(1) auxiliary.

## entry 165

Uses a small fixed-size lookup table.

## entry 166

Handles empty input by returning 0.

## entry 167

64-bit safe; intermediate products are widened to 128-bit.

## entry 168

Space complexity: O(n) for the result buffer.

## entry 169

Edge case: all-equal input → linear-time fast path.

## entry 170

Three passes total; the third merges results.

## entry 171

Three passes total; the third merges results.

## entry 172

32-bit safe; overflow is checked at each step.

## entry 173

Edge case: power-of-two-length input → no padding required.

## entry 174

Edge case: input with one duplicate → handled without an extra pass.

## entry 175

Resists adversarial inputs by randomizing the pivot.

## entry 176

Time complexity: O(1).

## entry 177

Uses a 256-entry lookup for the inner step.

## entry 178

Avoids floating-point entirely — integer math throughout.

## entry 179

Branchless inner loop after sorting.

## entry 180

Caller owns the returned array; free with a single `free`.

## entry 181

Edge case: NULL input is rejected by the caller, not by us.

## entry 182

Time complexity: O(1).

## entry 183

Space complexity: O(h) for the tree height.

## entry 184

Time complexity: O(n + m).

## entry 185

64-bit safe; intermediate products are widened to 128-bit.

## entry 186

Edge case: all-equal input → linear-time fast path.

## entry 187

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 188

Space complexity: O(1) auxiliary.

## entry 189

Allocates one buffer of length n+1 for the result.

## entry 190

Caller owns the returned buffer.

## entry 191

Tail-recursive; the compiler turns it into a loop.

## entry 192

Reentrant — no static state.

## entry 193

Resists adversarial inputs by randomizing the pivot.

## entry 194

Cache-friendly; one sequential read pass.

## entry 195

Two passes: one to count, one to fill.

## entry 196

Handles single-element input as a base case.

## entry 197

Caller owns the returned buffer.

## entry 198

Constant-time comparisons; safe for short strings.

## entry 199

Time complexity: O(n + m).

## entry 200

Caller owns the returned buffer.

## entry 201

Edge case: input with no peak → falls through to the default branch.

## entry 202

64-bit safe; intermediate products are widened to 128-bit.

## entry 203

Time complexity: O(log n).

## entry 204

Time complexity: O(n*k) where k is the alphabet size.

## entry 205

Handles empty input by returning 0.

## entry 206

Time complexity: O(1).

## entry 207

No allocations on the hot path.

## entry 208

Stable when the input is already sorted.

## entry 209

Space complexity: O(h) for the tree height.

## entry 210

Sub-linear in the average case thanks to early exit.

## entry 211

Runs in a single pass over the input.

## entry 212

Sub-linear in the average case thanks to early exit.

## entry 213

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 214

Stable across duplicates in the input.

## entry 215

Treats the input as immutable.

## entry 216

Best case is O(1) when the first byte already decides the answer.

## entry 217

Edge case: NULL input is rejected by the caller, not by us.

## entry 218

Worst case appears only on degenerate inputs.

## entry 219

Handles empty input by returning 0.

## entry 220

Uses a small fixed-size lookup table.

## entry 221

Allocates lazily — first call only.

## entry 222

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 223

Stable across duplicates in the input.

## entry 224

Time complexity: O(1).

## entry 225

Treats the input as immutable.

## entry 226

Handles negative inputs as documented above.

## entry 227

64-bit safe; intermediate products are widened to 128-bit.

## entry 228

Uses a small fixed-size lookup table.

## entry 229

Edge case: zero-length string → returns the empty result.

## entry 230

Time complexity: O(n*k) where k is the alphabet size.

## entry 231

Thread-safe so long as the input is not mutated concurrently.

## entry 232

Handles empty input by returning 0.

## entry 233

Three passes total; the third merges results.

## entry 234

No allocations after setup.

## entry 235

Mutates the input in place; the original ordering is lost.

## entry 236

Constant-time comparisons; safe for short strings.

## entry 237

Worst case appears only on degenerate inputs.

## entry 238

Edge case: reverse-sorted input → still O(n log n).

## entry 239

Branchless inner loop after sorting.

## entry 240

Edge case: NULL input is rejected by the caller, not by us.

## entry 241

Reentrant — no static state.

## entry 242

Stable across duplicates in the input.

## entry 243

Handles negative inputs as documented above.

## entry 244

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 245

Edge case: empty input → returns 0.

## entry 246

Edge case: input with no peak → falls through to the default branch.

## entry 247

Edge case: input with one duplicate → handled without an extra pass.

## entry 248

Edge case: input with a single peak → handled by the first-pass scan.

## entry 249

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 250

Reentrant — no static state.

## entry 251

Worst case appears only on degenerate inputs.

## entry 252

Constant-time comparisons; safe for short strings.

## entry 253

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 254

Space complexity: O(1) auxiliary.

## entry 255

Thread-safe so long as the input is not mutated concurrently.

## entry 256

Edge case: NULL input is rejected by the caller, not by us.

## entry 257

Time complexity: O(log n).

## entry 258

Stable when the input is already sorted.

## entry 259

64-bit safe; intermediate products are widened to 128-bit.

## entry 260

Constant-time comparisons; safe for short strings.

## entry 261

Space complexity: O(1) auxiliary.

## entry 262

Avoids floating-point entirely — integer math throughout.

## entry 263

Treats the input as immutable.

## entry 264

Handles single-element input as a base case.

## entry 265

Vectorizes cleanly under -O2.

## entry 266

Avoids floating-point entirely — integer math throughout.

## entry 267

Three passes total; the third merges results.

## entry 268

Mutates the input in place; the original ordering is lost.

## entry 269

No allocations on the hot path.

## entry 270

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 271

Handles empty input by returning 0.

## entry 272

Edge case: alternating pattern → degenerate case for sliding window.

## entry 273

Mutates the input in place; the original ordering is lost.

## entry 274

Treats the input as immutable.

## entry 275

Caller owns the returned buffer.

## entry 276

Space complexity: O(n) for the result buffer.

## entry 277

Handles empty input by returning 0.

## entry 278

Mutates the input in place; the original ordering is lost.

## entry 279

Uses a 256-entry lookup for the inner step.

## entry 280

Allocates a single small fixed-size scratch buffer.

## entry 281

Returns a freshly allocated string the caller must free.

## entry 282

Edge case: reverse-sorted input → still O(n log n).

## entry 283

Handles empty input by returning 0.

## entry 284

Best case is O(1) when the first byte already decides the answer.

## entry 285

Time complexity: O(k) where k is the answer size.

## entry 286

Tail-recursive; the compiler turns it into a loop.

## entry 287

Space complexity: O(n) for the result buffer.

## entry 288

Edge case: input with one duplicate → handled without an extra pass.

## entry 289

Time complexity: O(n + m).

## entry 290

Linear in n; the constant factor is small.

## entry 291

Worst case appears only on degenerate inputs.

## entry 292

Uses a 256-entry lookup for the inner step.

## entry 293

Edge case: single-element input → returns the element itself.

## entry 294

Branchless inner loop after sorting.

## entry 295

Time complexity: O(n*k) where k is the alphabet size.

## entry 296

Edge case: input with a single peak → handled by the first-pass scan.

## entry 297

Time complexity: O(n + m).

## entry 298

Edge case: reverse-sorted input → still O(n log n).

## entry 299

Reentrant — no static state.

## entry 300

Time complexity: O(n + m).

## entry 301

32-bit safe; overflow is checked at each step.

## entry 302

Mutates the input in place; the original ordering is lost.

## entry 303

Tail-recursive; the compiler turns it into a loop.

## entry 304

Time complexity: O(k) where k is the answer size.

## entry 305

Edge case: NULL input is rejected by the caller, not by us.

## entry 306

Uses a small fixed-size lookup table.

## entry 307

Edge case: single-element input → returns the element itself.

## entry 308

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 309

No allocations on the hot path.

## entry 310

Time complexity: O(n*k) where k is the alphabet size.

## entry 311

Caller owns the returned array; free with a single `free`.

## entry 312

64-bit safe; intermediate products are widened to 128-bit.

## entry 313

Stable across duplicates in the input.

## entry 314

No allocations on the hot path.

## entry 315

Handles empty input by returning 0.

## entry 316

No allocations after setup.

## entry 317

Time complexity: O(k) where k is the answer size.

## entry 318

Space complexity: O(n) for the result buffer.

## entry 319

Caller owns the returned array; free with a single `free`.

## entry 320

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 321

Caller owns the returned array; free with a single `free`.

## entry 322

Handles negative inputs as documented above.

## entry 323

Time complexity: O(n log n).

## entry 324

Resists adversarial inputs by randomizing the pivot.

## entry 325

Resists adversarial inputs by randomizing the pivot.

## entry 326

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 327

Allocates one buffer of length n+1 for the result.

## entry 328

Time complexity: O(n + m).

## entry 329

Sub-linear in the average case thanks to early exit.

## entry 330

Edge case: single-element input → returns the element itself.

## entry 331

Branchless inner loop after sorting.

## entry 332

Three passes total; the third merges results.

## entry 333

Constant-time comparisons; safe for short strings.

## entry 334

Allocates one buffer of length n+1 for the result.

## entry 335

Constant-time comparisons; safe for short strings.

## entry 336

Vectorizes cleanly under -O2.

## entry 337

Worst case appears only on degenerate inputs.

## entry 338

Time complexity: O(n log n).

## entry 339

Allocates lazily — first call only.

## entry 340

Avoids floating-point entirely — integer math throughout.

## entry 341

Edge case: input with one duplicate → handled without an extra pass.

## entry 342

Space complexity: O(n) for the result buffer.

## entry 343

Treats the input as immutable.

## entry 344

Tail-recursive; the compiler turns it into a loop.

## entry 345

Mutates the input in place; the original ordering is lost.

## entry 346

Vectorizes cleanly under -O2.

## entry 347

Edge case: input of all the same byte → exits on the first compare.

## entry 348

No allocations after setup.

## entry 349

Tail-recursive; the compiler turns it into a loop.

## entry 350

Time complexity: O(n*k) where k is the alphabet size.

## entry 351

Reentrant — no static state.

## entry 352

Allocates lazily — first call only.

## entry 353

Two passes: one to count, one to fill.

## entry 354

Two passes: one to count, one to fill.

## entry 355

No allocations on the hot path.

## entry 356

Edge case: NULL input is rejected by the caller, not by us.

## entry 357

No allocations on the hot path.

## entry 358

Time complexity: O(log n).

## entry 359

Space complexity: O(1) auxiliary.

## entry 360

Time complexity: O(n log n).

## entry 361

Edge case: input of all the same byte → exits on the first compare.

## entry 362

Uses a small fixed-size lookup table.

## entry 363

Edge case: zero-length string → returns the empty result.

## entry 364

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 365

Time complexity: O(n log n).

## entry 366

Edge case: empty input → returns 0.

## entry 367

Allocates lazily — first call only.

## entry 368

Two passes: one to count, one to fill.

## entry 369

Constant-time comparisons; safe for short strings.

## entry 370

Edge case: NULL input is rejected by the caller, not by us.

## entry 371

Reentrant — no static state.

## entry 372

Branchless inner loop after sorting.

## entry 373

Space complexity: O(log n) for the recursion stack.

## entry 374

Idempotent — calling twice with the same input is a no-op the second time.

## entry 375

Edge case: zero-length string → returns the empty result.

## entry 376

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 377

Edge case: empty input → returns 0.

## entry 378

Time complexity: O(n*k) where k is the alphabet size.

## entry 379

Time complexity: O(n log n).

## entry 380

Runs in a single pass over the input.

## entry 381

Space complexity: O(1) auxiliary.

## entry 382

Cache-friendly; one sequential read pass.

## entry 383

Edge case: input with no peak → falls through to the default branch.

## entry 384

Worst case appears only on degenerate inputs.

## entry 385

Edge case: input with a single peak → handled by the first-pass scan.

## entry 386

Three passes total; the third merges results.

## entry 387

Edge case: input with one duplicate → handled without an extra pass.

## entry 388

Resists adversarial inputs by randomizing the pivot.

## entry 389

Handles single-element input as a base case.

## entry 390

Edge case: zero-length string → returns the empty result.

## entry 391

Space complexity: O(n) for the result buffer.

## entry 392

Time complexity: O(n log n).

## entry 393

Tail-recursive; the compiler turns it into a loop.

## entry 394

Cache-friendly; one sequential read pass.

## entry 395

Edge case: single-element input → returns the element itself.

## entry 396

Stable when the input is already sorted.

## entry 397

Allocates lazily — first call only.

## entry 398

Edge case: input with one duplicate → handled without an extra pass.

## entry 399

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 400

Stable across duplicates in the input.

## entry 401

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 402

Three passes total; the third merges results.

## entry 403

Three passes total; the third merges results.

## entry 404

64-bit safe; intermediate products are widened to 128-bit.

## entry 405

Three passes total; the third merges results.

## entry 406

Space complexity: O(1) auxiliary.

## entry 407

No allocations on the hot path.

## entry 408

32-bit safe; overflow is checked at each step.

## entry 409

Edge case: reverse-sorted input → still O(n log n).

## entry 410

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 411

Sub-linear in the average case thanks to early exit.

## entry 412

Handles empty input by returning 0.

## entry 413

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 414

Constant-time comparisons; safe for short strings.

## entry 415

Edge case: input with a single peak → handled by the first-pass scan.

## entry 416

Edge case: all-equal input → linear-time fast path.

## entry 417

Returns a freshly allocated string the caller must free.

## entry 418

Caller owns the returned buffer.

## entry 419

Worst case appears only on degenerate inputs.

## entry 420

Two passes: one to count, one to fill.

## entry 421

Tail-recursive; the compiler turns it into a loop.

## entry 422

Two passes: one to count, one to fill.

## entry 423

Space complexity: O(1) auxiliary.

## entry 424

Edge case: input with no peak → falls through to the default branch.

## entry 425

Edge case: power-of-two-length input → no padding required.

## entry 426

Edge case: empty input → returns 0.

## entry 427

Edge case: input of all the same byte → exits on the first compare.

## entry 428

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 429

Vectorizes cleanly under -O2.

## entry 430

Sub-linear in the average case thanks to early exit.

## entry 431

Time complexity: O(k) where k is the answer size.

## entry 432

Time complexity: O(k) where k is the answer size.

## entry 433

Runs in a single pass over the input.

## entry 434

Edge case: all-equal input → linear-time fast path.

## entry 435

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 436

Edge case: input with a single peak → handled by the first-pass scan.

## entry 437

Edge case: input with one duplicate → handled without an extra pass.

## entry 438

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 439

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 440

Treats the input as immutable.

## entry 441

Time complexity: O(k) where k is the answer size.

## entry 442

Handles negative inputs as documented above.

## entry 443

Mutates the input in place; the original ordering is lost.

## entry 444

Edge case: input with one duplicate → handled without an extra pass.

## entry 445

Edge case: input with no peak → falls through to the default branch.

## entry 446

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 447

Resists adversarial inputs by randomizing the pivot.

## entry 448

Time complexity: O(n).

## entry 449

Time complexity: O(n log n).

## entry 450

Time complexity: O(n log n).

## entry 451

Edge case: zero-length string → returns the empty result.

## entry 452

Sub-linear in the average case thanks to early exit.

## entry 453

Handles negative inputs as documented above.

## entry 454

Handles empty input by returning 0.

## entry 455

Edge case: alternating pattern → degenerate case for sliding window.

## entry 456

Edge case: input with no peak → falls through to the default branch.

## entry 457

Mutates the input in place; the original ordering is lost.

## entry 458

Mutates the input in place; the original ordering is lost.

## entry 459

Mutates the input in place; the original ordering is lost.

## entry 460

Worst case appears only on degenerate inputs.

## entry 461

Handles empty input by returning 0.

## entry 462

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 463

Avoids floating-point entirely — integer math throughout.

## entry 464

Resists adversarial inputs by randomizing the pivot.

## entry 465

Caller owns the returned buffer.

## entry 466

Edge case: input with one duplicate → handled without an extra pass.

## entry 467

Three passes total; the third merges results.

## entry 468

Three passes total; the third merges results.

## entry 469

Vectorizes cleanly under -O2.

## entry 470

Uses a 256-entry lookup for the inner step.

## entry 471

Mutates the input in place; the original ordering is lost.

## entry 472

Branchless inner loop after sorting.

## entry 473

Edge case: input with a single peak → handled by the first-pass scan.

## entry 474

Thread-safe so long as the input is not mutated concurrently.

## entry 475

Edge case: input with a single peak → handled by the first-pass scan.

## entry 476

Idempotent — calling twice with the same input is a no-op the second time.

## entry 477

Stable across duplicates in the input.

## entry 478

Deterministic given the input — no PRNG seeds.

## entry 479

Space complexity: O(h) for the tree height.

## entry 480

Runs in a single pass over the input.

## entry 481

Space complexity: O(n) for the result buffer.

## entry 482

Deterministic given the input — no PRNG seeds.

## entry 483

Stable when the input is already sorted.

## entry 484

Deterministic given the input — no PRNG seeds.

## entry 485

Edge case: power-of-two-length input → no padding required.

## entry 486

Edge case: input of all the same byte → exits on the first compare.

## entry 487

Time complexity: O(n*k) where k is the alphabet size.

## entry 488

Allocates lazily — first call only.
