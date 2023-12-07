// Simple arithmetic calculator.
#include <iostream>

using namespace std;

int main(){
    char op; // operator
    long lop, rop; // Left and right operands

    cout << "Select operator: +, *, /, -, or %." << endl;
    cin >> op; 


    cout << "Enter two numbers operands separated by Space." << endl;
    cin >> lop >> rop;

    switch (op){
        case '+':
            cout << "The sum is: " << lop + rop << endl;
            break;
        case '-':
            cout << "The difference is: " << lop - rop << endl;
            break;
        case '/':
            //Division by zero is not permitted
            if( rop == 0){
                cout << "Division by zero is undefined!" << endl;
            }
            else {
                cout << "The quotient is: " << (double)lop / rop << endl;
            }
            break;
        case '*':
            cout << "The product is: " << lop * rop << endl;
            break;
        case '%':
            cout << "The reminder is: " << lop % rop << endl;
            break;
        default:
            cout << "Unknown operator!" << endl;
    }
    
    cout << "Quiting ... " << endl;
    
    return 0;
}
