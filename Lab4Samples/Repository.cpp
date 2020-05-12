#include "Repository.h"

bool Repository::Remove(string name, double concentration)
{
    // TODO
    return false;
}

void Repository::Add(const Drug& drug)
{
    this->data.push_back(Drug(drug));
}
