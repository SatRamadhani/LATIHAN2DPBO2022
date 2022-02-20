#include "header.hh"

/* Constructor. */

// Empty constructor.
Product::Product()
{

}

// Constructor with product's data (will it be used?).
Product::Product(int price, string idProduct)
{
    this->price = price;
    this->idProduct = idProduct;
}

/* Setter and Getter. */

// Set price attribute.
void Product::setPrice(int price)
{
    this->price = price;
}

// Set product's ID attribute.
void Product::setIDProduct(string idProduct)
{
    this->idProduct = idProduct;
}

// Get price attribute.
int Product::getPrice()
{
    return price;
}

// Get product's ID attribute.
string Product::getIDProduct()
{
    return idProduct;
}

/* Destructor. */

Product::~Product()
{
    
}