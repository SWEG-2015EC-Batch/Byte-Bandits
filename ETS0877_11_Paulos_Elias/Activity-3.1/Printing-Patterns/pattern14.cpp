// Pattern - letters starting with 'A' in four rows and six columns 
#include <iostream>

int main(){
    char letter = 'A';
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 6; k++, letter++)
            std::cout << letter << " ";
        std::cout << std::endl;
    }

    return 0;
}
