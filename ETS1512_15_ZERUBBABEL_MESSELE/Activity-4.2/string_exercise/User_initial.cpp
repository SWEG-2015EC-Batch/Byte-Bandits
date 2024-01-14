//program that prints the user’s initials on-screen by printing the first character of each name.
//By: Zerubbabel

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char firstName[15], middleName[15], lastName[15];

    cout << "enter your first name: ";
    cin >> firstName;
    cout << "enter your middle name: ";
    cin >> middleName;
    cout << "enter your last name: ";
    cin >> lastName;

    cout << "initials: " << firstName[0] << middleName[0] << lastName[0];
}