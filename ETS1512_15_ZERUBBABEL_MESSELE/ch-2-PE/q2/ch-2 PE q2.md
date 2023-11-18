ANALYSIS

INPUT 

- fuel tank capacity(in gallons)
- miles per gallon of fuel( efficiency ) of the automobile (in gallons) 

OUTPUT 

- maximum distance the automobile can travel without refueling(in miles) 

PROCESS 

- distance = mileage(miles per gallon) * capacity(gallon) 

FLOWCHART

```mermaid
graph LR;
id1([Start]);
id2[/Read capacity, mileage/];
id4{capacity < 0 or mileage < 0?};
id3(distance= capacity * mileage);
id5[/Print distance/];
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

ALGORITHM 

1. start
2. read fuel capcity and mileage
3. if invalid input, print error and exit unsuccessfully. Negative values are invalid.
4. distance = capacity * mileage
5. print distance
6. end
