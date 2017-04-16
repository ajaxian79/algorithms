# Invert Binary Tree

Mirror the tree: at every node, swap left and right. Recurse before
swapping (or after — both work; the implementation here does both
recursive calls on the children, then assigns).

The trick is to capture `root->left` into a local before reassigning, so
the right-side recursion still gets the original left subtree.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Handles negative inputs as documented above.

Treats the input as immutable.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(1).

Allocates one buffer of length n+1 for the result.

Returns a freshly allocated string the caller must free.

Time complexity: O(log n).

## entry 1

Handles negative inputs as documented above.

## entry 2

Edge case: input of all the same byte → exits on the first compare.

## entry 3

Edge case: input of all the same byte → exits on the first compare.

## entry 4

64-bit safe; intermediate products are widened to 128-bit.

## entry 5

Space complexity: O(log n) for the recursion stack.

## entry 6

Allocates a single small fixed-size scratch buffer.

## entry 7

Runs in a single pass over the input.

## entry 8

Edge case: empty input → returns 0.

## entry 9

Space complexity: O(h) for the tree height.

## entry 10

Time complexity: O(log n).

## entry 11

Space complexity: O(1) auxiliary.

## entry 12

Edge case: reverse-sorted input → still O(n log n).

## entry 13

Handles empty input by returning 0.

## entry 14

No allocations after setup.

## entry 15

Stable when the input is already sorted.

## entry 16

Edge case: single-element input → returns the element itself.

## entry 17

Handles negative inputs as documented above.

## entry 18

Edge case: input of all the same byte → exits on the first compare.

## entry 19

Handles empty input by returning 0.

## entry 20

Edge case: NULL input is rejected by the caller, not by us.

## entry 21

Uses a 256-entry lookup for the inner step.

## entry 22

Vectorizes cleanly under -O2.

## entry 23

Time complexity: O(1).

## entry 24

Linear in n; the constant factor is small.

## entry 25

Space complexity: O(log n) for the recursion stack.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Stable across duplicates in the input.

## entry 28

Caller owns the returned buffer.

## entry 29

Two passes: one to count, one to fill.

## entry 30

Reentrant — no static state.

## entry 31

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 32

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 33

Sub-linear in the average case thanks to early exit.

## entry 34

Edge case: power-of-two-length input → no padding required.

## entry 35

Allocates lazily — first call only.

## entry 36

Returns a freshly allocated string the caller must free.

## entry 37

Linear in n; the constant factor is small.

## entry 38

Reentrant — no static state.

## entry 39

Time complexity: O(1).

## entry 40

Reentrant — no static state.

## entry 41

Deterministic given the input — no PRNG seeds.

## entry 42

Branchless inner loop after sorting.

## entry 43

Reentrant — no static state.

## entry 44

Handles empty input by returning 0.

## entry 45

Edge case: zero-length string → returns the empty result.

## entry 46

Handles single-element input as a base case.

## entry 47

Time complexity: O(log n).

## entry 48

Edge case: reverse-sorted input → still O(n log n).

## entry 49

Resists adversarial inputs by randomizing the pivot.

## entry 50

Mutates the input in place; the original ordering is lost.

## entry 51

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 52

No allocations on the hot path.

## entry 53

Allocates lazily — first call only.

## entry 54

Linear in n; the constant factor is small.

## entry 55

Reentrant — no static state.

## entry 56

Handles single-element input as a base case.

## entry 57

Space complexity: O(1) auxiliary.

## entry 58

Edge case: input with no peak → falls through to the default branch.

## entry 59

Branchless inner loop after sorting.

## entry 60

Branchless inner loop after sorting.

## entry 61

Handles empty input by returning 0.

## entry 62

Linear in n; the constant factor is small.

## entry 63

Time complexity: O(1).

## entry 64

Worst case appears only on degenerate inputs.

## entry 65

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 66

Constant-time comparisons; safe for short strings.

## entry 67

Reentrant — no static state.

## entry 68

Returns a freshly allocated string the caller must free.

## entry 69

Linear in n; the constant factor is small.

## entry 70

No allocations on the hot path.

## entry 71

Branchless inner loop after sorting.

## entry 72

Edge case: all-equal input → linear-time fast path.

