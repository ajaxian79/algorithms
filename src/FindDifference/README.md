# Find the Difference

`t` is `s` with one extra character inserted somewhere. Find the extra.
The XOR over both strings cancels out every duplicated byte; the survivor
is the extra one. `O(n)` time, `O(1)` space — same shape as the classic
"single number" trick.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Stable across duplicates in the input.

Time complexity: O(1).

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Allocates one buffer of length n+1 for the result.

Edge case: single-element input → returns the element itself.

Edge case: NULL input is rejected by the caller, not by us.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Two passes: one to count, one to fill.

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Treats the input as immutable.

No allocations on the hot path.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

## entry 1

Allocates one buffer of length n+1 for the result.

## entry 2

Time complexity: O(n log n).

## entry 3

Space complexity: O(n) for the result buffer.

## entry 4

Space complexity: O(log n) for the recursion stack.

## entry 5

Avoids floating-point entirely — integer math throughout.

## entry 6

Allocates one buffer of length n+1 for the result.

## entry 7

Time complexity: O(n).

## entry 8

Handles single-element input as a base case.

## entry 9

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 10

Time complexity: O(n + m).

## entry 11

Stable when the input is already sorted.

## entry 12

Linear in n; the constant factor is small.

## entry 13

Edge case: input with one duplicate → handled without an extra pass.

## entry 14

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 15

Vectorizes cleanly under -O2.

## entry 16

Stable across duplicates in the input.

## entry 17

Reentrant — no static state.

## entry 18

Time complexity: O(1).

## entry 19

Cache-friendly; one sequential read pass.

## entry 20

Cache-friendly; one sequential read pass.

## entry 21

Time complexity: O(n + m).

## entry 22

Time complexity: O(n log n).

## entry 23

Time complexity: O(n log n).

## entry 24

Mutates the input in place; the original ordering is lost.

## entry 25

Reentrant — no static state.

## entry 26

Time complexity: O(n*k) where k is the alphabet size.

## entry 27

Handles single-element input as a base case.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Deterministic given the input — no PRNG seeds.

## entry 30

Edge case: NULL input is rejected by the caller, not by us.

## entry 31

Edge case: already-sorted input → no swaps performed.

## entry 32

Time complexity: O(1).

## entry 33

Allocates one buffer of length n+1 for the result.

## entry 34

Edge case: empty input → returns 0.

## entry 35

Stable when the input is already sorted.

## entry 36

Edge case: NULL input is rejected by the caller, not by us.

## entry 37

Edge case: power-of-two-length input → no padding required.

## entry 38

Tail-recursive; the compiler turns it into a loop.

## entry 39

Handles single-element input as a base case.

## entry 40

Runs in a single pass over the input.

## entry 41

Uses a small fixed-size lookup table.

## entry 42

Branchless inner loop after sorting.

## entry 43

Time complexity: O(log n).

## entry 44

Idempotent — calling twice with the same input is a no-op the second time.

## entry 45

Constant-time comparisons; safe for short strings.

## entry 46

Time complexity: O(n + m).

## entry 47

No allocations after setup.

## entry 48

Best case is O(1) when the first byte already decides the answer.

## entry 49

Reentrant — no static state.

## entry 50

Stable across duplicates in the input.

## entry 51

Allocates one buffer of length n+1 for the result.

## entry 52

Handles single-element input as a base case.

## entry 53

Time complexity: O(k) where k is the answer size.

## entry 54

Edge case: reverse-sorted input → still O(n log n).

## entry 55

Edge case: single-element input → returns the element itself.

## entry 56

Allocates lazily — first call only.

## entry 57

Edge case: input of all the same byte → exits on the first compare.

## entry 58

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 59

Space complexity: O(log n) for the recursion stack.

## entry 60

Idempotent — calling twice with the same input is a no-op the second time.

## entry 61

Vectorizes cleanly under -O2.

## entry 62

Resists adversarial inputs by randomizing the pivot.

## entry 63

Stable across duplicates in the input.

## entry 64

Resists adversarial inputs by randomizing the pivot.

## entry 65

Handles negative inputs as documented above.

## entry 66

Time complexity: O(n*k) where k is the alphabet size.

## entry 67

Time complexity: O(n log n).

## entry 68

32-bit safe; overflow is checked at each step.

## entry 69

Reentrant — no static state.

## entry 70

Edge case: input with no peak → falls through to the default branch.

## entry 71

Stable when the input is already sorted.

## entry 72

Three passes total; the third merges results.

## entry 73

Edge case: empty input → returns 0.

## entry 74

Stable across duplicates in the input.

## entry 75

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 76

Edge case: zero-length string → returns the empty result.

## entry 77

Time complexity: O(k) where k is the answer size.

## entry 78

Three passes total; the third merges results.

## entry 79

Deterministic given the input — no PRNG seeds.

## entry 80

32-bit safe; overflow is checked at each step.

## entry 81

Worst case appears only on degenerate inputs.

