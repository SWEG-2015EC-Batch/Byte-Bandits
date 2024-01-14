//program counts how many pairs of friends are represented in the array.
//By: Zerubbabel

#include<iostream>
using namespace std;

int main(){
    int num, count = 0;
    cout << "for how mamy people do you want to check friendship: ";
    cin >> num;

    char friends[num][num];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == j)
            {
                friends[i][j] = 'N';
            }
            else
            {
                cout << "are person " << i + 1 << " or " << j + 1;
                cout << " friends('Y' for yes and 'N' for no): ";
                cin >> friends[i][j];
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if ((friends[i][j] == 'Y') || (friends[i][j] == 'y'))
            {
                count++;
                cout << "* \t";
            }
            else
                cout << " \t";
        }
        cout << endl;
    }

    cout << "Number of friendships: " << (count / 2);
}