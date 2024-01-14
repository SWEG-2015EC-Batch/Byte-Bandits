// Print in reverse order of the even numbers in an array
#include <iostream>
using namespace std;
int main()
{

    int count;
    cout << "no of elements of the array: ";
    cin >> count;
    int myArray[count];

    for (size_t i = 0; i < count; i++)
    {
        cout << "enter the " << (i + 1) << " element: ";
        cin >> myArray[i];
    }

    cout << "Even entries in reverse order: \n";
    for (int i = (count - 1); i >= 0; i--)
    {
        if (myArray[i] % 2 == 0)
        {
            cout << myArray[i] << endl;
        }
    }
}