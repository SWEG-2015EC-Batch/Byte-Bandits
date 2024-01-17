#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout<<left;
    for (int k = 0; k<36; ++k) cout<<"_";
    cout<<endl;
    for (int i = 0; i<5; ++i) {
        cout<<"|";
        for (int j = 0; j<5; ++j) { cout<<setw(6)<<"Paulo"<<"|";} 
        cout<<endl;
        for (int k = 0; k<36; ++k) if (k%7==0) cout<<"|"; else cout<<"_";
        cout<<endl;
    }
    return 0;
}