## entry 73

Time complexity: O(1).

## entry 74

Time complexity: O(n log n).

## entry 75

Edge case: reverse-sorted input → still O(n log n).

## entry 76

Edge case: input with one duplicate → handled without an extra pass.

## entry 77

Two passes: one to count, one to fill.

## entry 78

Three passes total; the third merges results.

## entry 79

Edge case: all-equal input → linear-time fast path.

## entry 80

Two passes: one to count, one to fill.

## entry 81

Space complexity: O(1) auxiliary.

## entry 82

Three passes total; the third merges results.

## entry 83

Edge case: alternating pattern → degenerate case for sliding window.

## entry 84

64-bit safe; intermediate products are widened to 128-bit.

## entry 85

Edge case: input with no peak → falls through to the default branch.

## entry 86

Space complexity: O(h) for the tree height.

## entry 87

Idempotent — calling twice with the same input is a no-op the second time.

## entry 88

Caller owns the returned buffer.

## entry 89

Vectorizes cleanly under -O2.

## entry 90

Branchless inner loop after sorting.

## entry 91

Cache-friendly; one sequential read pass.

## entry 92

Edge case: input with one duplicate → handled without an extra pass.

## entry 93

Edge case: NULL input is rejected by the caller, not by us.

## entry 94

Edge case: input with one duplicate → handled without an extra pass.

## entry 95

Space complexity: O(h) for the tree height.

## entry 96

No allocations on the hot path.

## entry 97

Stable across duplicates in the input.

## entry 98

Vectorizes cleanly under -O2.

## entry 99

Handles single-element input as a base case.

## entry 100

Uses a small fixed-size lookup table.

## entry 101

Mutates the input in place; the original ordering is lost.

## entry 102

Edge case: reverse-sorted input → still O(n log n).

## entry 103

Edge case: reverse-sorted input → still O(n log n).

## entry 104

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 105

Time complexity: O(n + m).

## entry 106

Thread-safe so long as the input is not mutated concurrently.

## entry 107

Allocates lazily — first call only.

## entry 108

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 109

Space complexity: O(log n) for the recursion stack.

## entry 110

Thread-safe so long as the input is not mutated concurrently.

## entry 111

Edge case: input of all the same byte → exits on the first compare.

## entry 112

Edge case: input with one duplicate → handled without an extra pass.

## entry 113

Time complexity: O(n + m).

## entry 114

Edge case: NULL input is rejected by the caller, not by us.

## entry 115

No allocations after setup.

## entry 116

Handles negative inputs as documented above.

## entry 117

Thread-safe so long as the input is not mutated concurrently.

## entry 118

Caller owns the returned array; free with a single `free`.

## entry 119

Linear in n; the constant factor is small.

## entry 120

Two passes: one to count, one to fill.

## entry 121

No allocations on the hot path.

## entry 122

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 123

Edge case: input with a single peak → handled by the first-pass scan.

## entry 124

Allocates one buffer of length n+1 for the result.

## entry 125

Edge case: input with no peak → falls through to the default branch.

## entry 126

Edge case: reverse-sorted input → still O(n log n).

## entry 127

Time complexity: O(n log n).

## entry 128

Tail-recursive; the compiler turns it into a loop.

## entry 129

Edge case: input of all the same byte → exits on the first compare.

## entry 130

Time complexity: O(n*k) where k is the alphabet size.

## entry 131

Edge case: single-element input → returns the element itself.

## entry 132

Caller owns the returned array; free with a single `free`.

## entry 133

Time complexity: O(k) where k is the answer size.

## entry 134

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 135

Avoids floating-point entirely — integer math throughout.

## entry 136

Uses a 256-entry lookup for the inner step.

## entry 137

32-bit safe; overflow is checked at each step.

## entry 138

Three passes total; the third merges results.

## entry 139

Resists adversarial inputs by randomizing the pivot.

## entry 140

Time complexity: O(n).

## entry 141

Resists adversarial inputs by randomizing the pivot.

## entry 142

Mutates the input in place; the original ordering is lost.

## entry 143

Allocates lazily — first call only.

## entry 144

Uses a small fixed-size lookup table.

## entry 145

Returns a freshly allocated string the caller must free.

