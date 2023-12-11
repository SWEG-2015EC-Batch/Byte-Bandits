#include <iostream>

int main() {
  char ch;
  
  std::cout << "Enter a character: ";
  std::cin >> ch;

  if(ch >= 'A' && ch <= 'Z') {
    std::cout << "It is an Upper case character"; 
  }
  else if(ch >= 'a' && ch <= 'z') {
    std::cout << "It is a Lower case character";
    
    switch(ch) {
      case 'a': 
      case 'e':
      case 'i':  
      case 'o':
      case 'u':
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