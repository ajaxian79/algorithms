//
// Created by ajaxian on 05/07/26.
//

#ifndef ALGORITHMS_BLOOM_FILTER_H
#define ALGORITHMS_BLOOM_FILTER_H

#include <stddef.h>
#include <stdint.h>

// Probabilistic membership filter. A bit array of `m` bits and `k` hash
// functions; insertion sets the `k` bits; query checks they are all
// still set. False positives are possible (other inserts may have set
// the same bits) but false negatives are not.
//
// Used everywhere in databases: SSTable indexes (LevelDB, RocksDB,
// Cassandra), join filters, cache-stuffing rejection, web cache hits.
// Keeps a tiny footprint relative to a hash set.
//
// Two independent 64-bit hashes are derived from FNV-1a over the input
// bytes salted with two seeds; the canonical Kirsch-Mitzenmacher
// `h_i = h1 + i * h2` trick simulates `k` independent hashes from those
// two without measurable loss in false-positive rate.
typedef struct BloomFilter {
    uint8_t* bits;     // m bits packed
    size_t m_bits;
    int k;
} BloomFilter;

// Initialize with `m_bits` bits and `k` hash functions. Returns 1 on
// success, 0 on bad input or allocation failure. Caller must call
// `bloom_clear` to release.
int bloom_init(BloomFilter* bf, size_t m_bits, int k);

void bloom_clear(BloomFilter* bf);

// Add a key.
void bloom_add(BloomFilter* bf, const void* data, size_t len);

// Returns 1 if the key MIGHT be in the set (definitely if the rate is
// 0%), 0 if it is DEFINITELY not. Never returns a false negative.
int bloom_maybe_contains(const BloomFilter* bf, const void* data, size_t len);

// Convenience for adding a null-terminated string.
void bloom_add_str(BloomFilter* bf, const char* s);
int bloom_maybe_contains_str(const BloomFilter* bf, const char* s);

#endif //ALGORITHMS_BLOOM_FILTER_H
