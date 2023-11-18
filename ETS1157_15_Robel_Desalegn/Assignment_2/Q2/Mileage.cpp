/*This program calculates the maximum number of miles an automobile can be driven
based on the capacity of its fuel tank and mile per gallon */
#include <iostream>
using namespace std;

int main() 
{
  double tank_capacity, mpg, max_miles;
  
  cout << "Enter the capacity of the fuel tank in gallons: ";
  cin >> tank_capacity;
  cout << "Enter the miles per gallon: ";
  cin >> mpg;
  
  max_miles = tank_capacity * mpg;
  
  cout << "The car can be driven " << max_miles << " miles before refueling." << endl;

  return 0;
}
