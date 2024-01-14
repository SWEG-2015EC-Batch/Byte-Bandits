#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string upper, lower;

    cout<<"Enter a line of string!\n";
    getline(cin, lower);
    upper = lower;

    for (int i = 0; i<lower.size(); ++i) {
        lower[i] = tolower(lower[i]);
        upper[i] = toupper(lower[i]);
    }

    cout<<"\nUppercase:\n"<<upper<<"\n\nLowercase:\n"<<lower;
    return 0;
}
