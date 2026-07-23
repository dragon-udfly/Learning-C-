#include <cstdio>
#include <fstream>
#include <string>

int main() {
  std::ifstream input_file("file.txt");

  if (!input_file.is_open()) {
    std::printf("Error: Could not open file.txt\n");
    return 1;
  }

  std::string single_word = "";

  // Reads chunk by chunk, skipping whitespace automatically
  while (input_file >> single_word) {
    std::printf("Word: %s\n", single_word.c_str());
  }

  input_file.close();
  return 0;
}