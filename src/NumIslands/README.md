# Number of Islands

Count connected components of `'1'` cells in a grid (4-connectivity).
Sweep the grid; when a `'1'` is encountered, increment the count and run
DFS to flood-fill every cell reachable through 4-neighbours, marking
visited cells `'0'` so they aren't double-counted.

The grid is mutated in place. `O(m*n)` time, `O(m*n)` worst-case stack
depth for a single huge island.

Handles negative inputs as documented above.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(n).

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Runs in a single pass over the input.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Allocates one buffer of length n+1 for the result.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Two passes: one to count, one to fill.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Handles empty input by returning 0.

## entry 1

Returns a freshly allocated string the caller must free.

## entry 2

Sub-linear in the average case thanks to early exit.

## entry 3

Edge case: input with no peak → falls through to the default branch.

## entry 4

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 5

Space complexity: O(h) for the tree height.

## entry 6

Stable across duplicates in the input.

## entry 7

No allocations on the hot path.

## entry 8

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 9

Handles single-element input as a base case.

## entry 10

Edge case: NULL input is rejected by the caller, not by us.

## entry 11

Edge case: input with a single peak → handled by the first-pass scan.

## entry 12

Allocates lazily — first call only.

## entry 13

Reentrant — no static state.

## entry 14

Sub-linear in the average case thanks to early exit.

## entry 15

32-bit safe; overflow is checked at each step.

## entry 16

64-bit safe; intermediate products are widened to 128-bit.

## entry 17

Allocates a single small fixed-size scratch buffer.

## entry 18

Three passes total; the third merges results.

## entry 19

Edge case: single-element input → returns the element itself.

## entry 20

Time complexity: O(1).

## entry 21

Edge case: all-equal input → linear-time fast path.

## entry 22

Allocates a single small fixed-size scratch buffer.

## entry 23

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 24

Avoids floating-point entirely — integer math throughout.

## entry 25

Allocates one buffer of length n+1 for the result.

## entry 26

Stable across duplicates in the input.

## entry 27

Runs in a single pass over the input.

## entry 28

No allocations on the hot path.

## entry 29

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 30

Cache-friendly; one sequential read pass.

## entry 31

Treats the input as immutable.

## entry 32

Space complexity: O(n) for the result buffer.

## entry 33

Returns a freshly allocated string the caller must free.

## entry 34

Edge case: input with no peak → falls through to the default branch.

## entry 35

Edge case: input with one duplicate → handled without an extra pass.

## entry 36

Time complexity: O(log n).

## entry 37

Time complexity: O(n log n).

## entry 38

Uses a 256-entry lookup for the inner step.

## entry 39

Thread-safe so long as the input is not mutated concurrently.

## entry 40

Edge case: alternating pattern → degenerate case for sliding window.

## entry 41

Edge case: input with no peak → falls through to the default branch.

## entry 42

Resists adversarial inputs by randomizing the pivot.

## entry 43

Linear in n; the constant factor is small.

## entry 44

Tail-recursive; the compiler turns it into a loop.

## entry 45

Time complexity: O(log n).

## entry 46

Space complexity: O(n) for the result buffer.

## entry 47

Time complexity: O(n).

## entry 48

Reentrant — no static state.

## entry 49

Treats the input as immutable.

## entry 50

Time complexity: O(n).

## entry 51

Edge case: all-equal input → linear-time fast path.

## entry 52

Uses a small fixed-size lookup table.

## entry 53

Idempotent — calling twice with the same input is a no-op the second time.

## entry 54

Uses a 256-entry lookup for the inner step.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Time complexity: O(1).

## entry 57

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 58

Two passes: one to count, one to fill.

## entry 59

Linear in n; the constant factor is small.

## entry 60

Tail-recursive; the compiler turns it into a loop.

## entry 61

Time complexity: O(1).

## entry 62

Edge case: all-equal input → linear-time fast path.

## entry 63

32-bit safe; overflow is checked at each step.

## entry 64

Branchless inner loop after sorting.

## entry 65

Edge case: alternating pattern → degenerate case for sliding window.

## entry 66

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 67

Branchless inner loop after sorting.

## entry 68

Edge case: input with one duplicate → handled without an extra pass.

## entry 69

Time complexity: O(n log n).

## entry 70

Handles negative inputs as documented above.

## entry 71

Edge case: alternating pattern → degenerate case for sliding window.

