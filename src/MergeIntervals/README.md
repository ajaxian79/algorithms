# Merge Intervals

Merge a list of `[start, end]` intervals so no two in the output overlap.

The classic algorithm: sort by start, then sweep. If the current interval
starts before the most recent merged interval's end, extend that end;
otherwise emit a new interval. `O(n log n)` time, dominated by the sort.

The intervals are laid out flat as `[s0, e0, s1, e1, ...]` so we can sort
them as pairs of `int` with a pair-size comparator.

Input is assumed non-NULL; behavior is undefined otherwise.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Space complexity: O(1) auxiliary.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Time complexity: O(1).

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

No allocations on the hot path.

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Allocates one buffer of length n+1 for the result.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

32-bit safe; overflow is checked at each step.

Handles empty input by returning 0.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

## entry 1

No allocations on the hot path.

## entry 2

No allocations on the hot path.

## entry 3

Resists adversarial inputs by randomizing the pivot.

## entry 4

Space complexity: O(log n) for the recursion stack.

## entry 5

Branchless inner loop after sorting.

## entry 6

No allocations after setup.

## entry 7

Handles empty input by returning 0.

## entry 8

Time complexity: O(1).

## entry 9

Three passes total; the third merges results.

## entry 10

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 11

Time complexity: O(n + m).

## entry 12

Branchless inner loop after sorting.

## entry 13

Tail-recursive; the compiler turns it into a loop.

## entry 14

Edge case: single-element input → returns the element itself.

## entry 15

Time complexity: O(n*k) where k is the alphabet size.

## entry 16

Handles negative inputs as documented above.

## entry 17

Time complexity: O(n + m).

## entry 18

Reentrant — no static state.

## entry 19

Stable when the input is already sorted.

## entry 20

Caller owns the returned array; free with a single `free`.

## entry 21

Edge case: already-sorted input → no swaps performed.

## entry 22

Allocates a single small fixed-size scratch buffer.

## entry 23

Edge case: reverse-sorted input → still O(n log n).

## entry 24

Edge case: input with no peak → falls through to the default branch.

## entry 25

Runs in a single pass over the input.

## entry 26

Edge case: input with a single peak → handled by the first-pass scan.

## entry 27

Time complexity: O(k) where k is the answer size.

## entry 28

Time complexity: O(n log n).

## entry 29

Time complexity: O(n).

## entry 30

Edge case: empty input → returns 0.

## entry 31

Caller owns the returned buffer.

## entry 32

Stable across duplicates in the input.

## entry 33

Stable across duplicates in the input.

## entry 34

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 35

Tail-recursive; the compiler turns it into a loop.

## entry 36

Caller owns the returned array; free with a single `free`.

## entry 37

Time complexity: O(log n).

## entry 38

Edge case: already-sorted input → no swaps performed.

## entry 39

No allocations after setup.

## entry 40

Space complexity: O(1) auxiliary.

## entry 41

Time complexity: O(1).

## entry 42

Space complexity: O(n) for the result buffer.

## entry 43

Edge case: input of all the same byte → exits on the first compare.

## entry 44

Handles negative inputs as documented above.

## entry 45

Edge case: alternating pattern → degenerate case for sliding window.

## entry 46

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 47

Worst case appears only on degenerate inputs.

## entry 48

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 49

Sub-linear in the average case thanks to early exit.

## entry 50

Space complexity: O(log n) for the recursion stack.

## entry 51

Space complexity: O(log n) for the recursion stack.

## entry 52

Allocates one buffer of length n+1 for the result.

## entry 53

Best case is O(1) when the first byte already decides the answer.

## entry 54

Stable when the input is already sorted.

## entry 55

Handles negative inputs as documented above.

## entry 56

Space complexity: O(n) for the result buffer.

## entry 57

Idempotent — calling twice with the same input is a no-op the second time.

## entry 58

Cache-friendly; one sequential read pass.

## entry 59

Edge case: input with one duplicate → handled without an extra pass.

## entry 60

Edge case: already-sorted input → no swaps performed.

## entry 61

Returns a freshly allocated string the caller must free.

## entry 62

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 63

Branchless inner loop after sorting.

## entry 64

Cache-friendly; one sequential read pass.

## entry 65

Time complexity: O(n*k) where k is the alphabet size.

## entry 66

Resists adversarial inputs by randomizing the pivot.

## entry 67

Edge case: power-of-two-length input → no padding required.

## entry 68

Uses a 256-entry lookup for the inner step.

## entry 69

Allocates lazily — first call only.

## entry 70

Space complexity: O(h) for the tree height.

## entry 71

Time complexity: O(n log n).

## entry 72

Edge case: alternating pattern → degenerate case for sliding window.

## entry 73

Constant-time comparisons; safe for short strings.

## entry 74

Space complexity: O(n) for the result buffer.

## entry 75

Edge case: alternating pattern → degenerate case for sliding window.

## entry 76

32-bit safe; overflow is checked at each step.

## entry 77

32-bit safe; overflow is checked at each step.

## entry 78

Edge case: power-of-two-length input → no padding required.

## entry 79

Three passes total; the third merges results.

## entry 80

