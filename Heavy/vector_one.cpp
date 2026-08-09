#include <cstdio>
#include <vector>

int main() {

    std::vector<int> values(10, 0); // initializing vector of 10 elements value of 0

    std::printf("value: %d\n", values[3]); // print value
    std::printf("Size: %zu\n", values.size()); // size
    values.push_back(3); // append value
    std::printf("Size: %zu\n", values.size()); // new size
    // check empty
    (values.empty())? std::printf("Vector is Empty.\n"): std::printf("Vector is not Empty.\n");

    values[0] = 23; // modify value
    values[1] = 10;
    std::printf("Front Element: %d\n", values.front()); // front value
    std::printf("Back Element: %d\n", values.back()); // back value
    // remove last elemant
    values.pop_back();
    // printing vector
    for(int x: values) {
        std::printf("%d ", x);
    }
    std::printf("\n");

    // clear vector
    values.clear();
    (values.empty())? std::printf("Vector is Empty.\n"): std::printf("Vector is not Empty.\n");

    return 0;
}