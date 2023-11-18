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
id4{weight < 0 or height <= 0?};
id3(BMI = weight/height * height);
id5[/Print BMI/];
id7[/Print ERROR/];
id6([End]);
id1-->id2;
id2-->id4;
id4--yes-->id7;
id4--no-->id3;
id3-->id5;
id5-->id6;
id7-->id6;
```
 PSEUDOCODE

1. start
2. read height and weight
3. if height or weight is negative or height is zero, display error message and error out
4. bmi = weight/(height * height)
5. print bmi
6. end 

