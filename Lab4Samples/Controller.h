#pragma once
#include "History.h"
#include "Repository.h"
#include "Menu.h"

using namespace std;

class Controller
{
private:
    History history;
    Repository repo;
    Menu menu;

    void createMenu();

public:
    /// <summary>
    /// Adds a drug.
    /// </summary>
    /// <param name="name">The name.</param>
    /// <param name="concentration">The concentration.</param>
    /// <param name="quantity">The quantity.</param>
    void AddDrug(string name, double concentration, int quantity);

    /// <summary>
    /// Adds a drug reading the valued from the console.
    /// </summary>
    void AddDrug();

    /// <summary>
    /// Undoes TODO.
    /// </summary>
    /// <returns>
    /// True if it succeeds, false if it fails.
    /// </returns>
    bool Undo();

    /// <summary>
    /// Dispalys the menu and executes the commands.
    /// </summary>
    void Run();
};

