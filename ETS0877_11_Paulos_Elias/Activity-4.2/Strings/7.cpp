#include <algorithm>
#include <iostream>
#include <vector>

using  namespace std;

int main() {
    constexpr int maxsz = 100;
    vector<string> names(maxsz);

    int sz;
    cout<<"How many names? (1-100)"<<endl;
    cin>>sz;

    cout<<"Enter the names"<<endl;
    for (int i = 0; i<sz; ++i)
        cin>>names[i];

    sort(names.begin(), names.begin()+sz);
    cout<<"\nNames sorted alphabetically\n";
    for(int i = 0; i<sz; ++i)
        cout<<names[i]<<"\n";

    return 0;
}
