1. Problem Description

- We want to write a C++ program to reverse a number entered by the user. For example, if the user enters 12345, the program should output 54321.

2. Problem Analysis:

   1. Input: A positive integer number
   2. Process:
      - Initialize a variable called reversed_number to store the reversed number, initialize it to 0.
      - Use a while loop to repeatedly extract the last digit from num and add it to reversed_number
      - Break when num reaches 0
   3. Output: Print out reversed_number

3. Algorithm:

   1. Start
   2. Get integer num as input from the user
   3. Initialize reversed_number to 0
   4. While num > 0
      - Remainder = num % 10
      - reversed_number = reversed_number \* 10 + remainder
      - num = num / 10
   5. Print reversed_number
   6. End

4. Algorithm(Flowchart)

```mermaid
graph LR;
id1([Start]);
id2[/Read number/];
id3(initialize reversed_number to 0);
id4{ is number > 0?};
id5(remainder = number % 10);
id6(reversed_number = reversed_number \* 10 + remainder);
id7(number = number/10);
id8[/print reversed_number + message/]
id9([End]);
id1-->id2;
id2-->id3;
id3-->id4;
id4--yes-->id5;
id4--no-->id8;
id5-->id6;
id6-->id7;
id7-->id4;
id8-->id9;
```