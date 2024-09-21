# Programme 11

### 11.	Create a menu-based program to find the addition, division, multiplication, and Subtraction of two numbers depending upon the user's choice.

```
#include <stdio.h>
#include <conio.h>
void main(){
int n1,n2,r,cal;
clrscr();
printf("enter 2 values to calcualte:\n");
scanf("%d\n%d",&n1,&n2);
printf("\nenter what you want to do \n1 for add \n2 for substract\n3 for multiply\n4 for divide\n");
scanf("\n%c",&cal);

switch(cal)
{
case 1:
r=n1+n2;
printf("hello");
break;
case 2:
r=n1-n2;
break;
case 3:
r=n1*n2;
break;
case 4:
r=n1/n2;
break;
default:
r=0;
break;
}
printf("%d",r);
getch();
}
```