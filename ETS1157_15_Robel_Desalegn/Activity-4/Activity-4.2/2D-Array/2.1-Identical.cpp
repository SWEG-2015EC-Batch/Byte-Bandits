// This Program Checks whether tow arays are identical or not
// by Robeil

#include <iostream>

int main()
{

    double arr_1[8] = {12, 41, 75.3, 14, 68, 10, 99};
    double arr_2[8] = {43, 12, 34, 23, 99, 15, 71};

    if (arr_1[7] == arr_2[7])
    {
        std::cout << "The two array have identical data.";
    }
    else
    {
        std::cout << "The two are do not have identical data";
    }
}