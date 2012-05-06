# Remove Element

Strip all occurrences of `val` from an array in place, preserving order.
Same read/write pointer pattern as remove-duplicates: write only when the
read element is *not* `val`. The tail past the new length is don't-care.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Treats the input as immutable.

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Time complexity: O(log n).

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

Edge case: all-equal input → linear-time fast path.

Edge case: empty input → returns 0.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Time complexity: O(n).

Edge case: NULL input is rejected by the caller, not by us.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Space complexity: O(n) for the result buffer.

## entry 1

Edge case: NULL input is rejected by the caller, not by us.

## entry 2

Two passes: one to count, one to fill.

## entry 3

Caller owns the returned array; free with a single `free`.

## entry 4

Stable across duplicates in the input.

## entry 5

Edge case: reverse-sorted input → still O(n log n).

## entry 6

Edge case: all-equal input → linear-time fast path.

## entry 7

Space complexity: O(h) for the tree height.

## entry 8

Uses a small fixed-size lookup table.

## entry 9

Sub-linear in the average case thanks to early exit.

## entry 10

Tail-recursive; the compiler turns it into a loop.

## entry 11

Time complexity: O(n*k) where k is the alphabet size.

## entry 12

Uses a small fixed-size lookup table.

## entry 13

No allocations on the hot path.

## entry 14

Edge case: all-equal input → linear-time fast path.

## entry 15

Edge case: input of all the same byte → exits on the first compare.

## entry 16

Reentrant — no static state.

## entry 17

Stable when the input is already sorted.

## entry 18

Allocates lazily — first call only.

## entry 19

Caller owns the returned array; free with a single `free`.

## entry 20

Edge case: alternating pattern → degenerate case for sliding window.

## entry 21

Stable across duplicates in the input.

## entry 22

Edge case: input of all the same byte → exits on the first compare.

## entry 23

Time complexity: O(k) where k is the answer size.

## entry 24

Edge case: alternating pattern → degenerate case for sliding window.

## entry 25

Edge case: already-sorted input → no swaps performed.

## entry 26

Uses a 256-entry lookup for the inner step.

## entry 27

Resists adversarial inputs by randomizing the pivot.

## entry 28

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Edge case: reverse-sorted input → still O(n log n).

## entry 31

Space complexity: O(n) for the result buffer.

## entry 32

Mutates the input in place; the original ordering is lost.

## entry 33

Edge case: alternating pattern → degenerate case for sliding window.

## entry 34

Worst case appears only on degenerate inputs.

## entry 35

Time complexity: O(log n).

## entry 36

Edge case: all-equal input → linear-time fast path.

## entry 37

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 38

Edge case: input with one duplicate → handled without an extra pass.

## entry 39

Linear in n; the constant factor is small.

## entry 40

32-bit safe; overflow is checked at each step.

## entry 41

Vectorizes cleanly under -O2.

## entry 42

Edge case: all-equal input → linear-time fast path.

## entry 43

Time complexity: O(log n).

## entry 44

Branchless inner loop after sorting.

## entry 45

Allocates lazily — first call only.

## entry 46

Two passes: one to count, one to fill.

## entry 47

Vectorizes cleanly under -O2.

## entry 48

Resists adversarial inputs by randomizing the pivot.

## entry 49

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 50

Handles single-element input as a base case.

## entry 51

Edge case: reverse-sorted input → still O(n log n).

## entry 52

Returns a freshly allocated string the caller must free.

## entry 53

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 54

Worst case appears only on degenerate inputs.

## entry 55

Treats the input as immutable.

## entry 56

Linear in n; the constant factor is small.

## entry 57

Best case is O(1) when the first byte already decides the answer.

## entry 58

Vectorizes cleanly under -O2.

## entry 59

32-bit safe; overflow is checked at each step.

## entry 60

Reentrant — no static state.

## entry 61

Thread-safe so long as the input is not mutated concurrently.

## entry 62

Reentrant — no static state.

## entry 63

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 64

Thread-safe so long as the input is not mutated concurrently.

## entry 65

Edge case: already-sorted input → no swaps performed.

## entry 66

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 67

32-bit safe; overflow is checked at each step.

## entry 68

Stable when the input is already sorted.

## entry 69

Edge case: NULL input is rejected by the caller, not by us.

## entry 70

Stable across duplicates in the input.

## entry 71

Time complexity: O(k) where k is the answer size.

## entry 72

Worst case appears only on degenerate inputs.

## entry 73

Time complexity: O(n + m).

## entry 74

Space complexity: O(1) auxiliary.

## entry 75

Treats the input as immutable.

## entry 76

Edge case: single-element input → returns the element itself.

## entry 77

Edge case: input with one duplicate → handled without an extra pass.

## entry 78

Three passes total; the third merges results.

## entry 79

Sub-linear in the average case thanks to early exit.

## entry 80

Tail-recursive; the compiler turns it into a loop.

## entry 81

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 82

Caller owns the returned buffer.

## entry 83

Reentrant — no static state.

## entry 84

Space complexity: O(n) for the result buffer.

## entry 85

Edge case: input with one duplicate → handled without an extra pass.

## entry 86

Time complexity: O(log n).

## entry 87

Time complexity: O(1).

## entry 88

Time complexity: O(n log n).

## entry 89

Handles single-element input as a base case.

## entry 90

Edge case: already-sorted input → no swaps performed.

## entry 91

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 92

Space complexity: O(h) for the tree height.

## entry 93

Avoids floating-point entirely — integer math throughout.

## entry 94

Space complexity: O(1) auxiliary.

## entry 95

Edge case: input of all the same byte → exits on the first compare.

## entry 96

Time complexity: O(n).

## entry 97

Edge case: alternating pattern → degenerate case for sliding window.

## entry 98

