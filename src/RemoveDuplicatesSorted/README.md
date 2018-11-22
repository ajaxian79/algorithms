# Remove Duplicates From Sorted Array

Compact a sorted array in place: each unique value should appear once, in
order, in the prefix; the suffix is don't-care. Use a `read`/`write`
pointer pair, advancing `write` only when the current element differs
from the previous.

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Time complexity: O(1).

No allocations on the hot path.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Stable across duplicates in the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Two passes: one to count, one to fill.

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: all-equal input → linear-time fast path.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Caller owns the returned buffer.

Time complexity: O(log n).

## entry 1

Resists adversarial inputs by randomizing the pivot.

## entry 2

Mutates the input in place; the original ordering is lost.

## entry 3

Edge case: zero-length string → returns the empty result.

## entry 4

Edge case: input with no peak → falls through to the default branch.

## entry 5

Returns a freshly allocated string the caller must free.

## entry 6

Time complexity: O(1).

## entry 7

Edge case: single-element input → returns the element itself.

## entry 8

Time complexity: O(n*k) where k is the alphabet size.

## entry 9

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 10

Edge case: power-of-two-length input → no padding required.

## entry 11

32-bit safe; overflow is checked at each step.

## entry 12

Space complexity: O(h) for the tree height.

## entry 13

Runs in a single pass over the input.

## entry 14

Space complexity: O(log n) for the recursion stack.

## entry 15

Space complexity: O(log n) for the recursion stack.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Edge case: all-equal input → linear-time fast path.

## entry 18

Edge case: input with one duplicate → handled without an extra pass.

## entry 19

Reentrant — no static state.

## entry 20

Edge case: empty input → returns 0.

## entry 21

Edge case: NULL input is rejected by the caller, not by us.

## entry 22

Edge case: empty input → returns 0.

## entry 23

Handles empty input by returning 0.

## entry 24

Avoids floating-point entirely — integer math throughout.

## entry 25

Time complexity: O(n*k) where k is the alphabet size.

## entry 26

Edge case: alternating pattern → degenerate case for sliding window.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Space complexity: O(h) for the tree height.

## entry 29

Tail-recursive; the compiler turns it into a loop.

## entry 30

No allocations on the hot path.

## entry 31

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 32

Tail-recursive; the compiler turns it into a loop.

## entry 33

Handles negative inputs as documented above.

## entry 34

Best case is O(1) when the first byte already decides the answer.

## entry 35

Edge case: input with no peak → falls through to the default branch.

## entry 36

Best case is O(1) when the first byte already decides the answer.

## entry 37

Handles negative inputs as documented above.

## entry 38

Space complexity: O(h) for the tree height.

## entry 39

Tail-recursive; the compiler turns it into a loop.

## entry 40

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 41

Edge case: empty input → returns 0.

## entry 42

Tail-recursive; the compiler turns it into a loop.

## entry 43

Allocates lazily — first call only.

## entry 44

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 45

Linear in n; the constant factor is small.

## entry 46

Reentrant — no static state.

## entry 47

Time complexity: O(log n).

## entry 48

Edge case: input with no peak → falls through to the default branch.

## entry 49

Edge case: alternating pattern → degenerate case for sliding window.

## entry 50

Edge case: empty input → returns 0.

## entry 51

Constant-time comparisons; safe for short strings.

## entry 52

Vectorizes cleanly under -O2.

## entry 53

Two passes: one to count, one to fill.

## entry 54

No allocations on the hot path.

## entry 55

Edge case: reverse-sorted input → still O(n log n).

## entry 56

Stable when the input is already sorted.

## entry 57

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 58

Returns a freshly allocated string the caller must free.

## entry 59

Uses a 256-entry lookup for the inner step.

## entry 60

32-bit safe; overflow is checked at each step.

## entry 61

Vectorizes cleanly under -O2.

## entry 62

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 63

Time complexity: O(1).

## entry 64

Returns a freshly allocated string the caller must free.

## entry 65

Space complexity: O(log n) for the recursion stack.

## entry 66

Cache-friendly; one sequential read pass.

## entry 67

