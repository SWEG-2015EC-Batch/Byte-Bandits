// BMI calculator. Takes weight and height and prints BMI
// and category, normal, overweight, obese, underweight
// By: paulusel
#include <iostream>

int main(){

    char gender;
	float weight, height, bmi;

    std::cout << "Enter gender, 'M' for Male and 'F' for female." << std::endl;
    std::cin >> gender;

	std::cout << "Please enter weight and height separated by space." << std::endl;
	std::cin >> weight >> height;

	//validity check
	if(height <= 0 || weight < 0 ){
		std::cout << "ERROR. Height and Weight must be non-negative and height cannot be 0." 
			<< std::endl;
		return 1;
	}

	bmi = weight/(height * height);
    std::cout << std::endl << "Results" << std::endl << "=======" << std::endl;
	std::cout << "BMI: " << bmi << std::endl;

    if(gender == 'M' || gender == 'm'){
        std::cout << "Gender: Male" << std::endl;
        if(bmi < 20.5){
            // overweight
            std::cout << "Status: Underweight" << std::endl;
        }
        else if(bmi < 25){
            //normal
            std::cout << "Status: Normal" << std::endl;
        }
        else if(bmi < 30){
            //overweight
            std::cout << "Status: Overweight" << std::endl;
        }
        else{
            //obese
            std::cout << "Status: Obese" << std::endl;
        }
    }
    else if(gender == 'F' || gender == 'f'){
        std::cout << "Gender: Female" << std::endl;
        if(bmi < 18.5){
            // overweight
            std::cout << "Status: Underweight" << std::endl;
        }
        else if(bmi < 24){
            //normal
            std::cout << "Status: Normal" << std::endl;
        }
        else if(bmi < 30){
            //overweight
            std::cout << "Status: Overweight" << std::endl;
        }
        else{
            //obese
            std::cout << "Status: Obese" << std::endl;
        }
    }
    else {
        std::cout << "Gender: Unknown" << std::endl;
    }

	return 0;
}
