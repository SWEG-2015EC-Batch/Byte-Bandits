// This program salary details of an employee
#include <iostream>
#include <string>
using namespace std;

#define TAX 0.15
#define PENSION 0.05

int main() 
{
  string name;
  int weeklyHours;
  double bonusRate, baseSalary, grossSalary, netSalary, bonus, tax, pension;

  cout << "Enter employee name: ";
  cin >> name;

  cout << "Enter weekly working hours: ";
  cin >> weeklyHours;

  cout << "Enter bonus rate per hour: ";
  cin >> bonusRate;

  cout << "Enter base salary: ";
  cin >> baseSalary;

  bonus = weeklyHours * bonusRate;
  grossSalary = baseSalary + bonus;
  tax = TAX * grossSalary;
  pension = PENSION * grossSalary;
  netSalary = grossSalary - tax - pension;

  cout << "Employee: " << name << endl;
  cout << "Gross Salary: " << grossSalary << endl; 
  cout << "Net Salary: " << netSalary << endl;
  cout << "Bonus Payment: " << bonus << endl;

  return 0;
}