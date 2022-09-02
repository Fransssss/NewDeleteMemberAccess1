// Fransiskus Agapa

#ifndef NEWDELETEMEMBERACCESS1_SNACK_H
#define NEWDELETEMEMBERACCESS1_SNACK_H

// Class Snack Definition
#include "string"

using std::string;

class Snack
{
private:
    string _name;
    double _price;
    int _quantity;
public:
    Snack();     // default constructor
    Snack(const string& name, const double& price, const int& quantity);
    string GetName() const;
    double GetPrice() const;
    int GetQuantity() const;
    string toJson() const;
};


#endif //NEWDELETEMEMBERACCESS1_SNACK_H
