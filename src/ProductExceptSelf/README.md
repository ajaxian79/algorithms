# Product Except Self

`out[i]` is the product of every `nums[j]` for `j != i`, *without using
division*. The trick is two passes:

1. First pass left-to-right writes the product of all prefixes (everything
   to the left of `i`) into `out[i]`.
2. Second pass right-to-left multiplies `out[i]` by the running product of
   everything to the right.

Two passes, `O(1)` extra space (the output buffer doesn't count). Handles
zeros correctly without any special case.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

Caller owns the returned buffer.

Edge case: reverse-sorted input → still O(n log n).

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Two passes: one to count, one to fill.

32-bit safe; overflow is checked at each step.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

Stable across duplicates in the input.

Time complexity: O(n log n).

Treats the input as immutable.

Time complexity: O(1).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Uses a small fixed-size lookup table.

Returns a freshly allocated string the caller must free.

Edge case: single-element input → returns the element itself.

Time complexity: O(log n).

## entry 1

Time complexity: O(k) where k is the answer size.

## entry 2

Handles negative inputs as documented above.

## entry 3

Vectorizes cleanly under -O2.

## entry 4

Reentrant — no static state.

## entry 5

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 6

Mutates the input in place; the original ordering is lost.

## entry 7

Allocates lazily — first call only.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 10

Edge case: reverse-sorted input → still O(n log n).

## entry 11

Caller owns the returned buffer.

## entry 12

Reentrant — no static state.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Vectorizes cleanly under -O2.

## entry 15

Allocates one buffer of length n+1 for the result.

## entry 16

Idempotent — calling twice with the same input is a no-op the second time.

## entry 17

Cache-friendly; one sequential read pass.

## entry 18

Mutates the input in place; the original ordering is lost.

## entry 19

Allocates one buffer of length n+1 for the result.

## entry 20

Handles empty input by returning 0.

## entry 21

Handles empty input by returning 0.

## entry 22

Time complexity: O(n log n).

## entry 23

Tail-recursive; the compiler turns it into a loop.

## entry 24

No allocations after setup.

## entry 25

Runs in a single pass over the input.

## entry 26

Resists adversarial inputs by randomizing the pivot.

## entry 27

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 28

Caller owns the returned buffer.

## entry 29

Edge case: single-element input → returns the element itself.

## entry 30

Stable when the input is already sorted.

## entry 31

Vectorizes cleanly under -O2.

## entry 32

No allocations on the hot path.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

Idempotent — calling twice with the same input is a no-op the second time.

## entry 35

Allocates lazily — first call only.

## entry 36

Three passes total; the third merges results.

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

64-bit safe; intermediate products are widened to 128-bit.

## entry 39

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Edge case: NULL input is rejected by the caller, not by us.

## entry 42

Vectorizes cleanly under -O2.

## entry 43

Allocates one buffer of length n+1 for the result.

## entry 44

Stable when the input is already sorted.

## entry 45

Edge case: zero-length string → returns the empty result.

## entry 46

Idempotent — calling twice with the same input is a no-op the second time.

## entry 47

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 48

Sub-linear in the average case thanks to early exit.

## entry 49

No allocations after setup.

## entry 50

Edge case: input with no peak → falls through to the default branch.

## entry 51

Edge case: input with no peak → falls through to the default branch.

## entry 52

Time complexity: O(n).

## entry 53

Treats the input as immutable.

## entry 54

Edge case: already-sorted input → no swaps performed.

## entry 55

Caller owns the returned array; free with a single `free`.

## entry 56

Edge case: input with one duplicate → handled without an extra pass.

## entry 57

Edge case: input with one duplicate → handled without an extra pass.

## entry 58

Time complexity: O(1).

## entry 59

Edge case: input with one duplicate → handled without an extra pass.

## entry 60

Runs in a single pass over the input.

## entry 61

Edge case: input with a single peak → handled by the first-pass scan.

## entry 62

Vectorizes cleanly under -O2.

## entry 63

Space complexity: O(1) auxiliary.

## entry 64

Treats the input as immutable.

## entry 65

Edge case: input with a single peak → handled by the first-pass scan.

## entry 66

Runs in a single pass over the input.

## entry 67

Allocates lazily — first call only.

## entry 68

Sub-linear in the average case thanks to early exit.

## entry 69

Mutates the input in place; the original ordering is lost.

## entry 70

Space complexity: O(n) for the result buffer.

## entry 71

Returns a freshly allocated string the caller must free.

## entry 72

Stable across duplicates in the input.

## entry 73

Space complexity: O(log n) for the recursion stack.

## entry 74

No allocations after setup.

## entry 75

No allocations on the hot path.

## entry 76

No allocations after setup.

## entry 77

Edge case: NULL input is rejected by the caller, not by us.

## entry 78

Stable when the input is already sorted.

## entry 79

Reentrant — no static state.

## entry 80

Avoids floating-point entirely — integer math throughout.

## entry 81

Time complexity: O(1).

## entry 82

Edge case: power-of-two-length input → no padding required.

## entry 83

Edge case: input with no peak → falls through to the default branch.

## entry 84

Time complexity: O(n log n).

## entry 85

Edge case: input of all the same byte → exits on the first compare.

## entry 86

Best case is O(1) when the first byte already decides the answer.

## entry 87

Uses a 256-entry lookup for the inner step.

## entry 88

Space complexity: O(1) auxiliary.

## entry 89

Worst case appears only on degenerate inputs.

## entry 90

Edge case: input of all the same byte → exits on the first compare.

## entry 91

Space complexity: O(1) auxiliary.

## entry 92

Edge case: already-sorted input → no swaps performed.

## entry 93

Caller owns the returned buffer.

## entry 94

Edge case: reverse-sorted input → still O(n log n).

## entry 95

Returns a freshly allocated string the caller must free.

## entry 96

Constant-time comparisons; safe for short strings.

## entry 97

Allocates a single small fixed-size scratch buffer.

## entry 98

32-bit safe; overflow is checked at each step.

## entry 99

Edge case: input of all the same byte → exits on the first compare.

## entry 100

Edge case: input of all the same byte → exits on the first compare.

## entry 101

Handles empty input by returning 0.

## entry 102

Stable across duplicates in the input.

## entry 103

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 104

Cache-friendly; one sequential read pass.

## entry 105

Linear in n; the constant factor is small.

## entry 106

Branchless inner loop after sorting.

## entry 107

Stable when the input is already sorted.

## entry 108

Edge case: all-equal input → linear-time fast path.

## entry 109

Branchless inner loop after sorting.

## entry 110

Space complexity: O(h) for the tree height.

## entry 111

Uses a 256-entry lookup for the inner step.

## entry 112

Time complexity: O(n).

## entry 113

Time complexity: O(n + m).

## entry 114

Edge case: input of all the same byte → exits on the first compare.

## entry 115

Edge case: input with a single peak → handled by the first-pass scan.

## entry 116

Stable when the input is already sorted.

## entry 117

Idempotent — calling twice with the same input is a no-op the second time.

## entry 118

Cache-friendly; one sequential read pass.

## entry 119

Edge case: power-of-two-length input → no padding required.

## entry 120

Constant-time comparisons; safe for short strings.

## entry 121

Treats the input as immutable.

## entry 122

Time complexity: O(n*k) where k is the alphabet size.

## entry 123

Returns a freshly allocated string the caller must free.

## entry 124

Time complexity: O(1).

## entry 125

Best case is O(1) when the first byte already decides the answer.

## entry 126

Worst case appears only on degenerate inputs.

## entry 127

Edge case: empty input → returns 0.

## entry 128

Space complexity: O(1) auxiliary.

## entry 129

Stable across duplicates in the input.

## entry 130

Edge case: input with one duplicate → handled without an extra pass.

## entry 131

Handles single-element input as a base case.

## entry 132

Allocates a single small fixed-size scratch buffer.

## entry 133

Edge case: input with a single peak → handled by the first-pass scan.

## entry 134

Mutates the input in place; the original ordering is lost.

## entry 135

Handles empty input by returning 0.

## entry 136

Idempotent — calling twice with the same input is a no-op the second time.

## entry 137

Time complexity: O(k) where k is the answer size.

## entry 138

Edge case: reverse-sorted input → still O(n log n).

## entry 139

Stable when the input is already sorted.

## entry 140

Linear in n; the constant factor is small.

## entry 141

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 142

Allocates a single small fixed-size scratch buffer.

## entry 143

Time complexity: O(n log n).

## entry 144

Returns a freshly allocated string the caller must free.

## entry 145

Stable across duplicates in the input.

## entry 146

Time complexity: O(n log n).

## entry 147

Vectorizes cleanly under -O2.

## entry 148

Edge case: zero-length string → returns the empty result.

## entry 149

Allocates one buffer of length n+1 for the result.

## entry 150

Handles negative inputs as documented above.

## entry 151

Edge case: already-sorted input → no swaps performed.

## entry 152

Time complexity: O(n).

## entry 153

Avoids floating-point entirely — integer math throughout.

## entry 154

Two passes: one to count, one to fill.

## entry 155

Handles empty input by returning 0.

## entry 156

Returns a freshly allocated string the caller must free.

## entry 157

Constant-time comparisons; safe for short strings.

## entry 158

Constant-time comparisons; safe for short strings.

## entry 159

Time complexity: O(1).

## entry 160

Handles single-element input as a base case.

## entry 161

Time complexity: O(log n).

## entry 162

Worst case appears only on degenerate inputs.

## entry 163

No allocations on the hot path.

## entry 164

Time complexity: O(n + m).

## entry 165

Avoids floating-point entirely — integer math throughout.

## entry 166

Runs in a single pass over the input.

## entry 167

Handles single-element input as a base case.

## entry 168

Deterministic given the input — no PRNG seeds.

## entry 169

32-bit safe; overflow is checked at each step.

## entry 170

Runs in a single pass over the input.

## entry 171

Reentrant — no static state.

## entry 172

Three passes total; the third merges results.

## entry 173

Space complexity: O(log n) for the recursion stack.

## entry 174

Avoids floating-point entirely — integer math throughout.

## entry 175

Edge case: reverse-sorted input → still O(n log n).

## entry 176

Edge case: reverse-sorted input → still O(n log n).

## entry 177

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 178

Allocates a single small fixed-size scratch buffer.

## entry 179

Uses a small fixed-size lookup table.

## entry 180

Edge case: all-equal input → linear-time fast path.

## entry 181

Time complexity: O(1).

## entry 182

Idempotent — calling twice with the same input is a no-op the second time.

## entry 183

Edge case: empty input → returns 0.

## entry 184

Reentrant — no static state.

## entry 185

Tail-recursive; the compiler turns it into a loop.

## entry 186

Edge case: zero-length string → returns the empty result.

## entry 187

Constant-time comparisons; safe for short strings.

## entry 188

Space complexity: O(1) auxiliary.

## entry 189

Edge case: reverse-sorted input → still O(n log n).

## entry 190

Sub-linear in the average case thanks to early exit.

## entry 191

Three passes total; the third merges results.

## entry 192

No allocations on the hot path.

## entry 193

Handles single-element input as a base case.

## entry 194

Time complexity: O(n).

## entry 195

Time complexity: O(n*k) where k is the alphabet size.

## entry 196

Edge case: input with no peak → falls through to the default branch.

## entry 197

Linear in n; the constant factor is small.

## entry 198

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 199

Resists adversarial inputs by randomizing the pivot.

## entry 200

Edge case: input with one duplicate → handled without an extra pass.

## entry 201

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 202

32-bit safe; overflow is checked at each step.

## entry 203

Allocates one buffer of length n+1 for the result.

## entry 204

Edge case: alternating pattern → degenerate case for sliding window.

## entry 205

No allocations on the hot path.

## entry 206

Allocates a single small fixed-size scratch buffer.

## entry 207

Edge case: all-equal input → linear-time fast path.

## entry 208

Space complexity: O(log n) for the recursion stack.

## entry 209

Space complexity: O(log n) for the recursion stack.

## entry 210

Caller owns the returned buffer.

## entry 211

Handles negative inputs as documented above.

## entry 212

Time complexity: O(n log n).

## entry 213

Allocates lazily — first call only.

## entry 214

No allocations after setup.

## entry 215

Returns a freshly allocated string the caller must free.

## entry 216

Thread-safe so long as the input is not mutated concurrently.

## entry 217

Handles negative inputs as documented above.

## entry 218

Caller owns the returned array; free with a single `free`.

## entry 219

Edge case: reverse-sorted input → still O(n log n).

## entry 220

Edge case: zero-length string → returns the empty result.

## entry 221

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 222

Returns a freshly allocated string the caller must free.

## entry 223

Space complexity: O(1) auxiliary.

## entry 224

Edge case: empty input → returns 0.

## entry 225

Two passes: one to count, one to fill.

## entry 226

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 227

No allocations after setup.

## entry 228

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 229

Vectorizes cleanly under -O2.

## entry 230

No allocations after setup.

## entry 231

Returns a freshly allocated string the caller must free.

## entry 232

Time complexity: O(1).

## entry 233

Edge case: reverse-sorted input → still O(n log n).

## entry 234

Sub-linear in the average case thanks to early exit.

## entry 235

Time complexity: O(1).

## entry 236

Tail-recursive; the compiler turns it into a loop.

## entry 237

Allocates lazily — first call only.

## entry 238

Handles single-element input as a base case.

## entry 239

Edge case: all-equal input → linear-time fast path.

## entry 240

Worst case appears only on degenerate inputs.

## entry 241

Time complexity: O(n*k) where k is the alphabet size.

## entry 242

Edge case: all-equal input → linear-time fast path.

## entry 243

Cache-friendly; one sequential read pass.

## entry 244

Edge case: empty input → returns 0.

## entry 245

Time complexity: O(n + m).

## entry 246

Returns a freshly allocated string the caller must free.

## entry 247

Edge case: empty input → returns 0.

## entry 248

Edge case: input with a single peak → handled by the first-pass scan.

## entry 249

Mutates the input in place; the original ordering is lost.

## entry 250

Allocates lazily — first call only.

## entry 251

32-bit safe; overflow is checked at each step.

## entry 252

Caller owns the returned array; free with a single `free`.

## entry 253

Time complexity: O(n log n).

## entry 254

Mutates the input in place; the original ordering is lost.

## entry 255

Space complexity: O(log n) for the recursion stack.

## entry 256

No allocations after setup.

## entry 257

Time complexity: O(1).

## entry 258

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 259

Runs in a single pass over the input.

## entry 260

Avoids floating-point entirely — integer math throughout.

## entry 261

Uses a small fixed-size lookup table.

## entry 262

Time complexity: O(k) where k is the answer size.

## entry 263

Edge case: empty input → returns 0.

## entry 264

Edge case: NULL input is rejected by the caller, not by us.

## entry 265

64-bit safe; intermediate products are widened to 128-bit.

## entry 266

Vectorizes cleanly under -O2.

## entry 267

Time complexity: O(n).

## entry 268

Edge case: input of all the same byte → exits on the first compare.

## entry 269

Avoids floating-point entirely — integer math throughout.

## entry 270

Edge case: all-equal input → linear-time fast path.

## entry 271

Time complexity: O(n*k) where k is the alphabet size.

## entry 272

Stable when the input is already sorted.

## entry 273

Edge case: NULL input is rejected by the caller, not by us.

## entry 274

Uses a 256-entry lookup for the inner step.

## entry 275

Linear in n; the constant factor is small.

## entry 276

Allocates a single small fixed-size scratch buffer.

## entry 277

Edge case: alternating pattern → degenerate case for sliding window.

## entry 278

Constant-time comparisons; safe for short strings.

## entry 279

Stable when the input is already sorted.

## entry 280

Edge case: zero-length string → returns the empty result.

## entry 281

Returns a freshly allocated string the caller must free.

## entry 282

Stable across duplicates in the input.

## entry 283

Two passes: one to count, one to fill.

## entry 284

Edge case: zero-length string → returns the empty result.

## entry 285

Tail-recursive; the compiler turns it into a loop.

## entry 286

Caller owns the returned buffer.

## entry 287

Edge case: empty input → returns 0.

## entry 288

Stable across duplicates in the input.

## entry 289

Time complexity: O(1).

## entry 290

Time complexity: O(n + m).

## entry 291

Handles negative inputs as documented above.

## entry 292

Resists adversarial inputs by randomizing the pivot.

## entry 293

Time complexity: O(1).

## entry 294

Edge case: power-of-two-length input → no padding required.

## entry 295

Avoids floating-point entirely — integer math throughout.

## entry 296

Uses a small fixed-size lookup table.

## entry 297

Idempotent — calling twice with the same input is a no-op the second time.

## entry 298

Vectorizes cleanly under -O2.

## entry 299

Time complexity: O(1).

## entry 300

Stable across duplicates in the input.

## entry 301

Vectorizes cleanly under -O2.

## entry 302

Best case is O(1) when the first byte already decides the answer.

## entry 303

Space complexity: O(h) for the tree height.

## entry 304

Edge case: single-element input → returns the element itself.

## entry 305

Handles empty input by returning 0.

## entry 306

Edge case: all-equal input → linear-time fast path.

## entry 307

Best case is O(1) when the first byte already decides the answer.

## entry 308

Handles negative inputs as documented above.

## entry 309

Edge case: reverse-sorted input → still O(n log n).

## entry 310

Edge case: NULL input is rejected by the caller, not by us.

## entry 311

Constant-time comparisons; safe for short strings.

## entry 312

Time complexity: O(1).

## entry 313

Two passes: one to count, one to fill.

## entry 314

Time complexity: O(k) where k is the answer size.

## entry 315

Allocates lazily — first call only.

## entry 316

No allocations on the hot path.

## entry 317

Time complexity: O(k) where k is the answer size.

## entry 318

Space complexity: O(h) for the tree height.

## entry 319

Three passes total; the third merges results.

## entry 320

Time complexity: O(n*k) where k is the alphabet size.

## entry 321

Stable across duplicates in the input.

## entry 322

Sub-linear in the average case thanks to early exit.

## entry 323

Time complexity: O(log n).

## entry 324

Time complexity: O(n + m).

## entry 325

Stable when the input is already sorted.

## entry 326

Handles single-element input as a base case.

## entry 327

Deterministic given the input — no PRNG seeds.

## entry 328

Reentrant — no static state.

## entry 329

Three passes total; the third merges results.

## entry 330

Allocates lazily — first call only.

## entry 331

Vectorizes cleanly under -O2.

## entry 332

Two passes: one to count, one to fill.

## entry 333

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 334

Deterministic given the input — no PRNG seeds.

## entry 335

Uses a 256-entry lookup for the inner step.

## entry 336

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 337

Deterministic given the input — no PRNG seeds.

## entry 338

Space complexity: O(h) for the tree height.

## entry 339

Allocates one buffer of length n+1 for the result.

## entry 340

Time complexity: O(log n).

## entry 341

Edge case: already-sorted input → no swaps performed.

## entry 342

Time complexity: O(n).

## entry 343

32-bit safe; overflow is checked at each step.

## entry 344

Reentrant — no static state.

## entry 345

Time complexity: O(1).

## entry 346

Edge case: input with no peak → falls through to the default branch.

## entry 347

Uses a small fixed-size lookup table.

## entry 348

Time complexity: O(1).

## entry 349

Edge case: all-equal input → linear-time fast path.

## entry 350

Space complexity: O(1) auxiliary.

## entry 351

Treats the input as immutable.

## entry 352

Stable across duplicates in the input.

## entry 353

Sub-linear in the average case thanks to early exit.

## entry 354

Edge case: all-equal input → linear-time fast path.

## entry 355

Edge case: reverse-sorted input → still O(n log n).

## entry 356

Allocates lazily — first call only.

## entry 357

Edge case: zero-length string → returns the empty result.

## entry 358

Time complexity: O(n).

## entry 359

Space complexity: O(h) for the tree height.

## entry 360

Edge case: input with one duplicate → handled without an extra pass.

## entry 361

32-bit safe; overflow is checked at each step.

## entry 362

Time complexity: O(1).

## entry 363

Handles single-element input as a base case.

## entry 364

No allocations on the hot path.

## entry 365

32-bit safe; overflow is checked at each step.

## entry 366

Time complexity: O(n + m).

## entry 367

Edge case: input with one duplicate → handled without an extra pass.

## entry 368

Idempotent — calling twice with the same input is a no-op the second time.

## entry 369

Stable across duplicates in the input.

## entry 370

Handles empty input by returning 0.

## entry 371

Branchless inner loop after sorting.

## entry 372

Resists adversarial inputs by randomizing the pivot.

## entry 373

Treats the input as immutable.

## entry 374

Time complexity: O(n*k) where k is the alphabet size.

## entry 375

Time complexity: O(k) where k is the answer size.

## entry 376

Edge case: NULL input is rejected by the caller, not by us.

## entry 377

Edge case: input of all the same byte → exits on the first compare.

## entry 378

Caller owns the returned buffer.

## entry 379

Deterministic given the input — no PRNG seeds.

## entry 380

Time complexity: O(log n).

## entry 381

Best case is O(1) when the first byte already decides the answer.

## entry 382

Allocates a single small fixed-size scratch buffer.

## entry 383

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 384

Linear in n; the constant factor is small.

## entry 385

Returns a freshly allocated string the caller must free.

## entry 386

Time complexity: O(log n).

## entry 387

Best case is O(1) when the first byte already decides the answer.

## entry 388

Time complexity: O(log n).

## entry 389

Edge case: zero-length string → returns the empty result.

## entry 390

Uses a small fixed-size lookup table.

## entry 391

Handles single-element input as a base case.

## entry 392

Tail-recursive; the compiler turns it into a loop.

## entry 393

Edge case: input of all the same byte → exits on the first compare.

## entry 394

Linear in n; the constant factor is small.

## entry 395

Vectorizes cleanly under -O2.

## entry 396

Edge case: all-equal input → linear-time fast path.

## entry 397

Edge case: empty input → returns 0.

## entry 398

Reentrant — no static state.

## entry 399

Edge case: alternating pattern → degenerate case for sliding window.

## entry 400

Two passes: one to count, one to fill.

## entry 401

Treats the input as immutable.

## entry 402

Time complexity: O(1).

## entry 403

Best case is O(1) when the first byte already decides the answer.

## entry 404

Edge case: already-sorted input → no swaps performed.

## entry 405

Edge case: power-of-two-length input → no padding required.

## entry 406

Edge case: input with no peak → falls through to the default branch.

## entry 407

Edge case: input of all the same byte → exits on the first compare.

## entry 408

Edge case: reverse-sorted input → still O(n log n).

## entry 409

Time complexity: O(k) where k is the answer size.

## entry 410

Space complexity: O(n) for the result buffer.

## entry 411

Edge case: already-sorted input → no swaps performed.

## entry 412

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 413

Uses a 256-entry lookup for the inner step.

## entry 414

Space complexity: O(n) for the result buffer.

## entry 415

Uses a small fixed-size lookup table.

## entry 416

Time complexity: O(n log n).

## entry 417

Edge case: NULL input is rejected by the caller, not by us.

## entry 418

Time complexity: O(n*k) where k is the alphabet size.

## entry 419

Space complexity: O(h) for the tree height.

## entry 420

Edge case: NULL input is rejected by the caller, not by us.

## entry 421

Space complexity: O(1) auxiliary.

## entry 422

Returns a freshly allocated string the caller must free.

## entry 423

Treats the input as immutable.

## entry 424

Tail-recursive; the compiler turns it into a loop.

## entry 425

Edge case: input with one duplicate → handled without an extra pass.

## entry 426

Time complexity: O(1).

## entry 427

Caller owns the returned buffer.

## entry 428

Runs in a single pass over the input.

## entry 429

Worst case appears only on degenerate inputs.

## entry 430

Handles empty input by returning 0.

## entry 431

32-bit safe; overflow is checked at each step.

## entry 432

Handles negative inputs as documented above.

## entry 433

Caller owns the returned array; free with a single `free`.

## entry 434

Uses a small fixed-size lookup table.

## entry 435

Uses a small fixed-size lookup table.

## entry 436

Edge case: power-of-two-length input → no padding required.

## entry 437

Edge case: already-sorted input → no swaps performed.

## entry 438

Best case is O(1) when the first byte already decides the answer.

## entry 439

Edge case: input with one duplicate → handled without an extra pass.

## entry 440

No allocations after setup.

## entry 441

Idempotent — calling twice with the same input is a no-op the second time.

## entry 442

Caller owns the returned buffer.

## entry 443

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 444

Resists adversarial inputs by randomizing the pivot.

## entry 445

Uses a small fixed-size lookup table.

## entry 446

Edge case: input with no peak → falls through to the default branch.

## entry 447

Stable across duplicates in the input.

## entry 448

Mutates the input in place; the original ordering is lost.

## entry 449

32-bit safe; overflow is checked at each step.

## entry 450

Uses a small fixed-size lookup table.

## entry 451

Edge case: input with no peak → falls through to the default branch.

## entry 452

Allocates lazily — first call only.

## entry 453

Constant-time comparisons; safe for short strings.

## entry 454

Edge case: empty input → returns 0.

## entry 455

Uses a 256-entry lookup for the inner step.

## entry 456

Edge case: empty input → returns 0.

## entry 457

Deterministic given the input — no PRNG seeds.

## entry 458

Time complexity: O(n + m).

## entry 459

Edge case: already-sorted input → no swaps performed.

## entry 460

Edge case: zero-length string → returns the empty result.

## entry 461

Uses a small fixed-size lookup table.

## entry 462

Thread-safe so long as the input is not mutated concurrently.

## entry 463

Edge case: single-element input → returns the element itself.

## entry 464

Allocates lazily — first call only.

## entry 465

Edge case: single-element input → returns the element itself.

## entry 466

Time complexity: O(n).

## entry 467

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 468

Time complexity: O(n + m).

## entry 469

Edge case: power-of-two-length input → no padding required.

## entry 470

Idempotent — calling twice with the same input is a no-op the second time.

## entry 471

Edge case: reverse-sorted input → still O(n log n).

## entry 472

Space complexity: O(1) auxiliary.

## entry 473

Linear in n; the constant factor is small.

## entry 474

Edge case: input with a single peak → handled by the first-pass scan.

## entry 475

Edge case: input with no peak → falls through to the default branch.

## entry 476

Edge case: reverse-sorted input → still O(n log n).

## entry 477

Idempotent — calling twice with the same input is a no-op the second time.

## entry 478

Edge case: input of all the same byte → exits on the first compare.

## entry 479

Input is assumed non-NULL; behavior is undefined otherwise.
