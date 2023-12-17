// Inverted Hollow Half Pyramid
#include <iostream>

int main(){
    for(int i = 6; i > 0; i--){
        for(int j = 0; j < i; j++)
            if(i == 6 || j == 0 || j == i - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << std::endl;
    }

    return 0;
}
