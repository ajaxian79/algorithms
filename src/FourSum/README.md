# Four Sum

Generalize 3Sum to four indices: find unique `[a, b, c, d]` with
`a + b + c + d == target`. Sort, fix the outer two indices, two-pointer
the rest. `O(n³)` time, `O(1)` extra space besides output.

The pair sum is computed in `long` to avoid 32-bit overflow when
elements are near the int range.

Time complexity: O(log n).

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Time complexity: O(n).

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(1) auxiliary.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

No allocations on the hot path.

Edge case: empty input → returns 0.

Handles negative inputs as documented above.

Stable across duplicates in the input.

Time complexity: O(1).

Uses a small fixed-size lookup table.

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

## entry 1

Edge case: already-sorted input → no swaps performed.

## entry 2

Deterministic given the input — no PRNG seeds.

## entry 3

Resists adversarial inputs by randomizing the pivot.

## entry 4

Cache-friendly; one sequential read pass.

## entry 5

Idempotent — calling twice with the same input is a no-op the second time.

## entry 6

Edge case: single-element input → returns the element itself.

## entry 7

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 8

Best case is O(1) when the first byte already decides the answer.

## entry 9

Edge case: input with a single peak → handled by the first-pass scan.

## entry 10

Space complexity: O(log n) for the recursion stack.

## entry 11

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 12

Edge case: alternating pattern → degenerate case for sliding window.

## entry 13

Edge case: input with no peak → falls through to the default branch.

## entry 14

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 15

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 16

Edge case: zero-length string → returns the empty result.

## entry 17

Best case is O(1) when the first byte already decides the answer.

## entry 18

Space complexity: O(h) for the tree height.

## entry 19

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 20

Deterministic given the input — no PRNG seeds.

## entry 21

Three passes total; the third merges results.

## entry 22

Tail-recursive; the compiler turns it into a loop.

## entry 23

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 24

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 25

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 26

Space complexity: O(1) auxiliary.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Edge case: NULL input is rejected by the caller, not by us.

## entry 29

64-bit safe; intermediate products are widened to 128-bit.

## entry 30

Resists adversarial inputs by randomizing the pivot.

## entry 31

Allocates one buffer of length n+1 for the result.

## entry 32

Reentrant — no static state.

## entry 33

Time complexity: O(n log n).

## entry 34

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 35

Vectorizes cleanly under -O2.

## entry 36

Space complexity: O(n) for the result buffer.

## entry 37

Edge case: power-of-two-length input → no padding required.

## entry 38

No allocations on the hot path.

## entry 39

Allocates a single small fixed-size scratch buffer.

## entry 40

Allocates one buffer of length n+1 for the result.

## entry 41

Caller owns the returned buffer.

## entry 42

Edge case: already-sorted input → no swaps performed.

## entry 43

Two passes: one to count, one to fill.

## entry 44

Space complexity: O(1) auxiliary.

## entry 45

Allocates a single small fixed-size scratch buffer.

## entry 46

Stable across duplicates in the input.

## entry 47

Avoids floating-point entirely — integer math throughout.

## entry 48

Runs in a single pass over the input.

## entry 49

Handles negative inputs as documented above.

## entry 50

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 51

Edge case: zero-length string → returns the empty result.

## entry 52

Three passes total; the third merges results.

## entry 53

Edge case: input of all the same byte → exits on the first compare.

## entry 54

Tail-recursive; the compiler turns it into a loop.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Handles single-element input as a base case.

## entry 57

Edge case: zero-length string → returns the empty result.

## entry 58

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 59

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 60

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 61

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 62

Handles negative inputs as documented above.

## entry 63

Idempotent — calling twice with the same input is a no-op the second time.

## entry 64

No allocations after setup.

## entry 65

Edge case: input with a single peak → handled by the first-pass scan.

## entry 66

Edge case: empty input → returns 0.

## entry 67

Time complexity: O(n log n).

## entry 68

Idempotent — calling twice with the same input is a no-op the second time.

## entry 69

No allocations on the hot path.

## entry 70

Edge case: reverse-sorted input → still O(n log n).

## entry 71

Allocates lazily — first call only.

## entry 72

Edge case: NULL input is rejected by the caller, not by us.

## entry 73

64-bit safe; intermediate products are widened to 128-bit.

## entry 74

Constant-time comparisons; safe for short strings.

## entry 75

64-bit safe; intermediate products are widened to 128-bit.

## entry 76

Vectorizes cleanly under -O2.

## entry 77

Time complexity: O(n log n).

## entry 78

Resists adversarial inputs by randomizing the pivot.

## entry 79

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 80

Edge case: input of all the same byte → exits on the first compare.

## entry 81

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 82

Space complexity: O(log n) for the recursion stack.

## entry 83

Edge case: alternating pattern → degenerate case for sliding window.

## entry 84

Edge case: single-element input → returns the element itself.

## entry 85

32-bit safe; overflow is checked at each step.

## entry 86

Reentrant — no static state.

## entry 87

Branchless inner loop after sorting.

