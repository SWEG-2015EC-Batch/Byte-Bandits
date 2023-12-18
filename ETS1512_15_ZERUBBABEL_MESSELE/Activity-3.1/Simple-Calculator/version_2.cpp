// This code runs as a simple arithmetic calculator continously.
// By: Zerubbabel

#include <iostream>

int main(){
    char op;
    long num1, num2; // Left and right operators
   
    do{
        std::cout << "Select operator: +, *, /, -, or %. Enter 0 to quit." << std::endl;
        std::cin >> op; 

        if( op == '0')
            break;

        std::cout << "Enter two operands separated by Space." << std::endl;
        std::cin >> num1 >> num2;

        switch (op){
            case '+':
                // result = num1 + num2;
                std::cout << "The sum is: " << num1 + num2 << std::endl;
                break;
            case '-':
                //result = num1 - num2;
                std::cout << "The difference is: " << num1 - num2 << std::endl;
                break;
            case '/':
                //result = num1 / num2;
                if( num2 == 0){
                    std::cout << "Division by zero is undefined!" << std::endl;
                }
                else {
                    std::cout << "The quotient is: " << (double)num1 / num2 << std::endl;
                }
                break;
            case '*':
                //result = num1 * num2;
                std::cout << "The product is: " << num1 * num2 << std::endl;
                break;
            case '%':
                //result = num1 % num2;
                std::cout << "The reminder is: " << num1 % num2 << std::endl;
                break;
            default:
                std::cout << "Unknown operator!" << std::endl;
        }
    }while( op != '0');
    
    std::cout << "Quiting ... " << std::endl;
    
    return 0;
}