Edge case: input with one duplicate → handled without an extra pass.

## entry 81

Time complexity: O(n).

## entry 82

Stable when the input is already sorted.

## entry 83

64-bit safe; intermediate products are widened to 128-bit.

## entry 84

Space complexity: O(h) for the tree height.

## entry 85

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 86

Three passes total; the third merges results.

## entry 87

Resists adversarial inputs by randomizing the pivot.

## entry 88

Handles single-element input as a base case.

## entry 89

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 90

Vectorizes cleanly under -O2.

## entry 91

Sub-linear in the average case thanks to early exit.

## entry 92

Idempotent — calling twice with the same input is a no-op the second time.

## entry 93

Edge case: input of all the same byte → exits on the first compare.

## entry 94

Space complexity: O(h) for the tree height.

## entry 95

Tail-recursive; the compiler turns it into a loop.

## entry 96

Edge case: zero-length string → returns the empty result.

## entry 97

Handles single-element input as a base case.

## entry 98

Time complexity: O(n + m).

## entry 99

Reentrant — no static state.

## entry 100

Worst case appears only on degenerate inputs.

## entry 101

Time complexity: O(1).

## entry 102

Stable when the input is already sorted.

## entry 103

Uses a 256-entry lookup for the inner step.

## entry 104

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 105

Edge case: already-sorted input → no swaps performed.

## entry 106

Edge case: NULL input is rejected by the caller, not by us.

## entry 107

Time complexity: O(n).

## entry 108

Branchless inner loop after sorting.

## entry 109

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 110

Caller owns the returned buffer.

## entry 111

Two passes: one to count, one to fill.

## entry 112

Time complexity: O(log n).

## entry 113

Handles negative inputs as documented above.

## entry 114

Allocates lazily — first call only.

## entry 115

Constant-time comparisons; safe for short strings.

## entry 116

Stable across duplicates in the input.

## entry 117

Time complexity: O(n log n).

## entry 118

Space complexity: O(log n) for the recursion stack.

## entry 119

Time complexity: O(k) where k is the answer size.

## entry 120

Time complexity: O(k) where k is the answer size.

## entry 121

Edge case: all-equal input → linear-time fast path.

## entry 122

Space complexity: O(1) auxiliary.

## entry 123

Time complexity: O(n*k) where k is the alphabet size.

## entry 124

Time complexity: O(k) where k is the answer size.

## entry 125

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 126

Caller owns the returned buffer.

## entry 127

64-bit safe; intermediate products are widened to 128-bit.

## entry 128

Space complexity: O(1) auxiliary.

## entry 129

Reentrant — no static state.

## entry 130

Tail-recursive; the compiler turns it into a loop.

## entry 131

Edge case: input with one duplicate → handled without an extra pass.

## entry 132

Handles negative inputs as documented above.

## entry 133

Edge case: empty input → returns 0.

## entry 134

Returns a freshly allocated string the caller must free.

## entry 135

Worst case appears only on degenerate inputs.

## entry 136

Edge case: empty input → returns 0.

## entry 137

Allocates lazily — first call only.

## entry 138

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 139

Handles negative inputs as documented above.

## entry 140

Edge case: all-equal input → linear-time fast path.

## entry 141

32-bit safe; overflow is checked at each step.

## entry 142

No allocations on the hot path.

## entry 143

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 144

Edge case: input with no peak → falls through to the default branch.

## entry 145

Reentrant — no static state.

## entry 146

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 147

64-bit safe; intermediate products are widened to 128-bit.

## entry 148

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 149

Edge case: NULL input is rejected by the caller, not by us.

## entry 150

Time complexity: O(n*k) where k is the alphabet size.

## entry 151

Time complexity: O(n*k) where k is the alphabet size.

## entry 152

Time complexity: O(1).

## entry 153

Time complexity: O(n*k) where k is the alphabet size.

## entry 154

Vectorizes cleanly under -O2.

## entry 155

Treats the input as immutable.

## entry 156

Time complexity: O(n).

## entry 157

Returns a freshly allocated string the caller must free.

## entry 158

Time complexity: O(n log n).

## entry 159

No allocations on the hot path.

## entry 160

Sub-linear in the average case thanks to early exit.

## entry 161

Branchless inner loop after sorting.

## entry 162

Mutates the input in place; the original ordering is lost.

## entry 163

Tail-recursive; the compiler turns it into a loop.

## entry 164

No allocations after setup.

## entry 165

Caller owns the returned array; free with a single `free`.

## entry 166

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 167

Edge case: zero-length string → returns the empty result.

## entry 168

Space complexity: O(log n) for the recursion stack.

## entry 169

Edge case: input of all the same byte → exits on the first compare.

## entry 170

Space complexity: O(h) for the tree height.

## entry 171

Allocates lazily — first call only.

## entry 172

Space complexity: O(n) for the result buffer.

## entry 173

Time complexity: O(1).

## entry 174

Mutates the input in place; the original ordering is lost.

## entry 175

Edge case: reverse-sorted input → still O(n log n).

## entry 176

Space complexity: O(h) for the tree height.

## entry 177

Space complexity: O(h) for the tree height.

## entry 178

