//program to remove non-alphabet character from string
//By: Zerubbabel

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string text, alpha;
    cout << "Enter a text: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++){
        if (isalpha(text[i])){
            alpha += text[i];
        }
    }

    cout << "after removal of non-alphabet charactors: " << alpha;
}