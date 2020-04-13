#pragma once
#include "UndoCommandBase.h"
#include <vector>

using namespace std;
class History
{
private:
    /// <summary>
    /// The list of command in the order of their execution.
    /// Index 0 means the first command, index length - 1 means the last command.
    /// </summary>
    vector<UndoCommandBase*>* commands;

    /// <summary>
    /// DO NOT USE THIS, ONLY FOR DEMO PURPOSES
    /// IN THE CLASS DIAGRAM.
    /// DELETE IT!
    /// </summary>
    UndoCommandBase* commandsArray[10];

    /// <summary>
    /// The index of the current command to be undone.
    /// </summary>
    int currentCommandIndex;
public:
    /// <summary>
    /// Initializes a new instance of the History class.
    /// </summary>
    History();

    /// <summary>
    /// Undoes the current executed command.
    /// </summary>
    /// <returns>
    /// True if the undo was performed, false if not.
    /// </returns>
    bool Undo();

    /// <summary>
    /// Redoes the last undone command.
    /// </summary>
    void Redo();

    /// <summary>
    /// Adds an undo command.
    /// </summary>
    /// <param name="command">[in,out] If non-null, the command.</param>
    void AddUndoCommand(UndoCommandBase* command);

    /// <summary>
    /// Finalizes an instance of the History class.
    /// </summary>
    ~History();
};

