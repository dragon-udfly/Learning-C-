#include <cstdio>
#include <string>
#include <cstdlib>

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

    Book book_one;

    if(std::string(argv[1]) == "-init") {
        std::printf("LOG: -init command detected.\n");
        if(argc == 5) {
            std::printf("LOG: Argument count is 5.\n");
            char* end_ptr = nullptr;
            double price_value = std::strtod(argv[4], &end_ptr);

            if(argv[4] != end_ptr) {
                std::printf("LOG: String to double is successful.\n");
                book_one.SetTitle(argv[2]);
                book_one.SetAuthor(argv[3]);
                book_one.SetPrice(price_value);

                std::printf("LOG: Book Object Created.\n");
            } else {
                std::printf("LOG: Error, Unable to parse string to double.\n");
            }
        }
    }

    if(std::string(argv[1]) == "-print") {
        std::printf("LOG: -print command detected.\n");
        if(argc == 2) {
            std::printf("LOG: Argument count is 2.\n");
            std::printf("Title: %s\n", book_one.GetTitle().c_str());
            std::printf("Author: %s\n", book_one.GetAuthor().c_str());
            std::printf("Price: %.1f\n", book_one.GetPrice());
        }
    }

    return 0;
}