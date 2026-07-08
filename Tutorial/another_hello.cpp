#include <cstdio>
#include <string>

int main() {

    int age= 23;
    int number_value= 45;
    std::string user_name= "isuru";
    char mark= 'G';
    double weight= 32.33;
    float rate= 0.2f;
    bool is_hired= true;

    std::printf("User Name: %s\n", user_name.c_str());
    std::printf("Age: %d\n", age);
    std::printf("Number: %d\n", number_value);
    std::printf("Makr: %c\n", mark);
    std::printf("Weight: %.2f\n", weight);
    std::printf("Rate: %.1f\n", rate);
    std::printf("Hired: %d\n", is_hired);

    return 0;
}