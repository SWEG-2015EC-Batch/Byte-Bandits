//program to check either the word is palindrome or not using loop.
//By:Zerubbabel

#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    bool ispalindrome = true;
    cout << "Enter a text: ";
    getline(cin, text);

    for (int i = 0; i < (text.length() / 2); i++){
        if (text[i] != text[(text.length() - i - 1)]){
            ispalindrome = false;
        }
    }

    cout << boolalpha;
    cout << text << ", is palindrome " << ispalindrome << endl;
}

