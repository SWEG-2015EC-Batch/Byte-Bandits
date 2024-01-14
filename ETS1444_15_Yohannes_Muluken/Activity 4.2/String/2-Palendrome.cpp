// Check for palendrome
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    bool isPalendrome = true;
    cout << "Enter a text: ";
    getline(cin, text);

    for (int i = 0; i < (text.length() / 2); i++)
    {
        if (text[i] != text[(text.length() - i - 1)])
        {
            isPalendrome = false;
        }
    }

    cout << boolalpha;
    cout << text << ", is palendrome " << isPalendrome << endl;
}
