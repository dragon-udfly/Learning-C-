#include <cstdio>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

int main() {
  std::error_code ec;
  fs::path folder_to_delete("target_directory");

  std::uintmax_t deleted_items = fs::remove_all(folder_to_delete, ec);

  if (!ec) {
    std::printf("Successfully removed folder and %llu items inside.\n", 
                static_cast<unsigned long long>(deleted_items));
  } else {
    std::printf("Recursive deletion failed: %s\n", ec.message().c_str());
  }

  return 0;
}