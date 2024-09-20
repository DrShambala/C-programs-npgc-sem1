# Programme 5

## 5.	Montauk Company has decided to make their commission structure more aggressive for their sales department as follows.

|Sales	    |Grade	|Commission|
|---|---|---|
|10,000	    |1	        |10%|
|           |2	    |8%|
|<=10,000	|--	    |5%|

```
#include <stdio.h>
#include <conio.h>
int main() {
float sales, commission;
int grade;
printf("Enter the sales amount: Rs ");
scanf("%f", &sales);
printf("Enter the grade of the salesman (1 or 2): ");
scanf("%d", &grade);
if (sales > 10000) {
if (grade == 1) {
commission = sales * 0.10;
} else if (grade == 2) {
commission = sales * 0.08;
} else {
commission = sales * 0.05;
}
} else {
commission = sales * 0.05;
}
printf("The commission for the salesman is: Rs %.2f\n", commission);
getch();
return 0;
}
```