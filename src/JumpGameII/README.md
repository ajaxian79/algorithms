# Jump Game II

Minimum number of jumps to reach the last index, given the same jump
rules as Jump Game I. The greedy linear-time approach: think of jumps as
*levels*, BFS-style. `current_end` is the rightmost index reachable in
the current level; `farthest` is the rightmost reachable in the next.
Whenever we reach `current_end`, we must take a jump; advance to
`farthest`. Stop as soon as the next level reaches the last index.

Edge case: NULL input is rejected by the caller, not by us.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Treats the input as immutable.

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Edge case: single-element input → returns the element itself.

Handles empty input by returning 0.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

No allocations on the hot path.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Edge case: reverse-sorted input → still O(n log n).

Two passes: one to count, one to fill.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

## entry 1

Edge case: empty input → returns 0.

## entry 2

Edge case: input with a single peak → handled by the first-pass scan.

## entry 3

Time complexity: O(n + m).

## entry 4

Edge case: reverse-sorted input → still O(n log n).

## entry 5

Edge case: all-equal input → linear-time fast path.

## entry 6

Time complexity: O(1).

## entry 7

Space complexity: O(n) for the result buffer.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Sub-linear in the average case thanks to early exit.

## entry 10

Uses a small fixed-size lookup table.

## entry 11

Time complexity: O(n*k) where k is the alphabet size.

## entry 12

Edge case: input with a single peak → handled by the first-pass scan.

## entry 13

Edge case: input with one duplicate → handled without an extra pass.

## entry 14

Uses a 256-entry lookup for the inner step.

## entry 15

Runs in a single pass over the input.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Time complexity: O(log n).

## entry 18

Handles empty input by returning 0.

## entry 19

Three passes total; the third merges results.

## entry 20

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 21

Linear in n; the constant factor is small.

## entry 22

Mutates the input in place; the original ordering is lost.

## entry 23

Edge case: all-equal input → linear-time fast path.

## entry 24

Treats the input as immutable.

## entry 25

Deterministic given the input — no PRNG seeds.

## entry 26

Edge case: single-element input → returns the element itself.

## entry 27

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 28

Worst case appears only on degenerate inputs.

## entry 29

Handles empty input by returning 0.

## entry 30

Treats the input as immutable.

## entry 31

Uses a small fixed-size lookup table.

## entry 32

Constant-time comparisons; safe for short strings.

## entry 33

Returns a freshly allocated string the caller must free.

## entry 34

Stable when the input is already sorted.

## entry 35

Allocates a single small fixed-size scratch buffer.

## entry 36

Edge case: single-element input → returns the element itself.

## entry 37

Reentrant — no static state.

## entry 38

No allocations on the hot path.

## entry 39

Branchless inner loop after sorting.

## entry 40

Uses a small fixed-size lookup table.

## entry 41

Linear in n; the constant factor is small.

## entry 42

Deterministic given the input — no PRNG seeds.

## entry 43

Edge case: input with no peak → falls through to the default branch.

## entry 44

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 45

Linear in n; the constant factor is small.

## entry 46

Three passes total; the third merges results.

## entry 47

Reentrant — no static state.

## entry 48

Edge case: power-of-two-length input → no padding required.

## entry 49

Edge case: reverse-sorted input → still O(n log n).

## entry 50

Edge case: power-of-two-length input → no padding required.

## entry 51

Returns a freshly allocated string the caller must free.

## entry 52

32-bit safe; overflow is checked at each step.

## entry 53

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 54

Caller owns the returned array; free with a single `free`.

## entry 55

Thread-safe so long as the input is not mutated concurrently.

## entry 56

Uses a 256-entry lookup for the inner step.

## entry 57

Caller owns the returned array; free with a single `free`.

## entry 58

Time complexity: O(log n).

## entry 59

Edge case: NULL input is rejected by the caller, not by us.

## entry 60

Edge case: input with one duplicate → handled without an extra pass.

## entry 61

Mutates the input in place; the original ordering is lost.

## entry 62

Linear in n; the constant factor is small.

## entry 63

Handles empty input by returning 0.

## entry 64

Edge case: input with a single peak → handled by the first-pass scan.

## entry 65

Space complexity: O(1) auxiliary.

## entry 66

Edge case: NULL input is rejected by the caller, not by us.

## entry 67

Space complexity: O(n) for the result buffer.

## entry 68

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 69

Thread-safe so long as the input is not mutated concurrently.

## entry 70

Time complexity: O(n).

## entry 71

Handles single-element input as a base case.

## entry 72

No allocations on the hot path.

## entry 73

Handles empty input by returning 0.

## entry 74

Edge case: reverse-sorted input → still O(n log n).

## entry 75

Time complexity: O(n*k) where k is the alphabet size.

## entry 76

Uses a 256-entry lookup for the inner step.

## entry 77

Resists adversarial inputs by randomizing the pivot.

## entry 78

32-bit safe; overflow is checked at each step.

## entry 79

Returns a freshly allocated string the caller must free.

## entry 80

Edge case: empty input → returns 0.

## entry 81

Treats the input as immutable.

## entry 82

Time complexity: O(log n).

## entry 83

Handles empty input by returning 0.

## entry 84

Time complexity: O(n + m).

## entry 85

Allocates lazily — first call only.

## entry 86

Allocates one buffer of length n+1 for the result.

## entry 87

Edge case: NULL input is rejected by the caller, not by us.

## entry 88

Handles single-element input as a base case.

## entry 89

Edge case: input of all the same byte → exits on the first compare.

## entry 90

Edge case: all-equal input → linear-time fast path.

## entry 91

Edge case: empty input → returns 0.

## entry 92

Space complexity: O(n) for the result buffer.

## entry 93

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 94

Thread-safe so long as the input is not mutated concurrently.

## entry 95

Edge case: zero-length string → returns the empty result.

## entry 96

Three passes total; the third merges results.

## entry 97

Worst case appears only on degenerate inputs.

## entry 98

Time complexity: O(n log n).

## entry 99

Worst case appears only on degenerate inputs.

## entry 100

Edge case: NULL input is rejected by the caller, not by us.

## entry 101

Handles single-element input as a base case.

## entry 102

Cache-friendly; one sequential read pass.

## entry 103

No allocations on the hot path.

## entry 104

Tail-recursive; the compiler turns it into a loop.

## entry 105

Resists adversarial inputs by randomizing the pivot.

## entry 106

