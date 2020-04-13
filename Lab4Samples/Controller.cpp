#include "Controller.h"
#include "Drug.h"
#include "AddDrugUndoCommand.h"

void Controller::AddDrug(string name, double concentration, int quantity)
{
    // TODO
    auto drug = Drug(name, concentration, quantity, 0);

    // TODO check that the same drug does not already exist

    this->repo.Add(drug);
    this->history.AddUndoCommand(new AddDrugUndoCommand(this->repo, drug));
}

bool Controller::Undo()
{
    return this->history.Undo();

    //
    auto sizeOfHistory = sizeof(History);
}
