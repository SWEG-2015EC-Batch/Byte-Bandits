/*  Declares different arrays including 2D arrays
    Uses loops to print lengths of each element
    Uses strlen for C-style strings and size() for C++ strings */
// by Robeill

#include <iostream>
#include <string>

int main()
{
    const int rows = 3;
    const int cols = 4;

    double sales[rows][cols];

    std::cout << "Enter elements for the sales: " << std::endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << "Enter element at position (" << i << ", " << j << "): ";
            std::cin >> sales[i][j];
        }
        std::cout << "Enter the " << i << "row";
    }

    double FirstRowFirstCol = sales[0][0];
    double SecondRowThirdCol = sales[1][2];
    double ThirdRowFourthCol = sales[2][3];
    double sum = FirstRowFirstCol + SecondRowThirdCol + ThirdRowFourthCol;

    std::cout << "\nThe sum is:  " << sum << std::endl;

    return 0;
}