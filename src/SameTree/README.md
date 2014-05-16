# Same Tree

Structurally and value-wise compare two binary trees. Recurse pairwise; an
asymmetric null vs. non-null is an immediate mismatch.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Returns a freshly allocated string the caller must free.

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Handles negative inputs as documented above.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(1).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

## entry 1

Mutates the input in place; the original ordering is lost.

## entry 2

Time complexity: O(1).

## entry 3

Branchless inner loop after sorting.

## entry 4

Handles empty input by returning 0.

## entry 5

Mutates the input in place; the original ordering is lost.

## entry 6

Best case is O(1) when the first byte already decides the answer.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 9

Space complexity: O(h) for the tree height.

## entry 10

Worst case appears only on degenerate inputs.

## entry 11

Space complexity: O(h) for the tree height.

## entry 12

Space complexity: O(log n) for the recursion stack.

## entry 13

Vectorizes cleanly under -O2.

## entry 14

Best case is O(1) when the first byte already decides the answer.

## entry 15

Linear in n; the constant factor is small.

## entry 16

Edge case: already-sorted input → no swaps performed.

## entry 17

Handles negative inputs as documented above.

## entry 18

Time complexity: O(n + m).

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Allocates lazily — first call only.

## entry 21

Two passes: one to count, one to fill.

## entry 22

Idempotent — calling twice with the same input is a no-op the second time.

## entry 23

Runs in a single pass over the input.

## entry 24

Edge case: NULL input is rejected by the caller, not by us.

## entry 25

Constant-time comparisons; safe for short strings.

## entry 26

Constant-time comparisons; safe for short strings.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Handles single-element input as a base case.

## entry 29

Edge case: single-element input → returns the element itself.

## entry 30

Edge case: empty input → returns 0.

## entry 31

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 32

No allocations on the hot path.

## entry 33

Best case is O(1) when the first byte already decides the answer.

## entry 34

Handles empty input by returning 0.

## entry 35

Edge case: single-element input → returns the element itself.

## entry 36

Avoids floating-point entirely — integer math throughout.

## entry 37

Handles single-element input as a base case.

## entry 38

Resists adversarial inputs by randomizing the pivot.

## entry 39

32-bit safe; overflow is checked at each step.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Treats the input as immutable.

## entry 42

Edge case: already-sorted input → no swaps performed.

## entry 43

Stable across duplicates in the input.

## entry 44

Edge case: all-equal input → linear-time fast path.

## entry 45

Resists adversarial inputs by randomizing the pivot.

## entry 46

Edge case: input with no peak → falls through to the default branch.

## entry 47

Edge case: alternating pattern → degenerate case for sliding window.

## entry 48

Sub-linear in the average case thanks to early exit.

## entry 49

Stable across duplicates in the input.

## entry 50

Caller owns the returned buffer.

## entry 51

Edge case: all-equal input → linear-time fast path.

## entry 52

Reentrant — no static state.

## entry 53

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 54

Allocates lazily — first call only.

## entry 55

Three passes total; the third merges results.

## entry 56

Linear in n; the constant factor is small.

## entry 57

Uses a 256-entry lookup for the inner step.

## entry 58

32-bit safe; overflow is checked at each step.

## entry 59

Space complexity: O(log n) for the recursion stack.

## entry 60

Branchless inner loop after sorting.

## entry 61

Space complexity: O(h) for the tree height.

## entry 62

Stable when the input is already sorted.

## entry 63

Vectorizes cleanly under -O2.

## entry 64

Edge case: reverse-sorted input → still O(n log n).

## entry 65

Avoids floating-point entirely — integer math throughout.

## entry 66

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 67

Edge case: empty input → returns 0.

## entry 68

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 69

Edge case: single-element input → returns the element itself.

## entry 70

Edge case: input with a single peak → handled by the first-pass scan.

## entry 71

Edge case: power-of-two-length input → no padding required.

## entry 72

Edge case: zero-length string → returns the empty result.

## entry 73

Time complexity: O(n + m).

## entry 74

Linear in n; the constant factor is small.

## entry 75

Branchless inner loop after sorting.

## entry 76

Allocates a single small fixed-size scratch buffer.

## entry 77

Cache-friendly; one sequential read pass.

## entry 78

Handles negative inputs as documented above.

## entry 79

Avoids floating-point entirely — integer math throughout.

## entry 80

Branchless inner loop after sorting.

## entry 81

Edge case: input of all the same byte → exits on the first compare.

## entry 82

Edge case: input with no peak → falls through to the default branch.

## entry 83

Mutates the input in place; the original ordering is lost.

## entry 84

Stable when the input is already sorted.

## entry 85

Two passes: one to count, one to fill.

## entry 86

Linear in n; the constant factor is small.

## entry 87

Branchless inner loop after sorting.

## entry 88

