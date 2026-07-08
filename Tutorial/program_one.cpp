#include <cstdio>
#include <string>

// typedef <real datatype> AliasName or NickName
typedef std::string Text;

int main() {
    Text username= "user23";
    Text password= "83dkce";
    Text country= "India";
    Text city= "New Delhi";

    std::printf("User Name: %s\n", username.c_str());
    std::printf("Password: %s\n", password.c_str());
    std::printf("Country: %s\n", country.c_str());
    std::printf("City: %s\n", city.c_str());

    return 0;
}