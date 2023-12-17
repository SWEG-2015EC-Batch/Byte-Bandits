// Pattern a - e five times
#include <iostream>

int main(){
    for(int i = 0; i < 5; i++){
        for(char i = 'a'; i <= 'e'; i++)
            std::cout << i << " ";
        std::cout << std::endl;
    }

    return 0;
}
