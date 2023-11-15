#include <iostream>

int main(){

	// mileage is miles per gallon
	// capacity is max fuel capacity in gallons
	// distance is max distance possible without refueling
	float distance, capacity, mileage;

	std::cout << "Please enter fuel tank capacity followed and mileage of the automobile." << std::endl;
	std::cin >> capacity >> mileage;

	//sanity check
	if( capacity < 0 || mileage < 0 ){
		std::cout << "Invalid value(s)!" << std::endl;

		return 0;
	}

	distance = capacity * mileage;

	std::cout << "Maximum distance possible without refueling is: " << distance << " miles" << std::endl;

	return 0;
}
