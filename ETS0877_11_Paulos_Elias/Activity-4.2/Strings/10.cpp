#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char pass[] {"pass"};
    string trial;
    cout<<"Enter your password: ";
    cin>>trial;

    if (!strcmp(pass, trial.c_str()))
        cout<<"Correct password\n";
    else
        cout<<"Password incorrect\n";

    return 0;
}
