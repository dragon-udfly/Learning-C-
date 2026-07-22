#include <cstdio>

int main() {

    int value = 90; 

    std::printf("Value: %d, Address: %x\n", value, &value);

    int *ptr_get = NULL;

    if(!ptr_get) {
        std::printf("The pointer is NULL. %x\n", ptr_get);
        ptr_get = &value;
    }

    if(ptr_get) {
        std::printf("The pointer is NOT NULL.%x\n", ptr_get);
        ptr_get = NULL;
    }

    return 0;
}