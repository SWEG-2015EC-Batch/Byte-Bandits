#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string str;
    cout<<"Enter a line of strings"<<endl;
    getline(cin, str);
    stringstream ss(str);

    cout<<"The tokens divided by stace are:"<<endl;
    for (string tok; ss>>tok;) cout<<tok<<endl;

    return 0;
}
