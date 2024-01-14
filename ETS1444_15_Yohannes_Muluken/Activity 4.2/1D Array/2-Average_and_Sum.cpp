// Input and find average and sum of eight integer numbers in an array
#include <iostream>
using namespace std;

int main()
{
    int temp[8];
    double sum = 0;
    int count;
    for (int i = 0; i < 8; i++)
    {
        cout << "enter the number: ";
        cin >> temp[i];
        sum += temp[i];
        count++;
    }

    double average = sum / count;
    cout << "sum: " << sum << endl;
    cout << "average: " << average;
}
