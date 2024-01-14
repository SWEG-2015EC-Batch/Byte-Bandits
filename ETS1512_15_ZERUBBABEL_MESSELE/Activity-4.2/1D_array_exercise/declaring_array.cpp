//program to declare a 4-by-5 array of integers and initialize with the data listed below
//by: Zerubbabel

#include <iostream>
using namespace std;

int main(){
    int data[4][5]={16,22, 99, 4, 18, -258, 4,101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};

    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            cout<<data[i][j]<<"\t";
        }
    cout<<endl;
    }   

    return 0;
}