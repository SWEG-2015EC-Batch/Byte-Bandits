#include <iostream>
using namespace std;
int main()
{
float height, weight, BMI ;
cout<<"enter your height in meter\n";
cin>>height;
cout<<"enter your weight in kilogram\n";
cin>>weight;
BMI=weight/(height*height);

cout<<"your BMI is "<<BMI;

    return 0;
}
