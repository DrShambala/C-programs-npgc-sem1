# Programme 20a
### 20.	WAP to print the following series.
### a)	1!+2!+3!+4! ……………………….n!

```
#include <stdio.h>
// #include <conio.h>
int main() {
   int n,i,fact;
//   clrscr();
   printf("enter number");
   scanf("%d",&n);
   fact=1;
   for(i=1;i<=n;i++){
       fact=fact*i;
   }
   printf("sum of the series :\n1!+2!+3!...n! is\n%d",fact);
//   getch();
    return 0;
}
```
