1. Problem Description
- Write a program that checks if a given character entered by the user is an alphabet, number, or special symbol.

2. Problem Analysis 
Input: 
    - Character entered by user
Process:
    - Read input character from user
    - Check if character is:
    - Alphabet (A-Z or a-z)
    - Digit (0-9)
    - Special symbol (anything other than alphabet or digit)
    - Print whether input character is alphabet, digit, or special symbol
Output: 
    - "Alphabet" if ch is A-Z or a-z
    - "Digit" if ch is 0-9
    - "Special symbol" for any other character

3. Algorithm
    1. Start 
    2. prompt the user to input a character
    3. Read input character from the user into ch
    4. Check if ch >= 'A' and ch <= 'Z', print "Alphabet"
    5. Else check if ch >= 'a' and ch <= 'z', print "Alphabet" 
    6. Else check if ch >= '0' and ch <= '9', print "Digit"
    7. Else print "Special symbol"
    8. Stop

4. Algorithm(Flowchart)

```mermaid
graph LR;
id1([Start]);
id2[/Read character as ch/];
id3{ch >= 'A' and ch <= 'Z'?};
id4{ch >= 'a' and ch <= 'z'?};
id5{ch >= '0' and ch <= '9'?};
id6[/Print it is an Alphabet/];
id7[/Print it is a digit/];
id8[/Print it is a special symbol/];
id9([End]);
id1-->id2;
id2-->id3;
id3--yes-->id6;
id3--no-->id4;
id4--yes-->id6;
id4--no-->id5;
id5--yes-->id7;
id5--no-->id8;
id6-->id9;
id7-->id9;
id8-->id9;

```