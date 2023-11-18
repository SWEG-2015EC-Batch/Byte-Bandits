ANALYSIS 

INPUT 

-height
-weight 

OUTPUT 

-BMI 

PROCESS 

-BMI = weight/)height * height 

ALGORITHM
 
  FLOWCHART

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
 PSEUDOCODE

1. start
2. read height and weight
3. if height or weight is negative or height is zero, display error message and error out
4. bmi = weight/(height * height)
5. print bmi
6. end 

