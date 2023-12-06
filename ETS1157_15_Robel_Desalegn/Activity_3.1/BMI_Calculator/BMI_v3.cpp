/* This program calculates BMI for multiple people based on their height and weight,
and classifies their weight status based on their gender */

#include <iostream>

int main()
{
    double height, weight, bmi;
    char gender;
    int num_person;

    std::cout << "Enter number of persons: ";
    std::cin >> num_person;

    for (int i = 0; i < num_person; i++)
    {
        std::cout << std::endl
                  << "Person: " << i + 1 << std::endl;
        std::cout << "Enter weight (kg): ";
        std::cin >> weight;

        std::cout << "Enter your height in meters: ";
        std::cin >> height;

        std::cout << "Enter your gender: ";
        std::cin >> gender;

        bmi = weight / (height * height);
        std::cout << "Your BMI is " << bmi << " and ";

        if (bmi > 30)
        {
            std::cout << "You are Obese" << std::endl;
        }
        else
        {
            if ((gender == 'M') || (gender == 'm'))
            {
                if (bmi < 20.5)
                {
                    std::cout << "You are Under Weight." << std::endl;
                }
                else if (bmi < 25)
                {
                    std::cout << "You are Normal Weight." << std::endl;
                }
                else if (bmi < 30)
                {
                    std::cout << "You are Over Weight." << std::endl;
                }
            }
            else if ((gender == 'F') || (gender == 'f'))
            {
                if (bmi < 18.5)
                {
                    std::cout << "You are Under Weight." << std::endl;
                }
                else if (bmi < 24)
                {
                    std::cout << "You are Normal Weight." << std::endl;
                }
                else if (bmi < 30)
                {
                    std::cout << "You are Over Weight." << std::endl;
                }
            }
            else
            {
                std::cout << "Invalid gender!" << std::endl;
            }
        }
    }

    return 0;
}