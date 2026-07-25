#include <cstdio>

int main() {

    const int kArraySize = 5;

    int number_array[kArraySize] = {0};

    std::printf("Enter Number for Array: \n");
    for(int i = 0; i < kArraySize; i++) {
        std::printf("Value for [%d]: ", i);
        std::scanf("%d", &number_array[i]);
        std::fgetc(stdin);
    }
    std::printf("Number Insertion Finished.\n");

    std::printf("Added Numbers: ");
    for(int i = 0; i < kArraySize; i++) {
        std::printf("%d ", number_array[i]);
    }
    std::printf("\n");

    return 0;
}