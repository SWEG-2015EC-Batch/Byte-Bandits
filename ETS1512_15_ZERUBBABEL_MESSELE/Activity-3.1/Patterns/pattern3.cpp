// Prints a hollow rectangle pattern with '*'s
#include <iostream>

int main(){
    int row = 7, column = 8;
    for(int m = 0; m < row; m++){
        for(int n = 0; n < column; n++){
            if(m == 0 || n == 0 || m == row - 1|| n == column - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }

    return 0;
}
