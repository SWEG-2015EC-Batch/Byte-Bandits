/*This program calculates the total mark of a course entered from the keyboard
and conver it to its corresponding letter-grade */
//by Robeill
#include <iostream>

int main()
{
    double mark;
    double test, quiz, project, assignment, finalExam;

    std::cout << "Enter your test mark(15%): ";
    std::cin >> test;
    std::cout << "Enter your quiz mark(5%): ";
    std::cin >> quiz;
    std::cout << "Enter your prokect mark(20%): ";
    std::cin >> project;
    std::cout << "Enter your assignment mark(10%): ";
    std::cin >> assignment;
    std::cout << "Enter your final exam mark(50%): ";
    std::cin >> finalExam;

    mark = test + quiz + project + assignment + finalExam;

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