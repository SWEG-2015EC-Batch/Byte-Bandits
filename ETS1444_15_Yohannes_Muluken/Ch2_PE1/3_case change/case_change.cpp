//converting uppercase to lowercase and vice versa
#include <iostream>
#include <cctype>
using namespace std;

int main(){

	char letter , result;

	cout << "please enter a letter to change to uppercase or lowercase: " << endl;
	cin >> letter;
	
	if( !isalpha(letter) ){
		cout << "please enter a valid letter" << endl;
	}
    else{

	if( islower(letter) ){
        result = toupper(letter);
        cout << result << endl;
	}
	else{
		 result = tolower(letter);
        cout << result << endl;
	}
    }

	return 0;
}