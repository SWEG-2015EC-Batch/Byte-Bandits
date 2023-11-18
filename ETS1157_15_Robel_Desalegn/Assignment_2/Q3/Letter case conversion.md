Letter case conversion

1. Problem Description
- Write a program to convert a letter input by the user to the opposite case (upper to lower or lower to upper).
2. Problem Analysis
- Input: A letter (char)
- Process: 
- Check if the letter is uppercase using isupper()
- If yes, convert to lowercase using tolower()
- Check if the letter is lowercase using islower()
- If yes, convert to uppercase using toupper()
- Output: The converted letter in the opposite case
3.  Algorithm
  -  Start
  - Prompt the user to input a letter
  -  Read user input into the letter
  -  if letter is uppercase: Convert the letter to lowercase
  -  Else if the letter is lowercase: Convert the letter to uppercase
  -  Else: Print "Not a letter"
  -  Print converted letter
  -  End

Algorithm: Flowchart
```mermaid
graph LR;
id1([Start]);
id2[/Read letter/];
id3{Is uppercase?};
id4{Is uppercase?};
id5(To lowercase);
id6(To uppercase);
id7[/Print character/];
id8[/Print Not a letter/];
id9[/Print Not a letter/];
id10([End]);
id1-->id2;
id2-->id3;
id2-->id4;
id3--yes-->id5;
id4--yes-->id6;
id5-->id7;
id6-->id7;
id3--no-->id8;
id4--no-->id9;
id7-->id10;
id8-->id10;
id9-->id10;

```

4. Program Design
   1. Import cctype library
   2. Declare letter variable (char)
   3. print a prompt for the user’s input "Enter a letter: "
   4. Read user input into the letter
   5. If isupper(letter) 
   6. Print converted lowercase letter
using tolower()
   8. Else if islower(letter) 
   &. Print converted uppercase letters using toupper()
   9. Else 
   10. Print "Not a letter"


