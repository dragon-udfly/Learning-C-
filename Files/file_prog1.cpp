#include <cstdio> 
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {

    std::fstream file("file.txt");

    if(!file.is_open()) {
        std::printf("ERROR LOG: Cound not open the file.\n");
        return 1;
    }

    std::string buffer_line = " ";

    while(std::getline(file, buffer_line)){
        std::printf("%s\n", buffer_line.c_str());
    }

    file.close(); // optional to close the file, destructor closes it automatically.

    return 0;
}