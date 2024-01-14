//program that inputs a line of text, and tokenizes it.
//By: Zerubbabel

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string text;
    cout << "Enter a text: ";
    getline(cin, text);
    int count = 25, i = 0, tokens = 0;
    string token[count];

    cout << "Tokens: " << endl;

    while (i < text.length()){
        while ((i < text.length()) && (text[i] != ' ')){
            cout << text[i];
            i++;
        }
        cout << endl;

        i++;
        tokens++;
    }
    cout << "No of tokens: " << tokens;
}