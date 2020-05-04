#include "Controller.h"
#include "Drug.h"
#include "AddDrugUndoCommand.h"
#include <iostream>

void Controller::CreateMenu()
{
    this->menu.add("Add drug", [this]() { this->AddDrug(); });
    this->menu.add("Undo", [this]() { this->Undo(); });
    this->menu.add("Quit", []() { throw string("quit"); });
}

void Controller::AddDrug(string name, double concentration, int quantity)
{
    // TODO
    auto drug = Drug(name, concentration, quantity, 0);

    // TODO check that the same drug does not already exist

    this->repo.Add(drug);
    this->history.AddUndoCommand(new AddDrugUndoCommand(this->repo, drug));
}

void Controller::AddDrug()
{
    string name;
    cin >> name;

    double concentration;
    cin >> concentration;

    int quantity;
    cin >> quantity;

    this->AddDrug(name, concentration, quantity);
}

bool Controller::Undo()
{
    return this->history.Undo();

    //
    auto sizeOfHistory = sizeof(History);
}

void Controller::Run()
{
    this->CreateMenu();

    try {
        while (true) {
            this->menu.show();

            int option;
            cin >> option;

            auto menuItem = this->menu.findItem(option);
            menuItem.execute();
        }
    }
    catch (std::string quitString) {
        if (quitString != "quit") {
            throw quitString;
        }

        // quit the program gracefully
    }
}
