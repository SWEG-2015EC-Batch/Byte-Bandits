PROBLEM: Find the estimated transmission time transfer file in a line with rate 960 characters(Bytes) per second. File size is input

INPUT

- file size

OUTPUT

- transmission time

PROCESS

- transmission time = file size / transmission rate

ALGORITHM(PSEUDOCODE)

1. start
2. read file size
3. if size < 0, print error and exit 
4. time = file size / 960
5. print time
6. end

ALGORITHM(PSEUDOCODE)

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

PROGRAM DESIGN

- declare one constant variable for rate, initialize it to 960
- declare two variables of floating point type, one for file size and another for transmission time
- read file size with cin
- check that file size is non-negative. Else display error and exit with non-zero status
- compute transmission time = file size / rate
- print transmission time in informative way
- exit successfully
