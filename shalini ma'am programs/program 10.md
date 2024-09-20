# Programme 10

### A student appears for a test in 3 subjects. Each test is out of 100 marks. The percentage of each student has to be calculated and depending on the percentage calculated, grades are given as under. 
 
|Percentage|Grade|
|---|---|
|>=90	|A+
|80-89	|A
|70-79	|B+
|60-69	|B
|50-59	|C+
|<50	|Fail

```
#include <stdio.h>
#include <conio.h>
int main() {
float marks1, marks2, marks3, percentage;
char grade[5];
printf("Enter the marks obtained in the first subject (out of 100): ");
scanf("%f", &marks1);
printf("Enter the marks obtained in the second subject (out of 100): ");
scanf("%f", &marks2);
printf("Enter the marks obtained in the third subject (out of 100): ");
scanf("%f", &marks3);
percentage = (marks1 + marks2 + marks3) / 3;
if (percentage >= 90) {
    printf("A+");
} else if (percentage >= 80 && percentage < 90) {
printf("A");
} else if (percentage >= 70 && percentage < 80) {
printf("A+");
} else if (percentage >= 60 && percentage < 70) {
    printf("B+");
} else if (percentage >= 50 && percentage < 60) {
printf("B");
} else {
printf("FAIL");
}
getch();
return 0;
}
```