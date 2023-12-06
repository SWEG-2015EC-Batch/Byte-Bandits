// This program does the sum of the digits the user inputs
#include <iostream>

int main()
{

    int num, remainder, sum_of_digits = 0;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    while (num > 0)
    {
        remainder = num % 10;
        sum_of_digits += remainder;
        num /= 10;
    }
    std::cout << "The sum of the digits = " << sum_of_digits << std::endl;

    return 0;
}