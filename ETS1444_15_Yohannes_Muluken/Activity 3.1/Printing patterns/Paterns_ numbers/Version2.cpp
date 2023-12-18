// printing numbers in a tebular format with user specified raws and columns
#include <iostream>
using namespace std;

int main()
{

    int row, column, num = 10;
    cout << " enter the number of rows and columns: " << endl;
    cin >> row >> column;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {

            cout << num << "\t";
            num++;
        }
        cout << endl;
    }
}