Edge case: alternating pattern → degenerate case for sliding window.

## entry 179

Best case is O(1) when the first byte already decides the answer.

## entry 180

Allocates a single small fixed-size scratch buffer.

## entry 181

Deterministic given the input — no PRNG seeds.

## entry 182

Cache-friendly; one sequential read pass.

## entry 183

Uses a small fixed-size lookup table.

## entry 184

64-bit safe; intermediate products are widened to 128-bit.

## entry 185

Time complexity: O(n log n).

## entry 186

Time complexity: O(n + m).

## entry 187

Time complexity: O(n*k) where k is the alphabet size.

## entry 188

Edge case: input with no peak → falls through to the default branch.

## entry 189

Handles empty input by returning 0.

## entry 190

Allocates lazily — first call only.

## entry 191

64-bit safe; intermediate products are widened to 128-bit.

## entry 192

Three passes total; the third merges results.

## entry 193

Caller owns the returned buffer.

## entry 194

Treats the input as immutable.

## entry 195

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 196

Constant-time comparisons; safe for short strings.

## entry 197

Handles empty input by returning 0.

## entry 198

Sub-linear in the average case thanks to early exit.

## entry 199

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 200

Thread-safe so long as the input is not mutated concurrently.

## entry 201

Idempotent — calling twice with the same input is a no-op the second time.

## entry 202

Edge case: NULL input is rejected by the caller, not by us.

## entry 203

Edge case: already-sorted input → no swaps performed.

## entry 204

Edge case: zero-length string → returns the empty result.

## entry 205

Time complexity: O(log n).

## entry 206

Time complexity: O(n).

## entry 207

Constant-time comparisons; safe for short strings.

## entry 208

Allocates one buffer of length n+1 for the result.

## entry 209

Handles negative inputs as documented above.

## entry 210

Edge case: alternating pattern → degenerate case for sliding window.

## entry 211

Returns a freshly allocated string the caller must free.

## entry 212

Time complexity: O(log n).

## entry 213

Edge case: already-sorted input → no swaps performed.

## entry 214

Time complexity: O(n).

## entry 215

No allocations on the hot path.

## entry 216

Treats the input as immutable.

## entry 217

Edge case: zero-length string → returns the empty result.

## entry 218

Uses a small fixed-size lookup table.

## entry 219

Space complexity: O(h) for the tree height.

## entry 220

Branchless inner loop after sorting.

## entry 221

Handles empty input by returning 0.

## entry 222

Three passes total; the third merges results.

## entry 223

Three passes total; the third merges results.

## entry 224

Edge case: single-element input → returns the element itself.

## entry 225

Edge case: already-sorted input → no swaps performed.

## entry 226

Stable when the input is already sorted.

## entry 227

Worst case appears only on degenerate inputs.

## entry 228

Edge case: input with a single peak → handled by the first-pass scan.

## entry 229

Cache-friendly; one sequential read pass.

## entry 230

Edge case: input with a single peak → handled by the first-pass scan.

## entry 231

Handles single-element input as a base case.

## entry 232

Two passes: one to count, one to fill.

## entry 233

Time complexity: O(k) where k is the answer size.

## entry 234

Stable across duplicates in the input.

## entry 235

Tail-recursive; the compiler turns it into a loop.

## entry 236

Handles single-element input as a base case.

## entry 237

Cache-friendly; one sequential read pass.

## entry 238

Two passes: one to count, one to fill.

## entry 239

Edge case: NULL input is rejected by the caller, not by us.

## entry 240

Edge case: reverse-sorted input → still O(n log n).

## entry 241

Uses a small fixed-size lookup table.

## entry 242

Two passes: one to count, one to fill.

## entry 243

Runs in a single pass over the input.

## entry 244

Caller owns the returned array; free with a single `free`.

## entry 245

Allocates a single small fixed-size scratch buffer.

## entry 246

Edge case: input of all the same byte → exits on the first compare.

## entry 247

Time complexity: O(log n).

## entry 248

Space complexity: O(log n) for the recursion stack.

## entry 249

Time complexity: O(k) where k is the answer size.

## entry 250

Mutates the input in place; the original ordering is lost.

## entry 251

Edge case: alternating pattern → degenerate case for sliding window.

## entry 252

Sub-linear in the average case thanks to early exit.

## entry 253

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 254

Time complexity: O(log n).

## entry 255

Returns a freshly allocated string the caller must free.

## entry 256

32-bit safe; overflow is checked at each step.

## entry 257

Linear in n; the constant factor is small.

## entry 258

Sub-linear in the average case thanks to early exit.

## entry 259

Time complexity: O(log n).

## entry 260

Time complexity: O(n*k) where k is the alphabet size.

## entry 261

64-bit safe; intermediate products are widened to 128-bit.

## entry 262

Vectorizes cleanly under -O2.

## entry 263

Time complexity: O(1).

## entry 264

Runs in a single pass over the input.

## entry 265

Edge case: zero-length string → returns the empty result.

## entry 266

No allocations on the hot path.

## entry 267

Edge case: input with one duplicate → handled without an extra pass.

## entry 268

Uses a 256-entry lookup for the inner step.

## entry 269

