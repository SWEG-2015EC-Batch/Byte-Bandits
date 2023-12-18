// This code calculates a person's net sallary using tax rate from a person's input
// By: Zerubbabel

#include <iostream>

int main() {
    const float PENSION_RATE = 0.07; // pension rate is 7%
    float taxrate, ov_rate; // tax and pension rates
    float gross, overtime = 0, net;
    int w_hours; //work hours
    
    std::cout << "Input" << std::endl << "=====" << std::endl;
    std::cout << "Gross Salary: ";
    std::cin >> gross;
    std::cout << "Work Hours: ";
    std::cin >> w_hours;
    std::cout << "Tax Rate(%): ";
    std::cin >> taxrate;
    std::cout << "Overtime Rate: ";
    std::cin >> ov_rate;

    if(w_hours > 40){
        overtime = (w_hours - 40) * ov_rate;
    }

    taxrate /= 100;
    net = gross + overtime - (gross * PENSION_RATE) - (gross * taxrate);

    std::cout << std::endl << "Output" << std:: endl << "======" << std::endl;
    std::cout << "Net salary of the employee is " << net << std::endl;

    return 0;
}
