#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    int count;
    cout << "enter the no of people: ";
    cin >> count;
    double data[count][2];
    double *ptrData[count][2];
    string name[count];
    string bmi[count];

    for (size_t i = 0; i < count; i++)
    {

        cout << "Data for the " << (i + 1) << " th person: \n";

        cout << "Enter full name: " << endl;
        cin >> name[i];

        cout << "Weight: ";
        cin >> data[i][0];
        cout << " Height: ";
        cin >> data[i][1];

        ptrData[i][0] = &data[i][0];
        ptrData[i][1] = &data[i][0];

        bmi[i] = to_string(*ptrData[i][0] / *ptrData[i][1]);
    }
    cout << endl;
    cout << left;

    cout << setw(20) << "\nfull name" << setw(10) << "weight" << setw(10) << "Height" << setw(10) << "BMI" << endl;

    for (size_t i = 0; i < count; i++)
    {
        cout << setw(20) << name[i] << setw(10) << data[i][0] << setw(10) << data[i][1] << setw(10) << bmi[i] << endl;
    }
}