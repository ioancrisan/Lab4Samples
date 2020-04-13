#pragma once
#include <string>
#include "Drug.h"

using namespace std;

class Repository
{
public:
    /// <summary>
    /// Removes the drug with the provided name and concentration.
    /// </summary>
    /// <param name="name">The name.</param>
    /// <param name="concentration">The concentration.</param>
    /// <returns>
    /// True if the drug was removed, false if not.
    /// </returns>
    bool Remove(string name, double concentration);

    void Add(const Drug& drug);
};

