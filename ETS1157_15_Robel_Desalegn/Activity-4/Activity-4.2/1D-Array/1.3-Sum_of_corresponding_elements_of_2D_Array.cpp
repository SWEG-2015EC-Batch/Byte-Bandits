/* This program prompts the user to input two 2D arrays, stores them in
first and second arrays. It then adds the corresponding elements of
the two arrays and stores the sum in a third array called sum.
Finally, it prints out the result sum array.*/
// by Robeil

#include <iostream>

const int ROWS = 3;
const int COLS = 2;

int main()
{
    int first[ROWS][COLS];
    int second[ROWS][COLS];
    int sum[ROWS][COLS];

    std::cout << "First Array";

    for (int i = 0; i < ROWS; ++i)
    {
        std::cout << "\nEnter the " << i + 1 << "st row \n";
        for (int j = 0; j < COLS; ++j)
        {
            std::cout << "Enter element at position (" << i << ", " << j << "): ";
            std::cin >> first[i][j];
        }
    }
    std::cout << std::endl;
    std::cout << "Second Array";
    for (int i = 0; i < ROWS; ++i)
    {
        std::cout << "\nEnter the " << i + 1 << "st row \n";
        for (int j = 0; j < COLS; ++j)
        {
            std::cout << "Enter element at position (" << i << ", " << j << "): ";
            std::cin >> second[i][j];
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {

            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    std::cout << "Result array:" << std::endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << sum[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}