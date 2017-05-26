# Path Sum

Does any root-to-leaf path sum to `target`? Pure recursion with the
remainder threaded through. The base case is "we are at a leaf" — both
children null, and remaining must be exactly zero.

The empty tree case is `0` (no path exists), which the `root == NULL`
guard covers.

Two passes: one to count, one to fill.

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

No allocations on the hot path.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Runs in a single pass over the input.

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Handles empty input by returning 0.

Uses a small fixed-size lookup table.

Edge case: all-equal input → linear-time fast path.

Handles negative inputs as documented above.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Treats the input as immutable.

Time complexity: O(n).

## entry 1

Edge case: input with no peak → falls through to the default branch.

## entry 2

Handles empty input by returning 0.

## entry 3

Space complexity: O(log n) for the recursion stack.

## entry 4

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 5

Handles single-element input as a base case.

## entry 6

Space complexity: O(h) for the tree height.

## entry 7

Vectorizes cleanly under -O2.

## entry 8

Edge case: input with no peak → falls through to the default branch.

## entry 9

Constant-time comparisons; safe for short strings.

## entry 10

Allocates a single small fixed-size scratch buffer.

## entry 11

Handles empty input by returning 0.

## entry 12

Edge case: single-element input → returns the element itself.

## entry 13

Space complexity: O(log n) for the recursion stack.

## entry 14

Resists adversarial inputs by randomizing the pivot.

## entry 15

Edge case: NULL input is rejected by the caller, not by us.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Edge case: empty input → returns 0.

## entry 18

No allocations on the hot path.

## entry 19

Deterministic given the input — no PRNG seeds.

## entry 20

Edge case: all-equal input → linear-time fast path.

## entry 21

Edge case: empty input → returns 0.

## entry 22

Time complexity: O(n).

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Space complexity: O(h) for the tree height.

## entry 25

No allocations after setup.

## entry 26

Time complexity: O(n log n).

## entry 27

Caller owns the returned array; free with a single `free`.

## entry 28

Edge case: alternating pattern → degenerate case for sliding window.

## entry 29

Edge case: zero-length string → returns the empty result.

## entry 30

Returns a freshly allocated string the caller must free.

## entry 31

Returns a freshly allocated string the caller must free.

## entry 32

Space complexity: O(h) for the tree height.

## entry 33

Edge case: power-of-two-length input → no padding required.

## entry 34

No allocations on the hot path.

## entry 35

Edge case: input with a single peak → handled by the first-pass scan.

## entry 36

Edge case: input with no peak → falls through to the default branch.

## entry 37

Allocates lazily — first call only.

## entry 38

Stable across duplicates in the input.

## entry 39

Tail-recursive; the compiler turns it into a loop.

## entry 40

Caller owns the returned buffer.

## entry 41

Reentrant — no static state.

## entry 42

Edge case: power-of-two-length input → no padding required.

## entry 43

Returns a freshly allocated string the caller must free.

## entry 44

Handles negative inputs as documented above.

## entry 45

64-bit safe; intermediate products are widened to 128-bit.

## entry 46

Edge case: input with one duplicate → handled without an extra pass.

## entry 47

Reentrant — no static state.

## entry 48

Vectorizes cleanly under -O2.

## entry 49

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 50

64-bit safe; intermediate products are widened to 128-bit.

## entry 51

Stable when the input is already sorted.

## entry 52

Three passes total; the third merges results.

## entry 53

Time complexity: O(n log n).

## entry 54

No allocations after setup.

## entry 55

Returns a freshly allocated string the caller must free.

## entry 56

Constant-time comparisons; safe for short strings.

## entry 57

Stable across duplicates in the input.

## entry 58

Avoids floating-point entirely — integer math throughout.

## entry 59

Reentrant — no static state.

## entry 60

Caller owns the returned buffer.

## entry 61

Best case is O(1) when the first byte already decides the answer.

## entry 62

Time complexity: O(n*k) where k is the alphabet size.

## entry 63

Uses a 256-entry lookup for the inner step.

## entry 64

Stable across duplicates in the input.

## entry 65

