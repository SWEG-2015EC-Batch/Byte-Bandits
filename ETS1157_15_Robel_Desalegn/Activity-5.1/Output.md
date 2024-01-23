Output #1



Output #2
- 58 58 58

Output #3
- K = 4
- X = 950 
- Y = 3000
- K = 14
- k = 28

Output #4
Output #5

Output #6
- a[0]= 6.0
- a[1] = 3.0
- a[2] = garbage
- a[3] = 9.8
- a[4] = 7.0

Output #7

- a[0]= 6.0
- a[1] = 3.0
- a[2] = garbage
- a[3] = 9.8
- a[4] = 7.0

Output #8

- 30 becomes 60
- 23 becomes 30
- 32 becomes 40

Analysis
+ p1 is normal integer pointer
+ p2 is pointer to integer constant
+ p3 is constant pointer to integer
+ p4 is constant pointer to constant integer

- The line `int *p1 = 20` is invalid
- The line `*p1 = 50` is invalid
- The line `*p2 = 100` is invalid
- The line `p3 = &y` is invalid
- The line `p4 = &y` is invalid
- The line `p4 = 90` is invalid
