// printing array elements using pointers
#include <iostream>
using namespace std;

int main()
{
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *ptrBalance[5], **anotherPtrBalance[5];
    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
    int *ptrArr[3][4], **anotherPtrArr[3][4];

    cout << "Addresses of elements in balance: \n";
    for (size_t i = 0; i < 5; i++)
    {
        ptrBalance[i] = &balance[i];
        anotherPtrBalance[i] = &ptrBalance[i];
        cout << (i + 1) << " th element: " << ptrBalance[i] << endl;
    }

    cout << endl;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            ptrArr[i][j] = &arr[i][j];
            cout << ptrArr[i][j] << " \t";
        }
        cout << endl;
    }
    cout << "\n using another pointer: \n";

    cout << "Addresses of elements in balance: \n";

    for (size_t i = 0; i < 5; i++)
    {
        anotherPtrBalance[i] = &ptrBalance[i];
        cout << (i + 1) << " th element: " << *anotherPtrBalance[i] << endl;
    }

    cout << " \n Adresses of elements in arr: \n";

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {

            anotherPtrArr[i][j] = &ptrArr[i][j];
            cout << *anotherPtrArr[i][j] << " \t";
        }
        cout << endl;
    }
}