// Initialize sting using strcpy()
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char tvShows[2][25] = {{"Game of Thrones"}};
    strcpy(tvShows[1], "How I Met Your Mother");

    cout << "My favorite tv shows are: ";
    cout << tvShows[0] << " and " << tvShows[1];
}