#pragma once

#include "MenuItem.h"
#include "quitException.h"

/// <summary>
/// Menu item for the quit command.
/// </summary>
class QuitMenuItem : public MenuItem
{
public:
    /// <summary>
    /// Initializes a new instance of the QuitMenuItem class.
    /// </summary>
    /// <exception cref="quitException">Thrown when a quit error condition occurs.</exception>
    /// <param name="option">The option.</param>
	QuitMenuItem(int option)
		: MenuItem(option, "Quit", []() { throw quitException(); })
	{
	}
};

