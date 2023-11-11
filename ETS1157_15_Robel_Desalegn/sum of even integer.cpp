#include <iostream>
using namespace std;

int main(){
  int sum {0}, min {},max {};
  cout << "Enter the minimum number: ";
  cin >> min;
  cout << "Enter the maximun number: ";
  cin >> max;

  for (int num=min; num<=max; num += 2){
    sum = sum + num;
  }
  cout << "The sum of even integers from " << min << " to " << max << " is " << sum;

  return 0;
}
