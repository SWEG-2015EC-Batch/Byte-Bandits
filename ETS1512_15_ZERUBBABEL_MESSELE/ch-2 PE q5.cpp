#include <iostream>
using namespace std;

int main() {
    string name;
    double weeklyWorkingHours, bonusRatePerHour, baseSalary, grossSalary, pension, tax, netSalary, bonusPayment;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter weekly working hours: ";
    cin >> weeklyWorkingHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRatePerHour;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    grossSalary = baseSalary + (weeklyWorkingHours * bonusRatePerHour);
    pension = 0.05 * grossSalary;
    tax = 0.15 * grossSalary;
    netSalary = grossSalary - pension - tax;
    bonusPayment = grossSalary - netSalary;
    cout << "Employee name: " << name << endl;
    cout << "Gross salary: $" << grossSalary << endl;
    cout << "Pension: $" << pension << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Net salary: $" << netSalary << endl;
    cout << "Bonus payment: $" << bonusPayment << endl;
    return 0;
}