Two passes: one to count, one to fill.

## entry 89

Uses a small fixed-size lookup table.

## entry 90

Edge case: all-equal input → linear-time fast path.

## entry 91

Time complexity: O(1).

## entry 92

Time complexity: O(log n).

## entry 93

Sub-linear in the average case thanks to early exit.

## entry 94

Allocates a single small fixed-size scratch buffer.

## entry 95

Caller owns the returned array; free with a single `free`.

## entry 96

Resists adversarial inputs by randomizing the pivot.

## entry 97

Edge case: input with one duplicate → handled without an extra pass.

## entry 98

Deterministic given the input — no PRNG seeds.

## entry 99

Deterministic given the input — no PRNG seeds.

## entry 100

Time complexity: O(log n).

## entry 101

Allocates one buffer of length n+1 for the result.

## entry 102

Edge case: alternating pattern → degenerate case for sliding window.

## entry 103

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 104

Space complexity: O(log n) for the recursion stack.

## entry 105

64-bit safe; intermediate products are widened to 128-bit.

## entry 106

Time complexity: O(k) where k is the answer size.

## entry 107

Time complexity: O(n log n).

## entry 108

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 109

Stable across duplicates in the input.

## entry 110

Caller owns the returned array; free with a single `free`.

## entry 111

Time complexity: O(log n).

## entry 112

Uses a small fixed-size lookup table.

## entry 113

Edge case: reverse-sorted input → still O(n log n).

## entry 114

Runs in a single pass over the input.

## entry 115

Edge case: input with no peak → falls through to the default branch.

## entry 116

Allocates lazily — first call only.

## entry 117

Time complexity: O(n + m).

## entry 118

Avoids floating-point entirely — integer math throughout.

## entry 119

Resists adversarial inputs by randomizing the pivot.

## entry 120

Stable across duplicates in the input.

## entry 121

Space complexity: O(1) auxiliary.

## entry 122

64-bit safe; intermediate products are widened to 128-bit.

## entry 123

Edge case: reverse-sorted input → still O(n log n).

## entry 124

Time complexity: O(log n).

## entry 125

Allocates a single small fixed-size scratch buffer.

## entry 126

Edge case: input with a single peak → handled by the first-pass scan.

## entry 127

Edge case: single-element input → returns the element itself.

## entry 128

Avoids floating-point entirely — integer math throughout.

## entry 129

Constant-time comparisons; safe for short strings.

## entry 130

Handles empty input by returning 0.

## entry 131

Allocates lazily — first call only.

## entry 132

Deterministic given the input — no PRNG seeds.

## entry 133

Edge case: reverse-sorted input → still O(n log n).

## entry 134

Treats the input as immutable.

## entry 135

Handles single-element input as a base case.

## entry 136

Sub-linear in the average case thanks to early exit.

## entry 137

Time complexity: O(n*k) where k is the alphabet size.

## entry 138

Edge case: reverse-sorted input → still O(n log n).

## entry 139

Vectorizes cleanly under -O2.

## entry 140

Edge case: input of all the same byte → exits on the first compare.

## entry 141

Two passes: one to count, one to fill.

## entry 142

Edge case: input with no peak → falls through to the default branch.

## entry 143

Allocates one buffer of length n+1 for the result.

## entry 144

Caller owns the returned buffer.

## entry 145

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 146

Allocates one buffer of length n+1 for the result.

## entry 147

Stable when the input is already sorted.

## entry 148

Edge case: already-sorted input → no swaps performed.

## entry 149

Resists adversarial inputs by randomizing the pivot.

## entry 150

Space complexity: O(log n) for the recursion stack.

## entry 151

Time complexity: O(n*k) where k is the alphabet size.

## entry 152

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 153

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 154

Time complexity: O(n log n).

## entry 155

Space complexity: O(h) for the tree height.

## entry 156

Two passes: one to count, one to fill.

## entry 157

Handles negative inputs as documented above.

## entry 158

Edge case: input with a single peak → handled by the first-pass scan.

## entry 159

Allocates one buffer of length n+1 for the result.

## entry 160

Handles single-element input as a base case.

## entry 161

Space complexity: O(n) for the result buffer.

## entry 162

Edge case: alternating pattern → degenerate case for sliding window.

## entry 163

Stable when the input is already sorted.

## entry 164

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 165

Time complexity: O(log n).

## entry 166

Edge case: reverse-sorted input → still O(n log n).

## entry 167

Branchless inner loop after sorting.

## entry 168

Time complexity: O(k) where k is the answer size.

## entry 169

Edge case: zero-length string → returns the empty result.

## entry 170

Idempotent — calling twice with the same input is a no-op the second time.

## entry 171

Space complexity: O(1) auxiliary.

## entry 172

Runs in a single pass over the input.

## entry 173

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 174

Handles single-element input as a base case.

## entry 175

