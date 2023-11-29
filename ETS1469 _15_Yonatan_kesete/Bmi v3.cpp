#include<iostream>
#include<cmath>
using namespace std;
int main(){ 
cout<<"number of person:";
int number;
cin>>number;
for(int i=1;i<=number;i++){ 
cout<<"person"<<i<<endl;
cout << "enter weight: ";
    double weight;
    cin >> weight;
    cout << "enter height: ";
    double height;
    cin >> height;
    cout<<"gender: ";
    char gender;
    cin>>gender;
    
    double body_mass = pow(height, 2);
    double body_mass_index = weight / body_mass;
    cout << "your Body Mass index is: " << body_mass_index << endl;
   if(gender=='m'||gender=='M')
  cout<<"Male"<<endl;
  else if(gender=='f'||gender=='F')
  cout<<"Female"<<endl;
  else
  cout<<"error"<<endl;
    if(gender=='m'){
       if(body_mass_index<20.5)
       cout<<"under weight";
       else if(body_mass_index<25)
       cout<<"normal weight";
       else if(body_mass_index<30)
       cout<<"over weight";
       else
       cout<<"obesity"<<endl;
       }
  if(gender=='f'){
       if(body_mass_index<18.5)
       cout<<"under weight";
       else if(body_mass_index<24)
       cout<<"normal weight";
       else if(body_mass_index<30)
       cout<<"over weight";
       else
       cout<<"obesity"<<endl; 
       } 
  } 
       
  return 0;

}
	
