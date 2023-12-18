#include <iostream>
using namespace std;
int main()
{
    char op;
    double num1, num2;

    do
    {


        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter operator: ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            break;
        default:
            cout << "Error! invalid operator";
        }

        cout << "Enter 0 to exit, anything else to continue: ";
        cin >> op;

    }

    while (op != '0');

    return 0;
}
