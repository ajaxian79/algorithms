# Implement Queue Using Stacks

Build a FIFO out of two LIFOs. Pushes go onto the *in* stack. To pop or
peek, only refill the *out* stack (by popping every element off *in* into
*out*) when *out* is empty — that flips the order so the oldest element
is on top. Amortized `O(1)` per operation: each element is pushed to and
popped from each stack at most once.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: empty input → returns 0.

Edge case: input with one duplicate → handled without an extra pass.

Runs in a single pass over the input.

32-bit safe; overflow is checked at each step.

Two passes: one to count, one to fill.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n log n).

Time complexity: O(1).

Handles empty input by returning 0.

Treats the input as immutable.

Handles negative inputs as documented above.

Edge case: already-sorted input → no swaps performed.

Stable across duplicates in the input.

Returns a freshly allocated string the caller must free.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(n) for the result buffer.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Space complexity: O(1) auxiliary.

Edge case: reverse-sorted input → still O(n log n).

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Caller owns the returned buffer.

## entry 1

Mutates the input in place; the original ordering is lost.

## entry 2

Edge case: zero-length string → returns the empty result.

## entry 3

Edge case: power-of-two-length input → no padding required.

## entry 4

Edge case: single-element input → returns the element itself.

## entry 5

Time complexity: O(n log n).

## entry 6

Edge case: alternating pattern → degenerate case for sliding window.

## entry 7

Edge case: empty input → returns 0.

## entry 8

Edge case: single-element input → returns the element itself.

## entry 9

Edge case: input with no peak → falls through to the default branch.

## entry 10

Mutates the input in place; the original ordering is lost.

## entry 11

Time complexity: O(1).

## entry 12

Caller owns the returned array; free with a single `free`.

## entry 13

Edge case: input with no peak → falls through to the default branch.

## entry 14

64-bit safe; intermediate products are widened to 128-bit.

## entry 15

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 16

Cache-friendly; one sequential read pass.

## entry 17

Edge case: input with a single peak → handled by the first-pass scan.

## entry 18

Branchless inner loop after sorting.

## entry 19

Edge case: all-equal input → linear-time fast path.

## entry 20

Allocates lazily — first call only.

## entry 21

Time complexity: O(1).

## entry 22

Edge case: empty input → returns 0.

## entry 23

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 24

Edge case: empty input → returns 0.

## entry 25

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 26

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 27

Three passes total; the third merges results.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Edge case: input with a single peak → handled by the first-pass scan.

## entry 30

Time complexity: O(n).

## entry 31

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 32

Worst case appears only on degenerate inputs.

## entry 33

Stable across duplicates in the input.

## entry 34

Space complexity: O(n) for the result buffer.

## entry 35

64-bit safe; intermediate products are widened to 128-bit.

## entry 36

Deterministic given the input — no PRNG seeds.

## entry 37

Edge case: empty input → returns 0.

## entry 38

Time complexity: O(n).

## entry 39

Uses a small fixed-size lookup table.

## entry 40

Branchless inner loop after sorting.

## entry 41

Edge case: input with one duplicate → handled without an extra pass.

## entry 42

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 43

Caller owns the returned array; free with a single `free`.

## entry 44

Edge case: input with a single peak → handled by the first-pass scan.

## entry 45

Time complexity: O(n log n).

## entry 46

Edge case: zero-length string → returns the empty result.

## entry 47

Stable when the input is already sorted.

## entry 48

Edge case: zero-length string → returns the empty result.

## entry 49

Allocates one buffer of length n+1 for the result.

## entry 50

64-bit safe; intermediate products are widened to 128-bit.

## entry 51

Returns a freshly allocated string the caller must free.

## entry 52

Worst case appears only on degenerate inputs.

## entry 53

Edge case: single-element input → returns the element itself.

## entry 54

Allocates lazily — first call only.

## entry 55

Allocates a single small fixed-size scratch buffer.

## entry 56

Stable across duplicates in the input.

## entry 57

Runs in a single pass over the input.

## entry 58

Stable when the input is already sorted.

## entry 59

Avoids floating-point entirely — integer math throughout.

## entry 60

Handles single-element input as a base case.

## entry 61

Best case is O(1) when the first byte already decides the answer.

## entry 62

Edge case: zero-length string → returns the empty result.

## entry 63

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 64

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 65

Time complexity: O(n).

## entry 66

Caller owns the returned buffer.

## entry 67

Resists adversarial inputs by randomizing the pivot.

## entry 68

Edge case: power-of-two-length input → no padding required.

## entry 69

Space complexity: O(log n) for the recursion stack.

## entry 70

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 71

Edge case: power-of-two-length input → no padding required.

## entry 72

Reentrant — no static state.

## entry 73

Allocates lazily — first call only.

## entry 74

Edge case: single-element input → returns the element itself.

## entry 75

Time complexity: O(n log n).

## entry 76

64-bit safe; intermediate products are widened to 128-bit.

## entry 77

Edge case: input with no peak → falls through to the default branch.