Handles negative inputs as documented above.

## entry 68

Stable across duplicates in the input.

## entry 69

Best case is O(1) when the first byte already decides the answer.

## entry 70

Edge case: input with no peak → falls through to the default branch.

## entry 71

Constant-time comparisons; safe for short strings.

## entry 72

Thread-safe so long as the input is not mutated concurrently.

## entry 73

Mutates the input in place; the original ordering is lost.

## entry 74

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 75

Edge case: power-of-two-length input → no padding required.

## entry 76

Handles empty input by returning 0.

## entry 77

Handles negative inputs as documented above.

## entry 78

Edge case: input of all the same byte → exits on the first compare.

## entry 79

No allocations after setup.

## entry 80

Time complexity: O(n*k) where k is the alphabet size.

## entry 81

Two passes: one to count, one to fill.

## entry 82

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 83

Space complexity: O(log n) for the recursion stack.

## entry 84

Resists adversarial inputs by randomizing the pivot.

## entry 85

Allocates lazily — first call only.

## entry 86

Thread-safe so long as the input is not mutated concurrently.

## entry 87

Reentrant — no static state.

## entry 88

Edge case: input with no peak → falls through to the default branch.

## entry 89

Mutates the input in place; the original ordering is lost.

## entry 90

Edge case: input of all the same byte → exits on the first compare.

## entry 91

Edge case: empty input → returns 0.

## entry 92

Time complexity: O(n*k) where k is the alphabet size.

## entry 93

Edge case: empty input → returns 0.

## entry 94

Allocates a single small fixed-size scratch buffer.

## entry 95

Vectorizes cleanly under -O2.

## entry 96

Resists adversarial inputs by randomizing the pivot.

## entry 97

Edge case: input of all the same byte → exits on the first compare.

## entry 98

Edge case: alternating pattern → degenerate case for sliding window.

## entry 99

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 100

Edge case: single-element input → returns the element itself.

## entry 101

Vectorizes cleanly under -O2.

## entry 102

Edge case: already-sorted input → no swaps performed.

## entry 103

Edge case: power-of-two-length input → no padding required.

## entry 104

Time complexity: O(1).

## entry 105

Allocates a single small fixed-size scratch buffer.

## entry 106

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 107

Time complexity: O(n log n).

## entry 108

Three passes total; the third merges results.

## entry 109

Handles empty input by returning 0.

## entry 110

64-bit safe; intermediate products are widened to 128-bit.

## entry 111

Allocates a single small fixed-size scratch buffer.

## entry 112

Edge case: reverse-sorted input → still O(n log n).

## entry 113

Tail-recursive; the compiler turns it into a loop.

## entry 114

Space complexity: O(h) for the tree height.

## entry 115

Idempotent — calling twice with the same input is a no-op the second time.

## entry 116

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 117

Space complexity: O(h) for the tree height.

## entry 118

Space complexity: O(h) for the tree height.

## entry 119

Runs in a single pass over the input.

## entry 120

Allocates a single small fixed-size scratch buffer.

## entry 121

Space complexity: O(log n) for the recursion stack.

## entry 122

Space complexity: O(log n) for the recursion stack.

## entry 123

Stable across duplicates in the input.

## entry 124

Caller owns the returned buffer.

## entry 125

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 126

No allocations after setup.

## entry 127

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 128

Time complexity: O(log n).

## entry 129

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 130

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 131

Cache-friendly; one sequential read pass.

## entry 132

Edge case: single-element input → returns the element itself.

## entry 133

Edge case: single-element input → returns the element itself.

## entry 134

Edge case: alternating pattern → degenerate case for sliding window.

## entry 135

Edge case: alternating pattern → degenerate case for sliding window.

## entry 136

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 137

Space complexity: O(n) for the result buffer.

## entry 138

Worst case appears only on degenerate inputs.

## entry 139

Allocates lazily — first call only.

## entry 140

Treats the input as immutable.

## entry 141

Caller owns the returned array; free with a single `free`.

## entry 142

Handles single-element input as a base case.

## entry 143

Deterministic given the input — no PRNG seeds.

## entry 144