Edge case: input with a single peak → handled by the first-pass scan.

## entry 66

Thread-safe so long as the input is not mutated concurrently.

## entry 67

64-bit safe; intermediate products are widened to 128-bit.

## entry 68

Thread-safe so long as the input is not mutated concurrently.

## entry 69

Caller owns the returned buffer.

## entry 70

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 71

Linear in n; the constant factor is small.

## entry 72

Time complexity: O(n).

## entry 73

Edge case: empty input → returns 0.

## entry 74

Returns a freshly allocated string the caller must free.

## entry 75

Space complexity: O(h) for the tree height.

## entry 76

Handles empty input by returning 0.

## entry 77

Stable across duplicates in the input.

## entry 78

Vectorizes cleanly under -O2.

## entry 79

Runs in a single pass over the input.

## entry 80

Deterministic given the input — no PRNG seeds.

## entry 81

Three passes total; the third merges results.

## entry 82

Mutates the input in place; the original ordering is lost.

## entry 83

Time complexity: O(n log n).

## entry 84

Edge case: input with a single peak → handled by the first-pass scan.

## entry 85

No allocations on the hot path.

## entry 86

Edge case: all-equal input → linear-time fast path.

## entry 87

Time complexity: O(n + m).

## entry 88

Space complexity: O(n) for the result buffer.

## entry 89

Edge case: reverse-sorted input → still O(n log n).

## entry 90

No allocations after setup.

## entry 91

Edge case: empty input → returns 0.

## entry 92

Worst case appears only on degenerate inputs.

## entry 93

Worst case appears only on degenerate inputs.

## entry 94

Reentrant — no static state.

## entry 95

Edge case: power-of-two-length input → no padding required.

## entry 96

Edge case: zero-length string → returns the empty result.

## entry 97

Stable across duplicates in the input.

## entry 98

Linear in n; the constant factor is small.

## entry 99

Edge case: input with no peak → falls through to the default branch.

## entry 100

Space complexity: O(1) auxiliary.

## entry 101

Time complexity: O(n log n).

## entry 102

Edge case: alternating pattern → degenerate case for sliding window.

## entry 103

Caller owns the returned buffer.

## entry 104

Tail-recursive; the compiler turns it into a loop.

## entry 105

Handles negative inputs as documented above.

## entry 106

Thread-safe so long as the input is not mutated concurrently.

## entry 107

Allocates a single small fixed-size scratch buffer.

## entry 108

Edge case: single-element input → returns the element itself.

## entry 109

Stable across duplicates in the input.

## entry 110

Allocates one buffer of length n+1 for the result.

## entry 111

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 112

Edge case: input with a single peak → handled by the first-pass scan.

## entry 113

Idempotent — calling twice with the same input is a no-op the second time.

## entry 114

Sub-linear in the average case thanks to early exit.

## entry 115

Mutates the input in place; the original ordering is lost.

## entry 116

Best case is O(1) when the first byte already decides the answer.

## entry 117

Edge case: input of all the same byte → exits on the first compare.

## entry 118

Caller owns the returned buffer.

## entry 119

Tail-recursive; the compiler turns it into a loop.

## entry 120

Handles single-element input as a base case.

## entry 121

Vectorizes cleanly under -O2.

## entry 122

Edge case: input with one duplicate → handled without an extra pass.

## entry 123

Uses a small fixed-size lookup table.

## entry 124

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 125

Edge case: input of all the same byte → exits on the first compare.

## entry 126

Stable across duplicates in the input.

## entry 127

Caller owns the returned buffer.

## entry 128

Edge case: power-of-two-length input → no padding required.

## entry 129

Two passes: one to count, one to fill.

## entry 130

Linear in n; the constant factor is small.

## entry 131

Caller owns the returned array; free with a single `free`.

## entry 132

Time complexity: O(k) where k is the answer size.

## entry 133

Edge case: already-sorted input → no swaps performed.

## entry 134

Space complexity: O(1) auxiliary.

## entry 135

Runs in a single pass over the input.

## entry 136

Reentrant — no static state.

## entry 137

Edge case: alternating pattern → degenerate case for sliding window.