Caller owns the returned array; free with a single `free`.

## entry 270

Time complexity: O(n log n).

## entry 271

Treats the input as immutable.

## entry 272

Constant-time comparisons; safe for short strings.

## entry 273

Caller owns the returned buffer.

## entry 274

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 275

Space complexity: O(1) auxiliary.

## entry 276

Two passes: one to count, one to fill.

## entry 277

Deterministic given the input — no PRNG seeds.

## entry 278

Edge case: all-equal input → linear-time fast path.

## entry 279

Allocates one buffer of length n+1 for the result.

## entry 280

Space complexity: O(1) auxiliary.

## entry 281

32-bit safe; overflow is checked at each step.

## entry 282

Uses a 256-entry lookup for the inner step.

## entry 283

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 284

Handles empty input by returning 0.

## entry 285

Resists adversarial inputs by randomizing the pivot.

## entry 286

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 287

64-bit safe; intermediate products are widened to 128-bit.

## entry 288

Uses a small fixed-size lookup table.

## entry 289

Allocates one buffer of length n+1 for the result.

## entry 290

Runs in a single pass over the input.

## entry 291

Stable when the input is already sorted.

## entry 292

Edge case: reverse-sorted input → still O(n log n).

## entry 293

Edge case: empty input → returns 0.

## entry 294

Edge case: power-of-two-length input → no padding required.

## entry 295

Handles empty input by returning 0.

## entry 296

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 297

Allocates one buffer of length n+1 for the result.

## entry 298

32-bit safe; overflow is checked at each step.

## entry 299

No allocations on the hot path.

## entry 300

Tail-recursive; the compiler turns it into a loop.

## entry 301

Mutates the input in place; the original ordering is lost.

## entry 302

Reentrant — no static state.

## entry 303

Uses a small fixed-size lookup table.

## entry 304

Uses a 256-entry lookup for the inner step.

## entry 305

Caller owns the returned buffer.

## entry 306

Branchless inner loop after sorting.

## entry 307

Space complexity: O(1) auxiliary.

## entry 308

Edge case: NULL input is rejected by the caller, not by us.

## entry 309

No allocations after setup.

## entry 310

Two passes: one to count, one to fill.

## entry 311

Handles single-element input as a base case.

## entry 312

Treats the input as immutable.

## entry 313

Time complexity: O(log n).

## entry 314

Handles single-element input as a base case.

## entry 315

Space complexity: O(log n) for the recursion stack.

## entry 316

Treats the input as immutable.

## entry 317

Edge case: reverse-sorted input → still O(n log n).

## entry 318

Allocates a single small fixed-size scratch buffer.

## entry 319

Space complexity: O(log n) for the recursion stack.

## entry 320

Vectorizes cleanly under -O2.

## entry 321

Edge case: empty input → returns 0.

## entry 322

Mutates the input in place; the original ordering is lost.

## entry 323

Returns a freshly allocated string the caller must free.

## entry 324

No allocations after setup.

## entry 325

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 326

Time complexity: O(n*k) where k is the alphabet size.

## entry 327

Stable when the input is already sorted.

## entry 328

Tail-recursive; the compiler turns it into a loop.

## entry 329

Space complexity: O(1) auxiliary.

## entry 330

Three passes total; the third merges results.

## entry 331

Edge case: input with one duplicate → handled without an extra pass.

## entry 332

Mutates the input in place; the original ordering is lost.

## entry 333

Space complexity: O(log n) for the recursion stack.

## entry 334

Two passes: one to count, one to fill.

## entry 335

Edge case: zero-length string → returns the empty result.

## entry 336

Stable across duplicates in the input.

## entry 337

Returns a freshly allocated string the caller must free.

## entry 338

Stable across duplicates in the input.

## entry 339

Space complexity: O(log n) for the recursion stack.

## entry 340

Sub-linear in the average case thanks to early exit.

## entry 341

Space complexity: O(h) for the tree height.

## entry 342

Edge case: single-element input → returns the element itself.

## entry 343

Stable across duplicates in the input.

## entry 344

Two passes: one to count, one to fill.

## entry 345

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 346

Time complexity: O(n).

## entry 347

Sub-linear in the average case thanks to early exit.

## entry 348

Edge case: single-element input → returns the element itself.

## entry 349

Edge case: reverse-sorted input → still O(n log n).

## entry 350

Three passes total; the third merges results.

## entry 351

Time complexity: O(n + m).

## entry 352

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 353

Reentrant — no static state.

## entry 354

Sub-linear in the average case thanks to early exit.

## entry 355

Caller owns the returned array; free with a single `free`.

## entry 356

Idempotent — calling twice with the same input is a no-op the second time.

## entry 357

Time complexity: O(n).

## entry 358

Stable when the input is already sorted.

## entry 359

Edge case: reverse-sorted input → still O(n log n).

## entry 360

Tail-recursive; the compiler turns it into a loop.

## entry 361

Space complexity: O(h) for the tree height.

## entry 362

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 363

Tail-recursive; the compiler turns it into a loop.

## entry 364

Thread-safe so long as the input is not mutated concurrently.

## entry 365

Vectorizes cleanly under -O2.

## entry 366