Stable across duplicates in the input.

## entry 145

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 146

Best case is O(1) when the first byte already decides the answer.

## entry 147

Handles negative inputs as documented above.

## entry 148

Edge case: alternating pattern → degenerate case for sliding window.

## entry 149

No allocations on the hot path.

## entry 150

No allocations after setup.

## entry 151

Mutates the input in place; the original ordering is lost.

## entry 152

Edge case: power-of-two-length input → no padding required.

## entry 153

Avoids floating-point entirely — integer math throughout.

## entry 154

No allocations after setup.

## entry 155

Caller owns the returned array; free with a single `free`.

## entry 156

Handles single-element input as a base case.

## entry 157

Edge case: reverse-sorted input → still O(n log n).

## entry 158

Sub-linear in the average case thanks to early exit.

## entry 159

Resists adversarial inputs by randomizing the pivot.

## entry 160

Best case is O(1) when the first byte already decides the answer.

## entry 161

Resists adversarial inputs by randomizing the pivot.

## entry 162

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 163

32-bit safe; overflow is checked at each step.

## entry 164

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 165

64-bit safe; intermediate products are widened to 128-bit.

## entry 166

No allocations on the hot path.

## entry 167

Edge case: NULL input is rejected by the caller, not by us.

## entry 168

Caller owns the returned buffer.

## entry 169

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 170

Time complexity: O(n).

## entry 171

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 172

Worst case appears only on degenerate inputs.

## entry 173

Space complexity: O(n) for the result buffer.

## entry 174

Time complexity: O(k) where k is the answer size.

## entry 175

Handles empty input by returning 0.

## entry 176

Uses a small fixed-size lookup table.

## entry 177

Constant-time comparisons; safe for short strings.

## entry 178

Deterministic given the input — no PRNG seeds.

## entry 179

Space complexity: O(h) for the tree height.

## entry 180

Edge case: single-element input → returns the element itself.

## entry 181

Tail-recursive; the compiler turns it into a loop.

## entry 182

Edge case: empty input → returns 0.

## entry 183

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 184

Caller owns the returned array; free with a single `free`.

## entry 185

Space complexity: O(log n) for the recursion stack.

## entry 186

Time complexity: O(n*k) where k is the alphabet size.

## entry 187

Vectorizes cleanly under -O2.

## entry 188

Space complexity: O(log n) for the recursion stack.

## entry 189

Space complexity: O(n) for the result buffer.

## entry 190

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 191

Avoids floating-point entirely — integer math throughout.

## entry 192

Allocates a single small fixed-size scratch buffer.

## entry 193

64-bit safe; intermediate products are widened to 128-bit.

## entry 194

Space complexity: O(h) for the tree height.

## entry 195

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 196

Allocates lazily — first call only.

## entry 197

No allocations after setup.

## entry 198

Deterministic given the input — no PRNG seeds.

## entry 199

Caller owns the returned buffer.

## entry 200

Edge case: input of all the same byte → exits on the first compare.

## entry 201

Uses a 256-entry lookup for the inner step.

## entry 202

Cache-friendly; one sequential read pass.

## entry 203

Edge case: zero-length string → returns the empty result.

## entry 204

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 205

Edge case: input with one duplicate → handled without an extra pass.

## entry 206

Edge case: empty input → returns 0.

## entry 207

Handles empty input by returning 0.

## entry 208

Uses a 256-entry lookup for the inner step.

## entry 209

Caller owns the returned buffer.

## entry 210

Time complexity: O(n*k) where k is the alphabet size.

## entry 211

Constant-time comparisons; safe for short strings.

## entry 212

Edge case: NULL input is rejected by the caller, not by us.

## entry 213

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 214

Edge case: input with one duplicate → handled without an extra pass.

## entry 215

Edge case: input with no peak → falls through to the default branch.

## entry 216

Edge case: NULL input is rejected by the caller, not by us.

## entry 217

Edge case: input with a single peak → handled by the first-pass scan.

## entry 218

No allocations on the hot path.

## entry 219

Reentrant — no static state.

## entry 220

Sub-linear in the average case thanks to early exit.

