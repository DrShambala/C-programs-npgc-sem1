# Programme 1
### write a programe enter 2 numbers and print the sum,multiplication,substraction

```
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num1,num2,sum,prod,subs;
    printf("enter first number\n");
    scanf("%d",&num1);
    printf("enter second number\n");
    scanf("%d",&num2);
    
    sum=num1+num2;
    printf("\nsum of %d and %d is %d",num1,num2,sum);
    prod = num1*num2;
    printf("\nproduct of %d and %d is %d",num1,num2,prod);
    subs=num1-num2;
    printf("\nsubstraction of %d and %d is %d",num1,num2,subs);

    return 0;
}
```
