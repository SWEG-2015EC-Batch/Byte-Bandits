// This program reverses the number the user inputs
#include <iostream>

int main()
{

    int num, reversed_number = 0, remainder;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    while (num > 0)
    {
        remainder = num % 10;
        reversed_number = reversed_number * 10 + remainder;
        num /= 10;
    }
    std::cout << "Reversed Number = " << reversed_number;

    return 0;
}