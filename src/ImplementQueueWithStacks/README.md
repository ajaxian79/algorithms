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
