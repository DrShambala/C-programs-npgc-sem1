
# Programme 16

### WAP to create a menu driven program to do the following:
1. Area of Rectangle
2. Diagonal of Rectangle
3. Perimeter of Rectangle

```
#include <stdio.h>
#include <conio.h>
void main(){
int n,l,w,r;
//clrscr();
printf("press \n1 to find area of rectriangle\n2 to find diagonal of rectriangle\n3 to find perimeter of rectraingle\n");
scanf("%d",&n);
printf("enter length and width of rectriangle:\n");
scanf("\n%d\n%d",&l,&w);
//printf("%d%d",l,w);
switch(n)
{
case 1:
r=l*w;
//printf("\n%d",r);
break;
case 2:
r=l^2+w^2;
r=r^(1/2);
break;
case 3:
r=l*2+w*2;
default:
printf("enter a valid number");
}
printf("\n%d",r);
}
```
