#include <cstdlib>
#include <iostream>

using  namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if (n<1) {
        cout<<"Number too low. Try a number greater than 1.\n";
        exit(1);
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
