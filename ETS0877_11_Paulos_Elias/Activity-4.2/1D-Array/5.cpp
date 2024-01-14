#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float volts[] {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    for(int i = 0; i<9;){
        for (int j = 0; j<3; ++j, ++i)
            cout<<left<<setw(10)<<volts[i];
        cout<<endl;
    }

    return 0;
}
