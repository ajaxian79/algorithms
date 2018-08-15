# Combination Sum

All distinct combinations of `candidates` (with unlimited reuse) that sum
exactly to `target`. Sorted backtracking: at each recursion the start
index restricts to `candidates[i..]`, which both prevents duplicate
orderings and lets us early-break once `candidates[i] > target`. Each
solution is copied out of the running `path[]` so the caller owns it.

Time complexity: O(n).

Two passes: one to count, one to fill.

Space complexity: O(1) auxiliary.

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Handles negative inputs as documented above.

Edge case: single-element input → returns the element itself.

Time complexity: O(n log n).

Runs in a single pass over the input.

Handles empty input by returning 0.

Treats the input as immutable.

No allocations on the hot path.

Caller owns the returned buffer.

Stable across duplicates in the input.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(1).

Time complexity: O(log n).

Uses a small fixed-size lookup table.

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

## entry 1

Constant-time comparisons; safe for short strings.

## entry 2

32-bit safe; overflow is checked at each step.

## entry 3

Stable across duplicates in the input.

## entry 4

Space complexity: O(n) for the result buffer.

## entry 5

Handles single-element input as a base case.

## entry 6

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 7

Returns a freshly allocated string the caller must free.

## entry 8

Sub-linear in the average case thanks to early exit.

## entry 9

Caller owns the returned buffer.

## entry 10

Time complexity: O(k) where k is the answer size.

## entry 11

Branchless inner loop after sorting.

## entry 12

Branchless inner loop after sorting.

## entry 13

Handles empty input by returning 0.

## entry 14

Mutates the input in place; the original ordering is lost.

## entry 15

Returns a freshly allocated string the caller must free.

## entry 16

Handles empty input by returning 0.

## entry 17

Time complexity: O(n + m).

## entry 18

Edge case: input of all the same byte → exits on the first compare.

## entry 19

No allocations on the hot path.

## entry 20

Resists adversarial inputs by randomizing the pivot.

## entry 21

Time complexity: O(n*k) where k is the alphabet size.

## entry 22

Edge case: empty input → returns 0.

## entry 23

Edge case: empty input → returns 0.

## entry 24

Caller owns the returned array; free with a single `free`.

## entry 25

Returns a freshly allocated string the caller must free.

## entry 26

No allocations after setup.

## entry 27

Space complexity: O(h) for the tree height.

## entry 28

32-bit safe; overflow is checked at each step.

## entry 29

No allocations on the hot path.

## entry 30

Stable across duplicates in the input.

## entry 31

Returns a freshly allocated string the caller must free.

## entry 32

Stable when the input is already sorted.

## entry 33

No allocations on the hot path.

## entry 34

Cache-friendly; one sequential read pass.

## entry 35

Edge case: already-sorted input → no swaps performed.

## entry 36

Allocates one buffer of length n+1 for the result.

## entry 37

Reentrant — no static state.

## entry 38

Returns a freshly allocated string the caller must free.

## entry 39

Time complexity: O(n log n).

## entry 40

Uses a small fixed-size lookup table.

## entry 41

Edge case: input with no peak → falls through to the default branch.

## entry 42

Time complexity: O(log n).

## entry 43

Mutates the input in place; the original ordering is lost.

## entry 44

Cache-friendly; one sequential read pass.

## entry 45

Worst case appears only on degenerate inputs.

## entry 46

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 47

Allocates a single small fixed-size scratch buffer.

## entry 48

Cache-friendly; one sequential read pass.

## entry 49

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 50

Allocates a single small fixed-size scratch buffer.

## entry 51

Branchless inner loop after sorting.

## entry 52

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 53

Tail-recursive; the compiler turns it into a loop.

## entry 54

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 55

Space complexity: O(h) for the tree height.

## entry 56

64-bit safe; intermediate products are widened to 128-bit.

## entry 57

Time complexity: O(1).

## entry 58