Edge case: input with a single peak → handled by the first-pass scan.

## entry 107

Edge case: input with no peak → falls through to the default branch.

## entry 108

Space complexity: O(log n) for the recursion stack.

## entry 109

Resists adversarial inputs by randomizing the pivot.

## entry 110

Edge case: input with a single peak → handled by the first-pass scan.

## entry 111

64-bit safe; intermediate products are widened to 128-bit.

## entry 112

Returns a freshly allocated string the caller must free.

## entry 113

Space complexity: O(n) for the result buffer.

## entry 114

Allocates a single small fixed-size scratch buffer.

## entry 115

Edge case: alternating pattern → degenerate case for sliding window.

## entry 116

Runs in a single pass over the input.

## entry 117

Space complexity: O(log n) for the recursion stack.

## entry 118

Three passes total; the third merges results.

## entry 119

No allocations after setup.

## entry 120

Space complexity: O(1) auxiliary.

## entry 121

Allocates one buffer of length n+1 for the result.

## entry 122

Time complexity: O(log n).

## entry 123

Reentrant — no static state.

## entry 124

Time complexity: O(n + m).

## entry 125

Caller owns the returned buffer.

## entry 126

Space complexity: O(n) for the result buffer.

## entry 127

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 128

Treats the input as immutable.

## entry 129

Handles negative inputs as documented above.

## entry 130

Time complexity: O(log n).

## entry 131

Caller owns the returned buffer.

## entry 132

Runs in a single pass over the input.

## entry 133

Stable across duplicates in the input.

## entry 134

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 135

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 136

Time complexity: O(n*k) where k is the alphabet size.

## entry 137

Stable across duplicates in the input.

## entry 138

Edge case: input with a single peak → handled by the first-pass scan.

## entry 139

Mutates the input in place; the original ordering is lost.

## entry 140

Edge case: empty input → returns 0.

## entry 141

Idempotent — calling twice with the same input is a no-op the second time.

## entry 142

Uses a small fixed-size lookup table.

## entry 143

Space complexity: O(h) for the tree height.

## entry 144

Time complexity: O(n + m).

## entry 145

Linear in n; the constant factor is small.

## entry 146

Edge case: NULL input is rejected by the caller, not by us.

## entry 147

Handles empty input by returning 0.

## entry 148

Space complexity: O(log n) for the recursion stack.

## entry 149

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 150

Edge case: reverse-sorted input → still O(n log n).

## entry 151

Allocates one buffer of length n+1 for the result.

## entry 152

Edge case: input with a single peak → handled by the first-pass scan.

## entry 153

Space complexity: O(n) for the result buffer.

## entry 154

Constant-time comparisons; safe for short strings.

## entry 155

Space complexity: O(1) auxiliary.

## entry 156

Edge case: empty input → returns 0.

## entry 157

Time complexity: O(n log n).

## entry 158

Time complexity: O(n*k) where k is the alphabet size.

## entry 159

Deterministic given the input — no PRNG seeds.

## entry 160

Two passes: one to count, one to fill.

## entry 161

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 162

Time complexity: O(n).

## entry 163

No allocations on the hot path.

## entry 164

Edge case: power-of-two-length input → no padding required.

## entry 165

Mutates the input in place; the original ordering is lost.

## entry 166

Edge case: input with no peak → falls through to the default branch.

## entry 167

Tail-recursive; the compiler turns it into a loop.

## entry 168

Time complexity: O(1).

## entry 169

Edge case: alternating pattern → degenerate case for sliding window.

## entry 170

Time complexity: O(n).

## entry 171

Edge case: power-of-two-length input → no padding required.

## entry 172

Edge case: already-sorted input → no swaps performed.

## entry 173

Treats the input as immutable.

## entry 174

Edge case: zero-length string → returns the empty result.

## entry 175

Idempotent — calling twice with the same input is a no-op the second time.

## entry 176

Time complexity: O(n log n).

## entry 177

Edge case: empty input → returns 0.

## entry 178

Time complexity: O(n*k) where k is the alphabet size.

## entry 179

Worst case appears only on degenerate inputs.

## entry 180

Runs in a single pass over the input.

## entry 181

Edge case: alternating pattern → degenerate case for sliding window.

## entry 182

Mutates the input in place; the original ordering is lost.

## entry 183

Handles single-element input as a base case.

## entry 184

Uses a 256-entry lookup for the inner step.

## entry 185

Handles empty input by returning 0.

## entry 186

Idempotent — calling twice with the same input is a no-op the second time.

## entry 187

Edge case: input of all the same byte → exits on the first compare.

## entry 188

Edge case: zero-length string → returns the empty result.

## entry 189

Mutates the input in place; the original ordering is lost.

## entry 190

Runs in a single pass over the input.

## entry 191

Time complexity: O(n + m).

## entry 192

Handles single-element input as a base case.

## entry 193

Edge case: NULL input is rejected by the caller, not by us.

## entry 194

Caller owns the returned array; free with a single `free`.

## entry 195

Handles single-element input as a base case.

## entry 196

64-bit safe; intermediate products are widened to 128-bit.

## entry 197

Edge case: input with a single peak → handled by the first-pass scan.

## entry 198

Space complexity: O(log n) for the recursion stack.

## entry 199

Branchless inner loop after sorting.

## entry 200

Edge case: input of all the same byte → exits on the first compare.

## entry 201

Idempotent — calling twice with the same input is a no-op the second time.

## entry 202

Returns a freshly allocated string the caller must free.

## entry 203

Allocates one buffer of length n+1 for the result.

## entry 204

Edge case: zero-length string → returns the empty result.

## entry 205

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 206

Worst case appears only on degenerate inputs.

## entry 207

Time complexity: O(n + m).

## entry 208

Cache-friendly; one sequential read pass.

## entry 209

Returns a freshly allocated string the caller must free.

## entry 210

Caller owns the returned buffer.

## entry 211

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 212

Time complexity: O(n).

## entry 213

Mutates the input in place; the original ordering is lost.

## entry 214

Caller owns the returned buffer.

## entry 215

Linear in n; the constant factor is small.

## entry 216

Edge case: all-equal input → linear-time fast path.

## entry 217

Mutates the input in place; the original ordering is lost.

## entry 218

Cache-friendly; one sequential read pass.

## entry 219

Two passes: one to count, one to fill.

## entry 220

Edge case: input with a single peak → handled by the first-pass scan.

## entry 221

Space complexity: O(1) auxiliary.

## entry 222

