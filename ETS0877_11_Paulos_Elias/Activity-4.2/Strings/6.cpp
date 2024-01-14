#include <iostream>
#include <set>

using namespace std;

int main() {
    string str;
    cout<<"Enter the sequence: ";
    cin>>str;

    multiset<char> symbols(str.begin(), str.end());

    char l_ch = str[0], s_ch = str[0];
    int l_fr=symbols.count(l_ch), s_fr=symbols.count(s_ch);
    int n;
    for (auto ch: symbols) {
        n = symbols.count(ch);
        if (n>l_fr) l_ch = ch, l_fr = n;
        if (n<s_fr) s_ch = ch, s_fr = n;
    }

    cout<<"Lowest: Character = "<<s_ch<<" Freq: "<<s_fr<<"\n"
        <<"Highest: Character = "<<l_ch<<" Freq: "<<l_fr<<"\n";
    return 0;
}
