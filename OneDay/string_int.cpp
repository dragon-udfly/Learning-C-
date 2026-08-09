#include <cstdio>
#include <string>

int main(int argc, char* argv[]) {

    std::string txt_num1 = "323";
    std::string txt_num2 = "230";
    std::string txt_num3 = "832";
    std::string txt_num4 = "832";
    std::string txt_num5 = "293";

    int num1 = std::stoi(txt_num1);
    int num2 = std::stoi(txt_num2);
    int num3 = std::stoi(txt_num3);
    int num4 = std::stoi(txt_num4);
    int num5 = std::stoi(txt_num5);

    std::printf("Number: %d\n", num1);
    std::printf("Number: %d\n", num2);
    std::printf("Number: %d\n", num3);
    std::printf("Number: %d\n", num4);
    std::printf("Number: %d\n", num5);
    
    return 0;
}