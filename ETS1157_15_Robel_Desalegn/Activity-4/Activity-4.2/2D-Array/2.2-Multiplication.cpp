/* This program does the summation and multiplication of 
numbers in the corresponding rows and columns*/
// by Robeil

#include <iostream>

int main()
{
    int rows, cols;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    int arr[rows][cols];

    std::cout << "Enter array elements: " << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    std::cout << "Array elements: " << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "Row elements multiplication: " << std::endl;
    for (int i = 0; i < rows; i++)
    {
        int product = 1;
        for (int j = 0; j < cols; j++)
        {
            product *= arr[i][j];
        }
        std::cout << product << std::endl;
    }

    std::cout << "Column elements summation: " << std::endl;
    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += arr[j][i];
        }
        std::cout << sum << std::endl;
    }

    return 0;
}