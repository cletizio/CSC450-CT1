//============================================================================
// Name        : CSC450-CT1.cpp
// Author      : Chris Letizio
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : First critical thinking assignment in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>

using namespace std;

string firstName, lastName, streetAddress, city, zipCode;

int main(){

    //Ask for user information.
    cout << "Enter first name: ";
    getline (cin, firstName);

    cout << "Enter last name: ";
    getline (cin, lastName);

    cout << "Enter street address: ";
    getline (cin, streetAddress);

    cout << "Enter city: ";
    getline (cin, city);

    cout << "Enter zip code: ";
    getline (cin, zipCode);

    // Print the information for a fictional person.
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Street address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip code: " << zipCode << endl;

    return 0;

}
