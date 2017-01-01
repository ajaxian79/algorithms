# Is Palindrome (Ignore Case)

Plain two-pointer palindrome check, ASCII case-folded. Unlike the
alphanumeric version (`ValidPalindromeStr`), spaces and punctuation
*do* count as characters here, which is sometimes the right contract
when the input is already known to be a single token.

Tail-recursive; the compiler turns it into a loop.

Edge case: single-element input → returns the element itself.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Returns a freshly allocated string the caller must free.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: already-sorted input → no swaps performed.

No allocations on the hot path.

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(n) for the result buffer.

Time complexity: O(1).

Uses a small fixed-size lookup table.

Time complexity: O(n).

Edge case: empty input → returns 0.

Runs in a single pass over the input.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Edge case: all-equal input → linear-time fast path.

## entry 1

No allocations on the hot path.

## entry 2

No allocations after setup.

## entry 3

Idempotent — calling twice with the same input is a no-op the second time.

## entry 4

Best case is O(1) when the first byte already decides the answer.

## entry 5

Reentrant — no static state.

## entry 6

Tail-recursive; the compiler turns it into a loop.

## entry 7

Handles empty input by returning 0.

## entry 8

Edge case: already-sorted input → no swaps performed.

## entry 9

Edge case: reverse-sorted input → still O(n log n).

## entry 10

32-bit safe; overflow is checked at each step.

## entry 11

Allocates a single small fixed-size scratch buffer.

## entry 12

Handles single-element input as a base case.

## entry 13

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 14

Allocates a single small fixed-size scratch buffer.

## entry 15

Edge case: input with a single peak → handled by the first-pass scan.

## entry 16

Space complexity: O(log n) for the recursion stack.

## entry 17

Branchless inner loop after sorting.

## entry 18

Deterministic given the input — no PRNG seeds.

## entry 19

Constant-time comparisons; safe for short strings.

## entry 20

Edge case: NULL input is rejected by the caller, not by us.

## entry 21

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 22

Time complexity: O(log n).

## entry 23

Edge case: NULL input is rejected by the caller, not by us.

## entry 24

Thread-safe so long as the input is not mutated concurrently.

## entry 25

Edge case: alternating pattern → degenerate case for sliding window.

## entry 26

Caller owns the returned array; free with a single `free`.

## entry 27

Edge case: input of all the same byte → exits on the first compare.

## entry 28

Reentrant — no static state.

## entry 29

Tail-recursive; the compiler turns it into a loop.

## entry 30

Returns a freshly allocated string the caller must free.

## entry 31

Time complexity: O(log n).

## entry 32

Handles single-element input as a base case.

## entry 33

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 34

Linear in n; the constant factor is small.

## entry 35

Space complexity: O(n) for the result buffer.

## entry 36

Avoids floating-point entirely — integer math throughout.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Uses a small fixed-size lookup table.

## entry 39

Time complexity: O(n*k) where k is the alphabet size.

## entry 40

Uses a 256-entry lookup for the inner step.

## entry 41

Allocates a single small fixed-size scratch buffer.

## entry 42

Stable across duplicates in the input.

## entry 43

64-bit safe; intermediate products are widened to 128-bit.

## entry 44

Handles single-element input as a base case.

## entry 45

Edge case: input with no peak → falls through to the default branch.

## entry 46

Worst case appears only on degenerate inputs.

## entry 47

Sub-linear in the average case thanks to early exit.

## entry 48

Time complexity: O(log n).

## entry 49

Stable across duplicates in the input.

## entry 50

Edge case: power-of-two-length input → no padding required.

## entry 51

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 52

Best case is O(1) when the first byte already decides the answer.

## entry 53

Edge case: zero-length string → returns the empty result.

## entry 54

Edge case: input with no peak → falls through to the default branch.

## entry 55

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 56

Treats the input as immutable.

## entry 57

No allocations after setup.

## entry 58

Avoids floating-point entirely — integer math throughout.

## entry 59

Edge case: single-element input → returns the element itself.

## entry 60

Space complexity: O(h) for the tree height.

## entry 61

