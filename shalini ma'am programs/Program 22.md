### Linear Search
```
// Online C compiler to run C program online
#include <stdio.h>
void lin_ser(int *,int);
void insertion(int *,int);
void bubble(int *,int);
void main(){
int arr[10],i,j,num,c;
printf("Enter the array\n");

for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
// bubble(&arr[0],6);
// insertion(&arr[0],6);
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
void insertion(int *arr,int n){
    int i,j,t;
    printf("Original array\n");
   
    for(i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            if(arr[i]>=arr[j]){
                 t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("Sorted array\n");
    for(i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
}
void bubble(int *arr,int n){
    int i,j,t;
    printf("Original array\n");
   
    for(i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            if(arr[j]>=arr[j+1]){
                 t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("Sorted array\n");
    for(i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
}
```