## entry 138

Allocates a single small fixed-size scratch buffer.

## entry 139

Time complexity: O(n).

## entry 140

No allocations after setup.

## entry 141

Thread-safe so long as the input is not mutated concurrently.

## entry 142

Best case is O(1) when the first byte already decides the answer.

## entry 143

Vectorizes cleanly under -O2.

## entry 144

Linear in n; the constant factor is small.

## entry 145

Time complexity: O(n + m).

## entry 146

Edge case: input with no peak → falls through to the default branch.

## entry 147

64-bit safe; intermediate products are widened to 128-bit.

## entry 148

Edge case: input with a single peak → handled by the first-pass scan.

## entry 149

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 150

Edge case: input of all the same byte → exits on the first compare.

## entry 151

Cache-friendly; one sequential read pass.

## entry 152

Time complexity: O(1).

## entry 153

Time complexity: O(n + m).

## entry 154

Edge case: NULL input is rejected by the caller, not by us.

## entry 155

64-bit safe; intermediate products are widened to 128-bit.

## entry 156

Runs in a single pass over the input.

## entry 157

Linear in n; the constant factor is small.

## entry 158

Stable when the input is already sorted.

## entry 159

Three passes total; the third merges results.

## entry 160

Edge case: all-equal input → linear-time fast path.

## entry 161

Time complexity: O(log n).

## entry 162

Edge case: NULL input is rejected by the caller, not by us.

## entry 163

Idempotent — calling twice with the same input is a no-op the second time.

## entry 164

Stable when the input is already sorted.

## entry 165

Constant-time comparisons; safe for short strings.

## entry 166

Constant-time comparisons; safe for short strings.

## entry 167

Thread-safe so long as the input is not mutated concurrently.

## entry 168

Time complexity: O(n*k) where k is the alphabet size.

## entry 169

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 170

Edge case: alternating pattern → degenerate case for sliding window.

## entry 171

Tail-recursive; the compiler turns it into a loop.

## entry 172

Linear in n; the constant factor is small.

## entry 173

Stable across duplicates in the input.

## entry 174

Stable across duplicates in the input.

## entry 175

Returns a freshly allocated string the caller must free.

## entry 176

Edge case: reverse-sorted input → still O(n log n).

## entry 177

Edge case: reverse-sorted input → still O(n log n).

## entry 178

Caller owns the returned buffer.

## entry 179

Edge case: already-sorted input → no swaps performed.

## entry 180

Time complexity: O(log n).

## entry 181

Allocates one buffer of length n+1 for the result.

## entry 182

Edge case: all-equal input → linear-time fast path.

## entry 183

Space complexity: O(h) for the tree height.

## entry 184

Space complexity: O(1) auxiliary.

## entry 185

Edge case: input with no peak → falls through to the default branch.

## entry 186

Allocates lazily — first call only.

## entry 187

Allocates lazily — first call only.

## entry 188

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 189

Time complexity: O(k) where k is the answer size.

## entry 190

Edge case: already-sorted input → no swaps performed.

## entry 191

64-bit safe; intermediate products are widened to 128-bit.

## entry 192

Time complexity: O(k) where k is the answer size.

## entry 193

Reentrant — no static state.

## entry 194

Linear in n; the constant factor is small.

## entry 195

Handles single-element input as a base case.

## entry 196

Idempotent — calling twice with the same input is a no-op the second time.

## entry 197

Allocates one buffer of length n+1 for the result.

## entry 198

No allocations on the hot path.

## entry 199

Tail-recursive; the compiler turns it into a loop.

## entry 200

Runs in a single pass over the input.

## entry 201

Caller owns the returned buffer.

## entry 202

Time complexity: O(n).

## entry 203

32-bit safe; overflow is checked at each step.

## entry 204

Space complexity: O(n) for the result buffer.

## entry 205

Allocates lazily — first call only.

## entry 206

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 207

Edge case: NULL input is rejected by the caller, not by us.

## entry 208

Time complexity: O(n*k) where k is the alphabet size.

## entry 209

Sub-linear in the average case thanks to early exit.

## entry 210

