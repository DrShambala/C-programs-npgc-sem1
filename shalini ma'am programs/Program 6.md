# Programme 6

## WAP to calculate the fare for a railway journey depending on the following conditions.

|Age	        |Distance [ in Kms ]|Fare|
|---|---|---|
|Below 10	|Below 50	            |5|
|	        |51 -100	            |10
|	        |Above 100	            |15
|11-50	    |Below 50	            |10
|	        |51-100	                |15
|	        |Above 100	            |20
|Above50	    |Below 50	        |15
|	        |51-100	|20
|	        |Above100	            |25

```
#include <stdio.h>
#include <conio.h>
int main() {
int age, distance, fare;
printf("Enter the age of the passenger: ");
scanf("%d", &age);
printf("Enter the distance of the journey in kms: ");
scanf("%d", &distance);

if (age < 10) {
    if (distance < 50) {
        fare = 5;
    } else if (distance <= 100) {
        fare = 10;
    } else {
        fare = 15;
    }
} else if (age <= 50) {
    if (distance < 50) {
        fare = 10;
    } else if (distance <= 100) {
        fare = 15;
    } else {
        fare = 20;
    }
} else {
    if (distance < 50) {
        fare = 15;
    } else if (distance <= 100) {
        fare = 20;
    } else {
        fare = 25;
    }
}

printf("The fare for the journey is: Rs %d\n", fare);
getch();
return 0;
}
```