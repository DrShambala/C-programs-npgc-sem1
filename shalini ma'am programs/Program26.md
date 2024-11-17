# Program 26
### Write a C Program to Find Largest Element in an Array using Pointers
```
#include <stdio.h>

int main() {
    int arr[6],i,*max;
    
    printf("Enter elements of array\n");
    for(i=0;i<=5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    *max=&arr[0];
    
    for(i=0;i<=5;i++){
            if(*max<=arr[i]){
                *max=arr[i];
            }
            
    }
        printf("Maximum number is %d \n",*max);
    return 0;
}
```
