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

void Booknitializer(std::string title, std::string author, double price){
    Book book_one(title, author, price); 
    std::printf("LOG: Book Object Created.\n");
}

int main(int argc, char* argv[]){

    if(std::string(argv[1]) == "-init") {
        std::printf("LOG: -init command detected.\n");
        if(argc == 5) {
            std::printf("LOG: Argument count is 5.\n");
            char* end_ptr = nullptr;
            double price_value = std::strtod(argv[4], &end_ptr);

            if(argv[1] != end_ptr) {
                std::printf("LOG: String to double is successful.\n");
                Booknitializer(argv[2], argv[3], price_value);
                std::printf("LOG: Passed values to BookInitializer method.\n");
            } else {
                std::printf("LOG: Error, Unable to parse string to double.\n");
            }
        }
    }

    return 0;
}