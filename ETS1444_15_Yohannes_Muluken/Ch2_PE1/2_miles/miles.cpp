// program to calculate the no of miles the automobile can be drivrn without refueling
#include <iostream>
using namespace std;

int main(){
    double capacity, rate;
    cout << "please enter the capacity of the fuel tank in gallons: " << endl;
    cin >> capacity;
    cout << "please enter the miles per gallon ratio of the automobile: " << endl;
    cin >> rate;
    cout << "the automobile  can be driven " << (capacity * rate) << " miles without refueling." << endl;

    return 0;
}