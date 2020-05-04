#pragma once

#include <exception>

using namespace std;

/// <summary>
/// Exception for signalling the application to quit.
/// </summary>
class quitException : public exception
{
public:
    /// <summary>
    /// Initializes a new instance of the quitException class.
    /// </summary>
    /// <param name="message">The message.</param>
	quitException(const char* const message = nullptr)
		: exception(message == nullptr ? "Quit the application" : message)
	{
	}
};