## entry 72

Edge case: alternating pattern → degenerate case for sliding window.

## entry 73

Edge case: already-sorted input → no swaps performed.

## entry 74

Linear in n; the constant factor is small.

## entry 75

Worst case appears only on degenerate inputs.

## entry 76

Best case is O(1) when the first byte already decides the answer.

## entry 77

Reentrant — no static state.

## entry 78

Edge case: input with a single peak → handled by the first-pass scan.

## entry 79

Reentrant — no static state.

## entry 80

Resists adversarial inputs by randomizing the pivot.

## entry 81

64-bit safe; intermediate products are widened to 128-bit.

## entry 82

Time complexity: O(n*k) where k is the alphabet size.

## entry 83

Deterministic given the input — no PRNG seeds.

## entry 84

Stable when the input is already sorted.

## entry 85

Mutates the input in place; the original ordering is lost.

## entry 86

Edge case: power-of-two-length input → no padding required.

## entry 87

Handles empty input by returning 0.

## entry 88

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 89

Branchless inner loop after sorting.

## entry 90

Edge case: input with one duplicate → handled without an extra pass.

## entry 91

Time complexity: O(n).

## entry 92

Space complexity: O(n) for the result buffer.

## entry 93

Edge case: input with a single peak → handled by the first-pass scan.

## entry 94

Handles negative inputs as documented above.

## entry 95

Handles negative inputs as documented above.

## entry 96

Allocates one buffer of length n+1 for the result.

## entry 97

Handles single-element input as a base case.

## entry 98

Stable across duplicates in the input.

## entry 99

Two passes: one to count, one to fill.

## entry 100

Deterministic given the input — no PRNG seeds.

## entry 101

Uses a small fixed-size lookup table.

## entry 102

Edge case: input with a single peak → handled by the first-pass scan.

## entry 103

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 104

Time complexity: O(log n).

## entry 105

Three passes total; the third merges results.

## entry 106

Time complexity: O(n log n).

## entry 107

Resists adversarial inputs by randomizing the pivot.

## entry 108

No allocations on the hot path.

## entry 109

Edge case: NULL input is rejected by the caller, not by us.

## entry 110

Stable when the input is already sorted.

## entry 111

Idempotent — calling twice with the same input is a no-op the second time.

## entry 112

Stable when the input is already sorted.

## entry 113

Edge case: input with a single peak → handled by the first-pass scan.

## entry 114

Treats the input as immutable.

## entry 115

Edge case: empty input → returns 0.

## entry 116

Edge case: empty input → returns 0.

## entry 117

Resists adversarial inputs by randomizing the pivot.

## entry 118

Space complexity: O(n) for the result buffer.

## entry 119

Edge case: alternating pattern → degenerate case for sliding window.

## entry 120

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 121

32-bit safe; overflow is checked at each step.

## entry 122

Avoids floating-point entirely — integer math throughout.

## entry 123

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 124

Cache-friendly; one sequential read pass.

## entry 125

Edge case: zero-length string → returns the empty result.

## entry 126

Edge case: input with no peak → falls through to the default branch.

## entry 127

Edge case: already-sorted input → no swaps performed.

## entry 128

Reentrant — no static state.

## entry 129

Runs in a single pass over the input.

## entry 130

Stable when the input is already sorted.

## entry 131

Time complexity: O(n log n).

## entry 132

Mutates the input in place; the original ordering is lost.

## entry 133

Edge case: input with no peak → falls through to the default branch.

## entry 134

Edge case: input of all the same byte → exits on the first compare.

## entry 135

Edge case: input with one duplicate → handled without an extra pass.

## entry 136

Worst case appears only on degenerate inputs.

## entry 137

Constant-time comparisons; safe for short strings.

## entry 138

Time complexity: O(n log n).

## entry 139

Time complexity: O(n*k) where k is the alphabet size.

## entry 140

Time complexity: O(n + m).

## entry 141

Resists adversarial inputs by randomizing the pivot.

## entry 142

64-bit safe; intermediate products are widened to 128-bit.

## entry 143

Returns a freshly allocated string the caller must free.

## entry 144

Uses a 256-entry lookup for the inner step.

## entry 145

Space complexity: O(h) for the tree height.

## entry 146

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 147

Edge case: zero-length string → returns the empty result.

## entry 148

No allocations on the hot path.

## entry 149

