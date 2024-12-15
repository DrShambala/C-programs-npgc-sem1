# Calculator
### v1.2.1
### description :
now it also keep a record of your old calculations to access the history simply goto history.txt in your system 

```
#include <stdio.h>
#include <string.h>

int main()
{
    // printf("jai shree ganesh");
    FILE *file;
    int n1, n2, r = 0;
    char op,i[5]="yes";
do
{
      

    printf("Enter first number\n");
    scanf("%d", &n1);

    printf("Enter second number\n");
    scanf("%d", &n2);

    printf("Enter operation ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        r = n1 + n2;
        break;
    case '-':
        r = n1 - n2;
        break;
    case '*':
        r = n1 * n2;
        break;
    case '/':
        r = n1 / n2;
        break;
    case '%':
        r = (n1 % n2);
        break;
    default:
        printf("Enter valid operation\n");
        break;
    }

    printf("%d ", r);
    file = fopen("history.txt", "a");

    fprintf(file, "%d %c %d = %d", n1, op, n2, r);
    fputc('\n', file);
    fclose(file);
    // printf("\nFile closed.");
    printf("exit (yes/no) ");
    // gets(i);
    scanf("%s",i);
} while (strcmp(i,"no")==0);
    
    return 0;
}
```
