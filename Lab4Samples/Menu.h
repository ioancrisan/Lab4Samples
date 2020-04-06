#pragma once
#include <vector>
#include "MenuItem.h"

/// <summary>
/// Manages the display of the application menu and the input of user options.
/// </summary>
class Menu
{
private:
    std::vector<MenuItem> menuItems;

public:

    /// <summary>
    /// Shows the menu in the console.
    /// </summary>
    void show();
};

