BMI

1. Problem Description
- Write a program that calculates the BMI of a person. The program should read inputs from the user such as weight and height.

2. Problem Analysis
- Input: height and weight.
- Process: BMI = weight/(height\*height)
- Output: BMI

3. Algorithm
  - Start
  - Read weight and height
  - Calculate BMI = weight/(height\*height)
  - print BMI
  - End

Algorithm: Flowchart
```mermaid
graph LR;
id1([Start]);
id2[/Read weight, height/];
id3(BMI = weight/height * height);
id4[/Print BMI/];
id5([End]);
id1-->id2;
id2-->id3;
id3-->id4;
id4-->id5;
```

4. Program Design
  1. Declare variables for height, weight, and BMI
  2. Print prompts the user to input weight and height
  3. Read user input into weight and height variables
  4. Calculate BMI by dividing weight by height squared
  5. Print output message with calculated BMI value
  6. End

