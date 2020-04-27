#include "History.h"

History::History()
{
    // -1 means there is no current command to be undone.
    this->currentCommandIndex = -1;
    this->commands = new vector<UndoCommandBase*>();
}

bool History::Undo()
{
    if (this->currentCommandIndex == -1) {
        return false;
    }

    (*this->commands)[this->currentCommandIndex]->Execute();

    // delete all the commands in the vector
    // including this index and after.
    this->currentCommandIndex--;

    // delete the commands
    // TODO
    
    return true;
}

void History::Redo()
{
    // TODO
}

void History::AddUndoCommand(UndoCommandBase* command)
{
    // TODO test not nullptr

    this->commands->push_back(command);
    this->currentCommandIndex = this->commands->size() - 1;
}

History::~History()
{
    delete this->commands;
}
