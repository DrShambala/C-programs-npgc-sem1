# Programme 15a

### Using the switch-case statement, write a menu driven program to do the following :
### To display the sum of the series given below:
 
```
#include <stdio.h>
#include <conio.h>
int main() {
    int n;
    double sum = 0.0;
    clrscr();
    printf("sum of the given problem");
    printf("\n 1/1 + 1/2 + 1/3 + 1/4...1/10");
    
    for(n = 1; n <= 10; n++) {
        sum += 1.0 / n;
    }

    printf("The sum of the series is: %.6f\n", sum);
    getch();
    return 0;
}
```