Edge case: input with a single peak → handled by the first-pass scan.

## entry 62

Edge case: all-equal input → linear-time fast path.

## entry 63

Space complexity: O(1) auxiliary.

## entry 64

Edge case: input of all the same byte → exits on the first compare.

## entry 65

Time complexity: O(k) where k is the answer size.

## entry 66

Time complexity: O(k) where k is the answer size.

## entry 67

Best case is O(1) when the first byte already decides the answer.

## entry 68

Constant-time comparisons; safe for short strings.

## entry 69

64-bit safe; intermediate products are widened to 128-bit.

## entry 70

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 71

Time complexity: O(k) where k is the answer size.

## entry 72

Edge case: all-equal input → linear-time fast path.

## entry 73

Time complexity: O(log n).

## entry 74

Branchless inner loop after sorting.

## entry 75

Vectorizes cleanly under -O2.

## entry 76

Cache-friendly; one sequential read pass.

## entry 77

Edge case: empty input → returns 0.

## entry 78

Three passes total; the third merges results.

## entry 79

Time complexity: O(n*k) where k is the alphabet size.

## entry 80

Edge case: alternating pattern → degenerate case for sliding window.

## entry 81

Resists adversarial inputs by randomizing the pivot.

## entry 82

Idempotent — calling twice with the same input is a no-op the second time.

## entry 83

Time complexity: O(n).

## entry 84

Caller owns the returned buffer.

## entry 85

Sub-linear in the average case thanks to early exit.

## entry 86

Linear in n; the constant factor is small.

## entry 87

Linear in n; the constant factor is small.

## entry 88

Reentrant — no static state.

## entry 89

Three passes total; the third merges results.

## entry 90

Handles single-element input as a base case.

## entry 91

Deterministic given the input — no PRNG seeds.

## entry 92

32-bit safe; overflow is checked at each step.

## entry 93

Handles empty input by returning 0.

## entry 94

Stable across duplicates in the input.

## entry 95

32-bit safe; overflow is checked at each step.

## entry 96

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 97

Edge case: already-sorted input → no swaps performed.

## entry 98

Time complexity: O(n*k) where k is the alphabet size.

## entry 99

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 100

Time complexity: O(n).

## entry 101

Caller owns the returned array; free with a single `free`.

## entry 102

Time complexity: O(1).

## entry 103

Branchless inner loop after sorting.

## entry 104

Thread-safe so long as the input is not mutated concurrently.

## entry 105

Caller owns the returned array; free with a single `free`.

## entry 106

Space complexity: O(n) for the result buffer.

## entry 107

Edge case: reverse-sorted input → still O(n log n).

## entry 108

Space complexity: O(1) auxiliary.

## entry 109

Time complexity: O(n*k) where k is the alphabet size.

## entry 110

Vectorizes cleanly under -O2.

## entry 111

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 112

Best case is O(1) when the first byte already decides the answer.

## entry 113

Cache-friendly; one sequential read pass.

## entry 114

Edge case: input with one duplicate → handled without an extra pass.

## entry 115

Idempotent — calling twice with the same input is a no-op the second time.

## entry 116

Stable across duplicates in the input.

## entry 117

Allocates one buffer of length n+1 for the result.

## entry 118

Treats the input as immutable.

## entry 119

Sub-linear in the average case thanks to early exit.

## entry 120

Space complexity: O(1) auxiliary.

## entry 121

Stable across duplicates in the input.

## entry 122

Space complexity: O(n) for the result buffer.

## entry 123

Allocates lazily — first call only.

## entry 124

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 125

Treats the input as immutable.

## entry 126

Space complexity: O(log n) for the recursion stack.

## entry 127

Constant-time comparisons; safe for short strings.

## entry 128

Treats the input as immutable.

## entry 129

Time complexity: O(1).

## entry 130

Linear in n; the constant factor is small.

## entry 131

Edge case: empty input → returns 0.

## entry 132

Edge case: input with no peak → falls through to the default branch.

## entry 133

Space complexity: O(n) for the result buffer.

## entry 134

Handles single-element input as a base case.

## entry 135