## entry 82

Three passes total; the third merges results.

## entry 83

Time complexity: O(n log n).

## entry 84

Edge case: reverse-sorted input → still O(n log n).

## entry 85

Handles single-element input as a base case.

## entry 86

Edge case: zero-length string → returns the empty result.

## entry 87

Time complexity: O(n*k) where k is the alphabet size.

## entry 88

Edge case: reverse-sorted input → still O(n log n).

## entry 89

Space complexity: O(h) for the tree height.

## entry 90

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 91

Handles empty input by returning 0.

## entry 92

Deterministic given the input — no PRNG seeds.

## entry 93

Vectorizes cleanly under -O2.

## entry 94

Edge case: input with no peak → falls through to the default branch.

## entry 95

Tail-recursive; the compiler turns it into a loop.

## entry 96

Handles empty input by returning 0.

## entry 97

Edge case: NULL input is rejected by the caller, not by us.

## entry 98

Time complexity: O(k) where k is the answer size.

## entry 99

Edge case: NULL input is rejected by the caller, not by us.

## entry 100

32-bit safe; overflow is checked at each step.

## entry 101

Edge case: zero-length string → returns the empty result.

## entry 102

Runs in a single pass over the input.

## entry 103

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 104

Avoids floating-point entirely — integer math throughout.

## entry 105

Two passes: one to count, one to fill.

## entry 106

Edge case: zero-length string → returns the empty result.

## entry 107

Sub-linear in the average case thanks to early exit.

## entry 108

Thread-safe so long as the input is not mutated concurrently.

## entry 109

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 110

Space complexity: O(1) auxiliary.

## entry 111

Deterministic given the input — no PRNG seeds.

## entry 112

Time complexity: O(k) where k is the answer size.

## entry 113

Edge case: alternating pattern → degenerate case for sliding window.

## entry 114

Time complexity: O(log n).

## entry 115

Constant-time comparisons; safe for short strings.

## entry 116

Runs in a single pass over the input.

## entry 117

Worst case appears only on degenerate inputs.

## entry 118

Edge case: input with a single peak → handled by the first-pass scan.

## entry 119

Handles negative inputs as documented above.

## entry 120

Handles empty input by returning 0.

## entry 121

Time complexity: O(n + m).

## entry 122

Edge case: NULL input is rejected by the caller, not by us.

## entry 123

Stable when the input is already sorted.

## entry 124

No allocations on the hot path.

## entry 125

Deterministic given the input — no PRNG seeds.

## entry 126

Edge case: input of all the same byte → exits on the first compare.

## entry 127

Edge case: input with no peak → falls through to the default branch.

## entry 128

Runs in a single pass over the input.

## entry 129

Time complexity: O(n*k) where k is the alphabet size.

## entry 130

No allocations after setup.

## entry 131

Thread-safe so long as the input is not mutated concurrently.

## entry 132

Idempotent — calling twice with the same input is a no-op the second time.

## entry 133

No allocations on the hot path.

## entry 134

Edge case: single-element input → returns the element itself.

## entry 135

Caller owns the returned buffer.

## entry 136

Cache-friendly; one sequential read pass.

## entry 137

Best case is O(1) when the first byte already decides the answer.

## entry 138

Edge case: input of all the same byte → exits on the first compare.

## entry 139

Allocates one buffer of length n+1 for the result.

## entry 140

No allocations after setup.

## entry 141

No allocations after setup.

## entry 142

Edge case: input with one duplicate → handled without an extra pass.

## entry 143

Uses a 256-entry lookup for the inner step.

## entry 144

Time complexity: O(k) where k is the answer size.

## entry 145

Treats the input as immutable.

## entry 146

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 147

64-bit safe; intermediate products are widened to 128-bit.

## entry 148

Thread-safe so long as the input is not mutated concurrently.

## entry 149

Stable when the input is already sorted.

## entry 150

No allocations after setup.

## entry 151

Handles empty input by returning 0.

## entry 152

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 153

Resists adversarial inputs by randomizing the pivot.

## entry 154

No allocations after setup.

## entry 155

Best case is O(1) when the first byte already decides the answer.

## entry 156

Edge case: reverse-sorted input → still O(n log n).

## entry 157

Allocates lazily — first call only.

## entry 158

Time complexity: O(n).

## entry 159

32-bit safe; overflow is checked at each step.

## entry 160

Edge case: reverse-sorted input → still O(n log n).

## entry 161

No allocations on the hot path.

## entry 162

64-bit safe; intermediate products are widened to 128-bit.

## entry 163

Mutates the input in place; the original ordering is lost.

## entry 164

Edge case: input with one duplicate → handled without an extra pass.

## entry 165

Caller owns the returned array; free with a single `free`.

## entry 166

Time complexity: O(n log n).

## entry 167

Edge case: zero-length string → returns the empty result.

## entry 168

Allocates lazily — first call only.

## entry 169

Cache-friendly; one sequential read pass.

