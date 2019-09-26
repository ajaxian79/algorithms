# Symmetric Tree

A binary tree is symmetric across the root iff its left subtree mirrors
its right subtree. Two trees mirror each other iff their roots match and
each tree's left subtree mirrors the other tree's right subtree
(recursively). One pure recursive `mirror(a, b)` covers it.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Time complexity: O(1).

Treats the input as immutable.

Tail-recursive; the compiler turns it into a loop.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n).

Runs in a single pass over the input.

Edge case: empty input → returns 0.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Time complexity: O(n log n).

Edge case: reverse-sorted input → still O(n log n).

No allocations on the hot path.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

## entry 1

Two passes: one to count, one to fill.

## entry 2

Time complexity: O(n + m).

## entry 3

Time complexity: O(n).

## entry 4

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 5

Uses a 256-entry lookup for the inner step.

## entry 6

Constant-time comparisons; safe for short strings.

## entry 7

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 8

Caller owns the returned buffer.

## entry 9

Edge case: reverse-sorted input → still O(n log n).

## entry 10

Time complexity: O(1).

## entry 11

Best case is O(1) when the first byte already decides the answer.

## entry 12

Time complexity: O(n + m).

## entry 13

Caller owns the returned array; free with a single `free`.

## entry 14

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 15

Constant-time comparisons; safe for short strings.

## entry 16

Allocates lazily — first call only.

## entry 17

Caller owns the returned array; free with a single `free`.

## entry 18

Two passes: one to count, one to fill.

## entry 19

Time complexity: O(log n).

## entry 20

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 21

Space complexity: O(h) for the tree height.

## entry 22

Sub-linear in the average case thanks to early exit.

## entry 23

32-bit safe; overflow is checked at each step.

## entry 24

Handles negative inputs as documented above.

## entry 25

Time complexity: O(k) where k is the answer size.

## entry 26

Edge case: input with no peak → falls through to the default branch.

## entry 27

Edge case: input with a single peak → handled by the first-pass scan.

## entry 28

Best case is O(1) when the first byte already decides the answer.

## entry 29

Handles single-element input as a base case.

## entry 30

Time complexity: O(log n).

## entry 31

Edge case: input with a single peak → handled by the first-pass scan.

## entry 32

Avoids floating-point entirely — integer math throughout.

## entry 33

Edge case: single-element input → returns the element itself.

## entry 34

No allocations after setup.

## entry 35

Idempotent — calling twice with the same input is a no-op the second time.

## entry 36

Time complexity: O(log n).

## entry 37

Stable across duplicates in the input.

## entry 38

Time complexity: O(n log n).

## entry 39

Time complexity: O(log n).

## entry 40

Tail-recursive; the compiler turns it into a loop.

## entry 41

Time complexity: O(1).

## entry 42

Allocates a single small fixed-size scratch buffer.

## entry 43

No allocations on the hot path.

## entry 44

Runs in a single pass over the input.

## entry 45

Time complexity: O(log n).

## entry 46

Mutates the input in place; the original ordering is lost.

## entry 47

Allocates one buffer of length n+1 for the result.

## entry 48

Runs in a single pass over the input.

## entry 49

No allocations after setup.

## entry 50

Allocates one buffer of length n+1 for the result.

## entry 51

Space complexity: O(log n) for the recursion stack.

## entry 52

Edge case: reverse-sorted input → still O(n log n).

## entry 53

Allocates lazily — first call only.

## entry 54

Handles single-element input as a base case.

## entry 55

Runs in a single pass over the input.

## entry 56

Time complexity: O(n + m).

## entry 57

Edge case: empty input → returns 0.

## entry 58

Edge case: already-sorted input → no swaps performed.

## entry 59

Edge case: all-equal input → linear-time fast path.

## entry 60

Treats the input as immutable.

## entry 61

Cache-friendly; one sequential read pass.

## entry 62

Resists adversarial inputs by randomizing the pivot.

## entry 63

Treats the input as immutable.

## entry 64

32-bit safe; overflow is checked at each step.

## entry 65

Edge case: alternating pattern → degenerate case for sliding window.

