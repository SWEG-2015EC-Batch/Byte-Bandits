//that inputs a line of text and outputs the text twice, once in all uppercase and once in all lowercase letters.
//By: Zerubbabel

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char text[21];
    cout << "Enter a text: ";
    cin.getline(text, 20);

    cout << strupr(text);
    cout << strlwr(text);
}