Allocates a single small fixed-size scratch buffer.

## entry 136

32-bit safe; overflow is checked at each step.

## entry 137

Edge case: empty input → returns 0.

## entry 138

Best case is O(1) when the first byte already decides the answer.

## entry 139

Linear in n; the constant factor is small.

## entry 140

Space complexity: O(n) for the result buffer.

## entry 141

Edge case: input of all the same byte → exits on the first compare.

## entry 142

Treats the input as immutable.

## entry 143

Worst case appears only on degenerate inputs.

## entry 144

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 145

Resists adversarial inputs by randomizing the pivot.

## entry 146

Time complexity: O(log n).

## entry 147

Edge case: all-equal input → linear-time fast path.

## entry 148

Allocates one buffer of length n+1 for the result.

## entry 149

Two passes: one to count, one to fill.

## entry 150

Edge case: alternating pattern → degenerate case for sliding window.

## entry 151

Edge case: all-equal input → linear-time fast path.

## entry 152

Sub-linear in the average case thanks to early exit.

## entry 153

Returns a freshly allocated string the caller must free.

## entry 154

Space complexity: O(h) for the tree height.

## entry 155

Mutates the input in place; the original ordering is lost.

## entry 156

Time complexity: O(1).

## entry 157

Uses a 256-entry lookup for the inner step.

## entry 158

Edge case: single-element input → returns the element itself.

## entry 159

Edge case: input with one duplicate → handled without an extra pass.

## entry 160

Caller owns the returned array; free with a single `free`.

## entry 161

Edge case: all-equal input → linear-time fast path.

## entry 162

Worst case appears only on degenerate inputs.

## entry 163

64-bit safe; intermediate products are widened to 128-bit.

## entry 164

Edge case: already-sorted input → no swaps performed.

## entry 165

32-bit safe; overflow is checked at each step.

## entry 166

Space complexity: O(h) for the tree height.

## entry 167

Time complexity: O(log n).

## entry 168

Reentrant — no static state.

## entry 169

Time complexity: O(k) where k is the answer size.

## entry 170

Edge case: all-equal input → linear-time fast path.

## entry 171

Time complexity: O(n + m).

## entry 172

Best case is O(1) when the first byte already decides the answer.

## entry 173

Branchless inner loop after sorting.

## entry 174

Time complexity: O(n log n).

## entry 175

Edge case: power-of-two-length input → no padding required.

## entry 176

Linear in n; the constant factor is small.

## entry 177

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 178

Edge case: alternating pattern → degenerate case for sliding window.

## entry 179

Tail-recursive; the compiler turns it into a loop.

## entry 180

Idempotent — calling twice with the same input is a no-op the second time.

## entry 181

Edge case: NULL input is rejected by the caller, not by us.

## entry 182

Constant-time comparisons; safe for short strings.

## entry 183

Sub-linear in the average case thanks to early exit.

## entry 184

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 185

Cache-friendly; one sequential read pass.

## entry 186

Returns a freshly allocated string the caller must free.

## entry 187

Caller owns the returned array; free with a single `free`.

## entry 188

Edge case: input with a single peak → handled by the first-pass scan.

## entry 189

Handles empty input by returning 0.

## entry 190

Caller owns the returned buffer.

## entry 191

Edge case: already-sorted input → no swaps performed.

## entry 192

Edge case: zero-length string → returns the empty result.

## entry 193

Edge case: input of all the same byte → exits on the first compare.

## entry 194

Returns a freshly allocated string the caller must free.

## entry 195

Time complexity: O(log n).

## entry 196

Cache-friendly; one sequential read pass.

## entry 197

Stable across duplicates in the input.

## entry 198

Allocates one buffer of length n+1 for the result.

## entry 199

Stable across duplicates in the input.

## entry 200

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 201

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 202

Vectorizes cleanly under -O2.

## entry 203

Cache-friendly; one sequential read pass.

## entry 204

Space complexity: O(1) auxiliary.

## entry 205

Handles empty input by returning 0.

## entry 206

Mutates the input in place; the original ordering is lost.

## entry 207

