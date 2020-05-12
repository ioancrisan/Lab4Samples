#pragma once

#include <string>
#include <vector>
#include "Drug.h"

using namespace std;

class Repository
{
private:
    vector<Drug> data;

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

    /// <summary>
    /// Adds a drug to the repository.
    /// </summary>
    /// <param name="drug">The drug to add.</param>
    void Add(const Drug& drug);
};

