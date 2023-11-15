#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;
int main() {
cout << "enter weight: ";
    double weight;
    cin >> weight;
    cout << "enter height: ";
    double height;
    cin >> height;
    double body_mass = pow(height, 2);
    double body_mass_index = weight / body_mass;
    cout << "your Body Mass index is: " << body_mass_index << endl;
    
    cout << "enter capacity in gallons: ";
    double gallons;
    cin >> gallons;
    cout << "miles per gallons: ";
    double miles;
    cin >> miles;
    double miles_without_refueling = miles * gallons;
    cout << "the automobile can be driven " << miles_without_refueling << " miles without refueling" << endl;
    
    cout<<"enter a letter:";
    char input;
    cin>>input;
    char lower= tolower(input);
    char upper= toupper(input);
    if(islower(input))
        cout<<upper<<endl;
    else if(isupper(input))
        cout<<lower<<endl;
    
    cout << "enter the base: ";
    double x;
    cin >> x;
    cout << "enter the exponent: ";
    double y;
    cin >> y;
    double final_result = pow(x, y);
    cout << final_result << endl;
    
    cout << "enter name :";
    string name;
    cin >> name;
    cout << "weekly working hours: ";
    double hour;
    cin >> hour;
    cout << "bonus rate per hour: ";
    double bonus_rate;
    cin >> bonus_rate;
    cout << "base salary: ";
    double salary;
    cin >> salary;
    double gross_salary = hour*salary;
    cout << "gross salary:$ " << gross_salary << endl;
    double pension_rate = 0.05;
    double tax_rate = 0.15;
    double total_rate=pension_rate+tax_rate;
    double net_salary = gross_salary-(salary*total_rate);
    cout << "net_salary:$"<<net_salary<<endl;
    double bonus_payment=bonus_rate*hour;
    cout<<"bonus payment :$"<<bonus_payment<<endl;
    
    cout<<"enter amount of data: ";
    double data;
    cin>>data;
double const transmit=960;
float time=data/transmit;
cout<<time<<endl;
    return 0;
}
