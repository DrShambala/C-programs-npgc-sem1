# Programme 18

###   18.	WAP to print all the Armstrong Nos. between 1 to 500 
```
#include <stdio.h>
#include <conio.h>
int main() {
    int i,sum,a,num,n;
    clrscr();
    printf("Armstrong number from 1 to 500");
    for(i=1;i<=500;i++){
        n=i;
        sum=0;
        while(n>0){
            a=n%10;
            sum += a * a * a;
            n=n/10;
        }
        if(sum==i){
            printf("\n%d",i);
        }
    }
    getch();
    return 0;
}
```
