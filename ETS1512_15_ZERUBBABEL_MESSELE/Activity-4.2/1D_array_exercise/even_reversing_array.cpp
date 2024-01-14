//program that store a list of number and print the even numbers in the array in reverse order they are entered.
//By: Zerubbabel

#include <iostream>
using namespace std;

int main() {  
   int n;
    cout << "Enter size of array: ";
    cin >> n;

    int num[n];

    
        for (int i = 0; i < n; i++){
            cout << "Enter " <<i+1<< " elements: ";
            cin >> num[i];
        }

    cout <<"\nEven numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] % 2 == 0)
        {
            cout << num[i] << " ";
        }

    }

    return 0;
}
