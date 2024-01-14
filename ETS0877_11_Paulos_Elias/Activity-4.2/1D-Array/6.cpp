#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    constexpr int maxsz = 100;
    float marks[maxsz];

    int sz = 0; // actual size
    cout<<"Enter student marks(Not more than 100 in number). Press Enter and then CTRL+D when done.\n";
    while (sz < maxsz && cin>>marks[sz]) ++sz;

    cout<<left<<setw(3)<<"No"<<setw(6)<<"Score"<<"Status"<<endl
        <<setw(3)<<"=="<<setw(6)<<"====="<<"======"<<endl;
    for (int i = 0; i<sz; ++i){
        cout<<left<<setw(3)<<i+1<<setw(6)<<marks[i];
        if (marks[i]<40)
            cout<<"Fail"<<endl;
        else if (marks[i]<50)
            cout<<"Poor"<<endl;
        else if (marks[i]<60)
            cout<<"Fair"<<endl;
        else if (marks[i]<80)
            cout<<"Very Good"<<endl;
        else
            cout<<"Excellent"<<endl;
    }

    return 0;
}
