// grade calculator
#include <iostream>
using namespace std;

int main()
{
    float mark;
    string grade;

    cout << "enter your total mark: " << endl;
    cin >> mark;

    if ((mark > 100) || (mark < 0))
    {
        cout << "Invalid entry";
    }

    else
    {

        if (mark >= 90)
        {
            grade = "A+";
        }
        else if (mark >= 80)
        {
            grade = "A";
        }

        else if (mark >= 75)
        {
            grade = "B+";
        }

        else if (mark >= 60)
        {
            grade = "B";
        }

        else if (mark >= 55)
        {
            grade = "C+";
        }

        else if (mark >= 45)
        {
            grade = "C";
        }

        else if (mark >= 30)
        {
            grade = "D";
        }

        else
            grade = "F";

        cout << "your grade: " << grade;
    }
}