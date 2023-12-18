// charactor checker
#include <iostream>
using namespace std;

int main()
{
    char x;

    cout << "enter the charctor: " << endl;
    cin >> x;

    if (x >= 'a' && x <= 'z')
    {

        cout << "'" << x << "'"
             << "is lowercase";
        switch (x)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ", vowel";
            break;
        default:
            cout << ", consonant" << endl;
            break;
        }
    }

    else if (x >= 'A' && x <= 'Z')
    {

        cout << "'" << x << "'"
             << "is uppercase";
        switch (x)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << ", vowel" << endl;
            break;
        default:
            cout << ", consonant" << endl;
            break;
        }
    }

    else if (x >= '0' && x <= '9')
    {
        cout << "'" << x << "'"
             << "is a digit";

        if (x % 2 == 0)
        {
            cout << ", even" << endl;
        }
        else
            cout << ", odd" << endl;
    }

    else
        cout << "'" << x << "'"
             << "is a special charactor";
}