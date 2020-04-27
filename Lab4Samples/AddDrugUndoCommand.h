#pragma once
#include "UndoCommandBase.h"
#include "Drug.h"
#include "Repository.h"

class AddDrugUndoCommand : public UndoCommandBase
{
private:
    Repository& repo;
    string name;
    double concentration;

public:
    AddDrugUndoCommand(Repository& repo, const Drug& drug)
        : repo(repo)
    {
        this->repo = repo;

        this->name = drug.getName();
        this->concentration = drug.getConcentration();
    }

    AddDrugUndoCommand(Repository& repo, string name, double concentration)
        : repo(repo)
    {
        this->name = name;
        this->concentration = concentration;
    }

    // Inherited via UndoCommandBase
    virtual void Execute() override;
};