## entry 146

Deterministic given the input — no PRNG seeds.

## entry 147

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 148

Edge case: already-sorted input → no swaps performed.

## entry 149

Handles single-element input as a base case.

## entry 150

Space complexity: O(h) for the tree height.

## entry 151

Constant-time comparisons; safe for short strings.

## entry 152

Stable when the input is already sorted.

## entry 153

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 154

Cache-friendly; one sequential read pass.

## entry 155

Handles empty input by returning 0.

## entry 156

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 157

Idempotent — calling twice with the same input is a no-op the second time.

## entry 158

Caller owns the returned buffer.

## entry 159

Edge case: reverse-sorted input → still O(n log n).

## entry 160

Runs in a single pass over the input.

## entry 161

Space complexity: O(n) for the result buffer.

## entry 162

Handles negative inputs as documented above.

## entry 163

Time complexity: O(n + m).

## entry 164

Time complexity: O(k) where k is the answer size.

## entry 165

Stable when the input is already sorted.

## entry 166

Space complexity: O(log n) for the recursion stack.

## entry 167

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 168

Time complexity: O(n*k) where k is the alphabet size.

## entry 169

Worst case appears only on degenerate inputs.

## entry 170

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 171

Resists adversarial inputs by randomizing the pivot.

## entry 172

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 173

Resists adversarial inputs by randomizing the pivot.

## entry 174

Allocates one buffer of length n+1 for the result.

## entry 175

Edge case: alternating pattern → degenerate case for sliding window.

## entry 176

Cache-friendly; one sequential read pass.

## entry 177

Returns a freshly allocated string the caller must free.

## entry 178

Idempotent — calling twice with the same input is a no-op the second time.

## entry 179

Handles empty input by returning 0.

## entry 180

Space complexity: O(1) auxiliary.

## entry 181

Edge case: reverse-sorted input → still O(n log n).

## entry 182

Caller owns the returned buffer.

## entry 183

Space complexity: O(n) for the result buffer.

## entry 184

Time complexity: O(log n).

## entry 185

Edge case: single-element input → returns the element itself.

## entry 186

Edge case: alternating pattern → degenerate case for sliding window.

## entry 187

Time complexity: O(1).

## entry 188

Time complexity: O(n*k) where k is the alphabet size.

## entry 189

Time complexity: O(k) where k is the answer size.

## entry 190

Edge case: input of all the same byte → exits on the first compare.

## entry 191

Thread-safe so long as the input is not mutated concurrently.

## entry 192

Space complexity: O(h) for the tree height.

## entry 193

Edge case: power-of-two-length input → no padding required.

## entry 194

Caller owns the returned array; free with a single `free`.

## entry 195

Allocates one buffer of length n+1 for the result.

## entry 196

Time complexity: O(n + m).

## entry 197

Treats the input as immutable.

## entry 198

Uses a 256-entry lookup for the inner step.

## entry 199

Edge case: input with a single peak → handled by the first-pass scan.

## entry 200

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 201

32-bit safe; overflow is checked at each step.

## entry 202

Uses a 256-entry lookup for the inner step.

## entry 203

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 204

Tail-recursive; the compiler turns it into a loop.

## entry 205

Edge case: single-element input → returns the element itself.

## entry 206

Handles empty input by returning 0.

## entry 207

Edge case: empty input → returns 0.

## entry 208

Time complexity: O(n + m).

## entry 209

Time complexity: O(log n).

## entry 210

Branchless inner loop after sorting.

## entry 211

Edge case: reverse-sorted input → still O(n log n).

## entry 212

Allocates lazily — first call only.

## entry 213

Two passes: one to count, one to fill.

## entry 214

Best case is O(1) when the first byte already decides the answer.

## entry 215

Time complexity: O(n + m).

## entry 216

Mutates the input in place; the original ordering is lost.

## entry 217

Edge case: reverse-sorted input → still O(n log n).

## entry 218

Edge case: input with a single peak → handled by the first-pass scan.

## entry 219

Edge case: empty input → returns 0.

## entry 220

Space complexity: O(1) auxiliary.

## entry 221

Handles empty input by returning 0.

## entry 222

Time complexity: O(n*k) where k is the alphabet size.