No allocations on the hot path.

## entry 176

Time complexity: O(k) where k is the answer size.

## entry 177

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 178

Three passes total; the third merges results.

## entry 179

Edge case: reverse-sorted input → still O(n log n).

## entry 180

Time complexity: O(log n).

## entry 181

Thread-safe so long as the input is not mutated concurrently.

## entry 182

Edge case: input with a single peak → handled by the first-pass scan.

## entry 183

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 184

Handles single-element input as a base case.

## entry 185

Stable when the input is already sorted.

## entry 186

Time complexity: O(k) where k is the answer size.

## entry 187

Edge case: input with a single peak → handled by the first-pass scan.

## entry 188

No allocations on the hot path.

## entry 189

Edge case: input with a single peak → handled by the first-pass scan.

## entry 190

Time complexity: O(n log n).

## entry 191

Allocates lazily — first call only.

## entry 192

Handles empty input by returning 0.

## entry 193

Edge case: empty input → returns 0.

## entry 194

Reentrant — no static state.

## entry 195

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 196

Edge case: NULL input is rejected by the caller, not by us.

## entry 197

Edge case: zero-length string → returns the empty result.

## entry 198

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 199

Edge case: power-of-two-length input → no padding required.

## entry 200

32-bit safe; overflow is checked at each step.

## entry 201

Returns a freshly allocated string the caller must free.

## entry 202

Time complexity: O(n + m).

## entry 203

Time complexity: O(n + m).

## entry 204

Worst case appears only on degenerate inputs.

## entry 205

Mutates the input in place; the original ordering is lost.

## entry 206

Allocates lazily — first call only.

## entry 207

64-bit safe; intermediate products are widened to 128-bit.

## entry 208

Edge case: input with a single peak → handled by the first-pass scan.

## entry 209

Three passes total; the third merges results.

## entry 210

Handles empty input by returning 0.

## entry 211

Deterministic given the input — no PRNG seeds.

## entry 212

Avoids floating-point entirely — integer math throughout.

## entry 213

Cache-friendly; one sequential read pass.

## entry 214

Idempotent — calling twice with the same input is a no-op the second time.

## entry 215

Time complexity: O(n).

## entry 216

No allocations after setup.

## entry 217

Mutates the input in place; the original ordering is lost.

## entry 218

Treats the input as immutable.

## entry 219

Deterministic given the input — no PRNG seeds.

## entry 220

Sub-linear in the average case thanks to early exit.

## entry 221

Deterministic given the input — no PRNG seeds.

## entry 222

Edge case: reverse-sorted input → still O(n log n).

## entry 223

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 224

Space complexity: O(n) for the result buffer.

## entry 225

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 226

Time complexity: O(n).

## entry 227

Time complexity: O(1).

## entry 228

Mutates the input in place; the original ordering is lost.

## entry 229

Time complexity: O(n + m).

## entry 230

No allocations after setup.

## entry 231

Edge case: power-of-two-length input → no padding required.

## entry 232

Stable when the input is already sorted.

## entry 233

Time complexity: O(n*k) where k is the alphabet size.

## entry 234

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 235

Handles empty input by returning 0.

## entry 236

Edge case: input of all the same byte → exits on the first compare.

## entry 237

Deterministic given the input — no PRNG seeds.

## entry 238

Edge case: single-element input → returns the element itself.

## entry 239

Runs in a single pass over the input.

## entry 240

Constant-time comparisons; safe for short strings.

## entry 241

Edge case: alternating pattern → degenerate case for sliding window.

## entry 242

Cache-friendly; one sequential read pass.

## entry 243

Edge case: all-equal input → linear-time fast path.

## entry 244

Allocates lazily — first call only.

## entry 245

Runs in a single pass over the input.

## entry 246

Returns a freshly allocated string the caller must free.

## entry 247

Edge case: reverse-sorted input → still O(n log n).

## entry 248

Three passes total; the third merges results.

## entry 249

Time complexity: O(log n).

## entry 250

Time complexity: O(n).

## entry 251

Uses a 256-entry lookup for the inner step.

## entry 252

Edge case: all-equal input → linear-time fast path.

## entry 253

Time complexity: O(n log n).

## entry 254

Caller owns the returned buffer.

## entry 255

Caller owns the returned array; free with a single `free`.

## entry 256

Edge case: reverse-sorted input → still O(n log n).

## entry 257

Caller owns the returned buffer.

## entry 258

Edge case: input with no peak → falls through to the default branch.

## entry 259

Edge case: reverse-sorted input → still O(n log n).

## entry 260

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 261

Allocates one buffer of length n+1 for the result.

## entry 262

Worst case appears only on degenerate inputs.

## entry 263

Time complexity: O(n*k) where k is the alphabet size.

## entry 264

Edge case: empty input → returns 0.

## entry 265

