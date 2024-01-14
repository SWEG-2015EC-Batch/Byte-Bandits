//program that stores a password in a character array called pass.
// By: Zerubbabel

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char pass[] = {"aq12ws"};
    char attempt[8];
    bool correctPassword = true;

    cout << " Enter the password: ";
    cin.getline(attempt, 7);

    for (int i = 0; i < 6; i++){
        if (attempt[i] != pass[i]){
            correctPassword = false;
        }
    }

    cout << boolalpha;
    cout << "Correct password: " << correctPassword;
}