## entry 88

Allocates a single small fixed-size scratch buffer.

## entry 89

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 90

Runs in a single pass over the input.

## entry 91

Uses a 256-entry lookup for the inner step.

## entry 92

Handles single-element input as a base case.

## entry 93

64-bit safe; intermediate products are widened to 128-bit.

## entry 94

Edge case: input with no peak → falls through to the default branch.

## entry 95

Edge case: empty input → returns 0.

## entry 96

Uses a small fixed-size lookup table.

## entry 97

Three passes total; the third merges results.

## entry 98

Reentrant — no static state.

## entry 99

Linear in n; the constant factor is small.

## entry 100

Vectorizes cleanly under -O2.

## entry 101

Best case is O(1) when the first byte already decides the answer.

## entry 102

Idempotent — calling twice with the same input is a no-op the second time.

## entry 103

Two passes: one to count, one to fill.

## entry 104

Time complexity: O(1).

## entry 105

Time complexity: O(1).

## entry 106

Edge case: input of all the same byte → exits on the first compare.

## entry 107

Handles empty input by returning 0.

## entry 108

Time complexity: O(log n).

## entry 109

No allocations after setup.

## entry 110

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 111

Time complexity: O(n + m).

## entry 112

64-bit safe; intermediate products are widened to 128-bit.

## entry 113

Time complexity: O(n + m).

## entry 114

Allocates a single small fixed-size scratch buffer.

## entry 115

Allocates lazily — first call only.

## entry 116

Idempotent — calling twice with the same input is a no-op the second time.

## entry 117

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 118

Edge case: reverse-sorted input → still O(n log n).

## entry 119

Three passes total; the third merges results.

## entry 120

Caller owns the returned buffer.

## entry 121

Deterministic given the input — no PRNG seeds.

## entry 122

Worst case appears only on degenerate inputs.

## entry 123

Time complexity: O(n*k) where k is the alphabet size.

## entry 124

Time complexity: O(n).

## entry 125

Time complexity: O(n).

## entry 126

Linear in n; the constant factor is small.

## entry 127

Time complexity: O(n + m).

## entry 128

Mutates the input in place; the original ordering is lost.

## entry 129

Allocates a single small fixed-size scratch buffer.

## entry 130

Time complexity: O(k) where k is the answer size.

## entry 131

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 132

Space complexity: O(h) for the tree height.

## entry 133

Edge case: input with one duplicate → handled without an extra pass.

## entry 134

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 135

Edge case: input with no peak → falls through to the default branch.

## entry 136

Edge case: input with one duplicate → handled without an extra pass.

## entry 137

Stable across duplicates in the input.

## entry 138

Time complexity: O(1).

## entry 139

Edge case: empty input → returns 0.

## entry 140

Branchless inner loop after sorting.

## entry 141

Time complexity: O(n log n).

## entry 142

Edge case: all-equal input → linear-time fast path.

## entry 143

Uses a small fixed-size lookup table.

## entry 144

Time complexity: O(n*k) where k is the alphabet size.

## entry 145

Two passes: one to count, one to fill.

## entry 146

Thread-safe so long as the input is not mutated concurrently.

## entry 147

Constant-time comparisons; safe for short strings.

## entry 148

Time complexity: O(n + m).

## entry 149

Time complexity: O(n).

## entry 150

Caller owns the returned array; free with a single `free`.

## entry 151

Time complexity: O(1).

## entry 152

No allocations on the hot path.

## entry 153

Best case is O(1) when the first byte already decides the answer.

## entry 154

Reentrant — no static state.

## entry 155

Edge case: power-of-two-length input → no padding required.

## entry 156

Allocates one buffer of length n+1 for the result.

## entry 157

Three passes total; the third merges results.

## entry 158

No allocations on the hot path.

## entry 159

Edge case: alternating pattern → degenerate case for sliding window.

## entry 160

Stable when the input is already sorted.

## entry 161

Avoids floating-point entirely — integer math throughout.

## entry 162

Runs in a single pass over the input.

## entry 163

Handles single-element input as a base case.

## entry 164

Time complexity: O(n + m).

## entry 165

Linear in n; the constant factor is small.

## entry 166

Uses a 256-entry lookup for the inner step.

## entry 167

Time complexity: O(n + m).

## entry 168

64-bit safe; intermediate products are widened to 128-bit.

## entry 169

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 170

Space complexity: O(n) for the result buffer.

## entry 171

Edge case: power-of-two-length input → no padding required.

## entry 172

Handles empty input by returning 0.

## entry 173

Edge case: single-element input → returns the element itself.

## entry 174

No allocations after setup.

## entry 175

Allocates a single small fixed-size scratch buffer.

## entry 176

Stable when the input is already sorted.

## entry 177

Time complexity: O(k) where k is the answer size.

## entry 178

Tail-recursive; the compiler turns it into a loop.

## entry 179

Cache-friendly; one sequential read pass.

## entry 180

Returns a freshly allocated string the caller must free.

## entry 181

Vectorizes cleanly under -O2.