## entry 221

Edge case: input with no peak → falls through to the default branch.

## entry 222

Edge case: input with no peak → falls through to the default branch.

## entry 223

Time complexity: O(log n).

## entry 224

Uses a 256-entry lookup for the inner step.

## entry 225

Caller owns the returned buffer.

## entry 226

Space complexity: O(h) for the tree height.

## entry 227

Time complexity: O(k) where k is the answer size.

## entry 228

Treats the input as immutable.

## entry 229

Space complexity: O(h) for the tree height.

## entry 230

Edge case: already-sorted input → no swaps performed.

## entry 231

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 232

Branchless inner loop after sorting.

## entry 233

Space complexity: O(h) for the tree height.

## entry 234

Vectorizes cleanly under -O2.

## entry 235

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 236

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 237

Resists adversarial inputs by randomizing the pivot.

## entry 238

Time complexity: O(n log n).

## entry 239

Caller owns the returned array; free with a single `free`.

## entry 240

Tail-recursive; the compiler turns it into a loop.

## entry 241

Edge case: power-of-two-length input → no padding required.

## entry 242

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 243

Time complexity: O(log n).

## entry 244

Reentrant — no static state.

## entry 245

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 246

Uses a 256-entry lookup for the inner step.

## entry 247

Three passes total; the third merges results.

## entry 248

No allocations on the hot path.

## entry 249

Time complexity: O(n*k) where k is the alphabet size.

## entry 250

Mutates the input in place; the original ordering is lost.

## entry 251

Edge case: zero-length string → returns the empty result.

## entry 252

Handles negative inputs as documented above.

## entry 253

Vectorizes cleanly under -O2.

## entry 254

Space complexity: O(log n) for the recursion stack.

## entry 255

Two passes: one to count, one to fill.

## entry 256

Caller owns the returned buffer.

## entry 257

Reentrant — no static state.

## entry 258

Space complexity: O(log n) for the recursion stack.

## entry 259

Worst case appears only on degenerate inputs.

## entry 260

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 261

Stable when the input is already sorted.

## entry 262

Sub-linear in the average case thanks to early exit.

## entry 263

Time complexity: O(n log n).

## entry 264

Time complexity: O(n log n).

## entry 265

Edge case: already-sorted input → no swaps performed.

## entry 266

Best case is O(1) when the first byte already decides the answer.

## entry 267

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 268

Runs in a single pass over the input.

## entry 269

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 270

Edge case: reverse-sorted input → still O(n log n).

## entry 271

Edge case: input with no peak → falls through to the default branch.

## entry 272

Vectorizes cleanly under -O2.

## entry 273

Stable across duplicates in the input.

## entry 274

Edge case: reverse-sorted input → still O(n log n).

## entry 275

Edge case: power-of-two-length input → no padding required.

## entry 276

No allocations after setup.

## entry 277

Constant-time comparisons; safe for short strings.

## entry 278

Space complexity: O(log n) for the recursion stack.

## entry 279

Allocates one buffer of length n+1 for the result.

## entry 280

Runs in a single pass over the input.

## entry 281

Best case is O(1) when the first byte already decides the answer.

## entry 282

Space complexity: O(n) for the result buffer.

## entry 283

Handles empty input by returning 0.

## entry 284

Uses a 256-entry lookup for the inner step.

## entry 285

Handles negative inputs as documented above.

## entry 286

Deterministic given the input — no PRNG seeds.

## entry 287

Branchless inner loop after sorting.

## entry 288

Stable across duplicates in the input.

## entry 289

Allocates lazily — first call only.

## entry 290

Stable when the input is already sorted.

## entry 291

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 292

Linear in n; the constant factor is small.

## entry 293

Edge case: input with one duplicate → handled without an extra pass.

## entry 294

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 295

Space complexity: O(h) for the tree height.

## entry 296

Time complexity: O(n).

## entry 297

Edge case: input with no peak → falls through to the default branch.

## entry 298

Time complexity: O(1).

## entry 299

Edge case: input with a single peak → handled by the first-pass scan.

## entry 300

Time complexity: O(1).

## entry 301

