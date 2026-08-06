#include <cstdio>
#include <stack>

void PrintItems(std::stack<int> temp) {
    if(!temp.empty()){
        while(!temp.empty()) {
            std::printf("%d ", temp.top());
            temp.pop();
        }
        std::printf("\n");
    } else {
        std::printf("Stack Is Empty.\n");
    }
}

int main() {

    std::stack<int> numbers;

    numbers.push(20);
    numbers.push(23);
    numbers.push(73);
    numbers.push(49);

    PrintItems(numbers);
    numbers.pop();
    PrintItems(numbers);

    std::printf("Size: %zu\n", numbers.size());
    std::printf("Top: %d\n", numbers.top());
    std::printf("Empty? %s\n", numbers.empty()? "Yes": "No");

    return 0;
}