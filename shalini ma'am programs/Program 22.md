### Linear Search
```
// Online C compiler to run C program online
#include <stdio.h>
void lin_ser(int *,int);
void insertion(int *,int);
void bubble(int *,int);

void main(){
int arr[10],i,ch;
printf("MENU\nEnter Your Choice\npress 1 for linear search\npress 2 for binary search\npress 3 for insertion sort\npress 4 for bubble sort\n");
scanf("%d",&ch);
printf("Enter the array\n");

for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
switch(ch){
    case 1:
    lin_ser(&arr[0],10);
    break;
    case 2:
    break;
    case 3:
    insertion(&arr[0],10);
    break;
    case 4:
    bubble(&arr[0],10)
}
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
   
    for(i=0;i<n;i++){
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
    for(i=0;i<n;i++){
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
### SELECTION SORT
```
#include <stdio.h>

void sort(int arr[],int n){
    int min,i,j;
    for(j=0;j<n;j++){
        min=j;
        for(i=j;i<n;i++){
            if(arr[min]>=arr[i]){
                min=i;
            }
        }
        
        int temp=arr[min];
        arr[min]=arr[j];
        arr[j]=temp;
    }
    
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    
}
int main() {
    int arr[]={22,36,49,68,29,7};
    int i=0,n=0;
    while(arr[n]>0){
        n++;
    }
    // printf("%d",n);
    
    sort(arr,n);
    return 0;
}
```
### binary search
```
#include <stdio.h>

void sort(int arr[],int n){
    int min,i,j;
    for(j=0;j<n;j++){
        min=j;
        for(i=j;i<n;i++){
            if(arr[min]>=arr[i]){
                min=i;
            }
        }
        
        int temp=arr[min];
        arr[min]=arr[j];
        arr[j]=temp;
    }
    
    
    int r=search(arr,n);
    if(r==-1){
        printf("Number not found\n");
    }
    else{
        printf("number found at %dth index",r);
    }
}
int search(int arr[],int n){
    int low,high,mid,t;
    low=0;
    high=n-1;
    
    printf("Enter number to search in array\n");
    scanf("%d",&t);
    
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==t){
            return mid;
        }
        else if(t>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
    return -1;
}
int main() {
    int arr[]={22,36,49,68,29,7};
    int i=0,n=0;
    while(arr[n]>0){
        n++;
    }
    
    sort(arr,n);
    return 0;
}
```