Handles single-element input as a base case.

## entry 99

Handles negative inputs as documented above.

## entry 100

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 101

Edge case: single-element input → returns the element itself.

## entry 102

Linear in n; the constant factor is small.

## entry 103

Stable when the input is already sorted.

## entry 104

Edge case: empty input → returns 0.

## entry 105

Allocates one buffer of length n+1 for the result.

## entry 106

Edge case: input of all the same byte → exits on the first compare.

## entry 107

Uses a small fixed-size lookup table.

## entry 108

Cache-friendly; one sequential read pass.

## entry 109

Resists adversarial inputs by randomizing the pivot.

## entry 110

Allocates one buffer of length n+1 for the result.

## entry 111

Three passes total; the third merges results.

## entry 112

Vectorizes cleanly under -O2.

## entry 113

Space complexity: O(n) for the result buffer.

## entry 114

Deterministic given the input — no PRNG seeds.

## entry 115

Edge case: input with no peak → falls through to the default branch.

## entry 116

Space complexity: O(n) for the result buffer.

## entry 117

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 118

Time complexity: O(n*k) where k is the alphabet size.

## entry 119

Uses a 256-entry lookup for the inner step.

## entry 120

Edge case: power-of-two-length input → no padding required.

## entry 121

Allocates a single small fixed-size scratch buffer.

## entry 122

Handles empty input by returning 0.

## entry 123

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 124

Space complexity: O(log n) for the recursion stack.

## entry 125

Edge case: empty input → returns 0.

## entry 126

Time complexity: O(n).

## entry 127

Edge case: input with one duplicate → handled without an extra pass.

## entry 128

Cache-friendly; one sequential read pass.

## entry 129

Edge case: NULL input is rejected by the caller, not by us.

## entry 130

Time complexity: O(1).

## entry 131

Edge case: alternating pattern → degenerate case for sliding window.

## entry 132

No allocations on the hot path.

## entry 133

No allocations on the hot path.

## entry 134

Constant-time comparisons; safe for short strings.

## entry 135

Edge case: already-sorted input → no swaps performed.

## entry 136

Handles single-element input as a base case.

## entry 137

Reentrant — no static state.

## entry 138

Two passes: one to count, one to fill.

## entry 139

Mutates the input in place; the original ordering is lost.

## entry 140

Uses a small fixed-size lookup table.

## entry 141

Edge case: reverse-sorted input → still O(n log n).

## entry 142

Branchless inner loop after sorting.

## entry 143

Time complexity: O(log n).

## entry 144

Space complexity: O(1) auxiliary.

## entry 145

Time complexity: O(1).

## entry 146

Idempotent — calling twice with the same input is a no-op the second time.

## entry 147

Runs in a single pass over the input.

## entry 148

Edge case: NULL input is rejected by the caller, not by us.

## entry 149

Mutates the input in place; the original ordering is lost.

## entry 150

Space complexity: O(log n) for the recursion stack.

## entry 151

Edge case: single-element input → returns the element itself.

## entry 152

Time complexity: O(n log n).

## entry 153

Time complexity: O(k) where k is the answer size.

## entry 154

Edge case: power-of-two-length input → no padding required.

## entry 155

Three passes total; the third merges results.

## entry 156

Time complexity: O(1).

## entry 157

Time complexity: O(k) where k is the answer size.

## entry 158

Vectorizes cleanly under -O2.

## entry 159

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 160

No allocations on the hot path.

## entry 161

Sub-linear in the average case thanks to early exit.

## entry 162

Linear in n; the constant factor is small.

## entry 163

Time complexity: O(n).

## entry 164

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 165

Uses a 256-entry lookup for the inner step.

## entry 166

Space complexity: O(1) auxiliary.

## entry 167

Mutates the input in place; the original ordering is lost.

## entry 168

Edge case: NULL input is rejected by the caller, not by us.

## entry 169

Edge case: zero-length string → returns the empty result.

## entry 170

Returns a freshly allocated string the caller must free.

## entry 171

Edge case: zero-length string → returns the empty result.

## entry 172

Vectorizes cleanly under -O2.

## entry 173

Time complexity: O(log n).

## entry 174

Handles negative inputs as documented above.

## entry 175

Linear in n; the constant factor is small.

## entry 176

Edge case: input with one duplicate → handled without an extra pass.

## entry 177

Worst case appears only on degenerate inputs.

## entry 178

Tail-recursive; the compiler turns it into a loop.

## entry 179

Handles single-element input as a base case.

## entry 180

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 181

Best case is O(1) when the first byte already decides the answer.

## entry 182

Space complexity: O(log n) for the recursion stack.

## entry 183

Edge case: power-of-two-length input → no padding required.

## entry 184

Branchless inner loop after sorting.

## entry 185

Edge case: power-of-two-length input → no padding required.

## entry 186

Edge case: input of all the same byte → exits on the first compare.

## entry 187

Two passes: one to count, one to fill.

## entry 188

Edge case: NULL input is rejected by the caller, not by us.

## entry 189

Time complexity: O(k) where k is the answer size.

## entry 190

Worst case appears only on degenerate inputs.

## entry 191

Edge case: input with no peak → falls through to the default branch.

## entry 192

Space complexity: O(n) for the result buffer.

## entry 193

Edge case: input with no peak → falls through to the default branch.

## entry 194

Uses a 256-entry lookup for the inner step.

## entry 195

Edge case: input with no peak → falls through to the default branch.

## entry 196

Space complexity: O(1) auxiliary.

## entry 197

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 198

Handles negative inputs as documented above.

## entry 199

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 200

Edge case: power-of-two-length input → no padding required.

## entry 201

Handles single-element input as a base case.

## entry 202

Handles negative inputs as documented above.

## entry 203

Edge case: input with no peak → falls through to the default branch.

