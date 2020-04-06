#pragma once
#include <string>

/// <summary>
/// Class storing information about a drug.
/// </summary>
class Drug
{
private:
    std::string name;
    double concentration;
    int quantity;
    double price;

public:

    /// <summary>
    /// Initializes a new instance of the Drug class.
    /// </summary>
    /// <param name="name">         The name.</param>
    /// <param name="concentration">The concentration.</param>
    /// <param name="quantity">     The quantity.</param>
    /// <param name="price">        The price.</param>
    Drug(std::string name, double concentration, int quantity, double price);

    /// <summary>
    /// Gets the drug name.
    /// </summary>
    /// <returns>
    /// The name.
    /// </returns>
    std::string getName();

    /// <summary>
    /// Gets the concentration.
    /// </summary>
    /// <returns>
    /// The concentration.
    /// </returns>
    double getConcentration();

    /// <summary>
    /// Gets the quantity.
    /// </summary>
    /// <returns>
    /// The quantity.
    /// </returns>
    int getQuantity();

    /// <summary>
    /// Gets the price.
    /// </summary>
    /// <returns>
    /// The price.
    /// </returns>
    double getPrice();

    /// <summary>
    /// Convert this object into a string representation.
    /// </summary>
    /// <returns>
    /// A std::string that represents this object.
    /// </returns>
    std::string toString();
};