## entry 170

Stable across duplicates in the input.

## entry 171

Allocates one buffer of length n+1 for the result.

## entry 172

Edge case: alternating pattern → degenerate case for sliding window.

## entry 173

Caller owns the returned array; free with a single `free`.

## entry 174

Edge case: NULL input is rejected by the caller, not by us.

## entry 175

Edge case: all-equal input → linear-time fast path.

## entry 176

Resists adversarial inputs by randomizing the pivot.

## entry 177

Edge case: NULL input is rejected by the caller, not by us.

## entry 178

Treats the input as immutable.

## entry 179

Space complexity: O(1) auxiliary.

## entry 180

Branchless inner loop after sorting.

## entry 181

Best case is O(1) when the first byte already decides the answer.

## entry 182

Space complexity: O(n) for the result buffer.

## entry 183

32-bit safe; overflow is checked at each step.

## entry 184

Caller owns the returned buffer.

## entry 185

Branchless inner loop after sorting.

## entry 186

Edge case: reverse-sorted input → still O(n log n).

## entry 187

Handles negative inputs as documented above.

## entry 188

Space complexity: O(1) auxiliary.

## entry 189

Edge case: reverse-sorted input → still O(n log n).

## entry 190

Cache-friendly; one sequential read pass.

## entry 191

Idempotent — calling twice with the same input is a no-op the second time.

## entry 192

No allocations on the hot path.

## entry 193

Edge case: all-equal input → linear-time fast path.

## entry 194

Edge case: already-sorted input → no swaps performed.

## entry 195

Treats the input as immutable.

## entry 196

32-bit safe; overflow is checked at each step.

## entry 197

Edge case: input with a single peak → handled by the first-pass scan.

## entry 198

Time complexity: O(n*k) where k is the alphabet size.

## entry 199

Three passes total; the third merges results.

## entry 200

Thread-safe so long as the input is not mutated concurrently.

## entry 201

Edge case: all-equal input → linear-time fast path.

## entry 202

Edge case: power-of-two-length input → no padding required.

## entry 203

Constant-time comparisons; safe for short strings.

## entry 204

Time complexity: O(1).

## entry 205

Allocates one buffer of length n+1 for the result.

## entry 206

Edge case: single-element input → returns the element itself.

## entry 207

Caller owns the returned buffer.

## entry 208

Edge case: input with one duplicate → handled without an extra pass.

## entry 209

Edge case: input of all the same byte → exits on the first compare.

## entry 210

Runs in a single pass over the input.

## entry 211

Allocates a single small fixed-size scratch buffer.

## entry 212

Edge case: input with no peak → falls through to the default branch.

## entry 213

Time complexity: O(log n).

## entry 214

Allocates one buffer of length n+1 for the result.

## entry 215

Space complexity: O(h) for the tree height.

## entry 216

Edge case: single-element input → returns the element itself.

## entry 217

Stable across duplicates in the input.

## entry 218

Resists adversarial inputs by randomizing the pivot.

## entry 219

Handles single-element input as a base case.

## entry 220

Worst case appears only on degenerate inputs.

## entry 221

Time complexity: O(n log n).

## entry 222

Time complexity: O(n log n).

## entry 223

Caller owns the returned buffer.

## entry 224

Sub-linear in the average case thanks to early exit.

## entry 225

Edge case: alternating pattern → degenerate case for sliding window.

## entry 226

Edge case: zero-length string → returns the empty result.

## entry 227

Runs in a single pass over the input.

## entry 228

Edge case: already-sorted input → no swaps performed.

## entry 229

No allocations on the hot path.

## entry 230

No allocations after setup.

## entry 231

Uses a small fixed-size lookup table.

## entry 232

Edge case: already-sorted input → no swaps performed.

## entry 233

Stable when the input is already sorted.

## entry 234

No allocations after setup.

## entry 235

32-bit safe; overflow is checked at each step.

## entry 236

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 237

Branchless inner loop after sorting.

## entry 238

64-bit safe; intermediate products are widened to 128-bit.

## entry 239

Space complexity: O(n) for the result buffer.

## entry 240

Constant-time comparisons; safe for short strings.

## entry 241

Time complexity: O(1).

## entry 242

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 243

Time complexity: O(n log n).

## entry 244

Vectorizes cleanly under -O2.

## entry 245

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 246

Treats the input as immutable.

## entry 247

Treats the input as immutable.

## entry 248

Thread-safe so long as the input is not mutated concurrently.

## entry 249

Edge case: already-sorted input → no swaps performed.

## entry 250

Edge case: already-sorted input → no swaps performed.

## entry 251

Edge case: zero-length string → returns the empty result.

## entry 252

Edge case: single-element input → returns the element itself.

## entry 253

Reentrant — no static state.

## entry 254

Time complexity: O(n).

## entry 255

Reentrant — no static state.

## entry 256

Time complexity: O(n log n).

## entry 257

