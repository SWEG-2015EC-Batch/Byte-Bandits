//This program a letter to its uppercase or lowercase equivalent
#include <iostream>
#include <cctype>

using namespace std;

int main() 
{
  char letter;

  cout << "Enter a letter: ";
  cin >> letter;

  if(isupper(letter)) {
    cout << "Lowercase: " << char(tolower(letter)) << endl;
  }
  else if(islower(letter)) {
    cout << "Uppercase: " << char(toupper(letter)) << endl;
  }
  else {
    cout << "Not a letter" << endl;
  }

  return 0;
}