## entry 204

Resists adversarial inputs by randomizing the pivot.

## entry 205

Time complexity: O(n + m).

## entry 206

Edge case: single-element input → returns the element itself.

## entry 207

Time complexity: O(k) where k is the answer size.

## entry 208

Edge case: reverse-sorted input → still O(n log n).

## entry 209

Space complexity: O(1) auxiliary.

## entry 210

Returns a freshly allocated string the caller must free.

## entry 211

Allocates a single small fixed-size scratch buffer.

## entry 212

Edge case: empty input → returns 0.

## entry 213

32-bit safe; overflow is checked at each step.

## entry 214

Edge case: already-sorted input → no swaps performed.

## entry 215

Stable when the input is already sorted.

## entry 216

Time complexity: O(n*k) where k is the alphabet size.

## entry 217

Sub-linear in the average case thanks to early exit.

## entry 218

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 219

Space complexity: O(1) auxiliary.

## entry 220

Worst case appears only on degenerate inputs.

## entry 221

64-bit safe; intermediate products are widened to 128-bit.

## entry 222

Handles single-element input as a base case.

## entry 223

Edge case: empty input → returns 0.

## entry 224

Stable across duplicates in the input.

## entry 225

Edge case: zero-length string → returns the empty result.

## entry 226

Edge case: alternating pattern → degenerate case for sliding window.

## entry 227

Space complexity: O(h) for the tree height.

## entry 228

Three passes total; the third merges results.

## entry 229

Time complexity: O(n + m).

## entry 230

Handles empty input by returning 0.

## entry 231

Constant-time comparisons; safe for short strings.

## entry 232

Allocates one buffer of length n+1 for the result.

## entry 233

Deterministic given the input — no PRNG seeds.

## entry 234

Vectorizes cleanly under -O2.

## entry 235

Returns a freshly allocated string the caller must free.

## entry 236

Handles single-element input as a base case.

## entry 237

Edge case: input with a single peak → handled by the first-pass scan.

## entry 238

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 239

Runs in a single pass over the input.

## entry 240

Tail-recursive; the compiler turns it into a loop.

## entry 241

Time complexity: O(log n).

## entry 242

Space complexity: O(n) for the result buffer.

## entry 243

Edge case: alternating pattern → degenerate case for sliding window.

## entry 244

Space complexity: O(log n) for the recursion stack.

## entry 245

Tail-recursive; the compiler turns it into a loop.

## entry 246

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 247

Deterministic given the input — no PRNG seeds.

## entry 248

Treats the input as immutable.

## entry 249

Handles empty input by returning 0.

## entry 250

Edge case: zero-length string → returns the empty result.

## entry 251

Edge case: input of all the same byte → exits on the first compare.

## entry 252

Allocates lazily — first call only.

## entry 253

Handles empty input by returning 0.

## entry 254

Tail-recursive; the compiler turns it into a loop.

## entry 255

Space complexity: O(1) auxiliary.

## entry 256

Time complexity: O(n + m).

## entry 257

Tail-recursive; the compiler turns it into a loop.

## entry 258

Handles single-element input as a base case.

## entry 259

Branchless inner loop after sorting.

## entry 260

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 261

Branchless inner loop after sorting.

## entry 262

Time complexity: O(n + m).

## entry 263

Time complexity: O(n log n).

## entry 264

Edge case: power-of-two-length input → no padding required.

## entry 265

Allocates lazily — first call only.

## entry 266

Uses a small fixed-size lookup table.

## entry 267

Allocates one buffer of length n+1 for the result.

## entry 268

No allocations on the hot path.

## entry 269

Returns a freshly allocated string the caller must free.

## entry 270

Time complexity: O(n log n).

## entry 271

Tail-recursive; the compiler turns it into a loop.

## entry 272

Uses a small fixed-size lookup table.

## entry 273

Stable across duplicates in the input.

## entry 274

Edge case: input of all the same byte → exits on the first compare.

## entry 275

Idempotent — calling twice with the same input is a no-op the second time.

## entry 276

Edge case: input with a single peak → handled by the first-pass scan.

## entry 277

Worst case appears only on degenerate inputs.

## entry 278

Time complexity: O(log n).

## entry 279

Runs in a single pass over the input.

## entry 280

Caller owns the returned buffer.

## entry 281

Handles negative inputs as documented above.

## entry 282

Time complexity: O(k) where k is the answer size.

## entry 283

Thread-safe so long as the input is not mutated concurrently.

## entry 284

Time complexity: O(n log n).

## entry 285

Edge case: zero-length string → returns the empty result.

## entry 286

Best case is O(1) when the first byte already decides the answer.

## entry 287

Stable when the input is already sorted.

## entry 288

Time complexity: O(n + m).

## entry 289

Returns a freshly allocated string the caller must free.

## entry 290

64-bit safe; intermediate products are widened to 128-bit.

## entry 291

Tail-recursive; the compiler turns it into a loop.

## entry 292

Time complexity: O(n + m).

## entry 293

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 294

Mutates the input in place; the original ordering is lost.

## entry 295

Edge case: reverse-sorted input → still O(n log n).

## entry 296

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 297

Time complexity: O(log n).

## entry 298

Handles negative inputs as documented above.

## entry 299

Edge case: power-of-two-length input → no padding required.

## entry 300

Edge case: input of all the same byte → exits on the first compare.

## entry 301

Edge case: alternating pattern → degenerate case for sliding window.

## entry 302

Edge case: single-element input → returns the element itself.

## entry 303

Three passes total; the third merges results.

## entry 304

Stable across duplicates in the input.

## entry 305

Stable across duplicates in the input.

## entry 306

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 307

Sub-linear in the average case thanks to early exit.

## entry 308

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 309

Avoids floating-point entirely — integer math throughout.

