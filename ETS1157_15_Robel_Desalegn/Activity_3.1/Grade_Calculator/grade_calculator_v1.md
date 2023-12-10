1. Problem Description
- Write a program that converts a numeric mark entered by the user into its corresponding letter grade.

2. Problem Analysis  
Input:
    - mark - double to store the mark entered by the user
Process:
    - Read the mark from the user
    - Validate that the mark is between 0 and 100  
    - Use if-else-if statements to map the mark to a letter grade as per the following rules:
        - 0-29 = F
        - 30-44 = D 
        - 45-54 = C
        - 55-59 = C+
        - 60-74 = B
        - 75-79 = B+
        - 80-89 = A
        - 90-100 = A+
    - Print out the corresponding letter grade  
Output: 
- The letter grade corresponding to the mark entered by the user

3. Algorithm
    1. Start
    2. Print "Enter mark:"
    3. Read mark from user 
    4. Validate mark is between 0 and 100
    5. Use if-else-if ladder to determine letter-grade based on total mark
    6. Print "Your grade is: " + letter-grade
    7. Stop

4.Algorithm(Flowchart)
```mermaid
graph LR;
id1([Start]);
id2[/Read mark/];
id4{is mark < 0 or >100?};
id5{is mark < 30};
id6{is mark < 45};
id7{is mark < 55};
id8{is mark < 60};
id9{is mark < 75};
id10{is mark < 80};
id11{is mark < 90};
id12{is mark < 100};
id13[/print your grade is F/];
id14[/print your grade is D/];
id15[/print your grade is C/];
id16[/print your grade is C+/];
id17[/print your grade is B/];
id18[/print your grade is B+/];
id19[/print your grade is A/];
id20[/print your grade is A+/];
id21[/print Invalid mark/];
id22([End]);
id1-->id2;
id2-->id4;
id4--yes-->id21;
id4--no-->id5;
id5--no-->id6;
id6--no-->id7;
id7--no-->id8;
id8--no-->id9;
id9--no-->id10;
id10--no-->id11;
id11--no-->id12;
id12--no-->id21;
id5--yes-->id13;
id6--yes-->id14;
id7--yes-->id15;
id8--yes-->id16;
id9--yes-->id17;
id10--yes-->id18;
id11--yes-->id19;
id12--yes-->id20;
id13-->id22;
id14-->id22;
id15-->id22;
id16-->id22;
id17-->id22;
id18-->id22;
id19-->id22;
id20-->id22;
id21-->id22;
```