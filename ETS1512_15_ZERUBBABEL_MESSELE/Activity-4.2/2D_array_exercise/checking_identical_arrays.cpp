//program that checks whether two one dimensional arrays of the same size are identical (have the same elements) or not.
//By: Zerubbabel

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" enter the size of the arrays "<<endl;
    cin>>n;

    int array1[n],array2[n];

    for(int i=0; i<n; i++){
        cout<<"enter the "<<i+1<<"element in the 1st array";
        cin>>array1[i];
    }
    for(int i=0; i<n; i++){  
        cout<<"enter the "<<i+1<<"element in the 2nd array";
        cin>>array2[i];
    }
    for(int i=0; i<n; i++){           
        if(array1[i]!=array2[i]){
        cout<< "they are not equal"<<endl;
        return 0;
        }          
    }
    cout<<"They are equal"<<endl;
    return 0; 
}