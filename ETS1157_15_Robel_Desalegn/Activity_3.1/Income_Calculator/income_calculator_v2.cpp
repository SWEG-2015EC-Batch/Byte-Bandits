/*This program calculates the net salary of an employee
by taking gross salary, bonus rate and working hour input from the user.*/
//by Robeill
#include <iostream>

int main()
{
    const float PENSION = 0.07;
    int overtime = 0, gross_salary, working_hour;
    int pension, net_salary, tax_rate, income_tax, bonus, bonus_rate;

    std::cout << "Enter your gross salary: ";
    std::cin >> gross_salary;
    std::cout << "Enter the over time bonus rate per hour: ";
    std::cin >> bonus_rate;
    std::cout << "Enter your working hour: ";
    std::cin >> working_hour;

    pension = gross_salary * PENSION;

    if (gross_salary < 0)
    {
        std::cout << "Invalid input";
    }
    if (gross_salary < 200)
    {
        if (working_hour < 40)
        {
            income_tax = gross_salary * 0;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
        else
        {
            income_tax = gross_salary * 0;
            overtime = working_hour - 40;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
    }
    if ((gross_salary > 200) && (gross_salary < 600))
    {
        if (working_hour < 40)
        {
            income_tax = gross_salary * 0.1;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
        else
        {
            income_tax = gross_salary * 0.1;
            overtime = working_hour - 40;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
    }
    if ((gross_salary > 600) && (gross_salary < 1200))
    {
        if (working_hour < 40)
        {
            income_tax = gross_salary * 0.15;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
        else
        {
            income_tax = gross_salary * 0.15;
            overtime = working_hour - 40;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
    }
    if ((gross_salary > 1200) && (gross_salary < 2000))
    {
        if (working_hour < 40)
        {
            income_tax = gross_salary * 0.2;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
        else
        {
            income_tax = gross_salary * 0.2;
            overtime = working_hour - 40;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
    }
    if ((gross_salary > 2000) && (gross_salary < 3500))
    {
        if (working_hour < 40)
        {
            income_tax = gross_salary * 0.25;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
        else
        {
            income_tax = gross_salary * 0.25;
            overtime = working_hour - 40;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
    }
    if (gross_salary > 3500)
    {
        if (working_hour < 40)
        {
            income_tax = gross_salary * 0.3;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
        else
        {
            income_tax = gross_salary * 0.3;
            overtime = working_hour - 40;
            bonus = overtime * bonus_rate;
            net_salary = (gross_salary - pension - income_tax) + bonus;
            std::cout << "Your net salary = " << net_salary << std::endl;
        }
    }

    return 0;
}