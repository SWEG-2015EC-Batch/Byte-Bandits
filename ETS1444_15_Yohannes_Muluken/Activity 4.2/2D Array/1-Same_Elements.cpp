// Check if two arrays have the same elements
#include <iostream>
using namespace std;
int main()
{
    int num;
    bool areEqual;
    cout << "enter the number of elements of the array: ";
    cin >> num;
    int array1[num], array2[num];

    cout << "Data for the first array \n";

    for (size_t i = 0; i < num; i++)
    {
        cout << "enter the " << (i + 1) << " th element: ";
        cin >> array1[i];
    }

    cout << "\n Data for the second array \n ";

    for (size_t i = 0; i < num; i++)
    {
        cout << "enter the " << (i + 1) << " th element: ";
        cin >> array2[i];
    }

    for (size_t i = 0; i < num; i++)
    {
        if (array1[i] != array2[i])
        {
            areEqual = false;
            break;
        }
        else
            areEqual = true;
    }

    cout << boolalpha;
    cout << "are the two arrays equivalent: " << areEqual;
}