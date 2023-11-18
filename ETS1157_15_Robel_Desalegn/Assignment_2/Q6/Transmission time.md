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
   1. Input file size in MB
   1. Convert file size to bytes = size \* 1024 \* 1024
   1. Input transmission rate in characters per second
   1. Calculate transmission time = file size in bytes/transmission rate
   1. Print transmission time
   1. End
3. Program Design
   1. Declare fileSize, transRate, transTime variables
   1. Input fileSize in MB
   1. Convert fileSize to bytes
   1. Set transRate value
   1. Calculate transTime = fileSize / transRate
   1. Print transTime result
   1. End

