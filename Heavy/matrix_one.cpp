#include <cstdio>
#include <vector>

int main(int argc, char* argv[]) {

    std::vector<int> numbers; // declaration

    numbers.push_back(23); // adding numbers
    numbers.push_back(33);
    numbers.push_back(67);
    numbers.push_back(20);
    numbers.push_back(24);

    std::printf("%d\n", numbers[3]);

    return 0;
}