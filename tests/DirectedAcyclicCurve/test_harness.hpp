// Zero-dependency C++ test harness.
//
// The repo's existing tests use munit, which is C-only. Rather than pull in a
// heavyweight C++ framework for one module, this file defines a tiny set of
// assertion macros that record failures and let main() return a non-zero exit
// code on any failure.

#ifndef ALGORITHMS_DAC_TEST_HARNESS_HPP
#define ALGORITHMS_DAC_TEST_HARNESS_HPP

#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

namespace algorithms::dac::testing {

struct TestRegistry {
    struct Test {
        std::string name;
        void (*fn)(TestRegistry&);
    };
    std::vector<Test> tests;
    std::size_t failures = 0;
    std::size_t assertions = 0;
    std::string current_test;

    void add(const char* name, void (*fn)(TestRegistry&)) {
        tests.push_back({name, fn});
    }
    int run_all() {
        std::size_t passed = 0;
        for (auto& t : tests) {
            current_test = t.name;
            std::size_t before = failures;
            std::printf("[ RUN      ] %s\n", t.name.c_str());
            t.fn(*this);
            if (failures == before) {
                std::printf("[       OK ] %s\n", t.name.c_str());
                ++passed;
            } else {
                std::printf("[  FAILED  ] %s\n", t.name.c_str());
            }
        }
        std::printf("[----------] %zu tests, %zu assertions, %zu failures\n",
                    tests.size(), assertions, failures);
        std::printf("[  PASSED  ] %zu tests\n", passed);
        if (failures > 0) {
            std::printf("[  FAILED  ] %zu tests\n", tests.size() - passed);
        }
        return failures == 0 ? 0 : 1;
    }
};

inline TestRegistry& registry() {
    static TestRegistry r;
    return r;
}

}  // namespace algorithms::dac::testing

#define DAC_TEST_FAIL(_msg)                                                   \
    do {                                                                      \
        ++_dac_reg.failures;                                                  \
        std::fprintf(stderr, "  ASSERT FAIL [%s:%d] in %s: %s\n",             \
                     __FILE__, __LINE__, _dac_reg.current_test.c_str(),       \
                     (_msg));                                                 \
    } while (0)

#define DAC_EXPECT(cond)                                                      \
    do {                                                                      \
        ++_dac_reg.assertions;                                                \
        if (!(cond)) {                                                        \
            DAC_TEST_FAIL("EXPECT(" #cond ")");                               \
        }                                                                     \
    } while (0)

#define DAC_EXPECT_EQ(a, b)                                                   \
    do {                                                                      \
        ++_dac_reg.assertions;                                                \
        auto _lhs = (a);                                                      \
        auto _rhs = (b);                                                      \
        if (!(_lhs == _rhs)) {                                                \
            char _buf[256];                                                   \
            std::snprintf(_buf, sizeof _buf,                                  \
                          "EXPECT_EQ(" #a ", " #b ") lhs=%lld rhs=%lld",      \
                          static_cast<long long>(_lhs),                       \
                          static_cast<long long>(_rhs));                      \
            DAC_TEST_FAIL(_buf);                                              \
        }                                                                     \
    } while (0)

#define DAC_TEST(_name)                                                       \
    static void _name(::algorithms::dac::testing::TestRegistry& _dac_reg);    \
    namespace {                                                               \
        struct _name##_register {                                             \
            _name##_register() {                                              \
                ::algorithms::dac::testing::registry().add(#_name, &_name);   \
            }                                                                 \
        };                                                                    \
        static _name##_register _name##_register_instance;                    \
    }                                                                         \
    static void _name(::algorithms::dac::testing::TestRegistry& _dac_reg)

#endif  // ALGORITHMS_DAC_TEST_HARNESS_HPP
