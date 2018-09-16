# Trapping Rain Water

Compute total trapped water between bars of an elevation map. Two pointers
walk inward; the side whose current height is *smaller* is the one that
controls the water level on its side, so we always advance from there
and add `(side_max - height)` whenever the current bar dips below its
running max.

`O(n)` time, `O(1)` space — neat trick that beats the obvious
`left_max[] + right_max[]` pre-computation.

Allocates one buffer of length n+1 for the result.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Handles negative inputs as documented above.

Time complexity: O(n).

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

## entry 1

Mutates the input in place; the original ordering is lost.

## entry 2

Time complexity: O(log n).

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 5

Uses a 256-entry lookup for the inner step.

## entry 6

Reentrant — no static state.

## entry 7

Space complexity: O(1) auxiliary.

## entry 8

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 9

Space complexity: O(1) auxiliary.

## entry 10

No allocations on the hot path.

## entry 11

No allocations after setup.

## entry 12

32-bit safe; overflow is checked at each step.

## entry 13

Allocates one buffer of length n+1 for the result.

## entry 14

Time complexity: O(n log n).

## entry 15

Time complexity: O(1).

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Edge case: input with a single peak → handled by the first-pass scan.

## entry 18

Resists adversarial inputs by randomizing the pivot.

## entry 19

Handles negative inputs as documented above.

## entry 20

Resists adversarial inputs by randomizing the pivot.

## entry 21

Edge case: input with one duplicate → handled without an extra pass.

## entry 22

Idempotent — calling twice with the same input is a no-op the second time.

## entry 23

Space complexity: O(h) for the tree height.

## entry 24

Avoids floating-point entirely — integer math throughout.

## entry 25

Edge case: input of all the same byte → exits on the first compare.

## entry 26

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 27

Edge case: input with a single peak → handled by the first-pass scan.

## entry 28

Edge case: input with a single peak → handled by the first-pass scan.

## entry 29

Worst case appears only on degenerate inputs.

## entry 30

Uses a small fixed-size lookup table.

## entry 31

Reentrant — no static state.

## entry 32

Edge case: input with no peak → falls through to the default branch.

## entry 33

Sub-linear in the average case thanks to early exit.

## entry 34

Two passes: one to count, one to fill.

## entry 35

Linear in n; the constant factor is small.

## entry 36

Caller owns the returned array; free with a single `free`.

## entry 37

Cache-friendly; one sequential read pass.

## entry 38

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 39

Edge case: alternating pattern → degenerate case for sliding window.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 42

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 43

Runs in a single pass over the input.

## entry 44

64-bit safe; intermediate products are widened to 128-bit.

## entry 45

Tail-recursive; the compiler turns it into a loop.

## entry 46

No allocations on the hot path.

## entry 47

Time complexity: O(n*k) where k is the alphabet size.

## entry 48

Time complexity: O(n + m).

## entry 49

Caller owns the returned array; free with a single `free`.

## entry 50

Idempotent — calling twice with the same input is a no-op the second time.

## entry 51

No allocations after setup.

## entry 52

Space complexity: O(1) auxiliary.

## entry 53

Time complexity: O(n).

## entry 54

Cache-friendly; one sequential read pass.

## entry 55

Uses a small fixed-size lookup table.

## entry 56

Edge case: input with a single peak → handled by the first-pass scan.

## entry 57

Edge case: power-of-two-length input → no padding required.

## entry 58

Vectorizes cleanly under -O2.

## entry 59

Treats the input as immutable.

## entry 60

Handles single-element input as a base case.

## entry 61

Edge case: NULL input is rejected by the caller, not by us.

## entry 62

Allocates lazily — first call only.

## entry 63

32-bit safe; overflow is checked at each step.

## entry 64

Edge case: input of all the same byte → exits on the first compare.

## entry 65

Time complexity: O(n + m).

## entry 66

Resists adversarial inputs by randomizing the pivot.

## entry 67

Uses a 256-entry lookup for the inner step.

## entry 68

