/*
 * Net income calculator. Based on progressive taxation
 * with rate determined by gross income.
 *
 * paulusel
 */
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
    //std::cout << "Tax Rate(%): ";
    //std::cin >> taxrate;
    std::cout << "Overtime Rate: ";
    std::cin >> ov_rate;

    if(gross < 200){
        taxrate = 0;
    }
    else if(gross < 600){
        taxrate = 10;
    }
    else if(gross < 1200){
        taxrate = 15;
    }
    else if(gross < 2000){
        taxrate = 20;
    }
    else if(gross < 3500){
        taxrate = 25;
    }
    else{
        taxrate = 30;
    }

    if(w_hours > 40){
        overtime = (w_hours - 40) * ov_rate;
    }

    taxrate /= 100;
    net = gross + overtime - (gross * PENSION_RATE) - (gross * taxrate);

    std::cout << std::endl << "Output" << std:: endl << "======" << std::endl;
    std::cout << "Net salary of the employee is " << net << std::endl;

    return 0;
}
