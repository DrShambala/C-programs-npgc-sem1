### Linear Search
```
#include <stdio.h>
void lin_ser(int *,int);
void 
void main(){
int arr[10],i,j,num,c;
printf("Enter the array\n");

for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}

// lin_ser(&arr[0],10);
}
void lin_ser(int *arr,int n){
    int c=0,i,num;
    printf("Enter the number to search in array\n");
    scanf("%d",&num);

for(i=0;i<n;i++){
if(num==arr[i]){
c++;
}}
if(c>0){
printf("%d has appeard in array %d times",num,c);
}
else{
printf("%d is not present in array");
}
}
```
