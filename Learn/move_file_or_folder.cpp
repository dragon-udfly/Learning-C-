#include <cstdio>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

int main() {
  std::error_code ec;
  fs::path old_location("folder1/data.txt");
  fs::path new_location("folder2/data.txt");

  fs::rename(old_location, new_location, ec);

  if (!ec) {
    std::printf("Item moved successfully.\n");
  } else {
    std::printf("Move failed: %s\n", ec.message().c_str());
  }

  return 0;
}