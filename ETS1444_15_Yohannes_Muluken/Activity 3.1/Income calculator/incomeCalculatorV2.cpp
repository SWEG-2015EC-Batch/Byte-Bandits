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

    if (grossSalary >= 3500)
    {
        incomeTax = 0.03 * grossSalary;
    }
    else if (grossSalary >= 2000)
    {
        incomeTax = 0.025 * grossSalary;
    }
    else if (grossSalary >= 1200)
    {
        incomeTax = 0.2 * grossSalary;
    }
    else if (grossSalary >= 600)
    {
        incomeTax = 0.15 * grossSalary;
    }
    else if (grossSalary >= 200)
    {
        incomeTax = 0.1 * grossSalary;
    }
    else
        incomeTax = 0;

    pension = 0.07 * grossSalary;
    overtime = grossSalary * otRate / 100;
    incomeTax = grossSalary * taxRate / 100;
    net = grossSalary + overtime - (pension + incomeTax);

    cout << "net salary: " << net << endl;
}