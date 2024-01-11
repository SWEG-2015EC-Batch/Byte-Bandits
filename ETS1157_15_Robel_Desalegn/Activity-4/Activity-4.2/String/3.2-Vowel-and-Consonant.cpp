// This program counts the number of consonants and vowels in a string
// by Robeil

#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);

    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z'))
        {
            consonants++;
        }
    }

    std::cout << "Vowels: " << vowels << "\n";
    std::cout << "Consonants: " << consonants << "\n";

    return 0;
}