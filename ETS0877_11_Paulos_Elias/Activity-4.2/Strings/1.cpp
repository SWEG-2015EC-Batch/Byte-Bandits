#include <iostream>
#include <string>

using  namespace std;

int main() {
    string str;
    cout<<"Input a string: ";
    cin>>str;

    int vwl = 0, cns = 0, len = str.size();
    for (int i = 0; i<len; ++i)
        switch (str[i]) {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                ++vwl;
                break;
            default:
                ++cns;
        }
    cout<<"\nThe string contains: "<<vwl<<" and "<<cns<<" consonants."<<endl;

    return 0;
}
