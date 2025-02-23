#include <cassert>
#include <cmath>
#include <numbers>

int main() {
  constexpr auto pi{std::numbers::pi_v<float>};

  assert(std::acos(0.0f) == pi/2);
  assert(std::asin(1.0f) == pi/2);
}
