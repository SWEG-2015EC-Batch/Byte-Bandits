#include <iostream>

int main(){
    long num = 0, sum = 0;

    int n; // length of list
    std::cout << "How many numbers?" << std::endl;
    std::cin >> n;
    
    while(n>0){
        std::cout << "Enter a number" << std::endl;
        std::cin >> num;
        if(!(num%3 == 0 || num%7 == 0))
            sum += num;
        n--;
    }

    std::cout << "The sum of numbers is: " << sum << std::endl;

    return 0;
}
