// This progrsm calculates BMI of person based on weight and height
#include <iostream>
using namespace std;

int main()
{
  double height{}, weight{}, bmi{};
  
  cout << "Enter your weight in kg: ";
  cin >> weight;
  cout << "Enter your height in meters: ";
  cin >> height;


  bmi = weight/(height*height);
  cout << "Your BMI is " << bmi << endl;

  return 0;
}