#include <cctype>
#include <iostream>

int main(){
    char symbol;

    std::cout << "Enter a character: ";
    std::cin >> symbol;

    if(isalpha(symbol)){
        std::cout << symbol << " is a letter." << std::endl;
        if(isupper(symbol)){
            std::cout << symbol << " is in uppercase." << std::endl;
        }
        else{
            std::cout << symbol << " is in lowercase." << std::endl;
        }

        switch (symbol){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                std::cout << symbol << " is a vowel." << std::endl;
                break;
            default:
                std::cout << symbol << " is a consonant." << std::endl;
        }
    }
    else if(isdigit(symbol)){
        std::cout << symbol << " is a digit." << std::endl;
        
        switch (symbol) {
            case '0':
            case '2':
            case '4':
            case '6':
            case '8':
                std::cout << symbol << " is even." << std::endl;
                break;
            default:
                std::cout << symbol << " is odd." << std::endl;
        }
    }
    else if(ispunct(symbol)){
        std::cout << symbol << " is a special character." << std::endl;
    }
    else {
        std::cout << " An unknow character." << std::endl;
    }

    return 0;
}
