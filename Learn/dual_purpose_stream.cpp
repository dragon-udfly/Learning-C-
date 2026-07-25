#include <cstdio>
#include <fstream>
#include <string>

int main() {
  // Open file for BOTH input and output operations
  std::fstream file("file.txt", std::ios::in | std::ios::out);

  if (!file.is_open()) {
    std::printf("Error opening file.txt\n");
    return 1;
  }

  // Read first line
  std::string first_line = "";
  if (std::getline(file, first_line)) {
    std::printf("Original first line: %s\n", first_line.c_str());
  }

  // Reset internal read/write position pointer to the end of file for writing
  file.clear(); // Clear EOF status flags
  file.seekp(0, std::ios::end);

  // Write new content
  file << "Appended via dual std::fstream\n";
  file.close();

  return 0;
}