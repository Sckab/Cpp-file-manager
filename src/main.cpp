#include <iostream>
#include <string>
#include <vector>

#include "../lib/list_directories.h"
#include "../lib/tui/main.h"

int main(int argc, char *argv[]) {
    std::string path;

    if (argv[1] != NULL) {
        path = argv[1];
    } else {
        path = ".";
    }

    std::vector<std::string> listOfTheDirectory = listDirectories(path);

    printTui(path);

    return 0;
}
