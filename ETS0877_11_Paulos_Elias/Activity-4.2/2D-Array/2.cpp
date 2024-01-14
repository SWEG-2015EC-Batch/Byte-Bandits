#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    constexpr int bsz = 100;
    int grid[bsz][bsz];
    int result[2][bsz] {}; // first row is products of ith row, second is sums of ith column
    int m, n; // mxn actual dimensions
    
    cout<<"What is the dimension(mxn) of the matrix? Enter two numbers 1-100 each.\n";
    cin>>m>>n;

    cout<<"\nFill the matrix\n";
    for (int i = 0; i<m; ++i) {
        cout<<"Row "<<i+1<<"\n";
        for ( int j = 0; j<n; ++j)
            cin>>grid[i][j];
        cout<<"\n";
    }

    cout<<"\n";
    for (int i = 0; i<m; ++i) {
            result[0][i] = 1; // make initial 1 before multiplication

            for ( int j = 0; j<n; ++j) {
                cout<<left<<setw(10)<<grid[i][j];
                result[0][i] *= grid[i][j];
                result[1][j] += grid[i][j];
        }
        cout<<setw(2)<<"*"<<result[0][i]<<endl;
    }
    for (int j = 0; j<n; ++j) 
        cout<<setw(10)<<"+";

    cout<<"\n";
    for (int j = 0; j<n; ++j) 
        cout<<setw(10)<<result[1][j];

    return 0;
}
