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

        // example of function pointer declaration
        // void (fn*)();
    }

    /// <summary>
    /// Gets the item option.
    /// </summary>
    /// <returns>
    /// The item option.
    /// </returns>
    int getOption() const;


    /// <summary>
    /// Shows the menu item in the console.
    /// </summary>
    virtual void show() const;

    /// <summary>
    /// Executes the action bound to this menu item.
    /// </summary>
    void execute();
};

