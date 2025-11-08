#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <string>
#include <vector>

#include "../lib/tui.h"

void printTui(const std::vector<std::string> &items) {
    using namespace ftxui;

    std::vector<Element> elements;

    for (auto item : items) {
        int lastSlash = item.rfind('/');

        item = item.erase(0, lastSlash + 1);

        elements.push_back(text(item) | border);
    }

    Element document = hbox(elements);

    auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));

    Render(screen, document);
    screen.Print();
}
