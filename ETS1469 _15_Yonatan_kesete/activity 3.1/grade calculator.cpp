#include<iostream>
using namespace std;
int main(){
    int test,quiz,project,assignment,final_exam;
    cout<<"enter test (out of 15):";
    cin>>test;
    cout<<"enter quiz(out of 5):";
    cin>>quiz;
    cout<<"enter project(out of 20):";
    cin>>project;
    cout<<"enter assignment(out of 10):";
    cin>>assignment;
    cout<<"enter final exam(out of 50):";
    cin>>final_exam;
    int mark=test+quiz+project+assignment+final_exam;
    if(mark<30)
        cout<<"F"<<endl;
    else if(mark<45)
        cout<<"D"<<endl;
    else if(mark<55)
        cout<<"C"<<endl;
    else if(mark<60)
        cout<<"C+"<<endl;
    else if(mark<75)
        cout<<"B"<<endl;
    else if(mark<80)
        cout<<"B+"<<endl;
    else if(mark<90)
        cout<<"A"<<endl;
    else if(mark<100)
        cout<<"A+"<<endl;
        else
            cout<<"invalid input";
return 0;
}