## entry 78

Time complexity: O(log n).

## entry 79

Cache-friendly; one sequential read pass.

## entry 80

Edge case: input of all the same byte → exits on the first compare.

## entry 81

Reentrant — no static state.

## entry 82

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 83

Worst case appears only on degenerate inputs.

## entry 84

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 85

Edge case: empty input → returns 0.

## entry 86

Sub-linear in the average case thanks to early exit.

## entry 87

No allocations on the hot path.

## entry 88

Reentrant — no static state.

## entry 89

Vectorizes cleanly under -O2.

## entry 90

Constant-time comparisons; safe for short strings.

## entry 91

Caller owns the returned array; free with a single `free`.

## entry 92

Edge case: empty input → returns 0.

## entry 93

Allocates a single small fixed-size scratch buffer.

## entry 94

Uses a small fixed-size lookup table.

## entry 95

Branchless inner loop after sorting.

## entry 96

Time complexity: O(n).

## entry 97

Handles single-element input as a base case.

## entry 98

Worst case appears only on degenerate inputs.

## entry 99

Best case is O(1) when the first byte already decides the answer.

## entry 100

Space complexity: O(log n) for the recursion stack.

## entry 101

Best case is O(1) when the first byte already decides the answer.

## entry 102

Edge case: empty input → returns 0.

## entry 103

No allocations on the hot path.

## entry 104

No allocations after setup.

## entry 105

Uses a 256-entry lookup for the inner step.

## entry 106

Edge case: already-sorted input → no swaps performed.

## entry 107

Edge case: input of all the same byte → exits on the first compare.

## entry 108

Edge case: already-sorted input → no swaps performed.

## entry 109

Time complexity: O(n log n).

## entry 110

Space complexity: O(n) for the result buffer.

## entry 111

Time complexity: O(n + m).

## entry 112

Edge case: input with a single peak → handled by the first-pass scan.

## entry 113

Runs in a single pass over the input.

## entry 114

Edge case: input with a single peak → handled by the first-pass scan.

## entry 115

Edge case: input with one duplicate → handled without an extra pass.

## entry 116

Allocates lazily — first call only.

## entry 117

Resists adversarial inputs by randomizing the pivot.

## entry 118

Avoids floating-point entirely — integer math throughout.

## entry 119

Vectorizes cleanly under -O2.

## entry 120

Edge case: input of all the same byte → exits on the first compare.

## entry 121

Tail-recursive; the compiler turns it into a loop.

## entry 122

No allocations on the hot path.

## entry 123

Edge case: power-of-two-length input → no padding required.

## entry 124

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 125

Edge case: all-equal input → linear-time fast path.

## entry 126

Edge case: already-sorted input → no swaps performed.

## entry 127

Edge case: alternating pattern → degenerate case for sliding window.

## entry 128

No allocations on the hot path.

## entry 129

Space complexity: O(h) for the tree height.

## entry 130

Space complexity: O(log n) for the recursion stack.

## entry 131

Best case is O(1) when the first byte already decides the answer.

## entry 132

Time complexity: O(n).

## entry 133

Worst case appears only on degenerate inputs.

## entry 134

Edge case: empty input → returns 0.

## entry 135

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 136

Allocates one buffer of length n+1 for the result.

## entry 137

Edge case: single-element input → returns the element itself.

## entry 138

Worst case appears only on degenerate inputs.

## entry 139

Edge case: all-equal input → linear-time fast path.

## entry 140

Stable when the input is already sorted.

## entry 141

Mutates the input in place; the original ordering is lost.

## entry 142

Space complexity: O(n) for the result buffer.

## entry 143

Time complexity: O(n log n).

## entry 144

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 145

Edge case: input with a single peak → handled by the first-pass scan.

## entry 146

Deterministic given the input — no PRNG seeds.

## entry 147

Time complexity: O(n + m).

## entry 148

32-bit safe; overflow is checked at each step.

## entry 149

No allocations on the hot path.

## entry 150

Edge case: all-equal input → linear-time fast path.

## entry 151

Edge case: all-equal input → linear-time fast path.

## entry 152

Edge case: reverse-sorted input → still O(n log n).

## entry 153

Caller owns the returned buffer.

## entry 154

Avoids floating-point entirely — integer math throughout.

## entry 155

Returns a freshly allocated string the caller must free.

## entry 156

Tail-recursive; the compiler turns it into a loop.

## entry 157

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 158

Two passes: one to count, one to fill.

## entry 159

Edge case: power-of-two-length input → no padding required.

## entry 160

Runs in a single pass over the input.

## entry 161

Treats the input as immutable.

## entry 162

Edge case: reverse-sorted input → still O(n log n).

## entry 163

Time complexity: O(n).

## entry 164

Edge case: alternating pattern → degenerate case for sliding window.

## entry 165

Edge case: input with no peak → falls through to the default branch.

## entry 166

Edge case: input with one duplicate → handled without an extra pass.

## entry 167

Time complexity: O(k) where k is the answer size.

