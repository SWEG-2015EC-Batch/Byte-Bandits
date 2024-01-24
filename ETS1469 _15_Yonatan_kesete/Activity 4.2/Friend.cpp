include <iostream>

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