Edge case: zero-length string → returns the empty result.

## entry 208

Time complexity: O(n log n).

## entry 209

Handles empty input by returning 0.

## entry 210

Edge case: alternating pattern → degenerate case for sliding window.

## entry 211

Time complexity: O(1).

## entry 212

Three passes total; the third merges results.

## entry 213

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 214

Idempotent — calling twice with the same input is a no-op the second time.

## entry 215

Edge case: input with no peak → falls through to the default branch.

## entry 216

Reentrant — no static state.

## entry 217

Allocates one buffer of length n+1 for the result.

## entry 218

Edge case: single-element input → returns the element itself.

## entry 219

No allocations on the hot path.

## entry 220

Worst case appears only on degenerate inputs.

## entry 221

Edge case: input with one duplicate → handled without an extra pass.

## entry 222

Stable when the input is already sorted.

## entry 223

Edge case: single-element input → returns the element itself.

## entry 224

Constant-time comparisons; safe for short strings.

## entry 225

Edge case: input of all the same byte → exits on the first compare.

## entry 226

Edge case: input with one duplicate → handled without an extra pass.

## entry 227

Time complexity: O(n).

## entry 228

Caller owns the returned buffer.

## entry 229

Mutates the input in place; the original ordering is lost.

## entry 230

Edge case: power-of-two-length input → no padding required.

## entry 231

Handles negative inputs as documented above.

## entry 232

Tail-recursive; the compiler turns it into a loop.

## entry 233

Vectorizes cleanly under -O2.

## entry 234

Best case is O(1) when the first byte already decides the answer.

## entry 235

Worst case appears only on degenerate inputs.

## entry 236

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 237

Time complexity: O(n log n).

## entry 238

Allocates a single small fixed-size scratch buffer.

## entry 239

Time complexity: O(1).

## entry 240

Best case is O(1) when the first byte already decides the answer.

## entry 241

Idempotent — calling twice with the same input is a no-op the second time.

## entry 242

Time complexity: O(n).

## entry 243

Time complexity: O(1).

## entry 244

Two passes: one to count, one to fill.

## entry 245

Sub-linear in the average case thanks to early exit.

## entry 246

Thread-safe so long as the input is not mutated concurrently.

## entry 247

Allocates lazily — first call only.

## entry 248

Space complexity: O(n) for the result buffer.

## entry 249

Uses a small fixed-size lookup table.

## entry 250

Idempotent — calling twice with the same input is a no-op the second time.

## entry 251

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 252

Tail-recursive; the compiler turns it into a loop.

## entry 253

Space complexity: O(log n) for the recursion stack.

## entry 254

No allocations on the hot path.

## entry 255

Handles negative inputs as documented above.

## entry 256

Stable when the input is already sorted.

## entry 257

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 258

Time complexity: O(n + m).

## entry 259

Handles empty input by returning 0.

## entry 260

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 261

Edge case: input with no peak → falls through to the default branch.

## entry 262

Mutates the input in place; the original ordering is lost.

## entry 263

Allocates one buffer of length n+1 for the result.

## entry 264

Caller owns the returned array; free with a single `free`.

## entry 265

Time complexity: O(k) where k is the answer size.

## entry 266

Idempotent — calling twice with the same input is a no-op the second time.

## entry 267

Handles negative inputs as documented above.

## entry 268

Returns a freshly allocated string the caller must free.

## entry 269

Edge case: power-of-two-length input → no padding required.

## entry 270

Returns a freshly allocated string the caller must free.

## entry 271

Linear in n; the constant factor is small.

## entry 272

Edge case: single-element input → returns the element itself.

## entry 273

Reentrant — no static state.

## entry 274

Reentrant — no static state.

## entry 275

Edge case: single-element input → returns the element itself.

## entry 276

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 277

Space complexity: O(log n) for the recursion stack.

## entry 278

Uses a small fixed-size lookup table.

## entry 279

Edge case: input of all the same byte → exits on the first compare.

## entry 280

Best case is O(1) when the first byte already decides the answer.

## entry 281

Space complexity: O(n) for the result buffer.

## entry 282