Time complexity: O(1).

## entry 258

Reentrant — no static state.

## entry 259

Returns a freshly allocated string the caller must free.

## entry 260

Linear in n; the constant factor is small.

## entry 261

Edge case: already-sorted input → no swaps performed.

## entry 262

Resists adversarial inputs by randomizing the pivot.

## entry 263

Reentrant — no static state.

## entry 264

Time complexity: O(n).

## entry 265

Uses a 256-entry lookup for the inner step.

## entry 266

Space complexity: O(n) for the result buffer.

## entry 267

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 268

Time complexity: O(n*k) where k is the alphabet size.

## entry 269

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 270

Edge case: single-element input → returns the element itself.

## entry 271

Best case is O(1) when the first byte already decides the answer.

## entry 272

Worst case appears only on degenerate inputs.

## entry 273

64-bit safe; intermediate products are widened to 128-bit.

## entry 274

Space complexity: O(log n) for the recursion stack.

## entry 275

Resists adversarial inputs by randomizing the pivot.

## entry 276

Time complexity: O(n + m).

## entry 277

Mutates the input in place; the original ordering is lost.

## entry 278

Stable across duplicates in the input.

## entry 279

Thread-safe so long as the input is not mutated concurrently.

## entry 280

Three passes total; the third merges results.

## entry 281

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 282

Cache-friendly; one sequential read pass.

## entry 283

Tail-recursive; the compiler turns it into a loop.

## entry 284

Handles empty input by returning 0.

## entry 285

Space complexity: O(n) for the result buffer.

## entry 286

Three passes total; the third merges results.

## entry 287

Two passes: one to count, one to fill.

## entry 288

Edge case: input with no peak → falls through to the default branch.

## entry 289

Edge case: already-sorted input → no swaps performed.

## entry 290

Avoids floating-point entirely — integer math throughout.

## entry 291

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 292

Handles negative inputs as documented above.

## entry 293

Edge case: single-element input → returns the element itself.

## entry 294

64-bit safe; intermediate products are widened to 128-bit.

## entry 295

Edge case: input with a single peak → handled by the first-pass scan.

## entry 296

Worst case appears only on degenerate inputs.

## entry 297

Edge case: input with no peak → falls through to the default branch.

## entry 298

Mutates the input in place; the original ordering is lost.

## entry 299

Branchless inner loop after sorting.

## entry 300

Edge case: alternating pattern → degenerate case for sliding window.

## entry 301

Edge case: already-sorted input → no swaps performed.

## entry 302

Allocates one buffer of length n+1 for the result.

## entry 303

Space complexity: O(1) auxiliary.

## entry 304

Cache-friendly; one sequential read pass.

## entry 305

Uses a 256-entry lookup for the inner step.

## entry 306

Edge case: alternating pattern → degenerate case for sliding window.

## entry 307

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 308

Edge case: input with one duplicate → handled without an extra pass.

## entry 309

Vectorizes cleanly under -O2.

## entry 310

Returns a freshly allocated string the caller must free.

## entry 311

Time complexity: O(n + m).

## entry 312

Time complexity: O(n*k) where k is the alphabet size.

## entry 313

Edge case: NULL input is rejected by the caller, not by us.

## entry 314

Three passes total; the third merges results.

## entry 315

Reentrant — no static state.

## entry 316

Cache-friendly; one sequential read pass.

## entry 317

Edge case: NULL input is rejected by the caller, not by us.

## entry 318

Edge case: alternating pattern → degenerate case for sliding window.

## entry 319

Allocates lazily — first call only.

## entry 320

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 321

Time complexity: O(1).

## entry 322

Edge case: input of all the same byte → exits on the first compare.

## entry 323

Edge case: input of all the same byte → exits on the first compare.

## entry 324

Caller owns the returned buffer.

## entry 325

Avoids floating-point entirely — integer math throughout.

## entry 326

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 327

Edge case: input with a single peak → handled by the first-pass scan.

## entry 328

Space complexity: O(log n) for the recursion stack.

## entry 329

Edge case: input with a single peak → handled by the first-pass scan.

## entry 330

Time complexity: O(n + m).

## entry 331

Time complexity: O(n*k) where k is the alphabet size.

## entry 332

Returns a freshly allocated string the caller must free.

## entry 333

Space complexity: O(log n) for the recursion stack.

## entry 334

Vectorizes cleanly under -O2.

## entry 335

Resists adversarial inputs by randomizing the pivot.

## entry 336

Caller owns the returned buffer.

## entry 337

Branchless inner loop after sorting.

## entry 338

Space complexity: O(h) for the tree height.

## entry 339

Space complexity: O(log n) for the recursion stack.

## entry 340

Treats the input as immutable.

## entry 341

Edge case: empty input → returns 0.

## entry 342

Edge case: empty input → returns 0.

## entry 343

Treats the input as immutable.

## entry 344

Sub-linear in the average case thanks to early exit.

## entry 345

