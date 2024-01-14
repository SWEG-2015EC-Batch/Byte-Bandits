//program that find the frequency of vowel, consonant, digit and special character
//By: Zerubbabel

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string text;
    int vowelCount = 0, constCount = 0, digitCount = 0, specialCharCount = 0;
    cout << " Enter a text: ";
    getline(cin, text);

    for (size_t i = 0; i < text.length(); i++){
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' ||
            text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U'){
            vowelCount++;
        }
        else if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')){
            constCount++;
        }
        else if (text[i] >= '0' && text[i] <= '9'){
            digitCount++;
        }
        else
            specialCharCount++;
    }

    cout << "no of Vowels: " << vowelCount << endl;
    cout << "no of Consonants: " << constCount << endl;
    cout << "no of Digits: " << digitCount << endl;
    cout << "no of Special characters: " << specialCharCount << endl;
}