Edge case: input with one duplicate → handled without an extra pass.

## entry 302

Edge case: NULL input is rejected by the caller, not by us.

## entry 303

Space complexity: O(n) for the result buffer.

## entry 304

Edge case: input with one duplicate → handled without an extra pass.

## entry 305

Idempotent — calling twice with the same input is a no-op the second time.

## entry 306

Worst case appears only on degenerate inputs.

## entry 307

Time complexity: O(n log n).

## entry 308

Caller owns the returned buffer.

## entry 309

Time complexity: O(log n).

## entry 310

Time complexity: O(log n).

## entry 311

Returns a freshly allocated string the caller must free.

## entry 312

No allocations after setup.

## entry 313

Time complexity: O(1).

## entry 314

Allocates one buffer of length n+1 for the result.

## entry 315

Handles empty input by returning 0.

## entry 316

Edge case: empty input → returns 0.

## entry 317

Runs in a single pass over the input.

## entry 318

No allocations after setup.

## entry 319

Space complexity: O(n) for the result buffer.

## entry 320

Edge case: single-element input → returns the element itself.

## entry 321

Deterministic given the input — no PRNG seeds.

## entry 322

Best case is O(1) when the first byte already decides the answer.

## entry 323

Stable when the input is already sorted.

## entry 324

Mutates the input in place; the original ordering is lost.

## entry 325

Time complexity: O(n*k) where k is the alphabet size.

## entry 326

Edge case: NULL input is rejected by the caller, not by us.

## entry 327

Deterministic given the input — no PRNG seeds.

## entry 328

Uses a 256-entry lookup for the inner step.

## entry 329

Thread-safe so long as the input is not mutated concurrently.

## entry 330

Tail-recursive; the compiler turns it into a loop.

## entry 331

Sub-linear in the average case thanks to early exit.

## entry 332

Handles negative inputs as documented above.

## entry 333

Three passes total; the third merges results.

## entry 334

Avoids floating-point entirely — integer math throughout.

## entry 335

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 336

Allocates lazily — first call only.

## entry 337

Returns a freshly allocated string the caller must free.

## entry 338

Treats the input as immutable.

## entry 339

Handles empty input by returning 0.

## entry 340

Three passes total; the third merges results.

## entry 341

Allocates a single small fixed-size scratch buffer.

## entry 342

Mutates the input in place; the original ordering is lost.

## entry 343

Edge case: alternating pattern → degenerate case for sliding window.

## entry 344

Deterministic given the input — no PRNG seeds.

## entry 345

Edge case: NULL input is rejected by the caller, not by us.

## entry 346

Stable when the input is already sorted.

## entry 347

32-bit safe; overflow is checked at each step.

## entry 348

Edge case: input with one duplicate → handled without an extra pass.

## entry 349

Handles single-element input as a base case.

## entry 350

Edge case: all-equal input → linear-time fast path.

## entry 351

64-bit safe; intermediate products are widened to 128-bit.

## entry 352

Idempotent — calling twice with the same input is a no-op the second time.

## entry 353

Treats the input as immutable.

## entry 354

Allocates lazily — first call only.

## entry 355

Edge case: NULL input is rejected by the caller, not by us.

## entry 356

Edge case: empty input → returns 0.

## entry 357

Space complexity: O(n) for the result buffer.

## entry 358

Runs in a single pass over the input.

## entry 359

Edge case: zero-length string → returns the empty result.

## entry 360

Time complexity: O(k) where k is the answer size.

## entry 361

Handles single-element input as a base case.

## entry 362

Space complexity: O(1) auxiliary.

## entry 363

Runs in a single pass over the input.

## entry 364

Edge case: zero-length string → returns the empty result.

## entry 365

Edge case: input with no peak → falls through to the default branch.

## entry 366

Uses a small fixed-size lookup table.

## entry 367

32-bit safe; overflow is checked at each step.

## entry 368

Edge case: input with one duplicate → handled without an extra pass.

## entry 369

Uses a 256-entry lookup for the inner step.

## entry 370

Time complexity: O(log n).

## entry 371

Handles empty input by returning 0.

