PROBLEM: Find the estimated transmission time transfer file in a line with rate 960 characters(Bytes) per second. File size is input

INPUT

- file size

OUTPUT

- transmission time

PROCESS

- transmission time = file size / transmission rate

ALGORITHM

1. start
2. read file size
3. if size < 0, print error and exit 
4. time = file size / 960
5. print time
6. end

PROGRAM DESIGN

- declare one constant variable for rate, initialize it to 960
- declare two variables of floating point type, one for file size and another for transmission time
- read file size with cin
- check that file size is non-negative. Else display error and exit with non-zero status
- compute transmission time = file size / rate
- print transmission time in informative way
- exit successfully