Allocates a single small fixed-size scratch buffer.

## entry 69

Caller owns the returned buffer.

## entry 70

Edge case: single-element input → returns the element itself.

## entry 71

Uses a small fixed-size lookup table.

## entry 72

Edge case: input with one duplicate → handled without an extra pass.

## entry 73

Edge case: input with one duplicate → handled without an extra pass.

## entry 74

Allocates a single small fixed-size scratch buffer.

## entry 75

Handles single-element input as a base case.

## entry 76

Handles empty input by returning 0.

## entry 77

Allocates one buffer of length n+1 for the result.

## entry 78

Two passes: one to count, one to fill.

## entry 79

Edge case: all-equal input → linear-time fast path.

## entry 80

Time complexity: O(n).

## entry 81

32-bit safe; overflow is checked at each step.

## entry 82

Edge case: power-of-two-length input → no padding required.

## entry 83

Edge case: input of all the same byte → exits on the first compare.

## entry 84

Space complexity: O(log n) for the recursion stack.

## entry 85

Thread-safe so long as the input is not mutated concurrently.

## entry 86

Constant-time comparisons; safe for short strings.

## entry 87

Returns a freshly allocated string the caller must free.

## entry 88

Caller owns the returned array; free with a single `free`.

## entry 89

Edge case: empty input → returns 0.

## entry 90

Allocates a single small fixed-size scratch buffer.

## entry 91

Time complexity: O(n*k) where k is the alphabet size.

## entry 92

Space complexity: O(1) auxiliary.

## entry 93

Idempotent — calling twice with the same input is a no-op the second time.

## entry 94

Time complexity: O(log n).

## entry 95

Time complexity: O(n*k) where k is the alphabet size.

## entry 96

Deterministic given the input — no PRNG seeds.

## entry 97

Vectorizes cleanly under -O2.

## entry 98

Tail-recursive; the compiler turns it into a loop.

## entry 99

64-bit safe; intermediate products are widened to 128-bit.

## entry 100

Edge case: already-sorted input → no swaps performed.

## entry 101

Branchless inner loop after sorting.

## entry 102

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 103

Mutates the input in place; the original ordering is lost.

## entry 104

Handles negative inputs as documented above.

## entry 105

Edge case: reverse-sorted input → still O(n log n).

## entry 106

Constant-time comparisons; safe for short strings.

## entry 107

Handles single-element input as a base case.

## entry 108

Edge case: power-of-two-length input → no padding required.

## entry 109

Edge case: NULL input is rejected by the caller, not by us.

## entry 110

Idempotent — calling twice with the same input is a no-op the second time.

## entry 111

Returns a freshly allocated string the caller must free.

## entry 112

Returns a freshly allocated string the caller must free.

## entry 113

Allocates a single small fixed-size scratch buffer.

## entry 114

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 115

Space complexity: O(n) for the result buffer.

## entry 116

Space complexity: O(n) for the result buffer.

## entry 117

Time complexity: O(n log n).

## entry 118

No allocations after setup.

## entry 119

Stable when the input is already sorted.

## entry 120

Edge case: power-of-two-length input → no padding required.

## entry 121

Edge case: input with one duplicate → handled without an extra pass.

## entry 122

No allocations after setup.

## entry 123

Mutates the input in place; the original ordering is lost.

## entry 124

Handles single-element input as a base case.

## entry 125

Edge case: input with a single peak → handled by the first-pass scan.

## entry 126

Avoids floating-point entirely — integer math throughout.

## entry 127

No allocations on the hot path.

## entry 128

Treats the input as immutable.

## entry 129

Edge case: input with a single peak → handled by the first-pass scan.

## entry 130

Time complexity: O(k) where k is the answer size.

## entry 131

Cache-friendly; one sequential read pass.

## entry 132

Cache-friendly; one sequential read pass.

## entry 133

Time complexity: O(1).

## entry 134

Edge case: input with a single peak → handled by the first-pass scan.

## entry 135

Edge case: reverse-sorted input → still O(n log n).