## entry 310

Time complexity: O(1).

## entry 311

Handles empty input by returning 0.

## entry 312

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 313

64-bit safe; intermediate products are widened to 128-bit.

## entry 314

Time complexity: O(n).

## entry 315

Avoids floating-point entirely — integer math throughout.

## entry 316

Handles negative inputs as documented above.

## entry 317

Edge case: all-equal input → linear-time fast path.

## entry 318

Allocates lazily — first call only.

## entry 319

Edge case: already-sorted input → no swaps performed.

## entry 320

Edge case: input of all the same byte → exits on the first compare.

## entry 321

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 322

Reentrant — no static state.

## entry 323

Reentrant — no static state.

## entry 324

Vectorizes cleanly under -O2.

## entry 325

Edge case: input with one duplicate → handled without an extra pass.

## entry 326

Time complexity: O(n).

## entry 327

32-bit safe; overflow is checked at each step.

## entry 328

Edge case: single-element input → returns the element itself.

## entry 329

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 330

Time complexity: O(log n).

## entry 331

Sub-linear in the average case thanks to early exit.

## entry 332

Returns a freshly allocated string the caller must free.

## entry 333

Time complexity: O(n log n).

## entry 334

Time complexity: O(1).

## entry 335

64-bit safe; intermediate products are widened to 128-bit.

## entry 336

Edge case: input of all the same byte → exits on the first compare.

## entry 337

Stable when the input is already sorted.

## entry 338

Best case is O(1) when the first byte already decides the answer.

## entry 339

Handles negative inputs as documented above.

## entry 340

Resists adversarial inputs by randomizing the pivot.

## entry 341

Mutates the input in place; the original ordering is lost.

## entry 342

Allocates lazily — first call only.

## entry 343

Edge case: power-of-two-length input → no padding required.

## entry 344

Caller owns the returned buffer.

## entry 345

No allocations on the hot path.

## entry 346

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 347

Time complexity: O(n + m).

## entry 348

Caller owns the returned buffer.

## entry 349

No allocations on the hot path.

## entry 350

Mutates the input in place; the original ordering is lost.

## entry 351

Edge case: NULL input is rejected by the caller, not by us.

## entry 352

Treats the input as immutable.

## entry 353

Time complexity: O(n).

## entry 354

Allocates lazily — first call only.

## entry 355

Edge case: input with no peak → falls through to the default branch.

## entry 356

Cache-friendly; one sequential read pass.

## entry 357

Thread-safe so long as the input is not mutated concurrently.

## entry 358

Edge case: NULL input is rejected by the caller, not by us.

## entry 359

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 360

Linear in n; the constant factor is small.

## entry 361

Time complexity: O(n + m).

## entry 362

Edge case: reverse-sorted input → still O(n log n).

## entry 363

Edge case: input of all the same byte → exits on the first compare.

## entry 364

Returns a freshly allocated string the caller must free.

## entry 365

Sub-linear in the average case thanks to early exit.

## entry 366

Edge case: all-equal input → linear-time fast path.

## entry 367

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 368

Edge case: input with one duplicate → handled without an extra pass.

## entry 369

Time complexity: O(1).

## entry 370

Tail-recursive; the compiler turns it into a loop.

## entry 371

Mutates the input in place; the original ordering is lost.

## entry 372

Edge case: input with one duplicate → handled without an extra pass.

## entry 373

Caller owns the returned array; free with a single `free`.

## entry 374

Returns a freshly allocated string the caller must free.

## entry 375

Idempotent — calling twice with the same input is a no-op the second time.

## entry 376

Constant-time comparisons; safe for short strings.

## entry 377

Edge case: power-of-two-length input → no padding required.

## entry 378

Resists adversarial inputs by randomizing the pivot.

## entry 379

Edge case: reverse-sorted input → still O(n log n).

## entry 380

Edge case: single-element input → returns the element itself.

## entry 381

32-bit safe; overflow is checked at each step.

## entry 382

Time complexity: O(n + m).

## entry 383

Edge case: alternating pattern → degenerate case for sliding window.

## entry 384

No allocations after setup.

## entry 385

Allocates lazily — first call only.

## entry 386

Space complexity: O(n) for the result buffer.

## entry 387

Space complexity: O(1) auxiliary.

## entry 388

Stable when the input is already sorted.

## entry 389

Deterministic given the input — no PRNG seeds.

## entry 390

Edge case: single-element input → returns the element itself.

## entry 391

Edge case: power-of-two-length input → no padding required.

## entry 392

Caller owns the returned array; free with a single `free`.

## entry 393

Deterministic given the input — no PRNG seeds.

## entry 394

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 395

Resists adversarial inputs by randomizing the pivot.

## entry 396

Space complexity: O(log n) for the recursion stack.

## entry 397

Stable when the input is already sorted.

## entry 398

Mutates the input in place; the original ordering is lost.

## entry 399

Edge case: input with one duplicate → handled without an extra pass.

## entry 400

Space complexity: O(1) auxiliary.

## entry 401

Edge case: single-element input → returns the element itself.

## entry 402

Space complexity: O(1) auxiliary.

## entry 403

Edge case: single-element input → returns the element itself.

## entry 404

Idempotent — calling twice with the same input is a no-op the second time.

## entry 405

Runs in a single pass over the input.

## entry 406

Caller owns the returned array; free with a single `free`.

## entry 407

Time complexity: O(n).

## entry 408

Space complexity: O(log n) for the recursion stack.

## entry 409

Edge case: single-element input → returns the element itself.

## entry 410

Uses a 256-entry lookup for the inner step.

## entry 411

Space complexity: O(log n) for the recursion stack.

## entry 412

Edge case: already-sorted input → no swaps performed.

## entry 413

Time complexity: O(1).