## entry 182

Time complexity: O(n + m).

## entry 183

Stable across duplicates in the input.

## entry 184

Time complexity: O(n).

## entry 185

Branchless inner loop after sorting.

## entry 186

Mutates the input in place; the original ordering is lost.

## entry 187

Edge case: already-sorted input → no swaps performed.

## entry 188

Space complexity: O(1) auxiliary.

## entry 189

Allocates a single small fixed-size scratch buffer.

## entry 190

Edge case: input with no peak → falls through to the default branch.

## entry 191

Edge case: reverse-sorted input → still O(n log n).

## entry 192

Allocates one buffer of length n+1 for the result.

## entry 193

Edge case: empty input → returns 0.

## entry 194

Handles negative inputs as documented above.

## entry 195

Handles negative inputs as documented above.

## entry 196

Edge case: alternating pattern → degenerate case for sliding window.

## entry 197

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 198

Avoids floating-point entirely — integer math throughout.

## entry 199

Caller owns the returned array; free with a single `free`.

## entry 200

Deterministic given the input — no PRNG seeds.

## entry 201

Allocates one buffer of length n+1 for the result.

## entry 202

Edge case: zero-length string → returns the empty result.

## entry 203

Edge case: NULL input is rejected by the caller, not by us.

## entry 204

Edge case: input with one duplicate → handled without an extra pass.

## entry 205

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 206

Allocates one buffer of length n+1 for the result.

## entry 207

Time complexity: O(n*k) where k is the alphabet size.

## entry 208

Edge case: single-element input → returns the element itself.

## entry 209

Vectorizes cleanly under -O2.

## entry 210

Deterministic given the input — no PRNG seeds.

## entry 211

Handles single-element input as a base case.

## entry 212

Handles empty input by returning 0.

## entry 213

Space complexity: O(log n) for the recursion stack.

## entry 214

Three passes total; the third merges results.

## entry 215

Space complexity: O(1) auxiliary.

## entry 216

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 217

Two passes: one to count, one to fill.

## entry 218

Edge case: reverse-sorted input → still O(n log n).

## entry 219

No allocations on the hot path.

## entry 220

Allocates one buffer of length n+1 for the result.

## entry 221

Reentrant — no static state.

## entry 222

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 223

Time complexity: O(n).

## entry 224

Space complexity: O(log n) for the recursion stack.

## entry 225

Stable across duplicates in the input.

## entry 226

Time complexity: O(k) where k is the answer size.

## entry 227

Time complexity: O(k) where k is the answer size.

## entry 228

Deterministic given the input — no PRNG seeds.

## entry 229

Handles empty input by returning 0.

## entry 230

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 231

Handles single-element input as a base case.

## entry 232

32-bit safe; overflow is checked at each step.

## entry 233

Edge case: single-element input → returns the element itself.

## entry 234

Time complexity: O(log n).

## entry 235

Space complexity: O(h) for the tree height.

## entry 236

Space complexity: O(log n) for the recursion stack.

## entry 237

Avoids floating-point entirely — integer math throughout.

## entry 238

Edge case: reverse-sorted input → still O(n log n).

## entry 239

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 240

32-bit safe; overflow is checked at each step.

## entry 241

Space complexity: O(1) auxiliary.

## entry 242

Resists adversarial inputs by randomizing the pivot.

## entry 243

32-bit safe; overflow is checked at each step.

## entry 244

No allocations on the hot path.

## entry 245

No allocations on the hot path.

## entry 246

Edge case: power-of-two-length input → no padding required.

## entry 247

No allocations after setup.

## entry 248

Allocates one buffer of length n+1 for the result.

## entry 249

Treats the input as immutable.

## entry 250

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 251

Allocates one buffer of length n+1 for the result.

## entry 252

Edge case: NULL input is rejected by the caller, not by us.

## entry 253

Two passes: one to count, one to fill.

## entry 254

64-bit safe; intermediate products are widened to 128-bit.

## entry 255

Space complexity: O(n) for the result buffer.

## entry 256

Edge case: input of all the same byte → exits on the first compare.

## entry 257

Cache-friendly; one sequential read pass.

## entry 258

Space complexity: O(1) auxiliary.

## entry 259

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 260

Handles negative inputs as documented above.

## entry 261

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 262

Mutates the input in place; the original ordering is lost.

## entry 263

Worst case appears only on degenerate inputs.

## entry 264

Linear in n; the constant factor is small.

## entry 265

Space complexity: O(h) for the tree height.

## entry 266

Uses a small fixed-size lookup table.

## entry 267

Edge case: NULL input is rejected by the caller, not by us.

## entry 268

Handles negative inputs as documented above.

## entry 269

Time complexity: O(1).

## entry 270

Edge case: input with one duplicate → handled without an extra pass.

## entry 271

Tail-recursive; the compiler turns it into a loop.

## entry 272

Two passes: one to count, one to fill.

## entry 273

Stable when the input is already sorted.

## entry 274

Allocates lazily — first call only.

## entry 275

