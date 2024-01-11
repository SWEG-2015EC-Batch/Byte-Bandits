/* This program finds the frequency of characters within string and display character with
largest and smallest frequency respectively. */
// by Robeil 

#include <iostream>
#include <string>

int main()
{

    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    int minFreq = str.length();
    char minChar;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }

        if (freq[i] > 0 && freq[i] < minFreq)
        {
            minFreq = freq[i];
            minChar = (char)i;
        }
    }

    std::cout << "Max Freq Char: " << maxChar << "\n";
    std::cout << "Min Freq Char: " << minChar << "\n";

    return 0;
}