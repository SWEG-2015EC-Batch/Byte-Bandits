//program that displays the multiplication of row elements and the sum of column elements.
//By: Zerubbabel

#include<iostream>
using namespace std;

int main(){
    int rows, columns;

    cout << " enter the number of rows and columns: " << endl;
    cin >> rows >> columns;
    int array[rows][columns];

    for (int i = 0; i < rows; i++){
        cout << " Enter each column data for the " << (i + 1) << " row" << endl;

        for (int j = 0; j < columns; j++){
            cin >> array[i][j];
        }
    }

    cout << "Row products: \n";
    for (int i = 0; i < rows; i++){
        int product = 1;
        for (int j = 0; j < columns; j++){
            product *= array[i][j];
        }
        cout << product << endl;
    }

    cout << "Column sums: \n";
    for (int i = 0; i < columns; i++){
        int sum = 0;
        for (int j = 0; j < rows; j++){
            sum += array[j][i];
        }
        cout << sum << "\t";
    }
}