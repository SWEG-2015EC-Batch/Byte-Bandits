// This program checks if a string is a palindrome or not
// by Robeil

#include <iostream>
#include <string>

int main()
{

    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }

    for (int i = 0; i < word.length() / 2; i++)
    {
        if (word[i] != word[word.length() - i - 1])
        {
            std::cout << word << " is not a palindrome" << std::endl;
            return 0;
        }
    }
    std::cout << word << " is a palindrome" << std::endl;
    return 0;
}