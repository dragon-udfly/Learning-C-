#include <cstdio>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

int main() {
  std::error_code ec;
  fs::path file_to_delete("unused_file.txt");

  if (fs::remove(file_to_delete, ec)) {
    std::printf("File deleted successfully.\n");
  } else if (!ec) {
    std::printf("File did not exist.\n");
  } else {
    std::printf("Deletion failed: %s\n", ec.message().c_str());
  }

  return 0;
}