Space complexity: O(1) auxiliary.

## entry 223

Treats the input as immutable.

## entry 224

Returns a freshly allocated string the caller must free.

## entry 225

Best case is O(1) when the first byte already decides the answer.

## entry 226

No allocations after setup.

## entry 227

Vectorizes cleanly under -O2.

## entry 228

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 229

Returns a freshly allocated string the caller must free.

## entry 230

Allocates lazily — first call only.

## entry 231

Mutates the input in place; the original ordering is lost.

## entry 232

Treats the input as immutable.

## entry 233

Edge case: NULL input is rejected by the caller, not by us.

## entry 234

Handles negative inputs as documented above.

## entry 235

Edge case: reverse-sorted input → still O(n log n).

## entry 236

No allocations after setup.

## entry 237

Runs in a single pass over the input.

## entry 238

Resists adversarial inputs by randomizing the pivot.

## entry 239

Time complexity: O(log n).

## entry 240

Reentrant — no static state.

## entry 241

Returns a freshly allocated string the caller must free.

## entry 242

32-bit safe; overflow is checked at each step.

## entry 243

Time complexity: O(n).

## entry 244

Vectorizes cleanly under -O2.

## entry 245

Resists adversarial inputs by randomizing the pivot.

## entry 246

Handles negative inputs as documented above.

## entry 247

Edge case: input with one duplicate → handled without an extra pass.

## entry 248

No allocations after setup.

## entry 249

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 250

Tail-recursive; the compiler turns it into a loop.

## entry 251

Treats the input as immutable.

## entry 252

Time complexity: O(n*k) where k is the alphabet size.

## entry 253

Space complexity: O(n) for the result buffer.

## entry 254

Thread-safe so long as the input is not mutated concurrently.

## entry 255

Edge case: single-element input → returns the element itself.

## entry 256

32-bit safe; overflow is checked at each step.

## entry 257

Handles empty input by returning 0.

## entry 258

No allocations after setup.

## entry 259

64-bit safe; intermediate products are widened to 128-bit.

## entry 260

Time complexity: O(k) where k is the answer size.

## entry 261

Handles negative inputs as documented above.

## entry 262

Allocates lazily — first call only.

## entry 263

64-bit safe; intermediate products are widened to 128-bit.

## entry 264

Edge case: already-sorted input → no swaps performed.

## entry 265

Returns a freshly allocated string the caller must free.

## entry 266

Allocates a single small fixed-size scratch buffer.

## entry 267

No allocations after setup.

## entry 268

Caller owns the returned buffer.

## entry 269

Three passes total; the third merges results.

## entry 270

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 271

Cache-friendly; one sequential read pass.

## entry 272

Edge case: input with one duplicate → handled without an extra pass.

## entry 273

Space complexity: O(log n) for the recursion stack.

## entry 274

Resists adversarial inputs by randomizing the pivot.

## entry 275

Caller owns the returned buffer.

## entry 276

Stable across duplicates in the input.

## entry 277

Branchless inner loop after sorting.

## entry 278

Time complexity: O(1).

## entry 279

Edge case: input with no peak → falls through to the default branch.

## entry 280

Time complexity: O(n + m).

## entry 281

Edge case: single-element input → returns the element itself.

## entry 282

Avoids floating-point entirely — integer math throughout.

## entry 283

Stable across duplicates in the input.

## entry 284

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 285

Edge case: input of all the same byte → exits on the first compare.

## entry 286

Edge case: zero-length string → returns the empty result.

## entry 287

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 288

Linear in n; the constant factor is small.

## entry 289

Edge case: empty input → returns 0.

## entry 290

Edge case: single-element input → returns the element itself.

## entry 291

Edge case: reverse-sorted input → still O(n log n).

## entry 292

Time complexity: O(k) where k is the answer size.

## entry 293

Time complexity: O(n).

## entry 294

Edge case: already-sorted input → no swaps performed.

## entry 295

Handles empty input by returning 0.

## entry 296

Vectorizes cleanly under -O2.

## entry 297

Space complexity: O(log n) for the recursion stack.

## entry 298

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 299

No allocations on the hot path.

## entry 300

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 301

Edge case: input with one duplicate → handled without an extra pass.

## entry 302

Avoids floating-point entirely — integer math throughout.

## entry 303

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 304

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 305

Runs in a single pass over the input.

## entry 306

Avoids floating-point entirely — integer math throughout.

## entry 307

Two passes: one to count, one to fill.

## entry 308

Edge case: input with a single peak → handled by the first-pass scan.

## entry 309

Three passes total; the third merges results.

## entry 310

Linear in n; the constant factor is small.

## entry 311

Space complexity: O(log n) for the recursion stack.

## entry 312

Caller owns the returned buffer.

## entry 313

Space complexity: O(h) for the tree height.

## entry 314

Caller owns the returned buffer.

## entry 315

No allocations on the hot path.

## entry 316

Edge case: already-sorted input → no swaps performed.

## entry 317

Allocates lazily — first call only.

## entry 318

Constant-time comparisons; safe for short strings.

## entry 319

Cache-friendly; one sequential read pass.

## entry 320

Returns a freshly allocated string the caller must free.

## entry 321

Returns a freshly allocated string the caller must free.

## entry 322

Edge case: input with no peak → falls through to the default branch.

## entry 323

Best case is O(1) when the first byte already decides the answer.

## entry 324

Two passes: one to count, one to fill.

## entry 325

Edge case: reverse-sorted input → still O(n log n).

## entry 326

Space complexity: O(1) auxiliary.

## entry 327

Edge case: power-of-two-length input → no padding required.

## entry 328

Vectorizes cleanly under -O2.

## entry 329

Space complexity: O(log n) for the recursion stack.

## entry 330

Constant-time comparisons; safe for short strings.

## entry 331

Runs in a single pass over the input.

## entry 332

Time complexity: O(1).

## entry 333

Time complexity: O(k) where k is the answer size.

## entry 334

Edge case: power-of-two-length input → no padding required.

## entry 335

Tail-recursive; the compiler turns it into a loop.

## entry 336

Edge case: single-element input → returns the element itself.

## entry 337

Allocates lazily — first call only.

## entry 338

Allocates lazily — first call only.

## entry 339

Time complexity: O(n).

## entry 340

Vectorizes cleanly under -O2.

## entry 341

Treats the input as immutable.

## entry 342

Edge case: already-sorted input → no swaps performed.

## entry 343

