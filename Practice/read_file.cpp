#include <cstdio>
#include <fstream>
#include <string>

int main() {
  // 1. Open the file using std::ifstream
  std::ifstream input_file("file.txt");

  // 2. ALWAYS check if the file opened successfully
  if (!input_file.is_open()) {
    std::printf("Error: Could not open file.txt\n");
    return 1;
  }

  std::string current_line = "";

  // 3. Read line by line until reaching End-Of-File (EOF)
  while (std::getline(input_file, current_line)) {
    std::printf("%s\n", current_line.c_str());
  }

  // 4. Close the file stream explicitly
  input_file.close();

  return 0;
}