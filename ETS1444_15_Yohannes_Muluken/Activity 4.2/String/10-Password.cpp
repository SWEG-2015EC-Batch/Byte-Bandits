// Check password
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char pass[] = {"aq12ws"};
    char attempt[8];
    bool correctPassword = true;

    cout << " Enter the password: ";
    cin.getline(attempt, 7);

    for (size_t i = 0; i < 6; i++)
    {
        if (attempt[i] != pass[i])
        {
            correctPassword = false;
        }
    }

    cout << boolalpha;
    cout << "Correct password: " << correctPassword;
}