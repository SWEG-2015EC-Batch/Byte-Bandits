# Calculator

A simple calculator program to perform +, *, /, - and % operations
until the user wants to quit.

## Input

- Operator, op
- Two operands, lop and rop

## Output
- Error message on divide by zero or unidentified operator
- Result of operation

## Process

- Depending on operator, result is
a. lop+rop, if +
b. lop-rop, if -
c. lop\*rop, if \*
d. lop/rop, if /
e. lop%rop, if %

## Algorithm

### Pseudocode

1. start
2. Read operator as op, left operand as lop, right operand as lop-rop
3. If op is
    1. +, rop + rop
    2. -, lop - lop-rop
    3. *, lop * rop
    4. /, lop / rop
    5. %, print lop % rop
    6. Anything else, print unknown operator
4. Repeat? If yes go to 2.
5. End
 






