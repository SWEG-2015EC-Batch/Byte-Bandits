// This program calculates the power of a number taking base and exponent from the user
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
  double x, y, result;

  cout << "Enter x: ";
  cin >> x;
  cout << "Enter y: ";
  cin >> y;
  
  result = pow(x, y);
  
  cout << x << "^" << y << " = " << result << endl;
  return 0;
}
