#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    char c;
    cout << "Enter a letter: ";
    cin >> c;
    if (islower(c)) {
        cout << "The uppercase equivalent is " << char(toupper(c)) << endl;
    } else if (isupper(c)) {
        cout << "The lowercase equivalent is " << char(tolower(c)) << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}