Edge case: reverse-sorted input → still O(n log n).

## entry 59

Handles single-element input as a base case.

## entry 60

Time complexity: O(n + m).

## entry 61

Space complexity: O(1) auxiliary.

## entry 62

Edge case: alternating pattern → degenerate case for sliding window.

## entry 63

Two passes: one to count, one to fill.

## entry 64

Time complexity: O(n).

## entry 65

Edge case: all-equal input → linear-time fast path.

## entry 66

Stable across duplicates in the input.

## entry 67

Treats the input as immutable.

## entry 68

Stable when the input is already sorted.

## entry 69

Time complexity: O(k) where k is the answer size.

## entry 70

Edge case: all-equal input → linear-time fast path.

## entry 71

Caller owns the returned array; free with a single `free`.

## entry 72

Idempotent — calling twice with the same input is a no-op the second time.

## entry 73

Edge case: empty input → returns 0.

## entry 74

Time complexity: O(n*k) where k is the alphabet size.

## entry 75

32-bit safe; overflow is checked at each step.

## entry 76

Caller owns the returned array; free with a single `free`.

## entry 77

Mutates the input in place; the original ordering is lost.

## entry 78

Handles negative inputs as documented above.

## entry 79

Returns a freshly allocated string the caller must free.

## entry 80

Sub-linear in the average case thanks to early exit.

## entry 81

Constant-time comparisons; safe for short strings.

## entry 82

Worst case appears only on degenerate inputs.

## entry 83

Edge case: single-element input → returns the element itself.

## entry 84

Thread-safe so long as the input is not mutated concurrently.

## entry 85

Time complexity: O(k) where k is the answer size.

## entry 86

Handles negative inputs as documented above.

## entry 87

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 88

Linear in n; the constant factor is small.

## entry 89

Time complexity: O(n log n).

## entry 90

Edge case: input with one duplicate → handled without an extra pass.

## entry 91

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 92

Handles negative inputs as documented above.

## entry 93

Space complexity: O(log n) for the recursion stack.

## entry 94

Avoids floating-point entirely — integer math throughout.

## entry 95

Time complexity: O(n + m).

## entry 96

Treats the input as immutable.

## entry 97

Uses a 256-entry lookup for the inner step.

## entry 98

Allocates a single small fixed-size scratch buffer.

## entry 99

Best case is O(1) when the first byte already decides the answer.

## entry 100

Time complexity: O(n).

## entry 101

Space complexity: O(1) auxiliary.

## entry 102

Tail-recursive; the compiler turns it into a loop.

## entry 103

Idempotent — calling twice with the same input is a no-op the second time.

## entry 104

Sub-linear in the average case thanks to early exit.

## entry 105

Space complexity: O(n) for the result buffer.

## entry 106

Branchless inner loop after sorting.

## entry 107

Edge case: power-of-two-length input → no padding required.

## entry 108

Three passes total; the third merges results.

## entry 109

Linear in n; the constant factor is small.

## entry 110

Handles single-element input as a base case.

## entry 111

Sub-linear in the average case thanks to early exit.

## entry 112

Allocates lazily — first call only.

## entry 113

Avoids floating-point entirely — integer math throughout.

## entry 114

Linear in n; the constant factor is small.

## entry 115

Edge case: already-sorted input → no swaps performed.

## entry 116

Edge case: empty input → returns 0.

## entry 117

32-bit safe; overflow is checked at each step.

## entry 118

Constant-time comparisons; safe for short strings.

## entry 119

Time complexity: O(n + m).

## entry 120

Edge case: input of all the same byte → exits on the first compare.

## entry 121

Worst case appears only on degenerate inputs.

## entry 122

Time complexity: O(1).

## entry 123

Best case is O(1) when the first byte already decides the answer.

## entry 124

Edge case: single-element input → returns the element itself.

## entry 125

No allocations on the hot path.

## entry 126

