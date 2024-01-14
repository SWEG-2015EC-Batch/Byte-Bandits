#include <iostream>
using namespace std;

int main(){
    int num[8],sum=0,average;
    for(int i=0; i<8; i++){
        cout<<" enter the "<<i+1<<" number"<<endl;
        cin>>num[i];
        sum+=num[i];
    }
    average=sum/sizeof(num);
    cout<<"the sum of the numbers is "<<sum<<" and the average is "<<average;

    return 0;
}    