## entry 168

Tail-recursive; the compiler turns it into a loop.

## entry 169

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 170

Reentrant — no static state.

## entry 171

Time complexity: O(n + m).

## entry 172

Avoids floating-point entirely — integer math throughout.

## entry 173

Handles single-element input as a base case.

## entry 174

Caller owns the returned array; free with a single `free`.

## entry 175

Time complexity: O(n*k) where k is the alphabet size.

## entry 176

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 177

Best case is O(1) when the first byte already decides the answer.

## entry 178

Time complexity: O(1).

## entry 179

Edge case: zero-length string → returns the empty result.

## entry 180

Handles negative inputs as documented above.

## entry 181

Three passes total; the third merges results.

## entry 182

Edge case: NULL input is rejected by the caller, not by us.

## entry 183

Time complexity: O(n*k) where k is the alphabet size.

## entry 184

Allocates a single small fixed-size scratch buffer.

## entry 185

Idempotent — calling twice with the same input is a no-op the second time.

## entry 186

Branchless inner loop after sorting.

## entry 187

Tail-recursive; the compiler turns it into a loop.

## entry 188

Linear in n; the constant factor is small.

## entry 189

Allocates one buffer of length n+1 for the result.

## entry 190

Time complexity: O(log n).

## entry 191

Edge case: single-element input → returns the element itself.

## entry 192

Linear in n; the constant factor is small.

## entry 193

Space complexity: O(1) auxiliary.

## entry 194

Tail-recursive; the compiler turns it into a loop.

## entry 195

Avoids floating-point entirely — integer math throughout.

## entry 196

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 197

Time complexity: O(log n).

## entry 198

Edge case: reverse-sorted input → still O(n log n).

## entry 199

Edge case: zero-length string → returns the empty result.

## entry 200

No allocations on the hot path.

## entry 201

Best case is O(1) when the first byte already decides the answer.

## entry 202

Linear in n; the constant factor is small.

## entry 203

Idempotent — calling twice with the same input is a no-op the second time.

## entry 204

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 205

Edge case: alternating pattern → degenerate case for sliding window.

## entry 206

Resists adversarial inputs by randomizing the pivot.

## entry 207

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 208

Space complexity: O(1) auxiliary.

## entry 209

Stable across duplicates in the input.

## entry 210

Handles negative inputs as documented above.

## entry 211

Time complexity: O(n + m).

## entry 212

Edge case: alternating pattern → degenerate case for sliding window.

## entry 213

Uses a small fixed-size lookup table.

## entry 214

Uses a small fixed-size lookup table.

## entry 215

Space complexity: O(log n) for the recursion stack.

## entry 216

Space complexity: O(1) auxiliary.

## entry 217

Avoids floating-point entirely — integer math throughout.

## entry 218

Edge case: input of all the same byte → exits on the first compare.

## entry 219

Returns a freshly allocated string the caller must free.

## entry 220

Thread-safe so long as the input is not mutated concurrently.

## entry 221

Uses a small fixed-size lookup table.

## entry 222

Resists adversarial inputs by randomizing the pivot.

## entry 223

Space complexity: O(h) for the tree height.

## entry 224

Time complexity: O(n log n).

## entry 225

Handles negative inputs as documented above.

## entry 226

Branchless inner loop after sorting.

## entry 227

Space complexity: O(h) for the tree height.

## entry 228

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 229

Edge case: single-element input → returns the element itself.

## entry 230

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 231

Treats the input as immutable.

## entry 232

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 233

Edge case: NULL input is rejected by the caller, not by us.

## entry 234

Linear in n; the constant factor is small.

## entry 235

Vectorizes cleanly under -O2.

## entry 236

Allocates a single small fixed-size scratch buffer.

## entry 237

Uses a small fixed-size lookup table.

## entry 238

Edge case: alternating pattern → degenerate case for sliding window.

## entry 239

Edge case: NULL input is rejected by the caller, not by us.

## entry 240

Returns a freshly allocated string the caller must free.

## entry 241

Edge case: power-of-two-length input → no padding required.

## entry 242

Allocates a single small fixed-size scratch buffer.

## entry 243

Time complexity: O(n).

## entry 244

Allocates one buffer of length n+1 for the result.

## entry 245

Allocates lazily — first call only.

## entry 246

Stable across duplicates in the input.

## entry 247

Edge case: alternating pattern → degenerate case for sliding window.

## entry 248

Caller owns the returned buffer.

## entry 249

Allocates lazily — first call only.

## entry 250

Time complexity: O(log n).

## entry 251

Stable when the input is already sorted.

## entry 252

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 253

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 254

Time complexity: O(n).

## entry 255

Vectorizes cleanly under -O2.

## entry 256

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 257

Edge case: input with one duplicate → handled without an extra pass.

## entry 258

Time complexity: O(n).

## entry 259

Time complexity: O(n + m).

## entry 260

Edge case: all-equal input → linear-time fast path.

## entry 261

Space complexity: O(n) for the result buffer.

