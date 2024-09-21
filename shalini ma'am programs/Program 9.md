# Programme 9

## The rates of income tax applicable on income of the individuals for the assessment year 2003-2004 were as follows. 

|Net income Range 	    |Rates of Income Tax |
|---|---|
|Up to Rs 50000	        |Nil|
|Above Rs. 50000 but upto Rs. 60000. |10% of the amount by whichthe total income  exceeds Rs. 50000
|Above Rs. 60000 but upto Rs 150000.	        |Rs. 1000 plus 20% of the amount by which the total income exceeds Rs. 6 thousand 
|Above Rs. 150000	    |Rs. 19000 plus 30% of the amount by which the totalincome exceeds Rs. 150000.

```
#include <stdio.h>
#include <conio.h>
int main() {
float income, tax;
printf("Enter the net income: Rs ");
scanf("%f", &income);
if (income <= 50000) {
tax = 0;
} else if (income <= 60000) {
tax = (income - 50000) * 0.10;
} else if (income <= 150000) {
tax = 1000 + (income - 60000) * 0.20;
} else {
tax = 19000 + (income - 150000) * 0.30;
}
printf("The income tax payable is: Rs %.2f\n", tax);
getch();
return 0;
}
```