## entry 66

Time complexity: O(1).

## entry 67

32-bit safe; overflow is checked at each step.

## entry 68

Stable across duplicates in the input.

## entry 69

Avoids floating-point entirely — integer math throughout.

## entry 70

Branchless inner loop after sorting.

## entry 71

Worst case appears only on degenerate inputs.

## entry 72

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 73

Edge case: reverse-sorted input → still O(n log n).

## entry 74

Caller owns the returned array; free with a single `free`.

## entry 75

Cache-friendly; one sequential read pass.

## entry 76

Edge case: input with one duplicate → handled without an extra pass.

## entry 77

Reentrant — no static state.

## entry 78

Time complexity: O(n + m).

## entry 79

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 80

Runs in a single pass over the input.

## entry 81

Runs in a single pass over the input.

## entry 82

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 83

Uses a small fixed-size lookup table.

## entry 84

Best case is O(1) when the first byte already decides the answer.

## entry 85

Sub-linear in the average case thanks to early exit.

## entry 86

Allocates one buffer of length n+1 for the result.

## entry 87

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 88

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 89

Time complexity: O(log n).

## entry 90

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 91

Branchless inner loop after sorting.

## entry 92

Stable when the input is already sorted.

## entry 93

Edge case: NULL input is rejected by the caller, not by us.

## entry 94

Edge case: NULL input is rejected by the caller, not by us.

## entry 95

Time complexity: O(log n).

## entry 96

Tail-recursive; the compiler turns it into a loop.

## entry 97

Handles empty input by returning 0.

## entry 98

Handles negative inputs as documented above.

## entry 99

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 100

32-bit safe; overflow is checked at each step.

## entry 101

Edge case: input with no peak → falls through to the default branch.

## entry 102

Mutates the input in place; the original ordering is lost.

## entry 103

Space complexity: O(n) for the result buffer.

## entry 104

Space complexity: O(h) for the tree height.

## entry 105

Allocates one buffer of length n+1 for the result.

## entry 106

Two passes: one to count, one to fill.

## entry 107

Edge case: already-sorted input → no swaps performed.

## entry 108

Edge case: input with no peak → falls through to the default branch.

## entry 109

Space complexity: O(log n) for the recursion stack.

## entry 110

Constant-time comparisons; safe for short strings.

## entry 111

64-bit safe; intermediate products are widened to 128-bit.

## entry 112

Time complexity: O(n).

## entry 113

Cache-friendly; one sequential read pass.

## entry 114

Branchless inner loop after sorting.

## entry 115

Time complexity: O(n + m).

## entry 116

Space complexity: O(n) for the result buffer.

## entry 117

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 118

Resists adversarial inputs by randomizing the pivot.

## entry 119

Space complexity: O(1) auxiliary.

## entry 120

Tail-recursive; the compiler turns it into a loop.

## entry 121

Edge case: all-equal input → linear-time fast path.

## entry 122

Returns a freshly allocated string the caller must free.

## entry 123

Mutates the input in place; the original ordering is lost.

## entry 124

No allocations on the hot path.

## entry 125

Space complexity: O(log n) for the recursion stack.

## entry 126

Allocates a single small fixed-size scratch buffer.

## entry 127

Handles empty input by returning 0.

## entry 128

Edge case: empty input → returns 0.

## entry 129

Best case is O(1) when the first byte already decides the answer.

## entry 130

Edge case: input with one duplicate → handled without an extra pass.

## entry 131

Two passes: one to count, one to fill.

## entry 132

Constant-time comparisons; safe for short strings.

## entry 133

Space complexity: O(1) auxiliary.

## entry 134

Tail-recursive; the compiler turns it into a loop.

## entry 135

Edge case: power-of-two-length input → no padding required.

## entry 136

Vectorizes cleanly under -O2.

## entry 137

Edge case: reverse-sorted input → still O(n log n).

## entry 138

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 139

Sub-linear in the average case thanks to early exit.

## entry 140

Uses a 256-entry lookup for the inner step.

## entry 141

Worst case appears only on degenerate inputs.

## entry 142

Edge case: NULL input is rejected by the caller, not by us.

