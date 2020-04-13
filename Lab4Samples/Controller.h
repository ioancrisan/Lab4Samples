#pragma once
#include "History.h"
#include "Repository.h"

using namespace std;

class Controller
{
private:
    History history;
    Repository repo;

public:
    /// <summary>
    /// Adds a drug.
    /// </summary>
    /// <param name="name">The name.</param>
    /// <param name="concentration">The concentration.</param>
    /// <param name="quantity">The quantity.</param>
    void AddDrug(string name, double concentration, int quantity);

    /// <summary>
    /// Undoes TODO.
    /// </summary>
    /// <returns>
    /// True if it succeeds, false if it fails.
    /// </returns>
    bool Undo();
};

