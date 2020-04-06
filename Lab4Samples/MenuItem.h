#pragma once
#include <string>

using namespace std;
class MenuItem
{
private:
    string displayText;
    int option;

public:

    /// <summary>
    /// Gets the item option.
    /// </summary>
    /// <returns>
    /// The item option.
    /// </returns>
    int getOption();
};