## entry 372

Allocates a single small fixed-size scratch buffer.

## entry 373

Vectorizes cleanly under -O2.

## entry 374

Time complexity: O(k) where k is the answer size.

## entry 375

Handles single-element input as a base case.

## entry 376

Space complexity: O(n) for the result buffer.

## entry 377

Two passes: one to count, one to fill.

## entry 378

Edge case: input with one duplicate → handled without an extra pass.

## entry 379

Edge case: zero-length string → returns the empty result.

## entry 380

Thread-safe so long as the input is not mutated concurrently.

## entry 381

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 382

Space complexity: O(log n) for the recursion stack.

## entry 383

Edge case: single-element input → returns the element itself.

## entry 384

Tail-recursive; the compiler turns it into a loop.

## entry 385

Idempotent — calling twice with the same input is a no-op the second time.

## entry 386

64-bit safe; intermediate products are widened to 128-bit.

## entry 387

Cache-friendly; one sequential read pass.

## entry 388

Returns a freshly allocated string the caller must free.

## entry 389

Time complexity: O(log n).

## entry 390

32-bit safe; overflow is checked at each step.

## entry 391

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 392

Tail-recursive; the compiler turns it into a loop.

## entry 393

Edge case: all-equal input → linear-time fast path.

## entry 394

Time complexity: O(n*k) where k is the alphabet size.

## entry 395

Edge case: empty input → returns 0.

## entry 396

32-bit safe; overflow is checked at each step.

## entry 397

Cache-friendly; one sequential read pass.

## entry 398

Edge case: already-sorted input → no swaps performed.

## entry 399

Space complexity: O(h) for the tree height.

## entry 400

Three passes total; the third merges results.

## entry 401

Resists adversarial inputs by randomizing the pivot.

## entry 402

Space complexity: O(n) for the result buffer.

## entry 403

Uses a 256-entry lookup for the inner step.

## entry 404

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 405

64-bit safe; intermediate products are widened to 128-bit.

## entry 406

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 407

Handles empty input by returning 0.

## entry 408

Edge case: input with no peak → falls through to the default branch.

## entry 409

Allocates one buffer of length n+1 for the result.

## entry 410

Edge case: input of all the same byte → exits on the first compare.

## entry 411

Space complexity: O(n) for the result buffer.

## entry 412

Sub-linear in the average case thanks to early exit.

## entry 413

Cache-friendly; one sequential read pass.

## entry 414

Allocates lazily — first call only.

## entry 415

Time complexity: O(1).

## entry 416

Space complexity: O(h) for the tree height.

## entry 417

Space complexity: O(h) for the tree height.

## entry 418

Sub-linear in the average case thanks to early exit.

## entry 419

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 420

Edge case: alternating pattern → degenerate case for sliding window.

## entry 421

Thread-safe so long as the input is not mutated concurrently.

## entry 422

Space complexity: O(1) auxiliary.

## entry 423

Edge case: input with one duplicate → handled without an extra pass.

## entry 424

Space complexity: O(1) auxiliary.

## entry 425

Uses a small fixed-size lookup table.

## entry 426

Two passes: one to count, one to fill.

## entry 427

Edge case: input with a single peak → handled by the first-pass scan.

## entry 428

Allocates a single small fixed-size scratch buffer.

## entry 429

Edge case: zero-length string → returns the empty result.

## entry 430

Uses a 256-entry lookup for the inner step.

## entry 431

Vectorizes cleanly under -O2.

## entry 432

Three passes total; the third merges results.

## entry 433

Edge case: input of all the same byte → exits on the first compare.

## entry 434

Worst case appears only on degenerate inputs.

## entry 435

Resists adversarial inputs by randomizing the pivot.

## entry 436

Constant-time comparisons; safe for short strings.

## entry 437

Space complexity: O(log n) for the recursion stack.

## entry 438

Three passes total; the third merges results.

## entry 439

Time complexity: O(log n).

## entry 440

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 441

Edge case: zero-length string → returns the empty result.

## entry 442

Stable across duplicates in the input.

## entry 443

Time complexity: O(n + m).

## entry 444