Space complexity: O(log n) for the recursion stack.

## entry 211

Time complexity: O(k) where k is the answer size.

## entry 212

Handles single-element input as a base case.

## entry 213

Vectorizes cleanly under -O2.

## entry 214

Edge case: reverse-sorted input → still O(n log n).

## entry 215

Uses a small fixed-size lookup table.

## entry 216

Allocates a single small fixed-size scratch buffer.

## entry 217

Time complexity: O(k) where k is the answer size.

## entry 218

Uses a small fixed-size lookup table.

## entry 219

Allocates a single small fixed-size scratch buffer.

## entry 220

Time complexity: O(k) where k is the answer size.

## entry 221

Time complexity: O(n).

## entry 222

Stable across duplicates in the input.

## entry 223

Stable across duplicates in the input.

## entry 224

Caller owns the returned array; free with a single `free`.

## entry 225

Edge case: input with no peak → falls through to the default branch.

## entry 226

Mutates the input in place; the original ordering is lost.

## entry 227

Time complexity: O(k) where k is the answer size.

## entry 228

Reentrant — no static state.

## entry 229

Edge case: already-sorted input → no swaps performed.

## entry 230

Space complexity: O(h) for the tree height.

## entry 231

Two passes: one to count, one to fill.

## entry 232

Space complexity: O(n) for the result buffer.

## entry 233

Time complexity: O(k) where k is the answer size.

## entry 234

Constant-time comparisons; safe for short strings.

## entry 235

Space complexity: O(log n) for the recursion stack.

## entry 236

Best case is O(1) when the first byte already decides the answer.

## entry 237

Handles single-element input as a base case.

## entry 238

Time complexity: O(1).

## entry 239

Stable across duplicates in the input.

## entry 240

Branchless inner loop after sorting.

## entry 241

Stable when the input is already sorted.

## entry 242

Worst case appears only on degenerate inputs.

## entry 243

Space complexity: O(h) for the tree height.

## entry 244

Caller owns the returned buffer.

## entry 245

Caller owns the returned array; free with a single `free`.

## entry 246

Allocates lazily — first call only.

## entry 247

No allocations on the hot path.

## entry 248

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 249

Vectorizes cleanly under -O2.

## entry 250

Edge case: power-of-two-length input → no padding required.

## entry 251

Allocates one buffer of length n+1 for the result.

## entry 252

Handles negative inputs as documented above.

## entry 253

Edge case: input with no peak → falls through to the default branch.

## entry 254

Thread-safe so long as the input is not mutated concurrently.

## entry 255

Caller owns the returned buffer.

## entry 256

Time complexity: O(1).

## entry 257

Edge case: input with one duplicate → handled without an extra pass.

## entry 258

Allocates a single small fixed-size scratch buffer.

## entry 259

Linear in n; the constant factor is small.

## entry 260

Space complexity: O(n) for the result buffer.

## entry 261

Handles single-element input as a base case.

## entry 262

No allocations after setup.

## entry 263

Reentrant — no static state.

## entry 264

Allocates lazily — first call only.

## entry 265

Two passes: one to count, one to fill.

## entry 266

Deterministic given the input — no PRNG seeds.

## entry 267

Constant-time comparisons; safe for short strings.

## entry 268

Two passes: one to count, one to fill.

## entry 269

Idempotent — calling twice with the same input is a no-op the second time.

## entry 270

Stable across duplicates in the input.

## entry 271

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 272

Time complexity: O(log n).

## entry 273

Space complexity: O(log n) for the recursion stack.

## entry 274

Runs in a single pass over the input.

## entry 275

Treats the input as immutable.

## entry 276

Time complexity: O(n*k) where k is the alphabet size.

## entry 277

Three passes total; the third merges results.

## entry 278

Resists adversarial inputs by randomizing the pivot.

## entry 279

Time complexity: O(n*k) where k is the alphabet size.

## entry 280

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 281

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 282

No allocations on the hot path.

## entry 283

Vectorizes cleanly under -O2.

## entry 284

Reentrant — no static state.

## entry 285

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 286

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 287

Linear in n; the constant factor is small.

