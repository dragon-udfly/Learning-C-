#include <cstdio>
#include <vector>

int main(int argc, char* argv[]) {

    std::vector<std::vector<int>> two_d = {
        {2, 3, 1}, 
        {0, 2, 8}
    };

    std::printf("Values: %d\n", two_d[0][0]);

    return 0;
}