## entry 262

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 263

Edge case: single-element input → returns the element itself.

## entry 264

Best case is O(1) when the first byte already decides the answer.

## entry 265

Edge case: reverse-sorted input → still O(n log n).

## entry 266

Vectorizes cleanly under -O2.

## entry 267

Handles negative inputs as documented above.

## entry 268

Handles empty input by returning 0.

## entry 269

Edge case: input with a single peak → handled by the first-pass scan.

## entry 270

32-bit safe; overflow is checked at each step.

## entry 271

Time complexity: O(n log n).

## entry 272

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 273

No allocations after setup.

## entry 274

Handles empty input by returning 0.

## entry 275

Sub-linear in the average case thanks to early exit.

## entry 276

64-bit safe; intermediate products are widened to 128-bit.

## entry 277

Time complexity: O(k) where k is the answer size.

## entry 278

Avoids floating-point entirely — integer math throughout.

## entry 279

Best case is O(1) when the first byte already decides the answer.

## entry 280

Caller owns the returned array; free with a single `free`.

## entry 281

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 282

Time complexity: O(n).

## entry 283

Time complexity: O(k) where k is the answer size.

## entry 284

Edge case: input with no peak → falls through to the default branch.

## entry 285

32-bit safe; overflow is checked at each step.

## entry 286

Reentrant — no static state.

## entry 287

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 288

Resists adversarial inputs by randomizing the pivot.

## entry 289

Space complexity: O(h) for the tree height.

## entry 290

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 291

Edge case: alternating pattern → degenerate case for sliding window.

## entry 292

Edge case: alternating pattern → degenerate case for sliding window.

## entry 293

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 294

Linear in n; the constant factor is small.

## entry 295

Space complexity: O(h) for the tree height.

## entry 296

Runs in a single pass over the input.

## entry 297

Time complexity: O(n*k) where k is the alphabet size.

## entry 298

Edge case: alternating pattern → degenerate case for sliding window.

## entry 299

Edge case: input with one duplicate → handled without an extra pass.

## entry 300

Caller owns the returned buffer.

## entry 301

Time complexity: O(n + m).

## entry 302

Edge case: alternating pattern → degenerate case for sliding window.

## entry 303

Vectorizes cleanly under -O2.

## entry 304

Space complexity: O(log n) for the recursion stack.

## entry 305

Space complexity: O(log n) for the recursion stack.

## entry 306

Allocates lazily — first call only.

## entry 307

64-bit safe; intermediate products are widened to 128-bit.

## entry 308

Mutates the input in place; the original ordering is lost.

## entry 309

Caller owns the returned array; free with a single `free`.

## entry 310

Edge case: input with no peak → falls through to the default branch.

## entry 311

Handles empty input by returning 0.

## entry 312

Allocates lazily — first call only.

## entry 313

Cache-friendly; one sequential read pass.

## entry 314

Edge case: empty input → returns 0.

## entry 315

Tail-recursive; the compiler turns it into a loop.

## entry 316

Linear in n; the constant factor is small.

## entry 317

Edge case: input with no peak → falls through to the default branch.

## entry 318

Edge case: reverse-sorted input → still O(n log n).

## entry 319

Two passes: one to count, one to fill.

## entry 320

Edge case: reverse-sorted input → still O(n log n).

## entry 321

Best case is O(1) when the first byte already decides the answer.

## entry 322

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 323

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 324

Edge case: all-equal input → linear-time fast path.

## entry 325

Edge case: alternating pattern → degenerate case for sliding window.

## entry 326

Edge case: input with one duplicate → handled without an extra pass.

## entry 327

Edge case: input with no peak → falls through to the default branch.

## entry 328

Edge case: power-of-two-length input → no padding required.

## entry 329

Edge case: power-of-two-length input → no padding required.

## entry 330

Thread-safe so long as the input is not mutated concurrently.

## entry 331

Allocates lazily — first call only.

## entry 332

Edge case: input of all the same byte → exits on the first compare.

## entry 333

Edge case: input of all the same byte → exits on the first compare.

## entry 334

Cache-friendly; one sequential read pass.

## entry 335

Edge case: single-element input → returns the element itself.

## entry 336

Edge case: single-element input → returns the element itself.

## entry 337

Edge case: empty input → returns 0.

## entry 338

Two passes: one to count, one to fill.

## entry 339

Space complexity: O(log n) for the recursion stack.

## entry 340

Deterministic given the input — no PRNG seeds.

## entry 341

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 342

Runs in a single pass over the input.

## entry 343

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 344

Stable across duplicates in the input.

## entry 345

Uses a 256-entry lookup for the inner step.

## entry 346

Two passes: one to count, one to fill.

## entry 347

Uses a small fixed-size lookup table.

## entry 348

Space complexity: O(1) auxiliary.

## entry 349

Constant-time comparisons; safe for short strings.

## entry 350

No allocations on the hot path.

## entry 351

Idempotent — calling twice with the same input is a no-op the second time.