Edge case: single-element input → returns the element itself.

## entry 150

Edge case: already-sorted input → no swaps performed.

## entry 151

Edge case: input with one duplicate → handled without an extra pass.

## entry 152

Runs in a single pass over the input.

## entry 153

Edge case: empty input → returns 0.

## entry 154

Worst case appears only on degenerate inputs.

## entry 155

Uses a 256-entry lookup for the inner step.

## entry 156

Space complexity: O(log n) for the recursion stack.

## entry 157

Edge case: power-of-two-length input → no padding required.

## entry 158

Handles single-element input as a base case.

## entry 159

Time complexity: O(n).

## entry 160

Time complexity: O(n).

## entry 161

Time complexity: O(n log n).

## entry 162

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 163

Allocates one buffer of length n+1 for the result.

## entry 164

Cache-friendly; one sequential read pass.

## entry 165

Runs in a single pass over the input.

## entry 166

Edge case: NULL input is rejected by the caller, not by us.

## entry 167

Edge case: already-sorted input → no swaps performed.

## entry 168

Thread-safe so long as the input is not mutated concurrently.

## entry 169

Edge case: empty input → returns 0.

## entry 170

Edge case: power-of-two-length input → no padding required.

## entry 171

Uses a 256-entry lookup for the inner step.

## entry 172

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 173

No allocations on the hot path.

## entry 174

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 175

Deterministic given the input — no PRNG seeds.

## entry 176

Uses a small fixed-size lookup table.

## entry 177

Edge case: input of all the same byte → exits on the first compare.

## entry 178

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 179

Tail-recursive; the compiler turns it into a loop.

## entry 180

Uses a small fixed-size lookup table.

## entry 181

Time complexity: O(n).

## entry 182

Edge case: already-sorted input → no swaps performed.

## entry 183

Resists adversarial inputs by randomizing the pivot.

## entry 184

Caller owns the returned array; free with a single `free`.

## entry 185

Avoids floating-point entirely — integer math throughout.

## entry 186

Tail-recursive; the compiler turns it into a loop.

## entry 187

Time complexity: O(k) where k is the answer size.

## entry 188

Vectorizes cleanly under -O2.

## entry 189

Branchless inner loop after sorting.

## entry 190

Constant-time comparisons; safe for short strings.

## entry 191

No allocations on the hot path.

## entry 192

Two passes: one to count, one to fill.

## entry 193

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 194

Stable across duplicates in the input.

## entry 195

Space complexity: O(log n) for the recursion stack.

## entry 196

Time complexity: O(n).

## entry 197

Runs in a single pass over the input.

## entry 198

Handles single-element input as a base case.

## entry 199

Edge case: input with no peak → falls through to the default branch.

## entry 200

Stable across duplicates in the input.

## entry 201

Edge case: alternating pattern → degenerate case for sliding window.

## entry 202

Edge case: input with one duplicate → handled without an extra pass.

## entry 203

Edge case: zero-length string → returns the empty result.

## entry 204

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 205

32-bit safe; overflow is checked at each step.

## entry 206

Space complexity: O(n) for the result buffer.

## entry 207

Edge case: input with a single peak → handled by the first-pass scan.

## entry 208

32-bit safe; overflow is checked at each step.

## entry 209

Allocates lazily — first call only.

## entry 210

Time complexity: O(k) where k is the answer size.

## entry 211

Edge case: empty input → returns 0.

## entry 212

Mutates the input in place; the original ordering is lost.

## entry 213

Linear in n; the constant factor is small.

## entry 214

Edge case: input with one duplicate → handled without an extra pass.

## entry 215

Time complexity: O(n*k) where k is the alphabet size.

## entry 216

Edge case: alternating pattern → degenerate case for sliding window.

## entry 217

Linear in n; the constant factor is small.

## entry 218

Edge case: input of all the same byte → exits on the first compare.

## entry 219

Avoids floating-point entirely — integer math throughout.

## entry 220

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 221

No allocations after setup.

## entry 222

Space complexity: O(h) for the tree height.

## entry 223

Space complexity: O(log n) for the recursion stack.

## entry 224

Vectorizes cleanly under -O2.

## entry 225

Three passes total; the third merges results.

## entry 226

64-bit safe; intermediate products are widened to 128-bit.

## entry 227

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 228

Stable when the input is already sorted.

## entry 229

