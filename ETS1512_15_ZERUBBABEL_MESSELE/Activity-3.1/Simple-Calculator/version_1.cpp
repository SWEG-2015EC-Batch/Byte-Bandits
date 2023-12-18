// This code runs as a simple arithmetic calculator only one times.
// By: Zerubbabel

#include <iostream>

using namespace std;

int main(){
    char op; // operator
    long num1, num2; // Left and right operands

    cout << "Select operator: +, *, /, -, or %." << endl;
    cin >> op; 


    cout << "Enter two numbers operands separated by Space." << endl;
    cin >> num1 >> num2;

    switch (op){
        case '+':
            cout << "The sum is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The difference is: " << num1 - num2 << endl;
            break;
        case '/':
            //Division by zero is not permitted
            if( num2 == 0){
                cout << "Division by zero is undefined!" << endl;
            }
            else {
                cout << "The quotient is: " << (double)num1 / num2 << endl;
            }
            break;
        case '*':
            cout << "The product is: " << num1 * num2 << endl;
            break;
        case '%':
            cout << "The reminder is: " << num1 % num2 << endl;
            break;
        default:
            cout << "Unknown operator!" << endl;
    }
    
    cout << "Quiting ... " << endl;
    
    return 0;
}
