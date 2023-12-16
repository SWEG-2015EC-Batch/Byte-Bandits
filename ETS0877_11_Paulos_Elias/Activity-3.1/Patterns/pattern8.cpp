//Inverted Full Pyramid
#include <iostream>

int main(){
    int base = 6;

    for(int i = base; i >= 1; i--){
        for(int j = 0; j < base - i; j++){
            std::cout << "  ";
        }
        for(int k = 0; k < i; k++){
            std::cout << "*   ";
        }
        std::cout << std::endl;
    }

    return 0;
}