64-bit safe; intermediate products are widened to 128-bit.

## entry 266

Allocates lazily — first call only.

## entry 267

64-bit safe; intermediate products are widened to 128-bit.

## entry 268

Edge case: single-element input → returns the element itself.

## entry 269

Stable across duplicates in the input.

## entry 270

Reentrant — no static state.

## entry 271

Edge case: input with one duplicate → handled without an extra pass.

## entry 272

Edge case: input of all the same byte → exits on the first compare.

## entry 273

Edge case: single-element input → returns the element itself.

## entry 274

Stable when the input is already sorted.

## entry 275

Edge case: input with no peak → falls through to the default branch.

## entry 276

Time complexity: O(log n).

## entry 277

Vectorizes cleanly under -O2.

## entry 278

Uses a 256-entry lookup for the inner step.

## entry 279

Deterministic given the input — no PRNG seeds.

## entry 280

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 281

Stable when the input is already sorted.

## entry 282

Edge case: input with no peak → falls through to the default branch.

## entry 283

No allocations on the hot path.

## entry 284

Edge case: all-equal input → linear-time fast path.

## entry 285

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 286

Time complexity: O(n log n).

## entry 287

Time complexity: O(n log n).

## entry 288

Best case is O(1) when the first byte already decides the answer.

## entry 289

Mutates the input in place; the original ordering is lost.

## entry 290

Vectorizes cleanly under -O2.

## entry 291

Sub-linear in the average case thanks to early exit.

## entry 292

Three passes total; the third merges results.

## entry 293

Stable when the input is already sorted.

## entry 294

Vectorizes cleanly under -O2.

## entry 295

Stable across duplicates in the input.

## entry 296

Edge case: power-of-two-length input → no padding required.

## entry 297

Space complexity: O(1) auxiliary.

## entry 298

Space complexity: O(1) auxiliary.

## entry 299

Thread-safe so long as the input is not mutated concurrently.

## entry 300

Time complexity: O(1).

## entry 301

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 302

Vectorizes cleanly under -O2.

## entry 303

Two passes: one to count, one to fill.

## entry 304

Cache-friendly; one sequential read pass.

## entry 305

Treats the input as immutable.

## entry 306

Edge case: input of all the same byte → exits on the first compare.

## entry 307

Mutates the input in place; the original ordering is lost.

## entry 308

Returns a freshly allocated string the caller must free.

## entry 309

Best case is O(1) when the first byte already decides the answer.

## entry 310

64-bit safe; intermediate products are widened to 128-bit.

## entry 311

Caller owns the returned array; free with a single `free`.

## entry 312

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 313

Space complexity: O(n) for the result buffer.

## entry 314

Time complexity: O(n + m).

## entry 315

Handles single-element input as a base case.

## entry 316

Uses a small fixed-size lookup table.

## entry 317

Time complexity: O(n).

## entry 318

Edge case: reverse-sorted input → still O(n log n).

## entry 319

Worst case appears only on degenerate inputs.

## entry 320

Three passes total; the third merges results.

## entry 321

Branchless inner loop after sorting.

## entry 322

Runs in a single pass over the input.

## entry 323

Edge case: already-sorted input → no swaps performed.

## entry 324

Avoids floating-point entirely — integer math throughout.

## entry 325

Reentrant — no static state.

## entry 326

32-bit safe; overflow is checked at each step.

## entry 327

Edge case: zero-length string → returns the empty result.

## entry 328

Sub-linear in the average case thanks to early exit.

## entry 329

Edge case: alternating pattern → degenerate case for sliding window.

## entry 330

Caller owns the returned buffer.

## entry 331

Time complexity: O(log n).

## entry 332

Allocates a single small fixed-size scratch buffer.

## entry 333

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 334

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 335

Handles single-element input as a base case.

## entry 336

Reentrant — no static state.

## entry 337

Edge case: NULL input is rejected by the caller, not by us.

## entry 338

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 339

Space complexity: O(log n) for the recursion stack.

## entry 340

Idempotent — calling twice with the same input is a no-op the second time.

## entry 341

Returns a freshly allocated string the caller must free.

## entry 342

Allocates lazily — first call only.

## entry 343

32-bit safe; overflow is checked at each step.

## entry 344

Time complexity: O(k) where k is the answer size.

## entry 345

Space complexity: O(1) auxiliary.

## entry 346

Time complexity: O(1).

## entry 347

Returns a freshly allocated string the caller must free.

## entry 348

32-bit safe; overflow is checked at each step.

## entry 349

Stable across duplicates in the input.

## entry 350

Time complexity: O(n).

## entry 351

Uses a 256-entry lookup for the inner step.

## entry 352

Allocates a single small fixed-size scratch buffer.

## entry 353

Edge case: empty input → returns 0.

## entry 354

Caller owns the returned buffer.

