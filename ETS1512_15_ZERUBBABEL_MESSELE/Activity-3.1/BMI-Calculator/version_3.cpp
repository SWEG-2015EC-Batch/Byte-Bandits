// This code calculates a BMI for both genders but based on different categories and prints their BMI and gender
// It also works continously for a number of peoples you asked
// BY:Zerubbabel
#include <iostream>

int main(){

    int num; // number of people to proces
    char gender;
	float weight, height, bmi;

    std::cout << "How many people are there?" << std::endl;
    std::cin >> num;

    for(int i = 1; i <= num; i++){
        std::cout << "Enter gender, 'M' for Male and 'F' for female." << std::endl;
        std::cin >> gender;

	    std::cout << "Please enter weight and height separated by space." << std::endl;
	    std::cin >> weight >> height;

	    //validity check
	    if(height <= 0 || weight < 0 ){
		    std::cout << "ERROR. Height and Weight must be non-negative and height cannot be 0." 
			    << std::endl;
		    continue;
	    }

	    bmi = weight/(height * height);
        
        // show results
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
    }

	return 0;
}
