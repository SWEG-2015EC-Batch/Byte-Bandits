#include <iostream>
#include <cmath>
using namespace std;

//program to calculate x^y
int main(){
    double x , y;
    cout << "please enter the value of x: " << endl;
    cin >> x;
    cout << "please enter the value of y: " << endl;
    cin >> y;
    cout << "the result of x raised to y is " << pow(x,y) << endl;

    return 0;
} 