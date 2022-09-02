// Fransiskus Agapa

// Class Snack Implementation
#include "Snack.h"
#include "sstream"

using std::stringstream;

// default constructor
Snack::Snack()
{
    _name = "NoName";
    _price = 0.0;
    _quantity = 0;
}

// constructor
Snack::Snack(const string &name, const double &price, const int& quantity)
{
    _name = name;
    _price = price;
    _quantity = quantity;
}

string Snack::GetName() const
{
    return _name;
}

double Snack::GetPrice() const
{
    return _price;
}


int Snack::GetQuantity() const
{
    return _quantity;
}

string Snack::toJson() const
{
    stringstream asJson;
    asJson << "{\"Snack\":\"" << _name << "\", \"Price\":$" << _price << ", \"Quantity\":" << _quantity << "}";
    return asJson.str();               // return string stream as string
}