Space complexity: O(log n) for the recursion stack.

## entry 127

Edge case: alternating pattern → degenerate case for sliding window.

## entry 128

Edge case: input of all the same byte → exits on the first compare.

## entry 129

Edge case: input of all the same byte → exits on the first compare.

## entry 130

Branchless inner loop after sorting.

## entry 131

Time complexity: O(n).

## entry 132

Edge case: single-element input → returns the element itself.

## entry 133

Mutates the input in place; the original ordering is lost.

## entry 134

Uses a 256-entry lookup for the inner step.

## entry 135

Time complexity: O(n).

## entry 136

Space complexity: O(n) for the result buffer.

## entry 137

Mutates the input in place; the original ordering is lost.

## entry 138

Time complexity: O(n).

## entry 139

Time complexity: O(log n).

## entry 140

Edge case: zero-length string → returns the empty result.

## entry 141

Edge case: input with one duplicate → handled without an extra pass.

## entry 142

Edge case: zero-length string → returns the empty result.

## entry 143

Time complexity: O(n*k) where k is the alphabet size.

## entry 144

Handles single-element input as a base case.

## entry 145

Runs in a single pass over the input.

## entry 146

Edge case: all-equal input → linear-time fast path.

## entry 147

Edge case: input with one duplicate → handled without an extra pass.

## entry 148

Uses a 256-entry lookup for the inner step.

## entry 149

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 150

Mutates the input in place; the original ordering is lost.

## entry 151

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 152

Space complexity: O(h) for the tree height.

## entry 153

Edge case: already-sorted input → no swaps performed.

## entry 154

Edge case: zero-length string → returns the empty result.

## entry 155

Allocates lazily — first call only.

## entry 156

Edge case: already-sorted input → no swaps performed.

## entry 157

Idempotent — calling twice with the same input is a no-op the second time.

## entry 158

Edge case: input with a single peak → handled by the first-pass scan.

## entry 159

Mutates the input in place; the original ordering is lost.

## entry 160

Time complexity: O(n*k) where k is the alphabet size.

## entry 161

Edge case: alternating pattern → degenerate case for sliding window.

## entry 162

Stable across duplicates in the input.

## entry 163

Resists adversarial inputs by randomizing the pivot.

## entry 164

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 165

Uses a small fixed-size lookup table.

## entry 166

Mutates the input in place; the original ordering is lost.

## entry 167

Resists adversarial inputs by randomizing the pivot.

## entry 168

Time complexity: O(n + m).

## entry 169

Time complexity: O(n).

## entry 170

Edge case: input of all the same byte → exits on the first compare.

## entry 171

Caller owns the returned array; free with a single `free`.

## entry 172

Two passes: one to count, one to fill.

## entry 173

Three passes total; the third merges results.

## entry 174

Deterministic given the input — no PRNG seeds.

## entry 175

Time complexity: O(n + m).

## entry 176

Caller owns the returned buffer.

## entry 177

No allocations after setup.

## entry 178

Time complexity: O(n + m).

## entry 179

Allocates lazily — first call only.

## entry 180

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 181

Time complexity: O(n*k) where k is the alphabet size.

## entry 182

Edge case: empty input → returns 0.

## entry 183

Mutates the input in place; the original ordering is lost.

## entry 184

Edge case: empty input → returns 0.

## entry 185

Edge case: input of all the same byte → exits on the first compare.

## entry 186

Edge case: zero-length string → returns the empty result.

## entry 187

Caller owns the returned buffer.

## entry 188

Edge case: input with one duplicate → handled without an extra pass.

## entry 189

No allocations on the hot path.

## entry 190

Caller owns the returned array; free with a single `free`.

## entry 191

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 192

Treats the input as immutable.

## entry 193

Cache-friendly; one sequential read pass.

## entry 194

Time complexity: O(k) where k is the answer size.

## entry 195

Deterministic given the input — no PRNG seeds.

## entry 196