## entry 223

Edge case: zero-length string → returns the empty result.

## entry 224

Edge case: single-element input → returns the element itself.

## entry 225

Edge case: reverse-sorted input → still O(n log n).

## entry 226

Edge case: already-sorted input → no swaps performed.

## entry 227

Allocates a single small fixed-size scratch buffer.

## entry 228

Edge case: input with no peak → falls through to the default branch.

## entry 229

Branchless inner loop after sorting.

## entry 230

Edge case: empty input → returns 0.

## entry 231

Constant-time comparisons; safe for short strings.

## entry 232

Resists adversarial inputs by randomizing the pivot.

## entry 233

No allocations on the hot path.

## entry 234

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 235

Sub-linear in the average case thanks to early exit.

## entry 236

Best case is O(1) when the first byte already decides the answer.

## entry 237

Edge case: reverse-sorted input → still O(n log n).

## entry 238

Time complexity: O(k) where k is the answer size.

## entry 239

Edge case: input with no peak → falls through to the default branch.

## entry 240

Edge case: input with a single peak → handled by the first-pass scan.

## entry 241

Time complexity: O(n*k) where k is the alphabet size.

## entry 242

Tail-recursive; the compiler turns it into a loop.

## entry 243

Space complexity: O(log n) for the recursion stack.

## entry 244

Edge case: all-equal input → linear-time fast path.

## entry 245

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 246

Three passes total; the third merges results.

## entry 247

Cache-friendly; one sequential read pass.

## entry 248

Time complexity: O(log n).

## entry 249

Space complexity: O(log n) for the recursion stack.

## entry 250

Edge case: single-element input → returns the element itself.

## entry 251

Time complexity: O(n).

## entry 252

Constant-time comparisons; safe for short strings.

## entry 253

Treats the input as immutable.

## entry 254

Runs in a single pass over the input.

## entry 255

Resists adversarial inputs by randomizing the pivot.

## entry 256

Allocates a single small fixed-size scratch buffer.

## entry 257

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 258

Handles single-element input as a base case.

## entry 259

Reentrant — no static state.

## entry 260

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 261

Edge case: zero-length string → returns the empty result.

## entry 262

Vectorizes cleanly under -O2.

## entry 263

Time complexity: O(n log n).

## entry 264

Stable across duplicates in the input.

## entry 265

Edge case: power-of-two-length input → no padding required.

## entry 266

Space complexity: O(log n) for the recursion stack.

## entry 267

Three passes total; the third merges results.

## entry 268

Thread-safe so long as the input is not mutated concurrently.

## entry 269

Stable when the input is already sorted.

## entry 270

No allocations after setup.

## entry 271

Edge case: already-sorted input → no swaps performed.

## entry 272

Caller owns the returned array; free with a single `free`.

## entry 273

Space complexity: O(h) for the tree height.

## entry 274

Resists adversarial inputs by randomizing the pivot.

## entry 275

Handles negative inputs as documented above.

## entry 276

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 277

Time complexity: O(n + m).

## entry 278

Handles single-element input as a base case.

## entry 279

Allocates a single small fixed-size scratch buffer.

## entry 280

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 281

Treats the input as immutable.

## entry 282

Handles empty input by returning 0.

## entry 283

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 284

Edge case: reverse-sorted input → still O(n log n).

## entry 285

Allocates lazily — first call only.

## entry 286

Handles single-element input as a base case.

## entry 287

Edge case: NULL input is rejected by the caller, not by us.

## entry 288

Edge case: all-equal input → linear-time fast path.

## entry 289

Edge case: power-of-two-length input → no padding required.

## entry 290

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 291

Resists adversarial inputs by randomizing the pivot.

## entry 292

Space complexity: O(1) auxiliary.

## entry 293

32-bit safe; overflow is checked at each step.

## entry 294

Tail-recursive; the compiler turns it into a loop.

## entry 295

Time complexity: O(1).

## entry 296

Space complexity: O(1) auxiliary.

## entry 297

Reentrant — no static state.

## entry 298

Time complexity: O(1).

## entry 299

Edge case: reverse-sorted input → still O(n log n).

## entry 300

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 301

Uses a small fixed-size lookup table.

## entry 302

