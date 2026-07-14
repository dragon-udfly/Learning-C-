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

  double speed_of_light = 299792458.0;
  double electron_mass = 0.000000000000000000000000000000910938356;

  // 1. Standard lowercase E-notation
  std::printf("Speed of light (default): %e\n", speed_of_light);

  // 2. Uppercase E-notation
  std::printf("Speed of light (uppercase): %E\n", speed_of_light);

  // 3. Controlled precision (2 decimal places)
  std::printf("Electron mass (precision 2): %.2e\n", electron_mass);
  std::printf("Electron mass (precision 4): %.4e\n", electron_mass);
  
  return 0;
}