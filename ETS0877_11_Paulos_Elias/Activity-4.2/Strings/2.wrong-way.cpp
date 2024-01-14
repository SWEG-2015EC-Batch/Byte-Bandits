#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    string str;
    cout<<"Input a word: ";
    cin>>str;

    int n = str.size()/2;
    if (str.size() == 1) {
        cout<<"Palindrome"<<endl;
        return 0;
    }
    
    string s1, s2 = str.substr(0, n);
    if (str.size()%2 == 0) {
        s1 = str.substr(n, n);
        reverse(s1.begin(), s1.end());
        if (s1 == s2)
            cout<<"Palindrome"<<endl;
        else 
            cout<<"Not palindrome"<<endl;
    }
    else {
        s1 = str.substr(n+1, n);
        reverse(s1.begin(), s1.end());
        if (s1 == s2)
            cout<<"Palindrome"<<endl;
        else
            cout<<"Not palindrome"<<endl;
    }

    return 0;
}
