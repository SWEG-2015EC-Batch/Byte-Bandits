# Income Calcularor\(Progressive Version\)
- Calculate net salary of an employee, based on progressive taxation
- Taxation Scale based on gross salary
    + <200 - 0%
    + \[200-600\) - 10%
    + \[600-1200\) - 10%
    + \[1200-2000\) - 15%
    + \[2000-3500\) - 20%
    + \>3500 - 25%
## Input
- Work hours
- Gross salary
- Overtime rate
## Output
- Net salary
## Process
1. Start
2. Read gross salary as gross, work hours as hours, overtime rate as orate
3. If hours is more than 40, overtime = (hours - 40) * orate. Otherwise 0.
4. Prate = 0.07
5. Select tax rate as trate based on above scale
6. net = gross + overtime - (gross x trate) - (gross x prate)
7. Print net
8. End