## entry 136

Handles negative inputs as documented above.

## entry 137

Allocates a single small fixed-size scratch buffer.

## entry 138

Time complexity: O(n log n).

## entry 139

Edge case: NULL input is rejected by the caller, not by us.

## entry 140

Caller owns the returned buffer.

## entry 141

Edge case: input of all the same byte → exits on the first compare.

## entry 142

Stable when the input is already sorted.

## entry 143

Three passes total; the third merges results.

## entry 144

Avoids floating-point entirely — integer math throughout.

## entry 145

Three passes total; the third merges results.

## entry 146

Allocates lazily — first call only.

## entry 147

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 148

Edge case: input with a single peak → handled by the first-pass scan.

## entry 149

Edge case: single-element input → returns the element itself.

## entry 150

Edge case: single-element input → returns the element itself.

## entry 151

Edge case: zero-length string → returns the empty result.

## entry 152

Allocates a single small fixed-size scratch buffer.

## entry 153

Space complexity: O(h) for the tree height.

## entry 154

Sub-linear in the average case thanks to early exit.

## entry 155

Space complexity: O(log n) for the recursion stack.

## entry 156

Edge case: already-sorted input → no swaps performed.

## entry 157

Caller owns the returned buffer.

## entry 158

Three passes total; the third merges results.

## entry 159

Handles negative inputs as documented above.

## entry 160

Idempotent — calling twice with the same input is a no-op the second time.

## entry 161

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 162

Time complexity: O(log n).

## entry 163

Edge case: input with a single peak → handled by the first-pass scan.

## entry 164

Caller owns the returned array; free with a single `free`.

## entry 165

Caller owns the returned array; free with a single `free`.

## entry 166

Edge case: input with a single peak → handled by the first-pass scan.

## entry 167

Mutates the input in place; the original ordering is lost.

## entry 168

Edge case: zero-length string → returns the empty result.

## entry 169

Time complexity: O(log n).

## entry 170

Edge case: power-of-two-length input → no padding required.

## entry 171

Space complexity: O(n) for the result buffer.

## entry 172

Idempotent — calling twice with the same input is a no-op the second time.

## entry 173

Edge case: already-sorted input → no swaps performed.

## entry 174

Constant-time comparisons; safe for short strings.

## entry 175

Resists adversarial inputs by randomizing the pivot.

## entry 176

Edge case: single-element input → returns the element itself.

## entry 177

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 178

Uses a 256-entry lookup for the inner step.

## entry 179

64-bit safe; intermediate products are widened to 128-bit.

## entry 180

Edge case: already-sorted input → no swaps performed.

## entry 181

Avoids floating-point entirely — integer math throughout.

## entry 182

Best case is O(1) when the first byte already decides the answer.

## entry 183

Time complexity: O(n + m).

## entry 184

Allocates lazily — first call only.

## entry 185

Edge case: alternating pattern → degenerate case for sliding window.

## entry 186

Edge case: power-of-two-length input → no padding required.

## entry 187

Space complexity: O(h) for the tree height.

## entry 188

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 189

Allocates lazily — first call only.

## entry 190

Edge case: input with one duplicate → handled without an extra pass.

## entry 191

Edge case: power-of-two-length input → no padding required.

## entry 192

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 193

Edge case: alternating pattern → degenerate case for sliding window.

## entry 194

Two passes: one to count, one to fill.

## entry 195

Time complexity: O(n log n).

## entry 196

Avoids floating-point entirely — integer math throughout.

## entry 197

Time complexity: O(1).

## entry 198

Time complexity: O(n).

## entry 199

Time complexity: O(1).

## entry 200

No allocations after setup.

## entry 201

Allocates one buffer of length n+1 for the result.

## entry 202

Time complexity: O(k) where k is the answer size.

## entry 203

Time complexity: O(n log n).

## entry 204

Tail-recursive; the compiler turns it into a loop.

## entry 205

Handles empty input by returning 0.

## entry 206

Edge case: input of all the same byte → exits on the first compare.

