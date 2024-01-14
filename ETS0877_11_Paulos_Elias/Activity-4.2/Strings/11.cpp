#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string fname, sname, lname;
    cout<<"Enter your full name: ";
    cin>>fname>>sname>>lname;
    fname[0] = toupper(fname[0]);
    sname[0] = toupper(sname[0]);
    lname[0] = toupper(lname[0]);
    cout<<"Your Initials: "<<fname[0]<<sname[0]<<lname[0];
    return 0;
}