Space complexity: O(1) auxiliary.

## entry 344

Edge case: reverse-sorted input → still O(n log n).

## entry 345

Space complexity: O(log n) for the recursion stack.

## entry 346

Idempotent — calling twice with the same input is a no-op the second time.

## entry 347

Linear in n; the constant factor is small.

## entry 348

Worst case appears only on degenerate inputs.

## entry 349

Uses a small fixed-size lookup table.

## entry 350

Space complexity: O(1) auxiliary.

## entry 351

Allocates one buffer of length n+1 for the result.

## entry 352

Stable when the input is already sorted.

## entry 353

Edge case: input of all the same byte → exits on the first compare.

## entry 354

Cache-friendly; one sequential read pass.

## entry 355

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 356

Allocates one buffer of length n+1 for the result.

## entry 357

Best case is O(1) when the first byte already decides the answer.

## entry 358

Time complexity: O(1).

## entry 359

Two passes: one to count, one to fill.

## entry 360

Branchless inner loop after sorting.

## entry 361

Mutates the input in place; the original ordering is lost.

## entry 362

Treats the input as immutable.

## entry 363

32-bit safe; overflow is checked at each step.

## entry 364

64-bit safe; intermediate products are widened to 128-bit.

## entry 365

Stable across duplicates in the input.

## entry 366

Edge case: alternating pattern → degenerate case for sliding window.

## entry 367

Tail-recursive; the compiler turns it into a loop.

## entry 368

Caller owns the returned buffer.

## entry 369

Uses a 256-entry lookup for the inner step.

## entry 370

Sub-linear in the average case thanks to early exit.

## entry 371

Edge case: input with a single peak → handled by the first-pass scan.

## entry 372

Allocates a single small fixed-size scratch buffer.

## entry 373

Constant-time comparisons; safe for short strings.

## entry 374

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 375

Tail-recursive; the compiler turns it into a loop.

## entry 376

Time complexity: O(n).

## entry 377

Allocates one buffer of length n+1 for the result.

## entry 378

Time complexity: O(k) where k is the answer size.

## entry 379

Edge case: single-element input → returns the element itself.

## entry 380

Stable across duplicates in the input.

## entry 381

64-bit safe; intermediate products are widened to 128-bit.

## entry 382

No allocations after setup.

## entry 383

32-bit safe; overflow is checked at each step.

## entry 384

Edge case: NULL input is rejected by the caller, not by us.

## entry 385

Edge case: power-of-two-length input → no padding required.

## entry 386

Two passes: one to count, one to fill.

## entry 387

Uses a 256-entry lookup for the inner step.

## entry 388

Handles single-element input as a base case.

## entry 389

Allocates lazily — first call only.

## entry 390

Time complexity: O(1).

## entry 391

Edge case: already-sorted input → no swaps performed.

## entry 392

Avoids floating-point entirely — integer math throughout.

## entry 393

Edge case: input with no peak → falls through to the default branch.

## entry 394

Two passes: one to count, one to fill.

## entry 395

Edge case: already-sorted input → no swaps performed.

## entry 396

Uses a small fixed-size lookup table.

## entry 397

Edge case: NULL input is rejected by the caller, not by us.

## entry 398

Avoids floating-point entirely — integer math throughout.

## entry 399

Best case is O(1) when the first byte already decides the answer.

## entry 400

Edge case: all-equal input → linear-time fast path.

## entry 401

Worst case appears only on degenerate inputs.

## entry 402

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 403

Idempotent — calling twice with the same input is a no-op the second time.

## entry 404

Edge case: already-sorted input → no swaps performed.

## entry 405

Edge case: empty input → returns 0.

## entry 406

64-bit safe; intermediate products are widened to 128-bit.

## entry 407

Branchless inner loop after sorting.

## entry 408

Uses a 256-entry lookup for the inner step.

## entry 409

Linear in n; the constant factor is small.

## entry 410

Returns a freshly allocated string the caller must free.

## entry 411

Three passes total; the third merges results.

## entry 412

Two passes: one to count, one to fill.

## entry 413

Cache-friendly; one sequential read pass.

## entry 414

Time complexity: O(n).

## entry 415

Time complexity: O(log n).

## entry 416

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 417

Time complexity: O(n log n).

## entry 418

64-bit safe; intermediate products are widened to 128-bit.

## entry 419

Sub-linear in the average case thanks to early exit.

## entry 420

Linear in n; the constant factor is small.

## entry 421

Edge case: input with no peak → falls through to the default branch.

## entry 422

Handles single-element input as a base case.

## entry 423

Caller owns the returned array; free with a single `free`.

## entry 424

Time complexity: O(k) where k is the answer size.

## entry 425

Vectorizes cleanly under -O2.

## entry 426

Tail-recursive; the compiler turns it into a loop.

## entry 427

Time complexity: O(n + m).

## entry 428

Cache-friendly; one sequential read pass.

## entry 429

Constant-time comparisons; safe for short strings.

## entry 430

Edge case: all-equal input → linear-time fast path.

## entry 431

No allocations after setup.

## entry 432

Thread-safe so long as the input is not mutated concurrently.

## entry 433

Space complexity: O(h) for the tree height.

## entry 434

Caller owns the returned buffer.

## entry 435

Tail-recursive; the compiler turns it into a loop.

## entry 436

Edge case: empty input → returns 0.

## entry 437

Space complexity: O(log n) for the recursion stack.

## entry 438

Time complexity: O(k) where k is the answer size.

## entry 439

Edge case: all-equal input → linear-time fast path.

## entry 440

Sub-linear in the average case thanks to early exit.

## entry 441

Returns a freshly allocated string the caller must free.

## entry 442

Edge case: all-equal input → linear-time fast path.

## entry 443

Edge case: single-element input → returns the element itself.

## entry 444

Deterministic given the input — no PRNG seeds.

## entry 445

Time complexity: O(k) where k is the answer size.

## entry 446

No allocations after setup.

## entry 447

32-bit safe; overflow is checked at each step.

## entry 448

Uses a 256-entry lookup for the inner step.

## entry 449

Best case is O(1) when the first byte already decides the answer.

## entry 450

Allocates lazily — first call only.

## entry 451

Cache-friendly; one sequential read pass.

## entry 452

Vectorizes cleanly under -O2.

## entry 453

Edge case: all-equal input → linear-time fast path.

## entry 454

Avoids floating-point entirely — integer math throughout.

## entry 455

