# Programme 1

## 1.	WAP to calculate the commission at the end of the month for a company, which gives a 10% commission to its salesman if their monthly sales amount is Rs 10,000 or more.  

```
#include <stdio.h>
#include <conio.h>
int main() {
    float sales, commission = 0.0;

    printf("Enter the monthly sales amount: Rs ");
    scanf("%f", &sales);

    if (sales >= 10000) {
        commission = sales * 0.1;
    }

    // Output the commission
    printf("The commission for the salesman is: Rs %f\n", commission);

    return 0;
}
```