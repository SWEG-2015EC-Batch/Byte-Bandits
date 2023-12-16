#include <iostream>

int main()
{

    int rows, cols;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    int num = 10;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << num << "\t";
            num++;
        }
        std::cout << "\n";
    }

    return 0;
}