#include <iostream>

#include "Controller.h"
#include "Drug.h"
#include "AddDrugUndoCommand.h"
#include "QuitMenuItem.h"

void Controller::CreateMenu()
{
    this->menu.add("Add drug", [this]() { this->AddDrug(); });
    this->menu.add("Undo", [this]() { this->Undo(); });
    this->menu.add(QuitMenuItem(10));
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
    catch (quitException qex) {
        // quit the program gracefully
    }
    catch (exception ex) {
        cout << "Exception occurred: " << ex.what() << endl;
    }
}
