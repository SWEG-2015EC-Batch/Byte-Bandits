/*  Takes user input for how many numbers to sum
    Inputs each number from user
    Sums only numbers that are not multiples of 3 or 7
    Uses modulo operator to check for non-multiples
    Prints final sum */
// by Robeill

#include <iostream>

int main()
{
    double input, sum = 0;

    std::cout << "Enter the amount of numbers: ";
    std::cin >> input;

    for (int i = input; i >= 1; i--)
    {
        int num;

        std::cout << "Enter the " << i << " number: ";
        std::cin >> num;

        if ((num % 3 != 0) && (num % 7 != 0))
        {
            sum += num;
        }
    }
    std::cout << "The sum of the number is " << sum;
}