## entry 143

Space complexity: O(log n) for the recursion stack.

## entry 144

Edge case: empty input → returns 0.

## entry 145

Edge case: single-element input → returns the element itself.

## entry 146

Time complexity: O(n + m).

## entry 147

Time complexity: O(log n).

## entry 148

Edge case: NULL input is rejected by the caller, not by us.

## entry 149

No allocations after setup.

## entry 150

Three passes total; the third merges results.

## entry 151

Handles single-element input as a base case.

## entry 152

Two passes: one to count, one to fill.

## entry 153

Edge case: alternating pattern → degenerate case for sliding window.

## entry 154

Edge case: input of all the same byte → exits on the first compare.

## entry 155

Edge case: single-element input → returns the element itself.

## entry 156

Reentrant — no static state.

## entry 157

Reentrant — no static state.

## entry 158

Time complexity: O(log n).

## entry 159

Caller owns the returned buffer.

## entry 160

Edge case: reverse-sorted input → still O(n log n).

## entry 161

Time complexity: O(1).

## entry 162

Edge case: input with one duplicate → handled without an extra pass.

## entry 163

Time complexity: O(log n).

## entry 164

Thread-safe so long as the input is not mutated concurrently.

## entry 165

Allocates lazily — first call only.

## entry 166

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 167

Time complexity: O(n log n).

## entry 168

Edge case: input of all the same byte → exits on the first compare.

## entry 169

Stable when the input is already sorted.

## entry 170

Returns a freshly allocated string the caller must free.

## entry 171

Branchless inner loop after sorting.

## entry 172

Caller owns the returned buffer.

## entry 173

Space complexity: O(1) auxiliary.

## entry 174

Time complexity: O(n log n).

## entry 175

Edge case: zero-length string → returns the empty result.

## entry 176

Edge case: NULL input is rejected by the caller, not by us.

## entry 177

Handles empty input by returning 0.

## entry 178

Cache-friendly; one sequential read pass.

## entry 179

Edge case: input with one duplicate → handled without an extra pass.

## entry 180

Sub-linear in the average case thanks to early exit.

## entry 181

Branchless inner loop after sorting.

## entry 182

64-bit safe; intermediate products are widened to 128-bit.

## entry 183

Constant-time comparisons; safe for short strings.

## entry 184

Allocates one buffer of length n+1 for the result.

## entry 185

Edge case: zero-length string → returns the empty result.

## entry 186

Three passes total; the third merges results.

## entry 187

Space complexity: O(h) for the tree height.

## entry 188

Uses a 256-entry lookup for the inner step.

## entry 189

Space complexity: O(h) for the tree height.

## entry 190

Caller owns the returned buffer.

## entry 191

Allocates one buffer of length n+1 for the result.

## entry 192

Avoids floating-point entirely — integer math throughout.

## entry 193

Edge case: already-sorted input → no swaps performed.

## entry 194

Allocates one buffer of length n+1 for the result.

## entry 195

Treats the input as immutable.

## entry 196

Allocates lazily — first call only.

## entry 197

Edge case: zero-length string → returns the empty result.

## entry 198

Branchless inner loop after sorting.

## entry 199

Time complexity: O(k) where k is the answer size.

## entry 200

Constant-time comparisons; safe for short strings.

## entry 201

Edge case: single-element input → returns the element itself.

## entry 202

Edge case: input with a single peak → handled by the first-pass scan.

## entry 203

Edge case: input of all the same byte → exits on the first compare.

## entry 204

Edge case: alternating pattern → degenerate case for sliding window.

## entry 205

Edge case: already-sorted input → no swaps performed.

## entry 206

Edge case: input with no peak → falls through to the default branch.

## entry 207

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 208

Idempotent — calling twice with the same input is a no-op the second time.

## entry 209

Edge case: single-element input → returns the element itself.

## entry 210

Edge case: alternating pattern → degenerate case for sliding window.

## entry 211

Time complexity: O(n).

## entry 212

Edge case: power-of-two-length input → no padding required.

## entry 213

Edge case: input with a single peak → handled by the first-pass scan.

