# Programme 17

### WAP to input a No and find the frequency of each digit of a No

```
#include <stdio.h>
#include <conio.h>
int main() {
   
    int num,a,sum,fact;
    int one,two,three,four,five,six,seven,eight,nine,zero=0;
    one=two=three=four=five=six=seven=eight=nine=zero=0;
    clrscr();
    printf("enter number");
    scanf("%d",&num);
    fact=1;
    sum=0;
    while(num>0)
    {
        a=num%10;
        switch(a){
            case 1:
            one++;
            break;
            case 2:
            two++;
            break;
            case 3:
            three++;
            break;
            case 4:
            four++;
            break;
            case 5:
            five++;
            break;
            case 6:
            six++;
            break;
            case 7:
            seven++;
            break;
            case 8:
            eight++;
            break;
            case 9:
            nine++;
            break;
            default:
            zero++;
            break;
        }
        num=num/10;
    }
    printf("\nnumber of 1 is:%d\nnumber of 2 is:%d\nnumber of 3 is:%d\nnumber of 4 is:%d\nnumber of 5 is:%d\nnumber of 6 is:%d\nnumber of 7 is:%d\nnumber of 8 is:%d\nnumber of 9 is:%d\nnumber of 0 is:%d\n",one,two,three,four,five,six,seven,eight,nine,zero);
    getch();
    return 0;
}
```
