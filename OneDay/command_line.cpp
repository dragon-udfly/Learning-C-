#include <cstdio>
#include <string>

int main(int argc, char* argv[]) {

    // file.exe add x,y
    if(argc == 4) {

        std::string command = argv[1];
        int num1 = std::stoi(argv[2]);
        int num2 = std::stoi(argv[3]);
        
        if(command == "add") {
            std::printf("Result: %d\n", (num1 + num2));
        } else if(command == "sub") {
            std::printf("Result: %d\n", (num1 - num2));
        } else {
            std::printf("Invalid Expression.\n");
        }

    } else {
        std::printf("Error: Invalid Expression.\n");
    }
    
    return 0;
}