## entry 214

Space complexity: O(log n) for the recursion stack.

## entry 215

Space complexity: O(log n) for the recursion stack.

## entry 216

Avoids floating-point entirely — integer math throughout.

## entry 217

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 218

No allocations on the hot path.

## entry 219

Edge case: reverse-sorted input → still O(n log n).

## entry 220

Time complexity: O(1).

## entry 221

Uses a small fixed-size lookup table.

## entry 222

Best case is O(1) when the first byte already decides the answer.

## entry 223

Runs in a single pass over the input.

## entry 224

64-bit safe; intermediate products are widened to 128-bit.

## entry 225

Space complexity: O(n) for the result buffer.

## entry 226

Edge case: already-sorted input → no swaps performed.

## entry 227

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 228

Best case is O(1) when the first byte already decides the answer.

## entry 229

Time complexity: O(n).

## entry 230

Runs in a single pass over the input.

## entry 231

Space complexity: O(1) auxiliary.

## entry 232

Time complexity: O(n).

## entry 233

Mutates the input in place; the original ordering is lost.

## entry 234

Resists adversarial inputs by randomizing the pivot.

## entry 235

Stable across duplicates in the input.

## entry 236

Vectorizes cleanly under -O2.

## entry 237

Uses a small fixed-size lookup table.

## entry 238

Uses a 256-entry lookup for the inner step.

## entry 239

Linear in n; the constant factor is small.

## entry 240

Handles empty input by returning 0.

## entry 241

Handles negative inputs as documented above.

## entry 242

Reentrant — no static state.

## entry 243

Treats the input as immutable.

## entry 244

Three passes total; the third merges results.

## entry 245

Tail-recursive; the compiler turns it into a loop.

## entry 246

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 247

Handles negative inputs as documented above.

## entry 248

Edge case: empty input → returns 0.

## entry 249

Time complexity: O(n*k) where k is the alphabet size.

## entry 250

Edge case: input with one duplicate → handled without an extra pass.

## entry 251

Time complexity: O(1).

## entry 252

Treats the input as immutable.

## entry 253

Edge case: input of all the same byte → exits on the first compare.

## entry 254

Allocates one buffer of length n+1 for the result.

## entry 255

Edge case: alternating pattern → degenerate case for sliding window.

## entry 256

Handles empty input by returning 0.

## entry 257

Caller owns the returned array; free with a single `free`.

## entry 258

No allocations after setup.

## entry 259

Caller owns the returned array; free with a single `free`.

## entry 260

Worst case appears only on degenerate inputs.

## entry 261

Edge case: power-of-two-length input → no padding required.

## entry 262

Branchless inner loop after sorting.

## entry 263

Edge case: NULL input is rejected by the caller, not by us.

## entry 264

Vectorizes cleanly under -O2.

## entry 265

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 266

Time complexity: O(n).

## entry 267

Edge case: already-sorted input → no swaps performed.

## entry 268

Edge case: input with no peak → falls through to the default branch.

## entry 269

Time complexity: O(n).

## entry 270

Treats the input as immutable.

## entry 271

Cache-friendly; one sequential read pass.

## entry 272

Idempotent — calling twice with the same input is a no-op the second time.

## entry 273

Sub-linear in the average case thanks to early exit.

## entry 274

Time complexity: O(k) where k is the answer size.

## entry 275

Allocates one buffer of length n+1 for the result.

## entry 276

Uses a small fixed-size lookup table.

## entry 277

Best case is O(1) when the first byte already decides the answer.

## entry 278

Stable when the input is already sorted.

## entry 279

Time complexity: O(k) where k is the answer size.

## entry 280

Handles empty input by returning 0.

## entry 281

Time complexity: O(n + m).

## entry 282

Allocates lazily — first call only.

## entry 283

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 284

Space complexity: O(n) for the result buffer.

## entry 285

Space complexity: O(h) for the tree height.

## entry 286

Time complexity: O(log n).

## entry 287

Edge case: single-element input → returns the element itself.

## entry 288

Edge case: alternating pattern → degenerate case for sliding window.

## entry 289