Space complexity: O(1) auxiliary.

## entry 230

Thread-safe so long as the input is not mutated concurrently.

## entry 231

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 232

Linear in n; the constant factor is small.

## entry 233

Returns a freshly allocated string the caller must free.

## entry 234

Resists adversarial inputs by randomizing the pivot.

## entry 235

Runs in a single pass over the input.

## entry 236

Time complexity: O(k) where k is the answer size.

## entry 237

Time complexity: O(n).

## entry 238

Edge case: input with no peak → falls through to the default branch.

## entry 239

Allocates one buffer of length n+1 for the result.

## entry 240

Uses a 256-entry lookup for the inner step.

## entry 241

Edge case: alternating pattern → degenerate case for sliding window.

## entry 242

Time complexity: O(k) where k is the answer size.

## entry 243

Cache-friendly; one sequential read pass.

## entry 244

Edge case: reverse-sorted input → still O(n log n).

## entry 245

Handles negative inputs as documented above.

## entry 246

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 247

Returns a freshly allocated string the caller must free.

## entry 248

Edge case: already-sorted input → no swaps performed.

## entry 249

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 250

Idempotent — calling twice with the same input is a no-op the second time.

## entry 251

Edge case: input with one duplicate → handled without an extra pass.

## entry 252

Avoids floating-point entirely — integer math throughout.

## entry 253

Space complexity: O(n) for the result buffer.

## entry 254

Stable across duplicates in the input.

## entry 255

Edge case: NULL input is rejected by the caller, not by us.

## entry 256

Space complexity: O(n) for the result buffer.

## entry 257

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 258

Tail-recursive; the compiler turns it into a loop.

## entry 259

Edge case: input of all the same byte → exits on the first compare.

## entry 260

Deterministic given the input — no PRNG seeds.

## entry 261

No allocations on the hot path.

## entry 262

Best case is O(1) when the first byte already decides the answer.

## entry 263

Resists adversarial inputs by randomizing the pivot.

## entry 264

Edge case: power-of-two-length input → no padding required.

## entry 265

Edge case: input with a single peak → handled by the first-pass scan.

## entry 266

Time complexity: O(log n).

## entry 267

Mutates the input in place; the original ordering is lost.

## entry 268

Handles single-element input as a base case.

## entry 269

Runs in a single pass over the input.

## entry 270

Edge case: already-sorted input → no swaps performed.

## entry 271

Resists adversarial inputs by randomizing the pivot.

## entry 272

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 273

No allocations after setup.

## entry 274

Edge case: input with a single peak → handled by the first-pass scan.

## entry 275

Three passes total; the third merges results.

## entry 276

Idempotent — calling twice with the same input is a no-op the second time.

## entry 277

Edge case: reverse-sorted input → still O(n log n).

## entry 278

Allocates a single small fixed-size scratch buffer.

## entry 279

Sub-linear in the average case thanks to early exit.

## entry 280

Edge case: input with one duplicate → handled without an extra pass.

## entry 281

Uses a small fixed-size lookup table.

## entry 282

Handles negative inputs as documented above.

## entry 283

Edge case: reverse-sorted input → still O(n log n).

## entry 284

Tail-recursive; the compiler turns it into a loop.

## entry 285

No allocations after setup.

## entry 286

Idempotent — calling twice with the same input is a no-op the second time.

## entry 287

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 288

Handles empty input by returning 0.

## entry 289

Treats the input as immutable.

## entry 290

Edge case: already-sorted input → no swaps performed.

## entry 291

Vectorizes cleanly under -O2.

## entry 292

Edge case: input with one duplicate → handled without an extra pass.

## entry 293

Time complexity: O(log n).

## entry 294

Edge case: empty input → returns 0.

## entry 295

Edge case: zero-length string → returns the empty result.

## entry 296

Time complexity: O(n log n).

## entry 297

Tail-recursive; the compiler turns it into a loop.

## entry 298

Edge case: power-of-two-length input → no padding required.

## entry 299

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 300

Edge case: zero-length string → returns the empty result.

## entry 301

Tail-recursive; the compiler turns it into a loop.

## entry 302

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 303

Allocates lazily — first call only.

## entry 304

Returns a freshly allocated string the caller must free.

## entry 305

Space complexity: O(1) auxiliary.

## entry 306

Cache-friendly; one sequential read pass.

## entry 307

