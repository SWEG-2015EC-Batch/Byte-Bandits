// This program takes a string find the frequency of vowel, consonant, digit and special character
// by Robeil

#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int vowels = 0, cons = 0, digits = 0, spl = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            cons++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else
        {
            spl++;
        }
    }

    std::cout << "Vowels: " << vowels << std::endl;
    std::cout << "Consonants: " << cons << std::endl;
    std::cout << "Digits: " << digits << std::endl;
    std::cout << "Special Characters: " << spl << std::endl;

    return 0;
}