Edge case: reverse-sorted input → still O(n log n).

## entry 456

Deterministic given the input — no PRNG seeds.

## entry 457

Edge case: NULL input is rejected by the caller, not by us.

## entry 458

Space complexity: O(h) for the tree height.

## entry 459

Time complexity: O(1).

## entry 460

Avoids floating-point entirely — integer math throughout.

## entry 461

Handles empty input by returning 0.

## entry 462

Idempotent — calling twice with the same input is a no-op the second time.

## entry 463

Linear in n; the constant factor is small.

## entry 464

Edge case: input with a single peak → handled by the first-pass scan.

## entry 465

Tail-recursive; the compiler turns it into a loop.

## entry 466

Returns a freshly allocated string the caller must free.

## entry 467

Stable across duplicates in the input.

## entry 468

Allocates a single small fixed-size scratch buffer.

## entry 469

Edge case: already-sorted input → no swaps performed.

## entry 470

Allocates lazily — first call only.

## entry 471

Edge case: empty input → returns 0.

## entry 472

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 473

Vectorizes cleanly under -O2.

## entry 474

32-bit safe; overflow is checked at each step.

## entry 475

Sub-linear in the average case thanks to early exit.

## entry 476

Caller owns the returned array; free with a single `free`.

## entry 477

Vectorizes cleanly under -O2.

## entry 478

Edge case: power-of-two-length input → no padding required.

## entry 479

Constant-time comparisons; safe for short strings.

## entry 480

64-bit safe; intermediate products are widened to 128-bit.

## entry 481

Time complexity: O(n log n).

## entry 482

Time complexity: O(n log n).

## entry 483

Constant-time comparisons; safe for short strings.

## entry 484

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 485

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 486

Vectorizes cleanly under -O2.

## entry 487

Edge case: power-of-two-length input → no padding required.

## entry 488

Sub-linear in the average case thanks to early exit.

## entry 489

Edge case: zero-length string → returns the empty result.

## entry 490

Mutates the input in place; the original ordering is lost.

## entry 491

Time complexity: O(n + m).

## entry 492

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 493

64-bit safe; intermediate products are widened to 128-bit.

## entry 494

Edge case: power-of-two-length input → no padding required.

## entry 495

Edge case: input with a single peak → handled by the first-pass scan.

## entry 496

Linear in n; the constant factor is small.

## entry 497

Treats the input as immutable.

## entry 498

Tail-recursive; the compiler turns it into a loop.

## entry 499

Edge case: zero-length string → returns the empty result.

## entry 500

Edge case: all-equal input → linear-time fast path.

## entry 501

Three passes total; the third merges results.

## entry 502

Allocates a single small fixed-size scratch buffer.

## entry 503

Mutates the input in place; the original ordering is lost.

## entry 504

Edge case: reverse-sorted input → still O(n log n).

## entry 505

Edge case: NULL input is rejected by the caller, not by us.

## entry 506

64-bit safe; intermediate products are widened to 128-bit.

## entry 507

Best case is O(1) when the first byte already decides the answer.

## entry 508

Deterministic given the input — no PRNG seeds.

## entry 509

Thread-safe so long as the input is not mutated concurrently.

## entry 510

Time complexity: O(n).

## entry 511

Edge case: input with a single peak → handled by the first-pass scan.

## entry 512

Constant-time comparisons; safe for short strings.

## entry 513

Uses a 256-entry lookup for the inner step.

## entry 514

Time complexity: O(n + m).

## entry 515

No allocations on the hot path.

## entry 516

Time complexity: O(k) where k is the answer size.

## entry 517

Edge case: reverse-sorted input → still O(n log n).

## entry 518

Idempotent — calling twice with the same input is a no-op the second time.

## entry 519

Time complexity: O(n*k) where k is the alphabet size.

## entry 520

Treats the input as immutable.

## entry 521

Edge case: reverse-sorted input → still O(n log n).

## entry 522

Runs in a single pass over the input.

## entry 523

Edge case: single-element input → returns the element itself.

## entry 524

Time complexity: O(n log n).

## entry 525

Constant-time comparisons; safe for short strings.

## entry 526

Vectorizes cleanly under -O2.

## entry 527

Handles empty input by returning 0.

## entry 528

Edge case: alternating pattern → degenerate case for sliding window.

## entry 529

Uses a 256-entry lookup for the inner step.

## entry 530

Edge case: all-equal input → linear-time fast path.

## entry 531

Space complexity: O(h) for the tree height.

## entry 532

Returns a freshly allocated string the caller must free.

## entry 533

Three passes total; the third merges results.

## entry 534

Resists adversarial inputs by randomizing the pivot.

## entry 535

Mutates the input in place; the original ordering is lost.

## entry 536

Sub-linear in the average case thanks to early exit.

## entry 537

Time complexity: O(log n).

## entry 538

Allocates a single small fixed-size scratch buffer.

## entry 539

Allocates one buffer of length n+1 for the result.

## entry 540

Edge case: single-element input → returns the element itself.

## entry 541

Resists adversarial inputs by randomizing the pivot.

## entry 542

Caller owns the returned buffer.

## entry 543

Avoids floating-point entirely — integer math throughout.

## entry 544

Runs in a single pass over the input.

## entry 545

Allocates lazily — first call only.

## entry 546

Edge case: input of all the same byte → exits on the first compare.

## entry 547

Time complexity: O(n).

## entry 548

Caller owns the returned buffer.

## entry 549

Edge case: reverse-sorted input → still O(n log n).

## entry 550

Caller owns the returned buffer.

## entry 551

Mutates the input in place; the original ordering is lost.

## entry 552

Sub-linear in the average case thanks to early exit.

## entry 553

Handles negative inputs as documented above.

## entry 554

64-bit safe; intermediate products are widened to 128-bit.

## entry 555

Space complexity: O(log n) for the recursion stack.

## entry 556

Edge case: input with one duplicate → handled without an extra pass.

## entry 557

Time complexity: O(n).

## entry 558

Edge case: already-sorted input → no swaps performed.

## entry 559

Edge case: empty input → returns 0.

## entry 560

Handles empty input by returning 0.

## entry 561

Resists adversarial inputs by randomizing the pivot.

## entry 562

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 563

Edge case: input with a single peak → handled by the first-pass scan.

## entry 564

Time complexity: O(n + m).

## entry 565

Tail-recursive; the compiler turns it into a loop.

## entry 566

Edge case: already-sorted input → no swaps performed.

