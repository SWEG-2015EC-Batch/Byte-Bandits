#include <iostream>

using namespace std;

int main() {
    string str;
    cout<<"Input a word: ";
    cin>>str;

    for (int i = 0, j = str.size()-1; i<j; ++i, --j)
        if (str[i] != str[j]) {
            cout<<"Not Palindrome!"<<endl;
            return 0;
        }

    cout<<"Palindrome!"<<endl;

    return 0;
}
