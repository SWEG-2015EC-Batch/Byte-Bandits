// Print a text in upper and lowercase
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char text[21];
    cout << "Enter a text: ";
    cin.getline(text, 20);

    cout << strupr(text);
    cout << strlwr(text);
}