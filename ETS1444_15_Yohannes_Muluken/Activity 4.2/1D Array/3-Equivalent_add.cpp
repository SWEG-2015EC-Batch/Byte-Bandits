// Add equivalent elements
#include <iostream>
using namespace std;

int main()
{

    int row, column;
    cout << "how many rows and column of arrays do you want: " << endl;
    cin >> row >> column;
    int first[row][column], second[row][column], sum[row][column];

    cout << " For the first Array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << " enter the " << (i + 1) << " row and "
                 << (j + 1) << " column entry: ";
            cin >> first[i][j];
        }
    }

    cout << "For the second Array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << " enter the " << (i + 1) << " row and "
                 << (j + 1) << " column entry: ";
            cin >> second[i][j];
        }
    }

    cout << " \n Equivalent sum of the two arrays: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
            cout << sum[i][j] << " \t";
        }

        cout << endl;
    }
}