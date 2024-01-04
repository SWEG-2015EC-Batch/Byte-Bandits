// This program prints out the intitalized data in a tabular format
// by Robeil

#include <iostream>

int main()
{

    double volts[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    std::cout << "\nVolts:\n";
    for (int i = 0; i < 9; i++)
    {
        std::cout << volts[i] << "  ";
        if ((i + 1) % 3 == 0)
        {
            std::cout << "\n";
        }
    }

    return 0;
}