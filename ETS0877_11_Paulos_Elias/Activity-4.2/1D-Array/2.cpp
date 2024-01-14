// Reads in eight integers, prints them and their average
#include <iostream>

using namespace std;

int main(){
    constexpr int sz = 8;
    int nums[sz]; 
    float cuml = 0;

    cout<<"Enter eight integers: ";
    for(int i = 0; i<sz; i++){
        cin>>nums[i];
        cuml += nums[i];
    }
    cuml /=sz;
    cout<<"The numbers:"<<endl;
    for(int n: nums)
        cout<<n<<" ";
    cout<<"\nAverge: "<<cuml<<endl;

    return 0;
}