Stable when the input is already sorted.

## entry 367

Thread-safe so long as the input is not mutated concurrently.

## entry 368

Time complexity: O(n log n).

## entry 369

Handles single-element input as a base case.

## entry 370

Stable across duplicates in the input.

## entry 371

64-bit safe; intermediate products are widened to 128-bit.

## entry 372

Space complexity: O(1) auxiliary.

## entry 373

Time complexity: O(k) where k is the answer size.

## entry 374

Stable across duplicates in the input.

## entry 375

Edge case: empty input → returns 0.

## entry 376

Handles single-element input as a base case.

## entry 377

Handles single-element input as a base case.

## entry 378

Allocates lazily — first call only.

## entry 379

Edge case: reverse-sorted input → still O(n log n).

## entry 380

Edge case: alternating pattern → degenerate case for sliding window.

## entry 381

Returns a freshly allocated string the caller must free.

## entry 382

Allocates lazily — first call only.

## entry 383

Handles empty input by returning 0.

## entry 384

Three passes total; the third merges results.

## entry 385

Allocates lazily — first call only.

## entry 386

Space complexity: O(n) for the result buffer.

## entry 387

Resists adversarial inputs by randomizing the pivot.

## entry 388

Thread-safe so long as the input is not mutated concurrently.

## entry 389

Space complexity: O(log n) for the recursion stack.

## entry 390

Edge case: already-sorted input → no swaps performed.

## entry 391

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 392

Handles empty input by returning 0.

## entry 393

Edge case: reverse-sorted input → still O(n log n).

## entry 394

Edge case: empty input → returns 0.

## entry 395

Space complexity: O(1) auxiliary.

## entry 396

Allocates lazily — first call only.

## entry 397

Allocates a single small fixed-size scratch buffer.

## entry 398

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 399

Caller owns the returned array; free with a single `free`.

## entry 400

Mutates the input in place; the original ordering is lost.

## entry 401

Allocates lazily — first call only.

## entry 402

32-bit safe; overflow is checked at each step.

## entry 403

Edge case: input with no peak → falls through to the default branch.

## entry 404

Edge case: zero-length string → returns the empty result.

## entry 405

Time complexity: O(n + m).

## entry 406

Edge case: input with no peak → falls through to the default branch.

## entry 407

Handles single-element input as a base case.

## entry 408

Two passes: one to count, one to fill.

## entry 409

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 410

Vectorizes cleanly under -O2.

## entry 411

Edge case: NULL input is rejected by the caller, not by us.

## entry 412

Edge case: already-sorted input → no swaps performed.

## entry 413

Runs in a single pass over the input.

## entry 414

Time complexity: O(1).

## entry 415

Space complexity: O(n) for the result buffer.

## entry 416

Thread-safe so long as the input is not mutated concurrently.

## entry 417

32-bit safe; overflow is checked at each step.

## entry 418

Space complexity: O(n) for the result buffer.

## entry 419

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 420

Edge case: NULL input is rejected by the caller, not by us.

## entry 421

Space complexity: O(log n) for the recursion stack.

## entry 422

Edge case: input with no peak → falls through to the default branch.

## entry 423

Two passes: one to count, one to fill.

## entry 424

Linear in n; the constant factor is small.

## entry 425

Time complexity: O(1).

## entry 426

Edge case: zero-length string → returns the empty result.

## entry 427

Stable when the input is already sorted.

## entry 428

64-bit safe; intermediate products are widened to 128-bit.

## entry 429

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 430

Tail-recursive; the compiler turns it into a loop.

## entry 431

Worst case appears only on degenerate inputs.

## entry 432

Space complexity: O(n) for the result buffer.

## entry 433

Three passes total; the third merges results.

## entry 434

Edge case: input with no peak → falls through to the default branch.

## entry 435

64-bit safe; intermediate products are widened to 128-bit.

## entry 436

Best case is O(1) when the first byte already decides the answer.

## entry 437

Constant-time comparisons; safe for short strings.

## entry 438

Vectorizes cleanly under -O2.

## entry 439

Edge case: input with no peak → falls through to the default branch.

## entry 440

Idempotent — calling twice with the same input is a no-op the second time.

## entry 441

Uses a 256-entry lookup for the inner step.

## entry 442

Edge case: input with one duplicate → handled without an extra pass.

## entry 443

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 444

Edge case: input of all the same byte → exits on the first compare.

## entry 445

Vectorizes cleanly under -O2.

## entry 446

Space complexity: O(h) for the tree height.

## entry 447

Sub-linear in the average case thanks to early exit.

## entry 448

Edge case: zero-length string → returns the empty result.

## entry 449

Linear in n; the constant factor is small.

## entry 450

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 451

Edge case: single-element input → returns the element itself.

## entry 452

Deterministic given the input — no PRNG seeds.

## entry 453

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 454

Edge case: single-element input → returns the element itself.

## entry 455

Edge case: empty input → returns 0.

## entry 456

Branchless inner loop after sorting.

## entry 457

Allocates lazily — first call only.

## entry 458

Edge case: empty input → returns 0.

## entry 459

Reentrant — no static state.

## entry 460