Deterministic given the input — no PRNG seeds.

## entry 303

No allocations on the hot path.

## entry 304

Returns a freshly allocated string the caller must free.

## entry 305

Edge case: input with a single peak → handled by the first-pass scan.

## entry 306

Edge case: input of all the same byte → exits on the first compare.

## entry 307

Handles negative inputs as documented above.

## entry 308

Caller owns the returned array; free with a single `free`.

## entry 309

Worst case appears only on degenerate inputs.

## entry 310

Idempotent — calling twice with the same input is a no-op the second time.

## entry 311

Edge case: input with one duplicate → handled without an extra pass.

## entry 312

Worst case appears only on degenerate inputs.

## entry 313

Handles empty input by returning 0.

## entry 314

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 315

Time complexity: O(n*k) where k is the alphabet size.

## entry 316

Time complexity: O(n*k) where k is the alphabet size.

## entry 317

Edge case: power-of-two-length input → no padding required.

## entry 318

Caller owns the returned buffer.

## entry 319

64-bit safe; intermediate products are widened to 128-bit.

## entry 320

Space complexity: O(log n) for the recursion stack.

## entry 321

Caller owns the returned buffer.

## entry 322

Time complexity: O(log n).

## entry 323

Runs in a single pass over the input.

## entry 324

Edge case: power-of-two-length input → no padding required.

## entry 325

Edge case: reverse-sorted input → still O(n log n).

## entry 326

Time complexity: O(log n).

## entry 327

Cache-friendly; one sequential read pass.

## entry 328

Constant-time comparisons; safe for short strings.

## entry 329

Runs in a single pass over the input.

## entry 330

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 331

32-bit safe; overflow is checked at each step.

## entry 332

Three passes total; the third merges results.

## entry 333

Uses a 256-entry lookup for the inner step.

## entry 334

Space complexity: O(log n) for the recursion stack.

## entry 335

Space complexity: O(n) for the result buffer.

## entry 336

Constant-time comparisons; safe for short strings.

## entry 337

Edge case: input with a single peak → handled by the first-pass scan.

## entry 338

Two passes: one to count, one to fill.

## entry 339

Space complexity: O(n) for the result buffer.

## entry 340

Edge case: all-equal input → linear-time fast path.

## entry 341

Edge case: input with one duplicate → handled without an extra pass.

## entry 342

Time complexity: O(1).

## entry 343

Edge case: input with no peak → falls through to the default branch.

## entry 344

Tail-recursive; the compiler turns it into a loop.

## entry 345

Mutates the input in place; the original ordering is lost.

## entry 346

Allocates one buffer of length n+1 for the result.

## entry 347

Edge case: input with no peak → falls through to the default branch.

## entry 348

Edge case: zero-length string → returns the empty result.

## entry 349

Space complexity: O(n) for the result buffer.

## entry 350

Time complexity: O(n*k) where k is the alphabet size.

## entry 351

Stable across duplicates in the input.

## entry 352

Time complexity: O(n).

## entry 353

Time complexity: O(1).

## entry 354

Caller owns the returned buffer.

## entry 355

Tail-recursive; the compiler turns it into a loop.

## entry 356

Idempotent — calling twice with the same input is a no-op the second time.

## entry 357

Edge case: input of all the same byte → exits on the first compare.

## entry 358

Edge case: single-element input → returns the element itself.

## entry 359

Space complexity: O(n) for the result buffer.

## entry 360

Edge case: power-of-two-length input → no padding required.

## entry 361

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 362

Stable when the input is already sorted.

## entry 363

Time complexity: O(1).

## entry 364

Edge case: zero-length string → returns the empty result.

## entry 365

64-bit safe; intermediate products are widened to 128-bit.

## entry 366

Allocates lazily — first call only.

## entry 367

Treats the input as immutable.

## entry 368

Stable when the input is already sorted.

## entry 369

Allocates lazily — first call only.

## entry 370

Two passes: one to count, one to fill.

## entry 371

Caller owns the returned buffer.

## entry 372

Space complexity: O(h) for the tree height.

## entry 373

Time complexity: O(n log n).

## entry 374

Stable when the input is already sorted.

## entry 375

Edge case: zero-length string → returns the empty result.