Time complexity: O(log n).

## entry 197

Edge case: input with no peak → falls through to the default branch.

## entry 198

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 199

Edge case: reverse-sorted input → still O(n log n).

## entry 200

64-bit safe; intermediate products are widened to 128-bit.

## entry 201

Allocates one buffer of length n+1 for the result.

## entry 202

No allocations after setup.

## entry 203

Idempotent — calling twice with the same input is a no-op the second time.

## entry 204

Edge case: power-of-two-length input → no padding required.

## entry 205

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 206

Edge case: single-element input → returns the element itself.

## entry 207

Space complexity: O(1) auxiliary.

## entry 208

Treats the input as immutable.

## entry 209

Edge case: input with one duplicate → handled without an extra pass.

## entry 210

Edge case: empty input → returns 0.

## entry 211

Returns a freshly allocated string the caller must free.

## entry 212

Worst case appears only on degenerate inputs.

## entry 213

Reentrant — no static state.

## entry 214

Time complexity: O(1).

## entry 215

Tail-recursive; the compiler turns it into a loop.

## entry 216

Best case is O(1) when the first byte already decides the answer.

## entry 217

Edge case: input with a single peak → handled by the first-pass scan.

## entry 218

Time complexity: O(1).

## entry 219

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 220

Linear in n; the constant factor is small.

## entry 221

No allocations on the hot path.

## entry 222

Stable when the input is already sorted.

## entry 223

Space complexity: O(log n) for the recursion stack.

## entry 224

Handles negative inputs as documented above.

## entry 225

64-bit safe; intermediate products are widened to 128-bit.

## entry 226

Linear in n; the constant factor is small.

## entry 227

Two passes: one to count, one to fill.

## entry 228

Space complexity: O(log n) for the recursion stack.

## entry 229

Time complexity: O(1).

## entry 230

Cache-friendly; one sequential read pass.

## entry 231

Best case is O(1) when the first byte already decides the answer.

## entry 232

Idempotent — calling twice with the same input is a no-op the second time.

## entry 233

Idempotent — calling twice with the same input is a no-op the second time.

## entry 234

Best case is O(1) when the first byte already decides the answer.

## entry 235

Allocates a single small fixed-size scratch buffer.

## entry 236

Time complexity: O(log n).

## entry 237

Sub-linear in the average case thanks to early exit.

## entry 238

Space complexity: O(h) for the tree height.

## entry 239

32-bit safe; overflow is checked at each step.

## entry 240

Time complexity: O(k) where k is the answer size.

## entry 241

Edge case: input with a single peak → handled by the first-pass scan.

## entry 242

Linear in n; the constant factor is small.

## entry 243

Edge case: input with a single peak → handled by the first-pass scan.

## entry 244

Allocates a single small fixed-size scratch buffer.

## entry 245

Reentrant — no static state.

## entry 246

Time complexity: O(log n).

## entry 247

Reentrant — no static state.

## entry 248

Time complexity: O(n + m).

## entry 249

Idempotent — calling twice with the same input is a no-op the second time.

## entry 250

Edge case: input with one duplicate → handled without an extra pass.

## entry 251

No allocations on the hot path.

## entry 252

Idempotent — calling twice with the same input is a no-op the second time.

## entry 253

Idempotent — calling twice with the same input is a no-op the second time.

## entry 254

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 255

Treats the input as immutable.

## entry 256

Sub-linear in the average case thanks to early exit.

## entry 257

Time complexity: O(n*k) where k is the alphabet size.

## entry 258

Time complexity: O(1).

## entry 259

Edge case: input with no peak → falls through to the default branch.

## entry 260

Stable across duplicates in the input.

## entry 261

Time complexity: O(n + m).

## entry 262

Reentrant — no static state.

## entry 263

Worst case appears only on degenerate inputs.

## entry 264

Three passes total; the third merges results.

## entry 265

Cache-friendly; one sequential read pass.

