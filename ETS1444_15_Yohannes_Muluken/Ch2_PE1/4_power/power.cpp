// calculating x^y
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y;

    cout << "please enter the value for x in x^y; " << endl;
    cin >> x;
    cout << "please enter the value for y: " <<endl;
    cin >> y;

    cout << " the value of x^y is " << (pow(x,y))<< endl;

    return 0;
}