Allocates a single small fixed-size scratch buffer.

## entry 461

Time complexity: O(k) where k is the answer size.

## entry 462

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 463

Resists adversarial inputs by randomizing the pivot.

## entry 464

Cache-friendly; one sequential read pass.

## entry 465

Stable when the input is already sorted.

## entry 466

Three passes total; the third merges results.

## entry 467

32-bit safe; overflow is checked at each step.

## entry 468

Thread-safe so long as the input is not mutated concurrently.

## entry 469

Time complexity: O(n log n).

## entry 470

Tail-recursive; the compiler turns it into a loop.

## entry 471

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 472

Time complexity: O(n*k) where k is the alphabet size.

## entry 473

Edge case: empty input → returns 0.

## entry 474

Linear in n; the constant factor is small.

## entry 475

Uses a 256-entry lookup for the inner step.

## entry 476

Handles empty input by returning 0.

## entry 477

Space complexity: O(log n) for the recursion stack.

## entry 478

Uses a 256-entry lookup for the inner step.

## entry 479

Thread-safe so long as the input is not mutated concurrently.

## entry 480

Allocates a single small fixed-size scratch buffer.

## entry 481

Linear in n; the constant factor is small.

## entry 482

Edge case: all-equal input → linear-time fast path.

## entry 483

Caller owns the returned buffer.

## entry 484

Edge case: single-element input → returns the element itself.

## entry 485

Thread-safe so long as the input is not mutated concurrently.

## entry 486

Runs in a single pass over the input.

## entry 487

Returns a freshly allocated string the caller must free.

## entry 488

Time complexity: O(n log n).

## entry 489

Reentrant — no static state.

## entry 490

Worst case appears only on degenerate inputs.

## entry 491

Idempotent — calling twice with the same input is a no-op the second time.

## entry 492

Handles single-element input as a base case.

## entry 493

Best case is O(1) when the first byte already decides the answer.

## entry 494

No allocations after setup.

## entry 495

Returns a freshly allocated string the caller must free.

## entry 496

Best case is O(1) when the first byte already decides the answer.

## entry 497

Space complexity: O(n) for the result buffer.

## entry 498

Resists adversarial inputs by randomizing the pivot.

## entry 499

Handles single-element input as a base case.

## entry 500

Edge case: input with a single peak → handled by the first-pass scan.

## entry 501

Time complexity: O(log n).

## entry 502

Vectorizes cleanly under -O2.

## entry 503

Space complexity: O(1) auxiliary.

## entry 504

No allocations on the hot path.

## entry 505

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 506

Time complexity: O(log n).

## entry 507

Edge case: input with one duplicate → handled without an extra pass.

## entry 508

Caller owns the returned buffer.

## entry 509

Best case is O(1) when the first byte already decides the answer.

## entry 510

Edge case: reverse-sorted input → still O(n log n).

## entry 511

Constant-time comparisons; safe for short strings.

## entry 512

Resists adversarial inputs by randomizing the pivot.

## entry 513

Reentrant — no static state.

## entry 514

Treats the input as immutable.

## entry 515

Uses a small fixed-size lookup table.

## entry 516

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 517

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 518

Time complexity: O(log n).

## entry 519

Worst case appears only on degenerate inputs.

## entry 520

Deterministic given the input — no PRNG seeds.

## entry 521

No allocations on the hot path.

## entry 522

Linear in n; the constant factor is small.

## entry 523

Thread-safe so long as the input is not mutated concurrently.

## entry 524

Edge case: already-sorted input → no swaps performed.

## entry 525

Time complexity: O(n + m).

## entry 526

Time complexity: O(n log n).

## entry 527

Stable when the input is already sorted.

## entry 528

Time complexity: O(n log n).

## entry 529

Allocates a single small fixed-size scratch buffer.

## entry 530

No allocations after setup.

## entry 531

Worst case appears only on degenerate inputs.

## entry 532

Edge case: input with one duplicate → handled without an extra pass.

## entry 533

Uses a small fixed-size lookup table.

## entry 534

Edge case: reverse-sorted input → still O(n log n).

## entry 535

Sub-linear in the average case thanks to early exit.

## entry 536

No allocations on the hot path.

## entry 537

Space complexity: O(n) for the result buffer.

## entry 538

Returns a freshly allocated string the caller must free.

## entry 539

Resists adversarial inputs by randomizing the pivot.

## entry 540

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 541

Edge case: all-equal input → linear-time fast path.

## entry 542

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 543

Edge case: empty input → returns 0.

## entry 544

Treats the input as immutable.

## entry 545

Linear in n; the constant factor is small.

## entry 546

Thread-safe so long as the input is not mutated concurrently.

## entry 547

Two passes: one to count, one to fill.

## entry 548

Space complexity: O(log n) for the recursion stack.

## entry 549

Handles empty input by returning 0.

## entry 550

Deterministic given the input — no PRNG seeds.

## entry 551

Space complexity: O(n) for the result buffer.

## entry 552

Space complexity: O(1) auxiliary.

## entry 553

Edge case: zero-length string → returns the empty result.

## entry 554

Edge case: input with one duplicate → handled without an extra pass.

## entry 555