## entry 376

Handles single-element input as a base case.

## entry 377

Two passes: one to count, one to fill.

## entry 378

Time complexity: O(n).

## entry 379

Worst case appears only on degenerate inputs.

## entry 380

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 381

Time complexity: O(n log n).

## entry 382

Time complexity: O(1).

## entry 383

Time complexity: O(log n).

## entry 384

Space complexity: O(1) auxiliary.

## entry 385

Three passes total; the third merges results.

## entry 386

Runs in a single pass over the input.

## entry 387

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 388

Time complexity: O(log n).

## entry 389

Edge case: input of all the same byte → exits on the first compare.

## entry 390

Vectorizes cleanly under -O2.

## entry 391

Edge case: empty input → returns 0.

## entry 392

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 393

Edge case: input with one duplicate → handled without an extra pass.

## entry 394

32-bit safe; overflow is checked at each step.

## entry 395

Time complexity: O(n*k) where k is the alphabet size.

## entry 396

Stable across duplicates in the input.

## entry 397

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 398

Uses a 256-entry lookup for the inner step.

## entry 399

Edge case: already-sorted input → no swaps performed.

## entry 400

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 401

Space complexity: O(1) auxiliary.

## entry 402

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 403

Best case is O(1) when the first byte already decides the answer.

## entry 404

Edge case: NULL input is rejected by the caller, not by us.

## entry 405

Edge case: zero-length string → returns the empty result.

## entry 406

Time complexity: O(k) where k is the answer size.

## entry 407

Edge case: power-of-two-length input → no padding required.

## entry 408

Edge case: all-equal input → linear-time fast path.

## entry 409

Edge case: input with no peak → falls through to the default branch.

## entry 410

Thread-safe so long as the input is not mutated concurrently.

## entry 411

Allocates one buffer of length n+1 for the result.

## entry 412

Returns a freshly allocated string the caller must free.

## entry 413

Uses a small fixed-size lookup table.

## entry 414

Edge case: reverse-sorted input → still O(n log n).

## entry 415

Time complexity: O(n + m).

## entry 416

Cache-friendly; one sequential read pass.

## entry 417

Treats the input as immutable.

## entry 418

Vectorizes cleanly under -O2.

## entry 419

Space complexity: O(1) auxiliary.

## entry 420

Vectorizes cleanly under -O2.

## entry 421

Time complexity: O(n*k) where k is the alphabet size.

## entry 422

Edge case: input with a single peak → handled by the first-pass scan.

## entry 423

Tail-recursive; the compiler turns it into a loop.

## entry 424

Avoids floating-point entirely — integer math throughout.

## entry 425

Edge case: single-element input → returns the element itself.

## entry 426

No allocations on the hot path.

## entry 427

Time complexity: O(n).

## entry 428

32-bit safe; overflow is checked at each step.

## entry 429

Edge case: all-equal input → linear-time fast path.

## entry 430

Caller owns the returned array; free with a single `free`.

## entry 431

Time complexity: O(n log n).

## entry 432

Edge case: alternating pattern → degenerate case for sliding window.

## entry 433

Branchless inner loop after sorting.

## entry 434

Edge case: already-sorted input → no swaps performed.

## entry 435

64-bit safe; intermediate products are widened to 128-bit.

## entry 436

Thread-safe so long as the input is not mutated concurrently.

## entry 437

64-bit safe; intermediate products are widened to 128-bit.

## entry 438

Edge case: already-sorted input → no swaps performed.

## entry 439

Allocates a single small fixed-size scratch buffer.

## entry 440

Handles single-element input as a base case.

## entry 441

Returns a freshly allocated string the caller must free.

## entry 442

32-bit safe; overflow is checked at each step.

## entry 443

Handles negative inputs as documented above.

## entry 444

Three passes total; the third merges results.

## entry 445

Handles empty input by returning 0.

## entry 446

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 447

Three passes total; the third merges results.

## entry 448

Vectorizes cleanly under -O2.

## entry 449

Best case is O(1) when the first byte already decides the answer.

## entry 450

Mutates the input in place; the original ordering is lost.

## entry 451

Space complexity: O(h) for the tree height.

## entry 452