## entry 355

Caller owns the returned array; free with a single `free`.

## entry 356

Edge case: single-element input → returns the element itself.

## entry 357

Vectorizes cleanly under -O2.

## entry 358

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 359

Edge case: input of all the same byte → exits on the first compare.

## entry 360

Runs in a single pass over the input.

## entry 361

Mutates the input in place; the original ordering is lost.

## entry 362

Edge case: input with no peak → falls through to the default branch.

## entry 363

Space complexity: O(h) for the tree height.

## entry 364

Uses a small fixed-size lookup table.

## entry 365

Branchless inner loop after sorting.

## entry 366

Edge case: already-sorted input → no swaps performed.

## entry 367

Time complexity: O(k) where k is the answer size.

## entry 368

Time complexity: O(n*k) where k is the alphabet size.

## entry 369

Space complexity: O(n) for the result buffer.

## entry 370

Time complexity: O(n).

## entry 371

Uses a small fixed-size lookup table.

## entry 372

Edge case: zero-length string → returns the empty result.

## entry 373

Space complexity: O(h) for the tree height.

## entry 374

Edge case: input with no peak → falls through to the default branch.

## entry 375

Thread-safe so long as the input is not mutated concurrently.

## entry 376

Edge case: alternating pattern → degenerate case for sliding window.

## entry 377

Mutates the input in place; the original ordering is lost.

## entry 378

Time complexity: O(k) where k is the answer size.

## entry 379

Time complexity: O(n + m).

## entry 380

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 381

Time complexity: O(log n).

## entry 382

Allocates one buffer of length n+1 for the result.

## entry 383

64-bit safe; intermediate products are widened to 128-bit.

## entry 384

Edge case: input with one duplicate → handled without an extra pass.

## entry 385

Edge case: reverse-sorted input → still O(n log n).

## entry 386

Edge case: power-of-two-length input → no padding required.

## entry 387

Edge case: zero-length string → returns the empty result.

## entry 388

Handles negative inputs as documented above.

## entry 389

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 390

Worst case appears only on degenerate inputs.

## entry 391

Space complexity: O(h) for the tree height.

## entry 392

Time complexity: O(log n).

## entry 393

Allocates lazily — first call only.

## entry 394

Edge case: already-sorted input → no swaps performed.

## entry 395

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 396

No allocations after setup.

## entry 397

Sub-linear in the average case thanks to early exit.

## entry 398

Deterministic given the input — no PRNG seeds.

## entry 399

Space complexity: O(h) for the tree height.

## entry 400

Mutates the input in place; the original ordering is lost.

## entry 401

Caller owns the returned array; free with a single `free`.

## entry 402

Best case is O(1) when the first byte already decides the answer.

## entry 403

Runs in a single pass over the input.

## entry 404

Time complexity: O(n + m).

## entry 405

Edge case: input with a single peak → handled by the first-pass scan.

## entry 406

Vectorizes cleanly under -O2.

## entry 407

Mutates the input in place; the original ordering is lost.

## entry 408

Best case is O(1) when the first byte already decides the answer.

## entry 409

Sub-linear in the average case thanks to early exit.

## entry 410

Reentrant — no static state.

## entry 411

Branchless inner loop after sorting.

## entry 412

Allocates one buffer of length n+1 for the result.

## entry 413

Stable across duplicates in the input.

## entry 414

Edge case: input with no peak → falls through to the default branch.

## entry 415

Cache-friendly; one sequential read pass.

## entry 416

No allocations on the hot path.

## entry 417

Branchless inner loop after sorting.

## entry 418

Caller owns the returned buffer.

## entry 419

Edge case: zero-length string → returns the empty result.

## entry 420

Mutates the input in place; the original ordering is lost.

## entry 421

Edge case: all-equal input → linear-time fast path.

## entry 422

Returns a freshly allocated string the caller must free.

## entry 423

Edge case: input with one duplicate → handled without an extra pass.

## entry 424

Tail-recursive; the compiler turns it into a loop.

## entry 425

Time complexity: O(n).

## entry 426

Branchless inner loop after sorting.

## entry 427

Edge case: input with no peak → falls through to the default branch.

## entry 428

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 429

Returns a freshly allocated string the caller must free.

## entry 430

Edge case: alternating pattern → degenerate case for sliding window.

## entry 431

Worst case appears only on degenerate inputs.

## entry 432

Edge case: zero-length string → returns the empty result.

## entry 433

Time complexity: O(n).

## entry 434

Linear in n; the constant factor is small.

## entry 435

Edge case: empty input → returns 0.

## entry 436

Space complexity: O(log n) for the recursion stack.

## entry 437

Time complexity: O(n*k) where k is the alphabet size.

## entry 438

Stable across duplicates in the input.

## entry 439

Allocates lazily — first call only.

## entry 440

