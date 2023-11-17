// Reads two numbers, spits out the value of the
// the first raised to the second
// By: paulusel
#include <iostream>
#include <cmath>

int main(){

	double power = 0, base = 0, exp = 0;

	std::cout << "Enter two numbers(base and exponent) separated by space." << std::endl;
	std::cin >> base >> exp;
	
	// if base is less than 0, the value is undefined
	if( base <= 0 ){
		std::cout << "The base must be positive!" << std::endl;

		return 1;
	}

	power = pow(base, exp);

	std::cout << "The base raised to exponent is: " << power << std::endl;

	return 0;
}