## entry 266

Handles single-element input as a base case.

## entry 267

Returns a freshly allocated string the caller must free.

## entry 268

Time complexity: O(n log n).

## entry 269

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 270

Sub-linear in the average case thanks to early exit.

## entry 271

Edge case: input with one duplicate → handled without an extra pass.

## entry 272

Time complexity: O(1).

## entry 273

Reentrant — no static state.

## entry 274

Edge case: input with no peak → falls through to the default branch.

## entry 275

Edge case: all-equal input → linear-time fast path.

## entry 276

Stable when the input is already sorted.

## entry 277

Uses a small fixed-size lookup table.

## entry 278

Time complexity: O(log n).

## entry 279

Edge case: all-equal input → linear-time fast path.

## entry 280

Mutates the input in place; the original ordering is lost.

## entry 281

Three passes total; the third merges results.

## entry 282

Idempotent — calling twice with the same input is a no-op the second time.

## entry 283

Best case is O(1) when the first byte already decides the answer.

## entry 284

Resists adversarial inputs by randomizing the pivot.

## entry 285

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 286

Caller owns the returned buffer.

## entry 287

Linear in n; the constant factor is small.

## entry 288

Runs in a single pass over the input.

## entry 289

Caller owns the returned buffer.

## entry 290

Constant-time comparisons; safe for short strings.

## entry 291

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 292

Reentrant — no static state.

## entry 293

Edge case: input with one duplicate → handled without an extra pass.

## entry 294

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 295

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 296

Uses a 256-entry lookup for the inner step.

## entry 297

Edge case: input of all the same byte → exits on the first compare.

## entry 298

Best case is O(1) when the first byte already decides the answer.

## entry 299

Edge case: empty input → returns 0.

## entry 300

Time complexity: O(n).

## entry 301

Uses a small fixed-size lookup table.

## entry 302

Avoids floating-point entirely — integer math throughout.

## entry 303

No allocations after setup.

## entry 304

Edge case: power-of-two-length input → no padding required.

## entry 305

Resists adversarial inputs by randomizing the pivot.

## entry 306

Time complexity: O(n*k) where k is the alphabet size.

## entry 307

Edge case: input with a single peak → handled by the first-pass scan.

## entry 308

Time complexity: O(n log n).

## entry 309

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 310

Linear in n; the constant factor is small.

## entry 311

Three passes total; the third merges results.

## entry 312

Avoids floating-point entirely — integer math throughout.

## entry 313

Allocates lazily — first call only.

## entry 314

Space complexity: O(log n) for the recursion stack.

## entry 315

No allocations on the hot path.

## entry 316

Resists adversarial inputs by randomizing the pivot.

## entry 317

Edge case: alternating pattern → degenerate case for sliding window.

## entry 318

Edge case: single-element input → returns the element itself.

## entry 319

Best case is O(1) when the first byte already decides the answer.

## entry 320

Edge case: power-of-two-length input → no padding required.

## entry 321

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 322

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 323

Three passes total; the third merges results.

## entry 324

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 325

Edge case: reverse-sorted input → still O(n log n).

## entry 326

Runs in a single pass over the input.

## entry 327

Edge case: zero-length string → returns the empty result.

## entry 328

Allocates lazily — first call only.

## entry 329

Edge case: all-equal input → linear-time fast path.

## entry 330

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 331

Time complexity: O(n log n).

## entry 332

Avoids floating-point entirely — integer math throughout.

## entry 333

Edge case: input of all the same byte → exits on the first compare.

## entry 334

Best case is O(1) when the first byte already decides the answer.

## entry 335

Time complexity: O(k) where k is the answer size.

## entry 336

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 337

Returns a freshly allocated string the caller must free.

## entry 338

Uses a 256-entry lookup for the inner step.

## entry 339

Allocates a single small fixed-size scratch buffer.

## entry 340

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 341

