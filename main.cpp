// Author: Fransiskus Agapa
// Practices make improvement - Have Fun !!!
// :)

// ===============================
// the idea of the project is to use 'new' for pointer, use '->' to access class member, and 'delete' to delete the pointer
// -------------------------------
// user input name of snack, its price , and quantity that are stored in a store
// ===============================

#include <iostream>
#include "Snack.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string choice;                                         // user choice
    bool thereIsData;                                      // indicate user has input data
    Snack* snack;                                          // Pointer to new allocated memory

    cout << "\n== Snack Information ==" << endl;
    cout << "1. Input Data" << endl;
    cout << "2. Output Data" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "e" and choice != "E")
    {
        if(choice == "1")
        {

            cout << "\n= Input Snack Data = " << endl;
            string snackName;
            double snackPrice;
            int snackQuantity;

            // snack name
            cout << "Input name of snack: ";
            cin >> snackName;
            cout << endl;

            // snack price
            cout << "Input the price of snack:$ ";
            cin >> snackPrice;
            cout << endl;

            // snack quantity
            cout << "Input the quantity of snack: ";
            cin >> snackQuantity;
            cout << endl;

            snack = new Snack (snackName,snackPrice,snackQuantity);
            thereIsData = true;
            cout << "[ Snack Data Inputted ]" << endl;
            cout << endl << "=======================" << endl;
        }
        else if(choice == "2")
        {
            if(thereIsData)
            {
                cout << "\n= Display Snack Data = " << endl;
                cout << "\nSnack: " << snack->GetName() << endl;
                cout << "Price: $" << snack->GetPrice() << endl;
                cout << "Quantity: " << snack->GetQuantity() << endl << endl;
                cout << snack->toJson() << endl;
                cout << endl << "======================" << endl;
            }
            else
            {
                snack = new Snack;                                                                                      // Create new allocated memory with default value
                cout << "\n= Display Snack Data = " << endl;
                cout << "\nSnack: " << snack->GetName() << endl;
                cout << "Price: $" << snack->GetPrice() << endl;
                cout << "Quantity: " << snack->GetQuantity() << endl;
                cout << "\n=======================" << endl;
            }
        }
        else
        {
            cout << "\n[ Invalid choice ] " << endl;
        }

        cout << "\n== Snack Information ==" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Output Data" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    delete snack;                                                                                                       // Free / deallocate memory

    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }
    return 0;
}