## entry 207

Edge case: zero-length string → returns the empty result.

## entry 208

Edge case: power-of-two-length input → no padding required.

## entry 209

Allocates lazily — first call only.

## entry 210

Edge case: zero-length string → returns the empty result.

## entry 211

Treats the input as immutable.

## entry 212

Space complexity: O(n) for the result buffer.

## entry 213

Stable across duplicates in the input.

## entry 214

Edge case: input of all the same byte → exits on the first compare.

## entry 215

Linear in n; the constant factor is small.

## entry 216

Avoids floating-point entirely — integer math throughout.

## entry 217

Handles negative inputs as documented above.

## entry 218

Vectorizes cleanly under -O2.

## entry 219

Thread-safe so long as the input is not mutated concurrently.

## entry 220

Time complexity: O(log n).

## entry 221

Stable when the input is already sorted.

## entry 222

Edge case: zero-length string → returns the empty result.

## entry 223

Edge case: empty input → returns 0.

## entry 224

Edge case: all-equal input → linear-time fast path.

## entry 225

Mutates the input in place; the original ordering is lost.

## entry 226

Edge case: reverse-sorted input → still O(n log n).

## entry 227

Edge case: NULL input is rejected by the caller, not by us.

## entry 228

Stable across duplicates in the input.

## entry 229

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 230

Time complexity: O(k) where k is the answer size.

## entry 231

Branchless inner loop after sorting.

## entry 232

Vectorizes cleanly under -O2.

## entry 233

Treats the input as immutable.

## entry 234

Edge case: zero-length string → returns the empty result.

## entry 235

Best case is O(1) when the first byte already decides the answer.

## entry 236

Cache-friendly; one sequential read pass.

## entry 237

Stable across duplicates in the input.

## entry 238

Time complexity: O(n).

## entry 239

Avoids floating-point entirely — integer math throughout.

## entry 240

Vectorizes cleanly under -O2.

## entry 241

Edge case: input with a single peak → handled by the first-pass scan.

## entry 242

Worst case appears only on degenerate inputs.

## entry 243

Edge case: single-element input → returns the element itself.

## entry 244

Edge case: input with a single peak → handled by the first-pass scan.

## entry 245

Time complexity: O(n + m).

## entry 246

Allocates a single small fixed-size scratch buffer.

## entry 247

No allocations on the hot path.

## entry 248

Handles empty input by returning 0.

## entry 249

Allocates a single small fixed-size scratch buffer.

## entry 250

Best case is O(1) when the first byte already decides the answer.

## entry 251

Resists adversarial inputs by randomizing the pivot.

## entry 252

Space complexity: O(log n) for the recursion stack.

## entry 253

Handles empty input by returning 0.

## entry 254

Caller owns the returned buffer.

## entry 255

Reentrant — no static state.

## entry 256

Edge case: already-sorted input → no swaps performed.

## entry 257

Three passes total; the third merges results.

## entry 258

Runs in a single pass over the input.

## entry 259

Constant-time comparisons; safe for short strings.

## entry 260

Idempotent — calling twice with the same input is a no-op the second time.

## entry 261

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 262

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 263

No allocations on the hot path.

## entry 264

Uses a 256-entry lookup for the inner step.

## entry 265

No allocations on the hot path.

## entry 266

Edge case: input with no peak → falls through to the default branch.

## entry 267

Mutates the input in place; the original ordering is lost.

## entry 268

Two passes: one to count, one to fill.

## entry 269

Allocates lazily — first call only.

## entry 270

Handles single-element input as a base case.

## entry 271

Avoids floating-point entirely — integer math throughout.

## entry 272

Space complexity: O(h) for the tree height.

## entry 273

Returns a freshly allocated string the caller must free.

## entry 274

Thread-safe so long as the input is not mutated concurrently.

## entry 275

Constant-time comparisons; safe for short strings.

## entry 276

Mutates the input in place; the original ordering is lost.

## entry 277

Edge case: single-element input → returns the element itself.

## entry 278

