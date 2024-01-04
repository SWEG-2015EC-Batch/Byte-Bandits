// This program prints out the marks of students with the score level in a tabular format
// by Robeil

#include <iostream>

int main()
{
    int stud;
    std::cout << "Enter the amount of students:";
    std::cin >> stud;

    int sMark[stud];

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
                      << " Fail " << std::endl;
        }
        else if (sMark[i] < 50)
        {
            std::cout << "Student " << i + 1 << " | " << sMark[i] << " | "
                      << " Poor " << std::endl;
        }
        else if (sMark[i] < 60)
        {
            std::cout << "Student " << i + 1 << " | " << sMark[i] << " | "
                      << " Fair" << std::endl;
        }
        else if (sMark[i] < 80)
        {
            std::cout << "Student " << i + 1 << " | " << sMark[i] << " | "
                      << " Very Good " << std::endl;
        }
        else if (sMark[i] <= 100)
        {
            std::cout << "Student " << i + 1 << " | " << sMark[i] << " | "
                      << " Excellent " << std::endl;
        }
        else
        {
            std::cout << "Student " << i + 1 << " | "
                      << "Invalid Mark" << std::endl;
        }
    }
}