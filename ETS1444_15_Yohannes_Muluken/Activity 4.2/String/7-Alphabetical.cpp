// Sort names in alphabetical order
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int num;
    cout << "How many names will be sorted: ";
    cin >> num;
    string names[num];

    cout << "Enter all the names: \n";
    for (size_t i = 0; i < num; i++)
    {
        cin >> names[i];
    }

    for (int i = 0; i < num - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < num; j++)
        {
            if (strcmp(names[j].c_str(), names[minIndex].c_str()) < 0)
            {
                minIndex = j;
            }
        }
        string temp = names[i];
        names[i] = names[minIndex];
        names[minIndex] = temp;
    }
    cout << endl;

    cout << "Names in alphabetical order:\n";
    for (int i = 0; i < num; i++)
    {
        cout << names[i] << "\n";
    }
}