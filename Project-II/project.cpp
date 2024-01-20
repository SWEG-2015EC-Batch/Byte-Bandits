#include <cstdlib>
#include <iostream>

using  namespace std;

int main() {
    int n;

    while (true) {
        cout << "Enter a number (between 1 and 9): ";
        cin >> n;

        if (n >= 1 && n <= 9) {
            break; 
        } else {
            cout << "Invalid input. Try a number between 1 and 9.\n";
        }
    }

    for (int i = n; i>=-n; --i) {
        int m = abs(i);
        for (int j = n-m; j>0; --j)
            cout<<"  ";
        for (int j = m; j>=-m; --j)
            cout<<abs(j)<<" ";
        cout<<endl;
    }

    return 0;
}
