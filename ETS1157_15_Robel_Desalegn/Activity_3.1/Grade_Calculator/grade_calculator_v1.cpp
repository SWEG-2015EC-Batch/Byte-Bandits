/*This program converts a mark of a course entered from the keyboard to its corresponding letter-grade*/
//by Robeill
#include <iostream>

int main()
{
    double mark;

    std::cout << "Enter your mark: ";
    std::cin >> mark;

    if ((mark < 0) || (mark > 100))
    {
        std::cout << "\nInvalid mark";
    }
    else if (mark < 30)
    {
        std::cout << "\nYour grade is F";
    }
    else if (mark < 45)
    {
        std::cout << "\nYour grade is D";
    }
    else if (mark < 55)
    {
        std::cout << "\nYour grade is C";
    }
    else if (mark < 60)
    {
        std::cout << "\nYour grade is C+";
    }
    else if (mark < 75)
    {
        std::cout << "\nYour grade is B";
    }
    else if (mark < 80)
    {
        std::cout << "\nYour grade is B+";
    }
    else if (mark < 90)
    {
        std::cout << "\nYour grade is A";
    }
    else if (mark <= 100)
    {
        std::cout << "\nYour grade is A+";
    }
    return 0;
}