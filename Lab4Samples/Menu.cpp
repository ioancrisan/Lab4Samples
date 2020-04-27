#include "Menu.h"
#include <functional>

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
