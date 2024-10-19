### Table of any number
```
#include <stdio.h>

int main() {
    int num, i;

    // Asking for user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Printing the table
    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
```

### Power of x^n
```
#include <stdio.h>

int main() {
    int x, n,result = 1,i;

    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        result =result * x;
    }

    printf("%d^%d = %.2f\n", x, n, result);

    return 0;
}
```
### factorial number
```
#include <stdio.h>
int main() {
    int num,fact=1;
    printf("Enter a number: ");
    scanf("%d", &num);
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    
    return 0;
}
```