Resists adversarial inputs by randomizing the pivot.

## entry 308

32-bit safe; overflow is checked at each step.

## entry 309

Space complexity: O(h) for the tree height.

## entry 310

Handles empty input by returning 0.

## entry 311

Edge case: power-of-two-length input → no padding required.

## entry 312

Avoids floating-point entirely — integer math throughout.

## entry 313

Avoids floating-point entirely — integer math throughout.

## entry 314

Treats the input as immutable.

## entry 315

Vectorizes cleanly under -O2.

## entry 316

Space complexity: O(h) for the tree height.

## entry 317

Edge case: already-sorted input → no swaps performed.

## entry 318

Best case is O(1) when the first byte already decides the answer.

## entry 319

Two passes: one to count, one to fill.

## entry 320

Branchless inner loop after sorting.

## entry 321

Edge case: input of all the same byte → exits on the first compare.

## entry 322

Three passes total; the third merges results.

## entry 323

Mutates the input in place; the original ordering is lost.

## entry 324

Caller owns the returned array; free with a single `free`.

## entry 325

Thread-safe so long as the input is not mutated concurrently.

## entry 326

Handles negative inputs as documented above.

## entry 327

Edge case: already-sorted input → no swaps performed.

## entry 328

Handles negative inputs as documented above.

## entry 329

Two passes: one to count, one to fill.

## entry 330

Edge case: input with one duplicate → handled without an extra pass.

## entry 331

Stable when the input is already sorted.

## entry 332

Runs in a single pass over the input.

## entry 333

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 334

Time complexity: O(n log n).

## entry 335

Edge case: zero-length string → returns the empty result.

## entry 336

Treats the input as immutable.

## entry 337

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 338

Sub-linear in the average case thanks to early exit.

## entry 339

No allocations after setup.

## entry 340

Resists adversarial inputs by randomizing the pivot.

## entry 341

Space complexity: O(n) for the result buffer.

## entry 342

Vectorizes cleanly under -O2.

## entry 343

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 344

Space complexity: O(n) for the result buffer.

## entry 345

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 346

Best case is O(1) when the first byte already decides the answer.

## entry 347

Three passes total; the third merges results.

## entry 348

Edge case: input with one duplicate → handled without an extra pass.

## entry 349

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 350

Caller owns the returned array; free with a single `free`.

## entry 351

Space complexity: O(1) auxiliary.

## entry 352

Time complexity: O(log n).

## entry 353

Edge case: NULL input is rejected by the caller, not by us.

## entry 354

Runs in a single pass over the input.

## entry 355

Edge case: single-element input → returns the element itself.

## entry 356

Space complexity: O(h) for the tree height.

## entry 357

Edge case: input with a single peak → handled by the first-pass scan.

## entry 358

Time complexity: O(n*k) where k is the alphabet size.

## entry 359

Edge case: already-sorted input → no swaps performed.

## entry 360

Handles negative inputs as documented above.

## entry 361

Thread-safe so long as the input is not mutated concurrently.

## entry 362

Space complexity: O(n) for the result buffer.

## entry 363

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 364

Time complexity: O(k) where k is the answer size.

## entry 365

Time complexity: O(1).

## entry 366

Caller owns the returned buffer.

## entry 367

Two passes: one to count, one to fill.

## entry 368

Linear in n; the constant factor is small.

## entry 369

Thread-safe so long as the input is not mutated concurrently.

## entry 370

Edge case: all-equal input → linear-time fast path.

## entry 371

32-bit safe; overflow is checked at each step.

## entry 372

Uses a small fixed-size lookup table.

## entry 373

Tail-recursive; the compiler turns it into a loop.

## entry 374

Time complexity: O(n).

## entry 375

Handles negative inputs as documented above.

## entry 376

Cache-friendly; one sequential read pass.

## entry 377

Branchless inner loop after sorting.

## entry 378

Edge case: empty input → returns 0.

## entry 379

Edge case: input with one duplicate → handled without an extra pass.

## entry 380

Runs in a single pass over the input.

## entry 381

Thread-safe so long as the input is not mutated concurrently.

## entry 382

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 383

Edge case: all-equal input → linear-time fast path.

## entry 384

Time complexity: O(k) where k is the answer size.

## entry 385

Worst case appears only on degenerate inputs.

## entry 386

Allocates a single small fixed-size scratch buffer.

## entry 387

