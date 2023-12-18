// income calculator
#include <iostream>
using namespace std;

int main()
{
    int grossSalary, workedHours, taxRate, otRate = 0, overtime, net, pension, incomeTax;

    cout << "enter employee's gross salary: " << endl;
    cin >> grossSalary;
    cout << "enter employee's worked hours: " << endl;
    cin >> workedHours;

    if (workedHours > 40)
    {

        cout << "enter employee's overtime rate: " << endl;
        cin >> otRate;
    }
    cout << "enter employee's tax rate: " << endl;
    cin >> taxRate;
    pension = 0.07 * grossSalary;
    overtime = grossSalary * otRate / 100;
    incomeTax = grossSalary * taxRate / 100;
    net = grossSalary + overtime - (pension + incomeTax);

    cout << "net salary: " << net;
}