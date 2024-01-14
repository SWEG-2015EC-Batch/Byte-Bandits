//program that find the frequency of characters within string and display character with largest and smallest frequency respectively.
//By: Zerubbabel

#include <iostream>
#include <string>
using namespace std;

int main(){
    char maxChar, minChar;
    int maxFrequency = 0;
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int frequency[256] = {0}; // all charactors in ASCII(8-bit)

    for (int i = 0; i < text.length(); i++){
        frequency[text[i]]++;
    }

    int minFrequency = text.length();

    for (int i = 0; i < 256; i++){
        if (frequency[i] > maxFrequency){
            maxFrequency = frequency[i];
            maxChar = (char)i;
        }

        if ((frequency[i] > 0) && (frequency[i] < minFrequency)){
            minFrequency = frequency[i];
            minChar = (char)i;
        }
    }

    cout << "Maximum Frequency Charactor: " << maxChar;
    cout << "\t  with " << maxFrequency << " occurances" << endl;
    cout << "Minimum Frequency Charactor: " << minChar;
    cout << "\t  with " << minFrequency << " occurances" << endl;
}