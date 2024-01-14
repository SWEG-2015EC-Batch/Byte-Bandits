/*  Declares an integer array
    Inputs numbers from user into array
    Sums all elements of array
    Prints average by dividing sum by array length */
// by Robeill

#include <iostream>

int main()
{
    const int n = 8;
    int nums[n] = {};
    int sum = 0;

    std::cout << "Enter the numbers\n";
    for (int i = 0, num = 0; i < n && std::cin >> num; ++i)
    {
        nums[i] = num;
        sum += num;
    }

    for (int num : nums)
    {
        std::cout << num << " ";
    }

    std::cout << "\n";
    std::cout << "Average: " << sum / n << "\n";

    return 0;
}