#include <cstdio>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

int main() {
  std::error_code ec;
  fs::path old_name("old_filename.txt");
  fs::path new_name("new_filename.txt");

  fs::rename(old_name, new_name, ec);

  if (!ec) {
    std::printf("Renamed successfully.\n");
  } else {
    std::printf("Rename failed: %s\n", ec.message().c_str());
  }

  return 0;
}