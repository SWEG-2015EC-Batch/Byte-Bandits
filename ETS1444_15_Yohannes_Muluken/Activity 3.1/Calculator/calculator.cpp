// simple calculator
#include <iostream>
using namespace std;

int main()
{

    int num1, num2, menu;
    char op;
    double result;

    do
    {
        cout << "enter the first number: " << endl;
        cin >> num1;
        cout << "enter the second number: " << endl;
        cin >> num2;
        cout << "choose '+' for addition, '-' for subtracction, '*' for multiplication, '/' for dividion, '%' for modulo" << endl;
        cin >> op;

        switch (op)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = double(num1) / num2;
            break;
        case '%':
            result = num1 % num2;
            break;
        default:
            cout << "not appropriate entry" << endl;
            break;
        }
        cout << "result : " << result << endl;

        cout << "enter 0 to exit, any other number to continue" << endl;
        cin >> menu;
    }

    while (menu != 0);
}