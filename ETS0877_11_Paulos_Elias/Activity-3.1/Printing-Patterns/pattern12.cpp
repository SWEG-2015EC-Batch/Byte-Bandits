// Mirrored Half Pyramid With Numbers
#include <iostream>

int main(){
    for(int i = 0; i < 5; i++){
        for(int k = 5 - i - 1; k > 0; k--)
            std::cout << "  ";
        for(int j = i + 1; j > 0; j--)
            std::cout << j << " ";
        std::cout << std::endl;
    }

   return 0; 
}
