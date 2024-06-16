#include <iostream>
#include <string>

using namespace std;

int main() {

    string firstName, lastName, streetAddress, city, zipCode;


    cout << "Enter first name: ";
    getline(cin, firstName);

    cout << "Enter last name: ";
    getline(cin, lastName);

    cout << "Enter street address: ";
    getline(cin, streetAddress);

    cout << "Enter city: ";
    getline(cin, city);

    cout << "Enter zip code: ";
    getline(cin, zipCode);


    cout << "\n\nFictional Person Information:\n";
    cout << "-----------------------------\n";
    cout << "First Name:     " << firstName << "\n";
    cout << "Last Name:      " << lastName << "\n";
    cout << "Street Address: " << streetAddress << "\n";
    cout << "City:           " << city << "\n";
    cout << "Zip Code:       " << zipCode << "\n";

    return 0;
}