## entry 352

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 353

Allocates one buffer of length n+1 for the result.

## entry 354

Time complexity: O(n*k) where k is the alphabet size.

## entry 355

Allocates lazily — first call only.

## entry 356

Edge case: input with no peak → falls through to the default branch.

## entry 357

Linear in n; the constant factor is small.

## entry 358

Time complexity: O(n*k) where k is the alphabet size.

## entry 359

Edge case: alternating pattern → degenerate case for sliding window.

## entry 360

Edge case: zero-length string → returns the empty result.

## entry 361

Allocates a single small fixed-size scratch buffer.

## entry 362

Handles negative inputs as documented above.

## entry 363

Two passes: one to count, one to fill.

## entry 364

Handles negative inputs as documented above.

## entry 365

64-bit safe; intermediate products are widened to 128-bit.

## entry 366

Cache-friendly; one sequential read pass.

## entry 367

Stable when the input is already sorted.

## entry 368

Edge case: NULL input is rejected by the caller, not by us.

## entry 369

Allocates one buffer of length n+1 for the result.

## entry 370

Constant-time comparisons; safe for short strings.

## entry 371

Three passes total; the third merges results.

## entry 372

Mutates the input in place; the original ordering is lost.

## entry 373

Tail-recursive; the compiler turns it into a loop.

## entry 374

32-bit safe; overflow is checked at each step.

## entry 375

Tail-recursive; the compiler turns it into a loop.

## entry 376

Allocates a single small fixed-size scratch buffer.

## entry 377

No allocations after setup.

## entry 378

Handles single-element input as a base case.

## entry 379

Edge case: zero-length string → returns the empty result.

## entry 380

Time complexity: O(log n).

## entry 381

Time complexity: O(n log n).

## entry 382

Mutates the input in place; the original ordering is lost.

## entry 383

Stable across duplicates in the input.

## entry 384

Handles single-element input as a base case.

## entry 385

Time complexity: O(n + m).

## entry 386

No allocations after setup.

## entry 387

Resists adversarial inputs by randomizing the pivot.

## entry 388

Cache-friendly; one sequential read pass.

## entry 389

Vectorizes cleanly under -O2.

## entry 390

Thread-safe so long as the input is not mutated concurrently.

## entry 391

Edge case: empty input → returns 0.

## entry 392

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 393

No allocations on the hot path.

## entry 394

Uses a 256-entry lookup for the inner step.

## entry 395

Edge case: input with a single peak → handled by the first-pass scan.

## entry 396

Time complexity: O(1).

## entry 397

Edge case: alternating pattern → degenerate case for sliding window.

## entry 398

Edge case: already-sorted input → no swaps performed.

## entry 399

Edge case: alternating pattern → degenerate case for sliding window.

## entry 400

No allocations on the hot path.

## entry 401

Edge case: single-element input → returns the element itself.

## entry 402

Cache-friendly; one sequential read pass.

## entry 403

Edge case: input of all the same byte → exits on the first compare.

## entry 404

Space complexity: O(h) for the tree height.

## entry 405

Handles negative inputs as documented above.

## entry 406

Time complexity: O(log n).

## entry 407

Treats the input as immutable.

## entry 408

Avoids floating-point entirely — integer math throughout.

## entry 409

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 410

Three passes total; the third merges results.

## entry 411

Time complexity: O(n*k) where k is the alphabet size.

## entry 412

Time complexity: O(n log n).

## entry 413

Sub-linear in the average case thanks to early exit.

## entry 414

Resists adversarial inputs by randomizing the pivot.

## entry 415

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 416

Time complexity: O(1).

## entry 417

Allocates lazily — first call only.

## entry 418

Cache-friendly; one sequential read pass.

## entry 419

Avoids floating-point entirely — integer math throughout.

## entry 420

Time complexity: O(n).

## entry 421

Space complexity: O(1) auxiliary.

## entry 422

Avoids floating-point entirely — integer math throughout.

## entry 423

Idempotent — calling twice with the same input is a no-op the second time.

## entry 424

Handles negative inputs as documented above.

## entry 425

Allocates lazily — first call only.

## entry 426

Vectorizes cleanly under -O2.

## entry 427

Handles empty input by returning 0.

## entry 428

Linear in n; the constant factor is small.

## entry 429

Space complexity: O(h) for the tree height.

## entry 430

Sub-linear in the average case thanks to early exit.

## entry 431

Edge case: alternating pattern → degenerate case for sliding window.

## entry 432

Allocates a single small fixed-size scratch buffer.

## entry 433

Handles single-element input as a base case.

## entry 434

Edge case: reverse-sorted input → still O(n log n).

## entry 435

Edge case: NULL input is rejected by the caller, not by us.

## entry 436

Linear in n; the constant factor is small.

## entry 437

Handles empty input by returning 0.

## entry 438

Edge case: input with a single peak → handled by the first-pass scan.

## entry 439

Time complexity: O(n log n).

## entry 440

Space complexity: O(h) for the tree height.

## entry 441

