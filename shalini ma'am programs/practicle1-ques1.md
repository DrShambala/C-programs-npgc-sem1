### Ques- A company gives discount based on their Ticket amount
| Ticket amount | Discount|
|---|---|
|above 7000|12%|
|more than 5500 but less than 7000|10%|
|more than 4500 but less than 5500| 8%|
|more than 3500 but less than 4500|5%|
|less than 3500|0|

write a programe to enter name and ticket price of customer and print the sr.no. name ticket amount discount net amount of the customer.
There are 15 customers.
```
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int amt,d,dis,namt,i;
    char name[100];
    for(i=1;i<=15;i++){
        printf("\nEnter name: ");
    scanf("%s",&name);
    printf("\nEnter Ticket Amount");
    scanf("%d",&amt);
    
    // calculation area
    if(amt >= 7000){
        d=12;
    }
    else if(amt > 5500 && amt < 7000){
        d=10;
    }
    else if(amt >5500 && amt < 4500){
        d=8;
    }
     else if(amt >4500 && amt < 3500){
        d=5;
    }
    else{
        d=0;
    }
    dis=d*amt;
    dis=dis/100;
    namt=amt-dis;
    
    //display section
    printf("Sr.No.| Name | Ticket Amount | Discount | Net Amount");
    printf("\n%d|%s | %d | %d% | %d",i,name,amt,d,namt);
    
    }
    
    return 0;
}
```
