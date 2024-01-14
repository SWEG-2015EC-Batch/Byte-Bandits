//program that read total mark of a student and print the score level with the mark in tabular format.
//Score status :-  score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail.
//By:Zerubbabel

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number of student."<<endl;
    cin>>num;
    int student[num];

    for(int i=0; i<num; i++){
      
        cout<<"enter the "<<i+1<<" person score"<<endl;
        cin>>student[i];
    }

    for(int i=0; i<num; i++){
        switch(student[i]){

            case 80 ... 100 :
                cout<<student[i]<<"\t Excellent"<<endl;
                break;
            case 60 ... 79 :
                cout<<student[i]<<"\t Very good"<<endl;
                break;
            case 50 ... 59 :
                cout<<student[i]<<"\t Fair"<<endl;
                break;
            case 40 ... 49 :
                cout<<student[i]<<"\t poor"<<endl;
                break;
            case 0 ... 39 :
                cout<<student[i]<<"\t fail"<<endl;
                break;
            default :
                cout<<"you have entered wrong mark interval."<<endl;
        }    
        
    }
}
    
