#include <filesystem>
#include <string>
#include <vector>

#include "../lib/list_directories.h"

namespace fs = std::filesystem;

std::vector<std::string> listDirectories(const std::string &path) {
    std::vector<std::string> directories;

    for (const auto &entry : fs::directory_iterator(path)) {
        directories.push_back(entry.path().string());
    }

    return directories;
}
