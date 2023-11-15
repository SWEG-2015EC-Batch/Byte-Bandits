INPUT

name
work hours
bonus rate
base salary
OUTPUT

name
gross salary
bonus payment
net salary
PROCESS

Calculate bonus payment for work hours in excess of 40 based on bonus rate, i.e if work hour is greater than 40, bonus payment = (work hours - 40) times bonus rate
gross salary is base salary plus bonus payment
pension = pension rate * gross salary
income tax = gross salary * tax rate
net income = gross salary - pension - income tax
ALGORITHM

1.start
2.read name, base salary, work hours and bonus rate
3.gross salary = base salary + bonus payment
4.pension = gross * pension rate
5.tax = gross * tax rate
6.net salary = gross salary - pension - tax
7.8.print name, gross salary, bonus payment, net salary
end
