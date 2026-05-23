// Small demo driver: hand-construct a short X, build a deterministic Y, run
// the locator, and print the resulting equation in Newton form plus a sanity
// trace.

#include <cstdint>
#include <iostream>
#include <vector>

#include "curve_locator.hpp"
#include "y_builder.hpp"

int main() {
    using namespace algorithms::dac;

    const std::vector<std::uint8_t> x = {7, 42, 7, 200, 0, 255, 128, 42, 1, 7};
    auto y = DeterministicYBuilder::build(/*seed=*/0xC0FFEEULL, /*min_length=*/768);

    auto curve = CurveLocator::locate(x, y);
    auto coeffs = curve.newton_coefficients();

    std::cout << "X length: " << x.size() << "\n";
    std::cout << "Y length: " << y.size() << "\n";
    std::cout << "Curve degree (max " << x.size() - 1 << "): " << curve.length() - 1 << "\n";
    std::cout << "Newton coefficients d_k (p(x) = sum d_k * C(x-1, k)):\n";
    for (std::size_t k = 0; k < coeffs.size(); ++k) {
        std::cout << "  d[" << k << "] = " << coeffs[k] << "\n";
    }
    std::cout << "Trace:\n";
    for (std::size_t i = 1; i <= x.size(); ++i) {
        const std::size_t j = curve.evaluate_at_node(i);
        std::cout << "  i=" << i << "  p(i)=" << j
                  << "  Y[p(i)]=" << static_cast<int>(y[j])
                  << "  X[i-1]=" << static_cast<int>(x[i - 1]) << "\n";
    }
    std::cout << "verify: " << (CurveLocator::verify(curve, x, y) ? "ok" : "FAIL") << "\n";
    return 0;
}
