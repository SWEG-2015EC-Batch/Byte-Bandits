#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    constexpr int n = 2, m = 3;
    int first[n][m], second[n][m];
    
    cout<<"Enter two matrices of "<<n<<"x"<<m<<" size.\n(First)\n";
    for(int i = 0; i<n; ++i)
        for(int j = 0; j<m; ++j)
            cin>>first[i][j];

    // clear inputline
    cin.clear();
    cout<<"\nSecond)\n";
    for(int i = 0; i<n; ++i)
        for(int j = 0; j<m; ++j)
            cin>>second[i][j];

    cout<<"The sum of matrices\n";
    for(int i = 0; i<n; ++i) {
        for(int j = 0; j<m; ++j)
            cout<<left<<setw(10)<<(first[i][j] += second[i][j]);
        cout<<endl;
    }

    return 0;
}
