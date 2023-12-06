// This program does basic arithmetic taking two operand as input from users.
#include <iostream>

int main()
{
    char op;
    long num1, num2;

    do
    {
        std::cout << "Enter operator (+, -, *, /, %): ";
        std::cin >> op;

        std::cout << "Enter the first operand: ";
        std::cin >> num1;

        std::cout << "Enter the second operand: ";
        std::cin >> num2;

        switch (op)
        {
        case '+':
            std::cout << "Sum of " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Difference of: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Product of: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 == 0)
            {
                std::cout << "It is undefined" << std::endl;
            }
            else
            {
                std::cout << "Divison of: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            }

            break;
        case '%':
            std::cout << "Remainder of: " << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
            break;

        default:
            std::cout << "Error! operator is not correct" << std::endl;
        }

        std::cout << "Enter 0 to exit, anything else to continue: ";
        std::cin >> op;

    }

    while (op != '0');

    return 0;
}