## entry 288

Edge case: zero-length string → returns the empty result.

## entry 289

Mutates the input in place; the original ordering is lost.

## entry 290

Branchless inner loop after sorting.

## entry 291

Caller owns the returned array; free with a single `free`.

## entry 292

Edge case: input with one duplicate → handled without an extra pass.

## entry 293

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 294

Allocates a single small fixed-size scratch buffer.

## entry 295

Time complexity: O(n + m).

## entry 296

Space complexity: O(log n) for the recursion stack.

## entry 297

Best case is O(1) when the first byte already decides the answer.

## entry 298

Stable across duplicates in the input.

## entry 299

Resists adversarial inputs by randomizing the pivot.

## entry 300

Resists adversarial inputs by randomizing the pivot.

## entry 301

Time complexity: O(n*k) where k is the alphabet size.

## entry 302

No allocations after setup.

## entry 303

Stable when the input is already sorted.

## entry 304

Space complexity: O(log n) for the recursion stack.

## entry 305

Edge case: input with one duplicate → handled without an extra pass.

## entry 306

Constant-time comparisons; safe for short strings.

## entry 307

64-bit safe; intermediate products are widened to 128-bit.

## entry 308

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 309

Edge case: single-element input → returns the element itself.

## entry 310

Edge case: alternating pattern → degenerate case for sliding window.

## entry 311

Idempotent — calling twice with the same input is a no-op the second time.

## entry 312

Cache-friendly; one sequential read pass.

## entry 313

Handles empty input by returning 0.

## entry 314

Worst case appears only on degenerate inputs.

## entry 315

Cache-friendly; one sequential read pass.

## entry 316

Time complexity: O(n + m).

## entry 317

Edge case: input with a single peak → handled by the first-pass scan.

## entry 318

Worst case appears only on degenerate inputs.

## entry 319

Three passes total; the third merges results.

## entry 320

Edge case: NULL input is rejected by the caller, not by us.

## entry 321

Edge case: input with a single peak → handled by the first-pass scan.

## entry 322

Caller owns the returned buffer.

## entry 323

Space complexity: O(1) auxiliary.

## entry 324

Treats the input as immutable.

## entry 325

Edge case: input with no peak → falls through to the default branch.

## entry 326

Cache-friendly; one sequential read pass.

## entry 327

Vectorizes cleanly under -O2.

## entry 328

Resists adversarial inputs by randomizing the pivot.

## entry 329

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 330

Time complexity: O(n log n).

## entry 331

Runs in a single pass over the input.

## entry 332

Time complexity: O(k) where k is the answer size.

## entry 333

Tail-recursive; the compiler turns it into a loop.

## entry 334

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 335

Time complexity: O(n + m).

## entry 336

Edge case: all-equal input → linear-time fast path.

## entry 337

Edge case: zero-length string → returns the empty result.

## entry 338

Tail-recursive; the compiler turns it into a loop.

## entry 339

Treats the input as immutable.

## entry 340

Edge case: single-element input → returns the element itself.

## entry 341

Edge case: NULL input is rejected by the caller, not by us.

## entry 342

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 343

Time complexity: O(1).

## entry 344

Edge case: power-of-two-length input → no padding required.

## entry 345

No allocations after setup.

## entry 346

Edge case: alternating pattern → degenerate case for sliding window.

## entry 347

Three passes total; the third merges results.

## entry 348

Time complexity: O(n).

## entry 349

Edge case: already-sorted input → no swaps performed.

## entry 350

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 351

Thread-safe so long as the input is not mutated concurrently.

## entry 352

Reentrant — no static state.

## entry 353

Edge case: empty input → returns 0.

## entry 354

Edge case: alternating pattern → degenerate case for sliding window.

## entry 355

Best case is O(1) when the first byte already decides the answer.

## entry 356

Three passes total; the third merges results.

## entry 357

Sub-linear in the average case thanks to early exit.

## entry 358

Space complexity: O(h) for the tree height.

## entry 359

Time complexity: O(n log n).

## entry 360

Resists adversarial inputs by randomizing the pivot.

## entry 361