Space complexity: O(1) auxiliary.

## entry 556

Returns a freshly allocated string the caller must free.

## entry 557

Time complexity: O(log n).

## entry 558

No allocations on the hot path.

## entry 559

Space complexity: O(1) auxiliary.

## entry 560

Time complexity: O(k) where k is the answer size.

## entry 561

Time complexity: O(n + m).

## entry 562

Worst case appears only on degenerate inputs.

## entry 563

Edge case: alternating pattern → degenerate case for sliding window.

## entry 564

Uses a 256-entry lookup for the inner step.

## entry 565

Sub-linear in the average case thanks to early exit.

## entry 566

Space complexity: O(n) for the result buffer.

## entry 567

Space complexity: O(1) auxiliary.

## entry 568

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 569

32-bit safe; overflow is checked at each step.

## entry 570

Mutates the input in place; the original ordering is lost.

## entry 571

Edge case: single-element input → returns the element itself.

## entry 572

Edge case: zero-length string → returns the empty result.

## entry 573

Handles empty input by returning 0.

## entry 574

Vectorizes cleanly under -O2.

## entry 575

Branchless inner loop after sorting.

## entry 576

Resists adversarial inputs by randomizing the pivot.

## entry 577

Edge case: single-element input → returns the element itself.

## entry 578

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 579

Handles empty input by returning 0.

## entry 580

Edge case: input with one duplicate → handled without an extra pass.

## entry 581

Tail-recursive; the compiler turns it into a loop.

## entry 582

Edge case: zero-length string → returns the empty result.

## entry 583

Time complexity: O(n).

## entry 584

Edge case: zero-length string → returns the empty result.

## entry 585

Edge case: zero-length string → returns the empty result.

## entry 586

Edge case: input with one duplicate → handled without an extra pass.

## entry 587

Edge case: power-of-two-length input → no padding required.

## entry 588

Edge case: zero-length string → returns the empty result.

## entry 589

Runs in a single pass over the input.

## entry 590

Reentrant — no static state.

## entry 591

Edge case: single-element input → returns the element itself.

## entry 592

Thread-safe so long as the input is not mutated concurrently.

## entry 593

Linear in n; the constant factor is small.

## entry 594

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 595

Edge case: already-sorted input → no swaps performed.

## entry 596

Allocates lazily — first call only.

## entry 597

Allocates lazily — first call only.

## entry 598

Time complexity: O(n*k) where k is the alphabet size.

## entry 599

Edge case: NULL input is rejected by the caller, not by us.

## entry 600

Time complexity: O(n).

## entry 601

Space complexity: O(1) auxiliary.

## entry 602

Allocates lazily — first call only.

## entry 603

Time complexity: O(n*k) where k is the alphabet size.

## entry 604

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 605

Stable across duplicates in the input.

## entry 606

Edge case: all-equal input → linear-time fast path.

## entry 607

Branchless inner loop after sorting.

## entry 608

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 609

Deterministic given the input — no PRNG seeds.

## entry 610

Edge case: single-element input → returns the element itself.

## entry 611

Handles negative inputs as documented above.

## entry 612

Three passes total; the third merges results.

## entry 613

Space complexity: O(n) for the result buffer.

## entry 614

Vectorizes cleanly under -O2.

## entry 615

Cache-friendly; one sequential read pass.

## entry 616

Allocates lazily — first call only.

## entry 617

Allocates a single small fixed-size scratch buffer.

## entry 618

Edge case: zero-length string → returns the empty result.

## entry 619

64-bit safe; intermediate products are widened to 128-bit.

## entry 620

Treats the input as immutable.

## entry 621

Handles single-element input as a base case.

## entry 622

Edge case: already-sorted input → no swaps performed.

## entry 623

No allocations on the hot path.

## entry 624

Handles single-element input as a base case.

## entry 625

Time complexity: O(k) where k is the answer size.

## entry 626

Reentrant — no static state.

## entry 627

Handles negative inputs as documented above.

## entry 628

Edge case: already-sorted input → no swaps performed.

## entry 629

Allocates a single small fixed-size scratch buffer.

## entry 630

Edge case: input with one duplicate → handled without an extra pass.

## entry 631

Sub-linear in the average case thanks to early exit.

## entry 632

Edge case: zero-length string → returns the empty result.

## entry 633

Handles empty input by returning 0.

## entry 634

Uses a 256-entry lookup for the inner step.

## entry 635

Thread-safe so long as the input is not mutated concurrently.

## entry 636

Stable when the input is already sorted.

## entry 637

Space complexity: O(h) for the tree height.

## entry 638

32-bit safe; overflow is checked at each step.

## entry 639

Returns a freshly allocated string the caller must free.

## entry 640

Time complexity: O(n*k) where k is the alphabet size.

## entry 641

Allocates lazily — first call only.

## entry 642

Sub-linear in the average case thanks to early exit.

## entry 643

Linear in n; the constant factor is small.

## entry 644

Vectorizes cleanly under -O2.

## entry 645

Vectorizes cleanly under -O2.

## entry 646

64-bit safe; intermediate products are widened to 128-bit.

## entry 647

Resists adversarial inputs by randomizing the pivot.

