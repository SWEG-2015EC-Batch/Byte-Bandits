// Counting no of vowels and consonants
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char text[21];
    int vowelCount = 0, constCount = 0;
    cout << "enter the text(up to 20 charactors): ";
    cin.getline(text, 20);

    for (size_t i = 0; i < strlen(text); i++)
    {
        switch (text[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowelCount += 1;
            break;

        default:
            constCount += 1;
            break;
        }
    }

    cout << "no of vowels: " << vowelCount << endl;
    cout << "no of consonants: " << constCount;
}