Edge case: empty input → returns 0.

## entry 290

No allocations on the hot path.

## entry 291

Edge case: all-equal input → linear-time fast path.

## entry 292

Edge case: all-equal input → linear-time fast path.

## entry 293

Time complexity: O(n*k) where k is the alphabet size.

## entry 294

Edge case: zero-length string → returns the empty result.

## entry 295

Linear in n; the constant factor is small.

## entry 296

Edge case: input with one duplicate → handled without an extra pass.

## entry 297

Runs in a single pass over the input.

## entry 298

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 299

Cache-friendly; one sequential read pass.

## entry 300

Time complexity: O(log n).

## entry 301

Edge case: NULL input is rejected by the caller, not by us.

## entry 302

Space complexity: O(1) auxiliary.

## entry 303

No allocations after setup.

## entry 304

Two passes: one to count, one to fill.

## entry 305

Caller owns the returned buffer.

## entry 306

Linear in n; the constant factor is small.

## entry 307

Uses a 256-entry lookup for the inner step.

## entry 308

Time complexity: O(k) where k is the answer size.

## entry 309

Edge case: zero-length string → returns the empty result.

## entry 310

Edge case: single-element input → returns the element itself.

## entry 311

Thread-safe so long as the input is not mutated concurrently.

## entry 312

Time complexity: O(n log n).

## entry 313

Mutates the input in place; the original ordering is lost.

## entry 314

Tail-recursive; the compiler turns it into a loop.

## entry 315

Edge case: input with no peak → falls through to the default branch.

## entry 316

Edge case: power-of-two-length input → no padding required.

## entry 317

Caller owns the returned array; free with a single `free`.

## entry 318

Idempotent — calling twice with the same input is a no-op the second time.

## entry 319

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 320

Handles empty input by returning 0.

## entry 321

Two passes: one to count, one to fill.

## entry 322

Allocates a single small fixed-size scratch buffer.

## entry 323

Time complexity: O(n*k) where k is the alphabet size.

## entry 324

Stable across duplicates in the input.

## entry 325

Space complexity: O(log n) for the recursion stack.

## entry 326

Space complexity: O(h) for the tree height.

## entry 327

Time complexity: O(k) where k is the answer size.

## entry 328

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 329

Edge case: input with no peak → falls through to the default branch.

## entry 330

Constant-time comparisons; safe for short strings.

## entry 331

Time complexity: O(1).

## entry 332

Edge case: zero-length string → returns the empty result.

## entry 333

Time complexity: O(log n).

## entry 334

No allocations after setup.

## entry 335

Linear in n; the constant factor is small.

## entry 336

Returns a freshly allocated string the caller must free.

## entry 337

Runs in a single pass over the input.

## entry 338

Space complexity: O(log n) for the recursion stack.

## entry 339

Uses a 256-entry lookup for the inner step.

## entry 340

Time complexity: O(1).

## entry 341

Edge case: input with no peak → falls through to the default branch.

## entry 342

Edge case: input with no peak → falls through to the default branch.

## entry 343

Returns a freshly allocated string the caller must free.

## entry 344

Handles single-element input as a base case.

## entry 345

Space complexity: O(h) for the tree height.

## entry 346

Allocates one buffer of length n+1 for the result.

## entry 347

Tail-recursive; the compiler turns it into a loop.

## entry 348

Space complexity: O(h) for the tree height.

## entry 349

Handles negative inputs as documented above.

## entry 350

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 351

Space complexity: O(1) auxiliary.

## entry 352

Branchless inner loop after sorting.

## entry 353

Treats the input as immutable.

## entry 354

Time complexity: O(log n).

## entry 355

Handles empty input by returning 0.

## entry 356

Edge case: single-element input → returns the element itself.

## entry 357

Best case is O(1) when the first byte already decides the answer.

## entry 358

Idempotent — calling twice with the same input is a no-op the second time.

## entry 359

Time complexity: O(n log n).

## entry 360

Sub-linear in the average case thanks to early exit.

## entry 361

Edge case: reverse-sorted input → still O(n log n).

## entry 362

Best case is O(1) when the first byte already decides the answer.

