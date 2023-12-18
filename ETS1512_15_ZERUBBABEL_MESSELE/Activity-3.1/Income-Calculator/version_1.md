# Income Calcularor
- Calculate net salary of an employee
## Input
- Work hours
- Gross salary
- Tax rate\(as ratio\)
- Overtime rate
## Output
- Net salary
## Process
1. Start
2. Read gross salary as gross, work hours as hours, tax rate as trate, overtime rate as orate
3. If hours is more than 40, overtime = (hours - 40) * orate. Otherwise 0.
4. Prate = 0.07
5. net = gross + overtime - (gross x trate) - (gross x prate)
6. Print net
7. End