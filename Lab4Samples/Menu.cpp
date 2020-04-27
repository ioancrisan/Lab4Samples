#include "Menu.h"
#include <functional>
#include <iostream>

MenuItem notFoundMenuItem(-1, "Not found", []() { std::cout << "Menu item not found."; });

void Menu::show()
{
    // TODO display the menu...
    for (auto i = 0; i < this->menuItems.size(); i++) {
        this->menuItems[i].show();
    }
}

Menu& Menu::add(const MenuItem& item)
{
    this->menuItems.push_back(item);
    return *this;
}

Menu& Menu::add(string displayText, std::function<void()> action)
{
    return this->add(MenuItem(this->menuItems.size() + 1, displayText, action));
}

MenuItem& Menu::findItem(int option)
{
    // TODO: insert return statement here
    for (auto i = 0; i < this->menuItems.size(); i++) {
        if (this->menuItems[i].getOption() == option) {
            return this->menuItems[i];
        }
    }

    return notFoundMenuItem;
}
