//
// Created by ajaxian on 05/07/26.
//

#include <stdlib.h>
#include <string.h>

#include "bloom_filter.h"

static uint64_t fnv1a(const void* data, size_t len, uint64_t seed) {
    const uint8_t* p = (const uint8_t*)data;
    uint64_t h = 0xcbf29ce484222325ull ^ seed;
    for (size_t i = 0; i < len; i++) {
        h ^= (uint64_t)p[i];
        h *= 0x100000001b3ull;
    }
    return h;
}

int bloom_init(BloomFilter* bf, size_t m_bits, int k) {
    if (!bf || m_bits == 0 || k <= 0) return 0;
    size_t bytes = (m_bits + 7) / 8;
    bf->bits = (uint8_t*)calloc(bytes, 1);
    if (!bf->bits) return 0;
    bf->m_bits = m_bits;
    bf->k = k;
    return 1;
}

void bloom_clear(BloomFilter* bf) {
    if (!bf) return;
    free(bf->bits);
    bf->bits = NULL;
    bf->m_bits = 0;
    bf->k = 0;
}

static void set_bit(uint8_t* bits, size_t idx) {
    bits[idx >> 3] |= (uint8_t)(1u << (idx & 7));
}

static int get_bit(const uint8_t* bits, size_t idx) {
    return (bits[idx >> 3] >> (idx & 7)) & 1u;
}

void bloom_add(BloomFilter* bf, const void* data, size_t len) {
    if (!bf || !bf->bits) return;
    uint64_t h1 = fnv1a(data, len, 0x9E3779B97F4A7C15ull);
    uint64_t h2 = fnv1a(data, len, 0xBB67AE8584CAA73Bull);
    for (int i = 0; i < bf->k; i++) {
        uint64_t h = h1 + (uint64_t)i * h2;
        size_t idx = (size_t)(h % bf->m_bits);
        set_bit(bf->bits, idx);
    }
}

int bloom_maybe_contains(const BloomFilter* bf, const void* data, size_t len) {
    if (!bf || !bf->bits) return 0;
    uint64_t h1 = fnv1a(data, len, 0x9E3779B97F4A7C15ull);
    uint64_t h2 = fnv1a(data, len, 0xBB67AE8584CAA73Bull);
    for (int i = 0; i < bf->k; i++) {
        uint64_t h = h1 + (uint64_t)i * h2;
        size_t idx = (size_t)(h % bf->m_bits);
        if (!get_bit(bf->bits, idx)) return 0;
    }
    return 1;
}

void bloom_add_str(BloomFilter* bf, const char* s) {
    if (!s) return;
    bloom_add(bf, s, strlen(s));
}

int bloom_maybe_contains_str(const BloomFilter* bf, const char* s) {
    if (!s) return 0;
    return bloom_maybe_contains(bf, s, strlen(s));
}
