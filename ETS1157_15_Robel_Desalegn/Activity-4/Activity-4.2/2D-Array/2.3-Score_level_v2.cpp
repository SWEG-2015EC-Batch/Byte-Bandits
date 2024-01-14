/* This program takes the test,quiz,assignment,project and final marks of a number of students and
prints out the total marks of students with the score level in a tabular format*/
// by Robeil

#include <iostream>

const int NUM_MARKS = 5;

int main()
{

    int numStudents;

    std::cout << "Enter number of students: ";
    std::cin >> numStudents;

    while (numStudents <= 0)
    {
        std::cout << "Invalid input. Re-enter number of students: ";
        std::cin >> numStudents;
    }

    int studentMarks[numStudents][NUM_MARKS];
    int sums[numStudents];
    std::string scoreLevels[numStudents];

    char MARKS[NUM_MARKS][11] = {"Test", "Quiz", "Assignment", "Project", "Final"};

    for (int i = 0; i < numStudents; i++)
    {

        int sum = 0;

        std::cout << "\nEnter marks for student " << i + 1 << "\n";

        for (int j = 0; j < NUM_MARKS; j++)
        {
            std::cout << MARKS[j] << ": ";
            std::cin >> studentMarks[i][j];
            sum += studentMarks[i][j];
        }

        sums[i] = sum;

        if (sum < 40)
        {
            scoreLevels[i] = "Fail";
        }
        else if (sum < 50)
        {
            scoreLevels[i] = "Poor";
        }
        else if (sum < 60)
        {
            scoreLevels[i] = "Fair";
        }
        else if (sum < 80)
        {
            scoreLevels[i] = "Good";
        }
        else if (sum <= 100)
        {
            scoreLevels[i] = "Excellent";
        }
        else
        {
            scoreLevels[i] = "Invalid";
        }
    }

    std::cout << "\nMarks of the Students\n";
    std::cout << "---------------------------------\n";
    std::cout << "Student No. | Total Marks | Level\n";

    for (int i = 0; i < numStudents; i++)
    {
        std::cout << i + 1 << "\t"
                  << "    |" << sums[i] << "\t \t"
                  << "  |" << scoreLevels[i] << "\n";
    }
}