// calculate BMI

#include <iostream>
using namespace std;

int main(){
    double weight, height;
    cout << "please enter your weight: " <<endl;
    cin >> weight;
    cout << "please enter your height: "<< endl;
    cin >> height;

    double bmi = (weight/(height * height));
    cout << "your BMI is " << bmi << endl;


}
