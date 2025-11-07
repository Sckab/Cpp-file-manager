#include <filesystem>
#include <string>
#include <vector>

#include "../lib/list_directories.h"

std::vector<std::string> listDirectories(const std::string &path) {
    std::vector<std::string> directories;

    for (const auto &entry : std::filesystem::directory_iterator(path)) {
        directories.push_back(entry.path().string());
    }

    return directories;
}
