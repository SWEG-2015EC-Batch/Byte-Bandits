// BMI calculator. Takes weight and height and prints BMI
// By: paulusel
#include <iostream>

int main(){

	float weight, height, bmi;

	std::cout << "Please enter weight and height separated by space." << std::endl;
	std::cin >> weight >> height;

	//validity check
	if(height <= 0 || weight < 0 ){
		std::cout << "ERROR. Height and Weight must be non-negative and height cannot be 0." 
			<< std::endl;
		return 1;
	}

	bmi = weight/(height * height);

	std::cout << "BMI is: " << bmi << std::endl;

	return 0;
}