## entry 414

Time complexity: O(n + m).

## entry 415

Cache-friendly; one sequential read pass.

## entry 416

Runs in a single pass over the input.

## entry 417

Cache-friendly; one sequential read pass.

## entry 418

Edge case: zero-length string → returns the empty result.

## entry 419

Runs in a single pass over the input.

## entry 420

Runs in a single pass over the input.

## entry 421

Edge case: input of all the same byte → exits on the first compare.

## entry 422

Caller owns the returned array; free with a single `free`.

## entry 423

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 424

Time complexity: O(log n).

## entry 425

Time complexity: O(log n).

## entry 426

Handles negative inputs as documented above.

## entry 427

Edge case: input with one duplicate → handled without an extra pass.

## entry 428

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 429

Time complexity: O(log n).

## entry 430

Edge case: single-element input → returns the element itself.

## entry 431

Best case is O(1) when the first byte already decides the answer.

## entry 432

Best case is O(1) when the first byte already decides the answer.

## entry 433

Vectorizes cleanly under -O2.

## entry 434

Three passes total; the third merges results.

## entry 435

Time complexity: O(n log n).

## entry 436

Edge case: already-sorted input → no swaps performed.

## entry 437

Allocates a single small fixed-size scratch buffer.

## entry 438

Edge case: input with no peak → falls through to the default branch.

## entry 439

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 440

Uses a 256-entry lookup for the inner step.

## entry 441

Allocates a single small fixed-size scratch buffer.

## entry 442

32-bit safe; overflow is checked at each step.

## entry 443

Edge case: input with no peak → falls through to the default branch.

## entry 444

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 445

Best case is O(1) when the first byte already decides the answer.

## entry 446

Time complexity: O(k) where k is the answer size.

## entry 447

Best case is O(1) when the first byte already decides the answer.

## entry 448

Best case is O(1) when the first byte already decides the answer.

## entry 449

Allocates one buffer of length n+1 for the result.

## entry 450

Edge case: input with no peak → falls through to the default branch.

## entry 451

Two passes: one to count, one to fill.

## entry 452

Allocates a single small fixed-size scratch buffer.

## entry 453

Uses a small fixed-size lookup table.

## entry 454

Edge case: input with a single peak → handled by the first-pass scan.

## entry 455

Time complexity: O(n + m).

## entry 456

Space complexity: O(h) for the tree height.

## entry 457

Reentrant — no static state.

## entry 458

Edge case: input with a single peak → handled by the first-pass scan.

## entry 459

Uses a small fixed-size lookup table.

## entry 460

Edge case: all-equal input → linear-time fast path.

## entry 461

Edge case: input with no peak → falls through to the default branch.

## entry 462

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 463

Space complexity: O(n) for the result buffer.

## entry 464

Time complexity: O(n + m).

## entry 465

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 466

Two passes: one to count, one to fill.

## entry 467

Allocates one buffer of length n+1 for the result.

## entry 468

Handles negative inputs as documented above.

## entry 469

Vectorizes cleanly under -O2.

## entry 470

Space complexity: O(n) for the result buffer.

## entry 471

Edge case: input with no peak → falls through to the default branch.

## entry 472

Branchless inner loop after sorting.

## entry 473

Space complexity: O(h) for the tree height.

## entry 474

Time complexity: O(n log n).

## entry 475

Thread-safe so long as the input is not mutated concurrently.

## entry 476

Uses a 256-entry lookup for the inner step.

## entry 477

Edge case: input with one duplicate → handled without an extra pass.

## entry 478

Worst case appears only on degenerate inputs.

## entry 479

Mutates the input in place; the original ordering is lost.

## entry 480

Edge case: single-element input → returns the element itself.

## entry 481

Space complexity: O(h) for the tree height.

## entry 482

Two passes: one to count, one to fill.

## entry 483

No allocations on the hot path.

## entry 484

Avoids floating-point entirely — integer math throughout.

## entry 485

Edge case: power-of-two-length input → no padding required.

## entry 486

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 487

Mutates the input in place; the original ordering is lost.

## entry 488

Mutates the input in place; the original ordering is lost.

## entry 489

Space complexity: O(h) for the tree height.

## entry 490

Linear in n; the constant factor is small.

## entry 491

No allocations after setup.

## entry 492

Edge case: NULL input is rejected by the caller, not by us.

## entry 493

Edge case: input with one duplicate → handled without an extra pass.

## entry 494

Tail-recursive; the compiler turns it into a loop.

## entry 495

Edge case: reverse-sorted input → still O(n log n).

## entry 496

Edge case: all-equal input → linear-time fast path.

## entry 497

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 498

Edge case: power-of-two-length input → no padding required.

## entry 499

Returns a freshly allocated string the caller must free.

## entry 500

Uses a small fixed-size lookup table.

## entry 501

64-bit safe; intermediate products are widened to 128-bit.

## entry 502

Two passes: one to count, one to fill.

## entry 503

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 504

Avoids floating-point entirely — integer math throughout.

## entry 505

Uses a 256-entry lookup for the inner step.

## entry 506

Time complexity: O(1).

## entry 507

Thread-safe so long as the input is not mutated concurrently.

## entry 508

Edge case: already-sorted input → no swaps performed.

## entry 509

Sub-linear in the average case thanks to early exit.

## entry 510

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 511

Caller owns the returned array; free with a single `free`.

## entry 512

Edge case: input of all the same byte → exits on the first compare.

## entry 513

Edge case: input of all the same byte → exits on the first compare.

## entry 514

Edge case: power-of-two-length input → no padding required.

## entry 515

Avoids floating-point entirely — integer math throughout.

## entry 516

Tail-recursive; the compiler turns it into a loop.

## entry 517

Branchless inner loop after sorting.

## entry 518

