## Programme 2

### 2.	ABC Company gives a 5% commission to its salesman if their monthly sales are less than Rs. 10,000 and a10% commission if is equal to or greater than Rs. 1 0,000 Calculate the commission at the end of the month. 
```
#include <stdio.h>
#include <conio.h>
int main() {
float sales, commission = 0.0;
clrscr();
printf("Enter the monthly sales amount: Rs ");
scanf("%f", &sales);
if (sales >= 10000) {
commission = sales * 0.10;
} else {
commission = sales * 0.05;
}
printf("The commission for the salesman is: Rs %f\n", commission);
getch();
return 0;
}
```