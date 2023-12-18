# Digit Analyzer
Reads in a decimal number, prints number of digits, digits in reverse and sum of digits.
## Input
- A number
## Output
- Number of digits
- Digits in reverse order
- Sum of digits
## Process
The following procedure produces the number of digits, a number with digits in reverse
order of original number and sum of Digits
>1. Start with numbers named reverse=0, sum=0, digits=0.
>2. Take reminder = number mod 10
>3. Make reverse = (reverse x 10) + reminder
>3. divide the number by ten and take only the whole part and make it the new number
>5. Increase digit count by 1 and sum by reminder
>6. Until number equals 0, repeat from 1.
>7. Reverse number is *reverse*, number of digits is *digits* and sum of digits *sum*
## Algorithm
1. Start
2. Read num
3. Start off with rev=0, dig=0, sum=0
4. Take remainder rem=num%10
5. Make rev=(rev*10)+rem
6. Make new num=num/10 \(decimal part is thrown away\)
7. Increase digits by 1.
8. Add rem to sum
9. Until num equals 0, repeat from 4
10. Print rev as reverse, sum as sum of digits and digits as number of digits
11. End
