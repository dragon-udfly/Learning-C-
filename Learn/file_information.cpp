#include <chrono>
#include <cstdio>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

int main() {
  const fs::path file_path("file.txt");
  std::error_code ec;

  // 1. Check if the file exists
  if (!fs::exists(file_path, ec)) {
    std::printf("Error: File does not exist or path is invalid.\n");
    return 1;
  }

  // 2. Get file size in bytes
  std::uintmax_t file_size = fs::file_size(file_path, ec);
  if (!ec) {
    std::printf("File Size: %llu bytes\n", static_cast<unsigned long long>(file_size));
  }

  // 3. Inspect path properties
  std::printf("Absolute Path: %s\n", fs::absolute(file_path).string().c_str());
  std::printf("Extension: %s\n", file_path.extension().string().c_str());
  std::printf("Is Regular File: %s\n", fs::is_regular_file(file_path) ? "Yes" : "No");
  std::printf("Is Directory: %s\n", fs::is_directory(file_path) ? "Yes" : "No");

  // 4. Get last modification time
  auto last_write_time = fs::last_write_time(file_path, ec);
  if (!ec) {
    // Convert filesystem time to standard system clock for display
    auto system_time = std::chrono::time_point_cast<std::chrono::system_clock::duration>(
        last_write_time - fs::file_time_type::clock::now() + std::chrono::system_clock::now());
    std::time_t ctime = std::chrono::system_clock::to_time_t(system_time);
    
    std::printf("Last Modified: %s", std::ctime(&ctime));
  }

  return 0;
}