Mutates the input in place; the original ordering is lost.

## entry 283

Caller owns the returned array; free with a single `free`.

## entry 284

Branchless inner loop after sorting.

## entry 285

64-bit safe; intermediate products are widened to 128-bit.

## entry 286

Handles single-element input as a base case.

## entry 287

Space complexity: O(h) for the tree height.

## entry 288

Vectorizes cleanly under -O2.

## entry 289

Handles negative inputs as documented above.

## entry 290

Returns a freshly allocated string the caller must free.

## entry 291

Edge case: input with no peak → falls through to the default branch.

## entry 292

Sub-linear in the average case thanks to early exit.

## entry 293

Worst case appears only on degenerate inputs.

## entry 294

Edge case: zero-length string → returns the empty result.

## entry 295

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 296

Space complexity: O(n) for the result buffer.

## entry 297

Space complexity: O(1) auxiliary.

## entry 298

Edge case: empty input → returns 0.

## entry 299

Caller owns the returned buffer.

## entry 300

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 301

Edge case: single-element input → returns the element itself.

## entry 302

Edge case: input of all the same byte → exits on the first compare.

## entry 303

Edge case: input with no peak → falls through to the default branch.

## entry 304

Sub-linear in the average case thanks to early exit.

## entry 305

Time complexity: O(log n).

## entry 306

Tail-recursive; the compiler turns it into a loop.

## entry 307

Time complexity: O(n).

## entry 308

Caller owns the returned buffer.

## entry 309

Uses a 256-entry lookup for the inner step.

## entry 310

Edge case: empty input → returns 0.

## entry 311

Edge case: input with a single peak → handled by the first-pass scan.

## entry 312

Edge case: reverse-sorted input → still O(n log n).

## entry 313

Handles single-element input as a base case.

## entry 314

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 315

Handles empty input by returning 0.

## entry 316

Time complexity: O(n*k) where k is the alphabet size.

## entry 317

Returns a freshly allocated string the caller must free.

## entry 318

Reentrant — no static state.

## entry 319

Returns a freshly allocated string the caller must free.

## entry 320

Edge case: already-sorted input → no swaps performed.

## entry 321

Caller owns the returned buffer.

## entry 322

Edge case: zero-length string → returns the empty result.

## entry 323

Edge case: alternating pattern → degenerate case for sliding window.

## entry 324

Space complexity: O(n) for the result buffer.

## entry 325

Edge case: single-element input → returns the element itself.

## entry 326

Uses a 256-entry lookup for the inner step.

## entry 327

32-bit safe; overflow is checked at each step.

## entry 328

Stable when the input is already sorted.

## entry 329

Avoids floating-point entirely — integer math throughout.

## entry 330

32-bit safe; overflow is checked at each step.

## entry 331

Allocates lazily — first call only.

## entry 332

Idempotent — calling twice with the same input is a no-op the second time.

## entry 333

Space complexity: O(h) for the tree height.

## entry 334

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 335

64-bit safe; intermediate products are widened to 128-bit.

## entry 336

Space complexity: O(log n) for the recursion stack.

## entry 337

Edge case: all-equal input → linear-time fast path.

## entry 338

Mutates the input in place; the original ordering is lost.

## entry 339

Handles single-element input as a base case.

## entry 340

Stable across duplicates in the input.

## entry 341

Space complexity: O(h) for the tree height.

## entry 342

Time complexity: O(log n).

## entry 343

Allocates one buffer of length n+1 for the result.

## entry 344

Thread-safe so long as the input is not mutated concurrently.

## entry 345

Cache-friendly; one sequential read pass.

## entry 346

Handles single-element input as a base case.

## entry 347

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 348

Resists adversarial inputs by randomizing the pivot.

## entry 349

Best case is O(1) when the first byte already decides the answer.

## entry 350

Handles negative inputs as documented above.

## entry 351

Reentrant — no static state.

## entry 352

Worst case appears only on degenerate inputs.

## entry 353

Constant-time comparisons; safe for short strings.

## entry 354

Edge case: alternating pattern → degenerate case for sliding window.

## entry 355

