// This program stores the names of two favorite TV shows and prints it out 
// by Robeil
#include <iostream>
#include <string>

int main()
{

    const int MAX_LEN = 50;
    char tvPrograms[2][MAX_LEN] = {{"Game of Thrones"}};
    strcpy(tvPrograms[1], "The Big Bang Theory");

    std::cout << "My favorite TV programes are " << tvPrograms[0] << " and " << tvPrograms[1] << std::endl;

    return 0;
}