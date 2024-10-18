### write a menu driven programme to 
### a)Print the series:\n3,8,15,26---n
### b)sum digits of integers input by the user
```
// Online C compiler to run C program online
#include <stdio.h>
#include <conio.h>
int main() {
    int n,i,j,c,s=0,temp=0,ch;
    
    printf("MENU\nEnter you choice\npress 1 to print the series:\n3,8,15,26---n\npress 2 to print sum digits of integers input by the user\n");
    scanf("\n%d",&ch);
    
    switch(ch){
        case 1:
        printf("Enter number to print the series\n");
        scanf("%d",&n);
        for(j=3;j<=n;j++){
            c=0;
            // checks prime number
            for(i=1;i<=j;i++){  
            if(j%i==0){
                c++;
                }
            }
            // printf("\n");
            if(c==2){
            // printf("prime");
            // printf(",%d",j);
            temp=temp+j;
            printf(",%d",temp);
            }
        }
        break;
        case 2:
        printf("Enter number to print sum digits of integers\n");
        scanf("%d",&n);
            while(n>0){
                c=n%10;
                s=s+c;
                n=n/10;
            }
            printf("%d",s);
        break;
        default:
        printf("Enter valid choice");
    }
    
    getch();
    return 0;
}
```
