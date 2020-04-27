#pragma once
#include <string>
#include <functional>

using namespace std;
class MenuItem
{
private:
    string displayText;
    int option;
    function<void()> action;

public:
    MenuItem(int option, string displayText, function<void()> action)
    {
        this->option = option;
        this->displayText = displayText;
        this->action = action;
    }

    /// <summary>
    /// Gets the item option.
    /// </summary>
    /// <returns>
    /// The item option.
    /// </returns>
    int getOption();


    /// <summary>
    /// Shows the menu item in the console.
    /// </summary>
    virtual void show();

    /// <summary>
    /// Executes the action bound to this menu item.
    /// </summary>
    void execute();
};

