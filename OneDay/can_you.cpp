#include <cstdio>

int main(int argc, char* argv[]) {

    std::printf("Argument Count: %d\n", argc);
    for(int i = 0; i < argc; i++) {
        std::printf("%s\n", argv[i]);
    }
    return 0;
}