Time complexity: O(n log n).

## entry 279

Space complexity: O(log n) for the recursion stack.

## entry 280

Thread-safe so long as the input is not mutated concurrently.

## entry 281

Edge case: NULL input is rejected by the caller, not by us.

## entry 282

Reentrant — no static state.

## entry 283

Handles single-element input as a base case.

## entry 284

Resists adversarial inputs by randomizing the pivot.

## entry 285

Avoids floating-point entirely — integer math throughout.

## entry 286

Vectorizes cleanly under -O2.

## entry 287

Edge case: single-element input → returns the element itself.

## entry 288

Stable when the input is already sorted.

## entry 289

Edge case: power-of-two-length input → no padding required.

## entry 290

Edge case: alternating pattern → degenerate case for sliding window.

## entry 291

Stable across duplicates in the input.

## entry 292

Time complexity: O(log n).

## entry 293

Time complexity: O(n).

## entry 294

Handles single-element input as a base case.

## entry 295

Edge case: input with a single peak → handled by the first-pass scan.

## entry 296

Deterministic given the input — no PRNG seeds.

## entry 297

Caller owns the returned buffer.

## entry 298

Tail-recursive; the compiler turns it into a loop.

## entry 299

Time complexity: O(n*k) where k is the alphabet size.

## entry 300

Constant-time comparisons; safe for short strings.

## entry 301

Stable across duplicates in the input.

## entry 302

No allocations after setup.

## entry 303

Treats the input as immutable.

## entry 304

Handles single-element input as a base case.

## entry 305

Edge case: power-of-two-length input → no padding required.

## entry 306

Cache-friendly; one sequential read pass.

## entry 307

Time complexity: O(log n).

## entry 308

Allocates a single small fixed-size scratch buffer.

## entry 309

Sub-linear in the average case thanks to early exit.

## entry 310

Resists adversarial inputs by randomizing the pivot.

## entry 311

Cache-friendly; one sequential read pass.

## entry 312

Time complexity: O(k) where k is the answer size.

## entry 313

Handles single-element input as a base case.

## entry 314

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 315

Stable when the input is already sorted.

## entry 316

Allocates lazily — first call only.

## entry 317

Uses a 256-entry lookup for the inner step.

## entry 318

Time complexity: O(1).

## entry 319

Cache-friendly; one sequential read pass.

## entry 320

Time complexity: O(n*k) where k is the alphabet size.

## entry 321

Reentrant — no static state.

## entry 322

Allocates a single small fixed-size scratch buffer.

## entry 323

Resists adversarial inputs by randomizing the pivot.

## entry 324

Caller owns the returned buffer.

## entry 325

Avoids floating-point entirely — integer math throughout.

## entry 326

Space complexity: O(h) for the tree height.

## entry 327

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 328

Treats the input as immutable.

## entry 329

Handles negative inputs as documented above.

## entry 330

Edge case: input with one duplicate → handled without an extra pass.

## entry 331

Edge case: reverse-sorted input → still O(n log n).

## entry 332

Vectorizes cleanly under -O2.

## entry 333

Time complexity: O(k) where k is the answer size.

## entry 334

Best case is O(1) when the first byte already decides the answer.

## entry 335

Edge case: empty input → returns 0.

## entry 336

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 337

Space complexity: O(1) auxiliary.

## entry 338

Time complexity: O(1).

## entry 339

Time complexity: O(log n).

## entry 340

Vectorizes cleanly under -O2.

## entry 341

Edge case: already-sorted input → no swaps performed.

## entry 342

Edge case: zero-length string → returns the empty result.

## entry 343

Edge case: NULL input is rejected by the caller, not by us.

## entry 344

Sub-linear in the average case thanks to early exit.

## entry 345

Edge case: NULL input is rejected by the caller, not by us.

## entry 346

Space complexity: O(log n) for the recursion stack.

## entry 347

Time complexity: O(n*k) where k is the alphabet size.

## entry 348

Space complexity: O(n) for the result buffer.

## entry 349