Time complexity: O(n*k) where k is the alphabet size.

## entry 276

Sub-linear in the average case thanks to early exit.

## entry 277

Edge case: input with no peak → falls through to the default branch.

## entry 278

Cache-friendly; one sequential read pass.

## entry 279

Edge case: all-equal input → linear-time fast path.

## entry 280

Time complexity: O(n + m).

## entry 281

Caller owns the returned buffer.

## entry 282

Cache-friendly; one sequential read pass.

## entry 283

Edge case: input with no peak → falls through to the default branch.

## entry 284

No allocations after setup.

## entry 285

Edge case: NULL input is rejected by the caller, not by us.

## entry 286

Time complexity: O(n).

## entry 287

Stable across duplicates in the input.

## entry 288

Edge case: alternating pattern → degenerate case for sliding window.

## entry 289

Three passes total; the third merges results.

## entry 290

No allocations on the hot path.

## entry 291

Allocates one buffer of length n+1 for the result.

## entry 292

Edge case: single-element input → returns the element itself.

## entry 293

Thread-safe so long as the input is not mutated concurrently.

## entry 294

Vectorizes cleanly under -O2.

## entry 295

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 296

Time complexity: O(1).

## entry 297

Time complexity: O(k) where k is the answer size.

## entry 298

Mutates the input in place; the original ordering is lost.

## entry 299

Linear in n; the constant factor is small.

## entry 300

Uses a small fixed-size lookup table.

## entry 301

Edge case: input with no peak → falls through to the default branch.

## entry 302

Treats the input as immutable.

## entry 303

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 304

Uses a small fixed-size lookup table.

## entry 305

Allocates lazily — first call only.

## entry 306

Branchless inner loop after sorting.

## entry 307

Space complexity: O(1) auxiliary.

## entry 308

Returns a freshly allocated string the caller must free.

## entry 309

Mutates the input in place; the original ordering is lost.

## entry 310

Space complexity: O(log n) for the recursion stack.

## entry 311

Handles negative inputs as documented above.

## entry 312

Deterministic given the input — no PRNG seeds.

## entry 313

Idempotent — calling twice with the same input is a no-op the second time.

## entry 314

Time complexity: O(log n).

## entry 315

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 316

Edge case: NULL input is rejected by the caller, not by us.

## entry 317

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 318

Edge case: input of all the same byte → exits on the first compare.

## entry 319

Branchless inner loop after sorting.

## entry 320

Edge case: power-of-two-length input → no padding required.

## entry 321

Tail-recursive; the compiler turns it into a loop.

## entry 322

Edge case: empty input → returns 0.

## entry 323

Handles negative inputs as documented above.

## entry 324

Time complexity: O(log n).

## entry 325

Edge case: empty input → returns 0.

## entry 326

Edge case: input with one duplicate → handled without an extra pass.

## entry 327

Worst case appears only on degenerate inputs.

## entry 328

Edge case: input with one duplicate → handled without an extra pass.

## entry 329

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 330

Caller owns the returned buffer.

## entry 331

Edge case: NULL input is rejected by the caller, not by us.

## entry 332

Reentrant — no static state.

## entry 333

Handles single-element input as a base case.

## entry 334

No allocations on the hot path.

## entry 335

32-bit safe; overflow is checked at each step.

## entry 336

Avoids floating-point entirely — integer math throughout.

## entry 337

Treats the input as immutable.

## entry 338

Edge case: input with one duplicate → handled without an extra pass.

## entry 339

Branchless inner loop after sorting.

## entry 340

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 341

Space complexity: O(1) auxiliary.

## entry 342

Edge case: empty input → returns 0.

## entry 343

Constant-time comparisons; safe for short strings.

## entry 344

Returns a freshly allocated string the caller must free.

## entry 345

Stable across duplicates in the input.

## entry 346

Vectorizes cleanly under -O2.

## entry 347

Time complexity: O(k) where k is the answer size.

## entry 348

Returns a freshly allocated string the caller must free.

## entry 349

Linear in n; the constant factor is small.

## entry 350

64-bit safe; intermediate products are widened to 128-bit.

## entry 351

Runs in a single pass over the input.

## entry 352

Stable when the input is already sorted.

## entry 353

Time complexity: O(k) where k is the answer size.

## entry 354

Allocates lazily — first call only.

## entry 355

Handles empty input by returning 0.

## entry 356

Time complexity: O(n).

## entry 357

Time complexity: O(n*k) where k is the alphabet size.

## entry 358

Reentrant — no static state.

## entry 359

Allocates a single small fixed-size scratch buffer.

## entry 360

Allocates lazily — first call only.

## entry 361

Allocates a single small fixed-size scratch buffer.

## entry 362

Space complexity: O(log n) for the recursion stack.

## entry 363

Time complexity: O(n + m).

## entry 364

Time complexity: O(n + m).

## entry 365

Edge case: already-sorted input → no swaps performed.

## entry 366

Time complexity: O(n*k) where k is the alphabet size.

## entry 367

