/* This program checks if a character is alphabet and further if it's a vowel or consonant.
It then checks if it's a digit and further even or odd, if it's not an alphabet. At the end if it's
not both an alphabet and a digit, it is a special character */
//by Robeill

#include <iostream>

int main() {
  char ch;
  
  std::cout << "Enter a character: ";
  std::cin >> ch;

  if(ch >= 'A' && ch <= 'Z') {
    std::cout << "It is an Upper case character"; 
    
    switch(ch) {
      case 'a': 
      case 'e':
      case 'i':  
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        std::cout << " and Vowel" << std::endl;
        break;
      default: 
        std::cout << " amd Consonant" << std::endl;
    }
    
  }
  else if(ch >= 'a' && ch <= 'z') {
    std::cout << "It is a Lower case character";
    
    switch(ch) {
      case 'a': 
      case 'e':
      case 'i':  
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        std::cout << " and Vowel" << std::endl;
        break;
      default: 
        std::cout << " amd Consonant" << std::endl;
    }
    
  }  
  else if(ch >= '0' && ch <= '9') {
    std::cout << "It is a Digit ";
    
    if((ch - '0') % 2 == 0) {
      std::cout << "and Even number." << std::endl; 
    }
    else {
      std::cout << "and Odd number." << std::endl;
    }
  }
  else {
    std::cout << "It is a Special character" << std::endl; 
  }

  return 0;
}