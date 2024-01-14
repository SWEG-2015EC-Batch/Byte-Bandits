#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    constexpr int maxsz = 100;
    float scores[maxsz][5];
    int sz;
    cout<<"How many students? ";
    cin>>sz;

    for (int i = 0; i<sz; ++i) {
        cout<<"Student "<<i+1<<endl;
        cout<<"Test: ", cin>>scores[i][0];
        cout<<"Assignment: ", cin>>scores[i][1];
        cout<<"Quiz: ", cin>>scores[i][2];
        cout<<"Project: ", cin>>scores[i][3];
        cout<<"Final: ", cin>>scores[i][4];
        cout<<endl;
    }

    cout<<left<<setw(3)<<"No"<<setw(10)<<"Score"<<"Status"<<endl
        <<setw(3)<<"=="<<setw(10)<<"====="<<"======"<<endl;
    for (int i = 0; i<sz; ++i) {
        float total = 0;
        for (int j = 0; j<5; ++j)
            total +=scores[i][j];

        cout<<setw(3)<<i+1<<setw(10)<<total;
        if (total < 40)
            cout<<"Fail"<<endl;
        else if (total < 50)
            cout<<"Poor"<<endl;
        else if (total < 60)
            cout<<"Fair"<<endl;
        else if (total < 80)
            cout<<"Very Good"<<endl;
        else
            cout<<"Excellent"<<endl;
    }

    return 0;
}