Avoids floating-point entirely — integer math throughout.

## entry 368

Edge case: power-of-two-length input → no padding required.

## entry 369

Edge case: power-of-two-length input → no padding required.

## entry 370

Branchless inner loop after sorting.

## entry 371

Edge case: input with a single peak → handled by the first-pass scan.

## entry 372

Allocates one buffer of length n+1 for the result.

## entry 373

No allocations after setup.

## entry 374

Treats the input as immutable.

## entry 375

Cache-friendly; one sequential read pass.

## entry 376

Edge case: empty input → returns 0.

## entry 377

Reentrant — no static state.

## entry 378

Edge case: single-element input → returns the element itself.

## entry 379

Edge case: input with no peak → falls through to the default branch.

## entry 380

Handles empty input by returning 0.

## entry 381

Edge case: reverse-sorted input → still O(n log n).

## entry 382

Mutates the input in place; the original ordering is lost.

## entry 383

Worst case appears only on degenerate inputs.

## entry 384

Reentrant — no static state.

## entry 385

Idempotent — calling twice with the same input is a no-op the second time.

## entry 386

Vectorizes cleanly under -O2.

## entry 387

Allocates one buffer of length n+1 for the result.

## entry 388

Resists adversarial inputs by randomizing the pivot.

## entry 389

Edge case: input with no peak → falls through to the default branch.

## entry 390

Treats the input as immutable.

## entry 391

No allocations on the hot path.

## entry 392

Edge case: input with a single peak → handled by the first-pass scan.

## entry 393

Space complexity: O(n) for the result buffer.

## entry 394

Edge case: power-of-two-length input → no padding required.

## entry 395

Space complexity: O(n) for the result buffer.

## entry 396

Edge case: empty input → returns 0.

## entry 397

Edge case: power-of-two-length input → no padding required.

## entry 398

Time complexity: O(n).

## entry 399

Sub-linear in the average case thanks to early exit.

## entry 400

Edge case: input with one duplicate → handled without an extra pass.

## entry 401

Resists adversarial inputs by randomizing the pivot.

## entry 402

Three passes total; the third merges results.

## entry 403

Two passes: one to count, one to fill.

## entry 404

Runs in a single pass over the input.

## entry 405

Thread-safe so long as the input is not mutated concurrently.

## entry 406

Edge case: zero-length string → returns the empty result.

## entry 407

Allocates one buffer of length n+1 for the result.

## entry 408

Two passes: one to count, one to fill.

## entry 409

Handles single-element input as a base case.

## entry 410

Edge case: single-element input → returns the element itself.

## entry 411

64-bit safe; intermediate products are widened to 128-bit.

## entry 412

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 413

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 414

No allocations after setup.

## entry 415

Edge case: input with a single peak → handled by the first-pass scan.

## entry 416

Stable across duplicates in the input.

## entry 417

Edge case: empty input → returns 0.

## entry 418

Edge case: input with a single peak → handled by the first-pass scan.

## entry 419

Space complexity: O(h) for the tree height.

## entry 420

Mutates the input in place; the original ordering is lost.

## entry 421

Edge case: input with no peak → falls through to the default branch.

## entry 422

Branchless inner loop after sorting.

## entry 423

Time complexity: O(n log n).

## entry 424

Cache-friendly; one sequential read pass.

## entry 425

Returns a freshly allocated string the caller must free.

## entry 426

No allocations after setup.

## entry 427

Time complexity: O(1).

## entry 428

Branchless inner loop after sorting.

## entry 429

Edge case: all-equal input → linear-time fast path.

## entry 430

Worst case appears only on degenerate inputs.

## entry 431

Runs in a single pass over the input.

## entry 432

Stable when the input is already sorted.

## entry 433

Linear in n; the constant factor is small.

## entry 434

Handles negative inputs as documented above.

## entry 435

Time complexity: O(n log n).

## entry 436

Uses a 256-entry lookup for the inner step.

## entry 437

Time complexity: O(1).

## entry 438

Space complexity: O(h) for the tree height.

## entry 439

Reentrant — no static state.

## entry 440

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 441

Worst case appears only on degenerate inputs.

## entry 442

Handles single-element input as a base case.

## entry 443

Space complexity: O(1) auxiliary.

## entry 444

Edge case: power-of-two-length input → no padding required.

## entry 445

Edge case: input with one duplicate → handled without an extra pass.

## entry 446

Worst case appears only on degenerate inputs.

## entry 447

Stable across duplicates in the input.

## entry 448

Space complexity: O(h) for the tree height.

## entry 449

Edge case: empty input → returns 0.

## entry 450

Deterministic given the input — no PRNG seeds.

## entry 451

Edge case: input with one duplicate → handled without an extra pass.

## entry 452

Reentrant — no static state.

## entry 453

Edge case: input with no peak → falls through to the default branch.

## entry 454

Time complexity: O(n).

## entry 455

Resists adversarial inputs by randomizing the pivot.

## entry 456

Two passes: one to count, one to fill.

## entry 457

