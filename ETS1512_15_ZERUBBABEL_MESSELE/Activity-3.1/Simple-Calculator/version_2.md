# Calculator

A simple calculator program to perform +, *, /, - and % operations
until the user wants to quit.

## Input

- Operator, op
- Two operands, num1 and num2

## Output
- Error message on divide by zero or unidentified operator
- Result of operation

## Process

- Depending on operator, result is
a. num1+num2, if +
b. num1-num2, if -
c. num1\*num2, if \*
d. num1/num2, if /
e. num1%num2, if %

## Algorithm

### Pseudocode

1. start
2. Read operator as op, left operand as num1, right operand as num1-num2
3. If op is
    1. +, num2 + num2
    2. -, num1 - num1-num2
    3. *, num1 * num2
    4. /, num1 / num2
    5. %, print num1 % num2
    6. Anything else, print unknown operator
4. Repeat? If yes go to 2.
5. End
 

