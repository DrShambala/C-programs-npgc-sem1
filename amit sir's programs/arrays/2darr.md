# 2D array
### Sum of all elements

```
#include <stdio.h>

int main() {
    int arr[3][3],i,j,s=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            s=s+arr[i][j];
        }
    }
    printf("Sum of all elements of array is %d",s);
    return 0;
}
```

### Sum of boundry element

```
#include <stdio.h>

int main() {
    int i,j,s=0,arr[3][3];
    
    printf("enter the size of the array ");
    scanf("%d",&n);
    printf("enter the elements of the array \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==0||j==0||i==3-1||j==3-1){
                s=s+arr[i][j];
            }
        }
    }
    printf("Sum of all elements of array is %d",s);
    return 0;
}
```
### Sum of all the Elements of rows and coloumns

```
#include <stdio.h>

int main() {
    int i,j,s=0,arr[3][3];
    
    printf("enter the elements of the array \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
            // arr[i][j]=i;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        s=0;
        for(j=0;j<3;j++){
            s=s+arr[i][j];
        }
        printf("Sum of all elements of rows of array is %d \n",s);
    }
    for(i=0;i<3;i++){
        s=0;
        for(j=0;j<3;j++){
            s=s+arr[j][i];
        }
        printf("Sum of all elements of coloumns of array is %d \n",s);
    }
    
    return 0;
}
```

### maxumum elemnt

```
#include <stdio.h>

int main() {
    int i,j,s=0,arr[3][3],max;
    
    printf("enter the elements of the array \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
            // arr[i][j]=i;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    max=arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]>max){
             max=arr[i][j];   
            }
        }
    }
        printf("maximum element in all elements %d\n",max);
    for(i=0;i<3;i++){
        max=arr[i][0];
        for(j=0;j<3;j++){
            if(arr[i][j]>max){
             max=arr[i][j];   
            }
        }
        printf("maximum element in all elements of all rows %d\n",max);
    }
    for(i=0;i<3;i++){
        max=arr[i][0];
        for(j=0;j<3;j++){
            if(arr[j][i]>max){
             max=arr[j][i];   
            }
        }
        printf("maximum element in all elements of all colomns %d\n",max);
    }
    return 0;
}
```