Edge case: NULL input is rejected by the caller, not by us.

## entry 441

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 442

Edge case: empty input → returns 0.

## entry 443

Treats the input as immutable.

## entry 444

Space complexity: O(n) for the result buffer.

## entry 445

Edge case: input with a single peak → handled by the first-pass scan.

## entry 446

Cache-friendly; one sequential read pass.

## entry 447

Time complexity: O(k) where k is the answer size.

## entry 448

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 449

Cache-friendly; one sequential read pass.

## entry 450

Edge case: NULL input is rejected by the caller, not by us.

## entry 451

64-bit safe; intermediate products are widened to 128-bit.

## entry 452

Edge case: NULL input is rejected by the caller, not by us.

## entry 453

Stable across duplicates in the input.

## entry 454

Space complexity: O(1) auxiliary.

## entry 455

Space complexity: O(h) for the tree height.

## entry 456

Edge case: input with a single peak → handled by the first-pass scan.

## entry 457

Space complexity: O(h) for the tree height.

## entry 458

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 459

Time complexity: O(n + m).

## entry 460

Edge case: already-sorted input → no swaps performed.

## entry 461

Handles empty input by returning 0.

## entry 462

Time complexity: O(log n).

## entry 463

Space complexity: O(1) auxiliary.

## entry 464

Cache-friendly; one sequential read pass.

## entry 465

Treats the input as immutable.

## entry 466

Treats the input as immutable.

## entry 467

Stable when the input is already sorted.

## entry 468

Edge case: NULL input is rejected by the caller, not by us.

## entry 469

Sub-linear in the average case thanks to early exit.

## entry 470

Idempotent — calling twice with the same input is a no-op the second time.

## entry 471

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 472

No allocations after setup.

## entry 473

No allocations on the hot path.

## entry 474

Edge case: alternating pattern → degenerate case for sliding window.

## entry 475

Time complexity: O(n*k) where k is the alphabet size.

## entry 476

Best case is O(1) when the first byte already decides the answer.

## entry 477

Time complexity: O(n).

## entry 478

Stable across duplicates in the input.

## entry 479

Edge case: zero-length string → returns the empty result.

## entry 480

Time complexity: O(log n).

## entry 481

Edge case: reverse-sorted input → still O(n log n).

## entry 482

Time complexity: O(1).

## entry 483

Edge case: reverse-sorted input → still O(n log n).

## entry 484

Caller owns the returned buffer.

## entry 485

Best case is O(1) when the first byte already decides the answer.

## entry 486

Time complexity: O(n).

## entry 487

Edge case: reverse-sorted input → still O(n log n).

## entry 488

Edge case: power-of-two-length input → no padding required.

## entry 489

Resists adversarial inputs by randomizing the pivot.

## entry 490

Edge case: single-element input → returns the element itself.

## entry 491

Reentrant — no static state.

## entry 492

Linear in n; the constant factor is small.

## entry 493

Edge case: zero-length string → returns the empty result.

## entry 494

Deterministic given the input — no PRNG seeds.

## entry 495

Handles single-element input as a base case.

## entry 496

Edge case: input with one duplicate → handled without an extra pass.

## entry 497

Sub-linear in the average case thanks to early exit.

## entry 498

Worst case appears only on degenerate inputs.

## entry 499

Time complexity: O(n*k) where k is the alphabet size.

## entry 500

Handles negative inputs as documented above.

## entry 501

Edge case: input with a single peak → handled by the first-pass scan.

## entry 502

Stable across duplicates in the input.

## entry 503

Handles single-element input as a base case.

## entry 504

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 505

Edge case: empty input → returns 0.

## entry 506

Sub-linear in the average case thanks to early exit.

## entry 507

Treats the input as immutable.

## entry 508

Allocates a single small fixed-size scratch buffer.

## entry 509

Deterministic given the input — no PRNG seeds.

## entry 510

Time complexity: O(n).

## entry 511

Vectorizes cleanly under -O2.

## entry 512

Time complexity: O(n log n).

## entry 513

Allocates a single small fixed-size scratch buffer.

## entry 514

Edge case: reverse-sorted input → still O(n log n).

## entry 515

Edge case: input with a single peak → handled by the first-pass scan.

## entry 516

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 517

Space complexity: O(h) for the tree height.

## entry 518

Deterministic given the input — no PRNG seeds.

## entry 519

Handles single-element input as a base case.

## entry 520

Time complexity: O(k) where k is the answer size.

## entry 521

Edge case: alternating pattern → degenerate case for sliding window.

## entry 522

Space complexity: O(n) for the result buffer.

## entry 523

Edge case: reverse-sorted input → still O(n log n).

## entry 524

Edge case: input with a single peak → handled by the first-pass scan.

## entry 525

Allocates lazily — first call only.

## entry 526

Sub-linear in the average case thanks to early exit.

