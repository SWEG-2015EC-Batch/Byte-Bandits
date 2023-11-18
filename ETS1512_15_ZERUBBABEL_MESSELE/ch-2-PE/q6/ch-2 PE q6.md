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
id4{file size < 0?};
id3(time = file size / 960);
id5[/Print time/];
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
2. read file size
3. if size < 0, print error and exit 
4. time = file size / 960
5. print time
6. end
