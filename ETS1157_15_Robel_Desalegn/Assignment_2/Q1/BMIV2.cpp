//This program calculates the Body Mass Index (BMI) and classifies the weight status of a person based on their gender.
#include <iostream>

int main()
{

double height, weight, bmi;
char gender;

std::cout << "Enter your weight in kg: ";
std::cin >> weight;

std::cout << "Enter your height in meters: ";
std::cin >> height;

std::cout << "Enter your gender: ";
std::cin >> gender;

bmi = weight/(height*height);
std::cout << "Your BMI is " << bmi << std::endl;

if (bmi > 30) {
      std::cout << "You are Obese" << std::endl;
    }
    else {
      if ((gender == 'M') || (gender == 'm')) {
        if (bmi < 20.5){
          std::cout << "You are Under Weight." << std::endl;
        }
        else if (bmi < 25){
          std::cout << "You are Normal Weight." << std::endl;  
        }
        else if (bmi < 30){
          std::cout << "You are Over Weight." << std::endl;
        }
      }
      else if ((gender == 'F') || (gender == 'f')) {
        if (bmi < 18.5){
          std::cout << "You are Under Weight." << std::endl;
        }
        else if (bmi < 24){
          std::cout << "You are Normal Weight." << std::endl;
        } 
        else if (bmi < 30){
           std::cout << "You are Over Weight." << std::endl;  
        }
      } 
        else {
           std::cout << "Invalid gender!" << std::endl;  
      }
    }

return 0;

}
