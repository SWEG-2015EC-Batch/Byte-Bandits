Letter case conversion

1. Problem Description
- Write a program to convert a letter input by user to opposite case (upper to lower or lower to upper).
2. Problem Analysis
- Input: A letter (char)
- Process: 
  - Check if letter is uppercase using isupper()
  - If yes, convert to lowercase using tolower()
  - Check if letter is lowercase using islower()
  - If yes, convert to uppercase using toupper()
- Output: The converted letter in opposite case
3.  Algorithm 
  1. Start
  2. Prompt user to input a letter
  3. Read input letter
  4. Read user input into letter
  5. if letter is uppercase: Convert letter to lowercase
  6. Else if letter is lowercase : Convert letter to uppercase
  7. Else: Print "Not a letter"
  8. Print converted letter
  9. End
4. Program Design
   1. Import cctype library
   2. Declare letter variable (char)
   3. print a prompt for user’s input "Enter a letter: "
   4. Read user input into letter
   5. If isupper(letter) 
   6. Print converted lowercase letter
using tolower()
   8. Else if islower(letter) 
   &. Print converted uppercase letter using toupper()
   9. Else 
   10. Print "Not a letter"


