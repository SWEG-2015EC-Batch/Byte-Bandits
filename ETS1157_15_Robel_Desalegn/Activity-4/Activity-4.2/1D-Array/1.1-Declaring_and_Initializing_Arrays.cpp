// This program intializes a list of numbers and prints them in a 4x5 range.
// by Robeil

#include <iostream>

int main()
{

    int num[4][5] = {
        {16, 22, 99, 4, 18},
        {-258, 4, 101, 5, 98},
        {105, 6, 15, 2, 45},
        {33, 88, 72, 16, 3}};

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            std::cout << num[i][j] << " \t ";
        }
        std::cout << std::endl;
    }

    return 0;
}
