/*This program calulates the sum of even number from 12 numbers
in a 3 x 4 array and it prints out the 12 numbers in a tabular format
in which the odd numbers are replaced by '*'. */
// by Robeil

#include <iostream>

const int ROWS = 3;
const int COLS = 4;

int main()
{

    int arr[ROWS][COLS];
    int evenSum = 0;

    std::cout << "Enter " << ROWS * COLS << " array elements: \n";
    for (int i = 0; i < ROWS; i++)
    {
        std::cout << "\nEnter row " << i + 1 << " elements with space between each number: ";
        for (int j = 0; j < COLS; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                evenSum += arr[i][j];
            }
        }
    }

    std::cout << "\nArray elements: \n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                std::cout << "*\t";
            }
            else
            {
                std::cout << arr[i][j] << "\t";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\nSum of even elements: " << evenSum;

    return 0;
}