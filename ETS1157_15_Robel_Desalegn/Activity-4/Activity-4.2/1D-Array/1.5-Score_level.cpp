// This program prints out the marks of students with the score level in a tabular format
// by Robeil

#include <iostream>

int main()
{
    int stud;
    std::cout << "Enter the amount of students:";
    std::cin >> stud;

    int sMark[stud];
    char sLevel[5][10] = {"Fail", "Poor", "Fair", "Very Good", "Excellent"};

    std::cout << std::endl;
    for (int i = 0; i < stud; ++i)
    {
        std::cout << "Enter the mark of student " << i + 1 << ": ";
        std::cin >> sMark[i];
    }
    std::cout << std::endl;
    std::cout << "Marks of the Students\n";
    std::cout << "---------------------------\n";
    for (int i = 0; i < stud; ++i)
    {
        if (sMark[i] < 40)
        {
            std::cout << "Student " << i + 1 << " | " << sMark[i] << " | "
                      << sLevel[0] << std::endl;
        }
        else if (sMark[i] < 50)
        {
            std::cout << "Student " << i + 1 << " | " << sMark[i] << " | "
                      << sLevel[1] << std::endl;
        }
        else if (sMark[i] < 60)
        {
            std::cout << "Student " << i + 1 << " | " << sMark[i] << " | "
                      << sLevel[2] << std::endl;
        }
        else if (sMark[i] < 80)
        {
            std::cout << "Student " << i + 1 << " | " << sMark[i] << " | "
                      << sLevel[3] << std::endl;
        }
        else if (sMark[i] <= 100)
        {
            std::cout << "Student " << i + 1 << " | " << sMark[i] << " | "
                      << sLevel[4] << std::endl;
        }
        else
        {
            std::cout << "Student " << i + 1 << " | "
                      << "Invalid Mark" << std::endl;
        }
    }
}