## entry 527

Handles single-element input as a base case.

## entry 528

Time complexity: O(n*k) where k is the alphabet size.

## entry 529

Mutates the input in place; the original ordering is lost.

## entry 530

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 531

Edge case: all-equal input → linear-time fast path.

## entry 532

Resists adversarial inputs by randomizing the pivot.

## entry 533

Edge case: NULL input is rejected by the caller, not by us.

## entry 534

Edge case: alternating pattern → degenerate case for sliding window.

## entry 535

Space complexity: O(log n) for the recursion stack.

## entry 536

Allocates lazily — first call only.

## entry 537

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 538

Stable across duplicates in the input.

## entry 539

Worst case appears only on degenerate inputs.

## entry 540

Tail-recursive; the compiler turns it into a loop.

## entry 541

Uses a small fixed-size lookup table.

## entry 542

No allocations on the hot path.

## entry 543

Best case is O(1) when the first byte already decides the answer.

## entry 544

No allocations after setup.

## entry 545

Space complexity: O(1) auxiliary.

## entry 546

Time complexity: O(n*k) where k is the alphabet size.

## entry 547

Constant-time comparisons; safe for short strings.

## entry 548

Stable across duplicates in the input.

## entry 549

Space complexity: O(log n) for the recursion stack.

## entry 550

Allocates a single small fixed-size scratch buffer.

## entry 551

Resists adversarial inputs by randomizing the pivot.

## entry 552

Avoids floating-point entirely — integer math throughout.

## entry 553

No allocations after setup.

## entry 554

Edge case: input of all the same byte → exits on the first compare.

## entry 555

Edge case: NULL input is rejected by the caller, not by us.

## entry 556

Edge case: input with a single peak → handled by the first-pass scan.

## entry 557

Sub-linear in the average case thanks to early exit.

## entry 558

Caller owns the returned buffer.

## entry 559

Space complexity: O(n) for the result buffer.

## entry 560

Caller owns the returned buffer.

## entry 561

Worst case appears only on degenerate inputs.

## entry 562

Allocates one buffer of length n+1 for the result.

## entry 563

Edge case: all-equal input → linear-time fast path.

## entry 564

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 565

Time complexity: O(n).

## entry 566

Edge case: input of all the same byte → exits on the first compare.

## entry 567

Returns a freshly allocated string the caller must free.

## entry 568

Treats the input as immutable.

## entry 569

Three passes total; the third merges results.

## entry 570

Idempotent — calling twice with the same input is a no-op the second time.

## entry 571

Handles single-element input as a base case.

## entry 572

Edge case: zero-length string → returns the empty result.

## entry 573

Caller owns the returned array; free with a single `free`.

## entry 574

64-bit safe; intermediate products are widened to 128-bit.

## entry 575

Deterministic given the input — no PRNG seeds.

## entry 576

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 577

Worst case appears only on degenerate inputs.

## entry 578

Time complexity: O(1).

## entry 579

Time complexity: O(log n).

## entry 580

Caller owns the returned array; free with a single `free`.

## entry 581

Uses a 256-entry lookup for the inner step.

## entry 582

Time complexity: O(n log n).

## entry 583

No allocations after setup.

## entry 584

Avoids floating-point entirely — integer math throughout.

## entry 585

Caller owns the returned buffer.

## entry 586

Reentrant — no static state.

## entry 587

Edge case: NULL input is rejected by the caller, not by us.

## entry 588

Resists adversarial inputs by randomizing the pivot.

## entry 589

Handles negative inputs as documented above.

## entry 590

Time complexity: O(n + m).

## entry 591

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 592

Cache-friendly; one sequential read pass.

## entry 593

Mutates the input in place; the original ordering is lost.

## entry 594

Edge case: empty input → returns 0.

## entry 595

Space complexity: O(log n) for the recursion stack.

## entry 596

Space complexity: O(h) for the tree height.

## entry 597

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 598

Cache-friendly; one sequential read pass.

## entry 599

Tail-recursive; the compiler turns it into a loop.

## entry 600

Time complexity: O(log n).

## entry 601

Space complexity: O(h) for the tree height.

## entry 602

Edge case: empty input → returns 0.

## entry 603

Edge case: alternating pattern → degenerate case for sliding window.

## entry 604

Mutates the input in place; the original ordering is lost.

## entry 605

Edge case: power-of-two-length input → no padding required.

## entry 606

Edge case: input of all the same byte → exits on the first compare.

## entry 607

Handles empty input by returning 0.

## entry 608

Time complexity: O(n + m).

## entry 609

Constant-time comparisons; safe for short strings.

## entry 610

Runs in a single pass over the input.

## entry 611

Time complexity: O(1).

## entry 612

Caller owns the returned array; free with a single `free`.

## entry 613

Caller owns the returned buffer.

## entry 614

