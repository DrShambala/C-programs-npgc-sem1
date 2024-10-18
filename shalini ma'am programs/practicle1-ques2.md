### write a menu driven program to print
### a) sum of 10 terms of fibonacci series
### b) sum of series 1/2, 3/4,  5/6, 7/8, 9/10, 11/12, 13/14, 15/16, 17/18, 19/20

```
// Online C compiler to run C program online
#include <stdio.h>
#include <conio.h>
int main() {
  int i,choice;
  float sum,c,a,b;

printf("MENU\nEnter you choice\npress 1 to print sum of 10 terms of fibonacci series\npress 2 to print sum of the series:\n1/2, 3/4,  5/6, 7/8, 9/10, 11/12, 13/14, 15/16, 17/18, 19/20\n\n");
scanf("\n%d",&choice);
switch(choice){
    case 1:
    a=0.0;
    b=1.0;
    printf("\n%.0f,%.0f",a,b);
    sum=0;
      for(i=1;i<=10;i++){
        c=a+b;
          printf(",%.0f",c);
          sum += c;
          a=b;
          b=c;
      }
      printf("\nsum of 10 terms of fibonacci series is:");
      printf("\n%.0f",sum);
    break;
    case 2:
    
    a=1.0;
    b=2.0;
    sum=0;
    printf("sum of the series:\n");
    for(i=1;i<=10;i++){
        c=a/b;
        sum=sum+c;
        printf("%.0f / %.0f,",a,b);
        a=a+2;
        b=b+2;
    }
    printf("\nis %.2f",sum);

}
getch();
    return 0;
}
```