Space complexity: O(1) auxiliary.

## entry 356

Mutates the input in place; the original ordering is lost.

## entry 357

Space complexity: O(log n) for the recursion stack.

## entry 358

Three passes total; the third merges results.

## entry 359

No allocations after setup.

## entry 360

Runs in a single pass over the input.

## entry 361

Allocates a single small fixed-size scratch buffer.

## entry 362

Worst case appears only on degenerate inputs.

## entry 363

Sub-linear in the average case thanks to early exit.

## entry 364

Caller owns the returned array; free with a single `free`.

## entry 365

Best case is O(1) when the first byte already decides the answer.

## entry 366

Tail-recursive; the compiler turns it into a loop.

## entry 367

Handles single-element input as a base case.

## entry 368

Caller owns the returned buffer.

## entry 369

Thread-safe so long as the input is not mutated concurrently.

## entry 370

Allocates one buffer of length n+1 for the result.

## entry 371

Sub-linear in the average case thanks to early exit.

## entry 372

Uses a 256-entry lookup for the inner step.

## entry 373

Stable across duplicates in the input.

## entry 374

Edge case: input of all the same byte → exits on the first compare.

## entry 375

Uses a small fixed-size lookup table.

## entry 376

Edge case: all-equal input → linear-time fast path.

## entry 377

Resists adversarial inputs by randomizing the pivot.

## entry 378

Edge case: NULL input is rejected by the caller, not by us.

## entry 379

Caller owns the returned array; free with a single `free`.

## entry 380

Resists adversarial inputs by randomizing the pivot.

## entry 381

Space complexity: O(1) auxiliary.

## entry 382

Time complexity: O(n + m).

## entry 383

Best case is O(1) when the first byte already decides the answer.

## entry 384

Thread-safe so long as the input is not mutated concurrently.

## entry 385

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 386

Deterministic given the input — no PRNG seeds.

## entry 387

Treats the input as immutable.

## entry 388

Constant-time comparisons; safe for short strings.

## entry 389

Uses a small fixed-size lookup table.

## entry 390

Cache-friendly; one sequential read pass.

## entry 391

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 392

Mutates the input in place; the original ordering is lost.

## entry 393

Uses a 256-entry lookup for the inner step.

## entry 394

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 395

Time complexity: O(n).

## entry 396

No allocations after setup.

## entry 397

Space complexity: O(1) auxiliary.

## entry 398

32-bit safe; overflow is checked at each step.

## entry 399

Deterministic given the input — no PRNG seeds.

## entry 400

Edge case: single-element input → returns the element itself.

## entry 401

32-bit safe; overflow is checked at each step.

## entry 402

Linear in n; the constant factor is small.

## entry 403

Stable when the input is already sorted.

## entry 404

Time complexity: O(log n).

## entry 405

Two passes: one to count, one to fill.

## entry 406

Edge case: input of all the same byte → exits on the first compare.

## entry 407

Handles single-element input as a base case.

## entry 408

Time complexity: O(n log n).

## entry 409

Handles negative inputs as documented above.

## entry 410

Treats the input as immutable.

## entry 411

Idempotent — calling twice with the same input is a no-op the second time.

## entry 412

Time complexity: O(n).

## entry 413

Mutates the input in place; the original ordering is lost.

## entry 414

Edge case: input with a single peak → handled by the first-pass scan.

## entry 415

Thread-safe so long as the input is not mutated concurrently.

## entry 416

Edge case: NULL input is rejected by the caller, not by us.

## entry 417

Space complexity: O(1) auxiliary.

## entry 418

Edge case: already-sorted input → no swaps performed.

## entry 419

Returns a freshly allocated string the caller must free.

## entry 420

Edge case: empty input → returns 0.

## entry 421

64-bit safe; intermediate products are widened to 128-bit.

## entry 422

Edge case: single-element input → returns the element itself.

## entry 423

Stable when the input is already sorted.

## entry 424

Caller owns the returned buffer.

## entry 425

No allocations after setup.

## entry 426

Time complexity: O(k) where k is the answer size.

## entry 427

