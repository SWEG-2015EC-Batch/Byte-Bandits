// calculating file transmission time

#include <iostream>
using namespace std;

int main(){
    double size ;

    cout << "please enter the size of the file in Byte: "<< endl;
    cin >> size;

    double time = size / 960;
    cout << "It will take " << time <<" seconds " << endl;

    return 0;
}