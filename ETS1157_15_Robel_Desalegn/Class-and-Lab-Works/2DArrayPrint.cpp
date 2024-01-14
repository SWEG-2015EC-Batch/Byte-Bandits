/* This program declares and initializes a 2D float array of marks
   It declares and initializes a 2D int array of ages
   It prints out both arrays using nested for loops
   It prints the size of the arrays */
// by Robeill

#include <iostream>
using namespace std;

int main()
{
    float marks[3][4] = {60, 73.5, 57.25, 80, 41.8, 67, 89, 54};

    cout << "The size of the array is " << sizeof(marks) / 4 << endl;
    cout << "The list of the marks are: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << marks[i][j] << " \t";
        }
        cout << endl;
    }

    int age[3][4] = {{26, 37, 16},
                     {24, 20, 18, 48},
                     {60, 33, 80}};

    cout << "The size of the array is " << sizeof(marks) / 4 << endl;
    cout << "The list of ages are: " << endl;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << age[i][j] << " \t";
        }
        cout << endl;
    }
}