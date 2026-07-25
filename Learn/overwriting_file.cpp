#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

int main() {
  // 1. READ: Read existing contents into a vector
  std::ifstream input_file("file.txt");
  if (!input_file.is_open()) {
    std::printf("Error: Could not open file.txt for reading\n");
    return 1;
  }

  std::vector<std::string> lines;
  std::string current_line = "";
  while (std::getline(input_file, current_line)) {
    lines.push_back(current_line);
  }
  input_file.close();

  // 2. MODIFY / PROCESS DATA
  lines.push_back("New line added programmatically!");

  // 3. WRITE: Overwrite file with updated content
  std::ofstream output_file("file.txt");
  if (!output_file.is_open()) {
    std::printf("Error: Could not open file.txt for writing\n");
    return 1;
  }

  for (const std::string& line : lines) {
    output_file << line << "\n";
  }
  output_file.close();

  std::printf("File read and updated successfully.\n");
  return 0;
}