// Full Pyramid
#include <iostream>

int main(){
    int base = 6;

    for(int i = 1; i <= base; i++){
        for(int j = base - i; j > 0; j--){
            std::cout << "  ";
        }
        for(int k = 0; k < i; k++){
            std::cout << "*   ";
        }
        std::cout << std::endl;
    }

    return 0;
}
