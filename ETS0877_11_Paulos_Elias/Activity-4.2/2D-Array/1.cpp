#include <iostream>

using namespace std;

int main(){
    constexpr int maxsz = 100;
    int first[maxsz], second[maxsz];
    int sz = 0;

    cout<<"How many numbers in each list? (1 - 100)"<<endl;
    cin>>sz;
    
    cout<<"Enter two lists\n";
    cout<<"First list\n";
    for (int i = 0; i<sz; ++i)
        cin>>first[i]; 

    cout<<"Second list\n";
    for (int i = 0; i<sz; ++i)
        cin>>second[i]; 

    for (int i = 0; i<sz; ++i) {
        if (first[i] != second[i]) {
            cout<<"\nLists are not identical!"<<endl;
            return 0;
        }
    }

    cout<<"\nLists are indentical"<<endl;
    return 0;
}
