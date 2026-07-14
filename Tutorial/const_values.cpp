#include <cstdio>

const int kMaxInputs = 5;

int CalculateMaxOutputs() {
  return kMaxInputs * kMaxInputs;
}

int main() {
  const int kMaxUsers = 4;

  std::printf("Maximum User Inputs: %d\n", kMaxInputs);
  std::printf("Maximum Allowed Users: %d\n", kMaxUsers);
  std::printf("Maximum Outputs: %d\n", CalculateMaxOutputs());

  return 0;
}