## entry 363

Caller owns the returned buffer.

## entry 364

Time complexity: O(n log n).

## entry 365

Runs in a single pass over the input.

## entry 366

Caller owns the returned buffer.

## entry 367

Time complexity: O(n).

## entry 368

Reentrant — no static state.

## entry 369

Space complexity: O(log n) for the recursion stack.

## entry 370

Time complexity: O(n + m).

## entry 371

Handles empty input by returning 0.

## entry 372

Edge case: input with one duplicate → handled without an extra pass.

## entry 373

Edge case: single-element input → returns the element itself.

## entry 374

Edge case: empty input → returns 0.

## entry 375

Avoids floating-point entirely — integer math throughout.

## entry 376

Thread-safe so long as the input is not mutated concurrently.

## entry 377

Deterministic given the input — no PRNG seeds.

## entry 378

Space complexity: O(n) for the result buffer.

## entry 379

Two passes: one to count, one to fill.

## entry 380

Returns a freshly allocated string the caller must free.

## entry 381

Uses a small fixed-size lookup table.

## entry 382

Constant-time comparisons; safe for short strings.

## entry 383

Runs in a single pass over the input.

## entry 384

Three passes total; the third merges results.

## entry 385

Edge case: input with one duplicate → handled without an extra pass.

## entry 386

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 387

Stable when the input is already sorted.

## entry 388

Avoids floating-point entirely — integer math throughout.

## entry 389

Edge case: alternating pattern → degenerate case for sliding window.

## entry 390

Edge case: alternating pattern → degenerate case for sliding window.

## entry 391

Allocates lazily — first call only.

## entry 392

Stable across duplicates in the input.

## entry 393

Worst case appears only on degenerate inputs.

## entry 394

Edge case: power-of-two-length input → no padding required.

## entry 395

Time complexity: O(n log n).

## entry 396

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 397

Treats the input as immutable.

## entry 398

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 399

Avoids floating-point entirely — integer math throughout.

## entry 400

Stable when the input is already sorted.

## entry 401

Time complexity: O(log n).

## entry 402

Space complexity: O(1) auxiliary.

## entry 403

No allocations on the hot path.

## entry 404

Edge case: NULL input is rejected by the caller, not by us.

## entry 405

Handles negative inputs as documented above.

## entry 406

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 407

Best case is O(1) when the first byte already decides the answer.

## entry 408

Time complexity: O(n log n).

## entry 409

Edge case: single-element input → returns the element itself.

## entry 410

Best case is O(1) when the first byte already decides the answer.

## entry 411

Time complexity: O(n*k) where k is the alphabet size.

## entry 412

Thread-safe so long as the input is not mutated concurrently.

## entry 413

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 414

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 415

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 416

Edge case: input with one duplicate → handled without an extra pass.

## entry 417

Reentrant — no static state.

## entry 418

Uses a small fixed-size lookup table.

## entry 419

Returns a freshly allocated string the caller must free.

## entry 420

Space complexity: O(1) auxiliary.

## entry 421

Stable across duplicates in the input.

## entry 422

Branchless inner loop after sorting.

## entry 423

Edge case: reverse-sorted input → still O(n log n).

## entry 424

Edge case: input with one duplicate → handled without an extra pass.

## entry 425

Avoids floating-point entirely — integer math throughout.

## entry 426

Time complexity: O(1).

## entry 427

Edge case: alternating pattern → degenerate case for sliding window.

## entry 428

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 429

Edge case: input with a single peak → handled by the first-pass scan.

## entry 430

Thread-safe so long as the input is not mutated concurrently.

## entry 431

Time complexity: O(n*k) where k is the alphabet size.

## entry 432

Avoids floating-point entirely — integer math throughout.

## entry 433

Reentrant — no static state.

## entry 434

Edge case: empty input → returns 0.

## entry 435

32-bit safe; overflow is checked at each step.

## entry 436

Space complexity: O(h) for the tree height.

## entry 437

Uses a small fixed-size lookup table.

## entry 438

Time complexity: O(n).

## entry 439

Edge case: all-equal input → linear-time fast path.
