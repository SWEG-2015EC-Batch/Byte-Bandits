//print 1 - 5 five times
#include <iostream>

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 1; j <= 5; j++)
            std::cout << j << " ";
        std::cout << std::endl;
    }

   return 0; 
}
