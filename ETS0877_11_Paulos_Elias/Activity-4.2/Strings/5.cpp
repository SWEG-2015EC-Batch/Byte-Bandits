#include <cctype>
#include <iostream>

using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int vow = 0, cns = 0, dgt = 0, sp = 0;
    for (auto ch: str){
        if (isdigit(ch))
            ++dgt;
        else if (!isalnum(ch))
            ++sp;
        else
            switch (ch) {
                case 'a':
                case 'A':
                case 'E':
                case 'e':
                case 'I':
                case 'i':
                case 'O':
                case 'o':
                case 'u':
                case 'U':
                    ++vow;
                    break;
                default:
                    ++cns;
            }
    }
    cout<<"The sequence contains:"
        <<"Vowels: "<<vow<<endl
        <<"Consonants: "<<cns<<endl
        <<"Digits: "<<dgt<<endl
        <<"Specials: "<<sp<<endl;

    return 0;
}
