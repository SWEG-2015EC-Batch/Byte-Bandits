#include <iostream>

using namespace std;

int main(){
    int frnd[5][5] {};
    frnd[0][1] = frnd[0][3] = frnd[0][4] = frnd[1][0] = frnd[1][2] = frnd[1][4]
         = frnd[2][1] = frnd[3][0] = frnd[3][4] = frnd[4][0] = frnd[4][1]
         = frnd[4][3] = 1;

    int count = 0;
    for (int i = 0; i<5; ++i)
        for (int j = 0; j<5; ++j)
            if(frnd[i][j])
                ++count;

    count /= 2;
    cout<<"There are "<<count<<" friendships."<<endl;

    return 0;
}
