/* This program takes input of a line of text from the user and 
prints it all out in uppercase and lowercase letters*/
// by Robeil

#include <iostream>
#include <cctype>

int main()
{

    std::string str;
    std::cout << "Enter a text: ";
    getline(std::cin, str);

    std::cout << "All Uppercase: ";
    for (int i = 0; i < str.length(); ++i)
    {
        str[i] = toupper(str[i]);
        std::cout << str[i];
    }
    std::cout << "\nAll Lowercase: ";
    for (int i = 0; i < str.length(); ++i)
    {
        str[i] = tolower(str[i]);
        std::cout << str[i];
    }

}