#include "MenuItem.h"
#include <iostream>

int MenuItem::getOption()
{
    return this->option;
}

void MenuItem::show()
{
    std::cout << this->option << ". " << this->displayText << "\n";
}

void MenuItem::execute()
{
    this->action();
}
