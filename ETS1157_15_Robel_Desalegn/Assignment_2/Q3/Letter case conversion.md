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
2. Algorithm 
   1. Start
   1. Prompt user to input a letter
   1. Read input letter
   1. Read user input into letter
   1. If letter is uppercase: Convert letter to lowercase
   1. Else if letter is lowercase : Convert letter to uppercase
   1. Else: Print "Not a letter"
   1. Print converted letter
   1. End
2. Program Design
   1. Import cctype library
   1. Declare letter variable (char)
   1. Print a prompt for user’s input "Enter a letter: "
   1. Read user input into letter
   1. If isupper(letter) 
   1. Print converted lowercase letter using tolower()
   1. Else if islower(letter) 
   1. Print converted uppercase letter using toupper()
   1. Else 
   1. Print "Not a letter"


