//============================================================================
// Name        : CSC450-CT1.cpp
// Author      : Chris Letizio
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>

std :: string firstName, lastName, streetAddress, city, zipCode;

int main(){

    // Ask for user information.
    std::cout << "Enter first name: ";
    std::getline (std::cin, firstName);

    std::cout << "Enter last name: ";
    std::getline (std::cin, lastName);

    std::cout << "Enter street address: ";
    std::getline (std::cin, streetAddress);

    std::cout << "Enter city: ";
    std::getline (std::cin, city);

    std::cout << "Enter zip code: ";
    std::getline (std::cin, zipCode);

    // Print the information for a fictional person.
    std::cout << "Name: " << firstName << " " << lastName << std::endl;
    std::cout << "Street address: " << streetAddress << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Zip code: " << zipCode << std::endl;

    return 0;

}