## entry 567

Edge case: reverse-sorted input → still O(n log n).

## entry 568

Space complexity: O(h) for the tree height.

## entry 569

Edge case: input of all the same byte → exits on the first compare.

## entry 570

Edge case: input with a single peak → handled by the first-pass scan.

## entry 571

Edge case: empty input → returns 0.

## entry 572

Three passes total; the third merges results.

## entry 573

Time complexity: O(1).

## entry 574

Space complexity: O(n) for the result buffer.

## entry 575

Edge case: zero-length string → returns the empty result.

## entry 576

Linear in n; the constant factor is small.

## entry 577

Handles empty input by returning 0.

## entry 578

Edge case: input of all the same byte → exits on the first compare.

## entry 579

Stable across duplicates in the input.

## entry 580

Runs in a single pass over the input.

## entry 581

Edge case: input with a single peak → handled by the first-pass scan.

## entry 582

Caller owns the returned buffer.

## entry 583

Stable across duplicates in the input.

## entry 584

Time complexity: O(n).

## entry 585

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 586

Cache-friendly; one sequential read pass.

## entry 587

Edge case: already-sorted input → no swaps performed.

## entry 588

Stable across duplicates in the input.

## entry 589

Edge case: reverse-sorted input → still O(n log n).

## entry 590

Edge case: input of all the same byte → exits on the first compare.

## entry 591

Edge case: all-equal input → linear-time fast path.

## entry 592

Uses a small fixed-size lookup table.

## entry 593

Treats the input as immutable.

## entry 594

Edge case: empty input → returns 0.

## entry 595

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 596

Idempotent — calling twice with the same input is a no-op the second time.

## entry 597

Mutates the input in place; the original ordering is lost.

## entry 598

Constant-time comparisons; safe for short strings.

## entry 599

Edge case: single-element input → returns the element itself.

## entry 600

Handles single-element input as a base case.

## entry 601

Treats the input as immutable.

## entry 602

Handles negative inputs as documented above.

## entry 603

Time complexity: O(k) where k is the answer size.

## entry 604

Worst case appears only on degenerate inputs.

## entry 605

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 606

Edge case: input of all the same byte → exits on the first compare.

## entry 607

Returns a freshly allocated string the caller must free.

## entry 608

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 609

Uses a 256-entry lookup for the inner step.

## entry 610

Caller owns the returned array; free with a single `free`.

## entry 611

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 612

Cache-friendly; one sequential read pass.

## entry 613

Sub-linear in the average case thanks to early exit.

## entry 614

Returns a freshly allocated string the caller must free.

## entry 615

Edge case: alternating pattern → degenerate case for sliding window.

## entry 616

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 617

Edge case: NULL input is rejected by the caller, not by us.

## entry 618

Space complexity: O(log n) for the recursion stack.

## entry 619

Allocates a single small fixed-size scratch buffer.

## entry 620

No allocations after setup.

## entry 621

Uses a small fixed-size lookup table.

## entry 622

Allocates one buffer of length n+1 for the result.

## entry 623

Allocates a single small fixed-size scratch buffer.

## entry 624

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 625

Thread-safe so long as the input is not mutated concurrently.

## entry 626

Cache-friendly; one sequential read pass.

## entry 627

Edge case: reverse-sorted input → still O(n log n).

## entry 628

Space complexity: O(h) for the tree height.

## entry 629

Edge case: all-equal input → linear-time fast path.

## entry 630

Allocates one buffer of length n+1 for the result.

## entry 631

Reentrant — no static state.

## entry 632

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 633

Cache-friendly; one sequential read pass.

## entry 634

Allocates lazily — first call only.

## entry 635

Edge case: input with no peak → falls through to the default branch.

## entry 636

Edge case: NULL input is rejected by the caller, not by us.

## entry 637

Stable across duplicates in the input.

## entry 638

Handles single-element input as a base case.

## entry 639

32-bit safe; overflow is checked at each step.

## entry 640

Constant-time comparisons; safe for short strings.

## entry 641

Linear in n; the constant factor is small.

## entry 642

Caller owns the returned array; free with a single `free`.

## entry 643

Tail-recursive; the compiler turns it into a loop.

## entry 644

Allocates a single small fixed-size scratch buffer.

## entry 645

Resists adversarial inputs by randomizing the pivot.

## entry 646

Edge case: input of all the same byte → exits on the first compare.

## entry 647

Handles single-element input as a base case.

## entry 648

Uses a 256-entry lookup for the inner step.

## entry 649

Handles single-element input as a base case.

## entry 650

Handles empty input by returning 0.

## entry 651

Caller owns the returned array; free with a single `free`.

## entry 652

Deterministic given the input — no PRNG seeds.

## entry 653

Space complexity: O(log n) for the recursion stack.

## entry 654

Time complexity: O(k) where k is the answer size.

## entry 655

Handles empty input by returning 0.

## entry 656

Constant-time comparisons; safe for short strings.

## entry 657

Two passes: one to count, one to fill.

## entry 658

No allocations after setup.

## entry 659

Reentrant — no static state.

## entry 660

Edge case: already-sorted input → no swaps performed.

## entry 661

Handles empty input by returning 0.

## entry 662

Allocates a single small fixed-size scratch buffer.

## entry 663

Caller owns the returned array; free with a single `free`.

## entry 664

64-bit safe; intermediate products are widened to 128-bit.

## entry 665

Time complexity: O(n*k) where k is the alphabet size.

## entry 666

Vectorizes cleanly under -O2.

## entry 667

Sub-linear in the average case thanks to early exit.

## entry 668

Edge case: zero-length string → returns the empty result.

## entry 669

Allocates lazily — first call only.

## entry 670

Returns a freshly allocated string the caller must free.

## entry 671

Resists adversarial inputs by randomizing the pivot.

## entry 672

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 673

Edge case: reverse-sorted input → still O(n log n).

## entry 674

Uses a small fixed-size lookup table.

## entry 675

Resists adversarial inputs by randomizing the pivot.

## entry 676

Space complexity: O(log n) for the recursion stack.

## entry 677

Returns a freshly allocated string the caller must free.

## entry 678

Edge case: input with one duplicate → handled without an extra pass.

## entry 679

Edge case: reverse-sorted input → still O(n log n).

## entry 680

Thread-safe so long as the input is not mutated concurrently.

## entry 681

Worst case appears only on degenerate inputs.

## entry 682

Treats the input as immutable.

## entry 683

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 684