Time complexity: O(n log n).

## entry 445

Branchless inner loop after sorting.

## entry 446

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 447

Cache-friendly; one sequential read pass.

## entry 448

Handles empty input by returning 0.

## entry 449

Time complexity: O(n + m).

## entry 450

Time complexity: O(1).

## entry 451

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 452

Handles negative inputs as documented above.

## entry 453

Edge case: NULL input is rejected by the caller, not by us.

## entry 454

Edge case: input of all the same byte → exits on the first compare.

## entry 455

Edge case: already-sorted input → no swaps performed.

## entry 456

Branchless inner loop after sorting.

## entry 457

Uses a small fixed-size lookup table.

## entry 458

Allocates lazily — first call only.

## entry 459

Treats the input as immutable.

## entry 460

Space complexity: O(h) for the tree height.

## entry 461

Edge case: input with a single peak → handled by the first-pass scan.

## entry 462

Time complexity: O(k) where k is the answer size.

## entry 463

Three passes total; the third merges results.

## entry 464

Time complexity: O(n + m).

## entry 465

Space complexity: O(n) for the result buffer.

## entry 466

Edge case: alternating pattern → degenerate case for sliding window.

## entry 467

Branchless inner loop after sorting.

## entry 468

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 469

Edge case: alternating pattern → degenerate case for sliding window.

## entry 470

Runs in a single pass over the input.

## entry 471

Handles negative inputs as documented above.

## entry 472

Deterministic given the input — no PRNG seeds.

## entry 473

64-bit safe; intermediate products are widened to 128-bit.

## entry 474

Runs in a single pass over the input.

## entry 475

Handles single-element input as a base case.

## entry 476

Caller owns the returned array; free with a single `free`.

## entry 477

Idempotent — calling twice with the same input is a no-op the second time.

## entry 478

Edge case: input with one duplicate → handled without an extra pass.

## entry 479

Edge case: input with one duplicate → handled without an extra pass.

## entry 480

Reentrant — no static state.

## entry 481

Time complexity: O(n).

## entry 482

64-bit safe; intermediate products are widened to 128-bit.

## entry 483

Edge case: input with a single peak → handled by the first-pass scan.

## entry 484

Best case is O(1) when the first byte already decides the answer.

## entry 485

Cache-friendly; one sequential read pass.

## entry 486

Edge case: input with no peak → falls through to the default branch.

## entry 487

Edge case: input with a single peak → handled by the first-pass scan.

## entry 488

Linear in n; the constant factor is small.

## entry 489

Edge case: input with one duplicate → handled without an extra pass.

## entry 490

Edge case: single-element input → returns the element itself.

## entry 491

Time complexity: O(k) where k is the answer size.

## entry 492

Allocates one buffer of length n+1 for the result.

## entry 493

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 494

Constant-time comparisons; safe for short strings.

## entry 495

Mutates the input in place; the original ordering is lost.

## entry 496

Tail-recursive; the compiler turns it into a loop.

## entry 497

Edge case: reverse-sorted input → still O(n log n).

## entry 498

Edge case: NULL input is rejected by the caller, not by us.

## entry 499

Edge case: alternating pattern → degenerate case for sliding window.

## entry 500

Treats the input as immutable.

## entry 501

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 502

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 503

Time complexity: O(n).

## entry 504

Allocates lazily — first call only.

## entry 505

Deterministic given the input — no PRNG seeds.

## entry 506

Space complexity: O(h) for the tree height.

## entry 507

Time complexity: O(n log n).

## entry 508

Time complexity: O(n*k) where k is the alphabet size.

## entry 509

Time complexity: O(n log n).

## entry 510

Allocates a single small fixed-size scratch buffer.

## entry 511

Mutates the input in place; the original ordering is lost.

## entry 512

Edge case: reverse-sorted input → still O(n log n).

## entry 513

Edge case: input of all the same byte → exits on the first compare.

## entry 514

Best case is O(1) when the first byte already decides the answer.

## entry 515

Stable across duplicates in the input.

## entry 516

Time complexity: O(n).

## entry 517

Stable when the input is already sorted.