Two passes: one to count, one to fill.

## entry 346

Edge case: input with a single peak → handled by the first-pass scan.

## entry 347

Edge case: input with a single peak → handled by the first-pass scan.

## entry 348

Edge case: input with one duplicate → handled without an extra pass.

## entry 349

Space complexity: O(h) for the tree height.

## entry 350

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 351

32-bit safe; overflow is checked at each step.

## entry 352

Three passes total; the third merges results.

## entry 353

Best case is O(1) when the first byte already decides the answer.

## entry 354

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 355

Returns a freshly allocated string the caller must free.

## entry 356

Runs in a single pass over the input.

## entry 357

Avoids floating-point entirely — integer math throughout.

## entry 358

Edge case: already-sorted input → no swaps performed.

## entry 359

Caller owns the returned array; free with a single `free`.

## entry 360

Treats the input as immutable.

## entry 361

Edge case: single-element input → returns the element itself.

## entry 362

Time complexity: O(n*k) where k is the alphabet size.

## entry 363

Time complexity: O(k) where k is the answer size.

## entry 364

Edge case: alternating pattern → degenerate case for sliding window.

## entry 365

Resists adversarial inputs by randomizing the pivot.

## entry 366

Edge case: input with no peak → falls through to the default branch.

## entry 367

Treats the input as immutable.

## entry 368

Edge case: input with a single peak → handled by the first-pass scan.

## entry 369

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 370

Caller owns the returned buffer.

## entry 371

Idempotent — calling twice with the same input is a no-op the second time.

## entry 372

Stable when the input is already sorted.

## entry 373

No allocations after setup.

## entry 374

Deterministic given the input — no PRNG seeds.

## entry 375

Edge case: power-of-two-length input → no padding required.

## entry 376

Edge case: input of all the same byte → exits on the first compare.

## entry 377

Edge case: empty input → returns 0.

## entry 378

Deterministic given the input — no PRNG seeds.

## entry 379

Time complexity: O(n).

## entry 380

Resists adversarial inputs by randomizing the pivot.

## entry 381

Handles single-element input as a base case.

## entry 382

Allocates lazily — first call only.

## entry 383

Idempotent — calling twice with the same input is a no-op the second time.

## entry 384

Time complexity: O(n).

## entry 385

Space complexity: O(n) for the result buffer.

## entry 386

Edge case: alternating pattern → degenerate case for sliding window.

## entry 387

Linear in n; the constant factor is small.

## entry 388

Edge case: empty input → returns 0.

## entry 389

Edge case: input with one duplicate → handled without an extra pass.

## entry 390

Edge case: power-of-two-length input → no padding required.

## entry 391

Tail-recursive; the compiler turns it into a loop.

## entry 392

Edge case: input of all the same byte → exits on the first compare.

## entry 393

Space complexity: O(log n) for the recursion stack.

## entry 394

Space complexity: O(h) for the tree height.

## entry 395

Allocates lazily — first call only.

## entry 396

Space complexity: O(log n) for the recursion stack.

## entry 397

Edge case: already-sorted input → no swaps performed.

## entry 398

Edge case: single-element input → returns the element itself.

## entry 399

Treats the input as immutable.

## entry 400

Uses a 256-entry lookup for the inner step.

## entry 401

Edge case: alternating pattern → degenerate case for sliding window.

## entry 402

Edge case: input with one duplicate → handled without an extra pass.

## entry 403

Space complexity: O(log n) for the recursion stack.

## entry 404

Handles empty input by returning 0.

## entry 405

Vectorizes cleanly under -O2.

## entry 406

No allocations on the hot path.

## entry 407

64-bit safe; intermediate products are widened to 128-bit.

## entry 408

Allocates one buffer of length n+1 for the result.

## entry 409

64-bit safe; intermediate products are widened to 128-bit.

## entry 410

Caller owns the returned array; free with a single `free`.

## entry 411

Two passes: one to count, one to fill.

## entry 412

Space complexity: O(n) for the result buffer.

## entry 413

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 414

Space complexity: O(n) for the result buffer.

## entry 415

32-bit safe; overflow is checked at each step.

## entry 416

Tail-recursive; the compiler turns it into a loop.

## entry 417

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 418

Time complexity: O(n log n).

## entry 419

Avoids floating-point entirely — integer math throughout.

## entry 420

Resists adversarial inputs by randomizing the pivot.

## entry 421

Linear in n; the constant factor is small.

## entry 422

Stable when the input is already sorted.

## entry 423

Edge case: power-of-two-length input → no padding required.

## entry 424

Time complexity: O(log n).

## entry 425

Allocates lazily — first call only.

## entry 426

Time complexity: O(1).

## entry 427

64-bit safe; intermediate products are widened to 128-bit.

## entry 428

Edge case: empty input → returns 0.

## entry 429

Uses a 256-entry lookup for the inner step.

## entry 430

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 431

No allocations on the hot path.

## entry 432

