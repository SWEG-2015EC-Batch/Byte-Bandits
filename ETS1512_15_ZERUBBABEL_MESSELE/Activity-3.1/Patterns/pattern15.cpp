// Half Pyramid with Letters
#include <iostream>

int main(){
     for(int i = 0; i < 5; i++){
        char letter = 'A';
        for(int k = 0; k <= i; k++, letter++)
            std::cout << letter << " ";
        std::cout << std::endl;
    }

    return 0;
}
