#include <cstdio>
#include <fstream>
#include <string> 

int main(int argc, char* argv[]) {

    // open file 
    std::fstream file("file.txt");

    if(!file.is_open()){
        std::printf("LOG: Error. Can not open the file.\n");
    }

    // store lines 
    std::string line = " ";
    double total = 0.0;

    while(std::getline(file, line)){
        double number = std::stod(line);
        total += number;
    }

    std::printf("Total: %.lf\n", total);

    return 0;
}