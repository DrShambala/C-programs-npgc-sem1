# Programme 3

## 3.	XYZ Company gives allowances to its employees depending on their grade as follows.

|Grade	|Allowances |
|---|---|
|A ||300|
|B ||250|
|Others||100|       

**Calculate the Salary at the end of the month**

```
#include <stdio.h>
#include <conio.h>
int main() {
float basic_salary, total_salary;
char grade;
printf("Enter the basic salary of the employee: Rs ");
scanf("%f", &basic_salary);
printf("Enter the grade of the employee (A, B, or others): ");
scanf(" %c", &grade);
if (grade == 'A' || grade =='a') {
total_salary = basic_salary + 300;
} else if (grade == 'B' || grade == 'b') {
total_salary = basic_salary + 250;
} else {
total_salary = basic_salary + 100;
}
printf("The total salary for the employee is: Rs %.2f\n", total_salary);
getch();
return 0;
}
```