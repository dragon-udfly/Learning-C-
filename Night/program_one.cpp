#include <cstdio>
#include <string>

class Village {
    public:
        // default constructor
        Village() = default;

        // parameterized constructor
        Village(std::string& village_name, int number_families, int number_people)
        :village_name_(village_name), number_families_(number_families), number_people_(number_people){}

    private:
        std::string village_name_ = "unknown";
        int number_families_ = 0;
        int number_people_ = 0;
};

int main() {

    return 0;
}