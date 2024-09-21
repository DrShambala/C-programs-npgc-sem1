# Programme 13

### 13.	To display the sum of the series given below:
### x1 + x2 + x3 + ……………. xn terms

```
#include <stdio.h>
int main() {
int choice, n, i;
float sum = 0, x;
printf("Menu:\n");
printf("1. Sum of the series: x1 + x2 + x3 + ... + xn\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice) {
case 1:
printf("Enter the number of terms (n): ");
scanf("%d", &n);
for(i = 1; i <= n; i++) {
printf("Enter x%d: ", i);
scanf("%f", &x);
sum += x;
}
printf("The sum of the series is: %.2f\n", sum);
break;
default:
printf("Invalid choice!\n");
}
return 0;
}
```

### To input a number and check and print whether it is a Pronic number or not. (Pronic number is the number which is the product of two consecutive integers)

```
#include <stdio.h>
#include <conio.h>
void main(){
int num,i,a,root,pronic;
clrscr();
printf("enter number");
scanf("%d",&num);
//printf("%d",num);
root = num^(1/2);
for(i=0;i<=root;i++){
a=i+1;
a=a*i;
if(a == num){
pronic = 1;
}
}
if(pronic==1){
printf("it is a pronic number");
}
else{
printf("it is not a pronic number");
}
getch();
}
```