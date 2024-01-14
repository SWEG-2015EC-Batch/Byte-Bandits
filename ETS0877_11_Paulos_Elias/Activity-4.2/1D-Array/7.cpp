#include <iostream>

using  namespace std;

int main(){
    constexpr int maxsz= 100;
    int nums[maxsz], sz = 0;

    cout<<"Enter integers. Press Enter and CTRL+D when done. Numbers beyond 100th element are ignored.\n";
    while (sz < maxsz && cin>>nums[sz]) ++sz;

    cout<<"Evens are: ";
    for (int i = sz-1; i>=0; --i)
        if (nums[i]%2 == 0)
            cout<<nums[i]<<" ";

    return 0;
}