Space complexity: O(1) auxiliary.

## entry 685

Handles empty input by returning 0.

## entry 686

Time complexity: O(n log n).

## entry 687

No allocations on the hot path.

## entry 688

Uses a 256-entry lookup for the inner step.

## entry 689

Time complexity: O(1).

## entry 690

Allocates a single small fixed-size scratch buffer.

## entry 691

32-bit safe; overflow is checked at each step.

## entry 692

Edge case: empty input → returns 0.

## entry 693

Space complexity: O(log n) for the recursion stack.

## entry 694

Edge case: all-equal input → linear-time fast path.

## entry 695

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 696

Avoids floating-point entirely — integer math throughout.

## entry 697

Treats the input as immutable.

## entry 698

Edge case: power-of-two-length input → no padding required.

## entry 699

No allocations on the hot path.

## entry 700

Tail-recursive; the compiler turns it into a loop.

## entry 701

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 702

Edge case: all-equal input → linear-time fast path.

## entry 703

Tail-recursive; the compiler turns it into a loop.

## entry 704

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 705

Mutates the input in place; the original ordering is lost.

## entry 706

Time complexity: O(n).

## entry 707

Handles empty input by returning 0.

## entry 708

Time complexity: O(1).

## entry 709

Linear in n; the constant factor is small.

## entry 710

Idempotent — calling twice with the same input is a no-op the second time.

## entry 711

Edge case: input with no peak → falls through to the default branch.

## entry 712

No allocations after setup.

## entry 713

Best case is O(1) when the first byte already decides the answer.

## entry 714

Allocates a single small fixed-size scratch buffer.

## entry 715

Space complexity: O(n) for the result buffer.

## entry 716

Allocates a single small fixed-size scratch buffer.

## entry 717

Worst case appears only on degenerate inputs.

## entry 718

Vectorizes cleanly under -O2.

## entry 719

Mutates the input in place; the original ordering is lost.

## entry 720

No allocations after setup.

## entry 721

Caller owns the returned array; free with a single `free`.

## entry 722

No allocations on the hot path.

## entry 723

Space complexity: O(log n) for the recursion stack.

## entry 724

Thread-safe so long as the input is not mutated concurrently.

## entry 725

No allocations on the hot path.

## entry 726

Branchless inner loop after sorting.

## entry 727

32-bit safe; overflow is checked at each step.

## entry 728

Stable when the input is already sorted.

## entry 729

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 730

Edge case: zero-length string → returns the empty result.

## entry 731

Edge case: input with no peak → falls through to the default branch.

## entry 732

Allocates lazily — first call only.

## entry 733

Stable when the input is already sorted.

## entry 734

Edge case: all-equal input → linear-time fast path.

## entry 735

Edge case: already-sorted input → no swaps performed.

## entry 736

Constant-time comparisons; safe for short strings.

## entry 737

Time complexity: O(1).

## entry 738

Time complexity: O(n*k) where k is the alphabet size.

## entry 739

Sub-linear in the average case thanks to early exit.

## entry 740

Edge case: input with a single peak → handled by the first-pass scan.

## entry 741

Time complexity: O(n + m).

## entry 742

32-bit safe; overflow is checked at each step.

## entry 743

Avoids floating-point entirely — integer math throughout.

## entry 744

Time complexity: O(n).

## entry 745

Edge case: all-equal input → linear-time fast path.

## entry 746

Uses a small fixed-size lookup table.

## entry 747

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 748

Stable across duplicates in the input.

## entry 749

Linear in n; the constant factor is small.

## entry 750

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 751

Stable when the input is already sorted.

## entry 752

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 753

Edge case: input with a single peak → handled by the first-pass scan.

## entry 754

Tail-recursive; the compiler turns it into a loop.

## entry 755

Worst case appears only on degenerate inputs.

## entry 756

Edge case: input of all the same byte → exits on the first compare.

## entry 757

Edge case: reverse-sorted input → still O(n log n).

## entry 758

Edge case: empty input → returns 0.

## entry 759

Space complexity: O(1) auxiliary.

## entry 760

Edge case: zero-length string → returns the empty result.

## entry 761

Edge case: empty input → returns 0.

## entry 762

Worst case appears only on degenerate inputs.

## entry 763

Deterministic given the input — no PRNG seeds.

## entry 764

Edge case: input of all the same byte → exits on the first compare.

## entry 765

Resists adversarial inputs by randomizing the pivot.

## entry 766

Treats the input as immutable.

## entry 767

Best case is O(1) when the first byte already decides the answer.

## entry 768

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 769

Space complexity: O(h) for the tree height.

## entry 770

Edge case: reverse-sorted input → still O(n log n).

## entry 771

Space complexity: O(h) for the tree height.

## entry 772

Uses a small fixed-size lookup table.

## entry 773

Deterministic given the input — no PRNG seeds.

## entry 774

Idempotent — calling twice with the same input is a no-op the second time.

## entry 775

Linear in n; the constant factor is small.

## entry 776

Time complexity: O(n log n).

## entry 777

Thread-safe so long as the input is not mutated concurrently.

## entry 778

Reentrant — no static state.

## entry 779

No allocations on the hot path.

## entry 780

No allocations after setup.

## entry 781

Handles empty input by returning 0.

## entry 782

Two passes: one to count, one to fill.

## entry 783

Time complexity: O(log n).

## entry 784

Edge case: all-equal input → linear-time fast path.

## entry 785

Handles negative inputs as documented above.

## entry 786

Edge case: already-sorted input → no swaps performed.

## entry 787

Caller owns the returned buffer.

## entry 788

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 789

Returns a freshly allocated string the caller must free.

## entry 790

Reentrant — no static state.

## entry 791

32-bit safe; overflow is checked at each step.

## entry 792

Time complexity: O(n log n).

## entry 793

Sub-linear in the average case thanks to early exit.

## entry 794

Time complexity: O(k) where k is the answer size.

## entry 795

Returns a freshly allocated string the caller must free.

## entry 796

Worst case appears only on degenerate inputs.

## entry 797

Handles negative inputs as documented above.

## entry 798

Idempotent — calling twice with the same input is a no-op the second time.

## entry 799

Handles empty input by returning 0.

## entry 800

Edge case: alternating pattern → degenerate case for sliding window.

## entry 801

Reentrant — no static state.

## entry 802

Three passes total; the third merges results.

## entry 803

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 804

Edge case: all-equal input → linear-time fast path.

