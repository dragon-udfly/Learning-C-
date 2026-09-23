#include <cstdio>
#include <string>

class Book{ 
    public: 
        Book() = default; // default constructor

        // parameter constructor 
        // initializing class variable during object creations
        Book(const std::string& title, const std::string& author, double price) 
        :title_(title), author_(author), price_(price){}

        // getters 

        std::string GetTitle() const {return title_;}
        std::string GetAuthor() const {return author_;}
        double GetPrice() const {return price_;}

        // setters 
        void SetTitle(const std::string& title) {title_ = title;}
        void SetAuthor(const std::string& author) {author_ = author;}
        void SetPrice(double price) {price_ = price;}

    private: 
        std::string title_ = "unknown"; 
        std::string author_ = "unknown"; 
        double price_ = 0.0; 
};

int main(int argc, char* argv[]){

    for(int i = 0; i < argc; i++) {
        std::printf("%s\n", argv[i]);
    }

    return 0;
}