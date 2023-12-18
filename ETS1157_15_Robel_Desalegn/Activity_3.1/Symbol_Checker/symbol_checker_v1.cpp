//This program checks if a character enterd by a user is an alphabet, digit, or special character
//by Robeill
#include <iostream>

int main()
{
    char ch;

    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        std::cout << "Upper case character" << std::endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        std::cout << "Lower case character" << std::endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        std::cout << "Digit" << std::endl;
    }
    else
    {
        std::cout << "Special character" << std::endl;
    }

    return 0;
}