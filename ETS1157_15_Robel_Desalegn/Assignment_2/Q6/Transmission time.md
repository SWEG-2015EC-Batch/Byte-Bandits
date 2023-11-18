Transmission time

1. Problem Description
- Write a program to calculate the time required to transmit a file over a network based on file size and transmission rate.
2. Problem Analysis
- Inputs: 
  - File size in MB
  - Transmission rate in characters per second
- Processing: 
  - Convert file size from MB to bytes by multiplying by 1024\*1024
  - Calculate transmission time = File size in bytes / Transmission rate
- Output: 
  - Time required to transmit the file
3. Algorithm
   1. Start
   2. Input file size in MB
   3. Convert file size to bytes = size \* 1024 \* 1024
   4. Input transmission rate in characters per second
   5. Calculate transmission time = file size in bytes/transmission rate
   6. Print transmission time
   7. End

Algorithm: Flowchart
```mermaid
graph LR;
id1([Start]);
id2[/Read file size/];
id3(file size= size \* 1024 \* 1024);
id4(time = file size / 960);
id5[/Print time/];
id6([End]);
id1-->id2;
id2-->id3;
id3-->id4;
id4-->id5;
id5-->id6;
```
4. Program Design
   1. Declare fileSize, transRate, transTime variables
   2. Input fileSize in MB
   3. Convert fileSize to bytes
   4. Set transRate value
   5. Calculate transTime = fileSize / transRate
   6. Print transTime result
   7. End

