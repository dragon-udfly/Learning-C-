#include <cstdio>

namespace group_one {
    const int kMembers= 5;
    int x= 89;
}

namespace group_two {
    const int kMembers= 3;
    int x= 34;
}

int main() {

    const int kMembers= 2;
    int x= 90;

    std::printf("Members of Group One: %d\n", group_one::kMembers);
    std::printf("Values of X in Group One: %d\n", group_one::x);
    std::printf("Members of Group Two: %d\n", group_two::kMembers);
    std::printf("Value of X in Group Two: %d\n", group_two::x);

    std::printf("Default Group Members: %d\n", kMembers);
    std::printf("Deault Value of X: %d\n", x);
}