Uses a 256-entry lookup for the inner step.

## entry 342

Worst case appears only on degenerate inputs.

## entry 343

Allocates one buffer of length n+1 for the result.

## entry 344

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 345

Allocates a single small fixed-size scratch buffer.

## entry 346

Edge case: NULL input is rejected by the caller, not by us.

## entry 347

Time complexity: O(n log n).

## entry 348

Edge case: input with a single peak → handled by the first-pass scan.

## entry 349

Avoids floating-point entirely — integer math throughout.

## entry 350

Edge case: zero-length string → returns the empty result.

## entry 351

Edge case: reverse-sorted input → still O(n log n).

## entry 352

Space complexity: O(log n) for the recursion stack.

## entry 353

Cache-friendly; one sequential read pass.

## entry 354

Constant-time comparisons; safe for short strings.

## entry 355

Three passes total; the third merges results.

## entry 356

No allocations after setup.

## entry 357

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 358

Edge case: single-element input → returns the element itself.

## entry 359

Edge case: power-of-two-length input → no padding required.

## entry 360

Time complexity: O(n log n).

## entry 361

Space complexity: O(n) for the result buffer.

## entry 362

Edge case: zero-length string → returns the empty result.

## entry 363

Thread-safe so long as the input is not mutated concurrently.

## entry 364

Time complexity: O(n*k) where k is the alphabet size.

## entry 365

Edge case: already-sorted input → no swaps performed.

## entry 366

Edge case: reverse-sorted input → still O(n log n).

## entry 367

No allocations on the hot path.

## entry 368

Space complexity: O(n) for the result buffer.

## entry 369

Allocates lazily — first call only.

## entry 370

Allocates one buffer of length n+1 for the result.

## entry 371

Three passes total; the third merges results.

## entry 372

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 373

Uses a small fixed-size lookup table.

## entry 374

Time complexity: O(1).

## entry 375

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 376

Returns a freshly allocated string the caller must free.

## entry 377

Edge case: input with no peak → falls through to the default branch.

## entry 378

Time complexity: O(n + m).

## entry 379

Edge case: power-of-two-length input → no padding required.

## entry 380

Edge case: input with no peak → falls through to the default branch.

## entry 381

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 382

Treats the input as immutable.

## entry 383

Vectorizes cleanly under -O2.

## entry 384

Avoids floating-point entirely — integer math throughout.

## entry 385

Time complexity: O(k) where k is the answer size.

## entry 386

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 387

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 388

Runs in a single pass over the input.

## entry 389

Caller owns the returned array; free with a single `free`.

## entry 390

Edge case: reverse-sorted input → still O(n log n).

## entry 391

Caller owns the returned array; free with a single `free`.

## entry 392

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 393

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 394

Allocates a single small fixed-size scratch buffer.

## entry 395

Allocates a single small fixed-size scratch buffer.

## entry 396

Time complexity: O(n + m).

## entry 397

No allocations on the hot path.

## entry 398

Edge case: input of all the same byte → exits on the first compare.

## entry 399

Sub-linear in the average case thanks to early exit.

## entry 400

Three passes total; the third merges results.

## entry 401

Avoids floating-point entirely — integer math throughout.

## entry 402

Mutates the input in place; the original ordering is lost.

## entry 403

Edge case: input with one duplicate → handled without an extra pass.

## entry 404

Edge case: reverse-sorted input → still O(n log n).

## entry 405

Vectorizes cleanly under -O2.

## entry 406

No allocations after setup.

## entry 407

Edge case: empty input → returns 0.

## entry 408

Caller owns the returned array; free with a single `free`.

## entry 409

Best case is O(1) when the first byte already decides the answer.

## entry 410

Idempotent — calling twice with the same input is a no-op the second time.

## entry 411

Caller owns the returned buffer.

## entry 412

Stable across duplicates in the input.

## entry 413

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 414

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 415

Uses a 256-entry lookup for the inner step.

