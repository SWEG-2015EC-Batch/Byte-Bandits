/* This program takes the first,middle and last name of a user
and prints out the first character of the user's intital's */
// by Robeil

#include <iostream>
#include <string>

int main()
{

    std::string firstName, middleName, lastName;

    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your middle name: ";
    std::cin >> middleName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    std::cout << "Your initials are: " << firstName[0] << middleName[0] << lastName[0] << std::endl;

    return 0;
}