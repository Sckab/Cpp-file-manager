#include <filesystem>
#include <string>
#include <vector>

#include "../lib/list_directories.h"

std::vector<std::string> listDirectories(const std::string &path) {
    std::vector<std::string> directories;

    for (const auto &entry : std::filesystem::directory_iterator(path)) {
        std::string name = entry.path().filename().string();

        if (name[0] == '.') {
            continue;
        }

        directories.push_back(entry.path().string());
    }

    return directories;
}
