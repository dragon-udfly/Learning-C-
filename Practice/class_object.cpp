#include <cstdio>
#include <string>

class OrangeClass {
    public:
        OrangeClass() = default;
        OrangeClass(const std::string& name, int oranges)
            : og_name_(name), oranges_(oranges) {
            std::printf("Orange Class Is Initialized.\n");
        }

        std::string GetName() const {return og_name_;}
        
        void SetName(const std::string& name) { og_name_ = name; }

        int GetOranges() const {return oranges_;}

        void SetOranges(int oranges) { oranges_ = oranges; }

        void PrintStuff() const {
            std::printf("Name: %s, Oranges: %d\n", og_name_.c_str(), oranges_);
        }

    private:
        std::string og_name_ = "";
        int oranges_ = 0;
};
int main() {
    OrangeClass orange_one("StoneCold", 32);
    orange_one.PrintStuff();

    return 0;
}