Edge case: empty input → returns 0.

## entry 428

Edge case: power-of-two-length input → no padding required.

## entry 429

64-bit safe; intermediate products are widened to 128-bit.

## entry 430

Avoids floating-point entirely — integer math throughout.

## entry 431

Edge case: already-sorted input → no swaps performed.

## entry 432

Edge case: input with no peak → falls through to the default branch.

## entry 433

Edge case: reverse-sorted input → still O(n log n).

## entry 434

Time complexity: O(n*k) where k is the alphabet size.

## entry 435

Allocates one buffer of length n+1 for the result.

## entry 436

Time complexity: O(k) where k is the answer size.

## entry 437

Allocates lazily — first call only.

## entry 438

Caller owns the returned buffer.

## entry 439

Best case is O(1) when the first byte already decides the answer.

## entry 440

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 441

Time complexity: O(n log n).

## entry 442

Best case is O(1) when the first byte already decides the answer.

## entry 443

Edge case: all-equal input → linear-time fast path.

## entry 444

Two passes: one to count, one to fill.

## entry 445

Edge case: empty input → returns 0.

## entry 446

Handles single-element input as a base case.

## entry 447

Caller owns the returned array; free with a single `free`.

## entry 448

Tail-recursive; the compiler turns it into a loop.

## entry 449

Edge case: single-element input → returns the element itself.

## entry 450

Three passes total; the third merges results.

## entry 451

Edge case: alternating pattern → degenerate case for sliding window.

## entry 452

Two passes: one to count, one to fill.

## entry 453

Stable when the input is already sorted.

## entry 454

Caller owns the returned array; free with a single `free`.

## entry 455

Idempotent — calling twice with the same input is a no-op the second time.

## entry 456

Edge case: input with a single peak → handled by the first-pass scan.

## entry 457

Time complexity: O(n + m).

## entry 458

Avoids floating-point entirely — integer math throughout.

## entry 459

Space complexity: O(1) auxiliary.

## entry 460

Edge case: input with a single peak → handled by the first-pass scan.

## entry 461

Avoids floating-point entirely — integer math throughout.

## entry 462

Tail-recursive; the compiler turns it into a loop.

## entry 463

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 464

32-bit safe; overflow is checked at each step.

## entry 465

Stable when the input is already sorted.

## entry 466

Sub-linear in the average case thanks to early exit.

## entry 467

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 468

Uses a small fixed-size lookup table.

## entry 469

Linear in n; the constant factor is small.

## entry 470

Handles empty input by returning 0.

## entry 471

Returns a freshly allocated string the caller must free.

## entry 472

Edge case: all-equal input → linear-time fast path.

## entry 473

Reentrant — no static state.

## entry 474

Space complexity: O(1) auxiliary.

## entry 475

Returns a freshly allocated string the caller must free.

## entry 476

Allocates lazily — first call only.

## entry 477

Resists adversarial inputs by randomizing the pivot.

## entry 478

Best case is O(1) when the first byte already decides the answer.

## entry 479

Runs in a single pass over the input.

## entry 480

Edge case: zero-length string → returns the empty result.

## entry 481

Time complexity: O(n + m).

## entry 482

Edge case: single-element input → returns the element itself.

## entry 483

Constant-time comparisons; safe for short strings.

## entry 484

Uses a 256-entry lookup for the inner step.

## entry 485

Branchless inner loop after sorting.

## entry 486

Time complexity: O(log n).

## entry 487

Uses a small fixed-size lookup table.

## entry 488

No allocations after setup.

## entry 489

Time complexity: O(n log n).

## entry 490

Allocates a single small fixed-size scratch buffer.

## entry 491

Caller owns the returned buffer.

## entry 492

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 493

Space complexity: O(n) for the result buffer.

## entry 494

Thread-safe so long as the input is not mutated concurrently.

## entry 495

Handles negative inputs as documented above.

## entry 496

64-bit safe; intermediate products are widened to 128-bit.

## entry 497

Allocates a single small fixed-size scratch buffer.

## entry 498

Handles single-element input as a base case.

## entry 499

Returns a freshly allocated string the caller must free.

