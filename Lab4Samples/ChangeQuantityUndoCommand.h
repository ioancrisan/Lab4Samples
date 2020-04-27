#pragma once
#include "UndoCommandBase.h"
#include "Drug.h"

class ChangeQuantityUndoCommand : public UndoCommandBase
{
private:
    Drug& drug;
    int quantity;
public:

    ChangeQuantityUndoCommand(Drug& drug, int quantity)
        : drug(drug)
    {
        this->quantity = quantity;
    }

    // Inherited via UndoCommandBase
    virtual void Execute() override;
};

