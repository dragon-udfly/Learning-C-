#include <cstdio>
#include <string>

class Village {
    public:
        Village() = default;

        Village(const std::string& name, int people, int families)
        :name_(name), people_(people), families_(families) {}

        std::string GetName() const {return name_;}

        int GetPeople() const {return people_;}

        int GetFamilies() const {return families_;}

        void SetName(const std::string& name) {name_ = name;}

        void SetPeople(int people) {people_ = people;}

        void SetFamilies(int families) {families_ = families;}

    private:
        std::string name_ = "unknown";
        int people_ = 0;
        int families_ = 0;
};

int main() {

    Village village_one;
    
    Village village_two("Gui", 45, 10);

    village_one.SetName("Jahi");

    std::printf("%d live in %s.\n", village_two.GetPeople(), village_two.GetName().c_str());

    return 0;
}