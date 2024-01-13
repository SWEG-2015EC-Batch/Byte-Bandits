// Multiply rows and add columns of a 2D array
#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << " enter the number of rows and columns: " << endl;
    cin >> rows >> columns;
    int array[rows][columns];

    for (size_t i = 0; i < rows; i++)
    {
        cout << " Enter each column data for the " << (i + 1) << " row" << endl;

        for (size_t j = 0; j < columns; j++)
        {
            cin >> array[i][j];
        }
    }

    cout << "Row products: \n";
    for (size_t i = 0; i < rows; i++)
    {
        int product = 1;
        for (size_t j = 0; j < columns; j++)
        {
            product *= array[i][j];
        }
        cout << product << endl;
    }

    cout << "Column sums: \n";
    for (size_t i = 0; i < columns; i++)
    {
        int sum = 0;
        for (size_t j = 0; j < rows; j++)
        {
            sum += array[j][i];
        }
        cout << sum << "\t";
    }
}