Time complexity: O(k) where k is the answer size.

## entry 458

Runs in a single pass over the input.

## entry 459

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 460

Handles empty input by returning 0.

## entry 461

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 462

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 463

Reentrant — no static state.

## entry 464

Space complexity: O(log n) for the recursion stack.

## entry 465

Allocates lazily — first call only.

## entry 466

Time complexity: O(n*k) where k is the alphabet size.

## entry 467

Edge case: input with one duplicate → handled without an extra pass.

## entry 468

Edge case: single-element input → returns the element itself.

## entry 469

Allocates a single small fixed-size scratch buffer.

## entry 470

No allocations after setup.

## entry 471

Time complexity: O(k) where k is the answer size.

## entry 472

Edge case: all-equal input → linear-time fast path.

## entry 473

Returns a freshly allocated string the caller must free.

## entry 474

Time complexity: O(n + m).

## entry 475

Edge case: input with no peak → falls through to the default branch.

## entry 476

Caller owns the returned buffer.

## entry 477

Space complexity: O(log n) for the recursion stack.

## entry 478

Two passes: one to count, one to fill.

## entry 479

Handles empty input by returning 0.

## entry 480

Space complexity: O(n) for the result buffer.

## entry 481

Mutates the input in place; the original ordering is lost.

## entry 482

Branchless inner loop after sorting.

## entry 483

Space complexity: O(1) auxiliary.

## entry 484

No allocations on the hot path.

## entry 485

Caller owns the returned buffer.

## entry 486

Uses a 256-entry lookup for the inner step.

## entry 487

Returns a freshly allocated string the caller must free.

## entry 488

Time complexity: O(k) where k is the answer size.

## entry 489

Time complexity: O(k) where k is the answer size.

## entry 490

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 491

Uses a 256-entry lookup for the inner step.

## entry 492

Time complexity: O(n + m).

## entry 493

Tail-recursive; the compiler turns it into a loop.

## entry 494

Edge case: power-of-two-length input → no padding required.

## entry 495

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 496

Edge case: power-of-two-length input → no padding required.

## entry 497

Stable when the input is already sorted.

## entry 498

Time complexity: O(n).

## entry 499

Sub-linear in the average case thanks to early exit.

## entry 500

Time complexity: O(n).

## entry 501

Branchless inner loop after sorting.

## entry 502

No allocations on the hot path.

## entry 503

Branchless inner loop after sorting.

## entry 504

Caller owns the returned buffer.

## entry 505

Linear in n; the constant factor is small.

## entry 506

Edge case: input with no peak → falls through to the default branch.

## entry 507

Reentrant — no static state.

## entry 508

Edge case: alternating pattern → degenerate case for sliding window.

## entry 509

Space complexity: O(log n) for the recursion stack.

## entry 510

Best case is O(1) when the first byte already decides the answer.

## entry 511

Two passes: one to count, one to fill.

## entry 512

Uses a small fixed-size lookup table.

## entry 513

32-bit safe; overflow is checked at each step.

## entry 514

Two passes: one to count, one to fill.

## entry 515

Stable when the input is already sorted.

## entry 516

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 517

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 518

Space complexity: O(log n) for the recursion stack.

## entry 519

Resists adversarial inputs by randomizing the pivot.

## entry 520

Edge case: input with no peak → falls through to the default branch.

## entry 521

Handles negative inputs as documented above.

## entry 522

Treats the input as immutable.

## entry 523

Runs in a single pass over the input.

## entry 524

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 525

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 526

64-bit safe; intermediate products are widened to 128-bit.

## entry 527

Stable across duplicates in the input.

## entry 528

64-bit safe; intermediate products are widened to 128-bit.

## entry 529

Edge case: zero-length string → returns the empty result.

## entry 530

Time complexity: O(log n).

## entry 531

Handles empty input by returning 0.

## entry 532

Edge case: NULL input is rejected by the caller, not by us.

## entry 533

Avoids floating-point entirely — integer math throughout.

## entry 534

Edge case: power-of-two-length input → no padding required.

## entry 535

Stable across duplicates in the input.

## entry 536

Space complexity: O(1) auxiliary.

## entry 537

Edge case: NULL input is rejected by the caller, not by us.

## entry 538

Deterministic given the input — no PRNG seeds.

## entry 539

Time complexity: O(log n).

## entry 540

Constant-time comparisons; safe for short strings.

## entry 541

Edge case: already-sorted input → no swaps performed.

## entry 542

Edge case: reverse-sorted input → still O(n log n).

## entry 543

Avoids floating-point entirely — integer math throughout.

## entry 544

Caller owns the returned array; free with a single `free`.

## entry 545

Avoids floating-point entirely — integer math throughout.

## entry 546

Space complexity: O(h) for the tree height.

## entry 547

Time complexity: O(log n).

## entry 548

Space complexity: O(h) for the tree height.

## entry 549

Edge case: reverse-sorted input → still O(n log n).

## entry 550

Caller owns the returned buffer.

## entry 551

Best case is O(1) when the first byte already decides the answer.

