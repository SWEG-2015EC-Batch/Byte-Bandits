//calculating grosss salary, bonus salary, net salary
#include <iostream>
using namespace std;

int main(){
    double working_hours, base, gross,
     net, bonus, bonus_rate, pension, tax;
    string name;

    cout << "please enter employee's name: " << endl;
    cin >> name;
    cout << "please enter employee's total weekly working hours: " << endl;
    cin >> working_hours;
    cout << "please enter employee's bonus rate: " << endl;
    cin >> bonus_rate;
    cout << "please enter employee's base salary: " << endl;
    cin >> base;

    if (working_hours > 40)
    {
         bonus = (working_hours - 40) * (bonus_rate /100); 
    }
    else {
            bonus = 0;
    }
    
    pension = base * 0.05;
    tax = base * 0.15;
    gross = bonus + base;
    net = gross - pension - tax;

    cout << name << "'s gross salary is " << gross <<endl;
    cout << name << "'s bonus salary is " << bonus <<endl;
    cout << name << "'s net salary is " << net <<endl;

    return 0;
}