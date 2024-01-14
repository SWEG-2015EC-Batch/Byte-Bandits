// This prgram take the mid exam and final exam marks and calculate total mark
// by Robeill

#include <iostream>

int main()
{
    float mid = 0, final = 0, total = 0;

    int trial = 3;
    for (; trial > 0; trial--)
    {
        std::cout << "Enter mid score: ";
        std::cin >> mid;

        if (mid > 40 || mid < 0)
            std::cout << "Wrong scrore! Mid has to be in 0-40!" << std::endl;
        else
            break;
    }

    if (trial == 0)
    {
        std::cout << "Trial exceeded limit! Exiting ..." << std::endl;
        return 1;
    }

    trial = 3;
    for (; trial > 0; trial--)
    {
        std::cout << "Enter final score: " << std::endl;
        std::cin >> mid;

        if (mid > 60 || mid < 0)
        {
            std::cout << "Wrong scrore! Final has to be in 0-60!" << std::endl;
        }
        else
        {
            break;
        }
    }

    if (trial == 0)
    {
        std::cout << "Trial exceeded limit! Exiting ..." << std::endl;
        return 1;
    }

    total = mid + final;

    std::cout << "Total mark: " << total << std::endl;

    return 0;
}