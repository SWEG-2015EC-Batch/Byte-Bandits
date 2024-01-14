//a C++ program that read and adds equivalent elements of the two-dimensional arrays
//by: Zerubbabel
#include <iostream>
using namespace std;

int main(){
    int first[10][10],second[10][10],sum[10][10],row,column;
    
    cout<<"enter the number of row"<<endl;
    cin>>row;
    cout<<"enter the number of column"<<endl;
    cin>>column;

    

    for (int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<"enter the "<<i+1<<" row and the "<<j+1<<" column of the first data"<<endl;
            cin>>first[i][j];
        }
    }
    
    for (int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<"enter the "<<i+1<<"th row and the "<<j+1<<" column of the second data"<<endl;
            cin>>second[i][j];
        }
    }

   
    for (int i=0; i<row; i++){
        for(int j=0; j<column; j++){
        sum[i][j]=first[i][j]+second[i][j];

        cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
    }
      
   return 0; 
}