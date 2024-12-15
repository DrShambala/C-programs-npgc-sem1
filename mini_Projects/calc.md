# Calculator
### v1.1

```
#include <stdio.h>

int main()
{
    // printf("jai shree ganesh");
    float n1,n2,r=0;
    char op;
    printf("Enter first number\n");
    scanf("%f",&n1);

    printf("Enter second number\n");
    scanf("%f",&n2);

    printf("Enter operation ");
    scanf(" %c",&op);


    switch (op) {
    case '+':
    r=n1+n2;
        break;
    case '-':
    r=n1-n2;
        break;
    case '*':
    r=n1*n2;
        break;
    case '/':
    r = n1/n2;
        // printf(".%d",n1%n2);
        break;
    default:
    printf("Enter valid operation\n");
        break;
        return 1;
    }

printf("%.2f ",r);

    return 0;
}
```
