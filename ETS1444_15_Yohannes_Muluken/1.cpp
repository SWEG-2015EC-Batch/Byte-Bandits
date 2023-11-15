#include <iostream>
using namespace std; 

// program to calculate BMI
int main(){
    double weight , height, bmi;
    bmi = weight/(height * height);
    cout << "please enter your weight in kg: "<< endl;
    cin >> weight;
    cout << "please enter your heigt in meter: "<< endl;
    cin >> height;
    cout << "your BMI is " << bmi << endl;

    return 0;
}
