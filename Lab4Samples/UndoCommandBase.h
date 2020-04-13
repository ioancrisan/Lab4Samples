#pragma once

/// <summary>
/// Base class for undo commands.
/// </summary>
class UndoCommandBase
{
public:
    /// <summary>
    /// Executes the undo operation.
    /// This abstract method MUST be overridden in the derived class
    /// to do some meaningful thing.
    /// </summary>
    virtual void Execute() = 0;
};

