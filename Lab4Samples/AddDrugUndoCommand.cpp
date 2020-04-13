#include "AddDrugUndoCommand.h"

void AddDrugUndoCommand::Execute()
{
    this->repo.Remove(this->name, this->concentration);
}
