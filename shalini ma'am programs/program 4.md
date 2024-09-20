## programme 4

### 4.	The company plans to give a year –end 5% bonus to each of its employees, However if an employee has beenworking for 10 or more years at the company he has to get an additional Rs. 500, lets calculate the bonus for any given employee

```
#include <stdio.h>
#include <conio.h>
int main() {
float salary, bonus;
int years;
printf("Enter the employee's annual salary: Rs ");
scanf("%f", &salary);
printf("Enter the number of years the employee has worked: ");
scanf("%d", &years);
bonus = salary * 0.05;
if (years >= 10) {
bonus += 500;
}
printf("The year-end bonus for the employee is: Rs %.2f\n", bonus);
getch();
return 0;
}
```