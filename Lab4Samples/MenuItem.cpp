#include "MenuItem.h"
#include <iostream>

int MenuItem::getOption() const
{
    return this->option;
}

void MenuItem::show() const
{
    std::cout << this->option << ". " << this->displayText << "\n";
}

void MenuItem::execute()
{
    this->action();
}
