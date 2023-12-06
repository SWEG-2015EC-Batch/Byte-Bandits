// This program counts the number of digits of the number the user inputs
#include <iostream>

int main()
{

    int num, remainder, count = 0;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    while (num != 0)
    {
        remainder = num % 10;
        num /= 10;
        count++;
    }
    std::cout << "The number of digits = " << count << std::endl;

    return 0;
}