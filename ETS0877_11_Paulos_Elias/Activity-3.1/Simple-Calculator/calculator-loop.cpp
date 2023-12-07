// Simple arithmetic calculator, modified to repeat until the 
// user tells otherwise
#include <iostream>

int main(){
    char op;
    long lop, rop; // Left and right operators
   
    do{
        std::cout << "Select operator: +, *, /, -, or %. Enter 0 to quit." << std::endl;
        std::cin >> op; 

        if( op == '0')
            break;

        std::cout << "Enter two operands separated by Space." << std::endl;
        std::cin >> lop >> rop;

        switch (op){
            case '+':
                // result = lop + rop;
                std::cout << "The sum is: " << lop + rop << std::endl;
                break;
            case '-':
                //result = lop - rop;
                std::cout << "The difference is: " << lop - rop << std::endl;
                break;
            case '/':
                //result = lop / rop;
                if( rop == 0){
                    std::cout << "Division by zero is undefined!" << std::endl;
                }
                else {
                    std::cout << "The quotient is: " << (double)lop / rop << std::endl;
                }
                break;
            case '*':
                //result = lop * rop;
                std::cout << "The product is: " << lop * rop << std::endl;
                break;
            case '%':
                //result = lop % rop;
                std::cout << "The reminder is: " << lop % rop << std::endl;
                break;
            default:
                std::cout << "Unknown operator!" << std::endl;
        }
    }while( op != '0');
    
    std::cout << "Quiting ... " << std::endl;
    
    return 0;
}
