#include <iostream>
using namespace std;

int main() {
    double fuelTankCapacity, milesPerGallon;
    cout << "Enter the capacity in gallons of an automobile fuel tank: ";
    cin >> fuelTankCapacity;
    cout << "Enter the miles per gallons the automobiles can be driven: ";
    cin >> milesPerGallon;
    cout << "The automobile can be driven without refueling " << fuelTankCapacity * milesPerGallon << " miles." << endl;
    return 0;
}
