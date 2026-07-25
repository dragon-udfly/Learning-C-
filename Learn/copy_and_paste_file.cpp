#include <cstdio>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

int main() {
  std::error_code ec;
  fs::path source_file("source.txt");
  fs::path destination_file("copy_of_source.txt");

  fs::copy_file(source_file, destination_file, 
               fs::copy_options::overwrite_existing, ec);

  if (!ec) {
    std::printf("File copied successfully.\n");
  } else {
    std::printf("Copy failed: %s\n", ec.message().c_str());
  }

  return 0;
}