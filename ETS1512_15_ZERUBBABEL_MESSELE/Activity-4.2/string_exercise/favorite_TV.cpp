//program that store and print the name of my 2 favorite television programs.
//By: Zerubbabel

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char tvShows[2][25] = {{"Money hiest"}};
    strcpy(tvShows[1], "Friends");

    cout << "My favorite tv shows are: ";
    cout << tvShows[0] << " and " << tvShows[1];
}