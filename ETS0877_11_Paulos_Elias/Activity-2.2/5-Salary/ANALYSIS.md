PROBLEM: Determine the gross salary, net salary and bonus payment of an employee from work hours, bonus rate and base salary. Income tax and pension are to be deducted at the end. Base salary, name, bonus rate and work hours are user inputs.

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

ALGORITHM(PSEUDOCODE)

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

ALGORITHM(PSEUDOCODE)

```mermaid
graph LR;
id1([Start]);
id2[/"`Read
name,
base salary,
work hours,
bonus rate`"/];
id4{"`name empty
or base salary < 0
or bonus rate < 0 or
work hours < 0?`"};
id14("`tax_rate = 0.15,
pension_rate = 0.05`"`);
id8{work hours > 40?};
id3("`bonus payment =
work hours - 40
times
bonus rate`");
id9(bonus payment = 0);
id10("`gross salary =
base salary + bonus payment`");
id11("`pension =
gross * pension_rate`");
id12("`tax =
gross * tax_rate`");
id13("`net salary =
gross salary -
pension - tax`");
id5[/"`Print
name,
gross salary,
bonus payment,
net salary`"/];
id7[/Print ERROR/];
id6([End]);
id1-->id2;
id2-->id4;
id4--yes-->id7;
id4--no-->id14;
id14-->id8;
id8--yes-->id3;
id8--no-->id9;
id3-->id10;
id9-->id10;
id10-->id12;
id12-->id11;
id11-->id13;
id13-->id5;
id5-->id6;
id7-->id6;
```

PROGRAM DESIGN

1. declare fixed constant variables for tax rate and pension rate with values 0.15 and 0.5 respectively
2. declare integer value for working hours
3. declare a variable of string type for storing name
4. declare floating point variables for base salary and bonus rate
5. declare floating point variables for gross salary, net salary, bonus payment
6. read name, base salary, work hours, bonus rate
7. if name is empty or any of base salary or work hours or bonus rate is negative, display error exit.
8. if work hour > 40, then bonus = bonus_rate * ( work_hour - 40 )
9. gross = base + bonus
10. pension = gross * pension_rate
11. tax = gross * tax_rate
11. net = gross - tax - pension
12. Print gross, bonus and net with cout 
13. exit successfully.
