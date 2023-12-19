//This program calculates the mean and standard deviation of a list of numbers
#include <iostream>
#include <math.h>

int main()
{
    double number, sum = 0.0, squareSum = 0.0;
    int count = 0;

    std::cout << "Enter numbers (enter 0 to stop): ";

    do
    {
        std::cin >> number;
        if (number != 0)
        {
            sum += number;
            squareSum += pow(number, 2);
            count++;
        }
    } while (number != 0);

    double mean = sum / count;

    double stdDev = sqrt((squareSum / count) - pow(mean, 2));

    std::cout << "The Mean of the numbers is " << mean << std::endl;
    std::cout << "The Standard deviation of the numbers is " << stdDev << std::endl;

    return 0;
}