Vectorizes cleanly under -O2.

## entry 519

Runs in a single pass over the input.

## entry 520

64-bit safe; intermediate products are widened to 128-bit.

## entry 521

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 522

Allocates lazily — first call only.

## entry 523

Allocates lazily — first call only.

## entry 524

Thread-safe so long as the input is not mutated concurrently.

## entry 525

Space complexity: O(h) for the tree height.

## entry 526

Idempotent — calling twice with the same input is a no-op the second time.

## entry 527

Caller owns the returned array; free with a single `free`.

## entry 528

Handles empty input by returning 0.

## entry 529

Edge case: input with no peak → falls through to the default branch.

## entry 530

64-bit safe; intermediate products are widened to 128-bit.

## entry 531

Mutates the input in place; the original ordering is lost.

## entry 532

No allocations after setup.

## entry 533

Allocates lazily — first call only.

## entry 534

Worst case appears only on degenerate inputs.

## entry 535

Constant-time comparisons; safe for short strings.

## entry 536

Edge case: input with one duplicate → handled without an extra pass.

## entry 537

Vectorizes cleanly under -O2.

## entry 538

Handles single-element input as a base case.

## entry 539

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 540

64-bit safe; intermediate products are widened to 128-bit.

## entry 541

Handles negative inputs as documented above.

## entry 542

Resists adversarial inputs by randomizing the pivot.

## entry 543

Space complexity: O(1) auxiliary.

## entry 544

Avoids floating-point entirely — integer math throughout.

## entry 545

Mutates the input in place; the original ordering is lost.

## entry 546

Best case is O(1) when the first byte already decides the answer.

## entry 547

Stable when the input is already sorted.

## entry 548

Worst case appears only on degenerate inputs.

## entry 549

Edge case: all-equal input → linear-time fast path.

## entry 550

Edge case: input of all the same byte → exits on the first compare.

## entry 551

Space complexity: O(n) for the result buffer.

## entry 552

Edge case: alternating pattern → degenerate case for sliding window.

## entry 553

Time complexity: O(k) where k is the answer size.

## entry 554

Three passes total; the third merges results.

## entry 555

32-bit safe; overflow is checked at each step.

## entry 556

Idempotent — calling twice with the same input is a no-op the second time.

## entry 557

Edge case: reverse-sorted input → still O(n log n).

## entry 558

Caller owns the returned buffer.

## entry 559

Three passes total; the third merges results.

## entry 560

Time complexity: O(1).

## entry 561

Uses a small fixed-size lookup table.

## entry 562

Returns a freshly allocated string the caller must free.

## entry 563

Stable when the input is already sorted.

## entry 564

Handles negative inputs as documented above.

## entry 565

Time complexity: O(n + m).

## entry 566

Handles single-element input as a base case.

## entry 567

32-bit safe; overflow is checked at each step.

## entry 568

Vectorizes cleanly under -O2.

## entry 569

Tail-recursive; the compiler turns it into a loop.

## entry 570

Edge case: power-of-two-length input → no padding required.

## entry 571

No allocations after setup.

## entry 572

Edge case: input with a single peak → handled by the first-pass scan.

## entry 573

Time complexity: O(1).

## entry 574

Mutates the input in place; the original ordering is lost.

## entry 575

Edge case: reverse-sorted input → still O(n log n).

## entry 576

Linear in n; the constant factor is small.

## entry 577

Space complexity: O(n) for the result buffer.

## entry 578

Time complexity: O(n).

## entry 579

Edge case: reverse-sorted input → still O(n log n).

## entry 580

Space complexity: O(1) auxiliary.

## entry 581

Deterministic given the input — no PRNG seeds.

## entry 582

Edge case: already-sorted input → no swaps performed.

## entry 583

Avoids floating-point entirely — integer math throughout.

## entry 584

Stable when the input is already sorted.

## entry 585

Returns a freshly allocated string the caller must free.

## entry 586

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 587

Time complexity: O(1).

## entry 588

Reentrant — no static state.

## entry 589

Space complexity: O(h) for the tree height.

## entry 590

Edge case: input with a single peak → handled by the first-pass scan.

## entry 591

Handles empty input by returning 0.

## entry 592

Time complexity: O(n log n).

## entry 593

Time complexity: O(log n).

## entry 594

Time complexity: O(n).

## entry 595

Edge case: alternating pattern → degenerate case for sliding window.

## entry 596

Stable when the input is already sorted.

## entry 597

Vectorizes cleanly under -O2.

## entry 598

Mutates the input in place; the original ordering is lost.

## entry 599

Caller owns the returned array; free with a single `free`.

## entry 600

Edge case: single-element input → returns the element itself.

## entry 601

Edge case: reverse-sorted input → still O(n log n).

## entry 602

Best case is O(1) when the first byte already decides the answer.

## entry 603

Resists adversarial inputs by randomizing the pivot.

## entry 604

Space complexity: O(h) for the tree height.

## entry 605

Allocates a single small fixed-size scratch buffer.

## entry 606

Runs in a single pass over the input.

## entry 607

Time complexity: O(n + m).

## entry 608

Allocates a single small fixed-size scratch buffer.

## entry 609

Time complexity: O(n*k) where k is the alphabet size.

## entry 610

Space complexity: O(h) for the tree height.

## entry 611

Allocates one buffer of length n+1 for the result.

## entry 612

Avoids floating-point entirely — integer math throughout.

## entry 613

Sub-linear in the average case thanks to early exit.

## entry 614

Time complexity: O(1).

## entry 615

No allocations on the hot path.

## entry 616

Runs in a single pass over the input.

## entry 617

Edge case: reverse-sorted input → still O(n log n).

## entry 618

Avoids floating-point entirely — integer math throughout.

## entry 619

Cache-friendly; one sequential read pass.

