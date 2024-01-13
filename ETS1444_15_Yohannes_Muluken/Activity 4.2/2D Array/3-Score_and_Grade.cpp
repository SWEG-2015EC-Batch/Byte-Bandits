// Printing total mark of a student and grade
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cout << "for how many number of students do you want to calculate grade: ";
    cin >> num;
    float marks[num][6];
    string grade[num];

    for (size_t i = 0; i < num; i++)
    {
        cout << "Data for the " << (i + 1) << "th student \n";
        cout << "enter the test result(10%): ";
        cin >> marks[i][0];
        cout << "enter the assignment result(15%): ";
        cin >> marks[i][1];
        cout << "enter the quiz result(5%): ";
        cin >> marks[i][2];
        cout << "enter the project result(20%): ";
        cin >> marks[i][3];
        cout << "enter the final exam result(50%): ";
        cin >> marks[i][4];

        marks[i][5] = marks[i][0] + marks[i][1] + marks[i][2] + marks[i][3] + marks[i][4];
    }

    for (size_t i = 0; i < num; i++)
    {
        if (marks[i][5] >= 80)
        {
            grade[i] = "Exellent";
        }
        else if (marks[i][5] >= 60)
        {
            grade[i] = "Verry Good";
        }
        else if (marks[i][5] >= 50)
        {
            grade[i] = "Fair";
        }
        else if (marks[i][5] > 40)
        {
            grade[i] = "Poor";
        }
        else
        {
            grade[i] = "Fail";
        }
    }

    cout << setw(15);
    cout << "total marks";
    cout << setw(15) << "grade" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << setw(15);
        cout << marks[i][5];
        cout << setw(15);
        cout << grade[i];
        cout << endl;
    }
}