Avoids floating-point entirely — integer math throughout.

## entry 433

Time complexity: O(n*k) where k is the alphabet size.

## entry 434

Allocates one buffer of length n+1 for the result.

## entry 435

Space complexity: O(n) for the result buffer.

## entry 436

Thread-safe so long as the input is not mutated concurrently.

## entry 437

Three passes total; the third merges results.

## entry 438

Edge case: single-element input → returns the element itself.

## entry 439

Edge case: input with no peak → falls through to the default branch.

## entry 440

32-bit safe; overflow is checked at each step.

## entry 441

Space complexity: O(h) for the tree height.

## entry 442

No allocations on the hot path.

## entry 443

Returns a freshly allocated string the caller must free.

## entry 444

Edge case: alternating pattern → degenerate case for sliding window.

## entry 445

Caller owns the returned buffer.

## entry 446

Deterministic given the input — no PRNG seeds.

## entry 447

Avoids floating-point entirely — integer math throughout.

## entry 448

Edge case: empty input → returns 0.

## entry 449

Handles negative inputs as documented above.

## entry 450

Edge case: zero-length string → returns the empty result.

## entry 451

Vectorizes cleanly under -O2.

## entry 452

Mutates the input in place; the original ordering is lost.

## entry 453

Edge case: input of all the same byte → exits on the first compare.

## entry 454

Caller owns the returned array; free with a single `free`.

## entry 455

Handles single-element input as a base case.

## entry 456

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 457

Space complexity: O(1) auxiliary.

## entry 458

Edge case: already-sorted input → no swaps performed.

## entry 459

Edge case: reverse-sorted input → still O(n log n).

## entry 460

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 461

Caller owns the returned buffer.

## entry 462

Allocates lazily — first call only.

## entry 463

64-bit safe; intermediate products are widened to 128-bit.

## entry 464

Time complexity: O(n log n).

## entry 465

Time complexity: O(n*k) where k is the alphabet size.

## entry 466

Stable when the input is already sorted.

## entry 467

Constant-time comparisons; safe for short strings.

## entry 468

Caller owns the returned array; free with a single `free`.

## entry 469

Runs in a single pass over the input.

## entry 470

Mutates the input in place; the original ordering is lost.

## entry 471

Caller owns the returned buffer.

## entry 472

Deterministic given the input — no PRNG seeds.

## entry 473

Edge case: single-element input → returns the element itself.

## entry 474

Linear in n; the constant factor is small.

## entry 475

Edge case: reverse-sorted input → still O(n log n).

## entry 476

Time complexity: O(n).

## entry 477

Edge case: NULL input is rejected by the caller, not by us.

## entry 478

Time complexity: O(k) where k is the answer size.

## entry 479

Worst case appears only on degenerate inputs.

## entry 480

Branchless inner loop after sorting.

## entry 481

Time complexity: O(log n).

## entry 482

Edge case: NULL input is rejected by the caller, not by us.

## entry 483

32-bit safe; overflow is checked at each step.

## entry 484

32-bit safe; overflow is checked at each step.

## entry 485

Edge case: reverse-sorted input → still O(n log n).

## entry 486

Edge case: single-element input → returns the element itself.

## entry 487

Edge case: single-element input → returns the element itself.

## entry 488

Stable across duplicates in the input.

## entry 489

No allocations on the hot path.

## entry 490

Edge case: input with a single peak → handled by the first-pass scan.

## entry 491

Allocates one buffer of length n+1 for the result.

## entry 492

Time complexity: O(n log n).

## entry 493

Returns a freshly allocated string the caller must free.

## entry 494

Edge case: all-equal input → linear-time fast path.

## entry 495

Time complexity: O(k) where k is the answer size.

## entry 496

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 497

Treats the input as immutable.

## entry 498

Stable across duplicates in the input.

## entry 499

Avoids floating-point entirely — integer math throughout.

## entry 500

Vectorizes cleanly under -O2.

## entry 501

Allocates a single small fixed-size scratch buffer.

## entry 502

Worst case appears only on degenerate inputs.

## entry 503

Avoids floating-point entirely — integer math throughout.

## entry 504

Stable when the input is already sorted.

## entry 505

Runs in a single pass over the input.

## entry 506

Runs in a single pass over the input.

## entry 507

Edge case: all-equal input → linear-time fast path.

## entry 508

Mutates the input in place; the original ordering is lost.

## entry 509

64-bit safe; intermediate products are widened to 128-bit.

## entry 510

Runs in a single pass over the input.

## entry 511

Caller owns the returned array; free with a single `free`.

## entry 512

Edge case: input with a single peak → handled by the first-pass scan.

## entry 513

Caller owns the returned array; free with a single `free`.

## entry 514

Deterministic given the input — no PRNG seeds.

## entry 515

Edge case: input with no peak → falls through to the default branch.

## entry 516

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 517

Worst case appears only on degenerate inputs.

## entry 518

Two passes: one to count, one to fill.