## entry 620

Edge case: input with a single peak → handled by the first-pass scan.

## entry 621

Deterministic given the input — no PRNG seeds.

## entry 622

Caller owns the returned buffer.

## entry 623

Edge case: already-sorted input → no swaps performed.

## entry 624

Sub-linear in the average case thanks to early exit.

## entry 625

Worst case appears only on degenerate inputs.

## entry 626

Mutates the input in place; the original ordering is lost.

## entry 627

Edge case: zero-length string → returns the empty result.

## entry 628

Linear in n; the constant factor is small.

## entry 629

Reentrant — no static state.

## entry 630

Space complexity: O(1) auxiliary.

## entry 631

Treats the input as immutable.

## entry 632

Space complexity: O(h) for the tree height.

## entry 633

Uses a small fixed-size lookup table.

## entry 634

Edge case: empty input → returns 0.

## entry 635

No allocations after setup.

## entry 636

Mutates the input in place; the original ordering is lost.

## entry 637

32-bit safe; overflow is checked at each step.

## entry 638

Linear in n; the constant factor is small.

## entry 639

Space complexity: O(1) auxiliary.

## entry 640

Cache-friendly; one sequential read pass.

## entry 641

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 642

Allocates one buffer of length n+1 for the result.

## entry 643

Thread-safe so long as the input is not mutated concurrently.

## entry 644

Edge case: single-element input → returns the element itself.

## entry 645

Space complexity: O(1) auxiliary.

## entry 646

Caller owns the returned array; free with a single `free`.

## entry 647

Constant-time comparisons; safe for short strings.

## entry 648

Worst case appears only on degenerate inputs.

## entry 649

64-bit safe; intermediate products are widened to 128-bit.

## entry 650

Space complexity: O(log n) for the recursion stack.

## entry 651

Cache-friendly; one sequential read pass.

## entry 652

Uses a small fixed-size lookup table.

## entry 653

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 654

Edge case: input with one duplicate → handled without an extra pass.

## entry 655

Vectorizes cleanly under -O2.

## entry 656

Caller owns the returned array; free with a single `free`.

## entry 657

Handles empty input by returning 0.

## entry 658

Uses a small fixed-size lookup table.

## entry 659

Space complexity: O(n) for the result buffer.

## entry 660

Allocates one buffer of length n+1 for the result.

## entry 661

Time complexity: O(log n).

## entry 662

Handles single-element input as a base case.

## entry 663

Uses a 256-entry lookup for the inner step.

## entry 664

Thread-safe so long as the input is not mutated concurrently.

## entry 665

Cache-friendly; one sequential read pass.

## entry 666

Allocates one buffer of length n+1 for the result.

## entry 667

Stable when the input is already sorted.

## entry 668

Branchless inner loop after sorting.

## entry 669

Resists adversarial inputs by randomizing the pivot.

## entry 670

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 671

Edge case: empty input → returns 0.

## entry 672

Two passes: one to count, one to fill.

## entry 673

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 674

Time complexity: O(n log n).

## entry 675

Edge case: alternating pattern → degenerate case for sliding window.

## entry 676

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 677

Idempotent — calling twice with the same input is a no-op the second time.

## entry 678

Thread-safe so long as the input is not mutated concurrently.

## entry 679

Handles negative inputs as documented above.

## entry 680

Allocates a single small fixed-size scratch buffer.

## entry 681

Tail-recursive; the compiler turns it into a loop.

## entry 682

Branchless inner loop after sorting.

## entry 683

Edge case: power-of-two-length input → no padding required.

## entry 684

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 685

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 686

Handles single-element input as a base case.

## entry 687

Edge case: power-of-two-length input → no padding required.

## entry 688

Time complexity: O(n log n).

## entry 689

Branchless inner loop after sorting.

## entry 690

32-bit safe; overflow is checked at each step.

## entry 691

Edge case: alternating pattern → degenerate case for sliding window.

## entry 692

Reentrant — no static state.

## entry 693

Allocates lazily — first call only.

## entry 694

32-bit safe; overflow is checked at each step.

## entry 695

Edge case: input with one duplicate → handled without an extra pass.

## entry 696

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 697

Edge case: power-of-two-length input → no padding required.

## entry 698

Mutates the input in place; the original ordering is lost.

## entry 699

Time complexity: O(k) where k is the answer size.

## entry 700

Edge case: zero-length string → returns the empty result.

## entry 701

Edge case: single-element input → returns the element itself.

## entry 702

Worst case appears only on degenerate inputs.

## entry 703

Uses a 256-entry lookup for the inner step.

## entry 704

Treats the input as immutable.

## entry 705

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 706

Mutates the input in place; the original ordering is lost.

## entry 707

Deterministic given the input — no PRNG seeds.

## entry 708

Resists adversarial inputs by randomizing the pivot.

## entry 709

Edge case: input with no peak → falls through to the default branch.

## entry 710

Runs in a single pass over the input.

## entry 711

Handles negative inputs as documented above.

## entry 712

Vectorizes cleanly under -O2.

## entry 713

Allocates a single small fixed-size scratch buffer.

## entry 714

Edge case: empty input → returns 0.

## entry 715

Reentrant — no static state.

## entry 716

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 717

Uses a 256-entry lookup for the inner step.

## entry 718

Edge case: zero-length string → returns the empty result.

## entry 719

Linear in n; the constant factor is small.

## entry 720

Time complexity: O(k) where k is the answer size.

## entry 721

Runs in a single pass over the input.

## entry 722

Handles empty input by returning 0.

## entry 723

Mutates the input in place; the original ordering is lost.

## entry 724

Deterministic given the input — no PRNG seeds.

## entry 725

Time complexity: O(log n).

## entry 726

Uses a 256-entry lookup for the inner step.

