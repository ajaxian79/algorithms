# Group Anagrams (Count)

Group strings by anagram class and return the number of classes. Each
string's canonical key is its sorted byte sequence; a linear scan over
already-known keys checks for membership. Cleaner than rolling a hash
map and the constant factor is fine for the small inputs this repo deals
in.

Time complexity: O(n^2 * k) worst case, where k is max length — the
inner key-compare scan is what dominates. With a hash map it'd drop to
O(n * k log k).

Space complexity: O(n * k) for stored keys.

Returns a freshly allocated string the caller must free. (Not externally
visible — keys are owned and freed inside.)

Edge case: empty input → returns 0.

Edge case: NULL string entries are treated as empty — they all join the
same group.
