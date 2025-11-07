#include <iostream>
#include <string>
#include <vector>

#include "../lib/list_directories.h"

int main(int argc, char *argv[]) {
    std::string path;

    if (argv[1] != NULL) {
        path = argv[1];
    } else {
        path = ".";
    }

    std::vector<std::string> listOfTheDirectory = listDirectories(path);

    for (std::string &dir : listOfTheDirectory) {
        int lastSlash = dir.rfind('/');

        dir = dir.erase(0, lastSlash + 1);

        std::cout << dir << std::endl;
    }

    return 0;
}
