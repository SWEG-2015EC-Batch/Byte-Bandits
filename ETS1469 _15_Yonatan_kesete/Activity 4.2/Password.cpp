#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    const int MAX_LEN = 100;
    char pass[MAX_LEN] = "lkjhgfdsa@123";

    char input[MAX_LEN];

    cout << "Enter password: ";
    cin.getline(input, MAX_LEN);

    int trial = 3;

    while ((strcmp(input, pass) != 0) && trial > 1)
    {
        cout << "Incorrect password! Please re-enter " << trial - 1 << " chances remaining" << endl;
        cout << "Enter password: ";
        cin.getline(input, MAX_LEN);
        --trial;
    }

    if (strcmp(input, pass) == 0)
    {
        cout << "Correct Password!";
    }
    else
    {
        cout << "Out of chances. Quitting...." << endl;
    }

    return 0;
}
