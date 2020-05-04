#pragma once
#include <vector>
#include "MenuItem.h"
#include <functional>

/// <summary>
/// Manages the display of the application menu and the input of user options.
/// </summary>
class Menu : MenuItem
{
private:
    std::vector<MenuItem> menuItems;

public:
    /// <summary>
    /// Initializes a new instance of the Menu class.
    /// </summary>
    Menu()
        : MenuItem(0, "Menu", nullptr)
    {
    }

    /// <summary>
    /// Initializes a new instance of the Menu class.
    /// </summary>
    /// <param name="option">The option.</param>
    /// <param name="displayText">The display text.</param>
    Menu(int option, string displayText)
        : MenuItem(option, displayText, nullptr)
    {
    }

    /// <summary>
    /// Shows this menu.
    /// </summary>
    virtual void show() const override;

    /// <summary>
    /// Adds a new item.
    /// </summary>
    /// <param name="item">The item to add.</param>
    /// <returns>
    /// A Menu.
    /// </returns>
    Menu& add(const MenuItem& item);

    /// <summary>
    /// Adds a new item based on the display and action.
    /// </summary>
    /// <param name="displayText">The display text.</param>
    /// <param name="action">[in,out] If non-null, the action.</param>
    /// <returns>
    /// A reference to a Menu.
    /// </returns>
    Menu& add(string displayText, std::function<void()> action);

    /// <summary>
    /// Searches for the first item.
    /// </summary>
    /// <param name="option">The option.</param>
    /// <returns>
    /// The found item.
    /// </returns>
    MenuItem& findItem(int option);
};

