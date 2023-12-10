// This program reverses the number the user inputs
#include <iostream>

int main()
{

    int num, remainder, first_digit, last_digit;
    int reversed_number = 0, sum_of_digits = 0, p_even = 1, count = 0;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    last_digit = num % 10;
    while (num > 0)
    {
        remainder = num % 10;
        sum_of_digits += remainder;
        first_digit = num % 10;
        reversed_number = reversed_number * 10 + remainder;
        if (num % 2 == 0)
        {
            p_even *= remainder;
        }
        count++;
        num /= 10;
    }
    std::cout << "Reversed Number = " << reversed_number << std::endl;
    std::cout << "The product of the even digits = " << p_even << std::endl;
    std::cout << "The sum of the digits = " << sum_of_digits << std::endl;
    std::cout << "The sum of the first and last digits = " << first_digit + last_digit << std::endl;
    std::cout << "The number has " <<  count << " digits" << std::endl;

    return 0;
}