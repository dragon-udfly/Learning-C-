#include <cstdio>
#include <cmath>

int main() {

    int power_of_two = std::pow(4, 2);
    int sqrt_of_value = std::sqrt(9);
    int abs_of_value = std::abs(-35);
    int ceil_of_value = std::ceil(45/6);
    int floor_of_value = std::floor(34/8);

    std::printf("------Summary-------\n");
    std::printf("Power: %d\n", power_of_two);
    std::printf("Square Root: %d\n", sqrt_of_value);
    std::printf("Absolute Value: %d\n", abs_of_value);
    std::printf("Ceil Value: %d\n", ceil_of_value);
    std::printf("Floor Value: %d\n", floor_of_value);

    return 0;
}