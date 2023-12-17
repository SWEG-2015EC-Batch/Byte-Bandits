// Matrix of increasing numbers
#include <iostream>

int main(){
    int number = 10; //starting number
    for(int row = 0; row < 4; row++){
        for(int column = 0; column < 10; column ++, number++)
            std::cout << number << " ";
        std::cout << std::endl;
    }

    return 0;
}
