#include "header.hh"

/* Constructor. */

// Empty constructor.
Hardware::Hardware()
{

}

// Constructor with hardware's data (will it be used?).
Hardware::Hardware(string brand, string model)
{
    this->brand = brand;
    this->model = model;
}

/* Setter and Getter. */

// Set brand attribute.
void Hardware::setBrand(string brand)
{
    this->brand = brand;
}

// Set model attribute.
void Hardware::setModel(string model)
{
    this->model = model;
}

// Get brand attribute.
string Hardware::getBrand()
{
    return brand;
}

// Get model attribute.
string Hardware::getModel()
{
    return model;
}

/* Destructor. */

Hardware::~Hardware()
{
    
}