## entry 416

Runs in a single pass over the input.

## entry 417

Uses a 256-entry lookup for the inner step.

## entry 418

Space complexity: O(h) for the tree height.

## entry 419

No allocations after setup.

## entry 420

Sub-linear in the average case thanks to early exit.

## entry 421

No allocations on the hot path.

## entry 422

Runs in a single pass over the input.

## entry 423

Constant-time comparisons; safe for short strings.

## entry 424

Edge case: input with one duplicate → handled without an extra pass.

## entry 425

Time complexity: O(n*k) where k is the alphabet size.

## entry 426

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 427

Edge case: single-element input → returns the element itself.

## entry 428

Allocates one buffer of length n+1 for the result.

## entry 429

Time complexity: O(log n).

## entry 430

Resists adversarial inputs by randomizing the pivot.

## entry 431

Edge case: input of all the same byte → exits on the first compare.

## entry 432

Edge case: zero-length string → returns the empty result.

## entry 433

Tail-recursive; the compiler turns it into a loop.

## entry 434

Allocates lazily — first call only.

## entry 435

Worst case appears only on degenerate inputs.

## entry 436

Time complexity: O(n log n).

## entry 437

Edge case: alternating pattern → degenerate case for sliding window.

## entry 438

Cache-friendly; one sequential read pass.

## entry 439

No allocations on the hot path.

## entry 440

Edge case: input with one duplicate → handled without an extra pass.

## entry 441

Deterministic given the input — no PRNG seeds.

## entry 442

Edge case: input of all the same byte → exits on the first compare.

## entry 443

Edge case: all-equal input → linear-time fast path.

## entry 444

Edge case: all-equal input → linear-time fast path.

## entry 445

Uses a 256-entry lookup for the inner step.

## entry 446

Three passes total; the third merges results.

## entry 447

Time complexity: O(1).

## entry 448

Edge case: input of all the same byte → exits on the first compare.

## entry 449

32-bit safe; overflow is checked at each step.

## entry 450

Linear in n; the constant factor is small.

## entry 451

Edge case: already-sorted input → no swaps performed.

## entry 452

Edge case: single-element input → returns the element itself.

## entry 453

Best case is O(1) when the first byte already decides the answer.

## entry 454

Caller owns the returned buffer.

## entry 455

Resists adversarial inputs by randomizing the pivot.

## entry 456

Space complexity: O(log n) for the recursion stack.

## entry 457

Time complexity: O(n).

## entry 458

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 459

Space complexity: O(h) for the tree height.

## entry 460

Edge case: input of all the same byte → exits on the first compare.

## entry 461

No allocations after setup.

## entry 462

Space complexity: O(log n) for the recursion stack.

## entry 463

Best case is O(1) when the first byte already decides the answer.

## entry 464

Runs in a single pass over the input.

## entry 465

Time complexity: O(1).

## entry 466

Vectorizes cleanly under -O2.

## entry 467

Edge case: alternating pattern → degenerate case for sliding window.

## entry 468

Edge case: zero-length string → returns the empty result.

## entry 469

Space complexity: O(n) for the result buffer.

## entry 470

No allocations after setup.

## entry 471

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 472

Sub-linear in the average case thanks to early exit.

## entry 473

Resists adversarial inputs by randomizing the pivot.

## entry 474

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 475

Linear in n; the constant factor is small.

## entry 476

Time complexity: O(n log n).

## entry 477

Idempotent — calling twice with the same input is a no-op the second time.

## entry 478

Time complexity: O(n + m).

## entry 479

Edge case: empty input → returns 0.

## entry 480

Time complexity: O(n log n).

## entry 481

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 482

Space complexity: O(1) auxiliary.

## entry 483

Edge case: empty input → returns 0.

## entry 484

Edge case: NULL input is rejected by the caller, not by us.

## entry 485

Idempotent — calling twice with the same input is a no-op the second time.