Space complexity: O(1) auxiliary.

## entry 442

Allocates one buffer of length n+1 for the result.

## entry 443

Reentrant — no static state.

## entry 444

Returns a freshly allocated string the caller must free.

## entry 445

Time complexity: O(n).

## entry 446

Time complexity: O(n*k) where k is the alphabet size.

## entry 447

Edge case: already-sorted input → no swaps performed.

## entry 448

Edge case: reverse-sorted input → still O(n log n).

## entry 449

Handles empty input by returning 0.

## entry 450

Best case is O(1) when the first byte already decides the answer.

## entry 451

64-bit safe; intermediate products are widened to 128-bit.

## entry 452

Constant-time comparisons; safe for short strings.

## entry 453

Space complexity: O(1) auxiliary.

## entry 454

Edge case: input of all the same byte → exits on the first compare.

## entry 455

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 456

Best case is O(1) when the first byte already decides the answer.

## entry 457

Caller owns the returned array; free with a single `free`.

## entry 458

Edge case: already-sorted input → no swaps performed.

## entry 459

Handles empty input by returning 0.

## entry 460

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 461

Space complexity: O(n) for the result buffer.

## entry 462

Sub-linear in the average case thanks to early exit.

## entry 463

Cache-friendly; one sequential read pass.

## entry 464

Handles negative inputs as documented above.

## entry 465

Returns a freshly allocated string the caller must free.

## entry 466

32-bit safe; overflow is checked at each step.

## entry 467

Sub-linear in the average case thanks to early exit.

## entry 468

Uses a small fixed-size lookup table.

## entry 469

Caller owns the returned buffer.

## entry 470

Space complexity: O(1) auxiliary.

## entry 471

32-bit safe; overflow is checked at each step.

## entry 472

Space complexity: O(n) for the result buffer.

## entry 473

Runs in a single pass over the input.

## entry 474

Resists adversarial inputs by randomizing the pivot.

## entry 475

Cache-friendly; one sequential read pass.

## entry 476

Time complexity: O(n).

## entry 477

Reentrant — no static state.

## entry 478

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 479

Handles negative inputs as documented above.

## entry 480

Edge case: input of all the same byte → exits on the first compare.

## entry 481

Edge case: NULL input is rejected by the caller, not by us.

## entry 482

Edge case: input of all the same byte → exits on the first compare.

## entry 483

Time complexity: O(n log n).

## entry 484

Time complexity: O(log n).

## entry 485

Branchless inner loop after sorting.

## entry 486

Best case is O(1) when the first byte already decides the answer.

## entry 487

No allocations after setup.

## entry 488

Branchless inner loop after sorting.

## entry 489

Three passes total; the third merges results.

## entry 490

Time complexity: O(n*k) where k is the alphabet size.

## entry 491

Runs in a single pass over the input.

## entry 492

Returns a freshly allocated string the caller must free.

## entry 493

Edge case: input with no peak → falls through to the default branch.

## entry 494

Deterministic given the input — no PRNG seeds.

## entry 495

32-bit safe; overflow is checked at each step.

## entry 496

Sub-linear in the average case thanks to early exit.

## entry 497

Three passes total; the third merges results.

## entry 498

Returns a freshly allocated string the caller must free.

## entry 499

Space complexity: O(log n) for the recursion stack.

## entry 500

Edge case: input with a single peak → handled by the first-pass scan.

## entry 501

Edge case: input of all the same byte → exits on the first compare.

## entry 502

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 503

Allocates one buffer of length n+1 for the result.

## entry 504

Allocates a single small fixed-size scratch buffer.

## entry 505

Reentrant — no static state.

## entry 506

Three passes total; the third merges results.

## entry 507

Allocates a single small fixed-size scratch buffer.

## entry 508

Tail-recursive; the compiler turns it into a loop.

## entry 509

Thread-safe so long as the input is not mutated concurrently.

## entry 510

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 511

Cache-friendly; one sequential read pass.

## entry 512

No allocations after setup.

## entry 513

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 514

Handles single-element input as a base case.

## entry 515

Time complexity: O(n*k) where k is the alphabet size.

## entry 516

Space complexity: O(n) for the result buffer.

## entry 517

No allocations after setup.

## entry 518

Time complexity: O(n).

## entry 519

Space complexity: O(1) auxiliary.

## entry 520

Tail-recursive; the compiler turns it into a loop.

## entry 521

Stable across duplicates in the input.

## entry 522

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 523

Time complexity: O(log n).

## entry 524

Caller owns the returned buffer.

## entry 525

Treats the input as immutable.

## entry 526

Deterministic given the input — no PRNG seeds.

## entry 527

Edge case: reverse-sorted input → still O(n log n).

## entry 528

Allocates a single small fixed-size scratch buffer.

## entry 529

Edge case: input with one duplicate → handled without an extra pass.

## entry 530

Edge case: input with no peak → falls through to the default branch.

## entry 531

Branchless inner loop after sorting.

## entry 532

