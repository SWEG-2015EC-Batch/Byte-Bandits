#include <iostream>
using namespace std;

// calculating gross salary, net salary and bonus payment
int main(){
    string name;
    double base_salary, gross_salary, bonus, pension, tax, working_hour, bonus_rate, net_salary;
   

    cout << "please enter employee's name: " <<endl;
    cin >> name;
    cout << "please enter employee's base salary: " <<endl;
    cin >> base_salary;
    cout << "please enter employee's total weekly working hours: " <<endl;
    cin >> working_hour;
    cout << "please enter employee's bonus rate: " <<endl;
    cin >> bonus_rate;

    pension = base_salary * 0.05;
    tax = base_salary * 0.15;
    bonus = working_hour * bonus_rate;
    gross_salary = bonus + base_salary;
    net_salary = gross_salary - pension+ tax; 
    

    cout << name << "'s bonus salary is " << bonus << endl;
    cout << name << "'s gross salary is " << gross_salary << endl;
    cout << name << "'s net salary is " << net_salary << endl;

    return 0;
}