// This program inputs a line of text, and tokenizes it. Use space characters as delimiters.
// by Robeill

#include <iostream>

int main()
{

    const int maxTokens = 10;
    std::string tokens[maxTokens];
    int numTokens = 0;

    std::string line;
    std::cout << "Enter a line of text: ";
    getline(std::cin , line);

    int i = 0;
    while (i < line.length())
    {

        while (i < line.length() && line[i] != ' ')
        {
            std::cout << line[i];
            i++;
        }

        std::cout << "\n";
        i++;

        numTokens++;
    }

    return 0;
}