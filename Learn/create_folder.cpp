#include <cstdio>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

int main() {
  std::error_code ec;
  fs::path dir_path("my_project/output_data");

  if (fs::create_directories(dir_path, ec)) {
    std::printf("Directory created successfully.\n");
  } else if (!ec) {
    std::printf("Directory already exists.\n");
  } else {
    std::printf("Failed to create directory: %s\n", ec.message().c_str());
  }

  return 0;
}