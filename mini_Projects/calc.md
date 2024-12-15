# Calculator
### v1.2
### description :
now it also keep a record of your old calculations to access the history simply goto history.txt in your system

```
#include <stdio.h>

int main()
{
    // printf("jai shree ganesh");
    FILE *file;
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
file=fopen("history.txt","a");

fprintf(file,"%.2f %c %.2f = %.2f",n1,op,n2,r);
fputc('\n',file);
fclose(file);
printf("\nFile closed.");

    return 0;
}
```
