Income calculator v1

1. Problem - calculate net income

2. Problem analysis

   1. input - gross salary, worked hours, income tax rate, overtime bonus rate
   2. output - net salary
   3. operations:
      - pension = gross salary \* 0.07
      - income tax = gross salary \* tax rate
      - if worked hours > 40,
        - overtime bonus = (worked hour - 40) \* bonus rate
      - net pay = gross salary + overtime - ( - pension + income tax)

3. Algorithm design

   1. start
   2. read gross salary, worked hours and income tax rate, over time bonus rate
   3. if worked hours is greater than 40,
      - overtime bonus = (worked hours - 40) \* over time bonus rate
   4. calculate net salary as
      - pension = gross salary \* 0.07
      - income tax = gross salary \* tax rate
      - net = gross salary + overtime - (pension + income tax)
   5. display net salary
   6. end
