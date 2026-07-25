#include <cstdio>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

int main() {
  std::error_code ec;
  fs::path source_dir("original_folder");
  fs::path destination_dir("backup_folder");

  fs::copy(source_dir, destination_dir, 
          fs::copy_options::recursive | fs::copy_options::overwrite_existing, ec);

  if (!ec) {
    std::printf("Folder copied successfully.\n");
  } else {
    std::printf("Folder copy failed: %s\n", ec.message().c_str());
  }

  return 0;
}