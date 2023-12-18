// grade calculator
#include <iostream>
using namespace std;

int main()
{
    float mark, test, quiz, project, assignment, final;
    string grade;

    cout << "enter your test result(15%): " << endl;
    cin >> test;
    if ((test > 15) || (test < 0))
    {
        cout << "Invalid entry";
    }
    else
    {

        cout << "enter your quiz result(5%): " << endl;
        cin >> quiz;
        if ((quiz > 5) || (quiz < 0))
        {
            cout << "Invalid entry";
        }
        else
        {

            cout << "enter your project result(20%): " << endl;
            cin >> project;
            if ((project > 20) || (project < 0))
            {
                cout << "Invalid entry";
            }
            else
            {

                cout << "enter your assignment result(10%): " << endl;
                cin >> assignment;
                if ((assignment > 10) || (assignment < 0))
                {
                    cout << "Invalid entry";
                }
                else
                {

                    cout << "enter your final exam result(50%): " << endl;
                    cin >> final;
                    if ((final > 50) || (final < 0))
                    {
                        cout << "Invalid entry";
                    }

                    else
                    {

                        mark = test + quiz + project + assignment + final;

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
                }
            }
        }
    }
}