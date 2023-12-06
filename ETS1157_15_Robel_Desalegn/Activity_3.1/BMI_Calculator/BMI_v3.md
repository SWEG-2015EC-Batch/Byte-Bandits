BMI_v2

1. Problem Description

- Write a program that calculates the BMI of an n person. The program should read inputs from the user such as number of person weight, height, and gender.

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
   1. Declare variables for height, weight, gender and BMI
   2. prompt the user for number of person to calculate bmi for
   3. Print prompts the user to input weight, height and gender
   4. Read user input into weight and height variables
   5. Calculate BMI by dividing weight by height squared
   6. if BMI is greater than 30 print out a message with the calculated BMI
   7. Read user input for gender
   8. if gender is male print out a message with corresponding weight with his BMI
   9. if gender is female print out a message with corresponding weight with her BMI
   10. if user input invalid gender print out a message
   11. End
