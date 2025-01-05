#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    // printf("jai shree ganesh");
    FILE *file;
    int n1, n2, r = 0;
    double x;
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
    case '^':
        x = pow(n1,n2);     // pow func return value in double 
        r=x;
        break;
    default:
        printf("Enter valid operation\n");
        break;
    }

    printf("%d ", r);
    
    // creting a memory of your calculations
    file = fopen("history.txt", "a");
    fprintf(file, "%d %c %d = %d", n1, op, n2, r);
    fputc('\n', file);
    fclose(file);

    printf("exit (yes/no) ");
    scanf("%s",i);
} while (strcmp(i,"no")==0);
    
    return 0;
}
// key features
// keeps a permanent memory of your calculations
