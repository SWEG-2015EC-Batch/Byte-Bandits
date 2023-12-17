// Inverted half pyramid
#include <iostream>

int main(){
    for(int i = 6; i > 0; i--){
        for(int j = 0; j < i; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }

    return 0;
}