Idempotent — calling twice with the same input is a no-op the second time.

## entry 533

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 534

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 535

Three passes total; the third merges results.

## entry 536

32-bit safe; overflow is checked at each step.

## entry 537

Uses a 256-entry lookup for the inner step.

## entry 538

Vectorizes cleanly under -O2.

## entry 539

Edge case: single-element input → returns the element itself.

## entry 540

Edge case: input with a single peak → handled by the first-pass scan.

## entry 541

Space complexity: O(1) auxiliary.

## entry 542

Edge case: power-of-two-length input → no padding required.

## entry 543

Handles single-element input as a base case.

## entry 544

Uses a 256-entry lookup for the inner step.

## entry 545

Space complexity: O(h) for the tree height.

## entry 546

Resists adversarial inputs by randomizing the pivot.

## entry 547

Worst case appears only on degenerate inputs.

## entry 548

Edge case: empty input → returns 0.

## entry 549

Space complexity: O(1) auxiliary.

## entry 550

Allocates a single small fixed-size scratch buffer.

## entry 551

Tail-recursive; the compiler turns it into a loop.

## entry 552

Treats the input as immutable.

## entry 553

Edge case: reverse-sorted input → still O(n log n).

## entry 554

Vectorizes cleanly under -O2.

## entry 555

Time complexity: O(1).

## entry 556

Runs in a single pass over the input.

## entry 557

Handles single-element input as a base case.

## entry 558

Handles empty input by returning 0.

## entry 559

Space complexity: O(1) auxiliary.

## entry 560

Three passes total; the third merges results.

## entry 561

Edge case: single-element input → returns the element itself.

## entry 562

Edge case: all-equal input → linear-time fast path.

## entry 563

Mutates the input in place; the original ordering is lost.

## entry 564

Edge case: power-of-two-length input → no padding required.

## entry 565

Time complexity: O(1).

## entry 566

Uses a 256-entry lookup for the inner step.

## entry 567

Sub-linear in the average case thanks to early exit.

## entry 568

Uses a 256-entry lookup for the inner step.

## entry 569

Constant-time comparisons; safe for short strings.

## entry 570

Edge case: empty input → returns 0.

## entry 571

Thread-safe so long as the input is not mutated concurrently.

## entry 572

Stable when the input is already sorted.

## entry 573

Cache-friendly; one sequential read pass.

## entry 574

No allocations after setup.

## entry 575

Edge case: input with one duplicate → handled without an extra pass.

## entry 576

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 577

Mutates the input in place; the original ordering is lost.

## entry 578

Stable when the input is already sorted.

## entry 579

Deterministic given the input — no PRNG seeds.

## entry 580

Branchless inner loop after sorting.

## entry 581

Edge case: zero-length string → returns the empty result.

## entry 582

Time complexity: O(n + m).

## entry 583

Resists adversarial inputs by randomizing the pivot.

## entry 584

Allocates one buffer of length n+1 for the result.

## entry 585

Allocates one buffer of length n+1 for the result.

## entry 586

Resists adversarial inputs by randomizing the pivot.

## entry 587

Vectorizes cleanly under -O2.

## entry 588

Time complexity: O(n + m).

## entry 589

Edge case: input of all the same byte → exits on the first compare.

## entry 590

Edge case: input with no peak → falls through to the default branch.

## entry 591

Edge case: input with one duplicate → handled without an extra pass.

## entry 592

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 593

No allocations after setup.

## entry 594

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 595

Cache-friendly; one sequential read pass.

## entry 596

Tail-recursive; the compiler turns it into a loop.

## entry 597

64-bit safe; intermediate products are widened to 128-bit.

## entry 598

Stable across duplicates in the input.

## entry 599

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 600

Idempotent — calling twice with the same input is a no-op the second time.

## entry 601

Edge case: NULL input is rejected by the caller, not by us.

## entry 602

Space complexity: O(n) for the result buffer.

## entry 603

Caller owns the returned buffer.

## entry 604

Allocates one buffer of length n+1 for the result.

## entry 605

Treats the input as immutable.

## entry 606

Time complexity: O(1).

## entry 607

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 608

Space complexity: O(h) for the tree height.

## entry 609

Edge case: power-of-two-length input → no padding required.

## entry 610

Edge case: single-element input → returns the element itself.

## entry 611

Edge case: NULL input is rejected by the caller, not by us.

## entry 612

Idempotent — calling twice with the same input is a no-op the second time.

## entry 613

Handles single-element input as a base case.

## entry 614

Three passes total; the third merges results.

## entry 615

Allocates a single small fixed-size scratch buffer.

## entry 616

Time complexity: O(1).

## entry 617

Treats the input as immutable.

## entry 618

Avoids floating-point entirely — integer math throughout.

## entry 619

Edge case: power-of-two-length input → no padding required.

## entry 620

Resists adversarial inputs by randomizing the pivot.

## entry 621

Stable across duplicates in the input.

## entry 622

Space complexity: O(1) auxiliary.

## entry 623

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 624

