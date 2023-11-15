#include <iostream>
using namespace std;

// program to calculate the no of miles the automobile can be drivrn without refueling
int main(){
    double capacity, miles_pergallom;
    cout << "please enter the capacity of the fuel tank in gallons: " << endl;
    cin >> capacity;
    cout << "please enter the miles per gallon ratio of the automobile: " << endl;
    cin >> miles_pergallom;
    cout << "the automobile  can be driven " << (capacity * miles_pergallom) << " miles without refueling." << endl;

    return 0;
}