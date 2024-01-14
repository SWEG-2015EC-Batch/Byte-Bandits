#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int nums[3][4];

    cout<<"Fill in the array\n";
    for (int i = 0; i<3; ++i){
        cout<<"Row "<<i+1<<"\n";
        for (int j = 0; j<4; ++j)
            cin>>nums[i][j];
    }

    int sum = 0;
    cout<<left;
    for ( int i = 0; i<3; ++i) {
        for (int j = 0; j<4; ++j){
            if (nums[i][j]%2 == 0){
                sum += nums[i][j];
                cout<<setw(10)<<nums[i][j];
            }
            else {
                cout<<setw(10)<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nTotal Sum of Everns: "<<sum<<endl;

    return 0;
}