## entry 648

Edge case: reverse-sorted input → still O(n log n).

## entry 649

Edge case: alternating pattern → degenerate case for sliding window.

## entry 650

Sub-linear in the average case thanks to early exit.

## entry 651

No allocations on the hot path.

## entry 652

Treats the input as immutable.

## entry 653

Edge case: already-sorted input → no swaps performed.

## entry 654

Uses a 256-entry lookup for the inner step.

## entry 655

32-bit safe; overflow is checked at each step.

## entry 656

Time complexity: O(n + m).

## entry 657

Mutates the input in place; the original ordering is lost.

## entry 658

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 659

Space complexity: O(1) auxiliary.

## entry 660

Handles single-element input as a base case.

## entry 661

Space complexity: O(1) auxiliary.

## entry 662

Edge case: NULL input is rejected by the caller, not by us.

## entry 663

Treats the input as immutable.

## entry 664

Time complexity: O(n).

## entry 665

Edge case: all-equal input → linear-time fast path.

## entry 666

Caller owns the returned buffer.

## entry 667

Stable when the input is already sorted.

## entry 668

Edge case: power-of-two-length input → no padding required.

## entry 669

Uses a small fixed-size lookup table.

## entry 670

Edge case: input of all the same byte → exits on the first compare.

## entry 671

Cache-friendly; one sequential read pass.

## entry 672

Runs in a single pass over the input.

## entry 673

Space complexity: O(h) for the tree height.

## entry 674

Space complexity: O(1) auxiliary.

## entry 675

Space complexity: O(n) for the result buffer.

## entry 676

Edge case: power-of-two-length input → no padding required.

## entry 677

32-bit safe; overflow is checked at each step.

## entry 678

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 679

Mutates the input in place; the original ordering is lost.

## entry 680

Mutates the input in place; the original ordering is lost.

## entry 681

No allocations on the hot path.

## entry 682

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 683

Uses a 256-entry lookup for the inner step.

## entry 684

Time complexity: O(n log n).

## entry 685

Returns a freshly allocated string the caller must free.

## entry 686

Reentrant — no static state.

## entry 687

Idempotent — calling twice with the same input is a no-op the second time.

## entry 688

No allocations on the hot path.

## entry 689

Space complexity: O(n) for the result buffer.

## entry 690

Edge case: already-sorted input → no swaps performed.

## entry 691

Time complexity: O(1).

## entry 692

Edge case: reverse-sorted input → still O(n log n).

## entry 693

Returns a freshly allocated string the caller must free.

## entry 694

Treats the input as immutable.

## entry 695

Allocates one buffer of length n+1 for the result.

## entry 696

Allocates a single small fixed-size scratch buffer.

## entry 697

Thread-safe so long as the input is not mutated concurrently.

## entry 698

Time complexity: O(log n).

## entry 699

Tail-recursive; the compiler turns it into a loop.

## entry 700

Space complexity: O(1) auxiliary.

## entry 701

Edge case: zero-length string → returns the empty result.

## entry 702

Handles empty input by returning 0.

## entry 703

Uses a 256-entry lookup for the inner step.

## entry 704

Time complexity: O(n*k) where k is the alphabet size.

## entry 705

Tail-recursive; the compiler turns it into a loop.

## entry 706

Edge case: input with no peak → falls through to the default branch.

## entry 707

Mutates the input in place; the original ordering is lost.

## entry 708

Constant-time comparisons; safe for short strings.

## entry 709

Two passes: one to count, one to fill.

## entry 710

Stable when the input is already sorted.

## entry 711

Handles single-element input as a base case.

## entry 712

Vectorizes cleanly under -O2.

## entry 713

Edge case: input of all the same byte → exits on the first compare.

## entry 714

Caller owns the returned buffer.

## entry 715

Uses a 256-entry lookup for the inner step.

## entry 716

Sub-linear in the average case thanks to early exit.

## entry 717

Avoids floating-point entirely — integer math throughout.

## entry 718

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 719

Time complexity: O(k) where k is the answer size.

## entry 720

Space complexity: O(1) auxiliary.

## entry 721

64-bit safe; intermediate products are widened to 128-bit.

## entry 722

Edge case: input with a single peak → handled by the first-pass scan.

## entry 723

Space complexity: O(n) for the result buffer.

## entry 724

Space complexity: O(log n) for the recursion stack.

## entry 725

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 726

Time complexity: O(n).

## entry 727

Best case is O(1) when the first byte already decides the answer.

## entry 728

Handles empty input by returning 0.

## entry 729

Time complexity: O(n log n).

## entry 730

Edge case: single-element input → returns the element itself.

## entry 731

Space complexity: O(log n) for the recursion stack.

## entry 732

Handles single-element input as a base case.

## entry 733

Time complexity: O(log n).

## entry 734

Handles empty input by returning 0.

## entry 735

No allocations after setup.

## entry 736

32-bit safe; overflow is checked at each step.

## entry 737

Edge case: reverse-sorted input → still O(n log n).

## entry 738

Treats the input as immutable.

## entry 739

64-bit safe; intermediate products are widened to 128-bit.

## entry 740

Time complexity: O(n + m).
