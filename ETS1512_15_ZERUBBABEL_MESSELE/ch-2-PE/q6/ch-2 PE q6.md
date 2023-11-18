ANALYSIS

INPUT

- file size

OUTPUT

- transmission time

PROCESS

- transmission time = file size / transmission rate

ALGORITHM

 FLOWCHART

```mermaid
graph LR;
id1([Start]);
id2[/Read file size/];
id3(time = file size / 960);
id4[/Print time/];
id5([End]);
id1-->id2;
id2-->id3;
id3-->id4;
id4-->id5;

```

 PSEUDOCODE
 
1. start
2. read file size
3. time = file size / CPS
4. convert seconds to MINUTE , HOUR and DAYS
5. print time
6. end
