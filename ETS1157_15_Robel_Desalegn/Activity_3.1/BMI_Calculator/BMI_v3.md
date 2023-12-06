BMI_v2

1. Problem Description

- Write a program that calculates the BMI of a person. The program should read inputs from the user such as number of person weight, height, and gender.

2. Problem Analysis

   - Input: height and weight.
   - Process: BMI = weight/(height\*height)
   - Output: BMI

3. Algorithm
   1. Start
   2. Declare variables
      - height, weight, gender,number of person
   3. prompt the user to enter height, weight, number of person, and gender
   4. Read user input on height and weight
   5. Calculate BMI
      - BMI = weight / (height \* height)
   6. If BMI > 30
      - Print BMI + message
   7. else
      - read user input into gender
   8. If gender is "male"
      - Print BMI + message
   9. Else If gender is "female"
      - Print "BMI + message
   10. Read user input into number of person
   11. If i < number of person
       - go back to step 3
   12. else
       - end

Algorithm: Flowchart

```mermaid
graph LR;
id1([Start]);
id2[/Read height,weight,gender/];
id3(BMI = weight/height * height);
id4{BMI > 30?};
id5[/Print BMI + message/];
id6{Male or Female?};
id7{Male};
id8{Female};
id9(check the corresponding weight class);
id10([End]);
id11[/Read number of person/];
id12{is i < num_person true?};
id13{neither};
id14[/Invalid gender!/]
id1-->id11;
id11-->id2;
id2-->id3;
id3-->id4;
id4--yes-->id5;
id4--no-->id6;
id6-->id7;
id6-->id8;
id6-->id13;
id13-->id14;
id14-->id10;
id7-->id9;
id8-->id9;
id9-->id5;
id5-->id12;
id12--yes-->id2;
id12--no-->id10;

```

```

4. Program Design
   1. Declare variables for height, weight, gender and BMI
   2. Print prompts the user to input weight, height and gender
   3. Read user input into weight and height variables
   4. Calculate BMI by dividing weight by height squared
   5. if BMI is greater than 30 print out a message with the calculated BMI
   6. Read user input for gender
   7. if gender is male print out a message with corresponding weight with his BMI
   8. if gender is female print out a message with corresponding weight with her BMI
   9. if user input invalid gender print out a message
   10. End
```
