//Matrix of Increasing numbers
#include <iostream>

int main(){
    int n, m; // dimensions n row and m columns
    std::cout << "Input dimensions: ";
    std::cin >> n >> m;

    int number = 10; //starting number
    for(int row = 0; row < n; row++){
        for(int column = 0; column < m; column ++, number++)
            std::cout << number << " ";
        std::cout << std::endl;
    }

    return 0;
}