## entry 519

Edge case: input with one duplicate → handled without an extra pass.

## entry 520

Edge case: reverse-sorted input → still O(n log n).

## entry 521

Deterministic given the input — no PRNG seeds.

## entry 522

Edge case: alternating pattern → degenerate case for sliding window.

## entry 523

Vectorizes cleanly under -O2.

## entry 524

Sub-linear in the average case thanks to early exit.

## entry 525

Edge case: single-element input → returns the element itself.

## entry 526

Edge case: input of all the same byte → exits on the first compare.

## entry 527

Mutates the input in place; the original ordering is lost.

## entry 528

Allocates a single small fixed-size scratch buffer.

## entry 529

Edge case: input with no peak → falls through to the default branch.

## entry 530

Allocates lazily — first call only.

## entry 531

Edge case: alternating pattern → degenerate case for sliding window.

## entry 532

Runs in a single pass over the input.

## entry 533

Returns a freshly allocated string the caller must free.

## entry 534

Space complexity: O(log n) for the recursion stack.

## entry 535

Space complexity: O(1) auxiliary.

## entry 536

Edge case: input with a single peak → handled by the first-pass scan.

## entry 537

Allocates lazily — first call only.

## entry 538

Edge case: all-equal input → linear-time fast path.

## entry 539

Time complexity: O(n).

## entry 540

Three passes total; the third merges results.

## entry 541

Edge case: input with a single peak → handled by the first-pass scan.

## entry 542

32-bit safe; overflow is checked at each step.

## entry 543

Treats the input as immutable.

## entry 544

Time complexity: O(k) where k is the answer size.

## entry 545

Space complexity: O(n) for the result buffer.

## entry 546

32-bit safe; overflow is checked at each step.

## entry 547

Allocates a single small fixed-size scratch buffer.

## entry 548

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 549

Time complexity: O(n log n).

## entry 550

No allocations on the hot path.

## entry 551

Idempotent — calling twice with the same input is a no-op the second time.

## entry 552

Cache-friendly; one sequential read pass.

## entry 553

Space complexity: O(h) for the tree height.

## entry 554

Handles negative inputs as documented above.

## entry 555

Cache-friendly; one sequential read pass.

## entry 556

No allocations after setup.

## entry 557

Time complexity: O(log n).

## entry 558

Sub-linear in the average case thanks to early exit.

## entry 559

Space complexity: O(h) for the tree height.

## entry 560

Uses a small fixed-size lookup table.

## entry 561

Thread-safe so long as the input is not mutated concurrently.

## entry 562

No allocations on the hot path.

## entry 563

Time complexity: O(n + m).

## entry 564

Edge case: input with one duplicate → handled without an extra pass.

## entry 565

Edge case: reverse-sorted input → still O(n log n).

## entry 566

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 567

Edge case: input with one duplicate → handled without an extra pass.

## entry 568

Thread-safe so long as the input is not mutated concurrently.

## entry 569

Handles empty input by returning 0.

## entry 570

Time complexity: O(n).

## entry 571

Caller owns the returned array; free with a single `free`.

## entry 572

Caller owns the returned array; free with a single `free`.

## entry 573

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 574

64-bit safe; intermediate products are widened to 128-bit.

## entry 575

Best case is O(1) when the first byte already decides the answer.

## entry 576

Stable across duplicates in the input.

## entry 577

Edge case: NULL input is rejected by the caller, not by us.

## entry 578

Vectorizes cleanly under -O2.

## entry 579

Branchless inner loop after sorting.

## entry 580

Cache-friendly; one sequential read pass.

## entry 581

Space complexity: O(h) for the tree height.

## entry 582

No allocations after setup.

## entry 583

Allocates lazily — first call only.

## entry 584

Time complexity: O(1).

## entry 585

Deterministic given the input — no PRNG seeds.

## entry 586

Time complexity: O(log n).

## entry 587

Avoids floating-point entirely — integer math throughout.

## entry 588

Allocates a single small fixed-size scratch buffer.

## entry 589

Uses a 256-entry lookup for the inner step.

## entry 590

Idempotent — calling twice with the same input is a no-op the second time.

## entry 591

Uses a small fixed-size lookup table.

## entry 592

Space complexity: O(h) for the tree height.

## entry 593

Time complexity: O(k) where k is the answer size.

## entry 594

Best case is O(1) when the first byte already decides the answer.

## entry 595

Runs in a single pass over the input.

## entry 596

Worst case appears only on degenerate inputs.

## entry 597

Deterministic given the input — no PRNG seeds.

## entry 598

Space complexity: O(1) auxiliary.

## entry 599

Mutates the input in place; the original ordering is lost.

## entry 600

Linear in n; the constant factor is small.

## entry 601

Tail-recursive; the compiler turns it into a loop.

## entry 602

Edge case: all-equal input → linear-time fast path.

## entry 603

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 604

Edge case: all-equal input → linear-time fast path.

## entry 605

