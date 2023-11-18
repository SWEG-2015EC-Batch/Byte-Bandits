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
id3(power = pow %base, %exponent);
id4[/Print power/];
id5([End]);
id1-->id2;
id2-->id3;
id3-->id4;
id4-->id5;

```
 PSEUDOCODE

1. start
2. read two decimals,  one base and another exponent
3. power = pow(base, exponenet)
4. print power
5. end
