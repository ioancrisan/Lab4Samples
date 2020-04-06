#include "Drug.h"

Drug::Drug(std::string name, double concentration, int quantity, double price)
{
    this->name = name;
    this->concentration = concentration;
    this->quantity = quantity;
    this->price = price;
}

std::string Drug::getName()
{
    return this->name;
}

double Drug::getConcentration()
{
    return this->concentration;
}

int Drug::getQuantity()
{
    return this->quantity;
}

double Drug::getPrice()
{
    return this->price;
}
