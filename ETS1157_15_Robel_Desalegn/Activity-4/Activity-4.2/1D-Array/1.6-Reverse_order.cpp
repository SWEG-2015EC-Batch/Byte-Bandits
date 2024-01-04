// This program reverses the order of even integers in a given list of numbers
// by Robeil

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter size of array: ";
    std::cin >> n;

    int num[n];

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::cout << "\nEven numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] % 2 == 0)
        {
            std::cout << num[i] << " ";
        }
    }

    return 0;
}