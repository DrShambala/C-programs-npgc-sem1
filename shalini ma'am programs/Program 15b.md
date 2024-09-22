# Programme 15b

### To accept a number and check and display whether it is a spy number or not. (A number is spy if the sum of its digits equals the product of its digits.)
### Example : consider the number 1124,
### Sum of the digits = l + l+ 2 + 4 = 8
### Product of the digits = 1×1 x2x4 = 8

```
// Online C compiler to run C program online
#include <stdio.h>
#include <conio.h>
int main() {
   
    int num,a,sum,fact;
    clrscr();
    printf("enter number");
    scanf("%d",&num);
    fact=1;
    sum=0;
    while(num>0)
    {
        a=num%10;
        sum=sum+a;
        fact=fact*a;
        num=num/10;
    }
    
    if(sum==fact){
        printf("It is a Spy Number");
    }
    else{
        printf("It is not a Spy Number");
    }
    getch();
    return 0;
}
```