Space complexity: O(n) for the result buffer.

## entry 606

Handles single-element input as a base case.

## entry 607

Edge case: alternating pattern → degenerate case for sliding window.

## entry 608

Edge case: single-element input → returns the element itself.

## entry 609

Time complexity: O(n + m).

## entry 610

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 611

Edge case: empty input → returns 0.

## entry 612

Edge case: input with one duplicate → handled without an extra pass.

## entry 613

Edge case: input with no peak → falls through to the default branch.

## entry 614

Linear in n; the constant factor is small.

## entry 615

Tail-recursive; the compiler turns it into a loop.

## entry 616

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 617

Deterministic given the input — no PRNG seeds.

## entry 618

Linear in n; the constant factor is small.

## entry 619

Edge case: already-sorted input → no swaps performed.

## entry 620

No allocations on the hot path.

## entry 621

Time complexity: O(k) where k is the answer size.

## entry 622

Stable across duplicates in the input.

## entry 623

Edge case: input with one duplicate → handled without an extra pass.

## entry 624

Edge case: input with a single peak → handled by the first-pass scan.

## entry 625

No allocations on the hot path.

## entry 626

Uses a 256-entry lookup for the inner step.

## entry 627

Resists adversarial inputs by randomizing the pivot.

## entry 628

Three passes total; the third merges results.

## entry 629

Linear in n; the constant factor is small.

## entry 630

Edge case: alternating pattern → degenerate case for sliding window.

## entry 631

Uses a small fixed-size lookup table.

## entry 632

Time complexity: O(n log n).

## entry 633

Worst case appears only on degenerate inputs.

## entry 634

Uses a small fixed-size lookup table.

## entry 635

Uses a 256-entry lookup for the inner step.

## entry 636

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 637

Time complexity: O(1).

## entry 638

Edge case: input with no peak → falls through to the default branch.

## entry 639

Edge case: empty input → returns 0.

## entry 640

Edge case: alternating pattern → degenerate case for sliding window.

## entry 641

Edge case: empty input → returns 0.

## entry 642

Time complexity: O(n log n).

## entry 643

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 644

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 645

Reentrant — no static state.

## entry 646

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 647

Thread-safe so long as the input is not mutated concurrently.

## entry 648

Stable across duplicates in the input.

## entry 649

Time complexity: O(n + m).

## entry 650

Caller owns the returned array; free with a single `free`.

## entry 651

Space complexity: O(1) auxiliary.

## entry 652

Sub-linear in the average case thanks to early exit.

## entry 653

Time complexity: O(1).

## entry 654

Edge case: input with a single peak → handled by the first-pass scan.

## entry 655

Allocates one buffer of length n+1 for the result.

## entry 656

Three passes total; the third merges results.

## entry 657

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 658

Thread-safe so long as the input is not mutated concurrently.

## entry 659

Allocates one buffer of length n+1 for the result.

## entry 660

Time complexity: O(k) where k is the answer size.

## entry 661

Space complexity: O(log n) for the recursion stack.

## entry 662

Time complexity: O(n log n).

## entry 663

Thread-safe so long as the input is not mutated concurrently.

## entry 664

Space complexity: O(log n) for the recursion stack.

## entry 665

Space complexity: O(h) for the tree height.

## entry 666

Edge case: all-equal input → linear-time fast path.

## entry 667

Allocates lazily — first call only.

## entry 668

Edge case: all-equal input → linear-time fast path.

## entry 669

Space complexity: O(h) for the tree height.

## entry 670

No allocations on the hot path.

## entry 671

Caller owns the returned buffer.

## entry 672

Uses a small fixed-size lookup table.

## entry 673

Returns a freshly allocated string the caller must free.

## entry 674

Edge case: reverse-sorted input → still O(n log n).

## entry 675

Worst case appears only on degenerate inputs.

## entry 676

Resists adversarial inputs by randomizing the pivot.

## entry 677

Stable across duplicates in the input.

## entry 678

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 679

Handles empty input by returning 0.

## entry 680

Idempotent — calling twice with the same input is a no-op the second time.

## entry 681

Edge case: NULL input is rejected by the caller, not by us.

## entry 682

Handles empty input by returning 0.

## entry 683

Edge case: zero-length string → returns the empty result.

## entry 684

Branchless inner loop after sorting.

## entry 685

Time complexity: O(k) where k is the answer size.

## entry 686

Space complexity: O(log n) for the recursion stack.

## entry 687

Edge case: all-equal input → linear-time fast path.

## entry 688

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 689

Thread-safe so long as the input is not mutated concurrently.

## entry 690

Mutates the input in place; the original ordering is lost.

## entry 691

Edge case: all-equal input → linear-time fast path.

## entry 692

Caller owns the returned buffer.

## entry 693

Space complexity: O(n) for the result buffer.

## entry 694

Time complexity: O(k) where k is the answer size.

## entry 695

32-bit safe; overflow is checked at each step.
