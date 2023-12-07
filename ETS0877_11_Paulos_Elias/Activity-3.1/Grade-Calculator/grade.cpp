// Converts numerical marks to letter grade
// By: paulusel
#include <iostream>

int main(){
    float marks;

    std::cout << "Enter marks out of 100" << std::endl;
    std::cin >> marks;

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