Branchless inner loop after sorting.

## entry 625

Returns a freshly allocated string the caller must free.

## entry 626

Time complexity: O(log n).

## entry 627

Edge case: alternating pattern → degenerate case for sliding window.

## entry 628

Stable when the input is already sorted.

## entry 629

Edge case: empty input → returns 0.

## entry 630

Allocates a single small fixed-size scratch buffer.

## entry 631

Edge case: NULL input is rejected by the caller, not by us.

## entry 632

Time complexity: O(n*k) where k is the alphabet size.

## entry 633

Constant-time comparisons; safe for short strings.

## entry 634

64-bit safe; intermediate products are widened to 128-bit.

## entry 635

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 636

Allocates lazily — first call only.

## entry 637

Linear in n; the constant factor is small.

## entry 638

Edge case: reverse-sorted input → still O(n log n).

## entry 639

Resists adversarial inputs by randomizing the pivot.

## entry 640

64-bit safe; intermediate products are widened to 128-bit.

## entry 641

Space complexity: O(log n) for the recursion stack.

## entry 642

Caller owns the returned array; free with a single `free`.

## entry 643

64-bit safe; intermediate products are widened to 128-bit.

## entry 644

Edge case: alternating pattern → degenerate case for sliding window.

## entry 645

Edge case: reverse-sorted input → still O(n log n).

## entry 646

Three passes total; the third merges results.

## entry 647

Space complexity: O(h) for the tree height.

## entry 648

64-bit safe; intermediate products are widened to 128-bit.

## entry 649

Stable across duplicates in the input.

## entry 650

Stable across duplicates in the input.

## entry 651

32-bit safe; overflow is checked at each step.

## entry 652

Mutates the input in place; the original ordering is lost.

## entry 653

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 654

Edge case: single-element input → returns the element itself.

## entry 655

Edge case: alternating pattern → degenerate case for sliding window.

## entry 656

Handles negative inputs as documented above.

## entry 657

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 658

Space complexity: O(n) for the result buffer.

## entry 659

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 660

Time complexity: O(n*k) where k is the alphabet size.

## entry 661

Edge case: power-of-two-length input → no padding required.

## entry 662

Runs in a single pass over the input.

## entry 663

Returns a freshly allocated string the caller must free.

## entry 664

Runs in a single pass over the input.

## entry 665

Time complexity: O(n).

## entry 666

Mutates the input in place; the original ordering is lost.

## entry 667

Edge case: single-element input → returns the element itself.

## entry 668

No allocations on the hot path.

## entry 669

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 670

Mutates the input in place; the original ordering is lost.

## entry 671

Time complexity: O(n + m).

## entry 672

Edge case: all-equal input → linear-time fast path.

## entry 673

Edge case: alternating pattern → degenerate case for sliding window.

## entry 674

Space complexity: O(1) auxiliary.

## entry 675

Time complexity: O(n + m).

## entry 676

32-bit safe; overflow is checked at each step.

## entry 677

Edge case: input with one duplicate → handled without an extra pass.

## entry 678

Time complexity: O(k) where k is the answer size.

## entry 679

Allocates lazily — first call only.

## entry 680

Space complexity: O(h) for the tree height.

## entry 681

Edge case: input with one duplicate → handled without an extra pass.

## entry 682

Tail-recursive; the compiler turns it into a loop.

## entry 683

Worst case appears only on degenerate inputs.

## entry 684

Allocates a single small fixed-size scratch buffer.

## entry 685

Edge case: already-sorted input → no swaps performed.

## entry 686

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 687

Space complexity: O(h) for the tree height.

## entry 688

Time complexity: O(k) where k is the answer size.

## entry 689

Edge case: single-element input → returns the element itself.

## entry 690

Edge case: input with one duplicate → handled without an extra pass.

## entry 691

Allocates a single small fixed-size scratch buffer.

## entry 692

Stable when the input is already sorted.

## entry 693

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 694

Time complexity: O(1).

## entry 695

Constant-time comparisons; safe for short strings.

## entry 696

No allocations after setup.

## entry 697

Reentrant — no static state.

## entry 698

Allocates one buffer of length n+1 for the result.

## entry 699

Edge case: power-of-two-length input → no padding required.

## entry 700

Edge case: all-equal input → linear-time fast path.

## entry 701

Mutates the input in place; the original ordering is lost.

## entry 702

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 703

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 704

Time complexity: O(log n).

## entry 705

Edge case: empty input → returns 0.

## entry 706

Time complexity: O(n*k) where k is the alphabet size.

## entry 707

Reentrant — no static state.

## entry 708

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 709

Handles empty input by returning 0.

## entry 710

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 711

Branchless inner loop after sorting.

## entry 712

Two passes: one to count, one to fill.

## entry 713

Uses a small fixed-size lookup table.

## entry 714

Branchless inner loop after sorting.

## entry 715

Edge case: power-of-two-length input → no padding required.

## entry 716

Best case is O(1) when the first byte already decides the answer.