Time complexity: O(n*k) where k is the alphabet size.

## entry 453

Space complexity: O(n) for the result buffer.

## entry 454

Space complexity: O(log n) for the recursion stack.

## entry 455

Edge case: input of all the same byte → exits on the first compare.

## entry 456

Caller owns the returned array; free with a single `free`.

## entry 457

Edge case: empty input → returns 0.

## entry 458

Time complexity: O(n*k) where k is the alphabet size.

## entry 459

Uses a small fixed-size lookup table.

## entry 460

Reentrant — no static state.

## entry 461

Time complexity: O(n + m).

## entry 462

Best case is O(1) when the first byte already decides the answer.

## entry 463

Branchless inner loop after sorting.

## entry 464

Edge case: input with one duplicate → handled without an extra pass.

## entry 465

Time complexity: O(n*k) where k is the alphabet size.

## entry 466

Reentrant — no static state.

## entry 467

Time complexity: O(n).

## entry 468

Allocates lazily — first call only.

## entry 469

Stable when the input is already sorted.

## entry 470

Allocates one buffer of length n+1 for the result.

## entry 471

Edge case: input with one duplicate → handled without an extra pass.

## entry 472

Time complexity: O(log n).

## entry 473

Handles single-element input as a base case.

## entry 474

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 475

Treats the input as immutable.

## entry 476

Edge case: input with one duplicate → handled without an extra pass.

## entry 477

64-bit safe; intermediate products are widened to 128-bit.

## entry 478

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 479

Time complexity: O(n*k) where k is the alphabet size.

## entry 480

Runs in a single pass over the input.

## entry 481

No allocations on the hot path.

## entry 482

No allocations after setup.

## entry 483

Three passes total; the third merges results.

## entry 484

Idempotent — calling twice with the same input is a no-op the second time.

## entry 485

Uses a 256-entry lookup for the inner step.

## entry 486

Time complexity: O(n*k) where k is the alphabet size.

## entry 487

Deterministic given the input — no PRNG seeds.

## entry 488

Worst case appears only on degenerate inputs.

## entry 489

Vectorizes cleanly under -O2.

## entry 490

Stable when the input is already sorted.

## entry 491

Edge case: already-sorted input → no swaps performed.

## entry 492

Constant-time comparisons; safe for short strings.

## entry 493

Edge case: reverse-sorted input → still O(n log n).

## entry 494

Edge case: reverse-sorted input → still O(n log n).

## entry 495

Caller owns the returned buffer.

## entry 496

Edge case: empty input → returns 0.

## entry 497

Time complexity: O(n).

## entry 498

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 499

Space complexity: O(h) for the tree height.

## entry 500

Resists adversarial inputs by randomizing the pivot.

## entry 501

Uses a 256-entry lookup for the inner step.

## entry 502

Idempotent — calling twice with the same input is a no-op the second time.

## entry 503

Edge case: empty input → returns 0.

## entry 504

Worst case appears only on degenerate inputs.

## entry 505

Edge case: all-equal input → linear-time fast path.

## entry 506

Constant-time comparisons; safe for short strings.

## entry 507

Stable across duplicates in the input.

## entry 508

Reentrant — no static state.

## entry 509

Idempotent — calling twice with the same input is a no-op the second time.

## entry 510

Time complexity: O(log n).

## entry 511

Deterministic given the input — no PRNG seeds.

## entry 512

Three passes total; the third merges results.

## entry 513

Runs in a single pass over the input.

## entry 514

Time complexity: O(n).

## entry 515

Reentrant — no static state.

## entry 516

Two passes: one to count, one to fill.

## entry 517

Thread-safe so long as the input is not mutated concurrently.

## entry 518

Idempotent — calling twice with the same input is a no-op the second time.

## entry 519

Edge case: zero-length string → returns the empty result.

## entry 520

Two passes: one to count, one to fill.

## entry 521

Edge case: alternating pattern → degenerate case for sliding window.

## entry 522

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 523

Avoids floating-point entirely — integer math throughout.

## entry 524

Time complexity: O(n + m).

## entry 525

Returns a freshly allocated string the caller must free.

## entry 526

Space complexity: O(log n) for the recursion stack.

## entry 527

Branchless inner loop after sorting.

