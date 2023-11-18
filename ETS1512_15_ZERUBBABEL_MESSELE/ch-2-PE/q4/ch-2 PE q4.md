ANALYSIS

INPUT

- x value
- y value

OUTPUT

- the value of x raised to y

PROCESS

- Use power(double, double) from cmath library

ALGORITHM
 FLOWCHART

 ```mermaid
graph LR;
id1([Start]);
id2[/Read base, exponent/];
id4{base < 0?};
id3(power = pow %base, %exponent);
id5[/Print power/];
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
 PSEUDO CODE

1. start
2. read two decimals,  one base and another exponent
3. if base <= 0, print error and exit
4. power = pow(base, exponenet)
5. print power
6. end
