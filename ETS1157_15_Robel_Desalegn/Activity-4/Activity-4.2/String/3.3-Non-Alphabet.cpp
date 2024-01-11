// This program removes a non-alpahbet from a string and prints out the string.
// by Robeil

#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);

    std::string result;

    for (char c : str)
    {
        if (isalpha(c))
        {
            result += c;
        }
    }

    std::cout << "String after removing non-alphabets: " << result;

    return 0;
}