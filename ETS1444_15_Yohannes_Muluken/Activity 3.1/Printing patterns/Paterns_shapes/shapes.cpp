// print different shapes
#include <iostream>
using namespace std;

int main()
{
    int menu, row, column;

    cout << "\n choose pattern shape \n";
    cout << " 1 for full rectangle \n 2 for holow rectangle \n 3 for half pyramid \n";
    cout << " 4 for inverted half pyramid\n 5 for hollow inverted half pyramid\n";
    cout << " 6 for full pyramid \n 7 for hollow full pyramid\n and any other key to exit" << endl;
    cin >> menu;

    cout << "enter no of raw: " << endl;
    cin >> row;

    switch (menu)
    {
    case 1:
    {
        cout << "enter no of columns: " << endl;
        cin >> column;

        for (int i = 0; i < row; i++)
        {

            for (int j = 0; j < column; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    break;

    case 2:
    {
        cout << "enter no of columns: " << endl;
        cin >> column;

        for (int i = 0; i < row; i++)
        {

            for (int j = 0; j < column; j++)
            {
                if ((i == 0) || (j == 0) || (i == (row - 1)) || (j == (column - 1)))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
    break;

    case 3:
    {
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                std::cout << "* ";
            }
            cout << endl;
        }
    }
    break;

    case 4:
    {
        for (int i = row; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    break;

    case 5:
    {

        for (int i = row; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if ((i == row) || (j == 0) || (j == i - 1))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
    break;
    case 6:
    {
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= row - i; j++)
            {
                cout << "  ";
            }

            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    break;

    case 7:
    {
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= row - i; j++)
                cout << "  ";

            if (i == 1 || i == row)
            {
                for (int k = 1; k <= 2 * i - 1; k++)
                    cout << "* ";
            }
            else
            {
                cout << "* ";
                for (int l = 1; l <= 2 * i - 3; l++)
                    cout << "  ";
                cout << "* ";
            }

            cout << endl;
        }
    }
    break;
    default:
        cout << " Invalid entry";
        break;
    }
}