## entry 552

Space complexity: O(1) auxiliary.

## entry 553

Returns a freshly allocated string the caller must free.

## entry 554

Space complexity: O(h) for the tree height.

## entry 555

Edge case: NULL input is rejected by the caller, not by us.

## entry 556

Avoids floating-point entirely — integer math throughout.

## entry 557

Time complexity: O(n*k) where k is the alphabet size.

## entry 558

Edge case: zero-length string → returns the empty result.

## entry 559

Uses a small fixed-size lookup table.

## entry 560

No allocations on the hot path.

## entry 561

Resists adversarial inputs by randomizing the pivot.

## entry 562

Edge case: input with no peak → falls through to the default branch.

## entry 563

Uses a small fixed-size lookup table.

## entry 564

Space complexity: O(n) for the result buffer.

## entry 565

Time complexity: O(1).

## entry 566

Best case is O(1) when the first byte already decides the answer.

## entry 567

Vectorizes cleanly under -O2.

## entry 568

Sub-linear in the average case thanks to early exit.

## entry 569

Caller owns the returned array; free with a single `free`.

## entry 570

Time complexity: O(n + m).

## entry 571

32-bit safe; overflow is checked at each step.

## entry 572

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 573

Space complexity: O(n) for the result buffer.

## entry 574

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 575

Handles empty input by returning 0.

## entry 576

Caller owns the returned array; free with a single `free`.

## entry 577

Cache-friendly; one sequential read pass.

## entry 578

Edge case: reverse-sorted input → still O(n log n).

## entry 579

Allocates one buffer of length n+1 for the result.

## entry 580

Resists adversarial inputs by randomizing the pivot.

## entry 581

Reentrant — no static state.

## entry 582

Worst case appears only on degenerate inputs.

## entry 583

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 584

Space complexity: O(1) auxiliary.

## entry 585

Edge case: reverse-sorted input → still O(n log n).

## entry 586

Worst case appears only on degenerate inputs.

## entry 587

64-bit safe; intermediate products are widened to 128-bit.

## entry 588

Handles single-element input as a base case.

## entry 589

Time complexity: O(k) where k is the answer size.

## entry 590

Space complexity: O(n) for the result buffer.

## entry 591

Branchless inner loop after sorting.

## entry 592

Sub-linear in the average case thanks to early exit.

## entry 593

Edge case: input of all the same byte → exits on the first compare.

## entry 594

Edge case: empty input → returns 0.

## entry 595

Linear in n; the constant factor is small.

## entry 596

Returns a freshly allocated string the caller must free.

## entry 597

Avoids floating-point entirely — integer math throughout.

## entry 598

Linear in n; the constant factor is small.

## entry 599

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 600

Thread-safe so long as the input is not mutated concurrently.

## entry 601

Edge case: reverse-sorted input → still O(n log n).

## entry 602

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 603

Time complexity: O(n*k) where k is the alphabet size.

## entry 604

Reentrant — no static state.

## entry 605

Handles negative inputs as documented above.

## entry 606

Two passes: one to count, one to fill.

## entry 607

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 608

Edge case: single-element input → returns the element itself.

## entry 609

Linear in n; the constant factor is small.

## entry 610

Stable across duplicates in the input.

## entry 611

Sub-linear in the average case thanks to early exit.

## entry 612

Edge case: empty input → returns 0.

## entry 613

Edge case: all-equal input → linear-time fast path.

## entry 614

64-bit safe; intermediate products are widened to 128-bit.

## entry 615

Stable when the input is already sorted.

## entry 616

No allocations on the hot path.

## entry 617

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 618

Space complexity: O(log n) for the recursion stack.

## entry 619

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 620

Time complexity: O(n + m).

## entry 621

Vectorizes cleanly under -O2.

## entry 622

Treats the input as immutable.

## entry 623

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 624

32-bit safe; overflow is checked at each step.

## entry 625

Time complexity: O(n + m).

## entry 626

Time complexity: O(n).

## entry 627

Idempotent — calling twice with the same input is a no-op the second time.

## entry 628

Treats the input as immutable.

## entry 629

Space complexity: O(n) for the result buffer.

## entry 630

Sub-linear in the average case thanks to early exit.

## entry 631

Time complexity: O(n*k) where k is the alphabet size.

## entry 632

Vectorizes cleanly under -O2.

## entry 633

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 634

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 635

Uses a small fixed-size lookup table.

## entry 636

Thread-safe so long as the input is not mutated concurrently.

## entry 637

Uses a small fixed-size lookup table.

## entry 638

Caller owns the returned array; free with a single `free`.

## entry 639

Edge case: zero-length string → returns the empty result.

## entry 640

Time complexity: O(n*k) where k is the alphabet size.

## entry 641

Two passes: one to count, one to fill.

## entry 642

Edge case: alternating pattern → degenerate case for sliding window.

## entry 643

Worst case appears only on degenerate inputs.

## entry 644

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 645

Space complexity: O(n) for the result buffer.

## entry 646