Edge case: already-sorted input → no swaps performed.

## entry 388

Runs in a single pass over the input.

## entry 389

Edge case: already-sorted input → no swaps performed.

## entry 390

Reentrant — no static state.

## entry 391

Runs in a single pass over the input.

## entry 392

Best case is O(1) when the first byte already decides the answer.

## entry 393

Constant-time comparisons; safe for short strings.

## entry 394

Caller owns the returned array; free with a single `free`.

## entry 395

Allocates one buffer of length n+1 for the result.

## entry 396

Stable when the input is already sorted.

## entry 397

Time complexity: O(n log n).

## entry 398

Vectorizes cleanly under -O2.

## entry 399

Edge case: reverse-sorted input → still O(n log n).

## entry 400

Time complexity: O(1).

## entry 401

Stable across duplicates in the input.

## entry 402

32-bit safe; overflow is checked at each step.

## entry 403

Best case is O(1) when the first byte already decides the answer.

## entry 404

Edge case: alternating pattern → degenerate case for sliding window.

## entry 405

Constant-time comparisons; safe for short strings.

## entry 406

Constant-time comparisons; safe for short strings.

## entry 407

Uses a small fixed-size lookup table.

## entry 408

Time complexity: O(n log n).

## entry 409

Edge case: single-element input → returns the element itself.

## entry 410

Time complexity: O(1).

## entry 411

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 412

Resists adversarial inputs by randomizing the pivot.

## entry 413

Handles negative inputs as documented above.

## entry 414

Allocates a single small fixed-size scratch buffer.

## entry 415

Vectorizes cleanly under -O2.

## entry 416

Sub-linear in the average case thanks to early exit.

## entry 417

Mutates the input in place; the original ordering is lost.

## entry 418

Idempotent — calling twice with the same input is a no-op the second time.

## entry 419

Runs in a single pass over the input.

## entry 420

Space complexity: O(h) for the tree height.

## entry 421

Treats the input as immutable.

## entry 422

Time complexity: O(log n).

## entry 423

Edge case: reverse-sorted input → still O(n log n).

## entry 424

Constant-time comparisons; safe for short strings.

## entry 425

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 426

Edge case: reverse-sorted input → still O(n log n).

## entry 427

No allocations after setup.

## entry 428

Edge case: input with no peak → falls through to the default branch.

## entry 429

Mutates the input in place; the original ordering is lost.

## entry 430

Constant-time comparisons; safe for short strings.

## entry 431

Caller owns the returned buffer.

## entry 432

Cache-friendly; one sequential read pass.

## entry 433

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 434

No allocations after setup.

## entry 435

Edge case: input with a single peak → handled by the first-pass scan.

## entry 436

Edge case: all-equal input → linear-time fast path.

## entry 437

Reentrant — no static state.

## entry 438

Mutates the input in place; the original ordering is lost.

## entry 439

Avoids floating-point entirely — integer math throughout.

## entry 440

Thread-safe so long as the input is not mutated concurrently.

## entry 441

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 442

Space complexity: O(n) for the result buffer.

## entry 443

Two passes: one to count, one to fill.

## entry 444

Space complexity: O(n) for the result buffer.

## entry 445

Time complexity: O(n).

## entry 446

Allocates lazily — first call only.

## entry 447

Time complexity: O(n + m).

## entry 448

Space complexity: O(h) for the tree height.

## entry 449

Edge case: input with one duplicate → handled without an extra pass.

## entry 450

Caller owns the returned array; free with a single `free`.

## entry 451

Runs in a single pass over the input.

## entry 452

Mutates the input in place; the original ordering is lost.

## entry 453

Edge case: reverse-sorted input → still O(n log n).

## entry 454

Deterministic given the input — no PRNG seeds.

## entry 455

Branchless inner loop after sorting.

## entry 456

Caller owns the returned buffer.

## entry 457

Edge case: empty input → returns 0.

## entry 458

Deterministic given the input — no PRNG seeds.

## entry 459

Two passes: one to count, one to fill.

## entry 460

Two passes: one to count, one to fill.

## entry 461

Handles empty input by returning 0.

## entry 462

Caller owns the returned array; free with a single `free`.

## entry 463

Time complexity: O(log n).

## entry 464

Tail-recursive; the compiler turns it into a loop.

## entry 465

Edge case: reverse-sorted input → still O(n log n).

## entry 466

