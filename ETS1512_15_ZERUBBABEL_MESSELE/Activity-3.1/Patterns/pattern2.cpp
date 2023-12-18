// Full rectangular box with '*'s
#include <iostream>

int main(){
    for(int row = 0; row < 4; row++){
        for(int column = 0; column < 7; column++)
            std::cout << "* ";
        std::cout << std::endl;
    }

    return 0;
}
