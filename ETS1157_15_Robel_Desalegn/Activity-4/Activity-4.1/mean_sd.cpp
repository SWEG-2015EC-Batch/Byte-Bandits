// This program calculates the mean and standard deviation of a list of numbers
//by Robeill

#include <iostream>
#include <math.h>

int main()
{

    double number, sum = 0.0, stdDevSum = 0.0;
    int numCount = 0;

    std::cout << "Enter numbers (enter non-number to stop): ";

    while (std::cin >> number)
    {
        sum += number;
        numCount++;

        double mean = sum / numCount;

        double diff = number - mean;
        stdDevSum += diff * diff;
    }

    double stdDev = sqrt(stdDevSum / numCount);
    double mean = sum / numCount;

    std::cout << "The Mean of the numbers is " << mean << std::endl;
    std::cout << "The Standard Deviation of the numbers is " << stdDev;

    return 0;
}