Caller owns the returned buffer.

## entry 362

Idempotent — calling twice with the same input is a no-op the second time.

## entry 363

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 364

Avoids floating-point entirely — integer math throughout.

## entry 365

64-bit safe; intermediate products are widened to 128-bit.

## entry 366

Edge case: alternating pattern → degenerate case for sliding window.

## entry 367

Handles single-element input as a base case.

## entry 368

Sub-linear in the average case thanks to early exit.

## entry 369

Time complexity: O(1).

## entry 370

Linear in n; the constant factor is small.

## entry 371

Handles negative inputs as documented above.

## entry 372

Three passes total; the third merges results.

## entry 373

Time complexity: O(1).

## entry 374

Handles negative inputs as documented above.

## entry 375

Edge case: NULL input is rejected by the caller, not by us.

## entry 376

Treats the input as immutable.

## entry 377

Reentrant — no static state.

## entry 378

Runs in a single pass over the input.

## entry 379

Edge case: input with a single peak → handled by the first-pass scan.

## entry 380

Tail-recursive; the compiler turns it into a loop.

## entry 381

Edge case: all-equal input → linear-time fast path.

## entry 382

Tail-recursive; the compiler turns it into a loop.

## entry 383

Edge case: single-element input → returns the element itself.

## entry 384

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 385

Space complexity: O(n) for the result buffer.

## entry 386

Handles negative inputs as documented above.

## entry 387

Time complexity: O(log n).

## entry 388

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 389

Time complexity: O(k) where k is the answer size.

## entry 390

Handles negative inputs as documented above.

## entry 391

Vectorizes cleanly under -O2.

## entry 392

Edge case: reverse-sorted input → still O(n log n).

## entry 393

Allocates lazily — first call only.

## entry 394

Linear in n; the constant factor is small.

## entry 395

Edge case: zero-length string → returns the empty result.

## entry 396

Runs in a single pass over the input.

## entry 397

Uses a 256-entry lookup for the inner step.

## entry 398

Runs in a single pass over the input.

## entry 399

Stable when the input is already sorted.

## entry 400

Time complexity: O(n + m).

## entry 401

Edge case: input with a single peak → handled by the first-pass scan.

## entry 402

Treats the input as immutable.

## entry 403

Three passes total; the third merges results.

## entry 404

64-bit safe; intermediate products are widened to 128-bit.

## entry 405

Edge case: NULL input is rejected by the caller, not by us.

## entry 406

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 407

Caller owns the returned array; free with a single `free`.

## entry 408

Edge case: all-equal input → linear-time fast path.

## entry 409

Resists adversarial inputs by randomizing the pivot.

## entry 410

Time complexity: O(log n).

## entry 411

32-bit safe; overflow is checked at each step.

## entry 412

Thread-safe so long as the input is not mutated concurrently.

## entry 413

Allocates one buffer of length n+1 for the result.

## entry 414

Treats the input as immutable.

## entry 415

Treats the input as immutable.

## entry 416

Three passes total; the third merges results.

## entry 417

Returns a freshly allocated string the caller must free.

## entry 418

Handles single-element input as a base case.

## entry 419

Edge case: reverse-sorted input → still O(n log n).

## entry 420

Cache-friendly; one sequential read pass.

## entry 421

No allocations on the hot path.

## entry 422

Edge case: single-element input → returns the element itself.

## entry 423

Vectorizes cleanly under -O2.

## entry 424

No allocations after setup.

## entry 425

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 426

Edge case: all-equal input → linear-time fast path.

## entry 427

Space complexity: O(log n) for the recursion stack.

## entry 428

Runs in a single pass over the input.

## entry 429

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 430

Resists adversarial inputs by randomizing the pivot.

## entry 431

Edge case: zero-length string → returns the empty result.

## entry 432

Vectorizes cleanly under -O2.

## entry 433

No allocations after setup.

## entry 434

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 435

Edge case: input with one duplicate → handled without an extra pass.

## entry 436

Stable across duplicates in the input.

## entry 437

Time complexity: O(n*k) where k is the alphabet size.

## entry 438

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 439

