# Programme 7
### WAP to initialize the Name of Student and his Average Marks and the assign him a grade as per the following rules 
1. AvgMarks  >=90 then grade is A+
2. AvgMarks >=80 and <90 then grade is A
3. AvgMarks >=70 and <80 thengrade is B+  
4. AvgMarks >=and <70 then grade is B
5. Avg Marks >=50 and <60 then grade is C 
6. AvgMarks <50 then FALL 

```
#include <stdio.h>
#include <conio.h>
int main() {
char name[50];
float avgMarks;
char grade[5];
printf("Enter the name of the student: ");
scanf("%s", name);
printf("Enter the average marks of the student: ");
scanf("%f", &avgMarks);

if (avgMarks >= 90) {
    sprintf(grade, "A+");
} else if (avgMarks >= 80) {
    sprintf(grade, "A");
} else if (avgMarks >= 70) {
    sprintf(grade, "B+");
} else if (avgMarks >= 60) {
    sprintf(grade, "B");
} else if (avgMarks >= 50) {
    sprintf(grade, "C");
} else {
    sprintf(grade, "FALL");
}

printf("Student Name: %s\n", name);
printf("Average Marks: %f\n", avgMarks);
printf("Grade: %s\n", grade);
getch();
return 0;
}
```
