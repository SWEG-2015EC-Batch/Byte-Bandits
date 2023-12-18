Playing with numbers

1. Problem - manipulate the nuber

2. Problem analysis

   1. input - num
   2. output - selected opertion
   3. operation:
      - find the reverse of the number
      - no of digits
      - sum of digits
      - product of even digits
      - sum of the first and last digit
      - swap the first and the last digit
      - check if the number is palindrome ( rnumber = reverse) or not
      - frequency of each digit in the number
      - check if the number is armstrong or not
      - check if the number id strong or not
      - check if the number is perfect or not

3. Algorithm desigm

   1. start
   2. read num
   3. read choice / menu (1 - 11)
   4. calculate reverse by (choice 1):
      1. set reverse = 0
      2. separate last digit by (num % 10 )
      3. modify reverse as reverse = (reverse \* 10) + last digit
      4. reset the number to num / 10
      5. return to step 4.1 until num <= 0
   5. calculate no of digits (choice 2)
      1. set count = 0
      2. separate last digit by (num % 10 )
      3. add 1 to count
      4. reset the number to num / 10
      5. return to step 5.1 until num <= 0
   6. calculate sum (choice 3)
      1. set sum = 0
      2. separate last digit by (num % 10 )
      3. add separated digit to sum
      4. reset the number to num / 10
      5. return to step 6.1 until num <= 0
   7. calculate product of even digits (choice 4)
      1. set product = 1
      2. separate last digit by (num % 10 )
      3. check if the digit is even by (digit % 2 == 0)
      4. if even, product = product \* digit
      5. reset the number to num / 10
      6. return to step 7.1 until num <= 0
   8. calculate sum of first and last digit (choice 5)
      1. separate last digit by (num % 10 ) 10.
      2. find first digit by dividing by 10 continuously
      3. add the two results to get the sum
   9. swap first and last digit (choice 6)
      1. get last digit from step 8.1
      2. get first digit from step 8.2
      3. replace one by the other
   10. check palindrome (choice 7)
       1. get the reverse of the number from step 4
       2. compare it with the original number
       3. if equal, palindrome = true
   11. calculate frequency of each digit (choice 8)
       1. set a frequency array
       2. separate each digit and increament the array according to the digit
   12. check armstrong (choice 9)
       1. set sum = 0
       2. find the no of digit by step 5
       3. separate last digit by (num % 10 )
       4. raise the digit to the power of number of digits
       5. add the result to the sum
       6. reset the number to num / 10
       7. return to step 12.1 until num <= 0
       8. compare sum to original
       9. if equal, armstrong = true
   13. check strong (choice 10)
       1. separate each digit
       2. find the factorial of each digit
       3. add the factorials and compare it with the original number
       4. if equal, strong = true
   14. check perfect (choice 11)
       1. find all the factos of the number by checking each number except the original in a loop
       2. find the sum of the factors
       3. compare the sum to the original number
       4. if equal, perfect = true
