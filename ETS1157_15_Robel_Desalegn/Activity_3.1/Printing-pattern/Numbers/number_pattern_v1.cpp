//This program print 10 - 49 in a order in a row and column
//by Robeill

#include <iostream>
using namespace std;

int main()
{

  int num = 10;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 11; j++)
    {
      cout << num << "\t";
      num++;
    }
    cout << "\n";
  }

  return 0;
}