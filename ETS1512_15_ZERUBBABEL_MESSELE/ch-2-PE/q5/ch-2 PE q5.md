ANALYSIS

INPUT

- name
- work hours
- bonus rate
- base salary

OUTPUT

- name
- gross salary
- bonus payment
- net salary

PROCESS

- Calculate bonus payment for work hours in excess of 40 based on bonus rate, i.e 
    if work hour is greater than 40, bonus payment = (work hours - 40) times bonus rate
- gross salary is base salary plus bonus payment
- pension = pension rate * gross salary
- income tax = gross salary * tax rate
- net income = gross salary - pension - income tax

ALGORITHM

1. start
2. read name, base salary, work hours and bonus rate
3. if invalid input, error and exit. Invalid inputs are negative numbers and empty name.
4. if work hours > 40, then bonus payment = (work hours - 40 ) * bonus rate else zero
5. gross salary = base salary + bonus payment
6. pension = gross * pension rate
7. tax = gross * tax rate
8. net salary = gross salary - pension - tax
9. print name, gross salary, bonus payment, net salary
10. end