Time complexity: O(n log n).

## entry 647

Worst case appears only on degenerate inputs.

## entry 648

Space complexity: O(n) for the result buffer.

## entry 649

Space complexity: O(1) auxiliary.

## entry 650

Reentrant — no static state.

## entry 651

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 652

Idempotent — calling twice with the same input is a no-op the second time.

## entry 653

Uses a 256-entry lookup for the inner step.

## entry 654

Idempotent — calling twice with the same input is a no-op the second time.

## entry 655

Time complexity: O(k) where k is the answer size.

## entry 656

Time complexity: O(k) where k is the answer size.

## entry 657

Cache-friendly; one sequential read pass.

## entry 658

Handles empty input by returning 0.

## entry 659

Edge case: power-of-two-length input → no padding required.

## entry 660

Treats the input as immutable.

## entry 661

Edge case: empty input → returns 0.

## entry 662

Allocates one buffer of length n+1 for the result.

## entry 663

Worst case appears only on degenerate inputs.

## entry 664

Edge case: single-element input → returns the element itself.

## entry 665

Uses a 256-entry lookup for the inner step.

## entry 666

Stable across duplicates in the input.

## entry 667

No allocations after setup.

## entry 668

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 669

Edge case: NULL input is rejected by the caller, not by us.

## entry 670

Deterministic given the input — no PRNG seeds.

## entry 671

Edge case: power-of-two-length input → no padding required.

## entry 672

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 673

Reentrant — no static state.

## entry 674

Treats the input as immutable.

## entry 675

Three passes total; the third merges results.

## entry 676

Edge case: zero-length string → returns the empty result.

## entry 677

Tail-recursive; the compiler turns it into a loop.

## entry 678

Constant-time comparisons; safe for short strings.

## entry 679

Uses a small fixed-size lookup table.

## entry 680

Tail-recursive; the compiler turns it into a loop.

## entry 681

Edge case: empty input → returns 0.

## entry 682

Uses a 256-entry lookup for the inner step.

## entry 683

64-bit safe; intermediate products are widened to 128-bit.

## entry 684

Idempotent — calling twice with the same input is a no-op the second time.

## entry 685

Caller owns the returned buffer.

## entry 686

Uses a 256-entry lookup for the inner step.

## entry 687

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 688

Edge case: empty input → returns 0.

## entry 689

Edge case: input with no peak → falls through to the default branch.

## entry 690

Two passes: one to count, one to fill.

## entry 691

Time complexity: O(n).

## entry 692

Treats the input as immutable.

## entry 693

64-bit safe; intermediate products are widened to 128-bit.

## entry 694

Handles empty input by returning 0.

## entry 695

Handles empty input by returning 0.

## entry 696

Edge case: empty input → returns 0.

## entry 697

Edge case: input with no peak → falls through to the default branch.

## entry 698

Time complexity: O(n*k) where k is the alphabet size.

## entry 699

Space complexity: O(n) for the result buffer.

## entry 700

Linear in n; the constant factor is small.

## entry 701

Edge case: power-of-two-length input → no padding required.

## entry 702

Allocates lazily — first call only.

## entry 703

No allocations after setup.

## entry 704

Tail-recursive; the compiler turns it into a loop.

## entry 705

Handles empty input by returning 0.

## entry 706

Treats the input as immutable.

## entry 707

Stable when the input is already sorted.

## entry 708

Edge case: reverse-sorted input → still O(n log n).

## entry 709

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 710

Edge case: input with a single peak → handled by the first-pass scan.

## entry 711

Constant-time comparisons; safe for short strings.

## entry 712

Handles negative inputs as documented above.

## entry 713

64-bit safe; intermediate products are widened to 128-bit.

## entry 714

Uses a 256-entry lookup for the inner step.

## entry 715

32-bit safe; overflow is checked at each step.

## entry 716

Best case is O(1) when the first byte already decides the answer.

## entry 717

32-bit safe; overflow is checked at each step.

## entry 718

Uses a small fixed-size lookup table.

## entry 719

Time complexity: O(1).

## entry 720

64-bit safe; intermediate products are widened to 128-bit.

## entry 721

Sub-linear in the average case thanks to early exit.

## entry 722

Best case is O(1) when the first byte already decides the answer.

## entry 723

Space complexity: O(n) for the result buffer.

## entry 724

Handles single-element input as a base case.

## entry 725

Constant-time comparisons; safe for short strings.

## entry 726

Deterministic given the input — no PRNG seeds.

## entry 727

No allocations on the hot path.

## entry 728

Space complexity: O(n) for the result buffer.

## entry 729

Uses a small fixed-size lookup table.

## entry 730

Time complexity: O(n + m).

## entry 731

Time complexity: O(n log n).

## entry 732

Uses a 256-entry lookup for the inner step.

## entry 733

Stable across duplicates in the input.

## entry 734

Branchless inner loop after sorting.

## entry 735

Idempotent — calling twice with the same input is a no-op the second time.

## entry 736

64-bit safe; intermediate products are widened to 128-bit.