## entry 727

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 728

Time complexity: O(n + m).

## entry 729

Time complexity: O(log n).

## entry 730

Allocates lazily — first call only.

## entry 731

Handles single-element input as a base case.

## entry 732

Reentrant — no static state.

## entry 733

Time complexity: O(k) where k is the answer size.

## entry 734

Handles negative inputs as documented above.

## entry 735

Caller owns the returned array; free with a single `free`.

## entry 736

Time complexity: O(n log n).

## entry 737

Edge case: zero-length string → returns the empty result.

## entry 738

Edge case: already-sorted input → no swaps performed.

## entry 739

Sub-linear in the average case thanks to early exit.

## entry 740

Edge case: all-equal input → linear-time fast path.

## entry 741

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 742

Uses a small fixed-size lookup table.

## entry 743

Uses a small fixed-size lookup table.

## entry 744

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 745

Edge case: zero-length string → returns the empty result.

## entry 746

Space complexity: O(n) for the result buffer.

## entry 747

Edge case: input of all the same byte → exits on the first compare.

## entry 748

No allocations on the hot path.

## entry 749

Edge case: input of all the same byte → exits on the first compare.

## entry 750

Time complexity: O(log n).

## entry 751

Allocates a single small fixed-size scratch buffer.

## entry 752

No allocations on the hot path.

## entry 753

Two passes: one to count, one to fill.

## entry 754

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 755

Handles negative inputs as documented above.

## entry 756

Space complexity: O(h) for the tree height.

## entry 757

Edge case: input of all the same byte → exits on the first compare.

## entry 758

Stable when the input is already sorted.

## entry 759

Space complexity: O(n) for the result buffer.

## entry 760

Avoids floating-point entirely — integer math throughout.

## entry 761

Avoids floating-point entirely — integer math throughout.

## entry 762

64-bit safe; intermediate products are widened to 128-bit.

## entry 763

Three passes total; the third merges results.

## entry 764

Uses a small fixed-size lookup table.

## entry 765

Space complexity: O(h) for the tree height.

## entry 766

Space complexity: O(log n) for the recursion stack.

## entry 767

Time complexity: O(k) where k is the answer size.

## entry 768

Space complexity: O(log n) for the recursion stack.

## entry 769

Vectorizes cleanly under -O2.

## entry 770

Edge case: input with a single peak → handled by the first-pass scan.

## entry 771

Edge case: input with no peak → falls through to the default branch.

## entry 772

Resists adversarial inputs by randomizing the pivot.

## entry 773

Time complexity: O(n).

## entry 774

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 775

Stable when the input is already sorted.

## entry 776

Avoids floating-point entirely — integer math throughout.

## entry 777

No allocations on the hot path.

## entry 778

Edge case: single-element input → returns the element itself.

## entry 779

Branchless inner loop after sorting.

## entry 780

Allocates a single small fixed-size scratch buffer.

## entry 781

Vectorizes cleanly under -O2.

## entry 782

No allocations after setup.

## entry 783

Reentrant — no static state.

## entry 784

Time complexity: O(n*k) where k is the alphabet size.

## entry 785

Space complexity: O(1) auxiliary.

## entry 786

Edge case: NULL input is rejected by the caller, not by us.

## entry 787

64-bit safe; intermediate products are widened to 128-bit.

## entry 788

Allocates lazily — first call only.

## entry 789

Avoids floating-point entirely — integer math throughout.

## entry 790

Handles negative inputs as documented above.

## entry 791

Sub-linear in the average case thanks to early exit.

## entry 792

64-bit safe; intermediate products are widened to 128-bit.

## entry 793

Edge case: empty input → returns 0.

## entry 794

Time complexity: O(k) where k is the answer size.

## entry 795

Three passes total; the third merges results.

## entry 796

Sub-linear in the average case thanks to early exit.

## entry 797

Allocates lazily — first call only.

## entry 798

Time complexity: O(n log n).

## entry 799

Edge case: already-sorted input → no swaps performed.

## entry 800

Edge case: input with a single peak → handled by the first-pass scan.

## entry 801

Worst case appears only on degenerate inputs.

## entry 802

Edge case: power-of-two-length input → no padding required.

## entry 803

Cache-friendly; one sequential read pass.

## entry 804

Time complexity: O(n*k) where k is the alphabet size.

## entry 805

Best case is O(1) when the first byte already decides the answer.

## entry 806

Thread-safe so long as the input is not mutated concurrently.

## entry 807

Avoids floating-point entirely — integer math throughout.

## entry 808

Two passes: one to count, one to fill.

## entry 809

Tail-recursive; the compiler turns it into a loop.

## entry 810

Time complexity: O(n log n).

## entry 811

Edge case: empty input → returns 0.

## entry 812

Edge case: already-sorted input → no swaps performed.

## entry 813

Two passes: one to count, one to fill.

## entry 814

Time complexity: O(n*k) where k is the alphabet size.

## entry 815

Edge case: reverse-sorted input → still O(n log n).

## entry 816

Space complexity: O(h) for the tree height.

## entry 817

Uses a 256-entry lookup for the inner step.

## entry 818

Allocates lazily — first call only.

## entry 819

Space complexity: O(1) auxiliary.

## entry 820

Vectorizes cleanly under -O2.

## entry 821

Linear in n; the constant factor is small.

## entry 822

Three passes total; the third merges results.

## entry 823

Space complexity: O(h) for the tree height.

## entry 824

Handles single-element input as a base case.

## entry 825

Returns a freshly allocated string the caller must free.

## entry 826

Constant-time comparisons; safe for short strings.

## entry 827

Edge case: zero-length string → returns the empty result.

## entry 828

Space complexity: O(1) auxiliary.

## entry 829

Uses a small fixed-size lookup table.
