#include <cstdio>
#include <fstream>

int main() {
  // Open in append mode (std::ios::app)
  std::ofstream output_file("file.txt", std::ios::app);
  if (!output_file.is_open()) {
    std::printf("Error: Could not open file.txt for appending\n");
    return 1;
  }

  // Appends to the bottom without erasing existing lines
  output_file << "Appended entry at the bottom\n";
  output_file.close();

  return 0;
}