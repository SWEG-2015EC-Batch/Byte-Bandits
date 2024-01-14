#include <cctype>
#include <iostream>

using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    for (int i = 0; i<str.size(); ++i)
        if (! isalpha(str[i]))
            str.erase(str.begin()+i--);
    cout<<"The sanitized string: "<<str<<endl;

    return 0;
}