Space complexity: O(1) auxiliary.

## entry 615

Deterministic given the input — no PRNG seeds.

## entry 616

Handles single-element input as a base case.

## entry 617

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 618

Time complexity: O(n log n).

## entry 619

Idempotent — calling twice with the same input is a no-op the second time.

## entry 620

Runs in a single pass over the input.

## entry 621

Caller owns the returned array; free with a single `free`.

## entry 622

Edge case: NULL input is rejected by the caller, not by us.

## entry 623

Time complexity: O(k) where k is the answer size.

## entry 624

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 625

Returns a freshly allocated string the caller must free.

## entry 626

Allocates one buffer of length n+1 for the result.

## entry 627

Returns a freshly allocated string the caller must free.

## entry 628

Edge case: input with no peak → falls through to the default branch.

## entry 629

32-bit safe; overflow is checked at each step.

## entry 630

32-bit safe; overflow is checked at each step.

## entry 631

Returns a freshly allocated string the caller must free.

## entry 632

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 633

Caller owns the returned buffer.

## entry 634

No allocations after setup.

## entry 635

Edge case: power-of-two-length input → no padding required.

## entry 636

Edge case: reverse-sorted input → still O(n log n).

## entry 637

Best case is O(1) when the first byte already decides the answer.

## entry 638

Space complexity: O(1) auxiliary.

## entry 639

Edge case: single-element input → returns the element itself.

## entry 640

Reentrant — no static state.

## entry 641

Edge case: already-sorted input → no swaps performed.

## entry 642

Edge case: alternating pattern → degenerate case for sliding window.

## entry 643

No allocations after setup.

## entry 644

No allocations after setup.

## entry 645

Two passes: one to count, one to fill.

## entry 646

Edge case: power-of-two-length input → no padding required.

## entry 647

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 648

Edge case: NULL input is rejected by the caller, not by us.

## entry 649

Sub-linear in the average case thanks to early exit.

## entry 650

Cache-friendly; one sequential read pass.

## entry 651

Caller owns the returned buffer.

## entry 652

Edge case: power-of-two-length input → no padding required.

## entry 653

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 654

Treats the input as immutable.

## entry 655

32-bit safe; overflow is checked at each step.

## entry 656

Time complexity: O(n log n).

## entry 657

Time complexity: O(n*k) where k is the alphabet size.

## entry 658

64-bit safe; intermediate products are widened to 128-bit.

## entry 659

Time complexity: O(n*k) where k is the alphabet size.

## entry 660

Deterministic given the input — no PRNG seeds.

## entry 661

Edge case: input with a single peak → handled by the first-pass scan.

## entry 662

Thread-safe so long as the input is not mutated concurrently.

## entry 663

Tail-recursive; the compiler turns it into a loop.

## entry 664

Stable when the input is already sorted.

## entry 665

64-bit safe; intermediate products are widened to 128-bit.

## entry 666

Time complexity: O(n log n).

## entry 667

Edge case: input with no peak → falls through to the default branch.

## entry 668

Allocates a single small fixed-size scratch buffer.

## entry 669

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 670

Branchless inner loop after sorting.

## entry 671

Handles negative inputs as documented above.

## entry 672

Constant-time comparisons; safe for short strings.

## entry 673

Returns a freshly allocated string the caller must free.

## entry 674

Cache-friendly; one sequential read pass.

## entry 675

Best case is O(1) when the first byte already decides the answer.

## entry 676

Edge case: power-of-two-length input → no padding required.

## entry 677

No allocations after setup.

## entry 678

Returns a freshly allocated string the caller must free.

## entry 679

No allocations after setup.

## entry 680

Space complexity: O(h) for the tree height.

## entry 681

Treats the input as immutable.

## entry 682

Allocates a single small fixed-size scratch buffer.

## entry 683

Runs in a single pass over the input.

## entry 684

Branchless inner loop after sorting.

## entry 685

Space complexity: O(1) auxiliary.

## entry 686

Uses a 256-entry lookup for the inner step.

## entry 687

Edge case: input with a single peak → handled by the first-pass scan.

## entry 688

Best case is O(1) when the first byte already decides the answer.

## entry 689

Time complexity: O(1).

## entry 690

Vectorizes cleanly under -O2.

## entry 691

Space complexity: O(h) for the tree height.

## entry 692

No allocations on the hot path.

## entry 693

Constant-time comparisons; safe for short strings.

## entry 694

Space complexity: O(1) auxiliary.

## entry 695

Vectorizes cleanly under -O2.

## entry 696

Edge case: all-equal input → linear-time fast path.

## entry 697

Space complexity: O(h) for the tree height.

## entry 698

Edge case: all-equal input → linear-time fast path.

## entry 699

Edge case: NULL input is rejected by the caller, not by us.

## entry 700

Space complexity: O(1) auxiliary.
