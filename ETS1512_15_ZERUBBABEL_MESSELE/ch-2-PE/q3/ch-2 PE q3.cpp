
#include <iostream>
#include <cctype>

int main(){

	char letter = '\0', n_letter = '\0';

	std::cout << "Enter a character and its case will be inverted." << std::endl;
	std::cin >> letter;
	
	// not all characters are letters
	if( !isalpha(letter) ){
		std::cout << "That's not a letter!" << std::endl;

		return 1;
	}

	if( islower(letter) ){
		n_letter = toupper(letter);
	}
	else{
		n_letter = tolower(letter);
	}

	std::cout << "The flipped letter is: " << n_letter << std::endl;

	return 0;
}
