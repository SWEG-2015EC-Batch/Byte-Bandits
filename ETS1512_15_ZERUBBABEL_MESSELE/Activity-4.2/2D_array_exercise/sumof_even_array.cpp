//program that reads 3*4 2D-array, find and print the sum of even array elements.
//By: Zerubbabel

#include<iostream>
using namespace std;

int main(){
    int Array[3][4];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << "data for the " << (i + 1) << " th row: " << endl;

        for (int j = 0; j < 4; j++)
        {
            cout << " enter the " << (j + 1) << " th column value: ";
            cin >> Array[i][j];

            if (Array[i][j] % 2 == 0)
            {
                sum += Array[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (Array[i][j] % 2 == 0)
            {
                cout << Array[i][j] << "\t";
            }
            else
                cout << "* \t";
        }
        cout << endl;
    }

    cout << "sum of even elements: " << sum;
}