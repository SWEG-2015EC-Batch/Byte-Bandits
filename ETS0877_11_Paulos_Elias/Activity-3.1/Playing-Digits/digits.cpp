// Takes a number and prints its revers, number and sum of digits
// By: paulusel
#include <iostream>

int main(){

    long num, reverse = 0;
    int ndigit = 0, sumdigit = 0; // number of digits and sum of digits

    std::cout << "Enter a number: ";
    std::cin >> num;

    int rem;
    do{
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num = num/10;

        ndigit++;
        sumdigit += rem;
    }while( num > 0 );

    std::cout << "Reverse: " << reverse << std::endl
                << "Number of digits: " << ndigit << std::endl
                << "Sum of digits: " << sumdigit << std::endl;

    return 0;
}