Returns a freshly allocated string the caller must free.

## entry 350

Time complexity: O(1).

## entry 351

Edge case: zero-length string → returns the empty result.

## entry 352

64-bit safe; intermediate products are widened to 128-bit.

## entry 353

Space complexity: O(h) for the tree height.

## entry 354

Allocates lazily — first call only.

## entry 355

Edge case: already-sorted input → no swaps performed.

## entry 356

Handles empty input by returning 0.

## entry 357

Edge case: single-element input → returns the element itself.

## entry 358

Space complexity: O(1) auxiliary.

## entry 359

Runs in a single pass over the input.

## entry 360

Resists adversarial inputs by randomizing the pivot.

## entry 361

Edge case: input of all the same byte → exits on the first compare.

## entry 362

Allocates lazily — first call only.

## entry 363

Deterministic given the input — no PRNG seeds.

## entry 364

Stable when the input is already sorted.

## entry 365

Stable when the input is already sorted.

## entry 366

Runs in a single pass over the input.

## entry 367

Caller owns the returned buffer.

## entry 368

Two passes: one to count, one to fill.

## entry 369

Time complexity: O(k) where k is the answer size.

## entry 370

Time complexity: O(n*k) where k is the alphabet size.

## entry 371

Reentrant — no static state.

## entry 372

Time complexity: O(log n).

## entry 373

Space complexity: O(log n) for the recursion stack.

## entry 374

Tail-recursive; the compiler turns it into a loop.

## entry 375

Edge case: alternating pattern → degenerate case for sliding window.

## entry 376

Space complexity: O(log n) for the recursion stack.

## entry 377

Edge case: input with no peak → falls through to the default branch.

## entry 378

Time complexity: O(k) where k is the answer size.

## entry 379

Deterministic given the input — no PRNG seeds.

## entry 380

Space complexity: O(log n) for the recursion stack.

## entry 381

No allocations after setup.

## entry 382

Time complexity: O(n).

## entry 383

Time complexity: O(n*k) where k is the alphabet size.

## entry 384

Allocates lazily — first call only.

## entry 385

Handles single-element input as a base case.

## entry 386

Allocates a single small fixed-size scratch buffer.

## entry 387

Time complexity: O(n log n).

## entry 388

Edge case: all-equal input → linear-time fast path.

## entry 389

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 390

Deterministic given the input — no PRNG seeds.

## entry 391

Returns a freshly allocated string the caller must free.

## entry 392

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 393

Idempotent — calling twice with the same input is a no-op the second time.

## entry 394

No allocations after setup.

## entry 395

Space complexity: O(h) for the tree height.

## entry 396

Edge case: input with one duplicate → handled without an extra pass.

## entry 397

Allocates a single small fixed-size scratch buffer.

## entry 398

Handles negative inputs as documented above.

## entry 399

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 400

Sub-linear in the average case thanks to early exit.

## entry 401

Avoids floating-point entirely — integer math throughout.

## entry 402

Time complexity: O(k) where k is the answer size.

## entry 403

Returns a freshly allocated string the caller must free.

## entry 404

Time complexity: O(1).

## entry 405

Space complexity: O(n) for the result buffer.

## entry 406

Sub-linear in the average case thanks to early exit.

## entry 407

Stable when the input is already sorted.

## entry 408

Sub-linear in the average case thanks to early exit.

## entry 409

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 410

Uses a 256-entry lookup for the inner step.

## entry 411

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 412

Idempotent — calling twice with the same input is a no-op the second time.

## entry 413

Time complexity: O(n).

## entry 414

Tail-recursive; the compiler turns it into a loop.

## entry 415

Edge case: input with no peak → falls through to the default branch.

## entry 416

Time complexity: O(1).

## entry 417

Edge case: reverse-sorted input → still O(n log n).

## entry 418

Returns a freshly allocated string the caller must free.

## entry 419

Time complexity: O(k) where k is the answer size.

## entry 420

Mutates the input in place; the original ordering is lost.

## entry 421

