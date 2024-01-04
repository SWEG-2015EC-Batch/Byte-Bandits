// This program does the average of list of integers
// by Robeil

#include <iostream>

int main()
{
    int temp[8];
    int total = 0;

    for (int i = 0; i < 8; ++i)
    {
        std::cout << "Enter integer number " << i + 1 << ": ";
        std::cin >> temp[i];

        total += temp[i];
    }
    std::cout << "The list of integers = ";
    for (int i = 0; i < 8; ++i)
    {
        std::cout << temp[i] << " ";
    }

    std::cout << "\n"
              << "The Average of the integers = " << double(total) / 8;

    return 0;
}