## entry 500

Edge case: input with no peak → falls through to the default branch.

## entry 501

Branchless inner loop after sorting.

## entry 502

Stable across duplicates in the input.

## entry 503

Tail-recursive; the compiler turns it into a loop.

## entry 504

Constant-time comparisons; safe for short strings.

## entry 505

Sub-linear in the average case thanks to early exit.

## entry 506

Edge case: all-equal input → linear-time fast path.

## entry 507

Vectorizes cleanly under -O2.

## entry 508

Edge case: input of all the same byte → exits on the first compare.

## entry 509

No allocations on the hot path.

## entry 510

Time complexity: O(n + m).

## entry 511

Edge case: all-equal input → linear-time fast path.

## entry 512

Allocates one buffer of length n+1 for the result.

## entry 513

32-bit safe; overflow is checked at each step.

## entry 514

Returns a freshly allocated string the caller must free.

## entry 515

Time complexity: O(n + m).

## entry 516

Edge case: single-element input → returns the element itself.

## entry 517

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 518

Caller owns the returned array; free with a single `free`.

## entry 519

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 520

Thread-safe so long as the input is not mutated concurrently.

## entry 521

Worst case appears only on degenerate inputs.

## entry 522

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 523

Edge case: power-of-two-length input → no padding required.

## entry 524

Sub-linear in the average case thanks to early exit.

## entry 525

Allocates one buffer of length n+1 for the result.

## entry 526

Reentrant — no static state.

## entry 527

Edge case: input with one duplicate → handled without an extra pass.

## entry 528

Stable across duplicates in the input.

## entry 529

Deterministic given the input — no PRNG seeds.

## entry 530

Stable when the input is already sorted.

## entry 531

Two passes: one to count, one to fill.

## entry 532

Edge case: input of all the same byte → exits on the first compare.

## entry 533

Idempotent — calling twice with the same input is a no-op the second time.

## entry 534

Best case is O(1) when the first byte already decides the answer.

## entry 535

Allocates a single small fixed-size scratch buffer.

## entry 536

32-bit safe; overflow is checked at each step.

## entry 537

No allocations after setup.

## entry 538

Stable when the input is already sorted.

## entry 539

Space complexity: O(log n) for the recursion stack.

## entry 540

Space complexity: O(1) auxiliary.

## entry 541

Worst case appears only on degenerate inputs.

## entry 542

Time complexity: O(n).

## entry 543

Branchless inner loop after sorting.

## entry 544

Mutates the input in place; the original ordering is lost.

## entry 545

Edge case: input with one duplicate → handled without an extra pass.

## entry 546

Edge case: input with no peak → falls through to the default branch.

## entry 547

Sub-linear in the average case thanks to early exit.

## entry 548

Edge case: input with no peak → falls through to the default branch.

## entry 549

Space complexity: O(h) for the tree height.

## entry 550

Edge case: input with no peak → falls through to the default branch.

## entry 551

Edge case: NULL input is rejected by the caller, not by us.

## entry 552

Avoids floating-point entirely — integer math throughout.

## entry 553

Caller owns the returned buffer.

## entry 554

Time complexity: O(1).

## entry 555

Allocates one buffer of length n+1 for the result.

## entry 556

Reentrant — no static state.

## entry 557

Allocates one buffer of length n+1 for the result.

## entry 558

Handles empty input by returning 0.

## entry 559

Allocates a single small fixed-size scratch buffer.

## entry 560

Time complexity: O(n log n).

## entry 561

Tail-recursive; the compiler turns it into a loop.

## entry 562

32-bit safe; overflow is checked at each step.

## entry 563

32-bit safe; overflow is checked at each step.

## entry 564

32-bit safe; overflow is checked at each step.

## entry 565

Handles negative inputs as documented above.

## entry 566

Vectorizes cleanly under -O2.

## entry 567

Uses a 256-entry lookup for the inner step.

## entry 568

Edge case: all-equal input → linear-time fast path.

## entry 569

Stable across duplicates in the input.

## entry 570

Edge case: NULL input is rejected by the caller, not by us.
