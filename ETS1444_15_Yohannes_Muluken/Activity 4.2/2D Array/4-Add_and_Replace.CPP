// Add even elements and replace odd numbers by '*' in a 3*4 2D array
#include <iostream>
using namespace std;

int main()
{
    int myArray[3][4];
    int sum = 0;
    for (size_t i = 0; i < 3; i++)
    {
        cout << "data for the " << (i + 1) << " th row: " << endl;

        for (size_t j = 0; j < 4; j++)
        {
            cout << " enter the " << (j + 1) << " th column value: ";
            cin >> myArray[i][j];

            if (myArray[i][j] % 2 == 0)
            {
                sum += myArray[i][j];
            }
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (myArray[i][j] % 2 == 0)
            {
                cout << myArray[i][j] << "\t";
            }
            else
                cout << "* \t";
        }
        cout << endl;
    }

    cout << "sum of even elements: " << sum;
}