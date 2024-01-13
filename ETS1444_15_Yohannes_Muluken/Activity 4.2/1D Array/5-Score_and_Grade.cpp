// Printing total mark of a student and grade
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int num;
    cout << "for how many number of students do you want to calculate grade: ";
    cin >> num;
    float marks[num];
    string grade[num];

    for (size_t i = 0; i < num; i++)
    {
        cout << "total mark of the " << (i + 1) << " student:  ";
        cin >> marks[i];

        if (marks[i] >= 80)
        {
            grade[i] = "Exellent";
        }
        else if (marks[i] >= 60)
        {
            grade[i] = "Verry Good";
        }
        else if (marks[i] >= 50)
        {
            grade[i] = "Fair";
        }
        else if (marks[i] > 40)
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
        cout << marks[i];
        cout << setw(15);
        cout << grade[i];
        cout << endl;
    }
}