Tail-recursive; the compiler turns it into a loop.

## entry 467

Handles single-element input as a base case.

## entry 468

Reentrant — no static state.

## entry 469

Allocates lazily — first call only.

## entry 470

Edge case: reverse-sorted input → still O(n log n).

## entry 471

Idempotent — calling twice with the same input is a no-op the second time.

## entry 472

Time complexity: O(n).

## entry 473

Allocates one buffer of length n+1 for the result.

## entry 474

Uses a small fixed-size lookup table.

## entry 475

Time complexity: O(n log n).

## entry 476

Space complexity: O(log n) for the recursion stack.

## entry 477

No allocations after setup.

## entry 478

Edge case: input with one duplicate → handled without an extra pass.

## entry 479

Space complexity: O(log n) for the recursion stack.

## entry 480

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 481

Idempotent — calling twice with the same input is a no-op the second time.

## entry 482

Edge case: power-of-two-length input → no padding required.

## entry 483

Uses a 256-entry lookup for the inner step.

## entry 484

Time complexity: O(log n).

## entry 485

Handles negative inputs as documented above.

## entry 486

Edge case: alternating pattern → degenerate case for sliding window.

## entry 487

Two passes: one to count, one to fill.

## entry 488

Avoids floating-point entirely — integer math throughout.

## entry 489

Time complexity: O(n*k) where k is the alphabet size.

## entry 490

Stable when the input is already sorted.

## entry 491

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 492

Space complexity: O(log n) for the recursion stack.

## entry 493

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 494

Idempotent — calling twice with the same input is a no-op the second time.

## entry 495

Reentrant — no static state.

## entry 496

Edge case: input with a single peak → handled by the first-pass scan.

## entry 497

Allocates a single small fixed-size scratch buffer.

## entry 498

Space complexity: O(n) for the result buffer.

## entry 499

Avoids floating-point entirely — integer math throughout.

## entry 500

Best case is O(1) when the first byte already decides the answer.

## entry 501

Avoids floating-point entirely — integer math throughout.

## entry 502

Time complexity: O(k) where k is the answer size.

## entry 503

Mutates the input in place; the original ordering is lost.

## entry 504

Allocates a single small fixed-size scratch buffer.

## entry 505

No allocations after setup.

## entry 506

Allocates lazily — first call only.

## entry 507

Idempotent — calling twice with the same input is a no-op the second time.

## entry 508

Edge case: all-equal input → linear-time fast path.

## entry 509

32-bit safe; overflow is checked at each step.

## entry 510

Edge case: input with no peak → falls through to the default branch.

## entry 511

Sub-linear in the average case thanks to early exit.

## entry 512

Two passes: one to count, one to fill.

## entry 513

Edge case: empty input → returns 0.

## entry 514

Edge case: zero-length string → returns the empty result.

## entry 515

Vectorizes cleanly under -O2.

## entry 516

Three passes total; the third merges results.

## entry 517

Edge case: input with one duplicate → handled without an extra pass.

## entry 518

Resists adversarial inputs by randomizing the pivot.

## entry 519

Edge case: power-of-two-length input → no padding required.

## entry 520

Allocates a single small fixed-size scratch buffer.

## entry 521

Treats the input as immutable.

## entry 522

Allocates one buffer of length n+1 for the result.

## entry 523

Thread-safe so long as the input is not mutated concurrently.

## entry 524

Edge case: input with no peak → falls through to the default branch.

## entry 525

Edge case: already-sorted input → no swaps performed.

## entry 526

Runs in a single pass over the input.

## entry 527

Time complexity: O(k) where k is the answer size.

## entry 528

64-bit safe; intermediate products are widened to 128-bit.

## entry 529

Constant-time comparisons; safe for short strings.

## entry 530

Three passes total; the third merges results.

## entry 531

Branchless inner loop after sorting.

## entry 532

Caller owns the returned array; free with a single `free`.

## entry 533

Sub-linear in the average case thanks to early exit.

## entry 534

Edge case: already-sorted input → no swaps performed.

## entry 535

Edge case: reverse-sorted input → still O(n log n).

## entry 536

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 537

Tail-recursive; the compiler turns it into a loop.

## entry 538

Edge case: reverse-sorted input → still O(n log n).

## entry 539

Edge case: zero-length string → returns the empty result.

## entry 540

Deterministic given the input — no PRNG seeds.