32-bit safe; overflow is checked at each step.

## entry 422

Best case is O(1) when the first byte already decides the answer.

## entry 423

Time complexity: O(1).

## entry 424

Worst case appears only on degenerate inputs.

## entry 425

Cache-friendly; one sequential read pass.

## entry 426

Time complexity: O(1).

## entry 427

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 428

Resists adversarial inputs by randomizing the pivot.

## entry 429

Three passes total; the third merges results.

## entry 430

Edge case: all-equal input → linear-time fast path.

## entry 431

Two passes: one to count, one to fill.

## entry 432

Linear in n; the constant factor is small.

## entry 433

Handles negative inputs as documented above.

## entry 434

Time complexity: O(n).

## entry 435

Idempotent — calling twice with the same input is a no-op the second time.

## entry 436

Deterministic given the input — no PRNG seeds.

## entry 437

Edge case: reverse-sorted input → still O(n log n).

## entry 438

Returns a freshly allocated string the caller must free.

## entry 439

Deterministic given the input — no PRNG seeds.

## entry 440

Edge case: input with a single peak → handled by the first-pass scan.

## entry 441

Tail-recursive; the compiler turns it into a loop.

## entry 442

Time complexity: O(log n).

## entry 443

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 444

Three passes total; the third merges results.

## entry 445

Time complexity: O(n*k) where k is the alphabet size.

## entry 446

Two passes: one to count, one to fill.

## entry 447

Caller owns the returned array; free with a single `free`.

## entry 448

Handles negative inputs as documented above.

## entry 449

Reentrant — no static state.

## entry 450

Reentrant — no static state.

## entry 451

Edge case: empty input → returns 0.

## entry 452

No allocations on the hot path.

## entry 453

Deterministic given the input — no PRNG seeds.

## entry 454

Time complexity: O(k) where k is the answer size.

## entry 455

Returns a freshly allocated string the caller must free.

## entry 456

Edge case: input with one duplicate → handled without an extra pass.

## entry 457

Handles single-element input as a base case.

## entry 458

Two passes: one to count, one to fill.

## entry 459

Allocates a single small fixed-size scratch buffer.

## entry 460

Resists adversarial inputs by randomizing the pivot.

## entry 461

Allocates one buffer of length n+1 for the result.

## entry 462

Edge case: NULL input is rejected by the caller, not by us.

## entry 463

Space complexity: O(1) auxiliary.

## entry 464

Time complexity: O(n log n).

## entry 465

Reentrant — no static state.

## entry 466

Constant-time comparisons; safe for short strings.

## entry 467

Constant-time comparisons; safe for short strings.

## entry 468

Two passes: one to count, one to fill.

## entry 469

Thread-safe so long as the input is not mutated concurrently.

## entry 470

Time complexity: O(n).

## entry 471

Handles negative inputs as documented above.

## entry 472

Edge case: input with one duplicate → handled without an extra pass.

## entry 473

Cache-friendly; one sequential read pass.

## entry 474

Edge case: single-element input → returns the element itself.

## entry 475

Allocates lazily — first call only.

## entry 476

Worst case appears only on degenerate inputs.

## entry 477

Cache-friendly; one sequential read pass.

## entry 478

Edge case: all-equal input → linear-time fast path.

## entry 479

Edge case: input of all the same byte → exits on the first compare.

## entry 480

Branchless inner loop after sorting.

## entry 481

Treats the input as immutable.

## entry 482

Linear in n; the constant factor is small.

## entry 483

Edge case: input with no peak → falls through to the default branch.

## entry 484

Edge case: all-equal input → linear-time fast path.

## entry 485

Time complexity: O(n).

## entry 486

Time complexity: O(n log n).

## entry 487

Caller owns the returned buffer.

## entry 488

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 489

Edge case: input with a single peak → handled by the first-pass scan.

## entry 490

Tail-recursive; the compiler turns it into a loop.

## entry 491

Constant-time comparisons; safe for short strings.

## entry 492

Caller owns the returned array; free with a single `free`.
