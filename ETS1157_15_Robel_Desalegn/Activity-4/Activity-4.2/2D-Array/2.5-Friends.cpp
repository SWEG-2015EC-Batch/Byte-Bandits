/* This program indices represent people and that the value at row i, column j of a 2D array is true
just in case i and j are friends and false otherwise. Then the program counts how many pairs of friends are represented
in the array. */
// by Robeil

#include <iostream>

int main()
{

    char friends[4][4] = {
        {' ', '*', ' ', '*'},
        {'*', ' ', '*', ' '},
        {' ', '*', ' ', '*'},
        {'*', ' ', '*', ' '}};

    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (friends[i][j] == '*')
            {
                count++;
            }
        }
    }
    for ( int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j){
            std::cout << friends[i][j] << " " << " | ";
        }
        std::cout << std::endl;
    }

    std::cout << "Number of friend pairs: " << count << std::endl;

    return 0;
}