#include <iostream>
using namespace std;
int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = {{ 10, 11, 12, 13 }, { 20, 21, 22, 23 }, { 30, 31, 32, 33 }};

    cout<<"A. Addresses of elements\n";

    for (int i = 0; i<5; ++i) cout<<balance+i<<" ";
    cout<<"\n\n";

    for (int i = 0; i<3; ++i) {
        for (int j = 0; j<4; ++j)
            cout<<*(arr+i)+j<<" ";
        cout<<"\n";
    }
    cout<<"\n\nB. Elements\nUsing the pointer itself\n\n";
    
    for (int i = 0; i<5; ++i)
        cout<<*(balance+i)<<" ";
    cout<<"\n";
    for (int i = 0; i<3; ++i) {
        for (int j = 0; j<4; ++j)
            cout<<*(*(arr+i)+j)<<" ";
        cout<<"\n";
    }

    cout<<"\n\nUsing another pointer\n\n";
    double *bal = balance;
    for (int i = 0; i<5; ++i) cout<<*bal++<<" ";
    cout<<"\n\n";
    int *array = &(arr[0][0]);
    for (int i = 0; i<3; ++i) {
        for (int j = 0; j<4; ++j) cout<<*array++<<" ";
        cout<<"\n";
    }

    return 0;
}
