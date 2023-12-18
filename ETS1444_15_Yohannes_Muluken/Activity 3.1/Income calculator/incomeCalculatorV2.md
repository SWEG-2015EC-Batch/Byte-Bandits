Income calculator v2

1. Problem - calculate net income

2. Problem analysis

   1. input - gross salary, worked hours, overtime bonus rate
   2. output - net salary
   3. operations:
      - pension = gross salary \* 0.07
      - if worked hours > 40,
        - overtime bonus = (worked hour - 40) \* bonus rate
      - income tax is calculated as follows, if gross salary is
        1. > = 3500, income tax = 0.3 \* gross salary
        2. > = 2000, income tax = 0.25 \* gross salary
        3. > = 1200, income tax = 0.2 \* gross salary
        4. > = 600, income tax = 0.15 \* gross salary
        5. > = 200, income tax = 0.1 \* gross salary
        6. < 200, income tax = 0
      - net pay = gross salary + overtime - ( - pension + income tax)

3. Algorithm design

   1. start
   2. read gross salary, worked hours and income tax rate, over time bonus rate
   3. if worked hours is greater than 40,
      - overtime bonus = (worked hours - 40) \* over time bonus rate
   4. calculate
      - pension = gross salary \* 0.07
      - tax rate as, if gross salary is
        1. > = 3500, income tax = 0.3 \* gross salary
        2. > = 2000, income tax = 0.25 \* gross salary
        3. > = 1200, income tax = 0.2 \* gross salary
        4. > = 600, income tax = 0.15 \* gross salary
        5. > = 200, income tax = 0.1 \* gross salary
        6. < 200, income tax = 0
      - income tax = gross salary \* tax rate
      - net = gross salary + overtime - (pension + income tax)
   5. display net salary
   6. end