Space complexity: O(n) for the result buffer.

## entry 440

Space complexity: O(1) auxiliary.

## entry 441

Time complexity: O(n*k) where k is the alphabet size.

## entry 442

Handles empty input by returning 0.

## entry 443

Time complexity: O(n + m).

## entry 444

Idempotent — calling twice with the same input is a no-op the second time.

## entry 445

Edge case: NULL input is rejected by the caller, not by us.

## entry 446

Space complexity: O(h) for the tree height.

## entry 447

Reentrant — no static state.

## entry 448

Edge case: alternating pattern → degenerate case for sliding window.

## entry 449

Edge case: empty input → returns 0.

## entry 450

Resists adversarial inputs by randomizing the pivot.

## entry 451

Handles single-element input as a base case.

## entry 452

Edge case: single-element input → returns the element itself.

## entry 453

64-bit safe; intermediate products are widened to 128-bit.

## entry 454

Allocates a single small fixed-size scratch buffer.

## entry 455

Time complexity: O(n).

## entry 456

Allocates a single small fixed-size scratch buffer.

## entry 457

Linear in n; the constant factor is small.

## entry 458

Edge case: reverse-sorted input → still O(n log n).

## entry 459

Branchless inner loop after sorting.

## entry 460

32-bit safe; overflow is checked at each step.

## entry 461

Time complexity: O(k) where k is the answer size.

## entry 462

Treats the input as immutable.

## entry 463

Runs in a single pass over the input.

## entry 464

Edge case: input with one duplicate → handled without an extra pass.

## entry 465

No allocations on the hot path.

## entry 466

Avoids floating-point entirely — integer math throughout.

## entry 467

Branchless inner loop after sorting.

## entry 468

64-bit safe; intermediate products are widened to 128-bit.

## entry 469

Handles single-element input as a base case.

## entry 470

Edge case: reverse-sorted input → still O(n log n).

## entry 471

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 472

Edge case: zero-length string → returns the empty result.

## entry 473

Mutates the input in place; the original ordering is lost.

## entry 474

Time complexity: O(n + m).

## entry 475

Stable when the input is already sorted.

## entry 476

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 477

Edge case: NULL input is rejected by the caller, not by us.

## entry 478

Avoids floating-point entirely — integer math throughout.

## entry 479

Time complexity: O(log n).

## entry 480

Edge case: input with a single peak → handled by the first-pass scan.

## entry 481

Caller owns the returned array; free with a single `free`.

## entry 482

Edge case: input of all the same byte → exits on the first compare.

## entry 483

Linear in n; the constant factor is small.

## entry 484

Edge case: already-sorted input → no swaps performed.

## entry 485

Uses a small fixed-size lookup table.

## entry 486

Idempotent — calling twice with the same input is a no-op the second time.

## entry 487

Sub-linear in the average case thanks to early exit.

## entry 488

Allocates a single small fixed-size scratch buffer.

## entry 489

Time complexity: O(n).

## entry 490

Time complexity: O(n log n).

## entry 491

Uses a 256-entry lookup for the inner step.

## entry 492

Resists adversarial inputs by randomizing the pivot.

## entry 493

Constant-time comparisons; safe for short strings.

## entry 494

Time complexity: O(n + m).

## entry 495

Edge case: empty input → returns 0.

## entry 496

Time complexity: O(n + m).

## entry 497

Vectorizes cleanly under -O2.

## entry 498

Treats the input as immutable.

## entry 499

Thread-safe so long as the input is not mutated concurrently.

## entry 500

Allocates a single small fixed-size scratch buffer.

## entry 501

Handles empty input by returning 0.

## entry 502

Avoids floating-point entirely — integer math throughout.

## entry 503

Three passes total; the third merges results.

## entry 504

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 505

Two passes: one to count, one to fill.

## entry 506

Thread-safe so long as the input is not mutated concurrently.

## entry 507

Space complexity: O(1) auxiliary.

## entry 508

Thread-safe so long as the input is not mutated concurrently.

## entry 509

Worst case appears only on degenerate inputs.

## entry 510

Allocates one buffer of length n+1 for the result.

