// Program to calculate gross salary, net salary and bonus of a employee
// By: paulusel
#include <iostream>
#include <string>

int main(){

	const double tax = 0.15, pension = 0.05;

	std::string name = "";
	int work_hour;
	double bonus_rate, base_salary;
	double gross, net, bonus = 0;

	std::cout << "Employee name, Please?" << std::endl;
	std::cin >> name;

	std::cout << "Base salary?" << std::endl;
	std::cin >> base_salary;
		
	std::cout << "Total work hours?" << std::endl;
	std::cin >> work_hour;

	std::cout << "How much per hour for overtime?" << std::endl;
	std::cin >> bonus_rate;

	//input check
	if( name == "" || work_hour < 0 || base_salary < 0 || bonus_rate < 0){
		std::cout << "Invalid input! The name must not empty and all the values have to be non-negative."
			<< std::endl;

		return 1;
	}

	if( work_hour > 40 ){
		bonus = (work_hour - 40)*bonus_rate;
	}

	gross = base_salary + bonus;
	net = gross - (tax * gross) - ( gross * pension );

	std::cout << "Employee Name: " << name << std::endl
		<< "Gross Salary: " << gross << std::endl
		<< "Bonus Payment: " << bonus << std::endl
		<< "Net Salary: " << net << std::endl;

	return 0;
}
