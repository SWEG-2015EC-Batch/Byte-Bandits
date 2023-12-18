// This code converts numerical marks (out of 100%) to letter grade
// It also calculate the numerical marks from test, quiz, project, assignment and final exam
// By: Zerubbabel
#include <iostream>

int main(){
    float marks;
    float test, quiz, project, assign, final;

    std::cout << "Input" << std::endl << "=====" << std::endl;
    std::cout << "Test(15%): ";
    std::cin >> test;
    std::cout << "Quiz(5%): ";
    std::cin >> quiz;
    std::cout << "Project(20%): ";
    std::cin  >> project;
    std::cout << "Assignment(10%): ";
    std::cin >> assign;
    std::cout << "Final(50%): ";
    std::cin >> final;

    marks = test + quiz + project + assign + final;

    if(marks < 0 || marks > 100){
        std::cout << "Not a valid mark!" << std::endl;
    }
    else if(marks < 30){
        std::cout << "Grade: F" << std::endl;
    }
    else if(marks < 45){
        std::cout << "Grade: D" << std::endl;
    }
    else if(marks < 55){
        std::cout << "Grade: C" << std::endl;
    }
    else if(marks < 60){
        std::cout << "Grade: C+" << std::endl;
    }
    else if(marks < 75){
        std::cout << "Grade: B" << std::endl;
    }
    else if(marks < 80){
        std::cout << "Grade: B+" << std::endl;
    }
    else if(marks < 90){
        std::cout << "Grade: A" << std::endl;
    }
    else if(marks <= 100){
        std::cout << "Grade: A+" << std::endl;
    }

    return 0;
}