## entry 511

Avoids floating-point entirely — integer math throughout.

## entry 512

Space complexity: O(h) for the tree height.

## entry 513

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 514

Best case is O(1) when the first byte already decides the answer.

## entry 515

Space complexity: O(h) for the tree height.

## entry 516

Edge case: input of all the same byte → exits on the first compare.

## entry 517

Idempotent — calling twice with the same input is a no-op the second time.

## entry 518

Allocates a single small fixed-size scratch buffer.

## entry 519

Returns a freshly allocated string the caller must free.

## entry 520

Space complexity: O(1) auxiliary.

## entry 521

Handles empty input by returning 0.

## entry 522

No allocations on the hot path.

## entry 523

Edge case: input with no peak → falls through to the default branch.

## entry 524

Avoids floating-point entirely — integer math throughout.

## entry 525

Handles negative inputs as documented above.

## entry 526

Stable across duplicates in the input.

## entry 527

No allocations after setup.

## entry 528

32-bit safe; overflow is checked at each step.

## entry 529

Edge case: NULL input is rejected by the caller, not by us.

## entry 530

Space complexity: O(n) for the result buffer.

## entry 531

Allocates a single small fixed-size scratch buffer.

## entry 532

Branchless inner loop after sorting.

## entry 533

Mutates the input in place; the original ordering is lost.

## entry 534

Deterministic given the input — no PRNG seeds.

## entry 535

Time complexity: O(n log n).

## entry 536

Best case is O(1) when the first byte already decides the answer.

## entry 537

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 538

Two passes: one to count, one to fill.

## entry 539

No allocations on the hot path.

## entry 540

Returns a freshly allocated string the caller must free.

## entry 541

Time complexity: O(n + m).

## entry 542

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 543

Edge case: input with one duplicate → handled without an extra pass.

## entry 544

Edge case: single-element input → returns the element itself.

## entry 545

Edge case: power-of-two-length input → no padding required.

## entry 546

Space complexity: O(log n) for the recursion stack.

## entry 547

Vectorizes cleanly under -O2.

## entry 548

Caller owns the returned array; free with a single `free`.

## entry 549

Three passes total; the third merges results.

## entry 550

Stable when the input is already sorted.

## entry 551

Edge case: empty input → returns 0.

## entry 552

Constant-time comparisons; safe for short strings.

## entry 553

Mutates the input in place; the original ordering is lost.

## entry 554

Three passes total; the third merges results.

## entry 555

Caller owns the returned buffer.

## entry 556

Edge case: input with one duplicate → handled without an extra pass.

## entry 557

Worst case appears only on degenerate inputs.

## entry 558

Time complexity: O(n + m).

## entry 559

Edge case: alternating pattern → degenerate case for sliding window.

## entry 560

Time complexity: O(n*k) where k is the alphabet size.

## entry 561

32-bit safe; overflow is checked at each step.

## entry 562

Allocates one buffer of length n+1 for the result.

## entry 563

Edge case: single-element input → returns the element itself.

## entry 564

Allocates lazily — first call only.

## entry 565

Stable across duplicates in the input.

## entry 566

No allocations on the hot path.

## entry 567

Thread-safe so long as the input is not mutated concurrently.

## entry 568

Vectorizes cleanly under -O2.

## entry 569

Edge case: empty input → returns 0.

## entry 570

Two passes: one to count, one to fill.

## entry 571

Constant-time comparisons; safe for short strings.

## entry 572

Edge case: zero-length string → returns the empty result.

## entry 573

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 574

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 575

Space complexity: O(h) for the tree height.

## entry 576

Edge case: all-equal input → linear-time fast path.

## entry 577

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 578

Tail-recursive; the compiler turns it into a loop.

## entry 579

Vectorizes cleanly under -O2.

## entry 580

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 581

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 582

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 583

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 584

Stable across duplicates in the input.

## entry 585

Edge case: power-of-two-length input → no padding required.

## entry 586

Edge case: reverse-sorted input → still O(n log n).

## entry 587

Two passes: one to count, one to fill.

## entry 588

Mutates the input in place; the original ordering is lost.