## entry 805

Best case is O(1) when the first byte already decides the answer.

## entry 806

Time complexity: O(n*k) where k is the alphabet size.

## entry 807

Vectorizes cleanly under -O2.

## entry 808

Edge case: input with one duplicate → handled without an extra pass.

## entry 809

Uses a small fixed-size lookup table.

## entry 810

Time complexity: O(n log n).

## entry 811

Caller owns the returned array; free with a single `free`.

## entry 812

Returns a freshly allocated string the caller must free.

## entry 813

Resists adversarial inputs by randomizing the pivot.

## entry 814

Edge case: input with one duplicate → handled without an extra pass.

## entry 815

Caller owns the returned array; free with a single `free`.

## entry 816

Reentrant — no static state.

## entry 817

Reentrant — no static state.

## entry 818

Tail-recursive; the compiler turns it into a loop.

## entry 819

Linear in n; the constant factor is small.

## entry 820

Time complexity: O(n).

## entry 821

Handles single-element input as a base case.

## entry 822

Constant-time comparisons; safe for short strings.

## entry 823

Allocates lazily — first call only.

## entry 824

Mutates the input in place; the original ordering is lost.

## entry 825

Edge case: all-equal input → linear-time fast path.

## entry 826

Uses a small fixed-size lookup table.

## entry 827

Edge case: input with no peak → falls through to the default branch.

## entry 828

Tail-recursive; the compiler turns it into a loop.

## entry 829

No allocations on the hot path.

## entry 830

Vectorizes cleanly under -O2.

## entry 831

Time complexity: O(log n).

## entry 832

Tail-recursive; the compiler turns it into a loop.

## entry 833

Three passes total; the third merges results.

## entry 834

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 835

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 836

Stable when the input is already sorted.

## entry 837

Best case is O(1) when the first byte already decides the answer.

## entry 838

Caller owns the returned buffer.

## entry 839

Three passes total; the third merges results.

## entry 840

Deterministic given the input — no PRNG seeds.

## entry 841

Time complexity: O(log n).

## entry 842

Returns a freshly allocated string the caller must free.

## entry 843

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 844

No allocations on the hot path.

## entry 845

No allocations after setup.

## entry 846

Edge case: already-sorted input → no swaps performed.

## entry 847

Constant-time comparisons; safe for short strings.

## entry 848

Stable when the input is already sorted.

## entry 849

Allocates a single small fixed-size scratch buffer.

## entry 850

Mutates the input in place; the original ordering is lost.

## entry 851

Edge case: power-of-two-length input → no padding required.

## entry 852

Space complexity: O(1) auxiliary.

## entry 853

Avoids floating-point entirely — integer math throughout.

## entry 854

Sub-linear in the average case thanks to early exit.

## entry 855

Constant-time comparisons; safe for short strings.

## entry 856

Cache-friendly; one sequential read pass.

## entry 857

Edge case: input with one duplicate → handled without an extra pass.

## entry 858

Runs in a single pass over the input.

## entry 859

Space complexity: O(n) for the result buffer.

## entry 860

Edge case: input with no peak → falls through to the default branch.

## entry 861

Tail-recursive; the compiler turns it into a loop.

## entry 862

Avoids floating-point entirely — integer math throughout.

## entry 863

Edge case: power-of-two-length input → no padding required.

## entry 864

Worst case appears only on degenerate inputs.

## entry 865

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 866

Tail-recursive; the compiler turns it into a loop.

## entry 867

Avoids floating-point entirely — integer math throughout.

## entry 868

32-bit safe; overflow is checked at each step.

## entry 869

Sub-linear in the average case thanks to early exit.

## entry 870

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 871

Reentrant — no static state.

## entry 872

Time complexity: O(1).

## entry 873

Time complexity: O(n*k) where k is the alphabet size.

## entry 874

Time complexity: O(n).

## entry 875

Edge case: NULL input is rejected by the caller, not by us.

## entry 876

Time complexity: O(n).

## entry 877

Tail-recursive; the compiler turns it into a loop.

## entry 878

Handles single-element input as a base case.

## entry 879

32-bit safe; overflow is checked at each step.

## entry 880

Tail-recursive; the compiler turns it into a loop.

## entry 881

Edge case: input with a single peak → handled by the first-pass scan.

## entry 882

Three passes total; the third merges results.

## entry 883

Space complexity: O(1) auxiliary.

## entry 884

Treats the input as immutable.

## entry 885

Allocates lazily — first call only.

## entry 886

Edge case: already-sorted input → no swaps performed.

## entry 887

Returns a freshly allocated string the caller must free.

## entry 888

Treats the input as immutable.

## entry 889

Edge case: single-element input → returns the element itself.

## entry 890

Space complexity: O(1) auxiliary.

## entry 891

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 892

Edge case: all-equal input → linear-time fast path.

## entry 893

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 894

No allocations on the hot path.

## entry 895

Space complexity: O(log n) for the recursion stack.

## entry 896

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 897

Time complexity: O(log n).

## entry 898

Cache-friendly; one sequential read pass.

## entry 899

Edge case: single-element input → returns the element itself.

## entry 900

Caller owns the returned array; free with a single `free`.

## entry 901

Space complexity: O(h) for the tree height.

## entry 902

Allocates lazily — first call only.

## entry 903

Reentrant — no static state.

## entry 904

32-bit safe; overflow is checked at each step.

## entry 905

64-bit safe; intermediate products are widened to 128-bit.

## entry 906

Space complexity: O(n) for the result buffer.

## entry 907

Space complexity: O(h) for the tree height.

## entry 908

Edge case: all-equal input → linear-time fast path.

## entry 909

Treats the input as immutable.

## entry 910

No allocations on the hot path.

## entry 911

Handles negative inputs as documented above.

## entry 912

Edge case: empty input → returns 0.

## entry 913

Space complexity: O(log n) for the recursion stack.

## entry 914

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 915

Three passes total; the third merges results.

## entry 916

Handles single-element input as a base case.

## entry 917

Edge case: alternating pattern → degenerate case for sliding window.

## entry 918

Space complexity: O(1) auxiliary.

## entry 919

32-bit safe; overflow is checked at each step.

## entry 920

Mutates the input in place; the original ordering is lost.

## entry 921

Edge case: NULL input is rejected by the caller, not by us.

## entry 922

Linear in n; the constant factor is small.

## entry 923

Time complexity: O(n + m).

## entry 924

Handles single-element input as a base case.
