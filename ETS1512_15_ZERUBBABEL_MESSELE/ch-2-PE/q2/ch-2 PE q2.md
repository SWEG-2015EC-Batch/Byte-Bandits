ANALYSIS

INPUT 

- fuel tank capacity(in gallons)
- miles per gallon of fuel( efficiency ) of the automobile (in gallons) 

OUTPUT 

- maximum distance the automobile can travel without refueling(in miles) 

PROCESS 

- distance = mileage(miles per gallon) * capacity(gallon) 


ALGORITHM 

 FLOWCHART

```mermaid
graph LR;
id1([Start]);
id2[/Read capacity, mileage/];
id3(distance= capacity * mileage);
id4[/Print distance/];
id5([End]);
id1-->id2;
id2-->id3;
id3-->id4;
id4-->id5;
```

 PSEUDOCODE
 
1. start
2. read fuel capcity and mileage
3. distance = capacity * mileage
4. print distance
5. end
