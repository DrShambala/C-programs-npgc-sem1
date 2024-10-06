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
# Programme 20b
### b)	1,11,111……………………….n

```
#include <stdio.h>
// #include <conio.h>
int main() {
   int n,i,s,a;
//   clrscr();
   printf("enter number");
   scanf("%d",&n);
   s=0;
   a=1;
   for(i=1;i<=n;i=i+a){
       s=s+i;
       a*=10;
       printf("\n%d",i);
   }
   printf("sum of the series\n1+11+111...n");
   printf("\n%d",s);
   
//   getch();
    return 0;
}
```

# Programme 20c
### c)	1+(1+2)+(1+2+3)+(1+2+3+4)+……………….(1+2+3……..20)