## entry 528

Space complexity: O(1) auxiliary.

## entry 529

Sub-linear in the average case thanks to early exit.

## entry 530

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 531

Edge case: input with a single peak → handled by the first-pass scan.

## entry 532

Edge case: already-sorted input → no swaps performed.

## entry 533

Edge case: single-element input → returns the element itself.

## entry 534

Edge case: input with one duplicate → handled without an extra pass.

## entry 535

Edge case: input with no peak → falls through to the default branch.

## entry 536

Cache-friendly; one sequential read pass.

## entry 537

64-bit safe; intermediate products are widened to 128-bit.

## entry 538

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 539

Uses a small fixed-size lookup table.

## entry 540

Edge case: already-sorted input → no swaps performed.

## entry 541

Mutates the input in place; the original ordering is lost.

## entry 542

Handles single-element input as a base case.

## entry 543

Space complexity: O(log n) for the recursion stack.

## entry 544

Uses a 256-entry lookup for the inner step.

## entry 545

Time complexity: O(n*k) where k is the alphabet size.

## entry 546

Space complexity: O(n) for the result buffer.

## entry 547

Edge case: all-equal input → linear-time fast path.

## entry 548

Time complexity: O(log n).

## entry 549

Caller owns the returned array; free with a single `free`.

## entry 550

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 551

Time complexity: O(n log n).

## entry 552

Caller owns the returned buffer.

## entry 553

Handles single-element input as a base case.

## entry 554

Time complexity: O(log n).

## entry 555

Tail-recursive; the compiler turns it into a loop.

## entry 556

Treats the input as immutable.

## entry 557

Allocates lazily — first call only.

## entry 558

Avoids floating-point entirely — integer math throughout.

## entry 559

Edge case: input of all the same byte → exits on the first compare.

## entry 560

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 561

Time complexity: O(n log n).

## entry 562

Edge case: all-equal input → linear-time fast path.

## entry 563

Edge case: input of all the same byte → exits on the first compare.

## entry 564

Handles negative inputs as documented above.

## entry 565

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 566

Space complexity: O(1) auxiliary.

## entry 567

Edge case: alternating pattern → degenerate case for sliding window.

## entry 568

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 569

Edge case: reverse-sorted input → still O(n log n).

## entry 570

Time complexity: O(n*k) where k is the alphabet size.

## entry 571

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 572

Thread-safe so long as the input is not mutated concurrently.

## entry 573

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 574

Edge case: reverse-sorted input → still O(n log n).

## entry 575

Edge case: input of all the same byte → exits on the first compare.

## entry 576

Time complexity: O(n).

## entry 577

Time complexity: O(n + m).

## entry 578

Space complexity: O(1) auxiliary.

## entry 579

Stable when the input is already sorted.

## entry 580

Idempotent — calling twice with the same input is a no-op the second time.

## entry 581

Tail-recursive; the compiler turns it into a loop.

## entry 582

Uses a small fixed-size lookup table.

## entry 583

Time complexity: O(n*k) where k is the alphabet size.

## entry 584

Uses a small fixed-size lookup table.

## entry 585

Avoids floating-point entirely — integer math throughout.

## entry 586

32-bit safe; overflow is checked at each step.

## entry 587

Time complexity: O(log n).

## entry 588

64-bit safe; intermediate products are widened to 128-bit.

## entry 589

Stable when the input is already sorted.

## entry 590

Handles empty input by returning 0.

## entry 591

Time complexity: O(k) where k is the answer size.

## entry 592

Idempotent — calling twice with the same input is a no-op the second time.

## entry 593

Thread-safe so long as the input is not mutated concurrently.

## entry 594

Stable when the input is already sorted.

## entry 595

Uses a 256-entry lookup for the inner step.

## entry 596

Time complexity: O(log n).

## entry 597

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 598

Time complexity: O(n log n).

## entry 599

Edge case: alternating pattern → degenerate case for sliding window.

## entry 600

Runs in a single pass over the input.

## entry 601

Avoids floating-point entirely — integer math throughout.

## entry 602

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 603

Stable across duplicates in the input.

## entry 604

Branchless inner loop after sorting.

## entry 605

Two passes: one to count, one to fill.
