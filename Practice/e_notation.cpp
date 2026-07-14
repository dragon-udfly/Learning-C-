#include <cstdio>

int main() {
  // 1. Double precision (Standard)
  double large_distance = 3.0e8; // 3.0 * 10^8 (Speed of light)
  std::printf("Distance: %.1f\n", large_distance);

  // 2. Single precision Float (Requires lowercase 'f' suffix)
  float small_measurement = 4.2e-3f; // 4.2 * 10^-3
  std::printf("Measurement: %.4f\n", small_measurement);

  // 3. Mathematical calculation using E notation
  double charge = 1.602e-19;
  std::printf("Electron Charge: %.22f\n", charge);

  return 0;
}