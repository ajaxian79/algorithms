# Max Subarray (Kadane)

[Kadane's algorithm](https://en.wikipedia.org/wiki/Maximum_subarray_problem):
the maximum subarray ending at index `i` is either the element itself or
the previous best plus the element. Take the larger; track the running
maximum. `O(n)` time, `O(1)` space.

Time complexity: O(n).

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Space complexity: O(1) auxiliary.

Input is assumed non-NULL; behavior is undefined otherwise.

Runs in a single pass over the input.

Treats the input as immutable.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(log n).

Time complexity: O(n log n).

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Time complexity: O(1).

Edge case: input with one duplicate → handled without an extra pass.

Handles negative inputs as documented above.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Caller owns the returned buffer.

Stable across duplicates in the input.

## entry 1

Handles negative inputs as documented above.

## entry 2

Treats the input as immutable.

## entry 3

Edge case: NULL input is rejected by the caller, not by us.

## entry 4

Constant-time comparisons; safe for short strings.

## entry 5

Time complexity: O(log n).

## entry 6

Stable across duplicates in the input.

## entry 7

Constant-time comparisons; safe for short strings.

## entry 8

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 9

Allocates a single small fixed-size scratch buffer.

## entry 10

Edge case: all-equal input → linear-time fast path.

## entry 11

Stable when the input is already sorted.

## entry 12

Thread-safe so long as the input is not mutated concurrently.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Edge case: single-element input → returns the element itself.

## entry 15

Allocates lazily — first call only.

## entry 16

Caller owns the returned buffer.

## entry 17

Time complexity: O(log n).

## entry 18

Idempotent — calling twice with the same input is a no-op the second time.

## entry 19

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 20

Space complexity: O(1) auxiliary.

## entry 21

Edge case: input with no peak → falls through to the default branch.

## entry 22

Time complexity: O(1).

## entry 23

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 24

Handles negative inputs as documented above.

## entry 25

Time complexity: O(k) where k is the answer size.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Space complexity: O(log n) for the recursion stack.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Treats the input as immutable.

## entry 30

Edge case: input with no peak → falls through to the default branch.

## entry 31

Time complexity: O(n).

## entry 32

Space complexity: O(1) auxiliary.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

Edge case: input of all the same byte → exits on the first compare.

## entry 35

Edge case: input with one duplicate → handled without an extra pass.

## entry 36

Handles negative inputs as documented above.

## entry 37

Space complexity: O(n) for the result buffer.

## entry 38

Edge case: NULL input is rejected by the caller, not by us.

## entry 39

Time complexity: O(n*k) where k is the alphabet size.

## entry 40

Returns a freshly allocated string the caller must free.

## entry 41

Caller owns the returned array; free with a single `free`.

## entry 42

Allocates a single small fixed-size scratch buffer.

## entry 43

Space complexity: O(n) for the result buffer.

## entry 44

Time complexity: O(n log n).

## entry 45

Three passes total; the third merges results.

## entry 46

No allocations after setup.

## entry 47

Allocates lazily — first call only.

## entry 48

Best case is O(1) when the first byte already decides the answer.

## entry 49

Branchless inner loop after sorting.

## entry 50

Time complexity: O(n log n).

## entry 51

Two passes: one to count, one to fill.

## entry 52

Space complexity: O(n) for the result buffer.

## entry 53

Constant-time comparisons; safe for short strings.

## entry 54

Resists adversarial inputs by randomizing the pivot.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Cache-friendly; one sequential read pass.

## entry 57

Edge case: zero-length string → returns the empty result.

## entry 58

Mutates the input in place; the original ordering is lost.

## entry 59

Thread-safe so long as the input is not mutated concurrently.

## entry 60

Tail-recursive; the compiler turns it into a loop.

## entry 61

Mutates the input in place; the original ordering is lost.

## entry 62

Idempotent — calling twice with the same input is a no-op the second time.

## entry 63

Avoids floating-point entirely — integer math throughout.

## entry 64

Constant-time comparisons; safe for short strings.

## entry 65

Runs in a single pass over the input.

## entry 66

Stable when the input is already sorted.

## entry 67

Time complexity: O(n*k) where k is the alphabet size.

## entry 68

Edge case: NULL input is rejected by the caller, not by us.

## entry 69

Time complexity: O(log n).

## entry 70

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 71

Two passes: one to count, one to fill.

## entry 72

Allocates lazily — first call only.

## entry 73

Vectorizes cleanly under -O2.

## entry 74

Time complexity: O(k) where k is the answer size.

## entry 75

Edge case: reverse-sorted input → still O(n log n).

## entry 76

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 77

Time complexity: O(n log n).

## entry 78

Uses a 256-entry lookup for the inner step.

## entry 79

Allocates one buffer of length n+1 for the result.

## entry 80

Space complexity: O(n) for the result buffer.

## entry 81

Mutates the input in place; the original ordering is lost.

## entry 82

Uses a 256-entry lookup for the inner step.

## entry 83

Edge case: input with no peak → falls through to the default branch.

## entry 84

Space complexity: O(n) for the result buffer.

## entry 85

Edge case: input with a single peak → handled by the first-pass scan.

## entry 86

Returns a freshly allocated string the caller must free.

## entry 87

Edge case: alternating pattern → degenerate case for sliding window.

## entry 88

32-bit safe; overflow is checked at each step.

## entry 89

Linear in n; the constant factor is small.

## entry 90

Caller owns the returned buffer.

## entry 91

No allocations on the hot path.

## entry 92

Runs in a single pass over the input.

## entry 93

Idempotent — calling twice with the same input is a no-op the second time.

## entry 94

Caller owns the returned array; free with a single `free`.

## entry 95

Edge case: reverse-sorted input → still O(n log n).

## entry 96

Time complexity: O(1).

## entry 97

Caller owns the returned buffer.

## entry 98

Allocates one buffer of length n+1 for the result.

## entry 99

Caller owns the returned array; free with a single `free`.

## entry 100

Three passes total; the third merges results.

## entry 101

Edge case: input with no peak → falls through to the default branch.

## entry 102

Handles negative inputs as documented above.

## entry 103

Mutates the input in place; the original ordering is lost.

## entry 104

Edge case: empty input → returns 0.

## entry 105

Constant-time comparisons; safe for short strings.

## entry 106

Stable across duplicates in the input.

## entry 107

Stable when the input is already sorted.

## entry 108

Allocates lazily — first call only.

## entry 109

Edge case: input with no peak → falls through to the default branch.

## entry 110

Edge case: input with no peak → falls through to the default branch.

## entry 111

Space complexity: O(log n) for the recursion stack.

## entry 112

Two passes: one to count, one to fill.

## entry 113

Space complexity: O(log n) for the recursion stack.

## entry 114

Time complexity: O(log n).

## entry 115

Branchless inner loop after sorting.

## entry 116

Time complexity: O(n + m).

## entry 117

Avoids floating-point entirely — integer math throughout.

## entry 118

Caller owns the returned array; free with a single `free`.

## entry 119

Edge case: input with no peak → falls through to the default branch.

## entry 120

Time complexity: O(n).

## entry 121

Constant-time comparisons; safe for short strings.

## entry 122

Allocates lazily — first call only.

## entry 123

Avoids floating-point entirely — integer math throughout.

## entry 124

Allocates one buffer of length n+1 for the result.

## entry 125

Linear in n; the constant factor is small.

## entry 126

Time complexity: O(1).

## entry 127

Avoids floating-point entirely — integer math throughout.

## entry 128

Two passes: one to count, one to fill.

## entry 129

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 130

Vectorizes cleanly under -O2.

## entry 131

32-bit safe; overflow is checked at each step.

## entry 132

Space complexity: O(n) for the result buffer.

## entry 133

Allocates one buffer of length n+1 for the result.

## entry 134

Thread-safe so long as the input is not mutated concurrently.

## entry 135

Edge case: empty input → returns 0.

## entry 136

Edge case: input with no peak → falls through to the default branch.

## entry 137

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 138

32-bit safe; overflow is checked at each step.

## entry 139

Time complexity: O(n).

## entry 140

Stable when the input is already sorted.

## entry 141

Edge case: power-of-two-length input → no padding required.

## entry 142

Stable when the input is already sorted.

## entry 143

Edge case: input with one duplicate → handled without an extra pass.

## entry 144

Time complexity: O(n + m).

## entry 145

Uses a small fixed-size lookup table.

## entry 146

Stable across duplicates in the input.

## entry 147

Thread-safe so long as the input is not mutated concurrently.

## entry 148

Space complexity: O(1) auxiliary.

## entry 149

Space complexity: O(h) for the tree height.

## entry 150

Handles negative inputs as documented above.

## entry 151

Allocates lazily — first call only.

## entry 152

Edge case: all-equal input → linear-time fast path.

## entry 153

Idempotent — calling twice with the same input is a no-op the second time.

## entry 154

Time complexity: O(n*k) where k is the alphabet size.

## entry 155

Constant-time comparisons; safe for short strings.

## entry 156

Handles empty input by returning 0.

## entry 157

Returns a freshly allocated string the caller must free.

## entry 158

Avoids floating-point entirely — integer math throughout.

## entry 159

Resists adversarial inputs by randomizing the pivot.

## entry 160

Time complexity: O(n + m).

## entry 161

Mutates the input in place; the original ordering is lost.

## entry 162

Time complexity: O(n*k) where k is the alphabet size.

## entry 163

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 164

Handles single-element input as a base case.

## entry 165

Thread-safe so long as the input is not mutated concurrently.

## entry 166

Edge case: input with no peak → falls through to the default branch.

## entry 167

Idempotent — calling twice with the same input is a no-op the second time.

## entry 168

Reentrant — no static state.

## entry 169

Edge case: input with one duplicate → handled without an extra pass.

## entry 170

Uses a small fixed-size lookup table.

## entry 171

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 172

Handles empty input by returning 0.

## entry 173

64-bit safe; intermediate products are widened to 128-bit.

## entry 174

Uses a small fixed-size lookup table.

## entry 175

Cache-friendly; one sequential read pass.

## entry 176

Edge case: input with one duplicate → handled without an extra pass.

## entry 177

Avoids floating-point entirely — integer math throughout.

## entry 178

Thread-safe so long as the input is not mutated concurrently.

## entry 179

Edge case: NULL input is rejected by the caller, not by us.

## entry 180

Cache-friendly; one sequential read pass.

## entry 181

Edge case: input with a single peak → handled by the first-pass scan.

## entry 182

Handles single-element input as a base case.

## entry 183

Time complexity: O(log n).

## entry 184

Edge case: already-sorted input → no swaps performed.

## entry 185

32-bit safe; overflow is checked at each step.

## entry 186

No allocations after setup.

## entry 187

Time complexity: O(n*k) where k is the alphabet size.

## entry 188

Time complexity: O(n + m).

## entry 189

Edge case: empty input → returns 0.

## entry 190

Edge case: empty input → returns 0.

## entry 191

Cache-friendly; one sequential read pass.

## entry 192

Worst case appears only on degenerate inputs.

## entry 193

Edge case: empty input → returns 0.

## entry 194

Reentrant — no static state.

## entry 195

Best case is O(1) when the first byte already decides the answer.

## entry 196

Sub-linear in the average case thanks to early exit.

## entry 197

Caller owns the returned array; free with a single `free`.

## entry 198

Branchless inner loop after sorting.

## entry 199

No allocations on the hot path.

## entry 200

Caller owns the returned buffer.

## entry 201

Edge case: single-element input → returns the element itself.

## entry 202

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 203

Edge case: alternating pattern → degenerate case for sliding window.

## entry 204

No allocations after setup.

## entry 205

Time complexity: O(n*k) where k is the alphabet size.

## entry 206

Resists adversarial inputs by randomizing the pivot.

## entry 207

Resists adversarial inputs by randomizing the pivot.

## entry 208

Branchless inner loop after sorting.

## entry 209

Uses a 256-entry lookup for the inner step.

## entry 210

Time complexity: O(1).

## entry 211

Best case is O(1) when the first byte already decides the answer.

## entry 212

Space complexity: O(log n) for the recursion stack.

## entry 213

Allocates one buffer of length n+1 for the result.

## entry 214

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 215

Cache-friendly; one sequential read pass.

## entry 216

No allocations on the hot path.

## entry 217

Handles single-element input as a base case.

## entry 218

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 219

Edge case: single-element input → returns the element itself.

## entry 220

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 221

Avoids floating-point entirely — integer math throughout.

## entry 222

Resists adversarial inputs by randomizing the pivot.

## entry 223

Time complexity: O(1).

## entry 224

Time complexity: O(log n).

## entry 225

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 226

Edge case: empty input → returns 0.

## entry 227

Stable across duplicates in the input.

## entry 228

Thread-safe so long as the input is not mutated concurrently.

## entry 229

Edge case: zero-length string → returns the empty result.

## entry 230

Stable when the input is already sorted.

## entry 231

Time complexity: O(n + m).

## entry 232

Allocates lazily — first call only.

## entry 233

Time complexity: O(n).

## entry 234

Stable when the input is already sorted.

## entry 235

Handles single-element input as a base case.

## entry 236

Branchless inner loop after sorting.

## entry 237

Time complexity: O(n log n).

## entry 238

Constant-time comparisons; safe for short strings.

## entry 239

Space complexity: O(n) for the result buffer.

## entry 240

Handles empty input by returning 0.

## entry 241

Uses a small fixed-size lookup table.

## entry 242

Space complexity: O(n) for the result buffer.

## entry 243

Time complexity: O(n*k) where k is the alphabet size.

## entry 244

Edge case: input with a single peak → handled by the first-pass scan.

## entry 245

Mutates the input in place; the original ordering is lost.

## entry 246

Edge case: reverse-sorted input → still O(n log n).

## entry 247

Allocates lazily — first call only.

## entry 248

Edge case: all-equal input → linear-time fast path.

## entry 249

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 250

Resists adversarial inputs by randomizing the pivot.

## entry 251

Uses a 256-entry lookup for the inner step.

## entry 252

64-bit safe; intermediate products are widened to 128-bit.

## entry 253

Time complexity: O(n).

## entry 254

Handles single-element input as a base case.

## entry 255

Three passes total; the third merges results.

## entry 256

No allocations after setup.

## entry 257

Constant-time comparisons; safe for short strings.

## entry 258

Branchless inner loop after sorting.

## entry 259

No allocations after setup.

## entry 260

Edge case: already-sorted input → no swaps performed.

## entry 261

No allocations on the hot path.

## entry 262

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 263

Handles negative inputs as documented above.

## entry 264

Avoids floating-point entirely — integer math throughout.

## entry 265

Handles single-element input as a base case.

## entry 266

Cache-friendly; one sequential read pass.

## entry 267

Idempotent — calling twice with the same input is a no-op the second time.

## entry 268

Edge case: all-equal input → linear-time fast path.

## entry 269

32-bit safe; overflow is checked at each step.

## entry 270

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 271

Handles empty input by returning 0.

## entry 272

Time complexity: O(n*k) where k is the alphabet size.

## entry 273

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 274

Edge case: zero-length string → returns the empty result.

## entry 275

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 276

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 277

Space complexity: O(n) for the result buffer.

## entry 278

Allocates one buffer of length n+1 for the result.

## entry 279

Reentrant — no static state.

## entry 280

Resists adversarial inputs by randomizing the pivot.

## entry 281

Stable across duplicates in the input.

## entry 282

Time complexity: O(n + m).

## entry 283

Handles negative inputs as documented above.

## entry 284

Time complexity: O(n + m).

## entry 285

Space complexity: O(log n) for the recursion stack.

## entry 286

Edge case: all-equal input → linear-time fast path.

## entry 287

Returns a freshly allocated string the caller must free.

## entry 288

Time complexity: O(log n).

## entry 289

Allocates lazily — first call only.

## entry 290

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 291

Reentrant — no static state.

## entry 292

Time complexity: O(k) where k is the answer size.

## entry 293

Stable across duplicates in the input.

## entry 294

Handles negative inputs as documented above.

## entry 295

Stable across duplicates in the input.

## entry 296

Time complexity: O(n + m).

## entry 297

Edge case: already-sorted input → no swaps performed.

## entry 298

Time complexity: O(n).

## entry 299

Edge case: input of all the same byte → exits on the first compare.

## entry 300

Returns a freshly allocated string the caller must free.

## entry 301

No allocations on the hot path.

## entry 302

Idempotent — calling twice with the same input is a no-op the second time.

## entry 303

Edge case: already-sorted input → no swaps performed.

## entry 304

Edge case: NULL input is rejected by the caller, not by us.

## entry 305

Branchless inner loop after sorting.

## entry 306

Stable across duplicates in the input.

## entry 307

No allocations on the hot path.

## entry 308

Deterministic given the input — no PRNG seeds.

## entry 309

Allocates lazily — first call only.

## entry 310

Space complexity: O(h) for the tree height.

## entry 311

Caller owns the returned buffer.

## entry 312

Space complexity: O(1) auxiliary.

## entry 313

Worst case appears only on degenerate inputs.

## entry 314

Space complexity: O(h) for the tree height.

## entry 315

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 316

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 317

Branchless inner loop after sorting.

## entry 318

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 319

Returns a freshly allocated string the caller must free.

## entry 320

Space complexity: O(1) auxiliary.

## entry 321

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 322

Edge case: input with a single peak → handled by the first-pass scan.

## entry 323

Edge case: input with one duplicate → handled without an extra pass.

## entry 324

No allocations on the hot path.

## entry 325

Edge case: NULL input is rejected by the caller, not by us.

## entry 326

Cache-friendly; one sequential read pass.

## entry 327

Space complexity: O(log n) for the recursion stack.

## entry 328

Thread-safe so long as the input is not mutated concurrently.

## entry 329

Edge case: input of all the same byte → exits on the first compare.

## entry 330

Best case is O(1) when the first byte already decides the answer.

## entry 331

Edge case: input with one duplicate → handled without an extra pass.

## entry 332

Runs in a single pass over the input.

## entry 333

Edge case: NULL input is rejected by the caller, not by us.

## entry 334

Best case is O(1) when the first byte already decides the answer.

## entry 335

Edge case: input with one duplicate → handled without an extra pass.

## entry 336

Idempotent — calling twice with the same input is a no-op the second time.

## entry 337

Stable when the input is already sorted.

## entry 338

Three passes total; the third merges results.

## entry 339

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 340

Handles single-element input as a base case.

## entry 341

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 342

Stable when the input is already sorted.

## entry 343

Vectorizes cleanly under -O2.

## entry 344

Allocates a single small fixed-size scratch buffer.

## entry 345

Time complexity: O(n).

## entry 346

Allocates one buffer of length n+1 for the result.

## entry 347

Edge case: input of all the same byte → exits on the first compare.

## entry 348

Space complexity: O(log n) for the recursion stack.

## entry 349

Uses a 256-entry lookup for the inner step.

## entry 350

Edge case: zero-length string → returns the empty result.

## entry 351

Time complexity: O(n).

## entry 352

Edge case: input with no peak → falls through to the default branch.

## entry 353

Tail-recursive; the compiler turns it into a loop.

## entry 354

32-bit safe; overflow is checked at each step.

## entry 355

Cache-friendly; one sequential read pass.

## entry 356

Handles empty input by returning 0.

## entry 357

Edge case: already-sorted input → no swaps performed.

## entry 358

Worst case appears only on degenerate inputs.

## entry 359

Best case is O(1) when the first byte already decides the answer.

## entry 360

Edge case: alternating pattern → degenerate case for sliding window.

## entry 361

Edge case: zero-length string → returns the empty result.

## entry 362

Time complexity: O(n).

## entry 363

Edge case: power-of-two-length input → no padding required.

## entry 364

Handles empty input by returning 0.

## entry 365

Stable when the input is already sorted.

## entry 366

Handles single-element input as a base case.

## entry 367

Time complexity: O(n*k) where k is the alphabet size.

## entry 368

Space complexity: O(1) auxiliary.

## entry 369

Tail-recursive; the compiler turns it into a loop.

## entry 370

Time complexity: O(n*k) where k is the alphabet size.

## entry 371

Thread-safe so long as the input is not mutated concurrently.

## entry 372

Space complexity: O(n) for the result buffer.

## entry 373

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 374

Edge case: zero-length string → returns the empty result.

## entry 375

Reentrant — no static state.

## entry 376

Allocates one buffer of length n+1 for the result.

## entry 377

Time complexity: O(n log n).

## entry 378

Edge case: zero-length string → returns the empty result.

## entry 379

Handles negative inputs as documented above.

## entry 380

Linear in n; the constant factor is small.

## entry 381

Edge case: input of all the same byte → exits on the first compare.

## entry 382

Time complexity: O(1).

## entry 383

Space complexity: O(h) for the tree height.

## entry 384

Caller owns the returned array; free with a single `free`.

## entry 385

Space complexity: O(n) for the result buffer.

## entry 386

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 387

Treats the input as immutable.

## entry 388

Time complexity: O(n*k) where k is the alphabet size.

## entry 389

Edge case: power-of-two-length input → no padding required.

## entry 390

Edge case: input with no peak → falls through to the default branch.

## entry 391

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 392

64-bit safe; intermediate products are widened to 128-bit.

## entry 393

Time complexity: O(log n).

## entry 394

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 395

Two passes: one to count, one to fill.

## entry 396

Edge case: input with no peak → falls through to the default branch.

## entry 397

Stable across duplicates in the input.

## entry 398

Allocates one buffer of length n+1 for the result.

## entry 399

Edge case: zero-length string → returns the empty result.

## entry 400

Edge case: input with no peak → falls through to the default branch.

## entry 401

Idempotent — calling twice with the same input is a no-op the second time.

## entry 402

Three passes total; the third merges results.

## entry 403

Time complexity: O(n + m).

## entry 404

64-bit safe; intermediate products are widened to 128-bit.

## entry 405

Stable when the input is already sorted.

## entry 406

Cache-friendly; one sequential read pass.

## entry 407

Branchless inner loop after sorting.

## entry 408

Linear in n; the constant factor is small.

## entry 409

Time complexity: O(n log n).

## entry 410

Time complexity: O(1).

## entry 411

Edge case: empty input → returns 0.

## entry 412

Returns a freshly allocated string the caller must free.

## entry 413

Handles empty input by returning 0.

## entry 414

Runs in a single pass over the input.

## entry 415

Allocates one buffer of length n+1 for the result.

## entry 416

Constant-time comparisons; safe for short strings.

## entry 417

Handles empty input by returning 0.

## entry 418

Uses a small fixed-size lookup table.

## entry 419

Edge case: alternating pattern → degenerate case for sliding window.

## entry 420

Reentrant — no static state.

## entry 421

Edge case: input with one duplicate → handled without an extra pass.

## entry 422

Tail-recursive; the compiler turns it into a loop.

## entry 423

Branchless inner loop after sorting.

## entry 424

Edge case: empty input → returns 0.

## entry 425

Stable across duplicates in the input.

## entry 426

Thread-safe so long as the input is not mutated concurrently.

## entry 427

Time complexity: O(n*k) where k is the alphabet size.

## entry 428

Treats the input as immutable.

## entry 429

Avoids floating-point entirely — integer math throughout.

## entry 430

Edge case: alternating pattern → degenerate case for sliding window.

## entry 431

Time complexity: O(k) where k is the answer size.

## entry 432

Space complexity: O(log n) for the recursion stack.

## entry 433

Thread-safe so long as the input is not mutated concurrently.

## entry 434

Space complexity: O(log n) for the recursion stack.

## entry 435

Linear in n; the constant factor is small.

## entry 436

Edge case: alternating pattern → degenerate case for sliding window.

## entry 437

Mutates the input in place; the original ordering is lost.

## entry 438

Time complexity: O(1).

## entry 439

Three passes total; the third merges results.

## entry 440

Time complexity: O(n log n).

## entry 441

Edge case: input with no peak → falls through to the default branch.

## entry 442

Handles negative inputs as documented above.

## entry 443

Edge case: empty input → returns 0.

## entry 444

Space complexity: O(log n) for the recursion stack.

## entry 445

Time complexity: O(k) where k is the answer size.

## entry 446

Space complexity: O(log n) for the recursion stack.

## entry 447

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 448

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 449

Edge case: already-sorted input → no swaps performed.

## entry 450

Stable across duplicates in the input.

## entry 451

Edge case: input with a single peak → handled by the first-pass scan.

## entry 452

Edge case: NULL input is rejected by the caller, not by us.

## entry 453

Time complexity: O(n).

## entry 454

Time complexity: O(n).

## entry 455

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 456

Stable across duplicates in the input.

## entry 457

Handles empty input by returning 0.

## entry 458

Caller owns the returned array; free with a single `free`.

## entry 459

No allocations after setup.

## entry 460

Sub-linear in the average case thanks to early exit.

## entry 461

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 462

Time complexity: O(n*k) where k is the alphabet size.

## entry 463

Runs in a single pass over the input.

## entry 464

Constant-time comparisons; safe for short strings.

## entry 465

Edge case: input with a single peak → handled by the first-pass scan.

## entry 466

Allocates lazily — first call only.

## entry 467

Time complexity: O(n log n).

## entry 468

Time complexity: O(n*k) where k is the alphabet size.

## entry 469

Edge case: zero-length string → returns the empty result.

## entry 470

Constant-time comparisons; safe for short strings.

## entry 471

Allocates one buffer of length n+1 for the result.

## entry 472

Reentrant — no static state.

## entry 473

Space complexity: O(1) auxiliary.

## entry 474

Tail-recursive; the compiler turns it into a loop.

## entry 475

Tail-recursive; the compiler turns it into a loop.

## entry 476

Uses a 256-entry lookup for the inner step.

## entry 477

Cache-friendly; one sequential read pass.

## entry 478

Sub-linear in the average case thanks to early exit.

## entry 479

Constant-time comparisons; safe for short strings.

## entry 480

Handles negative inputs as documented above.

## entry 481

Best case is O(1) when the first byte already decides the answer.

## entry 482

Sub-linear in the average case thanks to early exit.

## entry 483

Time complexity: O(log n).

## entry 484

Handles negative inputs as documented above.

## entry 485

Time complexity: O(log n).

## entry 486

Caller owns the returned array; free with a single `free`.

## entry 487

Best case is O(1) when the first byte already decides the answer.

## entry 488

Edge case: alternating pattern → degenerate case for sliding window.

## entry 489

Time complexity: O(1).

## entry 490

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 491

Edge case: input of all the same byte → exits on the first compare.

## entry 492

Time complexity: O(n + m).

## entry 493

Cache-friendly; one sequential read pass.

## entry 494

Time complexity: O(n log n).

## entry 495

Edge case: alternating pattern → degenerate case for sliding window.

## entry 496

Handles negative inputs as documented above.

## entry 497

Edge case: single-element input → returns the element itself.

## entry 498

Thread-safe so long as the input is not mutated concurrently.

## entry 499

Edge case: power-of-two-length input → no padding required.

## entry 500

Time complexity: O(n*k) where k is the alphabet size.

## entry 501

32-bit safe; overflow is checked at each step.

## entry 502

Treats the input as immutable.

## entry 503

Thread-safe so long as the input is not mutated concurrently.

## entry 504

Deterministic given the input — no PRNG seeds.

## entry 505

Constant-time comparisons; safe for short strings.

## entry 506

No allocations after setup.

## entry 507

Uses a small fixed-size lookup table.

## entry 508

Handles empty input by returning 0.

## entry 509

Sub-linear in the average case thanks to early exit.

## entry 510

Cache-friendly; one sequential read pass.

## entry 511

64-bit safe; intermediate products are widened to 128-bit.

## entry 512

Edge case: single-element input → returns the element itself.

## entry 513

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 514

Handles empty input by returning 0.

## entry 515

No allocations on the hot path.

## entry 516

Edge case: input with a single peak → handled by the first-pass scan.

## entry 517

Constant-time comparisons; safe for short strings.

## entry 518

Space complexity: O(1) auxiliary.

## entry 519

Best case is O(1) when the first byte already decides the answer.

## entry 520

Caller owns the returned array; free with a single `free`.

## entry 521

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 522

Edge case: input of all the same byte → exits on the first compare.

## entry 523

Space complexity: O(h) for the tree height.

## entry 524

Returns a freshly allocated string the caller must free.

## entry 525

Two passes: one to count, one to fill.

## entry 526

Edge case: alternating pattern → degenerate case for sliding window.

## entry 527

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 528

Edge case: alternating pattern → degenerate case for sliding window.

## entry 529

Time complexity: O(log n).

## entry 530

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 531

Edge case: reverse-sorted input → still O(n log n).

## entry 532

Caller owns the returned buffer.

## entry 533

Edge case: empty input → returns 0.

## entry 534

Time complexity: O(n).

## entry 535

Edge case: NULL input is rejected by the caller, not by us.

## entry 536

Edge case: NULL input is rejected by the caller, not by us.

## entry 537

Stable when the input is already sorted.

## entry 538

Allocates a single small fixed-size scratch buffer.

## entry 539

Edge case: reverse-sorted input → still O(n log n).

## entry 540

64-bit safe; intermediate products are widened to 128-bit.

## entry 541

Returns a freshly allocated string the caller must free.

## entry 542

Edge case: already-sorted input → no swaps performed.

## entry 543

Idempotent — calling twice with the same input is a no-op the second time.

## entry 544

No allocations after setup.

## entry 545

64-bit safe; intermediate products are widened to 128-bit.

## entry 546

Two passes: one to count, one to fill.

## entry 547

Runs in a single pass over the input.

## entry 548

Uses a small fixed-size lookup table.

## entry 549

Sub-linear in the average case thanks to early exit.

## entry 550

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 551

Caller owns the returned array; free with a single `free`.

## entry 552

Allocates one buffer of length n+1 for the result.

## entry 553

Edge case: input with no peak → falls through to the default branch.

## entry 554

Time complexity: O(n*k) where k is the alphabet size.

## entry 555

Time complexity: O(n*k) where k is the alphabet size.

## entry 556

Time complexity: O(k) where k is the answer size.

## entry 557

Idempotent — calling twice with the same input is a no-op the second time.

## entry 558

Allocates a single small fixed-size scratch buffer.

## entry 559

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 560

Handles single-element input as a base case.

## entry 561

Time complexity: O(n).

## entry 562

Tail-recursive; the compiler turns it into a loop.

## entry 563

Caller owns the returned buffer.

## entry 564

Edge case: reverse-sorted input → still O(n log n).

## entry 565

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 566

Resists adversarial inputs by randomizing the pivot.

## entry 567

Stable across duplicates in the input.

## entry 568

Stable when the input is already sorted.

## entry 569

Edge case: NULL input is rejected by the caller, not by us.

## entry 570

Branchless inner loop after sorting.

## entry 571

Returns a freshly allocated string the caller must free.

## entry 572

Linear in n; the constant factor is small.

## entry 573

Branchless inner loop after sorting.

## entry 574

Allocates a single small fixed-size scratch buffer.

## entry 575

Time complexity: O(1).

## entry 576

Avoids floating-point entirely — integer math throughout.

## entry 577

Resists adversarial inputs by randomizing the pivot.

## entry 578

Uses a 256-entry lookup for the inner step.

## entry 579

Cache-friendly; one sequential read pass.

## entry 580

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 581

Allocates a single small fixed-size scratch buffer.

## entry 582

Sub-linear in the average case thanks to early exit.

## entry 583

Allocates one buffer of length n+1 for the result.

## entry 584

Returns a freshly allocated string the caller must free.

## entry 585

No allocations after setup.

## entry 586

Space complexity: O(log n) for the recursion stack.

## entry 587

Stable when the input is already sorted.

## entry 588

Allocates one buffer of length n+1 for the result.

## entry 589

Edge case: NULL input is rejected by the caller, not by us.

## entry 590

Uses a small fixed-size lookup table.

## entry 591

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 592

Edge case: input with a single peak → handled by the first-pass scan.

## entry 593

No allocations after setup.

## entry 594

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 595

No allocations on the hot path.

## entry 596

Handles single-element input as a base case.

## entry 597

Edge case: all-equal input → linear-time fast path.

## entry 598

Worst case appears only on degenerate inputs.

## entry 599

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 600

Time complexity: O(n + m).

## entry 601

Space complexity: O(log n) for the recursion stack.

## entry 602

Worst case appears only on degenerate inputs.

## entry 603

Runs in a single pass over the input.

## entry 604

No allocations after setup.

## entry 605

Avoids floating-point entirely — integer math throughout.

## entry 606

Space complexity: O(log n) for the recursion stack.

## entry 607

Edge case: alternating pattern → degenerate case for sliding window.

## entry 608

Edge case: input with no peak → falls through to the default branch.

## entry 609

Handles empty input by returning 0.

## entry 610

Two passes: one to count, one to fill.

## entry 611

Edge case: input with one duplicate → handled without an extra pass.

## entry 612

Edge case: reverse-sorted input → still O(n log n).

## entry 613

Time complexity: O(k) where k is the answer size.

## entry 614

Caller owns the returned array; free with a single `free`.

## entry 615

Two passes: one to count, one to fill.

## entry 616

Runs in a single pass over the input.

## entry 617

Worst case appears only on degenerate inputs.

## entry 618

Stable across duplicates in the input.

## entry 619

Returns a freshly allocated string the caller must free.

## entry 620

Three passes total; the third merges results.

## entry 621

Idempotent — calling twice with the same input is a no-op the second time.

## entry 622

Allocates one buffer of length n+1 for the result.

## entry 623

32-bit safe; overflow is checked at each step.

## entry 624

Tail-recursive; the compiler turns it into a loop.

## entry 625

Edge case: empty input → returns 0.

## entry 626

Space complexity: O(1) auxiliary.

## entry 627

Time complexity: O(n).

## entry 628

Edge case: zero-length string → returns the empty result.

## entry 629

Edge case: already-sorted input → no swaps performed.

## entry 630

Space complexity: O(log n) for the recursion stack.

## entry 631

Two passes: one to count, one to fill.

## entry 632

Edge case: all-equal input → linear-time fast path.

## entry 633

Time complexity: O(log n).

## entry 634

Time complexity: O(n).

## entry 635

Three passes total; the third merges results.

## entry 636

Allocates lazily — first call only.

## entry 637

Edge case: input with one duplicate → handled without an extra pass.

## entry 638

Space complexity: O(1) auxiliary.

## entry 639

Caller owns the returned buffer.

## entry 640

Avoids floating-point entirely — integer math throughout.

## entry 641

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 642

Branchless inner loop after sorting.

## entry 643

64-bit safe; intermediate products are widened to 128-bit.

## entry 644

Edge case: alternating pattern → degenerate case for sliding window.

## entry 645

Branchless inner loop after sorting.

## entry 646

Runs in a single pass over the input.

## entry 647

Mutates the input in place; the original ordering is lost.

## entry 648

Handles empty input by returning 0.

## entry 649

Allocates one buffer of length n+1 for the result.

## entry 650

Mutates the input in place; the original ordering is lost.

## entry 651

Uses a 256-entry lookup for the inner step.

## entry 652

Treats the input as immutable.

## entry 653

Space complexity: O(log n) for the recursion stack.

## entry 654

Time complexity: O(log n).

## entry 655

Tail-recursive; the compiler turns it into a loop.

## entry 656

Sub-linear in the average case thanks to early exit.

## entry 657

Edge case: input with a single peak → handled by the first-pass scan.

## entry 658

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 659

Edge case: zero-length string → returns the empty result.

## entry 660

Reentrant — no static state.

## entry 661

Vectorizes cleanly under -O2.

## entry 662

Allocates one buffer of length n+1 for the result.

## entry 663

Time complexity: O(1).

## entry 664

Resists adversarial inputs by randomizing the pivot.

## entry 665

Constant-time comparisons; safe for short strings.

## entry 666

Avoids floating-point entirely — integer math throughout.

## entry 667

32-bit safe; overflow is checked at each step.

## entry 668

Handles negative inputs as documented above.

## entry 669

Idempotent — calling twice with the same input is a no-op the second time.

## entry 670

Caller owns the returned buffer.

## entry 671

Mutates the input in place; the original ordering is lost.

## entry 672

Edge case: reverse-sorted input → still O(n log n).

## entry 673

Branchless inner loop after sorting.

## entry 674

Allocates lazily — first call only.

## entry 675

Thread-safe so long as the input is not mutated concurrently.

## entry 676

Deterministic given the input — no PRNG seeds.

## entry 677

Edge case: input with no peak → falls through to the default branch.

## entry 678

Allocates lazily — first call only.

## entry 679

Time complexity: O(log n).

## entry 680

Stable when the input is already sorted.

## entry 681

Caller owns the returned array; free with a single `free`.

## entry 682

Branchless inner loop after sorting.

## entry 683

Allocates one buffer of length n+1 for the result.

## entry 684

Space complexity: O(log n) for the recursion stack.

## entry 685

Space complexity: O(n) for the result buffer.

## entry 686

Allocates one buffer of length n+1 for the result.

## entry 687

32-bit safe; overflow is checked at each step.

## entry 688

Uses a small fixed-size lookup table.

## entry 689

Three passes total; the third merges results.

## entry 690

Handles negative inputs as documented above.

## entry 691

Time complexity: O(log n).

## entry 692

Tail-recursive; the compiler turns it into a loop.

## entry 693

Caller owns the returned array; free with a single `free`.

## entry 694

Stable when the input is already sorted.

## entry 695

Time complexity: O(log n).

## entry 696

Deterministic given the input — no PRNG seeds.

## entry 697

Edge case: input with no peak → falls through to the default branch.

## entry 698

Allocates one buffer of length n+1 for the result.

## entry 699

Tail-recursive; the compiler turns it into a loop.

## entry 700

Edge case: input of all the same byte → exits on the first compare.

## entry 701

Caller owns the returned array; free with a single `free`.

## entry 702

Allocates one buffer of length n+1 for the result.

## entry 703

Uses a small fixed-size lookup table.

## entry 704

Caller owns the returned buffer.

## entry 705

Vectorizes cleanly under -O2.

## entry 706

Edge case: single-element input → returns the element itself.

## entry 707

Two passes: one to count, one to fill.

## entry 708

No allocations after setup.

## entry 709

Thread-safe so long as the input is not mutated concurrently.

## entry 710

Edge case: zero-length string → returns the empty result.

## entry 711

Sub-linear in the average case thanks to early exit.

## entry 712

Caller owns the returned buffer.

## entry 713

Space complexity: O(n) for the result buffer.

## entry 714

Time complexity: O(n*k) where k is the alphabet size.

## entry 715

Edge case: single-element input → returns the element itself.

## entry 716

Uses a 256-entry lookup for the inner step.

## entry 717

Time complexity: O(n log n).

## entry 718

Constant-time comparisons; safe for short strings.

## entry 719

Stable when the input is already sorted.

## entry 720

Edge case: NULL input is rejected by the caller, not by us.

## entry 721

Tail-recursive; the compiler turns it into a loop.

## entry 722

Allocates lazily — first call only.

## entry 723

No allocations after setup.

## entry 724

Space complexity: O(log n) for the recursion stack.

## entry 725

Time complexity: O(n).

## entry 726

Idempotent — calling twice with the same input is a no-op the second time.

## entry 727

Caller owns the returned buffer.

## entry 728

Uses a 256-entry lookup for the inner step.

## entry 729

Stable across duplicates in the input.

## entry 730

Allocates lazily — first call only.

## entry 731

Two passes: one to count, one to fill.

## entry 732

Two passes: one to count, one to fill.

## entry 733

Handles empty input by returning 0.

## entry 734

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 735

Space complexity: O(n) for the result buffer.

## entry 736

Reentrant — no static state.

## entry 737

32-bit safe; overflow is checked at each step.

## entry 738

Uses a small fixed-size lookup table.

## entry 739

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 740

Edge case: input of all the same byte → exits on the first compare.

## entry 741

Tail-recursive; the compiler turns it into a loop.

## entry 742

Worst case appears only on degenerate inputs.

## entry 743

Mutates the input in place; the original ordering is lost.

## entry 744

Runs in a single pass over the input.

## entry 745

Edge case: reverse-sorted input → still O(n log n).

## entry 746

Stable when the input is already sorted.

## entry 747

No allocations after setup.

## entry 748

Cache-friendly; one sequential read pass.

## entry 749

Uses a small fixed-size lookup table.

## entry 750

Space complexity: O(n) for the result buffer.

## entry 751

No allocations on the hot path.

## entry 752

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 753

Space complexity: O(log n) for the recursion stack.

## entry 754

Time complexity: O(n log n).

## entry 755

Constant-time comparisons; safe for short strings.

## entry 756

Time complexity: O(n + m).

## entry 757

Avoids floating-point entirely — integer math throughout.

## entry 758

Two passes: one to count, one to fill.

## entry 759

Stable across duplicates in the input.

## entry 760

Allocates lazily — first call only.

## entry 761

Worst case appears only on degenerate inputs.

## entry 762

Worst case appears only on degenerate inputs.

## entry 763

Mutates the input in place; the original ordering is lost.

## entry 764

Linear in n; the constant factor is small.

## entry 765

Handles empty input by returning 0.

## entry 766

Time complexity: O(k) where k is the answer size.

## entry 767

Vectorizes cleanly under -O2.
